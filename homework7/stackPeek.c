#include "my.h"

Vertex* stackPeek(Stack *stack) {
    return stack->vertexStack[stack->size - 1];
}
