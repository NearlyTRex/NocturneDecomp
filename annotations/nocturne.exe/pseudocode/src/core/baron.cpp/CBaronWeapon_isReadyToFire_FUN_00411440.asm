; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_00411440(int param_1)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00411430 = 00411475
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411440
        ;   Label: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_00411440
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411441
    PUSH EBX                            ; 00411445
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 ; 00411446
        ;   XREF to: 00411530 (UNCONDITIONAL_CALL)  ; undefined core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530()
    MOV EDX,dword ptr [EBX + 0x570]     ; 0041144b
    ADD ESP,0x4                         ; 00411451
    TEST EDX,EDX                        ; 00411454
    JZ 0x00411471                       ; 00411456
        ;   XREF to: 00411471 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EDX + 0xbca0]    ; 00411458
    MOV EAX,EDX                         ; 0041145e
    TEST ECX,ECX                        ; 00411460
    JZ 0x0041147c                       ; 00411462
        ;   XREF to: 0041147c (CONDITIONAL_JUMP)  ; LAB_0041147c
    XOR EAX,EDX                         ; 00411464
    POP EBX                             ; 00411466
    LEA EAX,[EAX]                       ; 00411467
    LEA EDX,[EDX]                       ; 0041146d
    XOR EAX,EAX                         ; 00411471
        ;   Label: default
    POP EBX                             ; 00411473
    RET                                 ; 00411474
    MOV EAX,0x1                         ; 00411475
        ;   Label: caseD_0
    POP EBX                             ; 0041147a
    RET                                 ; 0041147b
    LEA EAX,[EDX + 0x150]               ; 0041147c
        ;   Label: LAB_0041147c
    PUSH EAX                            ; 00411482
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 00411483
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00411488
    ADD ESP,0x4                         ; 0041148b
    CMP EAX,0x3                         ; 0041148e
    JA 0x00411471                       ; 00411491
        ;   XREF to: 00411471 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x411430]  ; 00411493 | caseD_3 | switchdataD_00411430
        ;   Label: switchD

