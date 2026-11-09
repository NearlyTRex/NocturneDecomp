; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481d6e(undefined4 param_1,float *param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005deffc
;
; Called Functions:
;   engine_special.cpp_FUN_005632a3
;   shape_edittool.cpp_FUN_00481ab0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00481d6e
        ;   Label: shape_edittool.cpp_FUN_00481d6e
    PUSH EBX                            ; 00481d70
    SUB ESP,0x3c                        ; 00481d71
    MOV EAX,dword ptr [ESP + 0x48]      ; 00481d74
    LEA EBX,[ESP + 0x30]                ; 00481d78
    FLD float ptr [EAX]                 ; 00481d7c
    FMUL float ptr [0x005deffc]         ; 00481d7e | DAT_005deffc
    FISTP dword ptr [EBX]               ; 00481d84
    FLD float ptr [EAX + 0x4]           ; 00481d86
    FMUL float ptr [0x005deffc]         ; 00481d89 | DAT_005deffc
    FISTP dword ptr [EBX + 0x4]         ; 00481d8f
    FLD float ptr [EAX + 0x8]           ; 00481d92
    FMUL float ptr [0x005deffc]         ; 00481d95 | DAT_005deffc
    FISTP dword ptr [EBX + 0x8]         ; 00481d9b
    LEA EBX,[ESP + 0x30]                ; 00481d9e
    PUSH EBX                            ; 00481da2
    LEA EBX,[ESP + 0x4]                 ; 00481da3
    PUSH EBX                            ; 00481da7
    CALL engine_special.cpp_FUN_005632a3 ; 00481da8
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00481dad
    TEST byte ptr [ESP + 0x13],0x80     ; 00481db0
    JZ 0x00481dbc                       ; 00481db5
        ;   XREF to: 00481dbc (CONDITIONAL_JUMP)  ; LAB_00481dbc
    ADD ESP,0x3c                        ; 00481db7
    POP EBX                             ; 00481dba
    RET                                 ; 00481dbb
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00481dbc
        ;   Label: LAB_00481dbc
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481dc0
    PUSH EDX                            ; 00481dc4
    SAR EBX,0x10                        ; 00481dc5
    PUSH EBX                            ; 00481dc8
    MOV EBX,dword ptr [ESP + 0x18]      ; 00481dc9
    SAR EBX,0x10                        ; 00481dcd
    PUSH EBX                            ; 00481dd0
    MOV ECX,dword ptr [ESP + 0x50]      ; 00481dd1
    PUSH ECX                            ; 00481dd5
    CALL shape_edittool.cpp_FUN_00481ab0 ; 00481dd6
        ;   XREF to: 00481ab0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00481ab0()
    ADD ESP,0x10                        ; 00481ddb
    ADD ESP,0x3c                        ; 00481dde
    POP EBX                             ; 00481de1
    RET                                 ; 00481de2

