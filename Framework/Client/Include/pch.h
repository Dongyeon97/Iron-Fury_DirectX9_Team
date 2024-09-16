#pragma once

#define _CRT_SECURE_NO_WARNINGS 

#include <Windows.h>
#include <wrl.h>

#define DIRECTINPUT_VERSION	0x0800
#include <d3d9.h>
#include <d3dx9.h>
#include <d3dcompiler.h>
#include <dinput.h>

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <memory>
#include <filesystem>
#include <fstream>
#include <random>

#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <crtdbg.h>

#include "Types.h"
#include "Macros.h"
#include "Structs.h"
#include "Funcs.h"
#include "Enums.h"

#include "fmod.h"
#include "fmod.hpp"
#pragma comment(lib, "fmodex_vc.lib")

extern HWND hWnd;

#define _CRTDEBG_MAP_ALLOC
	#ifdef _DEBUG
	#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#define _CRTDBG_MAP_ALLOC
