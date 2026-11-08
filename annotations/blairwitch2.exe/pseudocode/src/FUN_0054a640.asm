; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054a640(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e7805
;   undefined4 DAT_02628618
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00408d70
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a640
        ;   Label: FUN_0054a640
    PUSH EBP                            ; 0054a641
    SUB ESP,0x30                        ; 0054a642
    MOV EBP,dword ptr [ESP + 0x3c]      ; 0054a645
    MOV EBX,dword ptr [ESP + 0x40]      ; 0054a649
    TEST EBX,EBX                        ; 0054a64d
    JNZ 0x0054a659                      ; 0054a64f
        ;   XREF to: 0054a659 (CONDITIONAL_JUMP)  ; LAB_0054a659
    XOR EAX,EAX                         ; 0054a651
    ADD ESP,0x30                        ; 0054a653
    POP EBP                             ; 0054a656
    POP EBX                             ; 0054a657
    RET                                 ; 0054a658
    PUSH EBP                            ; 0054a659
        ;   Label: LAB_0054a659
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0054a65a
    CALL dword ptr [EAX + 0x114]        ; 0054a660
    ADD ESP,0x4                         ; 0054a666
    TEST EAX,EAX                        ; 0054a669
    JZ 0x0054a688                       ; 0054a66b
        ;   XREF to: 0054a688 (CONDITIONAL_JUMP)  ; LAB_0054a688
    PUSH EBX                            ; 0054a66d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0054a66e
    CALL dword ptr [EAX + 0xf8]         ; 0054a674
    MOV EAX,0x1                         ; 0054a67a
    ADD ESP,0x4                         ; 0054a67f
    ADD ESP,0x30                        ; 0054a682
    POP EBP                             ; 0054a685
    POP EBX                             ; 0054a686
    RET                                 ; 0054a687
    PUSH EDI                            ; 0054a688
        ;   Label: LAB_0054a688
    PUSH ESI                            ; 0054a689
    MOV ESI,dword ptr [0x02628618]      ; 0054a68a | DAT_02628618
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054a690
    SUB EAX,ESI                         ; 0054a697
    SHL EAX,0x4                         ; 0054a699
    LEA ESI,[EBP + 0x1134]              ; 0054a69c
    ADD EAX,ESI                         ; 0054a6a2
    PUSH EAX                            ; 0054a6a4
    PUSH 0x265370c                      ; 0054a6a5 | DAT_0265370c
    LEA ESI,[ESP + 0x34]                ; 0054a6aa
    LEA EDI,[ESP + 0x1c]                ; 0054a6ae
    CALL FUN_00591530                   ; 0054a6b2
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0054a6b7
    LEA EAX,[ESP + 0x14]                ; 0054a6ba
    LEA ESI,[ESP + 0x2c]                ; 0054a6be
    PUSH EAX                            ; 0054a6c2
    MOVSD ES:EDI,ESI                    ; 0054a6c3
    MOVSD ES:EDI,ESI                    ; 0054a6c4
    MOVSD ES:EDI,ESI                    ; 0054a6c5
    PUSH EBP                            ; 0054a6c6
    LEA ESI,[ESP + 0x10]                ; 0054a6c7
    LEA EDI,[ESP + 0x28]                ; 0054a6cb
    CALL FUN_00408d70                   ; 0054a6cf
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0054a6d4
    LEA EAX,[EBX + 0x30]                ; 0054a6d7
    LEA ESI,[ESP + 0x8]                 ; 0054a6da
    PUSH EAX                            ; 0054a6de
    MOVSD ES:EDI,ESI                    ; 0054a6df
    MOVSD ES:EDI,ESI                    ; 0054a6e0
    MOVSD ES:EDI,ESI                    ; 0054a6e1
    LEA EAX,[ESP + 0x24]                ; 0054a6e2
    FLD float ptr [ESP + 0x28]          ; 0054a6e6
    PUSH EAX                            ; 0054a6ea
    FADD float ptr [0x005e7805]         ; 0054a6eb | DAT_005e7805
    PUSH EBX                            ; 0054a6f1
    FSTP float ptr [ESP + 0x30]         ; 0054a6f2
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0054a6f6
    CALL dword ptr [ESI + 0x70]         ; 0054a6fc
    MOV EAX,0x1                         ; 0054a6ff
    ADD ESP,0xc                         ; 0054a704
    POP ESI                             ; 0054a707
    POP EDI                             ; 0054a708
    ADD ESP,0x30                        ; 0054a709
    POP EBP                             ; 0054a70c
    POP EBX                             ; 0054a70d
    RET                                 ; 0054a70e

