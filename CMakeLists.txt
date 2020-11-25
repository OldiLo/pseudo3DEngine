cmake_minimum_required(VERSION 3.8)
set(PROJECT_NAME FPSOnline)

project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -static")

set(SOURCE_FILES src/settings.h
        src/Button.cpp
        src/Button.h
        src/Camera.cpp
        src/Camera.h
        src/Circle2D.h
        src/Circle2D.cpp
        src/ClientUDP.cpp
        src/ClientUDP.h
        src/Idrawable.h
        src/main.cpp
        src/Menu.cpp
        src/Menu.h
        src/MsgType.cpp
        src/MsgType.h
        src/Object2D.cpp
        src/Object2D.h
        src/ObjectType.h
        src/Player.cpp
        src/Player.h
        src/Point2D.cpp
        src/Point2D.h
        src/Poligon2D.cpp
        src/Poligon2D.h
        src/ReliableMsg.cpp
        src/ReliableMsg.h
	src/ResourceManager.cpp
        src/ResourceManager.h
        src/ServerUDP.cpp
        src/ServerUDP.h
        src/Time.cpp
        src/Time.h
        src/UDPConnection.cpp
        src/UDPConnection.h
        src/UDPSocket.cpp
        src/UDPSocket.h
        src/Weapon.cpp
        src/Weapon.h
        src/World.cpp
        src/World.h
        src/Map2D.h
        src/Point3D.h
        src/Point3D.cpp
        src/Bonus.h
        src/Bonus.cpp
        src/Enemy.cpp
        src/Enemy.h
        src/GeneticAlgorithm.cpp
        src/GeneticAlgorithm.h
	src/NeuralNetwork.cpp
        src/NeuralNetwork.h
        src/OptimizedBots.cpp
        src/OptimizedBots.h)


if(${APPLE})
    include_directories(/usr/local/include)
    add_executable(${PROJECT_NAME} ${SOURCE_FILES})

else()

    if (CMAKE_BUILD_TYPE STREQUAL "Release")
        add_executable(${PROJECT_NAME} WIN32 ${SOURCE_FILES})
    else ()
        add_executable(${PROJECT_NAME} ${SOURCE_FILES})
    endif ()

    set(SFML_STATIC_LIBRARIES TRUE)

endif()

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/res/)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(${PROJECT_NAME} sfml-audio sfml-network sfml-graphics sfml-window sfml-system)