; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGameHook * core_gmehook_cpp_CGameHook_ctor_FUN_0059c290(CGameHook *this_ptr)
;
; Parameters:
; CGameHook *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_goggles.cpp_FUN_0059c270 at 0059c275
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c290
        ;   Label: core_gmehook.cpp_CGameHook_ctor_FUN_0059c290
    MOV dword ptr [EAX + 0x4],0x0       ; 0059c294
    MOV dword ptr [EAX + 0x8],0x0       ; 0059c29b
    MOV dword ptr [EAX + 0xc],0x0       ; 0059c2a2
    MOV dword ptr [EAX],0x0             ; 0059c2a9
    RET                                 ; 0059c2af

