; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_reset_FUN_00542f40(int param_1)
;
;
; XREF[1]:
;   core_setutil.cpp_C3DSLight_ctor_FUN_005421a0 at 005421a6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00542f40
        ;   Label: core_setutil.cpp_C3DSLight_reset_FUN_00542f40
    MOV dword ptr [EAX + 0x1808],0x100  ; 00542f44
    MOV dword ptr [EAX + 0x180c],0x100  ; 00542f4e
    MOV dword ptr [EAX + 0x11e0],0x3f800000 ; 00542f58
    MOV dword ptr [EAX + 0x11e4],0x3f800000 ; 00542f62
    MOV dword ptr [EAX + 0x11e8],0x0    ; 00542f6c
    MOV dword ptr [EAX + 0x1890],0x0    ; 00542f76
    MOV dword ptr [EAX + 0x1894],0x0    ; 00542f80
    MOV dword ptr [EAX + 0x11d0],0x0    ; 00542f8a
    MOV dword ptr [EAX + 0x11d4],0x0    ; 00542f94
    MOV dword ptr [EAX + 0x11c],0x41e00000 ; 00542f9e
    MOV dword ptr [EAX + 0x120],0x3f800000 ; 00542fa8
    MOV dword ptr [EAX + 0x124],0x3f800000 ; 00542fb2
    MOV dword ptr [EAX + 0x11ec],0x0    ; 00542fbc
    RET                                 ; 00542fc6

