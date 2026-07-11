; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528890(void)
;
;
; XREF[20]:
;   FUN_005234b0 at 0052352e
;   FUN_005265a0 at 0052685d
;   FUN_00526c50 at 00526c6d
;   FUN_00526cd0 at 00526cf4
;   FUN_00526d10 at 00526d78
;   FUN_00526e10 at 00526e91
;   FUN_00526ea0 at 00526eef
;   FUN_00526ff0 at 00527047
;   FUN_005270d0 at 00527120
;   FUN_00527130 at 00527178
;   ... and 10 more
;
; Referenced Globals:
;   string s_..\\sound\\sndmain.cpp_00593979
;   string s_unlockSound_-_sound_was_not_lock_0059398e
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_02dc84b8
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   FUN_004c8440
;   FUN_00559c30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00528890
        ;   Label: FUN_00528890
    PUSH EDI                            ; 00528891
    CMP dword ptr [0x02dc84bc],0x1      ; 00528892 | DAT_02dc84bc
    JL 0x005288ba                       ; 00528899
        ;   XREF to: 005288ba (CONDITIONAL_JUMP)  ; LAB_005288ba
    MOV EDI,dword ptr [0x02dc84bc]      ; 0052889b | DAT_02dc84bc
        ;   Label: LAB_0052889b
    MOV ESI,dword ptr [0x02dc84b8]      ; 005288a1 | DAT_02dc84b8
    DEC EDI                             ; 005288a7
    PUSH ESI                            ; 005288a8
    MOV dword ptr [0x02dc84bc],EDI      ; 005288a9 | DAT_02dc84bc
    CALL FUN_00559c30                   ; 005288af
        ;   XREF to: 00559c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00559c30()
    ADD ESP,0x4                         ; 005288b4
    POP EDI                             ; 005288b7
    POP ESI                             ; 005288b8
    RET                                 ; 005288b9
    PUSH EBX                            ; 005288ba
        ;   Label: LAB_005288ba
    MOV ECX,0x593979                    ; 005288bb | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x130d                      ; 005288c0
    PUSH 0x59398e                       ; 005288c5 | = "unlockSound - sound was not locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 005288ca | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005288d0 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005288d6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005288db
    POP EBX                             ; 005288de
    JMP 0x0052889b                      ; 005288df
        ;   XREF to: 0052889b (UNCONDITIONAL_JUMP)  ; LAB_0052889b

