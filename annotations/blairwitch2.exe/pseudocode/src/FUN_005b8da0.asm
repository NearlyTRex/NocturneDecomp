; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8da0(byte *param_1,undefined1 *param_2,int param_3)
;
;
; XREF[17]:
;   FUN_00423a60 at 00424035
;   FUN_004281d0 at 004281f8
;   FUN_0042b2a0 at 0042b2d2
;   FUN_00486cb0 at 00486f1e
;   FUN_00489670 at 00489860
;   FUN_004a2cc0 at 004a2d94
;   FUN_004bbf70 at 004bc391
;   FUN_004fcd00 at 004fcd2f
;   FUN_00522350 at 00522576
;   FUN_00529a10 at 00529a8f
;   ... and 7 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8da0
        ;   Label: FUN_005b8da0
    PUSH ESI                            ; 005b8da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b8da2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b8da6
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b8daa
    TEST EDX,EDX                        ; 005b8dae
    JNZ 0x005b8db7                      ; 005b8db0
        ;   XREF to: 005b8db7 (CONDITIONAL_JUMP)  ; LAB_005b8db7
    XOR EAX,EAX                         ; 005b8db2
        ;   Label: LAB_005b8db2
    POP ESI                             ; 005b8db4
    POP EBX                             ; 005b8db5
    RET                                 ; 005b8db6
    MOV AL,byte ptr [EBX]               ; 005b8db7
        ;   Label: LAB_005b8db7
    MOV AH,byte ptr [ESI]               ; 005b8db9
    CMP AL,0x41                         ; 005b8dbb
    JC 0x005b8dc5                       ; 005b8dbd
        ;   XREF to: 005b8dc5 (CONDITIONAL_JUMP)  ; LAB_005b8dc5
    CMP AL,0x5a                         ; 005b8dbf
    JA 0x005b8dc5                       ; 005b8dc1
        ;   XREF to: 005b8dc5 (CONDITIONAL_JUMP)  ; LAB_005b8dc5
    ADD AL,0x20                         ; 005b8dc3
    CMP AH,0x41                         ; 005b8dc5
        ;   Label: LAB_005b8dc5
    JC 0x005b8dd2                       ; 005b8dc8
        ;   XREF to: 005b8dd2 (CONDITIONAL_JUMP)  ; LAB_005b8dd2
    CMP AH,0x5a                         ; 005b8dca
    JA 0x005b8dd2                       ; 005b8dcd
        ;   XREF to: 005b8dd2 (CONDITIONAL_JUMP)  ; LAB_005b8dd2
    ADD AH,0x20                         ; 005b8dcf
    CMP AL,AH                           ; 005b8dd2
        ;   Label: LAB_005b8dd2
    JZ 0x005b8de8                       ; 005b8dd4
        ;   XREF to: 005b8de8 (CONDITIONAL_JUMP)  ; LAB_005b8de8
    XOR EDX,EDX                         ; 005b8dd6
    MOV DL,AL                           ; 005b8dd8
    MOV AL,AH                           ; 005b8dda
    AND EAX,0xff                        ; 005b8ddc
    SUB EDX,EAX                         ; 005b8de1
    MOV EAX,EDX                         ; 005b8de3
    POP ESI                             ; 005b8de5
    POP EBX                             ; 005b8de6
    RET                                 ; 005b8de7
    TEST AH,AH                          ; 005b8de8
        ;   Label: LAB_005b8de8
    JNZ 0x005b8df1                      ; 005b8dea
        ;   XREF to: 005b8df1 (CONDITIONAL_JUMP)  ; LAB_005b8df1
    XOR EAX,EAX                         ; 005b8dec
    POP ESI                             ; 005b8dee
    POP EBX                             ; 005b8def
    RET                                 ; 005b8df0
    INC EBX                             ; 005b8df1
        ;   Label: LAB_005b8df1
    INC ESI                             ; 005b8df2
    DEC EDX                             ; 005b8df3
    JZ 0x005b8db2                       ; 005b8df4
        ;   XREF to: 005b8db2 (CONDITIONAL_JUMP)  ; LAB_005b8db2
    JMP 0x005b8db7                      ; 005b8df6
        ;   XREF to: 005b8db7 (UNCONDITIONAL_JUMP)  ; LAB_005b8db7

