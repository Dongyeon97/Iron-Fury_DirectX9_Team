#pragma once
#include "framework.h"

// Windows 라이브러리
#include <Windows.h>
#include <wrl.h>

// Direct3D 라이브러리
#define DIRECTINPUT_VERSION	0x0800

#include <d3d9.h>
#include <d3dx9.h>
#include <d3dcompiler.h>
#include <dinput.h>

// C++ 라이브러리
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
#include <io.h>
#include <iostream>

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
#pragma comment(lib, "fmod_vc.lib")
#pragma comment(lib, "fmodL_vc.lib")
