; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f9580(int *param_1)
;
;
; XREF[3]:
;   FUN_004ea280 at 004ea48e
;   FUN_004ea4d0 at 004ea84a
;   FUN_004f9450 at 004f9456
;
; Called Functions:
;   FUN_0040d400
;   FUN_00460e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9580
        ;   Label: FUN_004f9580
    PUSH EDI                            ; 004f9581
    MOV EDI,dword ptr [ESP + 0xc]       ; 004f9582
    CMP dword ptr [EDI],0x0             ; 004f9586
    JNZ 0x004f95b8                      ; 004f9589
        ;   XREF to: 004f95b8 (CONDITIONAL_JUMP)  ; LAB_004f95b8
    LEA EBX,[EDI + 0x8]                 ; 004f958b
        ;   Label: LAB_004f958b
    PUSH EBX                            ; 004f958e
    CALL FUN_00460e10                   ; 004f958f
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 004f9594
    LEA EBX,[EDI + 0x3a0]               ; 004f9597
    PUSH EBX                            ; 004f959d
    CALL FUN_00460e10                   ; 004f959e
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 004f95a3
    ADD EDI,0x738                       ; 004f95a6
    PUSH EDI                            ; 004f95ac
    CALL FUN_00460e10                   ; 004f95ad
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460e10()
    ADD ESP,0x4                         ; 004f95b2
    POP EDI                             ; 004f95b5
    POP EBX                             ; 004f95b6
    RET                                 ; 004f95b7
    PUSH ESI                            ; 004f95b8
        ;   Label: LAB_004f95b8
    PUSH 0x1d883a8                      ; 004f95b9
    CALL FUN_0040d400                   ; 004f95be
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004f95c3
    MOV EBX,0x1d883bc                   ; 004f95c6
    PUSH 0x1d88614                      ; 004f95cb
    LEA ESI,[EBX + 0x258]               ; 004f95d0
    CALL FUN_0040d400                   ; 004f95d6
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004f95db
    PUSH EBX                            ; 004f95de
        ;   Label: LAB_004f95de
    CALL FUN_0040d400                   ; 004f95df
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD EBX,0x14                        ; 004f95e4
    ADD ESP,0x4                         ; 004f95e7
    CMP EBX,ESI                         ; 004f95ea
    JNZ 0x004f95de                      ; 004f95ec
        ;   XREF to: 004f95de (CONDITIONAL_JUMP)  ; LAB_004f95de
    MOV dword ptr [EDI],0x0             ; 004f95ee
    POP ESI                             ; 004f95f4
    JMP 0x004f958b                      ; 004f95f5
        ;   XREF to: 004f958b (UNCONDITIONAL_JUMP)  ; LAB_004f958b

