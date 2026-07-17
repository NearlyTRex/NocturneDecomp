; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_createDirect3D_FUN_10002f40(void)
;
;
; XREF[2]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001d42
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 10002804
;
; Referenced Globals:
;   GUID g_IID_IDirect3D3 = IDirect3D3 bb223240-e72b-11d0-a9b4-00aa00c0993e
;   IDirectDraw4* g_DirectDraw4 = 00000000
;   IDirect3D3* g_Direct3D3 = 00000000
;
; *****************************************************************************

section .text

    PUSH 0x100141dc                     ; 10002f40 | g_Direct3D3
        ;   Label: dll_dx7.cpp_createDirect3D_FUN_10002f40
    MOV EAX,[0x10014188]                ; 10002f45 | g_DirectDraw4
    PUSH 0x10012148                     ; 10002f4a | g_IID_IDirect3D3
    PUSH EAX                            ; 10002f4f
    MOV EAX,dword ptr [EAX]             ; 10002f50
    CALL dword ptr [EAX]                ; 10002f52
    CMP EAX,0x1                         ; 10002f54
    SBB EAX,EAX                         ; 10002f57
    NEG EAX                             ; 10002f59
    RET                                 ; 10002f5b

