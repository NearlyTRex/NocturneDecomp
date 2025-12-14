; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_004a6510(CEdButton * this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 0050768e
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507302
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 at 004a3ca5
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e3f2
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049de06
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6510
        ;   Label: shape_edittool.cpp_CEdButton_dtor_FUN_004a6510
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a6511
    PUSH EBX                            ; 004a6515
    CALL shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530 ; 004a6516
        ;   XREF to: 004a6530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdButton_clearActiveButtonIfMatch_FUN_004a6530(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 004a651b
    MOV EAX,EBX                         ; 004a651e
    POP EBX                             ; 004a6520
    RET                                 ; 004a6521

