; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046d850(CDemonRenderer *this_ptr,int alpha_mask)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_mask
;
; XREF[2]:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0053af20 at 0053af7a
;   core_set.cpp_FUN_0053adf0 at 0053aefa
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046d850
        ;   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046d850
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046d854
    SHL EAX,0x18                        ; 0046d858
    MOV dword ptr [EDX + 0x14],EAX      ; 0046d85b
    RET                                 ; 0046d85e

