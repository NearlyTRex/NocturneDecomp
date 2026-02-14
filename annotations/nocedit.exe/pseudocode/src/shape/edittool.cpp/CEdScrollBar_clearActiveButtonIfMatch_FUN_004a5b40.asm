; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(CEdScrollBar *this_ptr)
;
; Parameters:
; CEdScrollBar *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_FUN_0053c4f0 at 0053c713
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 at 004a5b26
;
; Referenced Globals:
;   void* g_ActiveControl
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a5b40
        ;   Label: shape_edittool.cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
    CMP EDX,dword ptr [0x02cf2b00]      ; 004a5b44 | g_ActiveControl
    JZ 0x004a5b4d                       ; 004a5b4a
        ;   XREF to: 004a5b4d (CONDITIONAL_JUMP)  ; LAB_004a5b4d
    RET                                 ; 004a5b4c
    XOR ECX,ECX                         ; 004a5b4d
        ;   Label: LAB_004a5b4d
    MOV dword ptr [0x02cf2b00],ECX      ; 004a5b4f | g_ActiveControl
    RET                                 ; 004a5b55

