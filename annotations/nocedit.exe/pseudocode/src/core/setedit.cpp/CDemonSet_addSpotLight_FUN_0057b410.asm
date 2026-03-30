; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_addSpotLight_FUN_0057b410(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c9da
;
; Referenced Globals:
;   TerminatedCString s_Too_many_lights_already_00647795
;   TerminatedCString s_Enter_new_spot_light_nam_006477ae
;   TerminatedCString s_Precompute_light_visibil_006477c8
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50
;   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
;   crt_memory.c_memset_FUN_005fde40
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b410
        ;   Label: core_setedit.cpp_CDemonSet_addSpotLight_FUN_0057b410
    PUSH ESI                            ; 0057b411
    PUSH EDI                            ; 0057b412
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057b413
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 0057b417
    CMP EDX,0xc8                        ; 0057b41d
    JGE 0x0057b4dd                      ; 0057b423
        ;   XREF to: 0057b4dd (CONDITIONAL_JUMP)  ; LAB_0057b4dd
    IMUL EBX,EDX,0x1898                 ; 0057b429
    PUSH 0x1898                         ; 0057b42f
    LEA EAX,[EDI + 0x19a30]             ; 0057b434
    PUSH 0x0                            ; 0057b43a
    ADD EBX,EAX                         ; 0057b43c
    PUSH EBX                            ; 0057b43e
    CALL crt_memory.c_memset_FUN_005fde40 ; 0057b43f
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057b444
    PUSH EBX                            ; 0057b447
    CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0 ; 0057b448
        ;   XREF to: 005879b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_reset_FUN_005879b0(C3DSLight * this_ptr)
    MOV dword ptr [EBX],0x0             ; 0057b44d
    ADD ESP,0x4                         ; 0057b453
    MOV ESI,dword ptr [EDI + 0x19a2c]   ; 0057b456
    PUSH EBX                            ; 0057b45c
    INC ESI                             ; 0057b45d
    PUSH EDI                            ; 0057b45e
    MOV dword ptr [EDI + 0x19a2c],ESI   ; 0057b45f
    CALL core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50 ; 0057b465
        ;   XREF to: 0057ae50 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50(CDemonSet * this_ptr, C3DSLight * light)
    ADD ESP,0x8                         ; 0057b46a
    TEST EAX,EAX                        ; 0057b46d
    JZ 0x0057b4f4                       ; 0057b46f
        ;   XREF to: 0057b4f4 (CONDITIONAL_JUMP)  ; LAB_0057b4f4
    CMP byte ptr [EBX + 0x4],0x0        ; 0057b475
    JNZ 0x0057b4a4                      ; 0057b479
        ;   XREF to: 0057b4a4 (CONDITIONAL_JUMP)  ; LAB_0057b4a4
    LEA ESI,[EBX + 0x4]                 ; 0057b47b
    PUSH 0x0                            ; 0057b47e
        ;   Label: LAB_0057b47e
    PUSH 0x100                          ; 0057b480
    PUSH ESI                            ; 0057b485
    PUSH 0x6477ae                       ; 0057b486 | = "Enter new spot light name"
    MOV EDX,dword ptr [0x00678a60]      ; 0057b48b | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EDX                            ; 0057b491 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057b492
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057b497
    TEST EAX,EAX                        ; 0057b49a
    JZ 0x0057b4f4                       ; 0057b49c
        ;   XREF to: 0057b4f4 (CONDITIONAL_JUMP)  ; LAB_0057b4f4
    CMP byte ptr [EBX + 0x4],0x0        ; 0057b49e
    JZ 0x0057b47e                       ; 0057b4a2
        ;   XREF to: 0057b47e (CONDITIONAL_JUMP)  ; LAB_0057b47e
    PUSH EDI                            ; 0057b4a4
        ;   Label: LAB_0057b4a4
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 0057b4a5
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b4aa
    PUSH 0x6477c8                       ; 0057b4ad | = "Precompute light visibility?"
    MOV EBX,dword ptr [0x00678a60]      ; 0057b4b2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EBX                            ; 0057b4b8 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0 ; 0057b4b9
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog2_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0057b4be
    TEST EAX,EAX                        ; 0057b4c1
    JZ 0x0057b4d0                       ; 0057b4c3
        ;   XREF to: 0057b4d0 (CONDITIONAL_JUMP)  ; LAB_0057b4d0
    PUSH -0x1                           ; 0057b4c5
    PUSH EDI                            ; 0057b4c7
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 0057b4c8
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr, int light_index)
    ADD ESP,0x8                         ; 0057b4cd
    PUSH EDI                            ; 0057b4d0
        ;   Label: LAB_0057b4d0
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057b4d1
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b4d6
    POP EDI                             ; 0057b4d9
    POP ESI                             ; 0057b4da
    POP EBX                             ; 0057b4db
    RET                                 ; 0057b4dc
    PUSH 0x647795                       ; 0057b4dd | = "Too many lights already!"
        ;   Label: LAB_0057b4dd
    MOV EAX,[0x00678a60]                ; 0057b4e2 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 0057b4e7 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057b4e8
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
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

