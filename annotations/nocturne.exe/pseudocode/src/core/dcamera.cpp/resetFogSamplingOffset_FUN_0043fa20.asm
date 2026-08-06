; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_resetFogSamplingOffset_FUN_0043fa20(SFogGrid *fog)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_FUN_00446810 at 0044683c
;   core_dcamera.cpp_generateFogGrid_FUN_0043fa50 at 0043fc69
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043fa20
        ;   Label: core_dcamera.cpp_resetFogSamplingOffset_FUN_0043fa20
    MOV dword ptr [EAX + 0x1004],0x0    ; 0043fa24
    MOV dword ptr [EAX + 0x1008],0x0    ; 0043fa2e
    MOV dword ptr [EAX + 0x1000],0x0    ; 0043fa38
    RET                                 ; 0043fa42

