; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10002340(LPCSTR param_1)
;
;
; XREF[14]:
;   APIDLLdrawPolyList at 10004fe0
;   APIDLLdrawPolyList2 at 10005252
;   APIDLLmasterZBuffer at 10004e71
;   APIDLLrestoreVideoMode at 10002bf8
;   APIDLLrestoreZBuffer at 10004eed
;   APIDLLsetColorTable16 at 10004b7e
;   APIDLLsetVideoMode at 1000287e
;   APIDLLunlockFrame at 10002e84
;   FUN_10001d70 at 10001e21
;   FUN_10002f60 at 10003055
;   ... and 4 more
;
; Referenced Globals:
;   TerminatedCString s_DirectX6_3D_Driver_error_100166f8
;   HWND g_WindowHandle = 00000000
;   void* PTR_ExitProcess_10242184 = 002422b8
;   void* PTR_MessageBoxA_10242290 = 002422e2
;
; Called Functions:
;   APIDLLkill
;   ExitProcess
;   MessageBoxA
;
; *****************************************************************************

section .text

    CALL APIDLLkill                     ; 10002340
        ;   XREF to: 10002460 (UNCONDITIONAL_CALL)  ; void APIDLLkill() | Ordinal_20
        ;   Label: FUN_10002340
    MOV EAX,dword ptr [ESP + 0x4]       ; 10002345
    PUSH 0x10                           ; 10002349
    PUSH 0x100166f8                     ; 1000234b | = "DirectX6 3D Driver error"
    MOV ECX,dword ptr [0x10138fb8]      ; 10002350 | g_WindowHandle
    PUSH EAX                            ; 10002356
    PUSH ECX                            ; 10002357
    CALL dword ptr [0x10242290]         ; 10002358 | PTR_MessageBoxA_10242290
    PUSH 0x1                            ; 1000235e
    CALL dword ptr [0x10242184]         ; 10002360 | PTR_ExitProcess_10242184

