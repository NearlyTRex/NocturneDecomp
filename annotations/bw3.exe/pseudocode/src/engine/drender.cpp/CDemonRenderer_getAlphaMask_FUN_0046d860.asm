; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 at 0042e230
;   core_dcamera.cpp_CDemonCamera_screenToWorldWithAlpha_FUN_0044a210 at 0044a23c
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044a3e0 at 0044a3f7
;   core_dcamera.cpp_FUN_0044a7e0 at 0044a875
;   core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_00537390 at 005373be
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046d860
        ;   Label: engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
    MOV EAX,dword ptr [EAX + 0x14]      ; 0046d864
    SAR EAX,0x18                        ; 0046d867
    RET                                 ; 0046d86a

