; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510b90(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004d30d0 at 004d3153
;
; Referenced Globals:
;   undefined4 DAT_005e1581
;   undefined4 DAT_005e1585
;   TerminatedCString s_DAMAGE_005e158a
;   undefined4 DAT_005e1591
;
; Called Functions:
;   FUN_00427fb0
;   FUN_00428e00
;   FUN_00510ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510b90
        ;   Label: FUN_00510b90
    PUSH ESI                            ; 00510b91
    PUSH EDI                            ; 00510b92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00510b93
    MOV EDI,dword ptr [ESP + 0x14]      ; 00510b97
    PUSH EBX                            ; 00510b9b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00510b9c
    CALL dword ptr [EAX + 0xd4]         ; 00510ba2
    ADD ESP,0x4                         ; 00510ba8
    CMP EAX,0x1d65404                   ; 00510bab
    JNZ 0x00510c09                      ; 00510bb0
        ;   XREF to: 00510c09 (CONDITIONAL_JUMP)  ; LAB_00510c09
    FLD float ptr [EDI + 0x4]           ; 00510bb2
    FSUBR float ptr [EBX + 0x25a8]      ; 00510bb5
    LEA ESI,[EBX + 0x2b4]               ; 00510bbb
    FST float ptr [EBX + 0x25a8]        ; 00510bc1
    FLDZ                                ; 00510bc7
    FCOMPP                              ; 00510bc9
    FNSTSW AX                           ; 00510bcb
    SAHF                                ; 00510bcd
    JNC 0x00510c17                      ; 00510bce
        ;   XREF to: 00510c17 (CONDITIONAL_JUMP)  ; LAB_00510c17
    FLD float ptr [EDI + 0x4]           ; 00510bd0
    FLDZ                                ; 00510bd3
    FCOMPP                              ; 00510bd5
    FNSTSW AX                           ; 00510bd7
    SAHF                                ; 00510bd9
    JNC 0x00510c09                      ; 00510bda
        ;   XREF to: 00510c09 (CONDITIONAL_JUMP)  ; LAB_00510c09
    CMP dword ptr [EBX + 0x276c],0x0    ; 00510bdc
    JNZ 0x00510c09                      ; 00510be3
        ;   XREF to: 00510c09 (CONDITIONAL_JUMP)  ; LAB_00510c09
    PUSH 0x5e1585                       ; 00510be5 | DAT_005e1585
    PUSH ESI                            ; 00510bea
    CALL FUN_00510ab0                   ; 00510beb
        ;   XREF to: 00510ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ab0()
    ADD ESP,0x8                         ; 00510bf0
    TEST EAX,EAX                        ; 00510bf3
    JNZ 0x00510c09                      ; 00510bf5
        ;   XREF to: 00510c09 (CONDITIONAL_JUMP)  ; LAB_00510c09
    PUSH 0x5e158a                       ; 00510bf7 | = "DAMAGE"
    PUSH ESI                            ; 00510bfc
    CALL FUN_00510ab0                   ; 00510bfd
        ;   XREF to: 00510ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ab0()
    ADD ESP,0x8                         ; 00510c02
    TEST EAX,EAX                        ; 00510c05
    JZ 0x00510c51                       ; 00510c07
        ;   XREF to: 00510c51 (CONDITIONAL_JUMP)  ; LAB_00510c51
    PUSH EDI                            ; 00510c09
        ;   Label: LAB_00510c09
    PUSH EBX                            ; 00510c0a
    CALL FUN_00427fb0                   ; 00510c0b
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427fb0()
    ADD ESP,0x8                         ; 00510c10
    POP EDI                             ; 00510c13
    POP ESI                             ; 00510c14
    POP EBX                             ; 00510c15
    RET                                 ; 00510c16
    PUSH 0x41c80000                     ; 00510c17
        ;   Label: LAB_00510c17
    PUSH 0x32                           ; 00510c1c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00510c1e
    PUSH EBX                            ; 00510c24
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00510c25
    CALL dword ptr [EAX + 0xb0]         ; 00510c2f
    ADD ESP,0xc                         ; 00510c35
    PUSH EBX                            ; 00510c38
    CALL FUN_00428e00                   ; 00510c39
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428e00()
    ADD ESP,0x4                         ; 00510c3e
    PUSH 0x5e1581                       ; 00510c41 | DAT_005e1581
    PUSH ESI                            ; 00510c46
    CALL FUN_00510ab0                   ; 00510c47
        ;   XREF to: 00510ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ab0()
    ADD ESP,0x8                         ; 00510c4c
    JMP 0x00510c09                      ; 00510c4f
        ;   XREF to: 00510c09 (UNCONDITIONAL_JUMP)  ; LAB_00510c09
    PUSH 0x5e1591                       ; 00510c51 | DAT_005e1591
        ;   Label: LAB_00510c51
    PUSH ESI                            ; 00510c56
    CALL FUN_00510ab0                   ; 00510c57
        ;   XREF to: 00510ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00510ab0()
    ADD ESP,0x8                         ; 00510c5c
    PUSH EDI                            ; 00510c5f
    PUSH EBX                            ; 00510c60
    CALL FUN_00427fb0                   ; 00510c61
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00427fb0()
    ADD ESP,0x8                         ; 00510c66
    POP EDI                             ; 00510c69
    POP ESI                             ; 00510c6a
    POP EBX                             ; 00510c6b
    RET                                 ; 00510c6c

