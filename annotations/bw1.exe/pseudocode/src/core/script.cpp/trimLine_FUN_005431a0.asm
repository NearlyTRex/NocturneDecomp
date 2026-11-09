; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_trimLine_FUN_005431a0(char *input_line,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   input_line
; char *           Stack[0x8]:4   output_buffer
;
; XREF[1]:
;   core_script.cpp_FUN_00543fd0 at 00544018
;
; Referenced Globals:
;   undefined4 DAT_005edf8a
;   undefined4 DAT_00626114
;
; Called Functions:
;   crt_string.c_strstr_FUN_005c2dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005431a0
        ;   Label: core_script.cpp_trimLine_FUN_005431a0
    PUSH ESI                            ; 005431a1
    PUSH EDI                            ; 005431a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005431a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005431a7
    MOV byte ptr [EBX],0x0              ; 005431ab
    MOV AL,byte ptr [ESI]               ; 005431ae
        ;   Label: LAB_005431ae
    INC AL                              ; 005431b0
    AND EAX,0xff                        ; 005431b2
    TEST byte ptr [EAX + 0x626114],0x2  ; 005431b7 | DAT_00626114
    JZ 0x005431c3                       ; 005431be
        ;   XREF to: 005431c3 (CONDITIONAL_JUMP)  ; LAB_005431c3
    INC ESI                             ; 005431c0
    JMP 0x005431ae                      ; 005431c1
        ;   XREF to: 005431ae (UNCONDITIONAL_JUMP)  ; LAB_005431ae
    MOV EDI,EBX                         ; 005431c3
        ;   Label: LAB_005431c3
    PUSH EDI                            ; 005431c5
    MOV AL,byte ptr [ESI]               ; 005431c6
        ;   Label: LAB_005431c6
    MOV byte ptr [EDI],AL               ; 005431c8
    CMP AL,0x0                          ; 005431ca
    JZ 0x005431de                       ; 005431cc
        ;   XREF to: 005431de (CONDITIONAL_JUMP)  ; LAB_005431de
    MOV AL,byte ptr [ESI + 0x1]         ; 005431ce
    ADD ESI,0x2                         ; 005431d1
    MOV byte ptr [EDI + 0x1],AL         ; 005431d4
    ADD EDI,0x2                         ; 005431d7
    CMP AL,0x0                          ; 005431da
    JNZ 0x005431c6                      ; 005431dc
        ;   XREF to: 005431c6 (CONDITIONAL_JUMP)  ; LAB_005431c6
    POP EDI                             ; 005431de
        ;   Label: LAB_005431de
    PUSH 0x5edf8a                       ; 005431df | DAT_005edf8a
    PUSH EBX                            ; 005431e4
    CALL crt_string.c_strstr_FUN_005c2dc0 ; 005431e5
        ;   XREF to: 005c2dc0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005c2dc0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005431ea
    TEST EAX,EAX                        ; 005431ed
    JZ 0x005431f4                       ; 005431ef
        ;   XREF to: 005431f4 (CONDITIONAL_JUMP)  ; LAB_005431f4
    MOV byte ptr [EAX],0x0              ; 005431f1
    MOV ESI,EBX                         ; 005431f4
        ;   Label: LAB_005431f4
    XOR DL,DL                           ; 005431f6
    MOV AL,byte ptr [ESI]               ; 005431f8
        ;   Label: LAB_005431f8
    CMP AL,DL                           ; 005431fa
    JZ 0x00543210                       ; 005431fc
        ;   XREF to: 00543210 (CONDITIONAL_JUMP)  ; LAB_00543210
    CMP AL,0x0                          ; 005431fe
    JZ 0x0054320e                       ; 00543200
        ;   XREF to: 0054320e (CONDITIONAL_JUMP)  ; LAB_0054320e
    INC ESI                             ; 00543202
    MOV AL,byte ptr [ESI]               ; 00543203
    CMP AL,DL                           ; 00543205
    JZ 0x00543210                       ; 00543207
        ;   XREF to: 00543210 (CONDITIONAL_JUMP)  ; LAB_00543210
    INC ESI                             ; 00543209
    CMP AL,0x0                          ; 0054320a
    JNZ 0x005431f8                      ; 0054320c
        ;   XREF to: 005431f8 (CONDITIONAL_JUMP)  ; LAB_005431f8
    SUB ESI,ESI                         ; 0054320e
        ;   Label: LAB_0054320e
    MOV EAX,ESI                         ; 00543210
        ;   Label: LAB_00543210
    CMP ESI,EBX                         ; 00543212
    JBE 0x0054322f                      ; 00543214
        ;   XREF to: 0054322f (CONDITIONAL_JUMP)  ; LAB_0054322f
    MOV DL,byte ptr [EAX + -0x1]        ; 00543216
        ;   Label: LAB_00543216
    INC DL                              ; 00543219
    MOVZX ESI,DL                        ; 0054321b
    TEST byte ptr [ESI + 0x626114],0x2  ; 0054321e | DAT_00626114
    JZ 0x0054322f                       ; 00543225
        ;   XREF to: 0054322f (CONDITIONAL_JUMP)  ; LAB_0054322f
    DEC EAX                             ; 00543227
    MOV byte ptr [EAX],0x0              ; 00543228
    CMP EAX,EBX                         ; 0054322b
    JA 0x00543216                       ; 0054322d
        ;   XREF to: 00543216 (CONDITIONAL_JUMP)  ; LAB_00543216
    POP EDI                             ; 0054322f
        ;   Label: LAB_0054322f
    POP ESI                             ; 00543230
    POP EBX                             ; 00543231
    RET                                 ; 00543232

