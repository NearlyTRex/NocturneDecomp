; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_remountAllPods_FUN_004b5350(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Remounting_all_pods_0062759a
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CEditorTools g_CEditorToolsPtr
;   CDemonPod g_CDemonPodInstance
;
; Called Functions:
;   engine_pod.cpp_CPod_cleanup_FUN_00550c80
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
;
; *****************************************************************************

section .text

    CMP dword ptr [0x00680cdc],0x0      ; 004b5350 | CDemonPod * g_CDemonPodPtr
        ;   Label: engine_fileio.cpp_remountAllPods_FUN_004b5350
    JNZ 0x004b535a                      ; 004b5357 | LAB_004b535a
        ;   XREF to: 004b535a (CONDITIONAL_JUMP)
    RET                                 ; 004b5359
    PUSH EBX                            ; 004b535a
        ;   Label: LAB_004b535a
    PUSH 0x62759a                       ; 004b535b | = "Remounting all pods..." | s_Remounting_all_pods_0062759a = Remounting all pods...
    MOV ECX,dword ptr [0x00678a60]      ; 004b5360 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 004b5366 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 ; 004b5367 | void shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790(CEditorTools * this_ptr, char * message)
        ;   XREF to: 0049e790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004b536c
    MOV EBX,dword ptr [0x00680cdc]      ; 004b536f | CDemonPod * g_CDemonPodPtr
    PUSH EBX                            ; 004b5375 | CDemonPod g_CDemonPodInstance
    CALL engine_pod.cpp_CPod_cleanup_FUN_00550c80 ; 004b5376 | void engine_pod.cpp_CPod_cleanup_FUN_00550c80(CPod * this_ptr)
        ;   XREF to: 00550c80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004b537b
    MOV EAX,[0x00680cdc]                ; 004b537e | CDemonPod * g_CDemonPodPtr
    PUSH EAX                            ; 004b5383 | CDemonPod g_CDemonPodInstance
    MOV EDX,dword ptr [EAX + 0x194]     ; 004b5384 | DAT_030e5224
    CALL dword ptr [EDX + 0x4]          ; 004b538a
    ADD ESP,0x4                         ; 004b538d
    POP EBX                             ; 004b5390
    RET                                 ; 004b5391

