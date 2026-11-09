; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_00448720(int param_1)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f77d
;   core_dcamera.cpp_generateFogGrid_FUN_00448750 at 00448969
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00448720
        ;   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_00448720
    MOV dword ptr [EAX + 0x1004],0x0    ; 00448724
    MOV dword ptr [EAX + 0x1008],0x0    ; 0044872e
    MOV dword ptr [EAX + 0x1000],0x0    ; 00448738
    RET                                 ; 00448742

