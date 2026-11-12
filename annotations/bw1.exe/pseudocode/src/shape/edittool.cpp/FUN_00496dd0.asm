; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00496dd0(CEditorTools *param_1)
;
;
; XREF[10]:
;   core_dtrace.cpp_FUN_0048aaee at 0048ac58
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004cfba3
;   core_menu.cpp_adjustMouseSensitivity_FUN_0050a5e0 at 0050a81c
;   core_netgame.cpp_CNetGame_disconnect_FUN_0052cab0 at 0052cc2b
;   engine_pod.cpp_FUN_0053bfc0 at 0053c1e1
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_004958d0 at 00495bab
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0 at 0049a95f
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_00493d40 at 0049400c
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 at 00494c63
;   shape_edittool.cpp_showTextInputDialog_FUN_00493720 at 004939ff
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0
;   shape_edittool.cpp_FUN_00494110
;   shape_edittool.cpp_paintWindowBackground_FUN_004941e0
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_paintWindowBackground_FUN_004941e0 ; 00496dd0
        ;   XREF to: 004941e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_004941e0()
        ;   Label: shape_edittool.cpp_FUN_00496dd0
    CALL shape_edittool.cpp_FUN_00494110 ; 00496dd5
        ;   XREF to: 00494110 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00494110()
    MOV EDX,dword ptr [ESP + 0x4]       ; 00496dda
    PUSH EDX                            ; 00496dde
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0 ; 00496ddf
        ;   XREF to: 00496df0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00496de4
    RET                                 ; 00496de7

