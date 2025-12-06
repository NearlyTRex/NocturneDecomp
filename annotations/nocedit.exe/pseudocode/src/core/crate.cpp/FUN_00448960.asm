; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_crate.cpp_FUN_00448960()
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448960
        ;   Label: core_crate.cpp_FUN_00448960
    MOV EDX,dword ptr [EAX + 0x70]      ; 00448964
    CMP EDX,0x1                         ; 00448967
    JNZ 0x00448975                      ; 0044896a | LAB_00448975
        ;   XREF to: 00448975 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2d4],0x0     ; 0044896c
    JZ 0x00448978                       ; 00448973 | LAB_00448978
        ;   XREF to: 00448978 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00448975
        ;   Label: LAB_00448975
    RET                                 ; 00448977
    MOV EAX,EDX                         ; 00448978
        ;   Label: LAB_00448978
    RET                                 ; 0044897a

