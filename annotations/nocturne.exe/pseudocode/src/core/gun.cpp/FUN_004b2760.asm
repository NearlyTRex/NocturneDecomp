; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWeapon * core_gun_cpp_FUN_004b2760(CWeapon *param_1)
;
;
; XREF[1]:
;   core_gun.cpp_FUN_004b2730 at 004b2743
;
; Referenced Globals:
;   TerminatedCString s_gat_kfm_00585402
;   CWeapon_full_vtable CWeapon_full_vtable_0059e744
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2760
        ;   Label: core_gun.cpp_FUN_004b2760
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b2761
    PUSH EDX                            ; 004b2765
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 004b2766
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 004b276b
    PUSH 0x585402                       ; 004b276e | = "gat.kfm"
    MOV EBX,EAX                         ; 004b2773
    ADD EAX,0x150                       ; 004b2775
    PUSH EAX                            ; 004b277a
    MOV dword ptr [EAX + -0x4],0x59e744 ; 004b277b | CWeapon_full_vtable_0059e744
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 004b2782
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d0],0x0     ; 004b2787
    MOV dword ptr [EBX + 0x2d4],0x1     ; 004b2791
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004b279b
    ADD ESP,0x8                         ; 004b27a5
    MOV dword ptr [EBX + 0x2e0],0x42480000 ; 004b27a8
    MOV EAX,EBX                         ; 004b27b2
    MOV dword ptr [EBX + 0x2e4],0x0     ; 004b27b4
    POP EBX                             ; 004b27be
    RET                                 ; 004b27bf

