; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaronWeapon_isReadyToFire_FUN_004109d0(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined1* switchdataD_004109c0 = 00410a05
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004109d0
        ;   Label: core_baron.cpp_CBaronWeapon_isReadyToFire_FUN_004109d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004109d1
    PUSH EBX                            ; 004109d5
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0 ; 004109d6
        ;   XREF to: 00410ac0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410ac0(CBaronWeapon * this_ptr)
    MOV EDX,dword ptr [EBX + 0x6d4]     ; 004109db
    ADD ESP,0x4                         ; 004109e1
    TEST EDX,EDX                        ; 004109e4
    JZ 0x00410a01                       ; 004109e6
        ;   XREF to: 00410a01 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EDX + 0x10a74]   ; 004109e8
    MOV EAX,EDX                         ; 004109ee
    TEST ECX,ECX                        ; 004109f0
    JZ 0x00410a0c                       ; 004109f2
        ;   XREF to: 00410a0c (CONDITIONAL_JUMP)  ; LAB_00410a0c
    XOR EAX,EDX                         ; 004109f4
    POP EBX                             ; 004109f6
    LEA EAX,[EAX]                       ; 004109f7
    LEA EDX,[EDX]                       ; 004109fd
    XOR EAX,EAX                         ; 00410a01
        ;   Label: default
    POP EBX                             ; 00410a03
    RET                                 ; 00410a04
    MOV EAX,0x1                         ; 00410a05
        ;   Label: caseD_0
    POP EBX                             ; 00410a0a
    RET                                 ; 00410a0b
    LEA EAX,[EDX + 0x2b4]               ; 00410a0c
        ;   Label: LAB_00410a0c
    PUSH EAX                            ; 00410a12
    CALL core_motion.cpp_FUN_005035c0   ; 00410a13
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00410a18
    ADD ESP,0x4                         ; 00410a1b
    CMP EAX,0x3                         ; 00410a1e
    JA 0x00410a01                       ; 00410a21
        ;   XREF to: 00410a01 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4109c0]  ; 00410a23 | caseD_3 | switchdataD_004109c0
        ;   Label: switchD

