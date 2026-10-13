# include <stdio.h>
# include <stdlib.h>
struct myArray {
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int usize) {
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *)malloc(tsize * sizeof(int));
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
};

void setValue(struct myArray *a) {
    for(int i = 0; i < a->used_size;i ++) {
        int n;
        printf("Enter %d Element:",i+1);
        scanf("\n%d",&n);
        a->ptr[i] = n;

    }
};

void showValue(struct myArray *a) {
    printf("Inserted Array are :");
    int *temp = a->ptr;
    for(int i = 0; i < a->used_size; i++) {
        // printf("\n%d",(*a).ptr[i]);
        // printf("\n%d",a->ptr[i]);
        printf("\n%d",*temp);
        temp+=1;
        
    };
}

int main() {
    struct myArray marks;
    createArray(&marks, 10, 4);
    setValue(&marks);
    showValue(&marks);

    return 0;
}
