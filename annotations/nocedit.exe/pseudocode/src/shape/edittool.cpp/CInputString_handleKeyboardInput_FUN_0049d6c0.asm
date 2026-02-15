; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString *this_ptr)
;
; Parameters:
; CInputString *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fdce
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049df0a
;
; Referenced Globals:
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
;   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
;   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
;   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
;   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
;   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d6c0
        ;   Label: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
    PUSH ESI                            ; 0049d6c1
    PUSH EDI                            ; 0049d6c2
    PUSH EBP                            ; 0049d6c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049d6c4
    PUSH 0x4b                           ; 0049d6c8
    MOV EAX,[0x0067cf44]                ; 0049d6ca | g_CKeysPtr
    PUSH EAX                            ; 0049d6cf | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d6d0 | g_CKeysInstance
    XOR ESI,ESI                         ; 0049d6d2
    CALL dword ptr [EDX + 0x4]          ; 0049d6d4
    ADD ESP,0x8                         ; 0049d6d7
    TEST EAX,EAX                        ; 0049d6da
    JZ 0x0049d6f7                       ; 0049d6dc
        ;   XREF to: 0049d6f7 (CONDITIONAL_JUMP)  ; LAB_0049d6f7
    MOV EDX,dword ptr [EBX + 0x134]     ; 0049d6de
    MOV ESI,0x1                         ; 0049d6e4
    TEST EDX,EDX                        ; 0049d6e9
    JLE 0x0049d6f7                      ; 0049d6eb
        ;   XREF to: 0049d6f7 (CONDITIONAL_JUMP)  ; LAB_0049d6f7
    MOV ECX,EDX                         ; 0049d6ed
    SUB ECX,ESI                         ; 0049d6ef
    MOV dword ptr [EBX + 0x134],ECX     ; 0049d6f1
    PUSH 0x4d                           ; 0049d6f7
        ;   Label: LAB_0049d6f7
    MOV EAX,[0x0067cf44]                ; 0049d6f9 | g_CKeysPtr
    PUSH EAX                            ; 0049d6fe | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d6ff | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d701
    ADD ESP,0x8                         ; 0049d704
    TEST EAX,EAX                        ; 0049d707
    JZ 0x0049d729                       ; 0049d709
        ;   XREF to: 0049d729 (CONDITIONAL_JUMP)  ; LAB_0049d729
    MOV EAX,dword ptr [EBX + 0x134]     ; 0049d70b
    MOV EDI,dword ptr [EBX + 0x130]     ; 0049d711
    MOV ESI,0x1                         ; 0049d717
    CMP EAX,EDI                         ; 0049d71c
    JGE 0x0049d729                      ; 0049d71e
        ;   XREF to: 0049d729 (CONDITIONAL_JUMP)  ; LAB_0049d729
    LEA EBP,[EAX + ESI*0x1]             ; 0049d720
    MOV dword ptr [EBX + 0x134],EBP     ; 0049d723
    PUSH 0x47                           ; 0049d729
        ;   Label: LAB_0049d729
    MOV EAX,[0x0067cf44]                ; 0049d72b | g_CKeysPtr
    PUSH EAX                            ; 0049d730 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d731 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d733
    ADD ESP,0x8                         ; 0049d736
    TEST EAX,EAX                        ; 0049d739
    JZ 0x0049d74c                       ; 0049d73b
        ;   XREF to: 0049d74c (CONDITIONAL_JUMP)  ; LAB_0049d74c
    MOV ESI,0x1                         ; 0049d73d
    MOV dword ptr [EBX + 0x134],0x0     ; 0049d742
    PUSH 0x4f                           ; 0049d74c
        ;   Label: LAB_0049d74c
    MOV EAX,[0x0067cf44]                ; 0049d74e | g_CKeysPtr
    PUSH EAX                            ; 0049d753 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d754 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d756
    ADD ESP,0x8                         ; 0049d759
    TEST EAX,EAX                        ; 0049d75c
    JZ 0x0049d771                       ; 0049d75e
        ;   XREF to: 0049d771 (CONDITIONAL_JUMP)  ; LAB_0049d771
    MOV EAX,dword ptr [EBX + 0x130]     ; 0049d760
    MOV ESI,0x1                         ; 0049d766
    MOV dword ptr [EBX + 0x134],EAX     ; 0049d76b
    PUSH 0x1d                           ; 0049d771
        ;   Label: LAB_0049d771
    MOV EAX,[0x0067cf44]                ; 0049d773 | g_CKeysPtr
    PUSH EAX                            ; 0049d778 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d779 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0049d77b
    ADD ESP,0x8                         ; 0049d77d
    TEST EAX,EAX                        ; 0049d780
    JZ 0x0049d837                       ; 0049d782
        ;   XREF to: 0049d837 (CONDITIONAL_JUMP)  ; LAB_0049d837
    PUSH 0x2d                           ; 0049d788
    MOV ESI,dword ptr [0x0067cf44]      ; 0049d78a | g_CKeysPtr
    PUSH ESI                            ; 0049d790 | g_CKeysInstance
    MOV EAX,dword ptr [ESI]             ; 0049d791 | g_CKeysInstance
    CALL dword ptr [EAX + 0x4]          ; 0049d793
    ADD ESP,0x8                         ; 0049d796
    TEST EAX,EAX                        ; 0049d799
    JZ 0x0049d7af                       ; 0049d79b
        ;   XREF to: 0049d7af (CONDITIONAL_JUMP)  ; LAB_0049d7af
    PUSH EBX                            ; 0049d79d
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610 ; 0049d79e
        ;   XREF to: 0049d610 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d7a3
    PUSH EBX                            ; 0049d7a6
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d7a7
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d7ac
    PUSH 0x52                           ; 0049d7af
        ;   Label: LAB_0049d7af
    MOV EAX,[0x0067cf44]                ; 0049d7b1 | g_CKeysPtr
    PUSH EAX                            ; 0049d7b6 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d7b7 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d7b9
    ADD ESP,0x8                         ; 0049d7bc
    TEST EAX,EAX                        ; 0049d7bf
    JZ 0x0049d7cc                       ; 0049d7c1
        ;   XREF to: 0049d7cc (CONDITIONAL_JUMP)  ; LAB_0049d7cc
    PUSH EBX                            ; 0049d7c3
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610 ; 0049d7c4
        ;   XREF to: 0049d610 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d7c9
    PUSH 0x2e                           ; 0049d7cc
        ;   Label: LAB_0049d7cc
    MOV EAX,[0x0067cf44]                ; 0049d7ce | g_CKeysPtr
    PUSH EAX                            ; 0049d7d3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d7d4 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d7d6
    ADD ESP,0x8                         ; 0049d7d9
    TEST EAX,EAX                        ; 0049d7dc
    JZ 0x0049d7e9                       ; 0049d7de
        ;   XREF to: 0049d7e9 (CONDITIONAL_JUMP)  ; LAB_0049d7e9
    PUSH EBX                            ; 0049d7e0
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610 ; 0049d7e1
        ;   XREF to: 0049d610 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d7e6
    PUSH 0x2f                           ; 0049d7e9
        ;   Label: LAB_0049d7e9
    MOV EAX,[0x0067cf44]                ; 0049d7eb | g_CKeysPtr
    PUSH EAX                            ; 0049d7f0 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0049d7f1 | g_CKeysInstance
    CALL dword ptr [ESI + 0x4]          ; 0049d7f3
    ADD ESP,0x8                         ; 0049d7f6
    TEST EAX,EAX                        ; 0049d7f9
    JZ 0x0049d80f                       ; 0049d7fb
        ;   XREF to: 0049d80f (CONDITIONAL_JUMP)  ; LAB_0049d80f
    PUSH EBX                            ; 0049d7fd
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d7fe
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d803
    PUSH EBX                            ; 0049d806
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 ; 0049d807
        ;   XREF to: 0049d660 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d80c
    PUSH 0x53                           ; 0049d80f
        ;   Label: LAB_0049d80f
    MOV ESI,dword ptr [0x0067cf44]      ; 0049d811 | g_CKeysPtr
    PUSH ESI                            ; 0049d817 | g_CKeysInstance
    MOV EAX,dword ptr [ESI]             ; 0049d818 | g_CKeysInstance
    CALL dword ptr [EAX + 0x4]          ; 0049d81a
    ADD ESP,0x8                         ; 0049d81d
    TEST EAX,EAX                        ; 0049d820
    JZ 0x0049d82d                       ; 0049d822
        ;   XREF to: 0049d82d (CONDITIONAL_JUMP)  ; LAB_0049d82d
    PUSH EBX                            ; 0049d824
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d825
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d82a
    CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70 ; 0049d82d
        ;   XREF to: 005f2e70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_clearKeypresses_FUN_005f2e70()
        ;   Label: LAB_0049d82d
    POP EBP                             ; 0049d832
        ;   Label: LAB_0049d832
    POP EDI                             ; 0049d833
    POP ESI                             ; 0049d834
    POP EBX                             ; 0049d835
    RET                                 ; 0049d836
    PUSH 0x2a                           ; 0049d837
        ;   Label: LAB_0049d837
    MOV EAX,[0x0067cf44]                ; 0049d839 | g_CKeysPtr
    PUSH EAX                            ; 0049d83e | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d83f | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0049d841
    ADD ESP,0x8                         ; 0049d843
    TEST EAX,EAX                        ; 0049d846
    JZ 0x0049d89b                       ; 0049d848
        ;   XREF to: 0049d89b (CONDITIONAL_JUMP)  ; LAB_0049d89b
    PUSH 0x52                           ; 0049d84a
    MOV EAX,[0x0067cf44]                ; 0049d84c | g_CKeysPtr
    PUSH EAX                            ; 0049d851 | g_CKeysInstance
    MOV ESI,dword ptr [EAX]             ; 0049d852 | g_CKeysInstance
    CALL dword ptr [ESI + 0x4]          ; 0049d854
    ADD ESP,0x8                         ; 0049d857
    TEST EAX,EAX                        ; 0049d85a
    JZ 0x0049d870                       ; 0049d85c
        ;   XREF to: 0049d870 (CONDITIONAL_JUMP)  ; LAB_0049d870
    PUSH EBX                            ; 0049d85e
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d85f
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d864
    PUSH EBX                            ; 0049d867
    CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660 ; 0049d868
        ;   XREF to: 0049d660 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d86d
    PUSH 0x53                           ; 0049d870
        ;   Label: LAB_0049d870
    MOV EAX,[0x0067cf44]                ; 0049d872 | g_CKeysPtr
    PUSH EAX                            ; 0049d877 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0049d878 | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 0049d87a
    ADD ESP,0x8                         ; 0049d87d
    TEST EAX,EAX                        ; 0049d880
    JZ 0x0049d832                       ; 0049d882
        ;   XREF to: 0049d832 (CONDITIONAL_JUMP)  ; LAB_0049d832
    PUSH EBX                            ; 0049d884
    CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610 ; 0049d885
        ;   XREF to: 0049d610 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d88a
    PUSH EBX                            ; 0049d88d
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d88e
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d893
    POP EBP                             ; 0049d896
    POP EDI                             ; 0049d897
    POP ESI                             ; 0049d898
    POP EBX                             ; 0049d899
    RET                                 ; 0049d89a
    TEST ESI,ESI                        ; 0049d89b
        ;   Label: LAB_0049d89b
    JZ 0x0049d8a8                       ; 0049d89d
        ;   XREF to: 0049d8a8 (CONDITIONAL_JUMP)  ; LAB_0049d8a8
    PUSH EBX                            ; 0049d89f
    CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460 ; 0049d8a0
        ;   XREF to: 0049d460 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d8a5
    PUSH 0x53                           ; 0049d8a8
        ;   Label: LAB_0049d8a8
    MOV ESI,dword ptr [0x0067cf44]      ; 0049d8aa | g_CKeysPtr
    PUSH ESI                            ; 0049d8b0 | g_CKeysInstance
    MOV EAX,dword ptr [ESI]             ; 0049d8b1 | g_CKeysInstance
    CALL dword ptr [EAX + 0x4]          ; 0049d8b3
    ADD ESP,0x8                         ; 0049d8b6
    TEST EAX,EAX                        ; 0049d8b9
    JZ 0x0049d832                       ; 0049d8bb
        ;   XREF to: 0049d832 (CONDITIONAL_JUMP)  ; LAB_0049d832
    MOV EDX,dword ptr [EBX + 0x134]     ; 0049d8c1
    CMP EDX,dword ptr [EBX + 0x138]     ; 0049d8c7
    JZ 0x0049d8dd                       ; 0049d8cd
        ;   XREF to: 0049d8dd (CONDITIONAL_JUMP)  ; LAB_0049d8dd
    PUSH EBX                            ; 0049d8cf
    CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580 ; 0049d8d0
        ;   XREF to: 0049d580 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580(CInputString * this_ptr)
    ADD ESP,0x4                         ; 0049d8d5
    POP EBP                             ; 0049d8d8
    POP EDI                             ; 0049d8d9
    POP ESI                             ; 0049d8da
    POP EBX                             ; 0049d8db
    RET                                 ; 0049d8dc
    LEA EAX,[EDX + 0x1]                 ; 0049d8dd
        ;   Label: LAB_0049d8dd
    PUSH EAX                            ; 0049d8e0
    PUSH EDX                            ; 0049d8e1
    PUSH EBX                            ; 0049d8e2
    CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510 ; 0049d8e3
        ;   XREF to: 0049d510 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510(CInputString * this_ptr, int start_pos, int end_pos)
    ADD ESP,0xc                         ; 0049d8e8
    POP EBP                             ; 0049d8eb
    POP EDI                             ; 0049d8ec
    POP ESI                             ; 0049d8ed
    POP EBX                             ; 0049d8ee
    RET                                 ; 0049d8ef

