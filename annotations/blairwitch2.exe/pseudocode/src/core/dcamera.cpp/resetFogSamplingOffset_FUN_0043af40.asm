; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043af40(int param_1)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00441f7d
;   core_dcamera.cpp_generateFogGrid_FUN_0043af70 at 0043b189
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043af40
        ;   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043af40
    MOV dword ptr [EAX + 0x1004],0x0    ; 0043af44
    MOV dword ptr [EAX + 0x1008],0x0    ; 0043af4e
    MOV dword ptr [EAX + 0x1000],0x0    ; 0043af58
    RET                                 ; 0043af62

