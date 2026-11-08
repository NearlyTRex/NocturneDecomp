; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b2a0(int param_1,float param_2)
;
;
; XREF[36]:
;   FUN_0040ef00 at 0040ef79
;   FUN_0040f950 at 0040fa1b
;   FUN_00411a10 at 00411a98
;   FUN_00412f40 at 00412fc8
;   FUN_00414e50 at 00414ebd
;   FUN_004186c0 at 00418af0
;   FUN_0041dbe0 at 0041dce1
;   FUN_00435830 at 004358d6
;   FUN_00436e80 at 00437357
;   FUN_004392b0 at 00439338
;   ... and 26 more
;
; Referenced Globals:
;   TerminatedCString s_ghost_005cd32a
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b44
;
; Called Functions:
;   FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b2a0
        ;   Label: FUN_0042b2a0
    PUSH EBP                            ; 0042b2a1
    MOV EBP,ESP                         ; 0042b2a2
    MOV EBX,dword ptr [EBP + 0xc]       ; 0042b2a4
    MOV EAX,[0x00616494]                ; 0042b2a7 | DAT_00616494
    CMP dword ptr [EAX + 0x244],0x0     ; 0042b2ac | DAT_01cb6b44
    JNZ 0x0042b2e1                      ; 0042b2b3
        ;   XREF to: 0042b2e1 (CONDITIONAL_JUMP)  ; LAB_0042b2e1
    FLD float ptr [EBX + 0x259c]        ; 0042b2b5
    FMUL float ptr [EBP + 0x10]         ; 0042b2bb
        ;   Label: LAB_0042b2bb
    FSTP float ptr [EBX + 0x2598]       ; 0042b2be
    PUSH 0x5                            ; 0042b2c4
    PUSH 0x5cd32a                       ; 0042b2c6 | = "ghost"
    LEA EAX,[EBX + 0x2514]              ; 0042b2cb
    PUSH EAX                            ; 0042b2d1
    CALL FUN_005b8da0                   ; 0042b2d2
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 0042b2d7
    TEST EAX,EAX                        ; 0042b2da
    JZ 0x0042b2e9                       ; 0042b2dc
        ;   XREF to: 0042b2e9 (CONDITIONAL_JUMP)  ; LAB_0042b2e9
    POP EBP                             ; 0042b2de
    POP EBX                             ; 0042b2df
    RET                                 ; 0042b2e0
    FLD float ptr [EBX + 0x25a0]        ; 0042b2e1
        ;   Label: LAB_0042b2e1
    JMP 0x0042b2bb                      ; 0042b2e7
        ;   XREF to: 0042b2bb (UNCONDITIONAL_JUMP)  ; LAB_0042b2bb
    FLD float ptr [EBX + 0x25a4]        ; 0042b2e9
        ;   Label: LAB_0042b2e9
    FMUL float ptr [EBP + 0x10]         ; 0042b2ef
    FSTP float ptr [EBX + 0x2598]       ; 0042b2f2
    POP EBP                             ; 0042b2f8
    POP EBX                             ; 0042b2f9
    RET                                 ; 0042b2fa

