; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_0050e080 at 0050e14a
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5909
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_0050e190 at 0050e1d9
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004613c0
        ;   Label: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_004613c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004613c4
    MOV dword ptr [EDX + 0x18],EAX      ; 004613c8
    RET                                 ; 004613cb

