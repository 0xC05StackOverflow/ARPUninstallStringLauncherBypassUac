// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_EXPORTS
#define INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_API __declspec(dllexport)
#else
#define INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_API __declspec(dllimport)
#endif

extern "C" INVOKEARPUNINSTALLSTRINGLAUNCHERINDLL_API VOID CALLBACK BypassUac(
	HWND hwnd,
	HINSTANCE hinst,
	LPWSTR  lpCmdLine,
	int nCmdShow
	);

HRESULT CoCreateInstanceAsAdmin(HWND hwnd, REFCLSID rclsid, REFIID riid, __out void ** ppv);
VOID InvokeIARPUninstallStringLauncher();