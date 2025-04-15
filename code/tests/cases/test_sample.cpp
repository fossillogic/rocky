/*
 * -----------------------------------------------------------------------------
 * Project: Fossil Logic
 *
 * This file is part of the Fossil Logic project, which aims to develop high-
 * performance, cross-platform applications and libraries. The code contained
 * herein is subject to the terms and conditions defined in the project license.
 *
 * Author: Michael Gene Brockus (Dreamer)
 *
 * Copyright (C) 2024 Fossil Logic. All rights reserved.
 * -----------------------------------------------------------------------------
 */
#include <fossil/test/framework.h>

#include "fossil/code/app.hpp"


// * * * * * * * * * * * * * * * * * * * * * * * *
// * Fossil Logic Test Utilites
// * * * * * * * * * * * * * * * * * * * * * * * *
// Setup steps for things like test fixtures and
// mock objects are set here.
// * * * * * * * * * * * * * * * * * * * * * * * *

// Define the test suite and add test cases
FOSSIL_TEST_SUITE(cpp_sample_suite);
fossil_fstream_t c_string;

// Setup function for the test suite
FOSSIL_SETUP(cpp_sample_suite) {
    // Setup code here
}

// Teardown function for the test suite
FOSSIL_TEARDOWN(cpp_sample_suite) {
    // Teardown code here
}

// * * * * * * * * * * * * * * * * * * * * * * * *
// * Fossil Logic Test Cases
// * * * * * * * * * * * * * * * * * * * * * * * *
// The test cases below are provided as samples, inspired
// by the Meson build system's approach of using test cases
// as samples for library usage.
// * * * * * * * * * * * * * * * * * * * * * * * *

FOSSIL_TEST_CASE(cpp_test_app_name) {
    const char *app_name = FOSSIL_APP_NAME;
    ASSUME_ITS_EQUAL_CSTR("Sample App", app_name);
}

FOSSIL_TEST_CASE(cpp_test_app_version) {
    const char *app_version = FOSSIL_APP_VERSION;
    ASSUME_ITS_EQUAL_CSTR("0.1.0", app_version);
}

// * * * * * * * * * * * * * * * * * * * * * * * *
// * Fossil Logic Test Pool
// * * * * * * * * * * * * * * * * * * * * * * * *

FOSSIL_TEST_GROUP(cpp_sample_tests) {
    FOSSIL_TEST_ADD(cpp_sample_suite, cpp_test_app_name);
    FOSSIL_TEST_ADD(cpp_sample_suite, cpp_test_app_version);

    FOSSIL_TEST_REGISTER(cpp_sample_suite);
}
