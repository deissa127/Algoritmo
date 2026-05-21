class vector {
    private:
    int data[1000];
    unsigned int size_, capacity_;
    public:
    vector() {
        size_: 0;
        capacity_: 1000;
    }

    unsigned int size() {
        return size_;
    }

    unsigned int capacity() {
        return capacity_;
    }

    double percent_occupied() {
        if (capacity_ == 0){
            return 0.0;
        }
        return (static_cast<double>(size_)/capacity_) * 100.0;      // static_cast< >( ) - transforma a variável dentro do parenteses em outro tipo somente nesse momento
    }

    bool insert_at(unsigned int index, int value) {
        if (size_ >= capacity_ || index > size_){
            return false;
        }
        if (unsigned int i = size_; i > index; --i){
            data[i] = data [i - 1];
        }
        data[index] = value;
        size_++;
        return true;
    }
    bool remove_at(unsigned int index) {

    }
    int get_at(unsigned int index) {

    }
    void clear() {
        
    }
    void push_back(int value) {

    }
    void push_front(int value) {

    }
    bool pop_back() {

    }
    bool pop_front() {

    }
    int front(){}
    int back(){}
    bool remove(int value) {}
    int find(int value) {

    }

    int count(int value) {

    }

    int sum() {
        int total = 0;
        for (int i = 0; i < size_; i++){
            total = data[i];
        }
        return total

    }
};