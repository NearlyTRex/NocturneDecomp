; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_calculateGridWidth_FUN_004a6490(void)
;
;
; XREF[6]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507582
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 00507197
;   core_msnedit.cpp_FUN_00535e70 at 00536a27
;   core_script.cpp_CScript_FUN_00566660 at 00566701
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a4906
;   shape_edittool.cpp_calculateGridHeight_FUN_004a64b0 at 004a64b0
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6490
        ;   Label: shape_edittool.cpp_calculateGridWidth_FUN_004a6490
    MOV EBX,dword ptr [0x00679394]      ; 004a6491 | g_WindowWidth
    MOV ECX,0x30                        ; 004a6497
    MOV EDX,EBX                         ; 004a649c
    MOV EAX,EBX                         ; 004a649e
    SAR EDX,0x1f                        ; 004a64a0
    IDIV ECX                            ; 004a64a3
    POP EBX                             ; 004a64a5
    RET                                 ; 004a64a6

