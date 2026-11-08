; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591ce0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_stand_005f71e6
;
; Called Functions:
;   FUN_004ec570
;   FUN_005247c0
;   FUN_00524ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591ce0
        ;   Label: FUN_00591ce0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00591ce1
    PUSH EBX                            ; 00591ce5
    ADD EBX,0x158                       ; 00591ce6
    CALL FUN_004ec570                   ; 00591cec
        ;   XREF to: 004ec570 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec570()
    MOV dword ptr [EBX + 0x1fea8],0x0   ; 00591cf1
    ADD ESP,0x4                         ; 00591cfb
    MOV dword ptr [EBX + 0x1feac],0x0   ; 00591cfe
    PUSH 0x0                            ; 00591d08
    MOV dword ptr [EBX + 0x1fe04],0x0   ; 00591d0a
    PUSH 0x5f71e6                       ; 00591d14 | = "stand"
    MOV dword ptr [EBX + 0x2b40],0x0    ; 00591d19
    PUSH EBX                            ; 00591d23
    MOV dword ptr [EBX + 0x2b44],0x0    ; 00591d24
    CALL FUN_00524ae0                   ; 00591d2e
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00524ae0()
    ADD ESP,0xc                         ; 00591d33
    PUSH 0x1                            ; 00591d36
    PUSH 0x0                            ; 00591d38
    PUSH EBX                            ; 00591d3a
    CALL FUN_005247c0                   ; 00591d3b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 00591d40
    POP EBX                             ; 00591d43
    RET                                 ; 00591d44

