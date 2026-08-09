; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_00556ed0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_factoryFuncScat_FUN_00556e90 at 00556ead
;
; Referenced Globals:
;   TerminatedCString s_scat_dfm_00641211
;   TerminatedCString s_draw_stand2coatPocket_0064121a
;   TerminatedCString s_draw_coatPocket2aimPisto_00641230
;   CHero_full_vtable g_CScatVTable
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_00557150
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556ed0
        ;   Label: core_scat.cpp_CScat_ctor_FUN_00556ed0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ed1
    PUSH EDX                            ; 00556ed5
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 00556ed6
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    ADD ESP,0x4                         ; 00556edb
    MOV EBX,EAX                         ; 00556ede
    ADD EAX,0x158                       ; 00556ee0
    PUSH 0x641211                       ; 00556ee5 | = "scat.dfm"
    MOV dword ptr [EAX + -0x4],0x662464 ; 00556eea | g_CScatVTable
    PUSH EAX                            ; 00556ef1
    MOV dword ptr [EAX + 0x1fa7c],0x0   ; 00556ef2
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00556efc
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fbd8]             ; 00556f01
    MOV dword ptr [EBX + 0x1fbe4],0x3f800000 ; 00556f07
    ADD ESP,0x8                         ; 00556f11
    MOV dword ptr [EAX + 0x8],0x0       ; 00556f14
    PUSH EBX                            ; 00556f1b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00556f1c
    MOV dword ptr [EAX + 0x4],EDX       ; 00556f1f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00556f22
    MOV dword ptr [EAX],EDX             ; 00556f25
    CALL core_scat.cpp_CScat_createDefaultWeapon_FUN_00557150 ; 00556f27
        ;   XREF to: 00557150 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_createDefaultWeapon_FUN_00557150(CScat * this_ptr)
    ADD ESP,0x4                         ; 00556f2c
    MOV dword ptr [EBX + 0x1fbe8],0x0   ; 00556f2f
    PUSH 0x0                            ; 00556f39
    MOV dword ptr [EBX + 0x1fbf0],0x0   ; 00556f3b
    PUSH 0x64121a                       ; 00556f45 | = "draw_stand2coatPocket"
    MOV dword ptr [EBX + 0x1fbf8],0x0   ; 00556f4a
    PUSH 0x1                            ; 00556f54
    MOV dword ptr [EBX + 0x1fbfc],0x0   ; 00556f56
    PUSH 0x0                            ; 00556f60
    FLD float ptr [EBX + 0x1fbf0]       ; 00556f62
    PUSH EBX                            ; 00556f68
    FSTP float ptr [EBX + 0x1fbec]      ; 00556f69
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 00556f6f
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00556f74
    PUSH 0x0                            ; 00556f77
    PUSH 0x641230                       ; 00556f79 | = "draw_coatPocket2aimPistols"
    PUSH 0x2                            ; 00556f7e
    PUSH 0x1                            ; 00556f80
    PUSH EBX                            ; 00556f82
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0 ; 00556f83
        ;   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 00556f88
    MOV EAX,EBX                         ; 00556f8b
    POP EBX                             ; 00556f8d
    RET                                 ; 00556f8e

