; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_markMirrorCameraDirty_FUN_0053b0c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_FUN_004cc040 at 004cc412
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053b0c0
        ;   Label: core_set.cpp_CDemonSet_markMirrorCameraDirty_FUN_0053b0c0
    MOV dword ptr [EAX + 0x16166c],0x1  ; 0053b0c4
    RET                                 ; 0053b0ce

