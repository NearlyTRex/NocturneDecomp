; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar *this_ptr,uint flags)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[4]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005076a0
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507324
;   core_msnedit.cpp_showEditorHelpScreen_FUN_00535e70 at 00536baa
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 at 004a3cc3
;
; Called Functions:
;   shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5b20
        ;   Label: shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a5b21
    PUSH EBX                            ; 004a5b25
    CALL shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40 ; 004a5b26
        ;   XREF to: 004a5b40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a5b2b
    MOV EAX,EBX                         ; 004a5b2e
    POP EBX                             ; 004a5b30
    RET                                 ; 004a5b31

