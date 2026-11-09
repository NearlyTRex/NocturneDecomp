; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0044c5e0(int param_1)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 0045363d
;   core_dcamera.cpp_generateFogGrid_FUN_0044c610 at 0044c829
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c5e0
        ;   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_0044c5e0
    MOV dword ptr [EAX + 0x1004],0x0    ; 0044c5e4
    MOV dword ptr [EAX + 0x1008],0x0    ; 0044c5ee
    MOV dword ptr [EAX + 0x1000],0x0    ; 0044c5f8
    RET                                 ; 0044c602

