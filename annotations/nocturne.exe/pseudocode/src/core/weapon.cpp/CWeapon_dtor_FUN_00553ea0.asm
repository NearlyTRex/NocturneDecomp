; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(CWeapon *this_ptr,uint flags)
;
; Parameters:
; CWeapon *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[13]:
;   core_baron.cpp_CBaronWeapon_dtor_FUN_00411610 at 0041161f
;   core_crossbow.cpp_FUN_0043d870 at 0043d896
;   core_dynamite.cpp_CDynamite_dtor_FUN_0046ef30 at 0046ef3f
;   core_elephant.cpp_FUN_00478310 at 0047831f
;   core_flamegun.cpp_FUN_0048ecb0 at 0048ecbf
;   core_flashlit.cpp_FUN_0048ee00 at 0048ee0f
;   core_gun.cpp_FUN_004b2ff0 at 004b2fff
;   core_lightgun.cpp_FUN_004c8040 at 004c804f
;   core_melee.cpp_FUN_004cf1a0 at 004cf1af
;   core_shotgun.cpp_FUN_00516960 at 0051696f
;   ... and 3 more
;
; Referenced Globals:
;   undefined1* PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a4154 = 00553f10
;   WatcomTypeInfo g_CWeaponTypeInfo_005a4250
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00409ea0
;   core_box.cpp_CBox_dtor_FUN_0041a6c0
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553ea0
        ;   Label: core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553ea1
    TEST byte ptr [ESP + 0xc],0x4       ; 00553ea5
    JNZ 0x00553ee7                      ; 00553eaa
        ;   XREF to: 00553ee7 (CONDITIONAL_JUMP)  ; LAB_00553ee7
    PUSH 0x0                            ; 00553eac
    ADD EBX,0x300                       ; 00553eae
    PUSH EBX                            ; 00553eb4
    MOV dword ptr [EBX + 0xfffffe4c],0x5a4154 ; 00553eb5 | PTR_core_weapon.cpp_CWeapon_setup_FUN_00553f10_005a4154
    CALL core_box.cpp_CBox_dtor_FUN_0041a6c0 ; 00553ebf
        ;   XREF to: 0041a6c0 (UNCONDITIONAL_CALL)  ; CBox * core_box.cpp_CBox_dtor_FUN_0041a6c0(CBox * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00553ec4
    PUSH 0x1                            ; 00553ec7
    LEA EBX,[EAX + 0xfffffd00]          ; 00553ec9
    PUSH EBX                            ; 00553ecf
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00409ea0 ; 00553ed0
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00409ea0(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00553ed5
    MOV DL,byte ptr [ESP + 0xc]         ; 00553ed8
    MOV EBX,EAX                         ; 00553edc
    TEST DL,0x2                         ; 00553ede
    JNZ 0x00553f02                      ; 00553ee1
        ;   XREF to: 00553f02 (CONDITIONAL_JUMP)  ; LAB_00553f02
    MOV EAX,EBX                         ; 00553ee3
    POP EBX                             ; 00553ee5
    RET                                 ; 00553ee6
    PUSH 0x5a4250                       ; 00553ee7 | g_CWeaponTypeInfo_005a4250
        ;   Label: LAB_00553ee7
    PUSH EBX                            ; 00553eec
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 00553eed
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 00553ef2
    PUSH EAX                            ; 00553ef5
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 00553ef6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 00553efb
    MOV EAX,EBX                         ; 00553efe
    POP EBX                             ; 00553f00
    RET                                 ; 00553f01
    PUSH EAX                            ; 00553f02
        ;   Label: LAB_00553f02
    CALL crt_unknown.c_FUN_00564494     ; 00553f03
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00553f08
    MOV EAX,EBX                         ; 00553f0b
    POP EBX                             ; 00553f0d
    RET                                 ; 00553f0e

