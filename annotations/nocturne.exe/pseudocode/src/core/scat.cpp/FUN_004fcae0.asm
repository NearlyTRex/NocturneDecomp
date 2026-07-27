; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_scat_cpp_FUN_004fcae0(undefined4 param_1)
;
;
; Called Functions:
;   core_hero.cpp_FUN_004b49a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004fcae0
        ;   Label: core_scat.cpp_FUN_004fcae0
    PUSH EDX                            ; 004fcae4
    CALL core_hero.cpp_FUN_004b49a0     ; 004fcae5
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b49a0()
    ADD ESP,0x4                         ; 004fcaea
    RET                                 ; 004fcaed

