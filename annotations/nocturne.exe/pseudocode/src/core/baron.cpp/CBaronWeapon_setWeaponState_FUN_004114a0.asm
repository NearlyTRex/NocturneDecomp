; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_004114a0(CBaronWeapon *this_ptr,int weapon_state)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   weapon_state
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_005786d2
;   TerminatedCString s_CBaronWeapon_setWeaponSt_005786e4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_baron.cpp_CBaron_attachToOwner_FUN_00410a80
;   core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004114a0
        ;   Label: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_004114a0
    PUSH ESI                            ; 004114a1
    PUSH EBP                            ; 004114a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004114a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004114a7
    PUSH EDX                            ; 004114ab
    PUSH EBX                            ; 004114ac
    CALL core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560 ; 004114ad
        ;   XREF to: 00554560 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setWeaponState_FUN_00554560(CWeapon * this_ptr, int weapon_state)
    ADD ESP,0x8                         ; 004114b2
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004114b5
    PUSH EBX                            ; 004114bb
    CALL dword ptr [EAX + 0x8c]         ; 004114bc
    ADD ESP,0x4                         ; 004114c2
    MOV ECX,dword ptr [EBX + 0x2cc]     ; 004114c5
    MOV ESI,EAX                         ; 004114cb
    CMP ECX,0x2                         ; 004114cd
    JNZ 0x00411515                      ; 004114d0
        ;   XREF to: 00411515 (CONDITIONAL_JUMP)  ; LAB_00411515
    TEST EAX,EAX                        ; 004114d2
    JNZ 0x004114f8                      ; 004114d4
        ;   XREF to: 004114f8 (CONDITIONAL_JUMP)  ; LAB_004114f8
    MOV EBP,0x5786d2                    ; 004114d6 | = "..\\core\\baron.cpp"
    MOV EAX,0x31c                       ; 004114db
    PUSH 0x5786e4                       ; 004114e0 | = "CBaronWeapon::setWeaponState - I'm dr..."
    MOV dword ptr [0x01cc4800],EBP      ; 004114e5 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004114eb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004114f0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004114f5
    PUSH EBX                            ; 004114f8
        ;   Label: LAB_004114f8
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 ; 004114f9
        ;   XREF to: 00411530 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 004114fe
    PUSH ESI                            ; 00411501
    MOV EDX,dword ptr [EBX + 0x570]     ; 00411502
    PUSH EDX                            ; 00411508
    CALL core_baron.cpp_CBaron_attachToOwner_FUN_00410a80 ; 00411509
        ;   XREF to: 00410a80 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_attachToOwner_FUN_00410a80(CBaron * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 0041150e
    POP EBP                             ; 00411511
        ;   Label: LAB_00411511
    POP ESI                             ; 00411512
    POP EBX                             ; 00411513
    RET                                 ; 00411514
    MOV ESI,dword ptr [EBX + 0x570]     ; 00411515
        ;   Label: LAB_00411515
    TEST ESI,ESI                        ; 0041151b
    JZ 0x00411511                       ; 0041151d
        ;   XREF to: 00411511 (CONDITIONAL_JUMP)  ; LAB_00411511
    PUSH EAX                            ; 0041151f
    PUSH ESI                            ; 00411520
    CALL core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0 ; 00411521
        ;   XREF to: 00410bb0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_detachFromOwner_FUN_00410bb0(CBaron * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 00411526
    POP EBP                             ; 00411529
    POP ESI                             ; 0041152a
    POP EBX                             ; 0041152b
    RET                                 ; 0041152c

