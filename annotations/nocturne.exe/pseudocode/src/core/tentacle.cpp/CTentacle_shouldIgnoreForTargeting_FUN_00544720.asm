; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005965f0
;
; Called Functions:
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   crt_string.c__stricmp_FUN_00564520
;   FUN_0040d830
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00544720
        ;   Label: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00544720
    MOV EBP,ESP                         ; 00544721
    MOV EAX,dword ptr [EBP + 0x8]       ; 00544723
    PUSH 0x5965f0                       ; 00544726 | DAT_005965f0
    ADD EAX,0x150                       ; 0054472b
    PUSH EAX                            ; 00544730
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00544731
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    ADD ESP,0x4                         ; 00544736
    PUSH EAX                            ; 00544739
    CALL crt_string.c__stricmp_FUN_00564520 ; 0054473a
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0054473f
    TEST EAX,EAX                        ; 00544742
    JNZ 0x0054474d                      ; 00544744
        ;   XREF to: 0054474d (CONDITIONAL_JUMP)  ; LAB_0054474d
    MOV EAX,0x1                         ; 00544746
    POP EBP                             ; 0054474b
    RET                                 ; 0054474c
    MOV EDX,dword ptr [EBP + 0x8]       ; 0054474d
        ;   Label: LAB_0054474d
    PUSH EDX                            ; 00544750
    CALL FUN_0040d830                   ; 00544751
        ;   XREF to: 0040d830 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d830()
    ADD ESP,0x4                         ; 00544756
    POP EBP                             ; 00544759
    RET                                 ; 0054475a

