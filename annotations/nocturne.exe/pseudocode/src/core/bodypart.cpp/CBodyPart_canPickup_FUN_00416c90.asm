; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bodypart_cpp_CBodyPart_canPickup_FUN_00416c90(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416c90
        ;   Label: core_bodypart.cpp_CBodyPart_canPickup_FUN_00416c90
    CMP dword ptr [EAX + 0x150],0x0     ; 00416c94
    JNZ 0x00416ca6                      ; 00416c9b
        ;   XREF to: 00416ca6 (CONDITIONAL_JUMP)  ; LAB_00416ca6
    CMP dword ptr [EAX + 0xcac],0x0     ; 00416c9d
    JZ 0x00416ca9                       ; 00416ca4
        ;   XREF to: 00416ca9 (CONDITIONAL_JUMP)  ; LAB_00416ca9
    XOR EAX,EAX                         ; 00416ca6
        ;   Label: LAB_00416ca6
    RET                                 ; 00416ca8
    MOV EAX,0x3                         ; 00416ca9
        ;   Label: LAB_00416ca9
    RET                                 ; 00416cae

