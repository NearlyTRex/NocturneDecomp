; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00410550(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_00410540 = 00410585
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410550
        ;   Label: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00410550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410551
    PUSH EBX                            ; 00410555
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640 ; 00410556
        ;   XREF to: 00410640 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(CBaronWeapon * this_ptr)
    MOV EDX,dword ptr [EBX + 0x578]     ; 0041055b
    ADD ESP,0x4                         ; 00410561
    TEST EDX,EDX                        ; 00410564
    JZ 0x00410581                       ; 00410566
        ;   XREF to: 00410581 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EDX + 0xc1e4]    ; 00410568
    MOV EAX,EDX                         ; 0041056e
    TEST ECX,ECX                        ; 00410570
    JZ 0x0041058c                       ; 00410572
        ;   XREF to: 0041058c (CONDITIONAL_JUMP)  ; LAB_0041058c
    XOR EAX,EDX                         ; 00410574
    POP EBX                             ; 00410576
    LEA EAX,[EAX]                       ; 00410577
    LEA EDX,[EDX]                       ; 0041057d
    XOR EAX,EAX                         ; 00410581
        ;   Label: default
    POP EBX                             ; 00410583
    RET                                 ; 00410584
    MOV EAX,0x1                         ; 00410585
        ;   Label: caseD_0
    POP EBX                             ; 0041058a
    RET                                 ; 0041058b
    LEA EAX,[EDX + 0x158]               ; 0041058c
        ;   Label: LAB_0041058c
    PUSH EAX                            ; 00410592
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00410593
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00410598
    ADD ESP,0x4                         ; 0041059b
    CMP EAX,0x3                         ; 0041059e
    JA 0x00410581                       ; 004105a1
        ;   XREF to: 00410581 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x410540]  ; 004105a3 | caseD_3 | switchdataD_00410540
        ;   Label: switchD

