; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_actor_cpp_generateRandomValue_FUN_0040cb90(void)
;
;
; XREF[3]:
;   core_actor.cpp_FUN_0040cc00 at 0040cc1e
;   core_actor.cpp_FUN_0040cc60 at 0040ccda
;   core_actor.cpp_FUN_0040cd00 at 0040cd11
;
; Referenced Globals:
;   undefined4 DAT_007c3368
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x007c3368]      ; 0040cb90 | DAT_007c3368
        ;   Label: core_actor.cpp_generateRandomValue_FUN_0040cb90
    IMUL EDX,EDX,0x2ff0bd               ; 0040cb96
    INC EDX                             ; 0040cb9c
    AND EDX,0xffffff                    ; 0040cb9d
    MOV dword ptr [0x007c3368],EDX      ; 0040cba3 | DAT_007c3368
    MOV EAX,EDX                         ; 0040cba9
    RET                                 ; 0040cbab

