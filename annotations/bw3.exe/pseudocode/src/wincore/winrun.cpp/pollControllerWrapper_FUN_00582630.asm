; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_pollControllerWrapper_FUN_00582630(int controller_index)
;
; Parameters:
; int              Stack[0x4]:4   controller_index
;
; XREF[1]:
;   wincore_winrun.cpp_resetControllerCalibration_FUN_005825e0 at 00582624
;
; Called Functions:
;   wincore_winrun.cpp_pollController_FUN_00581f50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00582630
        ;   Label: wincore_winrun.cpp_pollControllerWrapper_FUN_00582630
    PUSH EDX                            ; 00582634
    CALL wincore_winrun.cpp_pollController_FUN_00581f50 ; 00582635
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_pollController_FUN_00581f50(int controller_index)
    ADD ESP,0x4                         ; 0058263a
    RET                                 ; 0058263d

