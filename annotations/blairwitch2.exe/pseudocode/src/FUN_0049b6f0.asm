; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049b6f0(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f64e4
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_007bda74
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_0044e6a0
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_0046b960
;   FUN_0046cad0
;   FUN_00530980
;   FUN_0055d9ec
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049b6f0
        ;   Label: FUN_0049b6f0
    PUSH ESI                            ; 0049b6f1
    PUSH EDI                            ; 0049b6f2
    PUSH EBP                            ; 0049b6f3
    SUB ESP,0xc                         ; 0049b6f4
    MOV ESI,dword ptr [ESP + 0x20]      ; 0049b6f7
    FLD float ptr [ESI + 0x24]          ; 0049b6fb
    FLDZ                                ; 0049b6fe
    FCOMPP                              ; 0049b700
    FNSTSW AX                           ; 0049b702
    SAHF                                ; 0049b704
    JC 0x0049b70f                       ; 0049b705
        ;   XREF to: 0049b70f (CONDITIONAL_JUMP)  ; LAB_0049b70f
    ADD ESP,0xc                         ; 0049b707
        ;   Label: LAB_0049b707
    POP EBP                             ; 0049b70a
    POP EDI                             ; 0049b70b
    POP ESI                             ; 0049b70c
    POP EBX                             ; 0049b70d
    RET                                 ; 0049b70e
    MOV EDI,dword ptr [0x0060b280]      ; 0049b70f | DAT_0060b280
        ;   Label: LAB_0049b70f
    MOV EBX,ESP                         ; 0049b715
    MOV EAX,ESI                         ; 0049b717
    MOV EDI,dword ptr [EDI]             ; 0049b719 | DAT_01ba5c50
    FLD float ptr [EAX]                 ; 0049b71b
    FMUL float ptr [0x005f64e4]         ; 0049b71d | DAT_005f64e4
    FISTP dword ptr [EBX]               ; 0049b723
    FLD float ptr [EAX + 0x4]           ; 0049b725
    FMUL float ptr [0x005f64e4]         ; 0049b728 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x4]         ; 0049b72e
    FLD float ptr [EAX + 0x8]           ; 0049b731
    FMUL float ptr [0x005f64e4]         ; 0049b734 | DAT_005f64e4
    FISTP dword ptr [EBX + 0x8]         ; 0049b73a
    MOV EAX,ESP                         ; 0049b73d
    PUSH EAX                            ; 0049b73f
    PUSH EDI                            ; 0049b740
    CALL FUN_0055d9ec                   ; 0049b741
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; undefined FUN_0055d9ec()
    ADD ESP,0x8                         ; 0049b746
    PUSH EDI                            ; 0049b749
    MOV EDX,dword ptr [0x0060b280]      ; 0049b74a | DAT_0060b280
    PUSH EDX                            ; 0049b750 | DAT_01ba5c50
    CALL FUN_0046cad0                   ; 0049b751
        ;   XREF to: 0046cad0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cad0()
    ADD ESP,0x8                         ; 0049b756
    TEST EAX,EAX                        ; 0049b759
    JZ 0x0049b707                       ; 0049b75b
        ;   XREF to: 0049b707 (CONDITIONAL_JUMP)  ; LAB_0049b707
    MOV ECX,dword ptr [0x0060b280]      ; 0049b75d | DAT_0060b280
    PUSH ECX                            ; 0049b763 | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0049b764
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0049b769
    TEST EAX,EAX                        ; 0049b76c
    JNZ 0x0049b782                      ; 0049b76e
        ;   XREF to: 0049b782 (CONDITIONAL_JUMP)  ; LAB_0049b782
    PUSH 0x0                            ; 0049b770
    MOV EAX,[0x007bda74]                ; 0049b772 | DAT_007bda74
    PUSH ESI                            ; 0049b777
    MOV EBX,dword ptr [EAX + 0x3c]      ; 0049b778
    PUSH EAX                            ; 0049b77b
    CALL dword ptr [EBX + 0x4]          ; 0049b77c
    ADD ESP,0xc                         ; 0049b77f
    PUSH 0x0                            ; 0049b782
        ;   Label: LAB_0049b782
    PUSH 0x265370c                      ; 0049b784 | DAT_0265370c
    PUSH 0x265370c                      ; 0049b789 | DAT_0265370c
    LEA EBX,[ESI + 0x40]                ; 0049b78e
    PUSH EBX                            ; 0049b791
    PUSH ESI                            ; 0049b792
    MOV EDI,dword ptr [0x0061b5a8]      ; 0049b793 | DAT_0061b5a8
    PUSH EDI                            ; 0049b799 | DAT_01e661b8
    CALL FUN_00530980                   ; 0049b79a
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; undefined FUN_00530980()
    ADD ESP,0x18                        ; 0049b79f
    PUSH ESI                            ; 0049b7a2
    MOV EBP,dword ptr [0x0060b280]      ; 0049b7a3 | DAT_0060b280
    PUSH EBP                            ; 0049b7a9 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 0049b7aa
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 0049b7af
    PUSH 0x0                            ; 0049b7b2
    PUSH EBX                            ; 0049b7b4
    MOV EAX,[0x0060b280]                ; 0049b7b5 | DAT_0060b280
    PUSH EAX                            ; 0049b7ba | DAT_01ba5c50
    CALL FUN_0046b350                   ; 0049b7bb
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 0049b7c0
    PUSH -0x1                           ; 0049b7c3
    PUSH 0x0                            ; 0049b7c5
    PUSH 0x0                            ; 0049b7c7
    MOV EDX,dword ptr [ESI + 0x5c]      ; 0049b7c9
    PUSH EDX                            ; 0049b7cc
    CALL FUN_0044e6a0                   ; 0049b7cd
        ;   XREF to: 0044e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044e6a0()
    ADD ESP,0x10                        ; 0049b7d2
    MOV ECX,dword ptr [0x0060b280]      ; 0049b7d5 | DAT_0060b280
    PUSH ECX                            ; 0049b7db | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049b7dc
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 0049b7e1
    ADD ESP,0xc                         ; 0049b7e4
    POP EBP                             ; 0049b7e7
    POP EDI                             ; 0049b7e8
    POP ESI                             ; 0049b7e9
    POP EBX                             ; 0049b7ea
    RET                                 ; 0049b7eb

