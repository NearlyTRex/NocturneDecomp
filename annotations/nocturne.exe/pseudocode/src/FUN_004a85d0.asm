; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a85d0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 s_gargoyle-shatter.wav_00584a6f+1
;   string s_gargoyle-hurt?.wav_00584a85
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   FUN_0040a240
;   FUN_00427b60
;   FUN_00479f70
;   FUN_0048ae90
;   FUN_004a8330
;   FUN_004e1660
;   FUN_004e16b0
;   FUN_00526c50
;   FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a85d0
        ;   Label: FUN_004a85d0
    PUSH ESI                            ; 004a85d1
    PUSH EDI                            ; 004a85d2
    PUSH EBP                            ; 004a85d3
    SUB ESP,0xc                         ; 004a85d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a85d7
    MOV EDI,dword ptr [ESP + 0x24]      ; 004a85db
    LEA EAX,[EDI + 0x1c]                ; 004a85df
    PUSH EAX                            ; 004a85e2
    LEA EAX,[ESP + 0x4]                 ; 004a85e3
    PUSH EAX                            ; 004a85e7
    PUSH ESI                            ; 004a85e8
    XOR EBX,EBX                         ; 004a85e9
    CALL FUN_0040a240                   ; 004a85eb
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004a85f0
    PUSH 0xffff                         ; 004a85f3
        ;   Label: LAB_004a85f3
    PUSH 0x0                            ; 004a85f8
    PUSH 0x8000                         ; 004a85fa
    PUSH 0x10000                        ; 004a85ff
    PUSH 0x0                            ; 004a8604
    LEA EAX,[ESP + 0x14]                ; 004a8606
    PUSH EAX                            ; 004a860a
    MOV EDX,dword ptr [0x005b80f0]      ; 004a860b | DAT_005b80f0
    PUSH EDX                            ; 004a8611
    INC EBX                             ; 004a8612
    CALL FUN_0048ae90                   ; 004a8613
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; undefined FUN_0048ae90()
    ADD ESP,0x1c                        ; 004a8618
    CMP EBX,0x3                         ; 004a861b
    JL 0x004a85f3                       ; 004a861e
        ;   XREF to: 004a85f3 (CONDITIONAL_JUMP)  ; LAB_004a85f3
    LEA EBX,[ESI + 0x150]               ; 004a8620
    PUSH EBX                            ; 004a8626
    CALL FUN_004e1660                   ; 004a8627
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004a862c
    ADD ESP,0x4                         ; 004a862f
    CMP EAX,0x5                         ; 004a8632
    JZ 0x004a86ce                       ; 004a8635
        ;   XREF to: 004a86ce (CONDITIONAL_JUMP)  ; LAB_004a86ce
    PUSH EDI                            ; 004a863b
    PUSH ESI                            ; 004a863c
    CALL FUN_004a8330                   ; 004a863d
        ;   XREF to: 004a8330 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8330()
    FLD float ptr [EDI + 0x4]           ; 004a8642
    FSUBR float ptr [ESI + 0x2434]      ; 004a8645
    ADD ESP,0x8                         ; 004a864b
    FST float ptr [ESI + 0x2434]        ; 004a864e
    FLDZ                                ; 004a8654
    FCOMPP                              ; 004a8656
    FNSTSW AX                           ; 004a8658
    SAHF                                ; 004a865a
    JC 0x004a86e7                       ; 004a865b
        ;   XREF to: 004a86e7 (CONDITIONAL_JUMP)  ; LAB_004a86e7
    MOV EBP,dword ptr [ESI + 0xbd64]    ; 004a8661
    PUSH EBP                            ; 004a8667
    CALL FUN_00527230                   ; 004a8668
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined FUN_00527230()
    ADD ESP,0x4                         ; 004a866d
    PUSH EBX                            ; 004a8670
    MOV dword ptr [ESI + 0x2434],0x0    ; 004a8671
    CALL FUN_004e1660                   ; 004a867b
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004a8680
    ADD ESP,0x4                         ; 004a8683
    CMP EAX,0x8                         ; 004a8686
    JZ 0x004a86bc                       ; 004a8689
        ;   XREF to: 004a86bc (CONDITIONAL_JUMP)  ; LAB_004a86bc
    PUSH 0x1                            ; 004a868b
    PUSH 0x8                            ; 004a868d
    PUSH EBX                            ; 004a868f
    CALL FUN_004e16b0                   ; 004a8690
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004a8695
    PUSH 0x584a70                       ; 004a8698 | s_gargoyle-shatter.wav_00584a6f+1
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004a869d
    PUSH ESI                            ; 004a86a3
    CALL dword ptr [EAX + 0x24]         ; 004a86a4
    ADD ESP,0x8                         ; 004a86a7
    PUSH 0x1                            ; 004a86aa
    PUSH 0xbf800000                     ; 004a86ac
    PUSH 0x0                            ; 004a86b1
    PUSH ESI                            ; 004a86b3
    CALL FUN_00427b60                   ; 004a86b4
        ;   XREF to: 00427b60 (UNCONDITIONAL_CALL)  ; undefined FUN_00427b60()
    ADD ESP,0x10                        ; 004a86b9
    PUSH EDI                            ; 004a86bc
        ;   Label: LAB_004a86bc
    PUSH ESI                            ; 004a86bd
    CALL FUN_00479f70                   ; 004a86be
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004a86c3
    ADD ESP,0xc                         ; 004a86c6
    POP EBP                             ; 004a86c9
    POP EDI                             ; 004a86ca
    POP ESI                             ; 004a86cb
    POP EBX                             ; 004a86cc
    RET                                 ; 004a86cd
    PUSH EDI                            ; 004a86ce
        ;   Label: LAB_004a86ce
    PUSH ESI                            ; 004a86cf
    MOV dword ptr [EDI + 0x4],0x0       ; 004a86d0
    CALL FUN_00479f70                   ; 004a86d7
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004a86dc
    ADD ESP,0xc                         ; 004a86df
    POP EBP                             ; 004a86e2
    POP EDI                             ; 004a86e3
    POP ESI                             ; 004a86e4
    POP EBX                             ; 004a86e5
    RET                                 ; 004a86e6
    MOV ECX,dword ptr [ESI + 0xbd64]    ; 004a86e7
        ;   Label: LAB_004a86e7
    PUSH ECX                            ; 004a86ed
    CALL FUN_00526c50                   ; 004a86ee
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00526c50()
    ADD ESP,0x4                         ; 004a86f3
    TEST EAX,EAX                        ; 004a86f6
    JNZ 0x004a86bc                      ; 004a86f8
        ;   XREF to: 004a86bc (CONDITIONAL_JUMP)  ; LAB_004a86bc
    PUSH 0x584a85                       ; 004a86fa | = "gargoyle-hurt?.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004a86ff
    PUSH ESI                            ; 004a8705
    CALL dword ptr [EAX + 0x24]         ; 004a8706
    ADD ESP,0x8                         ; 004a8709
    MOV dword ptr [ESI + 0xbd64],EAX    ; 004a870c
    PUSH EDI                            ; 004a8712
    PUSH ESI                            ; 004a8713
    CALL FUN_00479f70                   ; 004a8714
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00479f70()
    ADD ESP,0x8                         ; 004a8719
    ADD ESP,0xc                         ; 004a871c
    POP EBP                             ; 004a871f
    POP EDI                             ; 004a8720
    POP ESI                             ; 004a8721
    POP EBX                             ; 004a8722
    RET                                 ; 004a8723

