; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e5c50(void)
;
;
; XREF[4]:
;   FUN_00550260 at 00550443
;   FUN_00550580 at 005508ac
;   FUN_00550da0 at 00550fb6
;   FUN_00551170 at 00551387
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061d95c
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf390
;   undefined4 DAT_01ccf3a4
;   undefined4 DAT_01cd0ed0
;   undefined4 DAT_01cd0ee8
;   undefined4 DAT_01cd0f18
;   undefined4 DAT_01cd0f30
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00483e60
;   FUN_004e3e50
;   FUN_00551c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5c50
        ;   Label: FUN_004e5c50
    PUSH ESI                            ; 004e5c51
    PUSH EBP                            ; 004e5c52
    MOV EBP,ESP                         ; 004e5c53
    AND ESP,0xfffffff8                  ; 004e5c55
    MOV EAX,[0x0061d95c]                ; 004e5c58 | DAT_0061d95c | DAT_01ccf390
    CMP dword ptr [EAX + 0x14],0x0      ; 004e5c5d | DAT_01ccf3a4
    JNZ 0x004e5c69                      ; 004e5c61
        ;   XREF to: 004e5c69 (CONDITIONAL_JUMP)  ; LAB_004e5c69
    MOV ESP,EBP                         ; 004e5c63
        ;   Label: LAB_004e5c63
    POP EBP                             ; 004e5c65
    POP ESI                             ; 004e5c66
    POP EBX                             ; 004e5c67
    RET                                 ; 004e5c68
    MOV ECX,dword ptr [0x00612560]      ; 004e5c69 | DAT_00612560
        ;   Label: LAB_004e5c69
    PUSH ECX                            ; 004e5c6f | DAT_01bc120c
    CALL FUN_00483e60                   ; 004e5c70
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 004e5c75
    TEST EAX,EAX                        ; 004e5c78
    JNZ 0x004e5c63                      ; 004e5c7a
        ;   XREF to: 004e5c63 (CONDITIONAL_JUMP)  ; LAB_004e5c63
    PUSH EAX                            ; 004e5c7c
    PUSH EAX                            ; 004e5c7d
    PUSH EAX                            ; 004e5c7e
    PUSH EAX                            ; 004e5c7f
    PUSH EAX                            ; 004e5c80
    MOV EBX,dword ptr [0x00622c18]      ; 004e5c81 | DAT_00622c18
    PUSH EBX                            ; 004e5c87 | DAT_01e82168
    CALL FUN_00551c30                   ; 004e5c88
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    ADD ESP,0x18                        ; 004e5c8d
    PUSH 0x1cd0eac                      ; 004e5c90
    MOV EBX,0x1cd0eac                   ; 004e5c95
    CALL FUN_004e3e50                   ; 004e5c9a
        ;   XREF to: 004e3e50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e3e50()
    LEA ESI,[EBX + 0x4800]              ; 004e5c9f
    ADD ESP,0x4                         ; 004e5ca5
    FLD float ptr [EBX + 0x24]          ; 004e5ca8 | DAT_01cd0ed0 | DAT_01cd0f18
        ;   Label: LAB_004e5ca8
    FLDZ                                ; 004e5cab
    FCOMPP                              ; 004e5cad
    FNSTSW AX                           ; 004e5caf
    SAHF                                ; 004e5cb1
    JNC 0x004e5cbe                      ; 004e5cb2
        ;   XREF to: 004e5cbe (CONDITIONAL_JUMP)  ; LAB_004e5cbe
    PUSH EBX                            ; 004e5cb4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004e5cb5 | DAT_01cd0ee8 | DAT_01cd0f30
    CALL dword ptr [EAX + 0x8]          ; 004e5cb8
    ADD ESP,0x4                         ; 004e5cbb
    ADD EBX,0x48                        ; 004e5cbe
        ;   Label: LAB_004e5cbe
    CMP EBX,ESI                         ; 004e5cc1
    JZ 0x004e5c63                       ; 004e5cc3
        ;   XREF to: 004e5c63 (CONDITIONAL_JUMP)  ; LAB_004e5c63
    JMP 0x004e5ca8                      ; 004e5cc5
        ;   XREF to: 004e5ca8 (UNCONDITIONAL_JUMP)  ; LAB_004e5ca8

