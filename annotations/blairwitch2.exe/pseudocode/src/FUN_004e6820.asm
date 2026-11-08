; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6820(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004e56d0 at 004e57a4
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00618170
;
; Called Functions:
;   FUN_0044fcc0
;   FUN_0044fd20
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6820
        ;   Label: FUN_004e6820
    PUSH ESI                            ; 004e6821
    PUSH EBP                            ; 004e6822
    MOV EBP,ESP                         ; 004e6823
    SUB ESP,0x4                         ; 004e6825
    MOV ESI,dword ptr [EBP + 0x10]      ; 004e6828
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e682b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e682e
    SUB EAX,EBX                         ; 004e6835
    SHL EAX,0x5                         ; 004e6837
    LEA EBX,[ESI + 0x149c]              ; 004e683a
    ADD EBX,EAX                         ; 004e6840
    MOV EAX,[0x00618170]                ; 004e6842 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 004e6847
    JNZ 0x004e6862                      ; 004e684e
        ;   XREF to: 004e6862 (CONDITIONAL_JUMP)  ; LAB_004e6862
    FLD float ptr [EBX + 0x18]          ; 004e6850
    FLDZ                                ; 004e6853
    FCOMPP                              ; 004e6855
    FNSTSW AX                           ; 004e6857
    SAHF                                ; 004e6859
    JC 0x004e6862                       ; 004e685a
        ;   XREF to: 004e6862 (CONDITIONAL_JUMP)  ; LAB_004e6862
    MOV ESP,EBP                         ; 004e685c
    POP EBP                             ; 004e685e
    POP ESI                             ; 004e685f
    POP EBX                             ; 004e6860
    RET                                 ; 004e6861
    LEA EAX,[EBX + 0x1c]                ; 004e6862
        ;   Label: LAB_004e6862
    PUSH EAX                            ; 004e6865
    LEA EAX,[EBX + 0x28]                ; 004e6866
    PUSH EAX                            ; 004e6869
    MOV ECX,dword ptr [0x0060b280]      ; 004e686a | DAT_0060b280
    PUSH ECX                            ; 004e6870
    CALL FUN_0046b350                   ; 004e6871
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 004e6876
    PUSH -0x1                           ; 004e6879
    ADD ESI,0x5ac                       ; 004e687b
    PUSH ESI                            ; 004e6881
    CALL FUN_0044fd20                   ; 004e6882
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EAX,dword ptr [EAX + 0x100]     ; 004e6887
    DEC EAX                             ; 004e688d
    MOV dword ptr [EBP + -0x4],EAX      ; 004e688e
    ADD ESP,0x4                         ; 004e6891
    FILD dword ptr [EBP + -0x4]         ; 004e6894
    FMUL float ptr [EBX + 0x18]         ; 004e6897
    SUB ESP,0x4                         ; 004e689a
    FSTP float ptr [ESP]                ; 004e689d
    PUSH ESI                            ; 004e68a0
    CALL FUN_0044fcc0                   ; 004e68a1
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004e68a6
    MOV EBX,dword ptr [0x0060b280]      ; 004e68a9 | DAT_0060b280
    PUSH EBX                            ; 004e68af
    CALL thunk_FUN_004e9810             ; 004e68b0
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 004e68b5
    MOV ESP,EBP                         ; 004e68b8
    POP EBP                             ; 004e68ba
    POP ESI                             ; 004e68bb
    POP EBX                             ; 004e68bc
    RET                                 ; 004e68bd

