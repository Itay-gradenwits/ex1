#pragma once

#include <stdbool.h>
#include <stdint.h>

typedef enum {
    // DON'T CHANGE THIS VALUE!
    ERROR_SUCCESS = 0,
    ERROR_MEMORY_ELLOCATION_FAIL,
    ERROR_BAD_MATRIX_SIZES,
    ERROR_NULL_POINTER,
    ERORR_BAD_INDEXES
} ErrorCode;

/**
 * @brief Checks if a given error code indicates a success or not.
 *
 * @param[in] code the error code.
 * @return whether the error code indicates a success or not.
 */
bool error_isSuccess(ErrorCode code);

/**
 * @brief gets a textual error message for a given error code.
 *
 * @param[in] code the error code.
 * @return const char* the textual representation of the error code.
 */
const char* error_getErrorMessage(ErrorCode code);