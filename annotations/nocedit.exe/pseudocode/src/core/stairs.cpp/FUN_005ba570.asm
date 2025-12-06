; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stairs.cpp_FUN_005ba570()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005ba570
        ;   Label: core_stairs.cpp_FUN_005ba570
    CMP dword ptr [EAX],0x0             ; 005ba574
    JZ 0x005ba57c                       ; 005ba577 | LAB_005ba57c
        ;   XREF to: 005ba57c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005ba579
    RET                                 ; 005ba57b
    MOV EAX,0x3                         ; 005ba57c
        ;   Label: LAB_005ba57c
    RET                                 ; 005ba581

