; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(int *param_1)
;
;
; XREF[100]:
;   core_armour.cpp_FUN_0040fa20 at 0040faa1
;   core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440 at 00411483
;   core_baron.cpp_FUN_00410490 at 00410a35
;   core_baron.cpp_FUN_004110f0 at 0041111c
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412516
;   core_batcreat.cpp_FUN_00413040 at 004131c4
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413896
;   core_batman.cpp_FUN_00414930 at 00414ab4
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 00415530
;   core_boneguy.cpp_FUN_00418a00 at 00418dfc
;   ... and 90 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e1660
        ;   Label: core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
    IMUL EDX,dword ptr [EAX + 0x4],0x54c ; 004e1664
    MOV EAX,dword ptr [EAX]             ; 004e166b
    ADD EAX,0x968                       ; 004e166d
    ADD EAX,EDX                         ; 004e1672
    RET                                 ; 004e1674

