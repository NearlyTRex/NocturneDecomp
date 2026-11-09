; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_FUN_00421ab0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00421ab0
        ;   Label: core_bugs.cpp_FUN_00421ab0
    MOV EDX,dword ptr [EAX + 0x70]      ; 00421ab4
    CMP EDX,0x2                         ; 00421ab7
    JZ 0x00421acb                       ; 00421aba
        ;   XREF to: 00421acb (CONDITIONAL_JUMP)  ; LAB_00421acb
    CMP dword ptr [EAX + 0xd054],0x3    ; 00421abc
    JNZ 0x00421aa0                      ; 00421ac3
        ;   XREF to: 00421aa0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 00421ac5
    RET                                 ; 00421aca
    MOV EAX,EDX                         ; 00421acb
        ;   Label: LAB_00421acb
    RET                                 ; 00421acd

