if get_option('with_test').enabled()
    run_command(['python3', 'tools' / 'generate-runner.py'], check: true)

    test_cpp   = ['unit_runner.cpp']
    test_cases = ['sample']

    foreach cases : test_cases
        test_cpp += ['cases' / 'test_' + cases + '.cpp']
    endforeach

    pizza_cpp = executable('testbed-cpp', test_cpp, include_directories: dir,
        dependencies: [dependency('fossil-test'), app_dep])

    test('fossil testing Cpp', pizza_cpp)
endif
