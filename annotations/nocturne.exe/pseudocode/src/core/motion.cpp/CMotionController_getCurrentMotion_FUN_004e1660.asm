; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(int *param_1)
;
;
; XREF[100]:
;   FUN_0040fa20 at 0040faa1
;   FUN_00414930 at 00414ab4
;   FUN_00418a00 at 00418dfc
;   FUN_0041fe40 at 0041fe9c
;   FUN_00439f50 at 0043a2d7
;   FUN_0043ab40 at 0043ab45
;   FUN_00495a20 at 00496654
;   FUN_004996b0 at 0049972f
;   FUN_004a9270 at 004a932d
;   FUN_004ab450 at 004ab522
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

