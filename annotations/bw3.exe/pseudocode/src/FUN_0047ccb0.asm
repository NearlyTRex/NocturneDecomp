; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ccb0(void)
;
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   FUN_0047f970 at 0047f975
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   FUN_00565820
;   FUN_00565870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ccb0
        ;   Label: FUN_0047ccb0
    PUSH EBP                            ; 0047ccb1
    SUB ESP,0x12c0                      ; 0047ccb2
    CMP dword ptr [0x01c6cee8],0x0      ; 0047ccb8 | DAT_01c6cee8
    JZ 0x0047cd6d                       ; 0047ccbf
        ;   XREF to: 0047cd6d (CONDITIONAL_JUMP)  ; LAB_0047cd6d
    MOV ECX,dword ptr [0x005fba1c]      ; 0047ccc5 | DAT_005fba1c
    TEST ECX,ECX                        ; 0047cccb
    JLE 0x0047ccf0                      ; 0047cccd
        ;   XREF to: 0047ccf0 (CONDITIONAL_JUMP)  ; LAB_0047ccf0
    LEA EBX,[ECX*0x4 + 0x0]             ; 0047cccf
    XOR EAX,EAX                         ; 0047ccd6
    ADD EAX,0x4                         ; 0047ccd8
        ;   Label: LAB_0047ccd8
    MOV EDX,dword ptr [EAX + 0x1c5fae8] ; 0047ccdb | DAT_01c5faec | DAT_01c5faf0
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0047cce1
    CMP EAX,EBX                         ; 0047cce5
    JL 0x0047ccd8                       ; 0047cce7
        ;   XREF to: 0047ccd8 (CONDITIONAL_JUMP)  ; LAB_0047ccd8
    LEA EAX,[EAX]                       ; 0047cce9
    NOP                                 ; 0047ccef
    CALL FUN_00565820                   ; 0047ccf0
        ;   XREF to: 00565820 (UNCONDITIONAL_CALL)  ; undefined FUN_00565820()
        ;   Label: LAB_0047ccf0
    TEST EAX,EAX                        ; 0047ccf5
    JZ 0x0047cd6d                       ; 0047ccf7
        ;   XREF to: 0047cd6d (CONDITIONAL_JUMP)  ; LAB_0047cd6d
    PUSH EDI                            ; 0047ccfd
    PUSH ESI                            ; 0047ccfe
    MOV EBX,dword ptr [0x005fba20]      ; 0047ccff | DAT_005fba20
    MOV EDX,dword ptr [0x005fba18]      ; 0047cd05 | DAT_005fba18
    IMUL EDX,EBX                        ; 0047cd0b
    MOV EAX,EDX                         ; 0047cd0e
    SAR EDX,0x1f                        ; 0047cd10
    SHL EDX,0x3                         ; 0047cd13
    SBB EAX,EDX                         ; 0047cd16
    SAR EAX,0x3                         ; 0047cd18
    MOV ESI,dword ptr [0x005fba1c]      ; 0047cd1b | DAT_005fba1c
    XOR EBX,EBX                         ; 0047cd21
    MOV EBP,EAX                         ; 0047cd23
    TEST ESI,ESI                        ; 0047cd25
    JLE 0x0047cd61                      ; 0047cd27
        ;   XREF to: 0047cd61 (CONDITIONAL_JUMP)  ; LAB_0047cd61
    XOR EDX,EDX                         ; 0047cd29
    MOV EAX,dword ptr [EDX + 0x1c5faec] ; 0047cd2b | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_0047cd2b
    TEST EAX,EAX                        ; 0047cd31
    JZ 0x0047cd53                       ; 0047cd33
        ;   XREF to: 0047cd53 (CONDITIONAL_JUMP)  ; LAB_0047cd53
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x8] ; 0047cd35
    TEST ECX,ECX                        ; 0047cd39
    JZ 0x0047cd53                       ; 0047cd3b
        ;   XREF to: 0047cd53 (CONDITIONAL_JUMP)  ; LAB_0047cd53
    MOV ESI,ECX                         ; 0047cd3d
    MOV EDI,EAX                         ; 0047cd3f
    MOV ECX,EBP                         ; 0047cd41
    PUSH EDI                            ; 0047cd43
    MOV EAX,ECX                         ; 0047cd44
    SHR ECX,0x2                         ; 0047cd46
    MOVSD.REP ES:EDI,ESI                ; 0047cd49
    MOV CL,AL                           ; 0047cd4b
    AND CL,0x3                          ; 0047cd4d
    MOVSB.REP ES:EDI,ESI                ; 0047cd50
    POP EDI                             ; 0047cd52
    MOV EDI,dword ptr [0x005fba1c]      ; 0047cd53 | DAT_005fba1c
        ;   Label: LAB_0047cd53
    INC EBX                             ; 0047cd59
    ADD EDX,0x4                         ; 0047cd5a
    CMP EBX,EDI                         ; 0047cd5d
    JL 0x0047cd2b                       ; 0047cd5f
        ;   XREF to: 0047cd2b (CONDITIONAL_JUMP)  ; LAB_0047cd2b
    PUSH 0x1                            ; 0047cd61
        ;   Label: LAB_0047cd61
    CALL FUN_00565870                   ; 0047cd63
        ;   XREF to: 00565870 (UNCONDITIONAL_CALL)  ; undefined FUN_00565870()
    ADD ESP,0x4                         ; 0047cd68
    POP ESI                             ; 0047cd6b
    POP EDI                             ; 0047cd6c
    ADD ESP,0x12c0                      ; 0047cd6d
        ;   Label: LAB_0047cd6d
    POP EBP                             ; 0047cd73
    POP EBX                             ; 0047cd74
    RET                                 ; 0047cd75

