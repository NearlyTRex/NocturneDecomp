; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047e760(CEditorTools *param_1)
;
;
; XREF[11]:
;   core_dtrace.cpp_FUN_004725fe at 00472768
;   core_game.cpp_FUN_004b6170 at 004b66b0
;   core_menu.cpp_FUN_004ebf10 at 004ecb8d
;   core_menu.cpp_adjustMouseSensitivity_FUN_004eb7c0 at 004eb9fc
;   core_netgame.cpp_FUN_0050b8d0 at 0050ba48
;   engine_pod.cpp_FUN_0051aa7e at 0051aca1
;   shape_edittool.cpp_FUN_0047c0f0 at 0047c742
;   shape_edittool.cpp_FUN_0047d270 at 0047d54b
;   shape_edittool.cpp_FUN_00482250 at 004822ff
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0047b800 at 0047bac0
;   ... and 1 more
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
;   shape_edittool.cpp_FUN_0047bbd0
;   shape_edittool.cpp_FUN_0047bca0
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_FUN_0047bca0 ; 0047e760
        ;   XREF to: 0047bca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047bca0()
        ;   Label: shape_edittool.cpp_FUN_0047e760
    CALL shape_edittool.cpp_FUN_0047bbd0 ; 0047e765
        ;   XREF to: 0047bbd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047bbd0()
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047e76a
    PUSH EDX                            ; 0047e76e
    CALL shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780 ; 0047e76f
        ;   XREF to: 0047e780 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 0047e774
    RET                                 ; 0047e777

