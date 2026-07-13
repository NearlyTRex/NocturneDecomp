; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00542ad0(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_00541d00 at 00541dc6
;
; Referenced Globals:
;   undefined4 DAT_02dca09c
;   undefined4 DAT_02dca0a0
;
; Called Functions:
;   FUN_0042add0
;   FUN_004e11c0
;   FUN_00542b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542ad0
        ;   Label: FUN_00542ad0
    PUSH ESI                            ; 00542ad1
    PUSH EDI                            ; 00542ad2
    PUSH EBP                            ; 00542ad3
    MOV EBP,ESP                         ; 00542ad4
    AND ESP,0xfffffff8                  ; 00542ad6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00542ad9
    LEA ESI,[EBX + 0x150]               ; 00542adc
    LEA EAX,[EBP + 0x18]                ; 00542ae2
        ;   Label: LAB_00542ae2
    PUSH EAX                            ; 00542ae5
    PUSH ESI                            ; 00542ae6
    CALL FUN_004e11c0                   ; 00542ae7
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e11c0()
    ADD ESP,0x8                         ; 00542aec
    MOV EDX,EAX                         ; 00542aef
    CMP EAX,0x64                        ; 00542af1
    JC 0x00542b4b                       ; 00542af4
        ;   XREF to: 00542b4b (CONDITIONAL_JUMP)  ; LAB_00542b4b
    JA 0x00542b57                       ; 00542af6
        ;   XREF to: 00542b57 (CONDITIONAL_JUMP)  ; LAB_00542b57
    MOV EDI,dword ptr [0x02dca09c]      ; 00542af8 | DAT_02dca09c
    PUSH EDI                            ; 00542afe
    PUSH EBX                            ; 00542aff
    CALL FUN_00542b70                   ; 00542b00
        ;   XREF to: 00542b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00542b70()
    MOV EDX,dword ptr [EBX + 0x1fa40]   ; 00542b05
    ADD ESP,0x8                         ; 00542b0b
    TEST EDX,EDX                        ; 00542b0e
    SETZ AL                             ; 00542b10
        ;   Label: LAB_00542b10
    AND EAX,0xff                        ; 00542b13
    MOV dword ptr [EBX + 0x1fa40],EAX   ; 00542b18
    FLD float ptr [EBP + 0x18]          ; 00542b1e
        ;   Label: LAB_00542b1e
    FLDZ                                ; 00542b21
    FCOMPP                              ; 00542b23
    FNSTSW AX                           ; 00542b25
    SAHF                                ; 00542b27
    JC 0x00542ae2                       ; 00542b28
        ;   XREF to: 00542ae2 (CONDITIONAL_JUMP)  ; LAB_00542ae2
    MOV ESP,EBP                         ; 00542b2a
    POP EBP                             ; 00542b2c
    POP EDI                             ; 00542b2d
    POP ESI                             ; 00542b2e
    POP EBX                             ; 00542b2f
    RET                                 ; 00542b30
    MOV EDX,dword ptr [0x02dca0a0]      ; 00542b31 | DAT_02dca0a0
        ;   Label: LAB_00542b31
    PUSH EDX                            ; 00542b37
    PUSH EBX                            ; 00542b38
    CALL FUN_00542b70                   ; 00542b39
        ;   XREF to: 00542b70 (UNCONDITIONAL_CALL)  ; undefined FUN_00542b70()
    MOV ECX,dword ptr [EBX + 0x1fa40]   ; 00542b3e
    ADD ESP,0x8                         ; 00542b44
    TEST ECX,ECX                        ; 00542b47
    JMP 0x00542b10                      ; 00542b49
        ;   XREF to: 00542b10 (UNCONDITIONAL_JUMP)  ; LAB_00542b10
    PUSH EDX                            ; 00542b4b
        ;   Label: LAB_00542b4b
    PUSH EBX                            ; 00542b4c
    CALL FUN_0042add0                   ; 00542b4d
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042add0()
    ADD ESP,0x8                         ; 00542b52
    JMP 0x00542b1e                      ; 00542b55
        ;   XREF to: 00542b1e (UNCONDITIONAL_JUMP)  ; LAB_00542b1e
    CMP EAX,0x65                        ; 00542b57
        ;   Label: LAB_00542b57
    JZ 0x00542b31                       ; 00542b5a
        ;   XREF to: 00542b31 (CONDITIONAL_JUMP)  ; LAB_00542b31
    PUSH EDX                            ; 00542b5c
    PUSH EBX                            ; 00542b5d
    CALL FUN_0042add0                   ; 00542b5e
        ;   XREF to: 0042add0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042add0()
    ADD ESP,0x8                         ; 00542b63
    JMP 0x00542b1e                      ; 00542b66
        ;   XREF to: 00542b1e (UNCONDITIONAL_JUMP)  ; LAB_00542b1e

