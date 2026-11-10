; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_weapon_cpp_CWeapon_canPickup_FUN_0057b440(CWeapon *this_ptr,CDemonActor *picker)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   picker
;
; Referenced Globals:
;   TerminatedCString s_CIcePick_005d78bb
;   TerminatedCString s_CHero_005d78c4
;   undefined4 DAT_005d78cb
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b440
        ;   Label: core_weapon.cpp_CWeapon_canPickup_FUN_0057b440
    PUSH EBP                            ; 0057b441
    MOV EBP,ESP                         ; 0057b442
    AND ESP,0xfffffff8                  ; 0057b444
    MOV EBX,dword ptr [EBP + 0xc]       ; 0057b447
    CMP dword ptr [EBX + 0x304],0x0     ; 0057b44a
    JNZ 0x0057b48a                      ; 0057b451
        ;   XREF to: 0057b48a (CONDITIONAL_JUMP)  ; LAB_0057b48a
    CMP dword ptr [EBX + 0x2d4],0x0     ; 0057b453
    JNZ 0x0057b48a                      ; 0057b45a
        ;   XREF to: 0057b48a (CONDITIONAL_JUMP)  ; LAB_0057b48a
    CMP dword ptr [EBX + 0x55c],0x0     ; 0057b45c
    JZ 0x0057b48a                       ; 0057b463
        ;   XREF to: 0057b48a (CONDITIONAL_JUMP)  ; LAB_0057b48a
    LEA EAX,[EBX + 0x354]               ; 0057b465
    FLD float ptr [EAX + 0x4]           ; 0057b46b
    FMUL ST0                            ; 0057b46e
    FLD float ptr [EAX]                 ; 0057b470
    FMUL ST0                            ; 0057b472
    FADDP                               ; 0057b474
    FLD float ptr [EAX + 0x8]           ; 0057b476
    FMUL ST0                            ; 0057b479
    FADDP                               ; 0057b47b
    FSQRT                               ; 0057b47d
    FCOMP double ptr [0x005d78cb]       ; 0057b47f | DAT_005d78cb
    FNSTSW AX                           ; 0057b485
    SAHF                                ; 0057b487
    JA 0x0057b493                       ; 0057b488
        ;   XREF to: 0057b493 (CONDITIONAL_JUMP)  ; LAB_0057b493
    CMP dword ptr [EBX + 0x304],0x0     ; 0057b48a
        ;   Label: LAB_0057b48a
    JZ 0x0057b49a                       ; 0057b491
        ;   XREF to: 0057b49a (CONDITIONAL_JUMP)  ; LAB_0057b49a
    XOR EAX,EAX                         ; 0057b493
        ;   Label: LAB_0057b493
    MOV ESP,EBP                         ; 0057b495
    POP EBP                             ; 0057b497
    POP EBX                             ; 0057b498
    RET                                 ; 0057b499
    PUSH 0x5d78bb                       ; 0057b49a | = "CIcePick"
        ;   Label: LAB_0057b49a
    MOV EAX,dword ptr [EBP + 0x10]      ; 0057b49f
    PUSH EAX                            ; 0057b4a2
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0057b4a3
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0057b4a8
    TEST EAX,EAX                        ; 0057b4ab
    JZ 0x0057b4b9                       ; 0057b4ad
        ;   XREF to: 0057b4b9 (CONDITIONAL_JUMP)  ; LAB_0057b4b9
    MOV EAX,0x3                         ; 0057b4af
        ;   Label: LAB_0057b4af
    MOV ESP,EBP                         ; 0057b4b4
    POP EBP                             ; 0057b4b6
    POP EBX                             ; 0057b4b7
    RET                                 ; 0057b4b8
    PUSH 0x5d78c4                       ; 0057b4b9 | = "CHero"
        ;   Label: LAB_0057b4b9
    MOV EDX,dword ptr [EBP + 0x10]      ; 0057b4be
    PUSH EDX                            ; 0057b4c1
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 0057b4c2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0057b4c7
    TEST EAX,EAX                        ; 0057b4ca
    JNZ 0x0057b4e2                      ; 0057b4cc
        ;   XREF to: 0057b4e2 (CONDITIONAL_JUMP)  ; LAB_0057b4e2
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 0057b4ce
    TEST ECX,ECX                        ; 0057b4d4
    JZ 0x0057b4af                       ; 0057b4d6
        ;   XREF to: 0057b4af (CONDITIONAL_JUMP)  ; LAB_0057b4af
    CMP ECX,0x3                         ; 0057b4d8
    JZ 0x0057b4af                       ; 0057b4db
        ;   XREF to: 0057b4af (CONDITIONAL_JUMP)  ; LAB_0057b4af
    MOV ESP,EBP                         ; 0057b4dd
    POP EBP                             ; 0057b4df
    POP EBX                             ; 0057b4e0
    RET                                 ; 0057b4e1
    MOV EAX,0x2                         ; 0057b4e2
        ;   Label: LAB_0057b4e2
    MOV ESP,EBP                         ; 0057b4e7
    POP EBP                             ; 0057b4e9
    POP EBX                             ; 0057b4ea
    RET                                 ; 0057b4eb

