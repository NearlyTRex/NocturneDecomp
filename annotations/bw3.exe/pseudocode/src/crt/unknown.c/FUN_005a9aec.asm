; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005a9aec(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a3b0c at 005a3b22
;
; Referenced Globals:
;   undefined1 DAT_005da84c
;   undefined1 DAT_005da850
;   void* PTR_DAT_006079f4 = 005da84c
;   void* PTR_DAT_006079f8 = 005da850
;   undefined1 DAT_00607a07
;   undefined1 DAT_00607a08
;   undefined1 DAT_00607a09
;   undefined1 DAT_00607a0a
;   undefined1 DAT_00607a0b
;
; Called Functions:
;   crt_env.c_getenv_FUN_005a5ec0
;   crt_stdlib.c__fullpath_FUN_005a53f0
;   crt_unknown.c_FUN_005acb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9aec
        ;   Label: crt_unknown.c_FUN_005a9aec
    PUSH ESI                            ; 005a9aed
    PUSH EDI                            ; 005a9aee
    CMP byte ptr [0x00607a08],0x0       ; 005a9aef | DAT_00607a08
    JNZ 0x005a9bb1                      ; 005a9af6
        ;   XREF to: 005a9bb1 (CONDITIONAL_JUMP)  ; LAB_005a9bb1
    MOV EBX,0x6079f4                    ; 005a9afc | PTR_DAT_006079f4
    JMP 0x005a9b44                      ; 005a9b01
        ;   XREF to: 005a9b44 (UNCONDITIONAL_JUMP)  ; LAB_005a9b44
    PUSH EDX                            ; 005a9b03 | DAT_005da84c
        ;   Label: LAB_005a9b03
    CALL crt_env.c_getenv_FUN_005a5ec0  ; 005a9b04
        ;   XREF to: 005a5ec0 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_005a5ec0(char * name)
    MOV EDX,EAX                         ; 005a9b09
    ADD ESP,0x4                         ; 005a9b0b
    TEST EAX,EAX                        ; 005a9b0e
    JZ 0x005a9b41                       ; 005a9b10
        ;   XREF to: 005a9b41 (CONDITIONAL_JUMP)  ; LAB_005a9b41
    MOV EDI,EAX                         ; 005a9b12
    PUSH ES                             ; 005a9b14
    MOV AX,DS                           ; 005a9b15
    MOV ES,AX                           ; 005a9b17
    SUB ECX,ECX                         ; 005a9b19
    DEC ECX                             ; 005a9b1b
    XOR EAX,EAX                         ; 005a9b1c
    SCASB.REPNE ES:EDI                  ; 005a9b1e
    NOT ECX                             ; 005a9b20
    DEC ECX                             ; 005a9b22
    POP ES                              ; 005a9b23
    CMP ECX,0x103                       ; 005a9b24
    JA 0x005a9b41                       ; 005a9b2a
        ;   XREF to: 005a9b41 (CONDITIONAL_JUMP)  ; LAB_005a9b41
    PUSH 0x103                          ; 005a9b2c
    PUSH EDX                            ; 005a9b31
    PUSH 0x607a08                       ; 005a9b32 | DAT_00607a08
    CALL crt_stdlib.c__fullpath_FUN_005a53f0 ; 005a9b37
        ;   XREF to: 005a53f0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_005a53f0(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 005a9b3c
    JMP 0x005a9b4b                      ; 005a9b3f
        ;   XREF to: 005a9b4b (UNCONDITIONAL_JUMP)  ; LAB_005a9b4b
    ADD EBX,0x4                         ; 005a9b41
        ;   Label: LAB_005a9b41
    MOV EDX,dword ptr [EBX]             ; 005a9b44 | PTR_DAT_006079f4 | PTR_DAT_006079f8
        ;   Label: LAB_005a9b44
    CMP byte ptr [EDX],0x0              ; 005a9b46 | DAT_005da84c | DAT_005da850
    JNZ 0x005a9b03                      ; 005a9b49
        ;   XREF to: 005a9b03 (CONDITIONAL_JUMP)  ; LAB_005a9b03
    CMP byte ptr [0x00607a08],0x0       ; 005a9b4b | DAT_00607a08
        ;   Label: LAB_005a9b4b
    JNZ 0x005a9b81                      ; 005a9b52
        ;   XREF to: 005a9b81 (CONDITIONAL_JUMP)  ; LAB_005a9b81
    PUSH 0x0                            ; 005a9b54
    PUSH 0x0                            ; 005a9b56
    CALL crt_unknown.c_FUN_005acb10     ; 005a9b58
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; char * crt_unknown.c_FUN_005acb10(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 005a9b5d
    MOV EDI,0x607a08                    ; 005a9b60 | DAT_00607a08
    MOV ESI,EAX                         ; 005a9b65
    PUSH EDI                            ; 005a9b67 | DAT_00607a08
    MOV AL,byte ptr [ESI]               ; 005a9b68
        ;   Label: LAB_005a9b68
    MOV byte ptr [EDI],AL               ; 005a9b6a | DAT_00607a08 | DAT_00607a0a
    CMP AL,0x0                          ; 005a9b6c
    JZ 0x005a9b80                       ; 005a9b6e
        ;   XREF to: 005a9b80 (CONDITIONAL_JUMP)  ; LAB_005a9b80
    MOV AL,byte ptr [ESI + 0x1]         ; 005a9b70
    ADD ESI,0x2                         ; 005a9b73
    MOV byte ptr [EDI + 0x1],AL         ; 005a9b76 | DAT_00607a09 | DAT_00607a0b
    ADD EDI,0x2                         ; 005a9b79
    CMP AL,0x0                          ; 005a9b7c
    JNZ 0x005a9b68                      ; 005a9b7e
        ;   XREF to: 005a9b68 (CONDITIONAL_JUMP)  ; LAB_005a9b68
    POP EDI                             ; 005a9b80
        ;   Label: LAB_005a9b80
    MOV EDI,0x607a08                    ; 005a9b81 | DAT_00607a08
        ;   Label: LAB_005a9b81
    PUSH ES                             ; 005a9b86
    MOV AX,DS                           ; 005a9b87
    MOV ES,AX                           ; 005a9b89
    SUB ECX,ECX                         ; 005a9b8b
    DEC ECX                             ; 005a9b8d
    XOR EAX,EAX                         ; 005a9b8e
    SCASB.REPNE ES:EDI                  ; 005a9b90 | DAT_00607a08 | DAT_00607a09
    NOT ECX                             ; 005a9b92
    DEC ECX                             ; 005a9b94
    POP ES                              ; 005a9b95
    LEA EDX,[ECX + -0x1]                ; 005a9b96
    ADD EDX,0x607a08                    ; 005a9b99 | DAT_00607a08
    MOV AL,byte ptr [EDX]               ; 005a9b9f | DAT_00607a07 | DAT_00607a08
    CMP AL,0x5c                         ; 005a9ba1
    JZ 0x005a9bb1                       ; 005a9ba3
        ;   XREF to: 005a9bb1 (CONDITIONAL_JUMP)  ; LAB_005a9bb1
    CMP AL,0x2f                         ; 005a9ba5
    JZ 0x005a9bb1                       ; 005a9ba7
        ;   XREF to: 005a9bb1 (CONDITIONAL_JUMP)  ; LAB_005a9bb1
    INC EDX                             ; 005a9ba9
    MOV byte ptr [EDX],0x5c             ; 005a9baa | DAT_00607a08 | DAT_00607a09
    INC EDX                             ; 005a9bad
    MOV byte ptr [EDX],0x0              ; 005a9bae | DAT_00607a09 | DAT_00607a0a
    MOV EAX,0x607a08                    ; 005a9bb1 | DAT_00607a08
        ;   Label: LAB_005a9bb1
    POP EDI                             ; 005a9bb6
    POP ESI                             ; 005a9bb7
    POP EBX                             ; 005a9bb8
    RET                                 ; 005a9bb9

