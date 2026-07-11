; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00403f50(void)
;
;
; XREF[23]:
;   FUN_0046f7e0 at 0046f82d
;   FUN_0046fb40 at 0046fc9a
;   FUN_0046fcd0 at 0046fe2a
;   FUN_0046fe60 at 0046ffba
;   FUN_00470eb0 at 00471281
;   FUN_00474d70 at 00474e32
;   FUN_00475470 at 0047594a
;   FUN_0049da10 at 0049de84
;   FUN_004a57c0 at 004a5b60
;   FUN_004a6010 at 004a6186
;   ... and 13 more
;
; Called Functions:
;   FUN_00558a30
;   FUN_00558ae0
;   FUN_00558d50
;
; *****************************************************************************

section .text

    CALL FUN_00558ae0                   ; 00403f50
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558ae0()
        ;   Label: FUN_00403f50
    CALL FUN_00558d50                   ; 00403f55
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00558d50()
    XOR EAX,EAX                         ; 00403f5a
    INC EAX                             ; 00403f5c
        ;   Label: LAB_00403f5c
    XOR DL,DL                           ; 00403f5d
    MOV byte ptr [EAX + 0x1c02597],DL   ; 00403f5f
    CMP EAX,0x258                       ; 00403f65
    JL 0x00403f5c                       ; 00403f6a
        ;   XREF to: 00403f5c (CONDITIONAL_JUMP)  ; LAB_00403f5c
    PUSH EBX                            ; 00403f6c
    CALL FUN_00558a30                   ; 00403f6d
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
    MOV EBX,EAX                         ; 00403f72
    SAR EBX,0x10                        ; 00403f74
    CALL FUN_00558a30                   ; 00403f77
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00558a30()
        ;   Label: LAB_00403f77
    SAR EAX,0x10                        ; 00403f7c
    CMP EBX,EAX                         ; 00403f7f
    JZ 0x00403fa1                       ; 00403f81
        ;   XREF to: 00403fa1 (CONDITIONAL_JUMP)  ; LAB_00403fa1
    CALL FUN_00558ae0                   ; 00403f83
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558ae0()
    CALL FUN_00558d50                   ; 00403f88
        ;   XREF to: 00558d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00558d50()
    XOR EAX,EAX                         ; 00403f8d
    POP EBX                             ; 00403f8f
    INC EAX                             ; 00403f90
        ;   Label: LAB_00403f90
    XOR DH,DH                           ; 00403f91
    MOV byte ptr [EAX + 0x1c02597],DH   ; 00403f93
    CMP EAX,0x258                       ; 00403f99
    JL 0x00403f90                       ; 00403f9e
        ;   XREF to: 00403f90 (CONDITIONAL_JUMP)  ; LAB_00403f90
    RET                                 ; 00403fa0
    CALL FUN_00558ae0                   ; 00403fa1
        ;   XREF to: 00558ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00558ae0()
        ;   Label: LAB_00403fa1
    JMP 0x00403f77                      ; 00403fa6
        ;   XREF to: 00403f77 (UNCONDITIONAL_JUMP)  ; LAB_00403f77

