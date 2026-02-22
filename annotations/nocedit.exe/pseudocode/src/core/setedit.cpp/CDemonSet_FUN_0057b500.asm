; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b500(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057ca09
;
; Referenced Globals:
;   TerminatedCString s_Not_a_spot_light_006477e5
;   TerminatedCString s_Precompute_light_visibil_006477f7
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;   undefined4 DAT_03276db4
;
; Called Functions:
;   core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
;   core_setedit.cpp_CDemonSet_FUN_0057ae50
;   crt_string.c_strcmp_FUN_005fef20
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b500
        ;   Label: core_setedit.cpp_CDemonSet_FUN_0057b500
    PUSH ESI                            ; 0057b501
    PUSH EDI                            ; 0057b502
    PUSH EBP                            ; 0057b503
    SUB ESP,0x4                         ; 0057b504
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0057b507
    TEST EDX,EDX                        ; 0057b50b
    JL 0x0057b588                       ; 0057b50d
        ;   XREF to: 0057b588 (CONDITIONAL_JUMP)  ; LAB_0057b588
    MOV EBX,dword ptr [ESP + 0x18]      ; 0057b513
    CMP EDX,dword ptr [EBX + 0x19a2c]   ; 0057b517
    JGE 0x0057b588                      ; 0057b51d
        ;   XREF to: 0057b588 (CONDITIONAL_JUMP)  ; LAB_0057b588
    IMUL EBX,EDX,0x1898                 ; 0057b51f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0057b525
    ADD EAX,0x19a30                     ; 0057b529
    ADD EAX,EBX                         ; 0057b52e
    MOV EBP,dword ptr [EAX]             ; 0057b530
    MOV dword ptr [ESP],EAX             ; 0057b532
    TEST EBP,EBP                        ; 0057b535
    JNZ 0x0057b590                      ; 0057b537
        ;   XREF to: 0057b590 (CONDITIONAL_JUMP)  ; LAB_0057b590
    MOV EAX,[0x03276dac]                ; 0057b539 | g_MasterLightCount
    XOR ESI,ESI                         ; 0057b53e
    TEST EAX,EAX                        ; 0057b540
    JLE 0x0057b569                      ; 0057b542
        ;   XREF to: 0057b569 (CONDITIONAL_JUMP)  ; LAB_0057b569
    MOV EBP,dword ptr [ESP]             ; 0057b544
    XOR EBX,EBX                         ; 0057b547
    ADD EBP,0x4                         ; 0057b549
    MOV EDI,dword ptr [EBX + 0x3276db0] ; 0057b54c | g_MasterLightList | DAT_03276db4
        ;   Label: LAB_0057b54c
    LEA EAX,[EDI + 0x40]                ; 0057b552
    PUSH EAX                            ; 0057b555
    PUSH EBP                            ; 0057b556
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0057b557
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057b55c
    TEST EAX,EAX                        ; 0057b55f
    JNZ 0x0057b5a6                      ; 0057b561
        ;   XREF to: 0057b5a6 (CONDITIONAL_JUMP)  ; LAB_0057b5a6
    MOV dword ptr [EDI + 0x1cb4],EAX    ; 0057b563
    MOV EBX,dword ptr [ESP]             ; 0057b569
        ;   Label: LAB_0057b569
    PUSH EBX                            ; 0057b56c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0057b56d
    PUSH ESI                            ; 0057b571
    CALL core_setedit.cpp_CDemonSet_FUN_0057ae50 ; 0057b572
        ;   XREF to: 0057ae50 (UNCONDITIONAL_CALL)  ; int core_setedit.cpp_CDemonSet_FUN_0057ae50(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0057b577
    MOV dword ptr [EDI + 0x1cb4],0x1    ; 0057b57a
    TEST EAX,EAX                        ; 0057b584
    JNZ 0x0057b5b6                      ; 0057b586
        ;   XREF to: 0057b5b6 (CONDITIONAL_JUMP)  ; LAB_0057b5b6
    ADD ESP,0x4                         ; 0057b588
        ;   Label: LAB_0057b588
    POP EBP                             ; 0057b58b
    POP EDI                             ; 0057b58c
    POP ESI                             ; 0057b58d
    POP EBX                             ; 0057b58e
    RET                                 ; 0057b58f
    PUSH 0x6477e5                       ; 0057b590 | = "Not a spot light!"
        ;   Label: LAB_0057b590
    MOV EDX,dword ptr [0x00678a60]      ; 0057b595 | g_CEditorToolsPtr
    PUSH EDX                            ; 0057b59b | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057b59c
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057b5a1
    JMP 0x0057b588                      ; 0057b5a4
        ;   XREF to: 0057b588 (UNCONDITIONAL_JUMP)  ; LAB_0057b588
    MOV ECX,dword ptr [0x03276dac]      ; 0057b5a6 | g_MasterLightCount
        ;   Label: LAB_0057b5a6
    INC ESI                             ; 0057b5ac
    ADD EBX,0x4                         ; 0057b5ad
    CMP ESI,ECX                         ; 0057b5b0
    JL 0x0057b54c                       ; 0057b5b2
        ;   XREF to: 0057b54c (CONDITIONAL_JUMP)  ; LAB_0057b54c
    JMP 0x0057b569                      ; 0057b5b4
        ;   XREF to: 0057b569 (UNCONDITIONAL_JUMP)  ; LAB_0057b569
    PUSH ESI                            ; 0057b5b6
        ;   Label: LAB_0057b5b6
    CALL core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0 ; 0057b5b7
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clearLights_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b5bc
    PUSH 0x6477f7                       ; 0057b5bf | = "Precompute light visibility?"
    MOV EBP,dword ptr [0x00678a60]      ; 0057b5c4 | g_CEditorToolsPtr
    PUSH EBP                            ; 0057b5ca | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 ; 0057b5cb
        ;   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 0057b5d0
    TEST EAX,EAX                        ; 0057b5d3
    JZ 0x0057b5e5                       ; 0057b5d5
        ;   XREF to: 0057b5e5 (CONDITIONAL_JUMP)  ; LAB_0057b5e5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0057b5d7
    PUSH EAX                            ; 0057b5db
    PUSH ESI                            ; 0057b5dc
    CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 ; 0057b5dd
        ;   XREF to: 0056a470 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(CDemonSet * this_ptr, int param_2)
    ADD ESP,0x8                         ; 0057b5e2
    MOV ECX,dword ptr [ESP + 0x18]      ; 0057b5e5
        ;   Label: LAB_0057b5e5
    PUSH ECX                            ; 0057b5e9
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057b5ea
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057b5ef
    ADD ESP,0x4                         ; 0057b5f2
    POP EBP                             ; 0057b5f5
    POP EDI                             ; 0057b5f6
    POP ESI                             ; 0057b5f7
    POP EBX                             ; 0057b5f8
    RET                                 ; 0057b5f9

