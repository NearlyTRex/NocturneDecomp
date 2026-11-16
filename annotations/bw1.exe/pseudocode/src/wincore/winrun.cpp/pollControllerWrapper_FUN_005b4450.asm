; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_pollControllerWrapper_FUN_005b4450(int controller_index)
;
; Parameters:
; int              Stack[0x4]:4   controller_index
;
; XREF[1]:
;   wincore_winrun.cpp_resetControllerCalibration_FUN_005b4400 at 005b4444
;
; Called Functions:
;   wincore_winrun.cpp_pollController_FUN_005b3d70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b4450
        ;   Label: wincore_winrun.cpp_pollControllerWrapper_FUN_005b4450
    PUSH EDX                            ; 005b4454
    CALL wincore_winrun.cpp_pollController_FUN_005b3d70 ; 005b4455
        ;   XREF to: 005b3d70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_pollController_FUN_005b3d70(int controller_index)
    ADD ESP,0x4                         ; 005b445a
    RET                                 ; 005b445d

