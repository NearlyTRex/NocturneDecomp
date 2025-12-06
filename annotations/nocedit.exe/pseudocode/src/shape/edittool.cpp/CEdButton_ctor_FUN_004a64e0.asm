; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
;
; Parameters:
; CEdButton *      Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 005075ce
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 005071d3
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 at 004a3bc0
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 at 0049e297
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049dc4e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a64e0
        ;   Label: shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
    MOV byte ptr [EAX + 0x4],0x0        ; 004a64e4
    MOV byte ptr [EAX + 0x1c],0x0       ; 004a64e8
    MOV dword ptr [EAX + 0x14],0x0      ; 004a64ec
    MOV dword ptr [EAX + 0x18],0x0      ; 004a64f3
    MOV dword ptr [EAX],0x0             ; 004a64fa
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a6500
    MOV dword ptr [EAX + 0x10],EDX      ; 004a6503
    MOV dword ptr [EAX + 0xc],EDX       ; 004a6506
    MOV dword ptr [EAX + 0x8],EDX       ; 004a6509
    RET                                 ; 004a650c

