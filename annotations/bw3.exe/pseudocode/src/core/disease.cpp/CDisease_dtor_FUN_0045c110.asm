; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDisease * core_disease_cpp_CDisease_dtor_FUN_0045c110(CDisease *this_ptr,uint flags)
;
; Parameters:
; CDisease *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CDiseaseTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c110
        ;   Label: core_disease.cpp_CDisease_dtor_FUN_0045c110
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045c111
    TEST byte ptr [ESP + 0xc],0x4       ; 0045c115
    JNZ 0x0045c136                      ; 0045c11a
        ;   XREF to: 0045c136 (CONDITIONAL_JUMP)  ; LAB_0045c136
    PUSH 0x1                            ; 0045c11c
    PUSH EBX                            ; 0045c11e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 0045c11f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045c124
    MOV DL,byte ptr [ESP + 0xc]         ; 0045c127
    MOV EBX,EAX                         ; 0045c12b
    TEST DL,0x2                         ; 0045c12d
    JNZ 0x0045c151                      ; 0045c130
        ;   XREF to: 0045c151 (CONDITIONAL_JUMP)  ; LAB_0045c151
    MOV EAX,EBX                         ; 0045c132
    POP EBX                             ; 0045c134
    RET                                 ; 0045c135
    PUSH 0x5de4d0                       ; 0045c136 | g_CDiseaseTypeInfo
        ;   Label: LAB_0045c136
    PUSH EBX                            ; 0045c13b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 0045c13c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 0045c141
    PUSH EAX                            ; 0045c144
    CALL crt_unknown.c_FUN_005a30b6     ; 0045c145
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0045c14a
    MOV EAX,EBX                         ; 0045c14d
    POP EBX                             ; 0045c14f
    RET                                 ; 0045c150
    PUSH EAX                            ; 0045c151
        ;   Label: LAB_0045c151
    CALL crt_unknown.c_FUN_005a30c4     ; 0045c152
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0045c157
    MOV EAX,EBX                         ; 0045c15a
    POP EBX                             ; 0045c15c
    RET                                 ; 0045c15d

