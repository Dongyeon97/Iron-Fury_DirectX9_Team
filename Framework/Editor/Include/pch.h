#pragma once

#define EDITOR

// Windows 라이브러리
#include <Windows.h>
#include <wrl.h>

// IMGUI 라이브러리
#include <imgui.h>
#include <imgui_impl_dx9.h>
#include <imgui_impl_win32.h>

// Direct3D 라이브러리
#define DIRECTINPUT_VERSION	0x0800

#include <d3d9.h>
#include <d3dx9.h>
#include <d3dcompiler.h>
#include <dinput.h>

// C++ 라이브러리
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
#include <iostream>
#include <fstream>

// C++17 라이브러리
#include <filesystem>

// C 라이브러리
#include <cassert>
#include <cmath>

// 사용자 정의 헤더 파일
#include "Types.h"
#include "Macros.h"
#include "Structs.h"
#include "Funcs.h"
#include "Enums.h"

// fmod 헤더 파일
#include "fmod.h"
#include "fmod.hpp"
#pragma comment(lib, "fmodex_vc.lib")

#define _CRTDEBG_MAP_ALLOC
#ifdef _DEBUG
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
#endif
