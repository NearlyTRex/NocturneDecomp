; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047f970(CEditorTools *param_1)
;
;
; XREF[10]:
;   core_dtrace.cpp_FUN_00473670 at 004737d8
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8560
;   core_menu.cpp_adjustMouseSensitivity_FUN_004e80f0 at 004e832c
;   core_netgame.cpp_CNetGame_disconnect_FUN_005043b0 at 00504528
;   engine_pod.cpp_FUN_00513d20 at 00513f41
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0047e470 at 0047e74b
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450 at 004834ff
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047c8e0 at 0047cbac
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 at 0047d803
;   shape_edittool.cpp_showTextInputDialog_FUN_0047c2c0 at 0047c59f
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990
;   shape_edittool.cpp_FUN_0047ccb0
;   shape_edittool.cpp_paintWindowBackground_FUN_0047cd80
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_paintWindowBackground_FUN_0047cd80 ; 0047f970
        ;   XREF to: 0047cd80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_paintWindowBackground_FUN_0047cd80()
        ;   Label: shape_edittool.cpp_FUN_0047f970
    CALL shape_edittool.cpp_FUN_0047ccb0 ; 0047f975
        ;   XREF to: 0047ccb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047ccb0()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047f97a
    PUSH EDX                            ; 0047f97e
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990 ; 0047f97f
        ;   XREF to: 0047f990 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047f990(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047f984
    RET                                 ; 0047f987

