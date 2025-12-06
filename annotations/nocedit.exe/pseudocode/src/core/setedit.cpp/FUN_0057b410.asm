; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_0057b410()
;
;
; XREF[1]:
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057c9da
;
; Referenced Globals:
;   TerminatedCString s_Too_many_lights_already_00647795
;   TerminatedCString s_Enter_new_spot_light_nam_006477ae
;   TerminatedCString s_Precompute_light_visibil_006477c8
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
;   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
;   crt_memory.c_memset_FUN_005fde40
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b410
        ;   Label: core_setedit.cpp_FUN_0057b410
    PUSH ESI                            ; 0057b411
    PUSH EDI                            ; 0057b412
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057b413
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 0057b417
    CMP EDX,0xc8                        ; 0057b41d
    JGE 0x0057b4dd                      ; 0057b423 | LAB_0057b4dd
        ;   XREF to: 0057b4dd (CONDITIONAL_JUMP)
    IMUL EBX,EDX,0x1898                 ; 0057b429
    PUSH 0x1898                         ; 0057b42f
    LEA EAX,[EDI + 0x19a30]             ; 0057b434
    PUSH 0x0                            ; 0057b43a
    ADD EBX,EAX                         ; 0057b43c
    PUSH EBX                            ; 0057b43e
    CALL crt_memory.c_memset_FUN_005fde40 ; 0057b43f | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0057b444
    PUSH EBX                            ; 0057b447
    CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0 ; 0057b448 | void core_setutil.cpp_C3DSLight_reset_FUN_005879b0(C3DSLight * this_ptr)
        ;   XREF to: 005879b0 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX],0x0             ; 0057b44d
    ADD ESP,0x4                         ; 0057b453
    MOV ESI,dword ptr [EDI + 0x19a2c]   ; 0057b456
    PUSH EBX                            ; 0057b45c
    INC ESI                             ; 0057b45d
    PUSH EDI                            ; 0057b45e
    MOV dword ptr [EDI + 0x19a2c],ESI   ; 0057b45f
    CALL core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 ; 0057b465 | undefined core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50()
        ;   XREF to: 0057ae50 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057b46a
    TEST EAX,EAX                        ; 0057b46d
    JZ 0x0057b4f4                       ; 0057b46f | LAB_0057b4f4
        ;   XREF to: 0057b4f4 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x4],0x0        ; 0057b475
    JNZ 0x0057b4a4                      ; 0057b479 | LAB_0057b4a4
        ;   XREF to: 0057b4a4 (CONDITIONAL_JUMP)
    LEA ESI,[EBX + 0x4]                 ; 0057b47b
    PUSH 0x0                            ; 0057b47e
        ;   Label: LAB_0057b47e
    PUSH 0x100                          ; 0057b480
    PUSH ESI                            ; 0057b485
    PUSH 0x6477ae                       ; 0057b486 | = "Enter new spot light name" | s_Enter_new_spot_light_nam_006477ae = Enter new spot light name
    MOV EDX,dword ptr [0x00678a60]      ; 0057b48b | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EDX                            ; 0057b491 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057b492 | int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0057b497
    TEST EAX,EAX                        ; 0057b49a
    JZ 0x0057b4f4                       ; 0057b49c | LAB_0057b4f4
        ;   XREF to: 0057b4f4 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x4],0x0        ; 0057b49e
    JZ 0x0057b47e                       ; 0057b4a2 | LAB_0057b47e
        ;   XREF to: 0057b47e (CONDITIONAL_JUMP)
    PUSH EDI                            ; 0057b4a4
        ;   Label: LAB_0057b4a4
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0057b4a5 | void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057b4aa
    PUSH 0x6477c8                       ; 0057b4ad | = "Precompute light visibility?" | s_Precompute_light_visibil_006477c8 = Precompute light visibility?
    MOV EBX,dword ptr [0x00678a60]      ; 0057b4b2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 0057b4b8 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0057b4b9 | int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057b4be
    TEST EAX,EAX                        ; 0057b4c1
    JZ 0x0057b4d0                       ; 0057b4c3 | LAB_0057b4d0
        ;   XREF to: 0057b4d0 (CONDITIONAL_JUMP)
    PUSH -0x1                           ; 0057b4c5
    PUSH EDI                            ; 0057b4c7
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 0057b4c8 | void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr)
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057b4cd
    PUSH EDI                            ; 0057b4d0
        ;   Label: LAB_0057b4d0
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057b4d1 | void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057b4d6
    POP EDI                             ; 0057b4d9
    POP ESI                             ; 0057b4da
    POP EBX                             ; 0057b4db
    RET                                 ; 0057b4dc
    PUSH 0x647795                       ; 0057b4dd | = "Too many lights already!" | s_Too_many_lights_already_00647795 = Too many lights already!
        ;   Label: LAB_0057b4dd
    MOV EAX,[0x00678a60]                ; 0057b4e2 | CEditorTools g_CEditorToolsPtr | CEditorTools * g_CEditorToolsPtr
    PUSH EAX                            ; 0057b4e7 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057b4e8 | void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0057b4ed
    POP EDI                             ; 0057b4f0
    POP ESI                             ; 0057b4f1
    POP EBX                             ; 0057b4f2
    RET                                 ; 0057b4f3
    DEC dword ptr [EDI + 0x19a2c]       ; 0057b4f4
        ;   Label: LAB_0057b4f4
    POP EDI                             ; 0057b4fa
    POP ESI                             ; 0057b4fb
    POP EBX                             ; 0057b4fc
    RET                                 ; 0057b4fd

