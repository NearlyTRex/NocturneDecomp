; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_stdio.c_parse_format_spec_FUN_00604c1c(char * format_ptr, scanf_state_t * state)
;
; Parameters:
; char *           Stack[0x4]:4   format_ptr
; scanf_state_t *  Stack[0x8]:4   state
;
; XREF[1]:
;   crt_stdio.c_doscan_FUN_00604950 at 00604be0
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00604c1c
        ;   Label: crt_stdio.c_parse_format_spec_FUN_00604c1c
    PUSH ESI                            ; 00604c1d
    PUSH EDI                            ; 00604c1e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00604c1f
    MOV EDI,dword ptr [ESP + 0x14]      ; 00604c23
    MOV AH,byte ptr [EDI + 0x10]        ; 00604c27
    OR AH,0x1                           ; 00604c2a
    MOV dword ptr [EDI + 0xc],0xffffffff ; 00604c2d
    MOV BL,AH                           ; 00604c34
    MOV byte ptr [EDI + 0x10],AH        ; 00604c36
    AND BL,0x3                          ; 00604c39
    MOV byte ptr [EDI + 0x10],BL        ; 00604c3c
    CMP byte ptr [EDX],0x2a             ; 00604c3f
    JNZ 0x00604c4e                      ; 00604c42
        ;   XREF to: 00604c4e (CONDITIONAL_JUMP)  ; LAB_00604c4e
    MOV CL,byte ptr [EDI + 0x10]        ; 00604c44
    AND CL,0xfe                         ; 00604c47
    INC EDX                             ; 00604c4a
    MOV byte ptr [EDI + 0x10],CL        ; 00604c4b
    XOR EBX,EBX                         ; 00604c4e
        ;   Label: LAB_00604c4e
    MOV BL,byte ptr [EDX]               ; 00604c50
    MOV AL,BL                           ; 00604c52
    INC AL                              ; 00604c54
    AND EAX,0xff                        ; 00604c56
    TEST byte ptr [EAX + 0x6849c4],0x20 ; 00604c5b | g_CharacterClassificationTable
    JZ 0x00604c89                       ; 00604c62
        ;   XREF to: 00604c89 (CONDITIONAL_JUMP)  ; LAB_00604c89
    XOR EAX,EAX                         ; 00604c64
    IMUL EAX,EAX,0xa                    ; 00604c66
        ;   Label: LAB_00604c66
    SUB EBX,0x30                        ; 00604c69
    ADD EAX,EBX                         ; 00604c6c
    XOR EBX,EBX                         ; 00604c6e
    MOV BL,byte ptr [EDX + 0x1]         ; 00604c70
    MOV CL,BL                           ; 00604c73
    INC CL                              ; 00604c75
    MOVZX ESI,CL                        ; 00604c77
    MOV CL,byte ptr [ESI + 0x6849c4]    ; 00604c7a | g_CharacterClassificationTable
    INC EDX                             ; 00604c80
    TEST CL,0x20                        ; 00604c81
    JNZ 0x00604c66                      ; 00604c84
        ;   XREF to: 00604c66 (CONDITIONAL_JUMP)  ; LAB_00604c66
    MOV dword ptr [EDI + 0xc],EAX       ; 00604c86
    MOV CH,byte ptr [EDX]               ; 00604c89
        ;   Label: LAB_00604c89
    LEA EAX,[EDX + 0x1]                 ; 00604c8b
    CMP CH,0x4e                         ; 00604c8e
    JNZ 0x00604ca0                      ; 00604c91
        ;   XREF to: 00604ca0 (CONDITIONAL_JUMP)  ; LAB_00604ca0
    MOV CL,byte ptr [EDI + 0x10]        ; 00604c93
    OR CL,0x8                           ; 00604c96
    MOV EDX,EAX                         ; 00604c99
    MOV byte ptr [EDI + 0x10],CL        ; 00604c9b
    JMP 0x00604cb0                      ; 00604c9e
        ;   XREF to: 00604cb0 (UNCONDITIONAL_JUMP)  ; LAB_00604cb0
    CMP CH,0x46                         ; 00604ca0
        ;   Label: LAB_00604ca0
    JNZ 0x00604cb0                      ; 00604ca3
        ;   XREF to: 00604cb0 (CONDITIONAL_JUMP)  ; LAB_00604cb0
    MOV BH,byte ptr [EDI + 0x10]        ; 00604ca5
    OR BH,0x4                           ; 00604ca8
    MOV EDX,EAX                         ; 00604cab
    MOV byte ptr [EDI + 0x10],BH        ; 00604cad
    MOV AL,byte ptr [EDX]               ; 00604cb0
        ;   Label: LAB_00604cb0
    LEA EBX,[EDX + 0x1]                 ; 00604cb2
    CMP AL,0x68                         ; 00604cb5
    JC 0x00604cc7                       ; 00604cb7
        ;   XREF to: 00604cc7 (CONDITIONAL_JUMP)  ; LAB_00604cc7
    JBE 0x00604cd3                      ; 00604cb9
        ;   XREF to: 00604cd3 (CONDITIONAL_JUMP)  ; LAB_00604cd3
    CMP AL,0x6c                         ; 00604cbb
    JC 0x00604d10                       ; 00604cbd
        ;   XREF to: 00604d10 (CONDITIONAL_JUMP)  ; LAB_00604d10
    JBE 0x00604cdf                      ; 00604cbf
        ;   XREF to: 00604cdf (CONDITIONAL_JUMP)  ; LAB_00604cdf
    CMP AL,0x77                         ; 00604cc1
    JZ 0x00604cdf                       ; 00604cc3
        ;   XREF to: 00604cdf (CONDITIONAL_JUMP)  ; LAB_00604cdf
    JMP 0x00604d10                      ; 00604cc5
        ;   XREF to: 00604d10 (UNCONDITIONAL_JUMP)  ; LAB_00604d10
    CMP AL,0x49                         ; 00604cc7
        ;   Label: LAB_00604cc7
    JC 0x00604d10                       ; 00604cc9
        ;   XREF to: 00604d10 (CONDITIONAL_JUMP)  ; LAB_00604d10
    JBE 0x00604cf8                      ; 00604ccb
        ;   XREF to: 00604cf8 (CONDITIONAL_JUMP)  ; LAB_00604cf8
    CMP AL,0x4c                         ; 00604ccd
    JZ 0x00604ceb                       ; 00604ccf
        ;   XREF to: 00604ceb (CONDITIONAL_JUMP)  ; LAB_00604ceb
    JMP 0x00604d10                      ; 00604cd1
        ;   XREF to: 00604d10 (UNCONDITIONAL_JUMP)  ; LAB_00604d10
    MOV AL,byte ptr [EDI + 0x10]        ; 00604cd3
        ;   Label: LAB_00604cd3
    OR AL,0x10                          ; 00604cd6
    MOV EDX,EBX                         ; 00604cd8
    MOV byte ptr [EDI + 0x10],AL        ; 00604cda
    JMP 0x00604d10                      ; 00604cdd
        ;   XREF to: 00604d10 (UNCONDITIONAL_JUMP)  ; LAB_00604d10
    MOV CH,byte ptr [EDI + 0x10]        ; 00604cdf
        ;   Label: LAB_00604cdf
    OR CH,0x20                          ; 00604ce2
    INC EDX                             ; 00604ce5
    MOV byte ptr [EDI + 0x10],CH        ; 00604ce6
    JMP 0x00604d10                      ; 00604ce9
        ;   XREF to: 00604d10 (UNCONDITIONAL_JUMP)  ; LAB_00604d10
    MOV AH,byte ptr [EDI + 0x10]        ; 00604ceb
        ;   Label: LAB_00604ceb
    OR AH,0x40                          ; 00604cee
    MOV EDX,EBX                         ; 00604cf1
    MOV byte ptr [EDI + 0x10],AH        ; 00604cf3
    JMP 0x00604d10                      ; 00604cf6
        ;   XREF to: 00604d10 (UNCONDITIONAL_JUMP)  ; LAB_00604d10
    CMP byte ptr [EDX + 0x1],0x36       ; 00604cf8
        ;   Label: LAB_00604cf8
    JNZ 0x00604d10                      ; 00604cfc
        ;   XREF to: 00604d10 (CONDITIONAL_JUMP)  ; LAB_00604d10
    CMP byte ptr [EDX + 0x2],0x34       ; 00604cfe
    JNZ 0x00604d10                      ; 00604d02
        ;   XREF to: 00604d10 (CONDITIONAL_JUMP)  ; LAB_00604d10
    MOV CL,byte ptr [EDI + 0x10]        ; 00604d04
    OR CL,0x40                          ; 00604d07
    ADD EDX,0x3                         ; 00604d0a
    MOV byte ptr [EDI + 0x10],CL        ; 00604d0d
    MOV EAX,EDX                         ; 00604d10
        ;   Label: LAB_00604d10
    POP EDI                             ; 00604d12
    POP ESI                             ; 00604d13
    POP EBX                             ; 00604d14
    RET                                 ; 00604d15

