; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0d8c(char *param_1,uint param_2)
;
;
; XREF[1]:
;   crt_stdio.c_fclose_FUN_005c0e40 at 005c0eee
;
; Called Functions:
;   crt_unknown.c_FUN_005c0d7c
;   crt_unknown.c_FUN_005c6b40
;   crt_unknown.c_FUN_005c6c7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0d8c
        ;   Label: crt_unknown.c_FUN_005c0d8c
    PUSH ESI                            ; 005c0d8d
    PUSH EDI                            ; 005c0d8e
    PUSH EBP                            ; 005c0d8f
    MOV EBX,dword ptr [ESP + 0x14]      ; 005c0d90
    CALL crt_unknown.c_FUN_005c6b40     ; 005c0d94
        ;   XREF to: 005c6b40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6b40()
    MOV EBP,EAX                         ; 005c0d99
    SHR EBP,0x10                        ; 005c0d9b
    MOV EDI,EBX                         ; 005c0d9e
    OR EBP,EAX                          ; 005c0da0
    CALL crt_unknown.c_FUN_005c6c7c     ; 005c0da2
        ;   XREF to: 005c6c7c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6c7c()
    MOV ESI,EAX                         ; 005c0da7
    PUSH EDI                            ; 005c0da9
    MOV AL,byte ptr [ESI]               ; 005c0daa
        ;   Label: LAB_005c0daa
    MOV byte ptr [EDI],AL               ; 005c0dac
    CMP AL,0x0                          ; 005c0dae
    JZ 0x005c0dc2                       ; 005c0db0
        ;   XREF to: 005c0dc2 (CONDITIONAL_JUMP)  ; LAB_005c0dc2
    MOV AL,byte ptr [ESI + 0x1]         ; 005c0db2
    ADD ESI,0x2                         ; 005c0db5
    MOV byte ptr [EDI + 0x1],AL         ; 005c0db8
    ADD EDI,0x2                         ; 005c0dbb
    CMP AL,0x0                          ; 005c0dbe
    JNZ 0x005c0daa                      ; 005c0dc0
        ;   XREF to: 005c0daa (CONDITIONAL_JUMP)  ; LAB_005c0daa
    POP EDI                             ; 005c0dc2
        ;   Label: LAB_005c0dc2
    PUSH ES                             ; 005c0dc3
    MOV AX,DS                           ; 005c0dc4
    MOV ES,AX                           ; 005c0dc6
    SUB ECX,ECX                         ; 005c0dc8
    DEC ECX                             ; 005c0dca
    XOR EAX,EAX                         ; 005c0dcb
    SCASB.REPNE ES:EDI                  ; 005c0dcd
    NOT ECX                             ; 005c0dcf
    DEC ECX                             ; 005c0dd1
    POP ES                              ; 005c0dd2
    LEA EDI,[EBX + ECX*0x1]             ; 005c0dd3
    LEA EBX,[EDI + 0x4]                 ; 005c0dd6
    MOV byte ptr [EDI],0x74             ; 005c0dd9
    MOV ESI,EDI                         ; 005c0ddc
    MOV EAX,EBP                         ; 005c0dde
        ;   Label: LAB_005c0dde
    AND EAX,0xf                         ; 005c0de0
    DEC EBX                             ; 005c0de3
    PUSH EAX                            ; 005c0de4
    SHR EBP,0x4                         ; 005c0de5
    CALL crt_unknown.c_FUN_005c0d7c     ; 005c0de8
        ;   XREF to: 005c0d7c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d7c()
    ADD ESP,0x4                         ; 005c0ded
    MOV byte ptr [EBX + 0x1],AL         ; 005c0df0
    CMP EBX,ESI                         ; 005c0df3
    JNZ 0x005c0dde                      ; 005c0df5
        ;   XREF to: 005c0dde (CONDITIONAL_JUMP)  ; LAB_005c0dde
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c0df7
    SAR EAX,0x4                         ; 005c0dfb
    AND EAX,0xf                         ; 005c0dfe
    PUSH EAX                            ; 005c0e01
    MOV byte ptr [EDI + 0x5],0x5f       ; 005c0e02
    CALL crt_unknown.c_FUN_005c0d7c     ; 005c0e06
        ;   XREF to: 005c0d7c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d7c()
    ADD ESP,0x4                         ; 005c0e0b
    MOV byte ptr [EDI + 0x6],AL         ; 005c0e0e
    MOV EAX,dword ptr [ESP + 0x18]      ; 005c0e11
    AND EAX,0xf                         ; 005c0e15
    PUSH EAX                            ; 005c0e18
    CALL crt_unknown.c_FUN_005c0d7c     ; 005c0e19
        ;   XREF to: 005c0d7c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0d7c()
    MOV byte ptr [EDI + 0x8],0x2e       ; 005c0e1e
    MOV byte ptr [EDI + 0x9],0x74       ; 005c0e22
    MOV byte ptr [EDI + 0xa],0x6d       ; 005c0e26
    MOV byte ptr [EDI + 0xb],0x70       ; 005c0e2a
    MOV byte ptr [EDI + 0xc],0x0        ; 005c0e2e
    ADD ESP,0x4                         ; 005c0e32
    MOV byte ptr [EDI + 0x7],AL         ; 005c0e35
    POP EBP                             ; 005c0e38
    POP EDI                             ; 005c0e39
    POP ESI                             ; 005c0e3a
    POP EBX                             ; 005c0e3b
    RET                                 ; 005c0e3c

