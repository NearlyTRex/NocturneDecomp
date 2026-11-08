; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499570(int param_1)
;
;
; XREF[1]:
;   FUN_0049c780 at 0049ca5e
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0044fcc0
;   FUN_0046b2b0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499570
        ;   Label: FUN_00499570
    MOV EBX,dword ptr [ESP + 0x8]       ; 00499571
    FLD float ptr [EBX + 0x3dc]         ; 00499575
    FLDZ                                ; 0049957b
    FCOMPP                              ; 0049957d
    FNSTSW AX                           ; 0049957f
    SAHF                                ; 00499581
    JC 0x00499586                       ; 00499582
        ;   XREF to: 00499586 (CONDITIONAL_JUMP)  ; LAB_00499586
    POP EBX                             ; 00499584
    RET                                 ; 00499585
    LEA EAX,[EBX + 0x180]               ; 00499586
        ;   Label: LAB_00499586
    PUSH EAX                            ; 0049958c
    MOV EDX,dword ptr [0x0060b280]      ; 0049958d | DAT_0060b280
    PUSH EDX                            ; 00499593 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 00499594
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 00499599
    PUSH 0x0                            ; 0049959c
    LEA EAX,[EBX + 0x18c]               ; 0049959e
    PUSH EAX                            ; 004995a4
    MOV ECX,dword ptr [0x0060b280]      ; 004995a5 | DAT_0060b280
    PUSH ECX                            ; 004995ab | DAT_01ba5c50
    CALL FUN_0046b350                   ; 004995ac
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 004995b1
    PUSH -0x1                           ; 004995b4
    ADD EBX,0x4                         ; 004995b6
    PUSH 0x0                            ; 004995b9
    PUSH EBX                            ; 004995bb
    CALL FUN_0044fcc0                   ; 004995bc
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004995c1
    MOV EBX,dword ptr [0x0060b280]      ; 004995c4 | DAT_0060b280
    PUSH EBX                            ; 004995ca | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 004995cb
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 004995d0
    POP EBX                             ; 004995d3
    RET                                 ; 004995d4

