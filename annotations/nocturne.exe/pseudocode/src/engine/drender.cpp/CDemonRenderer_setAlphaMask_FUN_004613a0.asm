; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_004613a0(CDemonRenderer *this_ptr,int alpha_mask)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_mask
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_0050e080 at 0050e16a
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 at 0050e1ea
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004613a0
        ;   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_004613a0
    MOV EDX,dword ptr [ESP + 0x4]       ; 004613a4
    SHL EAX,0x18                        ; 004613a8
    MOV dword ptr [EDX + 0x14],EAX      ; 004613ab
    RET                                 ; 004613ae

