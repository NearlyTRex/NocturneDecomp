; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a5ec0(char *param_1)
;
;
; XREF[7]:
;   FUN_004b6f30 at 004b7adc
;   FUN_004b7f90 at 004b81c0
;   FUN_004ba540 at 004babc8
;   FUN_00503e20 at 00503e5a
;   FUN_005a9aec at 005a9b04
;   FUN_005ac558 at 005ac55d
;   FUN_005b0a70 at 005b0a7c
;
; Referenced Globals:
;   undefined4 DAT_02d25924
;
; Called Functions:
;   FUN_005acd10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5ec0
        ;   Label: FUN_005a5ec0
    PUSH ESI                            ; 005a5ec1
    PUSH EDI                            ; 005a5ec2
    PUSH EBP                            ; 005a5ec3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005a5ec4
    MOV ESI,dword ptr [0x02d25924]      ; 005a5ec8 | DAT_02d25924
    TEST ESI,ESI                        ; 005a5ece
    JZ 0x005a5f14                       ; 005a5ed0
        ;   XREF to: 005a5f14 (CONDITIONAL_JUMP)  ; LAB_005a5f14
    TEST EBP,EBP                        ; 005a5ed2
    JZ 0x005a5f14                       ; 005a5ed4
        ;   XREF to: 005a5f14 (CONDITIONAL_JUMP)  ; LAB_005a5f14
    MOV EDI,EBP                         ; 005a5ed6
    PUSH ES                             ; 005a5ed8
    MOV AX,DS                           ; 005a5ed9
    MOV ES,AX                           ; 005a5edb
    SUB ECX,ECX                         ; 005a5edd
    DEC ECX                             ; 005a5edf
    XOR EAX,EAX                         ; 005a5ee0
    SCASB.REPNE ES:EDI                  ; 005a5ee2
    NOT ECX                             ; 005a5ee4
    DEC ECX                             ; 005a5ee6
    POP ES                              ; 005a5ee7
    MOV EDI,ECX                         ; 005a5ee8
    JMP 0x005a5f0e                      ; 005a5eea
        ;   XREF to: 005a5f0e (UNCONDITIONAL_JUMP)  ; LAB_005a5f0e
    PUSH EDI                            ; 005a5eec
        ;   Label: LAB_005a5eec
    PUSH EBP                            ; 005a5eed
    PUSH EBX                            ; 005a5eee
    CALL FUN_005acd10                   ; 005a5eef
        ;   XREF to: 005acd10 (UNCONDITIONAL_CALL)  ; undefined FUN_005acd10()
    ADD ESP,0xc                         ; 005a5ef4
    TEST EAX,EAX                        ; 005a5ef7
    JNZ 0x005a5f0b                      ; 005a5ef9
        ;   XREF to: 005a5f0b (CONDITIONAL_JUMP)  ; LAB_005a5f0b
    CMP byte ptr [EDI + EBX*0x1],0x3d   ; 005a5efb
    JNZ 0x005a5f0b                      ; 005a5eff
        ;   XREF to: 005a5f0b (CONDITIONAL_JUMP)  ; LAB_005a5f0b
    LEA EAX,[EDI + 0x1]                 ; 005a5f01
    ADD EAX,EBX                         ; 005a5f04
    POP EBP                             ; 005a5f06
    POP EDI                             ; 005a5f07
    POP ESI                             ; 005a5f08
    POP EBX                             ; 005a5f09
    RET                                 ; 005a5f0a
    ADD ESI,0x4                         ; 005a5f0b
        ;   Label: LAB_005a5f0b
    MOV EBX,dword ptr [ESI]             ; 005a5f0e
        ;   Label: LAB_005a5f0e
    TEST EBX,EBX                        ; 005a5f10
    JNZ 0x005a5eec                      ; 005a5f12
        ;   XREF to: 005a5eec (CONDITIONAL_JUMP)  ; LAB_005a5eec
    XOR EAX,EAX                         ; 005a5f14
        ;   Label: LAB_005a5f14
    POP EBP                             ; 005a5f16
    POP EDI                             ; 005a5f17
    POP ESI                             ; 005a5f18
    POP EBX                             ; 005a5f19
    RET                                 ; 005a5f1a

