; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480b70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f5cec
;
; Called Functions:
;   engine_special.cpp_FUN_0055d723
;   shape_edittool.cpp_FUN_004808b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480b70
        ;   Label: shape_edittool.cpp_FUN_00480b70
    SUB ESP,0x3c                        ; 00480b71
    MOV EAX,dword ptr [ESP + 0x48]      ; 00480b74
    LEA EBX,[ESP + 0x30]                ; 00480b78
    FLD float ptr [EAX]                 ; 00480b7c
    FMUL float ptr [0x005f5cec]         ; 00480b7e | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 00480b84
    FLD float ptr [EAX + 0x4]           ; 00480b86
    FMUL float ptr [0x005f5cec]         ; 00480b89 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 00480b8f
    FLD float ptr [EAX + 0x8]           ; 00480b92
    FMUL float ptr [0x005f5cec]         ; 00480b95 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 00480b9b
    LEA EBX,[ESP + 0x30]                ; 00480b9e
    PUSH EBX                            ; 00480ba2
    LEA EBX,[ESP + 0x4]                 ; 00480ba3
    PUSH EBX                            ; 00480ba7
    CALL engine_special.cpp_FUN_0055d723 ; 00480ba8
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00480bad
    TEST byte ptr [ESP + 0x13],0x80     ; 00480bb0
    JZ 0x00480bbc                       ; 00480bb5
        ;   XREF to: 00480bbc (CONDITIONAL_JUMP)  ; LAB_00480bbc
    ADD ESP,0x3c                        ; 00480bb7
    POP EBX                             ; 00480bba
    RET                                 ; 00480bbb
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00480bbc
        ;   Label: LAB_00480bbc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00480bc0
    PUSH EDX                            ; 00480bc4
    SAR EBX,0x10                        ; 00480bc5
    PUSH EBX                            ; 00480bc8
    MOV EBX,dword ptr [ESP + 0x18]      ; 00480bc9
    SAR EBX,0x10                        ; 00480bcd
    PUSH EBX                            ; 00480bd0
    MOV ECX,dword ptr [ESP + 0x50]      ; 00480bd1
    PUSH ECX                            ; 00480bd5
    CALL shape_edittool.cpp_FUN_004808b0 ; 00480bd6
        ;   XREF to: 004808b0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004808b0()
    ADD ESP,0x10                        ; 00480bdb
    ADD ESP,0x3c                        ; 00480bde
    POP EBX                             ; 00480be1
    RET                                 ; 00480be2

