; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEdScrollBar * __cdecl shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[7]:
;   core_main.c_showDeveloperToolsMenu_FUN_005073a0 at 00507566
;   core_main.c_showLicenseAgreement_FUN_005070f0 at 0050717b
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c6c7
;   core_msnedit.cpp_FUN_00535e70 at 00535e82
;   core_script.cpp_staticInit_FUN_005591b0 at 00559203
;   core_setedit.cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0 at 00577d12
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 at 004a3ba6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a5ae0
        ;   Label: shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
    MOV dword ptr [EAX + 0x4],0x1       ; 004a5ae4
    MOV dword ptr [EAX],0x0             ; 004a5aeb
    MOV dword ptr [EAX + 0x8],0x1       ; 004a5af1
    MOV dword ptr [EAX + 0x20],0x0      ; 004a5af8
    MOV dword ptr [EAX + 0xc],0x1       ; 004a5aff
    MOV dword ptr [EAX + 0x10],0x0      ; 004a5b06
    MOV EDX,dword ptr [EAX + 0x20]      ; 004a5b0d
    MOV dword ptr [EAX + 0x1c],EDX      ; 004a5b10
    MOV dword ptr [EAX + 0x18],EDX      ; 004a5b13
    MOV dword ptr [EAX + 0x14],EDX      ; 004a5b16
    RET                                 ; 004a5b19

