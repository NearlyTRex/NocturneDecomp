; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0047bd50(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e6e8
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c6cd
;
; Referenced Globals:
;   undefined4 DAT_00600284
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0
;   wincore_winrun.cpp_clearKeypresses_FUN_00580770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047bd50
        ;   Label: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0047bd50
    PUSH ESI                            ; 0047bd51
    PUSH EDI                            ; 0047bd52
    PUSH EBP                            ; 0047bd53
    MOV EBX,dword ptr [ESP + 0x14]      ; 0047bd54
    PUSH 0x4b                           ; 0047bd58
    MOV EAX,[0x00600284]                ; 0047bd5a | DAT_00600284
    PUSH EAX                            ; 0047bd5f | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047bd60 | DAT_01d70a78
    XOR ESI,ESI                         ; 0047bd62
    CALL dword ptr [EDX + 0x4]          ; 0047bd64
    ADD ESP,0x8                         ; 0047bd67
    TEST EAX,EAX                        ; 0047bd6a
    JZ 0x0047bd87                       ; 0047bd6c
        ;   XREF to: 0047bd87 (CONDITIONAL_JUMP)  ; LAB_0047bd87
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bd6e
    MOV ESI,0x1                         ; 0047bd74
    TEST EDX,EDX                        ; 0047bd79
    JLE 0x0047bd87                      ; 0047bd7b
        ;   XREF to: 0047bd87 (CONDITIONAL_JUMP)  ; LAB_0047bd87
    MOV ECX,EDX                         ; 0047bd7d
    SUB ECX,ESI                         ; 0047bd7f
    MOV dword ptr [EBX + 0x134],ECX     ; 0047bd81
    PUSH 0x4d                           ; 0047bd87
        ;   Label: LAB_0047bd87
    MOV EAX,[0x00600284]                ; 0047bd89 | DAT_00600284
    PUSH EAX                            ; 0047bd8e | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047bd8f | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047bd91
    ADD ESP,0x8                         ; 0047bd94
    TEST EAX,EAX                        ; 0047bd97
    JZ 0x0047bdb9                       ; 0047bd99
        ;   XREF to: 0047bdb9 (CONDITIONAL_JUMP)  ; LAB_0047bdb9
    MOV EAX,dword ptr [EBX + 0x134]     ; 0047bd9b
    MOV EDI,dword ptr [EBX + 0x130]     ; 0047bda1
    MOV ESI,0x1                         ; 0047bda7
    CMP EAX,EDI                         ; 0047bdac
    JGE 0x0047bdb9                      ; 0047bdae
        ;   XREF to: 0047bdb9 (CONDITIONAL_JUMP)  ; LAB_0047bdb9
    LEA EBP,[EAX + ESI*0x1]             ; 0047bdb0
    MOV dword ptr [EBX + 0x134],EBP     ; 0047bdb3
    PUSH 0x47                           ; 0047bdb9
        ;   Label: LAB_0047bdb9
    MOV EAX,[0x00600284]                ; 0047bdbb | DAT_00600284
    PUSH EAX                            ; 0047bdc0 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047bdc1 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047bdc3
    ADD ESP,0x8                         ; 0047bdc6
    TEST EAX,EAX                        ; 0047bdc9
    JZ 0x0047bddc                       ; 0047bdcb
        ;   XREF to: 0047bddc (CONDITIONAL_JUMP)  ; LAB_0047bddc
    MOV ESI,0x1                         ; 0047bdcd
    MOV dword ptr [EBX + 0x134],0x0     ; 0047bdd2
    PUSH 0x4f                           ; 0047bddc
        ;   Label: LAB_0047bddc
    MOV EAX,[0x00600284]                ; 0047bdde | DAT_00600284
    PUSH EAX                            ; 0047bde3 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047bde4 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047bde6
    ADD ESP,0x8                         ; 0047bde9
    TEST EAX,EAX                        ; 0047bdec
    JZ 0x0047be01                       ; 0047bdee
        ;   XREF to: 0047be01 (CONDITIONAL_JUMP)  ; LAB_0047be01
    MOV EAX,dword ptr [EBX + 0x130]     ; 0047bdf0
    MOV ESI,0x1                         ; 0047bdf6
    MOV dword ptr [EBX + 0x134],EAX     ; 0047bdfb
    PUSH 0x1d                           ; 0047be01
        ;   Label: LAB_0047be01
    MOV EAX,[0x00600284]                ; 0047be03 | DAT_00600284
    PUSH EAX                            ; 0047be08 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047be09 | DAT_01d70a78
    CALL dword ptr [EDX]                ; 0047be0b
    ADD ESP,0x8                         ; 0047be0d
    TEST EAX,EAX                        ; 0047be10
    JZ 0x0047bec7                       ; 0047be12
        ;   XREF to: 0047bec7 (CONDITIONAL_JUMP)  ; LAB_0047bec7
    PUSH 0x2d                           ; 0047be18
    MOV ESI,dword ptr [0x00600284]      ; 0047be1a | DAT_00600284
    PUSH ESI                            ; 0047be20 | DAT_01d70a78
    MOV EAX,dword ptr [ESI]             ; 0047be21 | DAT_01d70a78
    CALL dword ptr [EAX + 0x4]          ; 0047be23
    ADD ESP,0x8                         ; 0047be26
    TEST EAX,EAX                        ; 0047be29
    JZ 0x0047be3f                       ; 0047be2b
        ;   XREF to: 0047be3f (CONDITIONAL_JUMP)  ; LAB_0047be3f
    PUSH EBX                            ; 0047be2d
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0 ; 0047be2e
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be33
    PUSH EBX                            ; 0047be36
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047be37
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be3c
    PUSH 0x52                           ; 0047be3f
        ;   Label: LAB_0047be3f
    MOV EAX,[0x00600284]                ; 0047be41 | DAT_00600284
    PUSH EAX                            ; 0047be46 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047be47 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047be49
    ADD ESP,0x8                         ; 0047be4c
    TEST EAX,EAX                        ; 0047be4f
    JZ 0x0047be5c                       ; 0047be51
        ;   XREF to: 0047be5c (CONDITIONAL_JUMP)  ; LAB_0047be5c
    PUSH EBX                            ; 0047be53
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0 ; 0047be54
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be59
    PUSH 0x2e                           ; 0047be5c
        ;   Label: LAB_0047be5c
    MOV EAX,[0x00600284]                ; 0047be5e | DAT_00600284
    PUSH EAX                            ; 0047be63 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047be64 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047be66
    ADD ESP,0x8                         ; 0047be69
    TEST EAX,EAX                        ; 0047be6c
    JZ 0x0047be79                       ; 0047be6e
        ;   XREF to: 0047be79 (CONDITIONAL_JUMP)  ; LAB_0047be79
    PUSH EBX                            ; 0047be70
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0 ; 0047be71
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be76
    PUSH 0x2f                           ; 0047be79
        ;   Label: LAB_0047be79
    MOV EAX,[0x00600284]                ; 0047be7b | DAT_00600284
    PUSH EAX                            ; 0047be80 | DAT_01d70a78
    MOV ESI,dword ptr [EAX]             ; 0047be81 | DAT_01d70a78
    CALL dword ptr [ESI + 0x4]          ; 0047be83
    ADD ESP,0x8                         ; 0047be86
    TEST EAX,EAX                        ; 0047be89
    JZ 0x0047be9f                       ; 0047be8b
        ;   XREF to: 0047be9f (CONDITIONAL_JUMP)  ; LAB_0047be9f
    PUSH EBX                            ; 0047be8d
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047be8e
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be93
    PUSH EBX                            ; 0047be96
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0 ; 0047be97
        ;   XREF to: 0047bcf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047be9c
    PUSH 0x53                           ; 0047be9f
        ;   Label: LAB_0047be9f
    MOV ESI,dword ptr [0x00600284]      ; 0047bea1 | DAT_00600284
    PUSH ESI                            ; 0047bea7 | DAT_01d70a78
    MOV EAX,dword ptr [ESI]             ; 0047bea8 | DAT_01d70a78
    CALL dword ptr [EAX + 0x4]          ; 0047beaa
    ADD ESP,0x8                         ; 0047bead
    TEST EAX,EAX                        ; 0047beb0
    JZ 0x0047bebd                       ; 0047beb2
        ;   XREF to: 0047bebd (CONDITIONAL_JUMP)  ; LAB_0047bebd
    PUSH EBX                            ; 0047beb4
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047beb5
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047beba
    CALL wincore_winrun.cpp_clearKeypresses_FUN_00580770 ; 0047bebd
        ;   XREF to: 00580770 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_00580770()
        ;   Label: LAB_0047bebd
    POP EBP                             ; 0047bec2
        ;   Label: LAB_0047bec2
    POP EDI                             ; 0047bec3
    POP ESI                             ; 0047bec4
    POP EBX                             ; 0047bec5
    RET                                 ; 0047bec6
    PUSH 0x2a                           ; 0047bec7
        ;   Label: LAB_0047bec7
    MOV EAX,[0x00600284]                ; 0047bec9 | DAT_00600284
    PUSH EAX                            ; 0047bece | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047becf | DAT_01d70a78
    CALL dword ptr [EDX]                ; 0047bed1
    ADD ESP,0x8                         ; 0047bed3
    TEST EAX,EAX                        ; 0047bed6
    JZ 0x0047bf2b                       ; 0047bed8
        ;   XREF to: 0047bf2b (CONDITIONAL_JUMP)  ; LAB_0047bf2b
    PUSH 0x52                           ; 0047beda
    MOV EAX,[0x00600284]                ; 0047bedc | DAT_00600284
    PUSH EAX                            ; 0047bee1 | DAT_01d70a78
    MOV ESI,dword ptr [EAX]             ; 0047bee2 | DAT_01d70a78
    CALL dword ptr [ESI + 0x4]          ; 0047bee4
    ADD ESP,0x8                         ; 0047bee7
    TEST EAX,EAX                        ; 0047beea
    JZ 0x0047bf00                       ; 0047beec
        ;   XREF to: 0047bf00 (CONDITIONAL_JUMP)  ; LAB_0047bf00
    PUSH EBX                            ; 0047beee
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047beef
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bef4
    PUSH EBX                            ; 0047bef7
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0 ; 0047bef8
        ;   XREF to: 0047bcf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0047bcf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047befd
    PUSH 0x53                           ; 0047bf00
        ;   Label: LAB_0047bf00
    MOV EAX,[0x00600284]                ; 0047bf02 | DAT_00600284
    PUSH EAX                            ; 0047bf07 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0047bf08 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0047bf0a
    ADD ESP,0x8                         ; 0047bf0d
    TEST EAX,EAX                        ; 0047bf10
    JZ 0x0047bec2                       ; 0047bf12
        ;   XREF to: 0047bec2 (CONDITIONAL_JUMP)  ; LAB_0047bec2
    PUSH EBX                            ; 0047bf14
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0 ; 0047bf15
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0047bca0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bf1a
    PUSH EBX                            ; 0047bf1d
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047bf1e
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bf23
    POP EBP                             ; 0047bf26
    POP EDI                             ; 0047bf27
    POP ESI                             ; 0047bf28
    POP EBX                             ; 0047bf29
    RET                                 ; 0047bf2a
    TEST ESI,ESI                        ; 0047bf2b
        ;   Label: LAB_0047bf2b
    JZ 0x0047bf38                       ; 0047bf2d
        ;   XREF to: 0047bf38 (CONDITIONAL_JUMP)  ; LAB_0047bf38
    PUSH EBX                            ; 0047bf2f
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0 ; 0047bf30
        ;   XREF to: 0047baf0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0047baf0(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bf35
    PUSH 0x53                           ; 0047bf38
        ;   Label: LAB_0047bf38
    MOV ESI,dword ptr [0x00600284]      ; 0047bf3a | DAT_00600284
    PUSH ESI                            ; 0047bf40 | DAT_01d70a78
    MOV EAX,dword ptr [ESI]             ; 0047bf41 | DAT_01d70a78
    CALL dword ptr [EAX + 0x4]          ; 0047bf43
    ADD ESP,0x8                         ; 0047bf46
    TEST EAX,EAX                        ; 0047bf49
    JZ 0x0047bec2                       ; 0047bf4b
        ;   XREF to: 0047bec2 (CONDITIONAL_JUMP)  ; LAB_0047bec2
    MOV EDX,dword ptr [EBX + 0x134]     ; 0047bf51
    CMP EDX,dword ptr [EBX + 0x138]     ; 0047bf57
    JZ 0x0047bf6d                       ; 0047bf5d
        ;   XREF to: 0047bf6d (CONDITIONAL_JUMP)  ; LAB_0047bf6d
    PUSH EBX                            ; 0047bf5f
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10 ; 0047bf60
        ;   XREF to: 0047bc10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0047bc10(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0047bf65
    POP EBP                             ; 0047bf68
    POP EDI                             ; 0047bf69
    POP ESI                             ; 0047bf6a
    POP EBX                             ; 0047bf6b
    RET                                 ; 0047bf6c
    LEA EAX,[EDX + 0x1]                 ; 0047bf6d
        ;   Label: LAB_0047bf6d
    PUSH EAX                            ; 0047bf70
    PUSH EDX                            ; 0047bf71
    PUSH EBX                            ; 0047bf72
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0 ; 0047bf73
        ;   XREF to: 0047bba0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0047bba0(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 0047bf78
    POP EBP                             ; 0047bf7b
    POP EDI                             ; 0047bf7c
    POP ESI                             ; 0047bf7d
    POP EBX                             ; 0047bf7e
    RET                                 ; 0047bf7f

