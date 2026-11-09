; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_dtor_FUN_0044a120(CCrossbow *this_ptr,uint flags)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CCrossbowTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408730
;   core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a120
        ;   Label: core_crossbow.cpp_CCrossbow_dtor_FUN_0044a120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044a121
    TEST byte ptr [ESP + 0xc],0x4       ; 0044a125
    JNZ 0x0044a15d                      ; 0044a12a
        ;   XREF to: 0044a15d (CONDITIONAL_JUMP)  ; LAB_0044a15d
    PUSH 0x1                            ; 0044a12c
    ADD EBX,0x57c                       ; 0044a12e
    PUSH EBX                            ; 0044a134
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408730 ; 0044a135
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408730(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044a13a
    PUSH 0x1                            ; 0044a13d
    LEA EBX,[EAX + 0xfffffa84]          ; 0044a13f
    PUSH EBX                            ; 0044a145
    CALL core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0 ; 0044a146
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044a14b
    MOV DL,byte ptr [ESP + 0xc]         ; 0044a14e
    MOV EBX,EAX                         ; 0044a152
    TEST DL,0x2                         ; 0044a154
    JNZ 0x0044a178                      ; 0044a157
        ;   XREF to: 0044a178 (CONDITIONAL_JUMP)  ; LAB_0044a178
    MOV EAX,EBX                         ; 0044a159
    POP EBX                             ; 0044a15b
    RET                                 ; 0044a15c
    PUSH 0x5fe470                       ; 0044a15d | g_CCrossbowTypeInfo
        ;   Label: LAB_0044a15d
    PUSH EBX                            ; 0044a162
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0044a163
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0044a168
    PUSH EAX                            ; 0044a16b
    CALL crt_unknown.c_FUN_005c0336     ; 0044a16c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0044a171
    MOV EAX,EBX                         ; 0044a174
    POP EBX                             ; 0044a176
    RET                                 ; 0044a177
    PUSH EAX                            ; 0044a178
        ;   Label: LAB_0044a178
    CALL crt_unknown.c_FUN_005c0344     ; 0044a179
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0044a17e
    MOV EAX,EBX                         ; 0044a181
    POP EBX                             ; 0044a183
    RET                                 ; 0044a184

