// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

//=======================================================================================
// Agog Labs C++ library.
//
// AImageListOS class definition module
//=======================================================================================


//=======================================================================================
// Includes
//=======================================================================================

#include <AgogGUI_OS\AImageListOS.hpp>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commctrl.h>


//=======================================================================================
// AImageListOS Method Definitions
//=======================================================================================

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Common Methods
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//---------------------------------------------------------------------------------------
// Destructor
// Author(s):   Conan Reis
AImageListOS::~AImageListOS()
  {
  }

//---------------------------------------------------------------------------------------
// Author(s):   Conan Reis
void AImageListOS::destroy()
  {
  if (m_handle)
    {
    ImageList_Destroy(m_handle);
    }
  }
