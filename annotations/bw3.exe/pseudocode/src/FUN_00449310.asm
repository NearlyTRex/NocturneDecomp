; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_004dd3f0 at 004dd597
;   FUN_004dd5b0 at 004dd757
;   FUN_005388e0 at 00538a7a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00449310
        ;   Label: FUN_00449310
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 00449314
    CMP EDX,0x100                       ; 0044931a
    JL 0x00449329                       ; 00449320
        ;   XREF to: 00449329 (CONDITIONAL_JUMP)  ; LAB_00449329
    INC dword ptr [EAX + 0x1d0]         ; 00449322
    RET                                 ; 00449328
    PUSH EDI                            ; 00449329
        ;   Label: LAB_00449329
    PUSH ESI                            ; 0044932a
    SHL EDX,0x4                         ; 0044932b
    LEA ESI,[ESP + 0x10]                ; 0044932e
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 00449332
    MOVSD ES:EDI,ESI                    ; 00449339
    MOVSD ES:EDI,ESI                    ; 0044933a
    MOVSD ES:EDI,ESI                    ; 0044933b
    MOVSD ES:EDI,ESI                    ; 0044933c
    POP ESI                             ; 0044933d
    POP EDI                             ; 0044933e
    INC dword ptr [EAX + 0x1d0]         ; 0044933f
    RET                                 ; 00449345

