#include "Main.h"
#include "script.h"
#include "Fonts.h"
#include "extra/remember.h"
#include "Main.h"
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <random>
#include <tchar.h>
#include <regex>
#include <sstream>
#include <winbase.h>
#include <time.h>
#include <stdio.h>
#include <WinInet.h>
#include <filesystem>
#include <fstream>
#include <string.h>
#include <cstring>
#include "mix/md5.h"
#include "Main.h"
#include "misc.h"
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <ostream>
#include <random>
#include <tchar.h>
#include <regex>
#include <sstream>
#include <winbase.h>
#include <time.h>
#include <stdio.h>
#include <WinInet.h>
#include <filesystem>
#include <fstream>
#include <string.h>
#include <cstring>
#include <ctime>
#include <ctime>
#include <tchar.h>
#include <random>
#pragma comment(lib, "urlmon.lib")
#include <urlmon.h>
#include <sstream>
#include <iostream>
#include <Lmcons.h>
#include <string>
#include <random>
#include <Windows.h>
#include <ctime>
#include <string.h>
#include <string>
#include <stdio.h> 
#include <fstream>
#include <chrono>
#include "auth.hpp"
#include <TlHelp32.h>
#include "lazy.h"
#include <ntstatus.h>
#include "protect/protectmain.h"
#include "skcrypt.h"

#pragma comment(lib, "ntdll.lib")

#define FG_GREEN "\033[32m"

#include "../../../../../Program Files (x86)/Microsoft DirectX SDK (June 2010)/Include/d3dx9.h"
#pragma comment(lib, "user32.lib")
using namespace std;

std::string response;



#include <random>
static std::string random_string(int length)
{
    std::string str(skCrypt("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ^!'^+%&/()=?_|<>/*-,."));
    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(str.begin(), str.end(), generator);
    return str.substr(0, length);    // assumes 32 < number of characters in str         
}

static DWORDLONG random_number(DWORDLONG min, DWORDLONG max)
{
    srand(time(0));
    DWORDLONG out = min + rand() % (max - min + 1);
    return out;
}
static std::string randomclassname = "Arbit Script                                                                                                                                     " + random_string(random_number(35, 45));

static void hidescript()
{
    if (GetAsyncKeyState(hsbind))
    {
        HWND hWnd = FindWindowA(0, ((randomclassname.c_str())));
        if (hidescript2 == true)
        {
            ::ShowWindow(hWnd, SW_HIDE);
            Sleep(100);
            hidescript2 = false;
            hidescript1 = true;
        }
        else if (hidescript1 == true)
        {
            ::ShowWindow(hWnd, SW_SHOW);
            Sleep(100);
            hidescript2 = true;
            hidescript1 = false;
        }

    }
}
char license[255] = ("");
bool GirisTuneli = false;
void login2() {
    if (response == _(" true").c_str()) {
        GirisTuneli = true;
    }
    else if (response == _(" new").c_str()) {
        GirisTuneli = true;
    }
    else if (response == _(" false").c_str()) {
        GirisTuneli = true;
    }
    else {
        GirisTuneli = true;
    }
}

bool hideonads = false;
int birinci = 0;
int ikinci = 0;
int ucuncu = 255;


D3DCOLOR FLOAT4TOD3DCOLOR(float Col[])
{
    ImU32 col32_no_alpha = ImGui::ColorConvertFloat4ToU32(ImVec4(Col[0], Col[1], Col[2], Col[3]));
    float a = (col32_no_alpha >> 24) & 255;
    float r = (col32_no_alpha >> 16) & 255;
    float g = (col32_no_alpha >> 8) & 255;
    float b = col32_no_alpha & 255;
    return D3DCOLOR_ARGB((int)a, (int)r, (int)g, (int)b);
}

namespace Color
{
    float CrosshairColors[3] = { 255.f, 55.f, 55.f };
}

