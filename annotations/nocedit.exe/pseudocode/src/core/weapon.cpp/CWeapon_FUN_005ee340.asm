; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_weapon.cpp_CWeapon_FUN_005ee340(CWeapon * this_ptr)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_turret.cpp_CTurret_FUN_005e3c70 at 005e3c8c
;
; Referenced Globals:
;   TerminatedCString s_CIcePick_00657b0a
;   TerminatedCString s_CHero_00657b13
;   double DOUBLE_00657b19 = 0.5
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ee340
        ;   Label: core_weapon.cpp_CWeapon_FUN_005ee340
    PUSH EBP                            ; 005ee341
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ee342
    CMP dword ptr [EBX + 0x304],0x0     ; 005ee346
    JNZ 0x005ee386                      ; 005ee34d
        ;   XREF to: 005ee386 (CONDITIONAL_JUMP)  ; LAB_005ee386
    CMP dword ptr [EBX + 0x2d4],0x0     ; 005ee34f
    JNZ 0x005ee386                      ; 005ee356
        ;   XREF to: 005ee386 (CONDITIONAL_JUMP)  ; LAB_005ee386
    CMP dword ptr [EBX + 0x55c],0x0     ; 005ee358
    JZ 0x005ee386                       ; 005ee35f
        ;   XREF to: 005ee386 (CONDITIONAL_JUMP)  ; LAB_005ee386
    LEA EAX,[EBX + 0x354]               ; 005ee361
    FLD float ptr [EAX + 0x4]           ; 005ee367
    FMUL ST0                            ; 005ee36a
    FLD float ptr [EAX]                 ; 005ee36c
    FMUL ST0                            ; 005ee36e
    FADDP                               ; 005ee370
    FLD float ptr [EAX + 0x8]           ; 005ee372
    FMUL ST0                            ; 005ee375
    FADDP                               ; 005ee377
    FSQRT                               ; 005ee379
    FCOMP double ptr [0x00657b19]       ; 005ee37b | DOUBLE_00657b19
    FNSTSW AX                           ; 005ee381
    SAHF                                ; 005ee383
    JA 0x005ee38f                       ; 005ee384
        ;   XREF to: 005ee38f (CONDITIONAL_JUMP)  ; LAB_005ee38f
    CMP dword ptr [EBX + 0x304],0x0     ; 005ee386
        ;   Label: LAB_005ee386
    JZ 0x005ee394                       ; 005ee38d
        ;   XREF to: 005ee394 (CONDITIONAL_JUMP)  ; LAB_005ee394
    XOR EAX,EAX                         ; 005ee38f
        ;   Label: LAB_005ee38f
    POP EBP                             ; 005ee391
    POP EBX                             ; 005ee392
    RET                                 ; 005ee393
    PUSH 0x657b0a                       ; 005ee394 | = "CIcePick"
        ;   Label: LAB_005ee394
    MOV EBP,dword ptr [ESP + 0x14]      ; 005ee399
    PUSH EBP                            ; 005ee39d
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005ee39e
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005ee3a3
    TEST EAX,EAX                        ; 005ee3a6
    JZ 0x005ee3b2                       ; 005ee3a8
        ;   XREF to: 005ee3b2 (CONDITIONAL_JUMP)  ; LAB_005ee3b2
    MOV EAX,0x3                         ; 005ee3aa
        ;   Label: LAB_005ee3aa
    POP EBP                             ; 005ee3af
    POP EBX                             ; 005ee3b0
    RET                                 ; 005ee3b1
    PUSH 0x657b13                       ; 005ee3b2 | = "CHero"
        ;   Label: LAB_005ee3b2
    PUSH EBP                            ; 005ee3b7
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005ee3b8
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005ee3bd
    TEST EAX,EAX                        ; 005ee3c0
    JNZ 0x005ee3d6                      ; 005ee3c2
        ;   XREF to: 005ee3d6 (CONDITIONAL_JUMP)  ; LAB_005ee3d6
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 005ee3c4
    TEST EDX,EDX                        ; 005ee3ca
    JZ 0x005ee3aa                       ; 005ee3cc
        ;   XREF to: 005ee3aa (CONDITIONAL_JUMP)  ; LAB_005ee3aa
    CMP EDX,0x3                         ; 005ee3ce
    JZ 0x005ee3aa                       ; 005ee3d1
        ;   XREF to: 005ee3aa (CONDITIONAL_JUMP)  ; LAB_005ee3aa
    POP EBP                             ; 005ee3d3
    POP EBX                             ; 005ee3d4
    RET                                 ; 005ee3d5
    MOV EAX,0x2                         ; 005ee3d6
        ;   Label: LAB_005ee3d6
    POP EBP                             ; 005ee3db
    POP EBX                             ; 005ee3dc
    RET                                 ; 005ee3dd

