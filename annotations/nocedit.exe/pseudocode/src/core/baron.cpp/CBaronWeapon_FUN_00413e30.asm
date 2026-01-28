; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_baron_cpp_CBaronWeapon_FUN_00413e30(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* switchdataD_00413e20 = 00413e65
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_FUN_00413f20
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413e30
        ;   Label: core_baron.cpp_CBaronWeapon_FUN_00413e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00413e31
    PUSH EBX                            ; 00413e35
    CALL core_baron.cpp_CBaronWeapon_FUN_00413f20 ; 00413e36
        ;   XREF to: 00413f20 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon * this_ptr)
    MOV EDX,dword ptr [EBX + 0x578]     ; 00413e3b
    ADD ESP,0x4                         ; 00413e41
    TEST EDX,EDX                        ; 00413e44
    JZ 0x00413e61                       ; 00413e46
        ;   XREF to: 00413e61 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EDX + 0xbe38]    ; 00413e48
    MOV EAX,EDX                         ; 00413e4e
    TEST ECX,ECX                        ; 00413e50
    JZ 0x00413e6c                       ; 00413e52
        ;   XREF to: 00413e6c (CONDITIONAL_JUMP)  ; LAB_00413e6c
    XOR EAX,EDX                         ; 00413e54
    POP EBX                             ; 00413e56
    LEA EAX,[EAX]                       ; 00413e57
    LEA EDX,[EDX]                       ; 00413e5d
    XOR EAX,EAX                         ; 00413e61
        ;   Label: default
    POP EBX                             ; 00413e63
    RET                                 ; 00413e64
    MOV EAX,0x1                         ; 00413e65
        ;   Label: caseD_3
    POP EBX                             ; 00413e6a
    RET                                 ; 00413e6b
    LEA EAX,[EDX + 0x158]               ; 00413e6c
        ;   Label: LAB_00413e6c
    PUSH EAX                            ; 00413e72
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00413e73
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00413e78
    ADD ESP,0x4                         ; 00413e7b
    CMP EAX,0x3                         ; 00413e7e
    JA 0x00413e61                       ; 00413e81
        ;   XREF to: 00413e61 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x413e20]  ; 00413e83 | caseD_2 | switchdataD_00413e20
        ;   Label: switchD

