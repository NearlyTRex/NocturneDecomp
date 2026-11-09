; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005ae490(int *param_1)
;
;
; XREF[2]:
;   unkafter_asgaya.cpp_FUN_005ae4a0 at 005ae4e2
;   unkafter_asgaya.cpp_FUN_005ae4f8 at 005ae547
;
; *****************************************************************************

section .text

    PUSH ES                             ; 005ae490
        ;   Label: unkafter_asgaya.cpp_FUN_005ae490
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ae491
    CMP dword ptr [EAX],0x0             ; 005ae495
    JZ 0x005ae49e                       ; 005ae498
        ;   XREF to: 005ae49e (CONDITIONAL_JUMP)  ; LAB_005ae49e
    PUSH DS                             ; 005ae49a
    POP ES                              ; 005ae49b
    CALL dword ptr [EAX]                ; 005ae49c
    POP ES                              ; 005ae49e
        ;   Label: LAB_005ae49e
    RET                                 ; 005ae49f

