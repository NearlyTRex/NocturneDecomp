; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_startMission_FUN_004d9780 at 004d98a2
;   core_platfrm.cpp_FUN_004f6170 at 004f6301
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500c26
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005135f0
        ;   Label: core_setdir.cpp_CDemonSet_clearCameraSwitchCooldown_FUN_005135f0
    FLD float ptr [EDX + 0x15aacc]      ; 005135f4
    FLDZ                                ; 005135fa
    FCOMPP                              ; 005135fc
    FNSTSW AX                           ; 005135fe
    SAHF                                ; 00513600
    JC 0x00513604                       ; 00513601
        ;   XREF to: 00513604 (CONDITIONAL_JUMP)  ; LAB_00513604
    RET                                 ; 00513603
    MOV dword ptr [EDX + 0x15aacc],0x1e3ce508 ; 00513604
        ;   Label: LAB_00513604
    RET                                 ; 0051360e

