; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00582c8e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_02c83438
;   undefined4 DAT_02c834cc
;   undefined4 DAT_02c834d4
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00582c8e
        ;   Label: engine_special.cpp_FUN_00582c8e
    CMP dword ptr [0x02c83438],0x0      ; 00582c90 | DAT_02c83438
    JNZ 0x00582c9c                      ; 00582c97
        ;   XREF to: 00582c9c (CONDITIONAL_JUMP)  ; LAB_00582c9c
    XOR EAX,EAX                         ; 00582c99
    RET                                 ; 00582c9b
        ;   Label: LAB_00582c9b
    CALL dword ptr [0x02c83438]         ; 00582c9c | DAT_02c83438
        ;   Label: LAB_00582c9c
    TEST EAX,EAX                        ; 00582ca2
    JZ 0x00582c9b                       ; 00582ca4
        ;   XREF to: 00582c9b (CONDITIONAL_JUMP)  ; LAB_00582c9b
    MOV EAX,[0x0061b4a0]                ; 00582ca6 | DAT_0061b4a0
    MOV [0x02c834cc],EAX                ; 00582cab | DAT_02c834cc
    MOV EAX,[0x02c834d4]                ; 00582cb0 | DAT_02c834d4
    MOV [0x0061b4a0],EAX                ; 00582cb5 | DAT_0061b4a0
    MOV EAX,0x1                         ; 00582cba
    RET                                 ; 00582cbf

