/*
 * Copyright (c) 2013, 2014 Corvusoft
 */

//System Includes
#include <map>
#include <string>

//Project Includes
#include <corvusoft/restbed/mode>
#include <corvusoft/restbed/settings>

//External Includes
#include <gtest/gtest.h>

//System Namespaces
using std::map;
using std::string;

//Project Namespaces
using restbed::Mode;
using restbed::Settings;

//External Namespaces

TEST( Settings, modify_mode )
{
    Settings settings;
    settings.set_mode( Mode::ASYNCHRONOUS );
    
    EXPECT_EQ( Mode::ASYNCHRONOUS, settings.get_mode( ) );
}
