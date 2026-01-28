; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044bb70(SFogGrid *fog)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 004529dd
;   core_dcamera.cpp_generateFogGrid_FUN_0044bba0 at 0044bdb9
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044bb70
        ;   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044bb70
    MOV dword ptr [EAX + 0x1004],0x0    ; 0044bb74
    MOV dword ptr [EAX + 0x1008],0x0    ; 0044bb7e
    MOV dword ptr [EAX + 0x1000],0x0    ; 0044bb88
    RET                                 ; 0044bb92

