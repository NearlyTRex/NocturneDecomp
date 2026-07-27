; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048cec0(void)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CBulletHoleTypeInfo_0059d320
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d320                       ; 0048cec0 | g_CBulletHoleTypeInfo_0059d320
        ;   Label: core_fire.cpp_FUN_0048cec0
    PUSH 0x100                          ; 0048cec5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048ceca
    PUSH EDX                            ; 0048cece
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cecf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0048ced4
    RET                                 ; 0048ced7

