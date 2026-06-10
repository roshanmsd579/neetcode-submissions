class MyHashSet {
    private:
    static const int SIZE=1000;
    vector <list<int>> bucket;
    int hash(int key){
        return key%SIZE;
    }
public:
    MyHashSet() {
        bucket.resize(SIZE);
    }
    
    void add(int key) {
        int idx = hash(key);
        for (int num:bucket[idx]){
            if(num==key)return;
        }
            bucket[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = hash(key);
        bucket[idx].remove(key);
        
    }
    
    bool contains(int key) {
        int idx = hash(key);
        for(int num:bucket[idx]){
            if(num==key)return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */