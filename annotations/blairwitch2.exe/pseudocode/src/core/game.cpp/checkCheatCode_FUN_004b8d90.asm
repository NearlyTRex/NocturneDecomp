; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_game_cpp_checkCheatCode_FUN_004b8d90(byte *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cb80f8
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8d90
        ;   Label: core_game.cpp_checkCheatCode_FUN_004b8d90
    PUSH ESI                            ; 004b8d91
    PUSH EDI                            ; 004b8d92
    PUSH EBP                            ; 004b8d93
    SUB ESP,0x8                         ; 004b8d94
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b8d97
    MOV EDI,ESI                         ; 004b8d9b
    SUB ECX,ECX                         ; 004b8d9d
    DEC ECX                             ; 004b8d9f
    XOR EAX,EAX                         ; 004b8da0
    SCASB.REPNE ES:EDI                  ; 004b8da2
    NOT ECX                             ; 004b8da4
    DEC ECX                             ; 004b8da6
    XOR EBP,EBP                         ; 004b8da7
    MOV dword ptr [ESP],ECX             ; 004b8da9
    TEST ECX,ECX                        ; 004b8dac
    JLE 0x004b8ddf                      ; 004b8dae
        ;   XREF to: 004b8ddf (CONDITIONAL_JUMP)  ; LAB_004b8ddf
    MOV EAX,ECX                         ; 004b8db0
    NEG EAX                             ; 004b8db2
    MOV EBX,ECX                         ; 004b8db4
    ADD ECX,EAX                         ; 004b8db6
    MOV dword ptr [ESP + 0x4],ECX       ; 004b8db8
    XOR EAX,EAX                         ; 004b8dbc
        ;   Label: LAB_004b8dbc
    MOV AL,byte ptr [ESI]               ; 004b8dbe
    PUSH EAX                            ; 004b8dc0
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b8dc1
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 004b8dc8
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 004b8dcd
    CMP EDI,EAX                         ; 004b8dd0
    JNZ 0x004b8dd5                      ; 004b8dd2
        ;   XREF to: 004b8dd5 (CONDITIONAL_JUMP)  ; LAB_004b8dd5
    INC EBP                             ; 004b8dd4
    MOV EDX,dword ptr [ESP + 0x4]       ; 004b8dd5
        ;   Label: LAB_004b8dd5
    DEC EBX                             ; 004b8dd9
    INC ESI                             ; 004b8dda
    CMP EBX,EDX                         ; 004b8ddb
    JG 0x004b8dbc                       ; 004b8ddd
        ;   XREF to: 004b8dbc (CONDITIONAL_JUMP)  ; LAB_004b8dbc
    CMP EBP,dword ptr [ESP]             ; 004b8ddf
        ;   Label: LAB_004b8ddf
    JNZ 0x004b8df9                      ; 004b8de2
        ;   XREF to: 004b8df9 (CONDITIONAL_JUMP)  ; LAB_004b8df9
    XOR AH,AH                           ; 004b8de4
    MOV byte ptr [0x01cb80f8],AH        ; 004b8de6 | DAT_01cb80f8
    MOV EAX,0x1                         ; 004b8dec
    ADD ESP,0x8                         ; 004b8df1
    POP EBP                             ; 004b8df4
    POP EDI                             ; 004b8df5
    POP ESI                             ; 004b8df6
    POP EBX                             ; 004b8df7
    RET                                 ; 004b8df8
    XOR EAX,EAX                         ; 004b8df9
        ;   Label: LAB_004b8df9
    ADD ESP,0x8                         ; 004b8dfb
    POP EBP                             ; 004b8dfe
    POP EDI                             ; 004b8dff
    POP ESI                             ; 004b8e00
    POP EBX                             ; 004b8e01
    RET                                 ; 004b8e02

