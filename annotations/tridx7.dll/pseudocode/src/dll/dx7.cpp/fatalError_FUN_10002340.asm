; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_fatalError_FUN_10002340(char *message)
;
; Parameters:
; char *           Stack[0x4]:4   message
;
; XREF[14]:
;   dll_dx7.cpp_APIDLLdrawPolyList2_FUN_10005130 at 10005252
;   dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00 at 10004fe0
;   dll_dx7.cpp_APIDLLmasterZBuffer_FUN_10004e10 at 10004e71
;   dll_dx7.cpp_APIDLLrestoreVideoMode_FUN_10002be0 at 10002bf8
;   dll_dx7.cpp_APIDLLrestoreZBuffer_FUN_10004e90 at 10004eed
;   dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30 at 10004b7e
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 1000287e
;   dll_dx7.cpp_APIDLLunlockFrame_FUN_10002e60 at 10002e84
;   dll_dx7.cpp_FUN_10003a30 at 10003a62
;   dll_dx7.cpp_FUN_10005010 at 10005116
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_DirectX6_3D_Driver_error_100166f8
;   HWND g_WindowHandle = 00000000
;   void* PTR_ExitProcess_10242184 = 002422b8
;   void* PTR_MessageBoxA_10242290 = 002422e2
;
; Called Functions:
;   dll_dx7.cpp_APIDLLkill_FUN_10002460
;   ExitProcess
;   MessageBoxA
;
; *****************************************************************************

section .text

    CALL dll_dx7.cpp_APIDLLkill_FUN_10002460 ; 10002340
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_APIDLLkill_FUN_10002460() | Ordinal_20
        ;   Label: dll_dx7.cpp_fatalError_FUN_10002340
    MOV EAX,dword ptr [ESP + 0x4]       ; 10002345
    PUSH 0x10                           ; 10002349
    PUSH 0x100166f8                     ; 1000234b | = "DirectX6 3D Driver error"
    MOV ECX,dword ptr [0x10138fb8]      ; 10002350 | g_WindowHandle
    PUSH EAX                            ; 10002356
    PUSH ECX                            ; 10002357
    CALL dword ptr [0x10242290]         ; 10002358 | PTR_MessageBoxA_10242290
    PUSH 0x1                            ; 1000235e
    CALL dword ptr [0x10242184]         ; 10002360 | PTR_ExitProcess_10242184

