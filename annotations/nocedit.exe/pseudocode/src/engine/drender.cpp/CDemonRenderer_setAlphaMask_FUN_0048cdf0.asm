; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0(CDemonRenderer *this_ptr,int alpha_mask)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_mask
;
; XREF[2]:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_00570af0 at 00570b4a
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 00570aca
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048cdf0
        ;   Label: engine_drender.cpp_CDemonRenderer_setAlphaMask_FUN_0048cdf0
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cdf4
    SHL EAX,0x18                        ; 0048cdf8
    MOV dword ptr [EDX + 0x14],EAX      ; 0048cdfb
    RET                                 ; 0048cdfe

