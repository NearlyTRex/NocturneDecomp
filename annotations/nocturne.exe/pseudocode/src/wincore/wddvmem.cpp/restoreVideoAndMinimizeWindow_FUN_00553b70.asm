; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_restoreVideoAndMinimizeWindow_FUN_00553b70(void)
;
;
; XREF[1]:
;   wincore_winrun.cpp_mainWindowProc_FUN_00558d90 at 00558e8f
;
; Referenced Globals:
;   void* PTR_ShowWindow_0057547c = 00175aa2
;   int g_UseDirect3D
;   undefined4 DAT_02ddf568
;   HWND g_HWND_02de2098
;
; Called Functions:
;   engine_special.cpp_restoreVideoMode_FUN_005325f0
;   ShowWindow
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02dc9d60],0x0      ; 00553b70 | g_UseDirect3D
        ;   Label: wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_00553b70
    JZ 0x00553b82                       ; 00553b77
        ;   XREF to: 00553b82 (CONDITIONAL_JUMP)  ; LAB_00553b82
    CMP dword ptr [0x02ddf568],0x0      ; 00553b79 | DAT_02ddf568
    JNZ 0x00553b83                      ; 00553b80
        ;   XREF to: 00553b83 (CONDITIONAL_JUMP)  ; LAB_00553b83
    RET                                 ; 00553b82
        ;   Label: LAB_00553b82
    PUSH EBX                            ; 00553b83
        ;   Label: LAB_00553b83
    CALL engine_special.cpp_restoreVideoMode_FUN_005325f0 ; 00553b84
        ;   XREF to: 005325f0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_restoreVideoMode_FUN_005325f0()
    PUSH 0x6                            ; 00553b89
    MOV EBX,dword ptr [0x02de2098]      ; 00553b8b | g_HWND_02de2098
    PUSH EBX                            ; 00553b91
    CALL dword ptr CS:[0x57547c]        ; 00553b92 | PTR_ShowWindow_0057547c
    POP EBX                             ; 00553b99
    RET                                 ; 00553b9a

