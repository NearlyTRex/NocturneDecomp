; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_baron_cpp_CBaronWeapon_setWeaponState_FUN_00413e90(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_006150b5
;   TerminatedCString s_CBaronWeapon_setWeaponSt_006150c7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_baron.cpp_CBaron_FUN_004135a0
;   core_baron.cpp_CBaronWeapon_FUN_00413f20
;   core_baron.cpp_FUN_00413470
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_weapon.cpp_CWeapon_FUN_005ee640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413e90
        ;   Label: core_baron.cpp_CBaronWeapon_setWeaponState_FUN_00413e90
    PUSH ESI                            ; 00413e91
    PUSH EBP                            ; 00413e92
    MOV EBX,dword ptr [ESP + 0x10]      ; 00413e93
    MOV EDX,dword ptr [ESP + 0x14]      ; 00413e97
    PUSH EDX                            ; 00413e9b
    PUSH EBX                            ; 00413e9c
    CALL core_weapon.cpp_CWeapon_FUN_005ee640 ; 00413e9d
        ;   XREF to: 005ee640 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_FUN_005ee640(CWeapon * this_ptr)
    ADD ESP,0x8                         ; 00413ea2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00413ea5
    PUSH EBX                            ; 00413eab
    CALL dword ptr [EAX + 0x8c]         ; 00413eac
    ADD ESP,0x4                         ; 00413eb2
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 00413eb5
    MOV ESI,EAX                         ; 00413ebb
    CMP ECX,0x2                         ; 00413ebd
    JNZ 0x00413f05                      ; 00413ec0
        ;   XREF to: 00413f05 (CONDITIONAL_JUMP)  ; LAB_00413f05
    TEST EAX,EAX                        ; 00413ec2
    JNZ 0x00413ee8                      ; 00413ec4
        ;   XREF to: 00413ee8 (CONDITIONAL_JUMP)  ; LAB_00413ee8
    MOV EBP,0x6150b5                    ; 00413ec6 | = "..\\core\\baron.cpp"
    MOV EAX,0x31c                       ; 00413ecb
    PUSH 0x6150c7                       ; 00413ed0 | = "CBaronWeapon::setWeaponState - I'm dr..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00413ed5 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00413edb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00413ee0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00413ee5
    PUSH EBX                            ; 00413ee8
        ;   Label: LAB_00413ee8
    CALL core_baron.cpp_CBaronWeapon_FUN_00413f20 ; 00413ee9
        ;   XREF to: 00413f20 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_FUN_00413f20(CBaronWeapon * this_ptr)
    ADD ESP,0x4                         ; 00413eee
    PUSH ESI                            ; 00413ef1
    MOV EDX,dword ptr [EBX + 0x578]     ; 00413ef2
    PUSH EDX                            ; 00413ef8
    CALL core_baron.cpp_FUN_00413470    ; 00413ef9
        ;   XREF to: 00413470 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_FUN_00413470(int param_1, CDemonActor * param_2)
    ADD ESP,0x8                         ; 00413efe
    POP EBP                             ; 00413f01
        ;   Label: LAB_00413f01
    POP ESI                             ; 00413f02
    POP EBX                             ; 00413f03
    RET                                 ; 00413f04
    MOV ESI,dword ptr [EBX + 0x578]     ; 00413f05
        ;   Label: LAB_00413f05
    TEST ESI,ESI                        ; 00413f0b
    JZ 0x00413f01                       ; 00413f0d
        ;   XREF to: 00413f01 (CONDITIONAL_JUMP)  ; LAB_00413f01
    PUSH EAX                            ; 00413f0f
    PUSH ESI                            ; 00413f10
    CALL core_baron.cpp_CBaron_FUN_004135a0 ; 00413f11
        ;   XREF to: 004135a0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_FUN_004135a0(CBaron * this_ptr, int param_2)
    ADD ESP,0x8                         ; 00413f16
    POP EBP                             ; 00413f19
    POP ESI                             ; 00413f1a
    POP EBX                             ; 00413f1b
    RET                                 ; 00413f1c

