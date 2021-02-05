//
// Created by Luca Molteni on 05/02/21.
//

#include <stdlib.h>
#include "memory.h"

void *reallocate(void *pointer, size_t oldsize, size_t newSize) {
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }

    void* result = realloc(pointer, newSize);
    if(result == NULL) exit(1);
    return result;
}
