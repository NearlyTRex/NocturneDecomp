; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(CDemonSet *this_ptr,int light_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   light_index
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057ccaa
;
; Referenced Globals:
;   TerminatedCString s_Too_many_lights_already_00647814
;   TerminatedCString s_Enter_new_name_for_clone_0064782d
;   TerminatedCString s_Precompute_light_visibil_0064784d
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b600
        ;   Label: core_setedit.cpp_CDemonSet_cloneLight_FUN_0057b600
    PUSH ESI                            ; 0057b601
    PUSH EDI                            ; 0057b602
    PUSH EBP                            ; 0057b603
    SUB ESP,0x4                         ; 0057b604
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057b607
    CMP dword ptr [EBX + 0x19a2c],0xc8  ; 0057b60b
    JGE 0x0057b871                      ; 0057b615
        ;   XREF to: 0057b871 (CONDITIONAL_JUMP)  ; LAB_0057b871
    IMUL EAX,dword ptr [ESP + 0x1c],0x1898 ; 0057b61b
    LEA EBP,[EBX + 0x19a30]             ; 0057b623
    MOV ESI,dword ptr [EBX + 0x19a2c]   ; 0057b629
    LEA EDX,[EAX + EBP*0x1]             ; 0057b62f
    IMUL EAX,ESI,0x1898                 ; 0057b632
    MOV dword ptr [ESP],EDX             ; 0057b638
    ADD EBP,EAX                         ; 0057b63b
    MOV EAX,dword ptr [ESP]             ; 0057b63d
    LEA EDI,[EBP + 0x4]                 ; 0057b640
    MOV ECX,dword ptr [EAX]             ; 0057b643
    MOV ESI,EAX                         ; 0057b645
    MOV dword ptr [EBP],ECX             ; 0057b647
    MOV ECX,0x40                        ; 0057b64a
    LEA ESI,[ESI + 0x4]                 ; 0057b64f
    MOVSD.REP ES:EDI,ESI                ; 0057b652
    MOV EDX,EBP                         ; 0057b654
    LEA ESI,[EBP + 0x104]               ; 0057b656
    LEA ECX,[EAX + 0x104]               ; 0057b65c
    CMP ESI,ECX                         ; 0057b662
    JNZ 0x0057b887                      ; 0057b664
        ;   XREF to: 0057b887 (CONDITIONAL_JUMP)  ; LAB_0057b887
    LEA ESI,[EAX + 0x110]               ; 0057b66a
        ;   Label: LAB_0057b66a
    LEA ECX,[EDX + 0x110]               ; 0057b670
    CMP ECX,ESI                         ; 0057b676
    JNZ 0x0057b89c                      ; 0057b678
        ;   XREF to: 0057b89c (CONDITIONAL_JUMP)  ; LAB_0057b89c
    FLD float ptr [EAX + 0x11c]         ; 0057b67e
        ;   Label: LAB_0057b67e
    MOV ECX,0x3e                        ; 0057b684
    LEA EDI,[EDX + 0x128]               ; 0057b689
    FSTP float ptr [EDX + 0x11c]        ; 0057b68f
    MOV ESI,dword ptr [EAX + 0x120]     ; 0057b695
    MOV dword ptr [EDX + 0x120],ESI     ; 0057b69b
    MOV ESI,dword ptr [EAX + 0x124]     ; 0057b6a1
    MOV dword ptr [EDX + 0x124],ESI     ; 0057b6a7
    LEA ESI,[EAX + 0x128]               ; 0057b6ad
    MOVSD.REP ES:EDI,ESI                ; 0057b6b3
    MOVSW ES:EDI,ESI                    ; 0057b6b5
    LEA EDI,[EDX + 0x224]               ; 0057b6b7
    LEA ESI,[EAX + 0x224]               ; 0057b6bd
    JMP 0x00604a5c                      ; 0057b6c3
        ;   XREF to: 00604a5c (UNCONDITIONAL_JUMP)  ; LAB_00604a5c
    MOV dword ptr [EDX + 0x11c4],ECX    ; 0057b6cd
        ;   Label: LAB_0057b6cd
    MOV ECX,dword ptr [EAX + 0x11c8]    ; 0057b6d3
    MOV dword ptr [EDX + 0x11c8],ECX    ; 0057b6d9
    MOV ECX,dword ptr [EAX + 0x11cc]    ; 0057b6df
    MOV dword ptr [EDX + 0x11cc],ECX    ; 0057b6e5
    MOV ECX,dword ptr [EAX + 0x11d0]    ; 0057b6eb
    MOV dword ptr [EDX + 0x11d0],ECX    ; 0057b6f1
    MOV ECX,dword ptr [EAX + 0x11d4]    ; 0057b6f7
    MOV dword ptr [EDX + 0x11d4],ECX    ; 0057b6fd
    MOV ECX,dword ptr [EAX + 0x11d8]    ; 0057b703
    MOV dword ptr [EDX + 0x11d8],ECX    ; 0057b709
    MOV ECX,dword ptr [EAX + 0x11dc]    ; 0057b70f
    MOV dword ptr [EDX + 0x11dc],ECX    ; 0057b715
    MOV ECX,dword ptr [EAX + 0x11e0]    ; 0057b71b
    MOV dword ptr [EDX + 0x11e0],ECX    ; 0057b721
    MOV ECX,dword ptr [EAX + 0x11e4]    ; 0057b727
    MOV dword ptr [EDX + 0x11e4],ECX    ; 0057b72d
    MOV ECX,dword ptr [EAX + 0x11e8]    ; 0057b733
    MOV dword ptr [EDX + 0x11e8],ECX    ; 0057b739
    MOV ECX,dword ptr [EAX + 0x11ec]    ; 0057b73f
    MOV dword ptr [EDX + 0x11ec],ECX    ; 0057b745
    MOV ECX,dword ptr [EAX + 0x11f0]    ; 0057b74b
    LEA EDI,[EDX + 0x11f4]              ; 0057b751
    MOV dword ptr [EDX + 0x11f0],ECX    ; 0057b757
    MOV ECX,0x140                       ; 0057b75d
    LEA ESI,[EAX + 0x11f4]              ; 0057b762
    MOVSD.REP ES:EDI,ESI                ; 0057b768
    MOV ECX,0x20                        ; 0057b76a
    LEA EDI,[EDX + 0x16f4]              ; 0057b76f
    LEA ESI,[EAX + 0x16f4]              ; 0057b775
    MOVSD.REP ES:EDI,ESI                ; 0057b77b
    MOV ECX,0x20                        ; 0057b77d
    LEA EDI,[EDX + 0x1774]              ; 0057b782
    LEA ESI,[EAX + 0x1774]              ; 0057b788
    MOVSD.REP ES:EDI,ESI                ; 0057b78e
    MOV ECX,dword ptr [EAX + 0x17f4]    ; 0057b790
    MOV dword ptr [EDX + 0x17f4],ECX    ; 0057b796
    MOV ECX,dword ptr [EAX + 0x17f8]    ; 0057b79c
    MOV dword ptr [EDX + 0x17f8],ECX    ; 0057b7a2
    MOV ECX,dword ptr [EAX + 0x17fc]    ; 0057b7a8
    MOV dword ptr [EDX + 0x17fc],ECX    ; 0057b7ae
    MOV ECX,dword ptr [EAX + 0x1800]    ; 0057b7b4
    MOV dword ptr [EDX + 0x1800],ECX    ; 0057b7ba
    MOV ECX,dword ptr [EAX + 0x1804]    ; 0057b7c0
    MOV dword ptr [EDX + 0x1804],ECX    ; 0057b7c6
    MOV ECX,dword ptr [EAX + 0x1808]    ; 0057b7cc
    MOV dword ptr [EDX + 0x1808],ECX    ; 0057b7d2
    MOV ECX,dword ptr [EAX + 0x180c]    ; 0057b7d8
    LEA EDI,[EDX + 0x1810]              ; 0057b7de
    MOV dword ptr [EDX + 0x180c],ECX    ; 0057b7e4
    MOV ECX,0x20                        ; 0057b7ea
    LEA ESI,[EAX + 0x1810]              ; 0057b7ef
    MOVSD.REP ES:EDI,ESI                ; 0057b7f5
    MOV ECX,dword ptr [EAX + 0x1890]    ; 0057b7f7
    MOV dword ptr [EDX + 0x1890],ECX    ; 0057b7fd
    LEA ESI,[EBX + 0x19a30]             ; 0057b803
    MOV ECX,dword ptr [EAX + 0x1894]    ; 0057b809
    MOV dword ptr [EDX + 0x1894],ECX    ; 0057b80f
    IMUL EAX,dword ptr [EBX + 0x19a2c],0x1898 ; 0057b815
        ;   Label: LAB_0057b815
    PUSH 0x0                            ; 0057b81f
    ADD EAX,ESI                         ; 0057b821
    PUSH 0x100                          ; 0057b823
    ADD EAX,0x4                         ; 0057b828
    PUSH EAX                            ; 0057b82b
    PUSH 0x64782d                       ; 0057b82c | = "Enter new name for cloned light"
    MOV EAX,[0x00678a60]                ; 0057b831 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0057b836 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057b837
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057b83c
    TEST EAX,EAX                        ; 0057b83f
    JZ 0x0057b869                       ; 0057b841
        ;   XREF to: 0057b869 (CONDITIONAL_JUMP)  ; LAB_0057b869
    IMUL EAX,dword ptr [EBX + 0x19a2c],0x1898 ; 0057b843
    LEA EDX,[EBX + EAX*0x1]             ; 0057b84d
    CMP byte ptr [EDX + 0x19a34],0x0    ; 0057b850
    JZ 0x0057b815                       ; 0057b857
        ;   XREF to: 0057b815 (CONDITIONAL_JUMP)  ; LAB_0057b815
    ADD EAX,ESI                         ; 0057b859
    PUSH EAX                            ; 0057b85b
    PUSH EBX                            ; 0057b85c
    CALL core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50 ; 0057b85d
        ;   XREF to: 0057ae50 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50(CDemonSet * this_ptr, C3DSLight * light)
    ADD ESP,0x8                         ; 0057b862
    TEST EAX,EAX                        ; 0057b865
    JNZ 0x0057b8b1                      ; 0057b867
        ;   XREF to: 0057b8b1 (CONDITIONAL_JUMP)  ; LAB_0057b8b1
    ADD ESP,0x4                         ; 0057b869
        ;   Label: LAB_0057b869
    POP EBP                             ; 0057b86c
    POP EDI                             ; 0057b86d
    POP ESI                             ; 0057b86e
    POP EBX                             ; 0057b86f
    RET                                 ; 0057b870
    PUSH 0x647814                       ; 0057b871 | = "Too many lights already!"
        ;   Label: LAB_0057b871
    MOV EDI,dword ptr [0x00678a60]      ; 0057b876 | g_CEditorToolsPtr
    PUSH EDI                            ; 0057b87c | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057b87d
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057b882
    JMP 0x0057b869                      ; 0057b885
        ;   XREF to: 0057b869 (UNCONDITIONAL_JUMP)  ; LAB_0057b869
    MOV EDI,dword ptr [ECX]             ; 0057b887
        ;   Label: LAB_0057b887
    MOV dword ptr [ESI],EDI             ; 0057b889
    MOV EDI,dword ptr [ECX + 0x4]       ; 0057b88b
    MOV dword ptr [ESI + 0x4],EDI       ; 0057b88e
    MOV EDI,dword ptr [ECX + 0x8]       ; 0057b891
    MOV dword ptr [ESI + 0x8],EDI       ; 0057b894
    JMP 0x0057b66a                      ; 0057b897
        ;   XREF to: 0057b66a (UNCONDITIONAL_JUMP)  ; LAB_0057b66a
    MOV EDI,dword ptr [ESI]             ; 0057b89c
        ;   Label: LAB_0057b89c
    MOV dword ptr [ECX],EDI             ; 0057b89e
    MOV EDI,dword ptr [ESI + 0x4]       ; 0057b8a0
    MOV dword ptr [ECX + 0x4],EDI       ; 0057b8a3
    MOV EDI,dword ptr [ESI + 0x8]       ; 0057b8a6
    MOV dword ptr [ECX + 0x8],EDI       ; 0057b8a9
    JMP 0x0057b67e                      ; 0057b8ac
        ;   XREF to: 0057b67e (UNCONDITIONAL_JUMP)  ; LAB_0057b67e
    MOV ECX,dword ptr [EBX + 0x19a2c]   ; 0057b8b1
        ;   Label: LAB_0057b8b1
    INC ECX                             ; 0057b8b7
    PUSH EBX                            ; 0057b8b8
    MOV dword ptr [EBX + 0x19a2c],ECX   ; 0057b8b9
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 0057b8bf
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b8c4
    PUSH 0x64784d                       ; 0057b8c7 | = "Precompute light visibility?"
    MOV ESI,dword ptr [0x00678a60]      ; 0057b8cc | g_CEditorToolsPtr
    PUSH ESI                            ; 0057b8d2 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0 ; 0057b8d3
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0057b8d8
    TEST EAX,EAX                        ; 0057b8db
    JZ 0x0057b8f0                       ; 0057b8dd
        ;   XREF to: 0057b8f0 (CONDITIONAL_JUMP)  ; LAB_0057b8f0
    MOV EAX,dword ptr [EBX + 0x19a2c]   ; 0057b8df
    DEC EAX                             ; 0057b8e5
    PUSH EAX                            ; 0057b8e6
    PUSH EBX                            ; 0057b8e7
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 0057b8e8
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr, int light_index)
    ADD ESP,0x8                         ; 0057b8ed
    PUSH EBX                            ; 0057b8f0
        ;   Label: LAB_0057b8f0
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057b8f1
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b8f6
    ADD ESP,0x4                         ; 0057b8f9
    POP EBP                             ; 0057b8fc
    POP EDI                             ; 0057b8fd
    POP ESI                             ; 0057b8fe
    POP EBX                             ; 0057b8ff
    RET                                 ; 0057b900
    MOV ECX,dword ptr [ESI]             ; 00604a5c
        ;   Label: LAB_00604a5c
    MOV dword ptr [EDI],ECX             ; 00604a5e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00604a60
    MOV dword ptr [EDI + 0x4],ECX       ; 00604a63
    MOV ECX,dword ptr [ESI + 0x8]       ; 00604a66
    MOV dword ptr [EDI + 0x8],ECX       ; 00604a69
    MOV ECX,dword ptr [ESI + 0xc]       ; 00604a6c
    MOV dword ptr [EDI + 0xc],ECX       ; 00604a6f
    ADD ESI,0x10                        ; 00604a72
    ADD EDI,0x10                        ; 00604a75
    MOV ECX,dword ptr [EAX + 0x11c4]    ; 00604a78
    JMP 0x0057b6cd                      ; 00604a7e
        ;   XREF to: 0057b6cd (UNCONDITIONAL_JUMP)  ; LAB_0057b6cd

