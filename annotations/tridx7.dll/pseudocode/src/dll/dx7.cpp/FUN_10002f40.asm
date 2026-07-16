; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_FUN_10002f40(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001d42
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 10002804
;
; Referenced Globals:
;   undefined4 DAT_10012148
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   IDirect3D3* g_Direct3D3 = 00000000
;
; *****************************************************************************

section .text

    PUSH 0x100141dc                     ; 10002f40 | g_Direct3D3
        ;   Label: dll_dx7.cpp_FUN_10002f40
    MOV EAX,[0x10014188]                ; 10002f45 | g_DirectDraw4
    PUSH 0x10012148                     ; 10002f4a | DAT_10012148
    PUSH EAX                            ; 10002f4f
    MOV EAX,dword ptr [EAX]             ; 10002f50
    CALL dword ptr [EAX]                ; 10002f52
    CMP EAX,0x1                         ; 10002f54
    SBB EAX,EAX                         ; 10002f57
    NEG EAX                             ; 10002f59
    RET                                 ; 10002f5b

