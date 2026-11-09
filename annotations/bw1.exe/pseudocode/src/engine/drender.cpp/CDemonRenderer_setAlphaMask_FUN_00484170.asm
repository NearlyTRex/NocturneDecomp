; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_00484170(CDemonRenderer *this_ptr,int alpha_mask)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_mask
;
; XREF[2]:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00555590 at 005555ea
;   core_set.cpp_FUN_00555460 at 0055556a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00484170
        ;   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_00484170
    MOV EDX,dword ptr [ESP + 0x4]       ; 00484174
    SHL EAX,0x18                        ; 00484178
    MOV dword ptr [EDX + 0x14],EAX      ; 0048417b
    RET                                 ; 0048417e

