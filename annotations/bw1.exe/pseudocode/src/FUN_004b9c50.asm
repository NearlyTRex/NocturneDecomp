; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b9c50(char *param_1)
;
;
; XREF[2]:
;   FUN_004bb2f0 at 004bb405
;   FUN_004bcba0 at 004bce6d
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9c50
        ;   Label: FUN_004b9c50
    PUSH ESI                            ; 004b9c51
    PUSH EDI                            ; 004b9c52
    MOV ESI,dword ptr [ESP + 0x10]      ; 004b9c53
    MOV EDI,ESI                         ; 004b9c57
    SUB ECX,ECX                         ; 004b9c59
    DEC ECX                             ; 004b9c5b
    XOR EAX,EAX                         ; 004b9c5c
    SCASB.REPNE ES:EDI                  ; 004b9c5e
    NOT ECX                             ; 004b9c60
    DEC ECX                             ; 004b9c62
    MOV EBX,ECX                         ; 004b9c63
    TEST ECX,ECX                        ; 004b9c65
    JLE 0x004b9c80                      ; 004b9c67
        ;   XREF to: 004b9c80 (CONDITIONAL_JUMP)  ; LAB_004b9c80
    LEA EAX,[ECX + ESI*0x1]             ; 004b9c69
    MOV DL,byte ptr [EAX + -0x1]        ; 004b9c6c
        ;   Label: LAB_004b9c6c
    INC DL                              ; 004b9c6f
    AND EDX,0xff                        ; 004b9c71
    TEST byte ptr [EDX + 0x626114],0x2  ; 004b9c77 | DAT_00626114
    JNZ 0x004b9ca9                      ; 004b9c7e
        ;   XREF to: 004b9ca9 (CONDITIONAL_JUMP)  ; LAB_004b9ca9
    LEA EAX,[ESI + EBX*0x1]             ; 004b9c80
        ;   Label: LAB_004b9c80
    LEA EDI,[ESI + 0x1]                 ; 004b9c83
    MOV byte ptr [EAX],0x0              ; 004b9c86
    MOV AL,byte ptr [ESI]               ; 004b9c89
        ;   Label: LAB_004b9c89
    INC AL                              ; 004b9c8b
    AND EAX,0xff                        ; 004b9c8d
    TEST byte ptr [EAX + 0x626114],0x2  ; 004b9c92 | DAT_00626114
    JZ 0x004b9cb1                       ; 004b9c99
        ;   XREF to: 004b9cb1 (CONDITIONAL_JUMP)  ; LAB_004b9cb1
    PUSH EBX                            ; 004b9c9b
    PUSH EDI                            ; 004b9c9c
    PUSH ESI                            ; 004b9c9d
    DEC EBX                             ; 004b9c9e
    CALL FUN_005c25d0                   ; 004b9c9f
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004b9ca4
    JMP 0x004b9c89                      ; 004b9ca7
        ;   XREF to: 004b9c89 (UNCONDITIONAL_JUMP)  ; LAB_004b9c89
    DEC EBX                             ; 004b9ca9
        ;   Label: LAB_004b9ca9
    DEC EAX                             ; 004b9caa
    TEST EBX,EBX                        ; 004b9cab
    JG 0x004b9c6c                       ; 004b9cad
        ;   XREF to: 004b9c6c (CONDITIONAL_JUMP)  ; LAB_004b9c6c
    JMP 0x004b9c80                      ; 004b9caf
        ;   XREF to: 004b9c80 (UNCONDITIONAL_JUMP)  ; LAB_004b9c80
    XOR EDX,EDX                         ; 004b9cb1
        ;   Label: LAB_004b9cb1
    TEST EBX,EBX                        ; 004b9cb3
    JLE 0x004b9ccf                      ; 004b9cb5
        ;   XREF to: 004b9ccf (CONDITIONAL_JUMP)  ; LAB_004b9ccf
    MOV EAX,ESI                         ; 004b9cb7
    MOV CL,byte ptr [EAX]               ; 004b9cb9
        ;   Label: LAB_004b9cb9
    INC CL                              ; 004b9cbb
    MOVZX ESI,CL                        ; 004b9cbd
    TEST byte ptr [ESI + 0x626114],0x2  ; 004b9cc0 | DAT_00626114
    JNZ 0x004b9cd3                      ; 004b9cc7
        ;   XREF to: 004b9cd3 (CONDITIONAL_JUMP)  ; LAB_004b9cd3
    INC EDX                             ; 004b9cc9
    INC EAX                             ; 004b9cca
    CMP EDX,EBX                         ; 004b9ccb
    JL 0x004b9cb9                       ; 004b9ccd
        ;   XREF to: 004b9cb9 (CONDITIONAL_JUMP)  ; LAB_004b9cb9
    POP EDI                             ; 004b9ccf
        ;   Label: LAB_004b9ccf
    POP ESI                             ; 004b9cd0
    POP EBX                             ; 004b9cd1
    RET                                 ; 004b9cd2
    MOV byte ptr [EAX],0x20             ; 004b9cd3
        ;   Label: LAB_004b9cd3
    INC EDX                             ; 004b9cd6
    INC EAX                             ; 004b9cd7
    CMP EDX,EBX                         ; 004b9cd8
    JL 0x004b9cb9                       ; 004b9cda
        ;   XREF to: 004b9cb9 (CONDITIONAL_JUMP)  ; LAB_004b9cb9
    POP EDI                             ; 004b9cdc
    POP ESI                             ; 004b9cdd
    POP EBX                             ; 004b9cde
    RET                                 ; 004b9cdf

