; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70(CDemonRenderer *this_ptr,int alpha_mask)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_mask
;
; XREF[2]:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 at 0053433a
;   core_set.cpp_FUN_005341b0 at 005342ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046bc70
        ;   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0046bc70
    MOV EDX,dword ptr [ESP + 0x4]       ; 0046bc74
    SHL EAX,0x18                        ; 0046bc78
    MOV dword ptr [EDX + 0x14],EAX      ; 0046bc7b
    RET                                 ; 0046bc7e

