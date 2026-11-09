; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMelee * __cdecl core_melee_cpp_CMelee_ctor_FUN_004e6f90(CMelee *this_ptr)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_melee.cpp_factoryFuncMelee_FUN_004e6f60 at 004e6f73
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_weapon.cpp_CWeapon_ctor_FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6f90
        ;   Label: core_melee.cpp_CMelee_ctor_FUN_004e6f90
    PUSH ESI                            ; 004e6f91
    PUSH EDI                            ; 004e6f92
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e6f93
    PUSH EDX                            ; 004e6f97
    CALL core_weapon.cpp_CWeapon_ctor_FUN_0057ad70 ; 004e6f98
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_0057ad70(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004e6f9d
    PUSH 0x5c7051                       ; 004e6fa0
    MOV EBX,EAX                         ; 004e6fa5
    LEA EDI,[EAX + 0x158]               ; 004e6fa7
    PUSH EDI                            ; 004e6fad
    MOV dword ptr [EAX + 0x154],0x5e27a4 ; 004e6fae
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004e6fb8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2e0],0x7     ; 004e6fbd
    MOV dword ptr [EBX + 0x5b8],0xffffffff ; 004e6fc7
    MOV dword ptr [EBX + 0x568],0x0     ; 004e6fd1
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e6fdb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004e6fe5
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004e6fef
    MOV dword ptr [EBX + 0x2e8],0x40a00000 ; 004e6ff9
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004e7003
    MOV dword ptr [EBX + 0x2f0],0x0     ; 004e700d
    MOV dword ptr [EBX + 0x594],0x1     ; 004e7017
    MOV dword ptr [EBX + 0x598],0x41200000 ; 004e7021
    MOV dword ptr [EBX + 0x59c],0x41700000 ; 004e702b
    MOV dword ptr [EBX + 0x5a0],0x3f000000 ; 004e7035
    MOV dword ptr [EBX + 0x5a4],0x0     ; 004e703f
    MOV ESI,0x5c705b                    ; 004e7049
    MOV dword ptr [EBX + 0x5ac],0x0     ; 004e704e
    ADD ESP,0x8                         ; 004e7058
    MOV dword ptr [EBX + 0x5b0],0x0     ; 004e705b
    LEA EDI,[EBX + 0x5bc]               ; 004e7065
    MOV dword ptr [EBX + 0x5b8],0x0     ; 004e706b
    PUSH EDI                            ; 004e7075
    MOV AL,byte ptr [ESI]               ; 004e7076
        ;   Label: LAB_004e7076
    MOV byte ptr [EDI],AL               ; 004e7078
    CMP AL,0x0                          ; 004e707a
    JZ 0x004e708e                       ; 004e707c
        ;   XREF to: 004e708e (CONDITIONAL_JUMP)  ; LAB_004e708e
    MOV AL,byte ptr [ESI + 0x1]         ; 004e707e
    ADD ESI,0x2                         ; 004e7081
    MOV byte ptr [EDI + 0x1],AL         ; 004e7084
    ADD EDI,0x2                         ; 004e7087
    CMP AL,0x0                          ; 004e708a
    JNZ 0x004e7076                      ; 004e708c
        ;   XREF to: 004e7076 (CONDITIONAL_JUMP)  ; LAB_004e7076
    POP EDI                             ; 004e708e
        ;   Label: LAB_004e708e
    MOV ESI,0x5c7067                    ; 004e708f
    LEA EDI,[EBX + 0x620]               ; 004e7094
    PUSH EDI                            ; 004e709a
    MOV AL,byte ptr [ESI]               ; 004e709b
        ;   Label: LAB_004e709b
    MOV byte ptr [EDI],AL               ; 004e709d
    CMP AL,0x0                          ; 004e709f
    JZ 0x004e70b3                       ; 004e70a1
        ;   XREF to: 004e70b3 (CONDITIONAL_JUMP)  ; LAB_004e70b3
    MOV AL,byte ptr [ESI + 0x1]         ; 004e70a3
    ADD ESI,0x2                         ; 004e70a6
    MOV byte ptr [EDI + 0x1],AL         ; 004e70a9
    ADD EDI,0x2                         ; 004e70ac
    CMP AL,0x0                          ; 004e70af
    JNZ 0x004e709b                      ; 004e70b1
        ;   XREF to: 004e709b (CONDITIONAL_JUMP)  ; LAB_004e709b
    POP EDI                             ; 004e70b3
        ;   Label: LAB_004e70b3
    MOV ESI,0x5c7073                    ; 004e70b4
    LEA EDI,[EBX + 0x684]               ; 004e70b9
    PUSH EDI                            ; 004e70bf
    MOV AL,byte ptr [ESI]               ; 004e70c0
        ;   Label: LAB_004e70c0
    MOV byte ptr [EDI],AL               ; 004e70c2
    CMP AL,0x0                          ; 004e70c4
    JZ 0x004e70d8                       ; 004e70c6
        ;   XREF to: 004e70d8 (CONDITIONAL_JUMP)  ; LAB_004e70d8
    MOV AL,byte ptr [ESI + 0x1]         ; 004e70c8
    ADD ESI,0x2                         ; 004e70cb
    MOV byte ptr [EDI + 0x1],AL         ; 004e70ce
    ADD EDI,0x2                         ; 004e70d1
    CMP AL,0x0                          ; 004e70d4
    JNZ 0x004e70c0                      ; 004e70d6
        ;   XREF to: 004e70c0 (CONDITIONAL_JUMP)  ; LAB_004e70c0
    POP EDI                             ; 004e70d8
        ;   Label: LAB_004e70d8
    MOV EAX,EBX                         ; 004e70d9
    POP EDI                             ; 004e70db
    POP ESI                             ; 004e70dc
    POP EBX                             ; 004e70dd
    RET                                 ; 004e70de

