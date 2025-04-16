#include <spdlog/spdlog.h>

int main()
{
    // We will use spdlog to say hello! 
    // So that you can see that conan works :-)
    spdlog::warn("Hello World from {}!", "Conan & Bazel");
    return EXIT_SUCCESS;
}
