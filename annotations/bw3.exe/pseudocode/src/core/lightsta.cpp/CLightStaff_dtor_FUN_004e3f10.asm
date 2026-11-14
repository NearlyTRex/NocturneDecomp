; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLightStaff * __cdecl core_lightsta_cpp_CLightStaff_dtor_FUN_004e3f10(CLightStaff *this_ptr,uint flags)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CLightStaffTypeInfo
;
; Called Functions:
;   core_weapon.cpp_CWeapon_dtor_FUN_0057aed0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3f10
        ;   Label: core_lightsta.cpp_CLightStaff_dtor_FUN_004e3f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3f11
    TEST byte ptr [ESP + 0xc],0x4       ; 004e3f15
    JNZ 0x004e3f36                      ; 004e3f1a
        ;   XREF to: 004e3f36 (CONDITIONAL_JUMP)  ; LAB_004e3f36
    PUSH 0x1                            ; 004e3f1c
    PUSH EBX                            ; 004e3f1e
    CALL core_weapon.cpp_CWeapon_dtor_FUN_0057aed0 ; 004e3f1f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_0057aed0(CWeapon * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004e3f24
    MOV DL,byte ptr [ESP + 0xc]         ; 004e3f27
    MOV EBX,EAX                         ; 004e3f2b
    TEST DL,0x2                         ; 004e3f2d
    JNZ 0x004e3f51                      ; 004e3f30
        ;   XREF to: 004e3f51 (CONDITIONAL_JUMP)  ; LAB_004e3f51
    MOV EAX,EBX                         ; 004e3f32
    POP EBX                             ; 004e3f34
    RET                                 ; 004e3f35
    PUSH 0x5e25f0                       ; 004e3f36 | g_CLightStaffTypeInfo
        ;   Label: LAB_004e3f36
    PUSH EBX                            ; 004e3f3b
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004e3f3c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004e3f41
    PUSH EAX                            ; 004e3f44
    CALL crt_unknown.c_FUN_005a30b6     ; 004e3f45
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004e3f4a
    MOV EAX,EBX                         ; 004e3f4d
    POP EBX                             ; 004e3f4f
    RET                                 ; 004e3f50
    PUSH EAX                            ; 004e3f51
        ;   Label: LAB_004e3f51
    CALL crt_unknown.c_FUN_005a30c4     ; 004e3f52
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004e3f57
    MOV EAX,EBX                         ; 004e3f5a
    POP EBX                             ; 004e3f5c
    RET                                 ; 004e3f5d

