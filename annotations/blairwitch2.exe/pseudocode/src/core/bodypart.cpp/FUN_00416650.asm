; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bodypart_cpp_FUN_00416650(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416650
        ;   Label: core_bodypart.cpp_FUN_00416650
    CMP dword ptr [EAX + 0x2b4],0x0     ; 00416654
    JNZ 0x00416666                      ; 0041665b
        ;   XREF to: 00416666 (CONDITIONAL_JUMP)  ; LAB_00416666
    CMP dword ptr [EAX + 0x10d8],0x0    ; 0041665d
    JZ 0x00416669                       ; 00416664
        ;   XREF to: 00416669 (CONDITIONAL_JUMP)  ; LAB_00416669
    XOR EAX,EAX                         ; 00416666
        ;   Label: LAB_00416666
    RET                                 ; 00416668
    MOV EAX,0x3                         ; 00416669
        ;   Label: LAB_00416669
    RET                                 ; 0041666e

