#pragma once

// Enum: EXCEPTION_DISPOSITION
typedef enum EXCEPTION_DISPOSITION {
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
} EXCEPTION_DISPOSITION;

