#pragma once

// Function Definition: SCANF_GETC_FUNC
typedef int (*SCANF_GETC_FUNC)(scanf_state_t* state);

// Function Definition: SCANF_UNGETC_FUNC
typedef int (*SCANF_UNGETC_FUNC)(int character, scanf_state_t* state);