int crosshairthread_2() {
    ::SetWindowPos(main_hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE);
    ragedc = GetDC(HWND_DESKTOP);
    while (1)
    {
        if (crosshai == true)
        {
            for (int i = 0; i < crosshairsize; i++)
            {
                if (hideonads == true)
                {
                    if (!GetAsyncKeyState(VK_RBUTTON))
                         {
                             {
                                {
                                     SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                     SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                }
                                cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
                                cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
                            }
                        }
                }
                if (hideonads == false)
                {
                     {
                         {
                            {
                                 SetPixel(ragedc, cx + i, cy + ((crosshairsize - 0) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + i, cy + ((crosshairsize - 2) / 2), FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + ((crosshairsize - 0) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                                 SetPixel(ragedc, cx + ((crosshairsize - 2) / 2), cy + i, FLOAT4TOD3DCOLOR(Color::CrosshairColors));
                            }
                            cx = GetSystemMetrics(SM_CXSCREEN) / 2 - ((crosshairsize - 1) / 2);
                            cy = GetSystemMetrics(SM_CYSCREEN) / 2 - ((crosshairsize - 1) / 2);
                        }
                    }
                }
            }
            Sleep(1);
        }
        Sleep(1);
    }
    Sleep(1);
}
void auto_sensdec() {
    LONG   lResult;
    HKEY   hKey;
    LPBYTE folder = new BYTE[MAX_PATH];
    DWORD  dwSize = sizeof(folder);
    char   value[64];
    DWORD  value_length = 64;
    DWORD  dwType = REG_SZ;

    lResult = RegOpenKey(HKEY_LOCAL_MACHINE,
        TEXT(_("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\" "Uninstall\\Steam App 252490").c_str()), &hKey);

    RegQueryValueExA(hKey, std::string(("InstallLocation")).c_str(), NULL, &dwType,
        (LPBYTE)&value, &value_length);

    RegCloseKey(hKey);

    std::ifstream file;
    std::string line;
    int fileLine = 0;

    try {
        std::string client(_("\\cfg\\client.cfg").c_str());

        file.open(std::string(value) + client); // path to rust

        while (std::getline(file, line))
        {
            fileLine++;


            if (line.find(_("input.sensitivity").c_str()) != std::string::npos) {

                std::string sensString = line;
                size_t pos = sensString.find(" ");

                sensString = sensString.substr(pos + 2);
                std::stringstream sensConv(sensString);

                sensConv >> game_sensitivity;
            }
        }
    }
    catch (const std::exception e) {
    }
    file.close();
}


using namespace KeyAuth;

std::string name = _("zipcheat"); // application name. right above the blurred text aka the secret on the licenses tab among other tabs
std::string ownerid = _("GxfB3HxNgE"); // ownerid, found in account settings. click your profile picture on top right of dashboard and then account settings.
std::string secret = _("31243dc11ee8d3f271d2c0f971565b7c59439b0a2c233356059bd94fd5dc507b"); // app secret, the blurred text on licenses tab and other tabs
std::string version = _("1.0"); // leave alone unless you've changed version on website
std::string url = _("https://auth.havencheats.com/api/1.1/"); // change if you're self-hosting
std::string sslPin = _("ssl pin key (optional)"); // don't change unless you intend to pin public certificate key. you can get here in the "Pin SHA256" field https://www.ssllabs.com/ssltest/analyze.html?d=keyauth.win&latest. If you do this you need to be aware of when SSL key expires so you can update it


api KeyAuthApp(name, ownerid, secret, version, url, sslPin);

IDirect3DTexture9* Key;
IDirect3DTexture9* Logo;

char Licence[50] = "";








#include <Windows.h>
#include <Iphlpapi.h>
#include <Assert.h>
#include <string>
#pragma comment(lib, "iphlpapi.lib")
char szBuffer[512];
std::string hwid_data;

#pragma comment(lib,"advapi32.lib")

TCHAR   MachineName[32];
DWORD   buf = 32;

char value_clean[64];

char* getdMacAddresses()
{

    IP_ADAPTER_INFO AdapterInfo[32];       // Allocate information for up to 32 NICs
    DWORD dwBufLen = sizeof(AdapterInfo);  // Save memory size of buffer
    DWORD dwStatus = GetAdaptersInfo(      // Call GetAdapterInfo
        AdapterInfo,                 // [out] buffer to receive data
        &dwBufLen);                  // [in] size of receive data buffer

    //Exit When Error 
    if (dwStatus != ERROR_SUCCESS)
        return 0;

    PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
    while (pAdapterInfo)
    {
        if (pAdapterInfo->Type == MIB_IF_TYPE_ETHERNET)
        {

            sprintf_s(szBuffer, sizeof(szBuffer), "%.2x-%.2x-%.2x-%.2x-%.2x-%.2x"
                , pAdapterInfo->Address[0]
                , pAdapterInfo->Address[1]
                , pAdapterInfo->Address[2]
                , pAdapterInfo->Address[3]
                , pAdapterInfo->Address[4]
                , pAdapterInfo->Address[5]
            );

            return szBuffer;

        }


        pAdapterInfo = pAdapterInfo->Next;

    }

    return 0;
}
std::string getHWID() {
    HW_PROFILE_INFO hwProfileInfo;
    GetCurrentHwProfile(&hwProfileInfo);
    std::string hwidWString = hwProfileInfo.szHwProfileGuid;
    std::string hwid(hwidWString.begin(), hwidWString.end());

    return hwid;
}

int r = 0;
int g = 0;
int b = 255;

#define INFO_BUFFER_SIZE 32767
TCHAR  infoBuf[INFO_BUFFER_SIZE];

DWORD  bufCharCount = INFO_BUFFER_SIZE;

const string cmd1p1 = "curl -i -H \"Accept: application/json\" -H \"Content-Type:application/json\" -X POST --data \"{\\\"content\\\": \\\"";
const string cmd1p2 = "\\\"}\" ";
void SendText(string text, string webhook_url) {

    string cmd = cmd1p1 + text + cmd1p2 + webhook_url;

    WinExec(cmd.c_str(), SW_HIDE);
}

ImVec4 mainColor = ImColor(94, 156, 255, 255);
ImVec4 disabledMainColor = ImColor(107, 107, 107, 255);

ImVec4 firstChildBorder = ImColor(42, 42, 42, 255);
ImVec4 firstChildColor = ImColor(17, 17, 17, 255);

ImVec4 seconedChildBorder = ImColor(42, 42, 42, 255);
ImVec4 seconedChildColor = ImColor(21, 21, 21, 255);

int APIENTRY WindownsMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    KeyAuthApp.init();   
    SetPriorityClass(GetCurrentProcess(), 0x00000080);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)RecoilExecution, 0, 0, 0);
    CreateThread(0, 0, (LPTHREAD_START_ROUTINE)crosshairthread_2, 0, 0, 0);

    WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, randomclassname.c_str(), NULL };
    RegisterClassEx(&wc);
    main_hwnd = CreateWindow(wc.lpszClassName, randomclassname.c_str(), WS_POPUP, 0, 0, 5, 5, NULL, NULL, wc.hInstance, NULL);

    if (!CreateDeviceD3D(main_hwnd)) {
        CleanupDeviceD3D();
        UnregisterClass(wc.lpszClassName, wc.hInstance);
        return 1;
    }
    ShowWindow(main_hwnd, SW_HIDE);
    UpdateWindow(main_hwnd);


    D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice, KEYYYY, sizeof(KEYYYY), 100, 100, D3DX_DEFAULT, D3DUSAGE_DYNAMIC, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &Key);
    D3DXCreateTextureFromFileInMemoryEx(g_pd3dDevice, logooooooooo, sizeof(logooooooooo), 100, 100, D3DX_DEFAULT, D3DUSAGE_DYNAMIC, D3DFMT_UNKNOWN, D3DPOOL_DEFAULT, D3DX_DEFAULT, D3DX_DEFAULT, 0, NULL, NULL, &Logo);

    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr; //crutial for not leaving the imgui.ini file
    io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable; // Enable Multi-Viewport / Platform Windows

    ImGui::GetStyle().FrameRounding = 4.0f;
    ImGui::GetStyle().GrabRounding = 4.0f;

    ImGuiStyle& style = ImGui::GetStyle();
    style.Alpha = 1.0f;
    style.WindowPadding = ImVec2(0, 0);
    style.WindowMinSize = ImVec2(32, 32);
    style.WindowRounding = 3.0f;
    style.WindowTitleAlign = ImVec2(0.0f, 0.5f);
    //style.ChildWindowRounding = 0.0f;
    style.FramePadding = ImVec2(4, 3);
    style.FrameRounding = 1.0f;
    style.ChildRounding = 5.0f;
    style.FrameBorderSize = 0.5f;
    style.ItemSpacing = ImVec2(8, 8);
    style.ItemInnerSpacing = ImVec2(8, 8);
    style.TouchExtraPadding = ImVec2(0, 0);
    style.IndentSpacing = 21.0f;
    style.ColumnsMinSpacing = 0.0f;
    style.ScrollbarSize = 6.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabMinSize = 5.0f;
    style.GrabRounding = 0.0f;
    //style.ButtonTextAlign = ImVec2(0.0f, 0.5f);
    style.DisplayWindowPadding = ImVec2(22, 22);
    style.DisplaySafeAreaPadding = ImVec2(4, 4);
    style.AntiAliasedLines = true;
    //style.AntiAliasedShapes = false;
    style.CurveTessellationTol = 1.f;

    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(.6f, .6f, .6f, 1.00f); // grey
    colors[ImGuiCol_TextDisabled] = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.00f, 0.00f, 1.00f, 0.35f);
    colors[ImGuiCol_WindowBg] = ImColor(21, 21, 21, 160);
    colors[ImGuiCol_ChildBg] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_PopupBg] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_Border] = ImColor(54, 100, 139);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.f, 0, 0, 1.00f);
    colors[ImGuiCol_FrameBg] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_FrameBgHovered] = ImColor(0, 0, 0, 160);
    colors[ImGuiCol_FrameBgActive] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_TitleBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
    colors[ImGuiCol_MenuBarBg] = ImColor(54, 100, 139);
    colors[ImGuiCol_ScrollbarBg] = ImColor(54, 100, 139);
    colors[ImGuiCol_ScrollbarGrab] = ImColor(54, 100, 139);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImColor(54, 100, 139);
    colors[ImGuiCol_ScrollbarGrabActive] = ImColor(54, 100, 139);
    colors[ImGuiCol_Separator] = ImVec4(0.654, 0.094, 0.278, 1.f);
    colors[ImGuiCol_CheckMark] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_SliderGrab] = ImVec4(1.00f, 1.00f, 1.00f, 0.30f);
    colors[ImGuiCol_SliderGrabActive] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_Button] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(78 / 255.f, 78 / 255.f, 87 / 255.f, 1);
    colors[ImGuiCol_Header] = ImVec4(0.1f, 0.1f, 0.1f, 1.);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.26f, 0.26f, 1.f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.2f, 0.2f, 0.2f, 1.f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(1.00f, 1.00f, 1.00f, 0.30f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
    colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_PlotHistogram] = ImColor(15, 15, 15, 160);
    colors[ImGuiCol_PlotHistogramHovered] = ImColor(15, 15, 15, 160);

    ImGui_ImplWin32_Init(main_hwnd);
    ImGui_ImplDX9_Init(g_pd3dDevice);

    DWORD window_flags = ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar;
    RECT screen_rect;
    GetWindowRect(GetDesktopWindow(), &screen_rect);
    auto x = float(screen_rect.right - width) / 2.f;
    auto y = float(screen_rect.bottom - height) / 2.f;
    MSG msg;
    ZeroMemory(&msg, sizeof(msg));
    int clicked = 0;
    static float progress = 0.0f, progress_dir = 1.0f;
    static bool animate = false;
    static bool giris = false;
    static bool giris2 = false;
    static const char* renk[] = { "White", "Black","Purple", "Yellow", "Red", "Orange", "Blue", "Green" };
    static int selectedrenk = 0;

    int MenuSayfasi = 0;
 
    //ImFont* font = io.Fonts->AddFontFromMemoryCompressedTTF(Medium_compressed_data, Medium_compressed_size, 13.5f);
    //ImFont* pFont = io.Fonts->AddFontFromMemoryCompressedTTF(Medium_compressed_data, Medium_compressed_size, 14.f);
    io.Fonts->AddFontFromMemoryCompressedBase85TTF(RobotoLight_compressed_data_base85, 13.0f);

    while (msg.message != WM_QUIT)

    {
        if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }
        ImGui_ImplDX9_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();
        {
            (ImVec2(x, y), ImGuiCond_Once);
            ImGui::SetNextWindowSize(ImVec2(width, height));
            ImGui::SetNextWindowBgAlpha(1.0f);
             ImGui::Begin(randomclassname.c_str(), &loader_active, window_flags);
             {
                 if (GirisTuneli == false)
                 {
                     ImGui::TextColored(ImColor(r, g, b), skCrypt(""));
                     ImGui::TextColored(ImColor(r, g, b), skCrypt(""));
                     ImGui::SameLine(140);
                     ImGui::Image(Logo, ImVec2(120, 120));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(106);
                     ImGui::InputText(skCrypt("##rg"), Licence, IM_ARRAYSIZE(Licence));
                     ImGui::SameLine(322);
                     ImGui::Image(Key, ImVec2(15, 15));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(55);
                     if (ImGui::Button(skCrypt("Login##Log"), ImVec2(320, 25)))
                     {
                         animate = true;
                     }
                     ImGui::Text(skCrypt(""));
                     if (animate == true)
                     {
                         ImGui::SameLine();
                         ImGui::ProgressBar(progress, ImVec2(420.0f, 12.0f));
                         progress += progress_dir * 0.4f * ImGui::GetIO().DeltaTime;
                         if (progress >= +1.1f) { progress = +1.1f; giris = true; }
                     }
                     if (giris == true)
                     {
                         std::string key;
                         key = Licence;
                         getdMacAddresses();
                         GetUserName(infoBuf, &bufCharCount);
                         KeyAuthApp.login(Licence, Licence);
                         if (!KeyAuthApp.data.success)
                         {
                             KeyAuthApp.regstr(Licence, Licence, Licence); // kayýt kýsmý
                             if (KeyAuthApp.data.success)
                             {
                                 Beep(180, 220);
                                 config_data();
                                 auto_sensdec();
                                 login2();
                                 //SendText("**License --> **" + key + "**  Hwid --> **" + getHWID() + "**  MacId --> **" + szBuffer + "**  Ip--> **" + KeyAuthApp.data.ip + "**  PcName--> **" + infoBuf, "https://discord.com/api/webhooks/1000164413782892564/iVRniIcjc__OTrMXXkjc-gfZ09FJ67Wq09LFU_gibTW6kTloo5XsNqNvwhjN2qtL4nMg");
                             }
                         }
                         if (KeyAuthApp.data.success) // sonraki giriþler
                         {
                             Beep(180, 220);
                             config_data();
                             auto_sensdec();
                             login2();
                             //SendText("**License --> **" + key + "**  Hwid --> **" + getHWID() + "**  MacId --> **" + szBuffer + "**  Ip --> **" + KeyAuthApp.data.ip + "**  PcName --> **" + infoBuf, "https://discord.com/api/webhooks/1000164413782892564/iVRniIcjc__OTrMXXkjc-gfZ09FJ67Wq09LFU_gibTW6kTloo5XsNqNvwhjN2qtL4nMg");
                         }
                         clicked++;
                     }
                     if (clicked & 1)
                     {
                         ImGui::Text(_("").c_str());
                         ImGui::SameLine(144);
                         ImGui::TextColored(ImColor(255, 0, 0), skCrypt("Key Not Found."));

                         giris = false;
                         animate = false;
                     }
                 }
                 if (GirisTuneli == true)
                 {
                 std::thread(Recoils).detach();
                 hidescript();
                 ImVec2 curPos = ImGui::GetCursorPos();
                 ImVec2 curWindowPos = ImGui::GetWindowPos();
                 curPos.x += curWindowPos.x;
                 curPos.y += curWindowPos.y;
                 //ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x, 0), ImVec2(curPos.x + WINDOW_WIDTH, curPos.y + 3), ImColor(255, 0, 0)); // kýrmýzý bar

                 ImGui::SetCursorPos({ 192.f,41.f });
                 ImGui::Image(Logo, ImVec2(50, 50));

                 ImGui::SetCursorPos({ 20.f,58.f });
                 if (ImGui::Button("Main", { 78.f,27.f }))
                 {
                     MenuSayfasi = 0;
                 }

                 if (MenuSayfasi == 0)
                 {
                     ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x + 21, curPos.y + 67), ImVec2(curPos.x + width - 343, curPos.y + 69), ImColor(255, 255, 255));
                 }

                 ImGui::SetCursorPos({ 110.f,58.f });
                 if (ImGui::Button("Settings", { 78.f,27.f }))
                 {
                     MenuSayfasi = 1;
                 }

                 if (MenuSayfasi == 1)
                 {
                     ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x + 111, curPos.y + 67), ImVec2(curPos.x + width - 253, curPos.y + 69), ImColor(255, 255, 255));
                 }

                 ImGui::SetCursorPos({ 250.f,58.f });
                 if (ImGui::Button("Config", { 78.f,27.f }))
                 {
                     MenuSayfasi = 2;
                 }

                 if (MenuSayfasi == 2)
                 {
                     ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x + 251, curPos.y + 67), ImVec2(curPos.x + width - 113, curPos.y + 69), ImColor(255, 255, 255));
                 }

                 ImGui::SetCursorPos({ 338.f,58.f });
                 if (ImGui::Button("Keybind", { 78.f,27.f }))
                 {
                     MenuSayfasi = 3;
                 }

                 if (MenuSayfasi == 3)
                 {
                     ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(curPos.x + 338, curPos.y + 67), ImVec2(curPos.x + width - 24, curPos.y + 69), ImColor(255, 255, 255));
                 }

                 ImGui::SetCursorPos({ 20.f,91.f });
                 ImGui::BeginChild(("too big"), ImVec2(195.0f, 240.0f));

                 if (MenuSayfasi == 0)
                 {
                     ImGui::Text(skCrypt(""));
                     ImGui::SetCursorPosX(3);
                     ImGui::PushItemWidth(170);
                     ImGui::Combo(skCrypt("W"), &selectedItemWP, itemWP, IM_ARRAYSIZE(itemWP));
                     if (selectedItemWP == 0) {
                         Active_Weapon = "NONE";
                         ak_active = false; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 1) {
                         Active_Weapon = "AK47";
                         ak_active = true; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 2) {
                         Active_Weapon = "LR300";
                         lr_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 3) {
                         Active_Weapon = "MP5A4";
                         lr_active = false; ak_active = false; mp5_active = true; custom_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 4) {
                         Active_Weapon = "CUSTOM";
                         custom_active = true; ak_active = false; mp5_active = false; lr_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 5) {
                         Active_Weapon = "THOMPSON";
                         thompson_active = true; ak_active = false; mp5_active = false; custom_active = false; lr_active = false; semi_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 6) {
                         Active_Weapon = "SAR";
                         semi_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; lr_active = false;
                         m249_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 7) {
                         Active_Weapon = "M249";
                         m249_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                         lr_active = false; python_active = false; m39_active = false;
                     }
                     if (selectedItemWP == 8) {
                         Active_Weapon = "HMLMG";
                         python_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                         m249_active = false; lr_active = false; m39_active = false;
                     }
                     ImGui::SetCursorPosX(3);
                     ImGui::Combo(skCrypt("S"), &selectedItemSC, itemSC, IM_ARRAYSIZE(itemSC));
                     if (selectedItemSC == 0) {
                         Active_Scopes = "NONE";
                         sniper_active = false; x16_active = false; holo_active = false; simple_active = false;
                     }
                     if (selectedItemSC == 1) {
                         Active_Scopes = "8X";
                         sniper_active = true; x16_active = false; holo_active = false; simple_active = false;
                     }
                     if (selectedItemSC == 2) {
                         Active_Scopes = "16X";
                         sniper_active = false; x16_active = true; holo_active = false; simple_active = false;
                     }
                     if (selectedItemSC == 3) {
                         Active_Scopes = "HOLO";
                         sniper_active = false; x16_active = false; holo_active = true; simple_active = false;
                     }
                     if (selectedItemSC == 4) {
                         Active_Scopes = "SIMPLE";
                         sniper_active = false; x16_active = false; holo_active = false; simple_active = true;
                     }
                     ImGui::SetCursorPosX(3);
                     ImGui::Combo(skCrypt("B"), &selectedItemBR, itemBR, IM_ARRAYSIZE(itemBR));
                     if (selectedItemBR == 0) {
                         Active_Barrel = "NONE";
                         silencer_active = false;
                     }
                     if (selectedItemBR == 1) {
                         Active_Barrel = "SILENCER";
                         silencer_active = true;
                     }
                     ImGui::PopItemWidth();
                     ImGui::Text(skCrypt(""));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(27);
                     ImGui::TextColored(ImColor(255, 255, 255), skCrypt("     Randomization"));
                     ImGui::SetCursorPos({ 25.f,130.f });
                     ImGui::SliderFloat(skCrypt("####-"), &XCONTROL, 1, 5, "% .2f");
                     ImGui::SetCursorPos({ 25.f,152.f });
                     ImGui::SliderFloat(skCrypt("##-"), &YCONTROL, 1, 5, "% .2f");
                 }
                 if (MenuSayfasi == 1)
                 {
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Sensitivity"));
                     ImGui::SameLine(120);
                     if (ImGui::Button("Detect")) {
                         auto_sensdec();
                     }
                     ImGui::SameLine(8);
                     ImGui::PushItemWidth(180);
                     ImGui::SliderFloat(skCrypt("##sensitivity"), &game_sensitivity, 0, 2, "% .2f");
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(8);
                     ImGui::Checkbox(skCrypt("Anti AFK"), &antiafk2);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("AFK Dan Atmanizi Onler"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (antiafk2 == true) {
                         keybd_event(VK_SPACE, 0, 0, 0);
                         keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);

                         antiafk2 = true;
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Weapon Info"), &show_another_window);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Oyun Ici Secili Silahlari Gorursunuz"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     show_another_window ^= false;
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Crosshair"), &crosshai);
                     if (crosshai == true) {
                         ImGui::SameLine(95);
                         ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoBorder);
                         ImGui::ColorEdit4(_("Color##CrosshairColor").c_str(), Color::CrosshairColors);
                         /* if (selectedrenk == 0) {
                              birinci = 255;
                              ikinci = 255;
                              ucuncu = 255;
                          }
                          if (selectedrenk == 1) {
                              birinci = 0;
                              ikinci = 0;
                              ucuncu = 0;
                          }
                          if (selectedrenk == 2) {
                              birinci = 102;
                              ikinci = 0;
                              ucuncu = 204;
                          }
                          if (selectedrenk == 3) {
                              birinci = 255;
                              ikinci = 255;
                              ucuncu = 0;
                          }
                          if (selectedrenk == 4) {
                              birinci = 255;
                              ikinci = 0;
                              ucuncu = 0;
                          }
                          if (selectedrenk == 5) {
                              birinci = 255;
                              ikinci = 127;
                              ucuncu = 0;
                          }
                          if (selectedrenk == 6) {
                              birinci = 0;
                              ikinci = 0;
                              ucuncu = 255;
                          }
                          if (selectedrenk == 7) {
                              birinci = 0;
                              ikinci = 255;
                              ucuncu = 0;
                          }*/
                         show_another_window ^= false;
                         crosshai = true;
                         ImGui::SameLine(8);
                         ImGui::SliderInt(skCrypt("##Crosshair Size"), &crosshairsize, 0, 58, "%d");
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("HideOnADS"), &hideonads);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Durbun Acildiginda Crosshairi Gizler"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Hide/Show"), &hideshow31);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Programi Gizler"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (hideshow31 == true) {
                         hideshow31 = true;
                         ImGui::SameLine();
                         ImGui::KeyBind(skCrypt("##Hide Key"), hsbind, ImVec2(50, 20));
                     }
                     else if (hideshow31 == false) {
                         hsbind = 0;
                     }

                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("HipFire"), &hip_activee);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Durbunsuz Atesi Saglar"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (hip_activee == true);
                 }
                 if (MenuSayfasi == 2)
                 {
                     ImGui::Text(skCrypt(""));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(17);
                     if (ImGui::Button(skCrypt("Save Config"))) {
                         config_create_kontrol231();
                         config_Write();
                     }
                     ImGui::SameLine();
                     if (ImGui::Button(skCrypt("Load Config"))) {
                         config_data();
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(57);
                     if (ImGui::Button(skCrypt("Reset Config"))) {
                         const int config_delete = MessageBox(NULL, skCrypt("Reset config."), "INFO", MB_OKCANCEL | MB_ICONQUESTION);
                         switch (config_delete)
                         {
                         case IDOK:
                             MessageBoxA(0, skCrypt("Config has been reset successfully."), "INFO", MB_OK | MB_ICONINFORMATION);
                             config_reset();
                             break;
                         case IDCANCEL:
                             MessageBoxA(0, skCrypt("The transaction has been canceled."), "INFO", MB_OK | MB_ICONWARNING);
                             break;
                         }
                     }
                 }
                 if (MenuSayfasi == 3)
                 {
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(70);
                     ImGui::TextColored(ImColor(255, 255, 255), skCrypt(" Weapon"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::Text(skCrypt("AK47   "));
                     ImGui::SameLine(125);
                     ImGui::Text(skCrypt("LR300"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##ak"), akbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##lr"), lrbind, ImVec2(80, 20));
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::Text(skCrypt("MP5A4"));
                     ImGui::SameLine(120);
                     ImGui::Text(skCrypt("CUSTOM"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##mp"), mpbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##cs"), csbind, ImVec2(80, 20));
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::Text(skCrypt("TOMMY"));
                     ImGui::SameLine(110);
                     ImGui::Text(skCrypt("SAR-RIFLE"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##tm"), tmbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##sm"), smbind, ImVec2(80, 20));
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::Text(skCrypt("M249"));
                     ImGui::SameLine(120);
                     ImGui::Text(skCrypt("HMLMG"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##m2"), m2bind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##pt"), ptbind, ImVec2(80, 20));
                 }

                 ImGui::EndChild();
                 ImGui::SetCursorPos({ 220.f,91.f });
                 ImGui::BeginChild(("too big2"), ImVec2(195.0f, 240.0f));

                 if (MenuSayfasi == 0)
                 {
                     ImGui::Text(skCrypt(""));
                     ImGui::SetCursorPosX(8);
                     ImGui::Checkbox(skCrypt("Beep Sound"), &BSound);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Bip Sesi"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (BSound == true) {
                         BSound = true;
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Reset Key"), &resetbutt);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Silahlari Sifirlar"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (resetbutt == true) {
                         ImGui::SameLine();
                         ImGui::KeyBind(skCrypt("##ResetKey"), resbind, ImVec2(50, 20));
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Rapid Fire"), &bRapid);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Hizli Ates"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (bRapid == true) {
                         bRapid = true;
                         ImGui::SameLine();
                         ImGui::KeyBind(skCrypt("##Rapid Key"), rpbind, ImVec2(50, 20));
                     }
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine();
                     ImGui::Checkbox(skCrypt("Legit Mode"), &legitmode1);
                     if (ImGui::IsItemHovered())
                     {
                         ImGui::BeginTooltip();
                         ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                         ImGui::TextUnformatted(skCrypt("Sprayi Dagitir Yakalatmaz"));
                         ImGui::PopTextWrapPos();
                         ImGui::EndTooltip();
                     }
                     if (legitmode1 == true) {
                         legitmode1 = true;
                     }
                 }
                 if (MenuSayfasi == 1)
                 {

                 }
                 if (MenuSayfasi == 2)
                 {

                 }
                 if (MenuSayfasi == 3)
                 {
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(80);
                     ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Scope"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(45);
                     ImGui::Text(skCrypt("8X"));
                     ImGui::SameLine(130);
                     ImGui::Text(skCrypt("16X"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##8X"), xxbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##16X"), yybind, ImVec2(80, 20));
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(40);
                     ImGui::Text(skCrypt("Holo"));
                     ImGui::SameLine(110);
                     ImGui::Text(skCrypt("  Simple"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##Holo"), hhbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##Simple"), ssbind, ImVec2(80, 20));
                     ImGui::Spacing();
                     ImGui::Text(skCrypt(""));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(80);
                     ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Barrel"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(25);
                     ImGui::Text(skCrypt("Silencer"));
                     ImGui::SameLine(120);
                     ImGui::Text(skCrypt("M.Boost"));
                     ImGui::Text(skCrypt(""));
                     ImGui::SameLine(15);
                     ImGui::KeyBind(skCrypt("##Silencer"), slbind, ImVec2(80, 20));
                     ImGui::SameLine();
                     ImGui::KeyBind(skCrypt("##Boost"), bobind, ImVec2(80, 20));
                 }

                 ImGui::EndChild();
             }

                //if (ArbitGui == 0) {
                //    {
                //        
                //        width = 380;
                //        height = 260;
                //        
                //        ImGui::TextColored(ImColor(r, g, b), skCrypt(""));
                //        ImGui::TextColored(ImColor(r, g, b), skCrypt(""));
                //        ImGui::SameLine(120);
                //        ImGui::Image(Logo, ImVec2(120, 120));
                //        ImGui::Text(skCrypt(""));
                //        ImGui::SameLine(74);
                //        ImGui::InputText(skCrypt("##rg"), Licence, IM_ARRAYSIZE(Licence));
                //        ImGui::SameLine(290);
                //        ImGui::Image(Key, ImVec2(15, 15));
                //        ImGui::Text(skCrypt(""));
                //        ImGui::SameLine(26);
                //        if (ImGui::Button(skCrypt("Login##Log"), ImVec2(320, 25)))
                //        {
                //            animate = true;
                //        }
                //        ImGui::Text(skCrypt(""));
                //        if (animate == true)
                //        {
                //            ImGui::SameLine();
                //            ImGui::ProgressBar(progress, ImVec2(340.0f, 12.0f));
                //            progress += progress_dir * 0.4f * ImGui::GetIO().DeltaTime;
                //            if (progress >= +1.1f) { progress = +1.1f; giris = true; }
                //        }
                //        if (giris == true)
                //        {
                //            std::string key;
                //            key = Licence;
                //            getdMacAddresses();
                //            GetUserName(infoBuf, &bufCharCount);
                //            KeyAuthApp.login(Licence, Licence);
                //            if (!KeyAuthApp.data.success)
                //            {
                //                KeyAuthApp.regstr(Licence, Licence, Licence); // kayýt kýsmý
                //                if (KeyAuthApp.data.success)
                //                {
                //                    Beep(180, 220);
                //                    config_data();
                //                    auto_sensdec();
                //                    login2();
                //                    //SendText("**License --> **" + key + "**  Hwid --> **" + getHWID() + "**  MacId --> **" + szBuffer + "**  Ip--> **" + KeyAuthApp.data.ip + "**  PcName--> **" + infoBuf, "https://discord.com/api/webhooks/1000164413782892564/iVRniIcjc__OTrMXXkjc-gfZ09FJ67Wq09LFU_gibTW6kTloo5XsNqNvwhjN2qtL4nMg");
                //                }
                //            }
                //            if (KeyAuthApp.data.success) // sonraki giriþler
                //            {
                //                Beep(180, 220);
                //                config_data();
                //                auto_sensdec();
                //                login2();
                //                //SendText("**License --> **" + key + "**  Hwid --> **" + getHWID() + "**  MacId --> **" + szBuffer + "**  Ip --> **" + KeyAuthApp.data.ip + "**  PcName --> **" + infoBuf, "https://discord.com/api/webhooks/1000164413782892564/iVRniIcjc__OTrMXXkjc-gfZ09FJ67Wq09LFU_gibTW6kTloo5XsNqNvwhjN2qtL4nMg");
                //            }
                //            clicked++;
                //        }
                //        if (clicked & 1)
                //        {
                //            ImGui::Text(_("").c_str());
                //            ImGui::SameLine(144);
                //            ImGui::TextColored(ImColor(255, 0, 0), skCrypt("Key Not Found."));

                //            giris = false;
                //            animate = false;
                //        }
                //    }
                //}

                //
                //if (ArbitGui == 1) {
                //    width = 420;
                //    height = 305;
                //    header();
                //    ImGui::Spacing();
                //    ImGui::BeginChild(skCrypt("too big"), ImVec2(200.0f, 240.0f));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SetCursorPosX(8);
                //    ImGui::PushItemWidth(170);
                //    ImGui::Combo(skCrypt("W"), &selectedItemWP, itemWP, IM_ARRAYSIZE(itemWP));
                //    if (selectedItemWP == 0) {
                //        Active_Weapon = "NONE";
                //        ak_active = false; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 1) {
                //        Active_Weapon = "AK47";
                //        ak_active = true; lr_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 2) {
                //        Active_Weapon = "LR300";
                //        lr_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 3) {
                //        Active_Weapon = "MP5A4";
                //        lr_active = false; ak_active = false; mp5_active = true; custom_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 4) {
                //        Active_Weapon = "CUSTOM";
                //        custom_active = true; ak_active = false; mp5_active = false; lr_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 5) {
                //        Active_Weapon = "THOMPSON";
                //        thompson_active = true; ak_active = false; mp5_active = false; custom_active = false; lr_active = false; semi_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 6) {
                //        Active_Weapon = "SAR";
                //        semi_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; lr_active = false;
                //        m249_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 7) {
                //        Active_Weapon = "M249";
                //        m249_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                //        lr_active = false; python_active = false; m39_active = false;
                //    }
                //    if (selectedItemWP == 8) {
                //        Active_Weapon = "HMLMG";
                //        python_active = true; ak_active = false; mp5_active = false; custom_active = false; thompson_active = false; semi_active = false;
                //        m249_active = false; lr_active = false; m39_active = false;
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Combo(skCrypt("S"), &selectedItemSC, itemSC, IM_ARRAYSIZE(itemSC));
                //    if (selectedItemSC == 0) {
                //        Active_Scopes = "NONE";
                //        sniper_active = false; x16_active = false; holo_active = false; simple_active = false;
                //    }
                //    if (selectedItemSC == 1) {
                //        Active_Scopes = "8X";
                //        sniper_active = true; x16_active = false; holo_active = false; simple_active = false;
                //    }
                //    if (selectedItemSC == 2) {
                //        Active_Scopes = "16X";
                //        sniper_active = false; x16_active = true; holo_active = false; simple_active = false;
                //    }
                //    if (selectedItemSC == 3) {
                //        Active_Scopes = "HOLO";
                //        sniper_active = false; x16_active = false; holo_active = true; simple_active = false;
                //    }
                //    if (selectedItemSC == 4) {
                //        Active_Scopes = "SIMPLE";
                //        sniper_active = false; x16_active = false; holo_active = false; simple_active = true;
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Combo(skCrypt("B"), &selectedItemBR, itemBR, IM_ARRAYSIZE(itemBR));
                //    if (selectedItemBR == 0) {
                //        Active_Barrel = "NONE";
                //        silencer_active = false;
                //    }
                //    if (selectedItemBR == 1) {
                //        Active_Barrel = "SILENCER";
                //        silencer_active = true;
                //    }
                //    ImGui::PopItemWidth();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(25);
                //    ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Randomization"));
                //    ImGui::SetCursorPosX(8);
                //    ImGui::SliderFloat(skCrypt("####-"), &XCONTROL, 1, 5, "% .2f");
                //    ImGui::SetCursorPosX(8);
                //    ImGui::SliderFloat(skCrypt("##-"), &YCONTROL, 1, 5, "% .2f");
                //    ImGui::EndChild();
                //    ImGui::SameLine(215);
                //    ImGui::BeginChild(skCrypt("sadasd"), ImVec2(200.0f, 240.0f));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(40);
                //    ImGui::Image(Logo, ImVec2(100, 100));
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted("https://discord.gg/zDbjB66chs");
                //        system("");
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::PushFont(pFont);
                //    ImGui::SetCursorPosX(8);
                //    ImGui::Checkbox(skCrypt("Beep Sound"), &BSound);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Bip Sesi"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (BSound == true) {
                //        BSound = true;
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Reset Key"), &resetbutt);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Silahlari Sifirlar"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (resetbutt == true) {
                //        ImGui::SameLine();
                //        ImGui::KeyBind(skCrypt("##ResetKey"), resbind, ImVec2(50, 20));
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Rapid Fire"), &bRapid);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Hizli Ates"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (bRapid == true) {
                //        bRapid = true;
                //        ImGui::SameLine();
                //        ImGui::KeyBind(skCrypt("##Rapid Key"), rpbind, ImVec2(50, 20));
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Legit Mode"), &legitmode1);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Sprayi Dagitir Yakalatmaz"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (legitmode1 == true) {
                //        legitmode1 = true;
                //    }
                //    ImGui::PopFont();
                //    ImGui::EndChild();
                //}
                //if (ArbitGui == 2) {
                //    header();
                //    ImGui::Spacing();
                //    ImGui::BeginChild(skCrypt("too big"), ImVec2(200.0f, 240.0f));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(40);
                //    ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Sensitivity"));
                //    ImGui::SameLine(120);
                //    if (ImGui::Button("Detect")) {
                //        auto_sensdec();
                //    }
                //    ImGui::SameLine(8);
                //    ImGui::PushItemWidth(180);
                //    ImGui::SliderFloat(skCrypt("##sensitivity"), &game_sensitivity, 0, 2, "% .2f");
                //    ImGui::Text(skCrypt(""));
                //    ImGui::PushFont(pFont);
                //    ImGui::SameLine(8);
                //    ImGui::Checkbox(skCrypt("Anti AFK"), &antiafk2);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("AFK Dan Atmanizi Onler"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (antiafk2 == true) {
                //        keybd_event(VK_SPACE, 0, 0, 0);
                //        keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);

                //        antiafk2 = true;
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(8);
                //    ImGui::Checkbox(skCrypt("Auto Loot (CapsLock)"), &autoloot1);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Otomatik Esyalari Toplar"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    ImGui::SameLine();
                //    if (autoloot1 == true)
                //    {

                //        if (GetAsyncKeyState(VK_CAPITAL) & 0x8000)
                //        {
                //            if (autoloot1 == true)

                //            {
                //                keybd_event('H', 5, 5, 5);

                //                SetCursorPos(1300, 310);
                //                Sleep(25);
                //                SetCursorPos(1400, 310);
                //                Sleep(25);
                //                SetCursorPos(1500, 310);
                //                Sleep(25);
                //                SetCursorPos(1600, 310);
                //                Sleep(25);
                //                SetCursorPos(1700, 310);
                //                Sleep(25);
                //                SetCursorPos(1800, 310);
                //                Sleep(25);
                //                SetCursorPos(1300, 310);
                //                Sleep(25);

                //                SetCursorPos(1300, 410);
                //                Sleep(25);
                //                SetCursorPos(1400, 410);
                //                Sleep(25);
                //                SetCursorPos(1500, 410);
                //                Sleep(25);
                //                SetCursorPos(1600, 410);
                //                Sleep(25);
                //                SetCursorPos(1700, 410);
                //                Sleep(25);
                //                SetCursorPos(1800, 410);
                //                Sleep(25);
                //                SetCursorPos(1300, 410);
                //                Sleep(25);

                //                SetCursorPos(1300, 510);
                //                Sleep(25);
                //                SetCursorPos(1400, 510);
                //                Sleep(25);
                //                SetCursorPos(1500, 510);
                //                Sleep(25);
                //                SetCursorPos(1600, 510);
                //                Sleep(25);
                //                SetCursorPos(1700, 510);
                //                Sleep(25);
                //                SetCursorPos(1800, 510);
                //                Sleep(25);

                //                SetCursorPos(1300, 610);
                //                Sleep(25);
                //                SetCursorPos(1400, 610);
                //                Sleep(25);
                //                SetCursorPos(1500, 610);
                //                Sleep(25);
                //                SetCursorPos(1600, 610);
                //                Sleep(25);
                //                SetCursorPos(1700, 610);
                //                Sleep(25);
                //                SetCursorPos(1800, 610);
                //                Sleep(25);

                //                SetCursorPos(1300, 710);
                //                Sleep(25);
                //                SetCursorPos(1400, 710);
                //                Sleep(25);
                //                SetCursorPos(1500, 710);
                //                Sleep(25);
                //                SetCursorPos(1600, 710);
                //                Sleep(25);
                //                SetCursorPos(1700, 710);
                //                Sleep(25);
                //                SetCursorPos(1800, 710);

                //                SetCursorPos(1300, 810);
                //                Sleep(25);
                //                SetCursorPos(1400, 810);
                //                Sleep(25);
                //                SetCursorPos(1500, 810);
                //                Sleep(25);
                //                SetCursorPos(1600, 810);
                //                Sleep(25);
                //                SetCursorPos(1700, 810);
                //                Sleep(25);
                //                SetCursorPos(1800, 810);

                //                SetCursorPos(1300, 910);
                //                Sleep(25);
                //                SetCursorPos(1400, 910);
                //                Sleep(25);
                //                SetCursorPos(1500, 910);
                //                Sleep(25);
                //                SetCursorPos(1600, 910);
                //                Sleep(25);
                //                SetCursorPos(1700, 910);
                //                Sleep(25);
                //                SetCursorPos(1800, 910);
                //            }
                //        }
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Weapon Info"), &show_another_window);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Oyun Ici Secili Silahlari Gorursunuz"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    show_another_window ^= false;
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Crosshair"), &crosshai);
                //    if (crosshai == true) {
                //        ImGui::SameLine(95);
                //        ImGui::SetColorEditOptions(ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoBorder);
                //        ImGui::ColorEdit4(_("Color##CrosshairColor").c_str(), Color::CrosshairColors);
                //   /* if (selectedrenk == 0) {
                //        birinci = 255;
                //        ikinci = 255;
                //        ucuncu = 255;
                //    }
                //    if (selectedrenk == 1) {
                //        birinci = 0;
                //        ikinci = 0;
                //        ucuncu = 0;
                //    }
                //    if (selectedrenk == 2) {
                //        birinci = 102;
                //        ikinci = 0;
                //        ucuncu = 204;
                //    }
                //    if (selectedrenk == 3) {
                //        birinci = 255;
                //        ikinci = 255;
                //        ucuncu = 0;
                //    }
                //    if (selectedrenk == 4) {
                //        birinci = 255;
                //        ikinci = 0;
                //        ucuncu = 0;
                //    }
                //    if (selectedrenk == 5) {
                //        birinci = 255;
                //        ikinci = 127;
                //        ucuncu = 0;
                //    }
                //    if (selectedrenk == 6) {
                //        birinci = 0;
                //        ikinci = 0;
                //        ucuncu = 255;
                //    }
                //    if (selectedrenk == 7) {
                //        birinci = 0;
                //        ikinci = 255;
                //        ucuncu = 0;
                //    }*/
                //    show_another_window ^= false;
                //        crosshai = true;
                //        ImGui::SameLine(8);
                //        ImGui::SliderInt(skCrypt("##Crosshair Size"), &crosshairsize, 0, 58, "%d");
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("HideOnADS"), &hideonads);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Durbun Acildiginda Crosshairi Gizler"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("Hide/Show"), &hideshow31);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Programi Gizler"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    if (hideshow31 == true) {
                //        hideshow31 = true;
                //        ImGui::SameLine();
                //        ImGui::KeyBind(skCrypt("##Hide Key"), hsbind, ImVec2(50, 20));
                //    }
                //    else if (hideshow31 == false) {
                //        hsbind = 0;
                //    }

                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine();
                //    ImGui::Checkbox(skCrypt("HipFire"), &hip_activee);
                //    if (ImGui::IsItemHovered())
                //    {
                //        ImGui::BeginTooltip();
                //        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
                //        ImGui::TextUnformatted(skCrypt("Durbunsuz Atesi Saglar"));
                //        ImGui::PopTextWrapPos();
                //        ImGui::EndTooltip();
                //    }
                //    ImGui::PopFont();
                //    if (hip_activee == true);


                //    ImGui::EndChild();
                //    ImGui::SameLine(215);
                //    ImGui::BeginChild(skCrypt("sadasd"), ImVec2(200.0f, 240.0f));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(10);
                //    if (ImGui::Button(skCrypt("Save Config"))) {
                //        config_create_kontrol231();
                //        config_Write();
                //    }
                //    ImGui::SameLine();
                //    if (ImGui::Button(skCrypt("Load Config"))) {
                //        config_data();
                //    }
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(50);
                //    if (ImGui::Button(skCrypt("Reset Config"))) {
                //        const int config_delete = MessageBox(NULL, skCrypt("Reset config."), "INFO", MB_OKCANCEL | MB_ICONQUESTION);
                //        switch (config_delete)
                //        {
                //        case IDOK:
                //            MessageBoxA(0, skCrypt("Config has been reset successfully."), "INFO", MB_OK | MB_ICONINFORMATION);
                //            config_reset();
                //            break;
                //        case IDCANCEL:
                //            MessageBoxA(0, skCrypt("The transaction has been canceled."), "INFO", MB_OK | MB_ICONWARNING);
                //            break;
                //        }
                //    }
                //    ImGui::EndChild();
                //    ImGui::SameLine(215);
                //    ImGui::BeginChild(skCrypt("sadasd"), ImVec2(200.0f, 240.0f));
                //    ImGui::Spacing();
                //    ImGui::SameLine(45);
                //    ImGui::EndChild();
                //}


                //if (ArbitGui == 4) {
                //    header();
                //    ImGui::Spacing();
                //    ImGui::BeginChild(skCrypt("too big"), ImVec2(200.0f, 240.0f));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(75);
                //    ImGui::TextColored(ImColor(255, 255, 255), skCrypt(" Weapon"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(45);
                //    ImGui::Text(skCrypt("AK47   "));
                //    ImGui::SameLine(130);
                //    ImGui::Text(skCrypt("LR300"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##ak"), akbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##lr"), lrbind, ImVec2(80, 20));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(45);
                //    ImGui::Text(skCrypt("MP5A4"));
                //    ImGui::SameLine(125);
                //    ImGui::Text(skCrypt("CUSTOM"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##mp"), mpbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##cs"), csbind, ImVec2(80, 20));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(45);
                //    ImGui::Text(skCrypt("TOMMY"));
                //    ImGui::SameLine(115);
                //    ImGui::Text(skCrypt("SAR-RIFLE"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##tm"), tmbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##sm"), smbind, ImVec2(80, 20));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(45);
                //    ImGui::Text(skCrypt("M249"));
                //    ImGui::SameLine(125);
                //    ImGui::Text(skCrypt("HMLMG"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##m2"), m2bind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##pt"), ptbind, ImVec2(80, 20));
                //    ////////////////////////////////////////////////
                //    ImGui::EndChild();
                //    ImGui::SameLine(215);
                //    ImGui::BeginChild(skCrypt("sadasd"), ImVec2(200.0f, 240.0f));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(85);
                //    ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Scope"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(50);
                //    ImGui::Text(skCrypt("8X"));
                //    ImGui::SameLine(135);
                //    ImGui::Text(skCrypt("16X"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##8X"), xxbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##16X"), yybind, ImVec2(80, 20));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(45);
                //    ImGui::Text(skCrypt("Holo"));
                //    ImGui::SameLine(115);
                //    ImGui::Text(skCrypt("  Simple"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##Holo"), hhbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##Simple"), ssbind, ImVec2(80, 20));
                //    ImGui::Spacing();
                //    ImGui::Text(skCrypt(""));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(85);
                //    ImGui::TextColored(ImColor(255, 255, 255), skCrypt("Barrel"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(30);
                //    ImGui::Text(skCrypt("Silencer"));
                //    ImGui::SameLine(125);
                //    ImGui::Text(skCrypt("M.Boost"));
                //    ImGui::Text(skCrypt(""));
                //    ImGui::SameLine(20);
                //    ImGui::KeyBind(skCrypt("##Silencer"), slbind, ImVec2(80, 20));
                //    ImGui::SameLine();
                //    ImGui::KeyBind(skCrypt("##Boost"), bobind, ImVec2(80, 20));
                //    ImGui::Spacing();

                //    ImGui::EndChild();
                //}
            }
            if (show_another_window)
            {
                ImGui::SetNextWindowSize(ImVec2(80, 80), ImGuiCond_Once);
                ImGui::SetNextWindowPos(ImVec2(50, 10), ImGuiCond_Once);
                ImGui::SetNextWindowBgAlpha(5.0f);
                ImGui::Begin(skCrypt("Weapon Info"), &show_another_window, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_Tooltip | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar);
                ImGui::Separator();
                ImGui::PushItemWidth(120);
                ImGui::Text(skCrypt("W :"));
                ImGui::SameLine();
                ImGui::TextColored(ImColor(0, 0, 255), Active_Weapon);
                ImGui::Text(skCrypt("S  :"));
                ImGui::SameLine();
                ImGui::TextColored(ImColor(0, 0, 255), Active_Scopes);
                ImGui::Text(skCrypt("B  :"));
                ImGui::SameLine();
                ImGui::TextColored(ImColor(0, 0, 255), Active_Barrel);
                ImGui::Separator();
                ImGui::Text(skCrypt("S  : %.2f"), game_sensitivity);
                ImGui::Separator();
                ImGui::End();
            }
            ImGui::End();
        }
      
        ImGui::EndFrame();

        g_pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 1.0f, 0);
        if (g_pd3dDevice->BeginScene() >= 0)
        {
            ImGui::Render();
            ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
            g_pd3dDevice->EndScene();
        }

        if (io.ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            ImGui::UpdatePlatformWindows();
            ImGui::RenderPlatformWindowsDefault();
        }

        HRESULT result = g_pd3dDevice->Present(NULL, NULL, NULL, NULL);
        if (result == D3DERR_DEVICELOST && g_pd3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
            //ResetDevice();
        { }
        if (!loader_active) {
            msg.message = WM_QUIT;
        }
    }

    ImGui_ImplDX9_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    DestroyWindow(main_hwnd);
    UnregisterClass(wc.lpszClassName, wc.hInstance);

    return 0;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;    
    switch (msg)
    {
    case WM_SIZE:
        if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
        {
            g_d3dpp.BackBufferWidth = LOWORD(lParam);
            g_d3dpp.BackBufferHeight = HIWORD(lParam);
            ResetDevice();
        }
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU)
            return 0;
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}/*
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)WinMain, 0, 0, 0); // Begins the debug thread
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}*/


string anahtar, mixx, mixed;

template< typename ... Args >
std::string stringer(Args const& ... args)
{
    std::ostringstream stream;
    using List = int[];
    (void)List {
        0, ((void)(stream << args), 0) ...
    };
    return stream.str();
}

string getHwid() {
    time_t now = time(0);
    string time = to_string(now);
    string finalTime = time.substr(0, 7);

    string a, b, c, d, e;
    HW_PROFILE_INFO hwProfileInfo;
    GetCurrentHwProfile(&hwProfileInfo);
    CHAR* hwidWString = hwProfileInfo.szHwProfileGuid;
    string hwid = hwidWString;

    a = hwid.substr(1, 8);
    b = hwid.substr(10, 4);
    c = hwid.substr(15, 4);
    d = hwid.substr(20, 4);
    e = hwid.substr(25, 12);

    string mix = stringer(a, c, d, e, a, b, e, a, d, c, e, a);
    mixx = md5(md5(md5(md5(md5(mix)))));
    string birlestir = stringer(mixx, finalTime, mixx);
    mixed = md5(md5(birlestir));
    return mixed;
}



int main() {
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    getdMacAddresses();
    GetUserName(infoBuf, &bufCharCount);
    mainprotect();
    WindownsMain(0, 0, 0, 0);
}





