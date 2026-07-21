; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEdScrollBar_computeThumb_FUN_00476800(int *param_1)
;
;
; XREF[2]:
;   FUN_00476580 at 0047658d
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_00476920 at 00476932
;
; Referenced Globals:
;   string s_..\\shape\\edittool.cpp_0057f0b4
;   string s_CEdScrollBar::computeThumb_-_inv_0057f0ca
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476800
        ;   Label: shape_edittool.cpp_CEdScrollBar_computeThumb_FUN_00476800
    PUSH ESI                            ; 00476801
    PUSH EDI                            ; 00476802
    PUSH EBP                            ; 00476803
    MOV EBX,dword ptr [ESP + 0x14]      ; 00476804
    MOV EDX,dword ptr [EBX + 0x4]       ; 00476808
    CMP EDX,dword ptr [EBX + 0x8]       ; 0047680b
    JLE 0x004768b9                      ; 0047680e
        ;   XREF to: 004768b9 (CONDITIONAL_JUMP)  ; LAB_004768b9
    CMP EDX,0x1                         ; 00476814
    JL 0x004768b9                       ; 00476817
        ;   XREF to: 004768b9 (CONDITIONAL_JUMP)  ; LAB_004768b9
    MOV EDI,dword ptr [EBX + 0x24]      ; 0047681d
    MOV ESI,dword ptr [EBX + 0x28]      ; 00476820
    SUB ESI,EDI                         ; 00476823
    CMP ESI,0x1                         ; 00476825
    JL 0x004768ca                       ; 00476828
        ;   XREF to: 004768ca (CONDITIONAL_JUMP)  ; LAB_004768ca
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047682e
        ;   Label: LAB_0047682e
    IMUL EDX,ESI                        ; 00476831
    MOV ECX,dword ptr [EBX + 0x4]       ; 00476834
    MOV EAX,EDX                         ; 00476837
    SAR EDX,0x1f                        ; 00476839
    IDIV ECX                            ; 0047683c
    MOV EDI,dword ptr [EBX + 0x10]      ; 0047683e
    MOV ECX,EAX                         ; 00476841
    TEST EDI,EDI                        ; 00476843
    JZ 0x004768f1                       ; 00476845
        ;   XREF to: 004768f1 (CONDITIONAL_JUMP)  ; LAB_004768f1
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047684b
    MOV EDX,dword ptr [EBX + 0x20]      ; 0047684e
    SUB EDX,EAX                         ; 00476851
    CMP ECX,EDX                         ; 00476853
    JGE 0x00476859                      ; 00476855
        ;   XREF to: 00476859 (CONDITIONAL_JUMP)  ; LAB_00476859
        ;   Label: LAB_00476855
    MOV ECX,EDX                         ; 00476857
    CMP ECX,ESI                         ; 00476859
        ;   Label: LAB_00476859
    JLE 0x0047685f                      ; 0047685b
        ;   XREF to: 0047685f (CONDITIONAL_JUMP)  ; LAB_0047685f
    MOV ECX,ESI                         ; 0047685d
    MOV EDI,dword ptr [EBX + 0x8]       ; 0047685f
        ;   Label: LAB_0047685f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00476862
    SUB EDX,EDI                         ; 00476865
    MOV EDI,EDX                         ; 00476867
    MOV EDX,ESI                         ; 00476869
    MOV EBP,dword ptr [EBX]             ; 0047686b
    SUB EDX,ECX                         ; 0047686d
    IMUL EDX,EBP                        ; 0047686f
    MOV EAX,EDX                         ; 00476872
    SAR EDX,0x1f                        ; 00476874
    IDIV EDI                            ; 00476877
    MOV EDX,dword ptr [EBX + 0x24]      ; 00476879
    ADD EDX,EAX                         ; 0047687c
    MOV dword ptr [EBX + 0x2c],EDX      ; 0047687e
    MOV EAX,EDX                         ; 00476881
    MOV EDX,dword ptr [EBX + 0x24]      ; 00476883
    CMP EAX,EDX                         ; 00476886
    JGE 0x0047688d                      ; 00476888
        ;   XREF to: 0047688d (CONDITIONAL_JUMP)  ; LAB_0047688d
    MOV dword ptr [EBX + 0x2c],EDX      ; 0047688a
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0047688d
        ;   Label: LAB_0047688d
    ADD EDX,ECX                         ; 00476890
    MOV ECX,dword ptr [EBX + 0x28]      ; 00476892
    MOV dword ptr [EBX + 0x30],EDX      ; 00476895
    CMP EDX,ECX                         ; 00476898
    JLE 0x004768ac                      ; 0047689a
        ;   XREF to: 004768ac (CONDITIONAL_JUMP)  ; LAB_004768ac
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0047689c
    SUB EDX,ECX                         ; 0047689f
    MOV EAX,dword ptr [EBX + 0x28]      ; 004768a1
    SUB EDI,EDX                         ; 004768a4
    MOV dword ptr [EBX + 0x30],EAX      ; 004768a6
    MOV dword ptr [EBX + 0x2c],EDI      ; 004768a9
    MOV EBP,dword ptr [EBX + 0x24]      ; 004768ac
        ;   Label: LAB_004768ac
    CMP EBP,dword ptr [EBX + 0x2c]      ; 004768af
    JG 0x00476900                       ; 004768b2
        ;   XREF to: 00476900 (CONDITIONAL_JUMP)  ; LAB_00476900
    POP EBP                             ; 004768b4
    POP EDI                             ; 004768b5
    POP ESI                             ; 004768b6
    POP EBX                             ; 004768b7
    RET                                 ; 004768b8
    MOV EAX,dword ptr [EBX + 0x24]      ; 004768b9
        ;   Label: LAB_004768b9
    MOV dword ptr [EBX + 0x2c],EAX      ; 004768bc
    MOV EAX,dword ptr [EBX + 0x28]      ; 004768bf
    MOV dword ptr [EBX + 0x30],EAX      ; 004768c2
    POP EBP                             ; 004768c5
    POP EDI                             ; 004768c6
    POP ESI                             ; 004768c7
    POP EBX                             ; 004768c8
    RET                                 ; 004768c9
    MOV EBP,0x57f0b4                    ; 004768ca | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004768ca
    MOV EAX,0xefb                       ; 004768cf
    PUSH 0x57f0ca                       ; 004768d4 | = "CEdScrollBar::computeThumb - invalid ..."
    MOV dword ptr [0x01cc4800],EBP      ; 004768d9 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004768df | DAT_01cc4804
    CALL FUN_004c8440                   ; 004768e4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004768e9
    JMP 0x0047682e                      ; 004768ec
        ;   XREF to: 0047682e (UNCONDITIONAL_JUMP)  ; LAB_0047682e
    MOV EBP,dword ptr [EBX + 0x14]      ; 004768f1
        ;   Label: LAB_004768f1
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004768f4
    SUB EDX,EBP                         ; 004768f7
    CMP EAX,EDX                         ; 004768f9
    JMP 0x00476855                      ; 004768fb
        ;   XREF to: 00476855 (UNCONDITIONAL_JUMP)  ; LAB_00476855
    MOV dword ptr [EBX + 0x2c],EBP      ; 00476900
        ;   Label: LAB_00476900
    POP EBP                             ; 00476903
    POP EDI                             ; 00476904
    POP ESI                             ; 00476905
    POP EBX                             ; 00476906
    RET                                 ; 00476907

