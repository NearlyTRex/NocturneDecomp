; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CScat * __cdecl core_scat_cpp_CScat_ctor_FUN_0051e9a0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_scat.cpp_factoryFuncScat_FUN_0051e970 at 0051e983
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330
;   core_hero.cpp_FUN_004ce240
;   core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e9a0
        ;   Label: core_scat.cpp_CScat_ctor_FUN_0051e9a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051e9a1
    PUSH EDX                            ; 0051e9a5
    CALL core_hero.cpp_FUN_004ce240     ; 0051e9a6
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce240()
    ADD ESP,0x4                         ; 0051e9ab
    MOV EBX,EAX                         ; 0051e9ae
    ADD EAX,0x2b4                       ; 0051e9b0
    PUSH 0x5e29b7                       ; 0051e9b5
    MOV dword ptr [EAX + -0x4],0x5fae34 ; 0051e9ba
    PUSH EAX                            ; 0051e9c1
    MOV dword ptr [EAX + 0x2538c],0x0   ; 0051e9c2
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 0051e9cc
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x25644]             ; 0051e9d1
    MOV dword ptr [EBX + 0x25650],0x3f800000 ; 0051e9d7
    ADD ESP,0x8                         ; 0051e9e1
    MOV dword ptr [EAX + 0x8],0x0       ; 0051e9e4
    PUSH EBX                            ; 0051e9eb
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051e9ec
    MOV dword ptr [EAX + 0x4],EDX       ; 0051e9ef
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051e9f2
    MOV dword ptr [EAX],EDX             ; 0051e9f5
    CALL core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20 ; 0051e9f7
        ;   XREF to: 0051ec20 (UNCONDITIONAL_CALL)  ; void core_scat.cpp_CScat_createDefaultWeapon_FUN_0051ec20(CScat * this_ptr)
    ADD ESP,0x4                         ; 0051e9fc
    MOV dword ptr [EBX + 0x25654],0x0   ; 0051e9ff
    PUSH 0x0                            ; 0051ea09
    MOV dword ptr [EBX + 0x2565c],0x0   ; 0051ea0b
    PUSH 0x5e29c0                       ; 0051ea15
    MOV dword ptr [EBX + 0x25664],0x0   ; 0051ea1a
    PUSH 0x1                            ; 0051ea24
    MOV dword ptr [EBX + 0x25668],0x0   ; 0051ea26
    PUSH 0x0                            ; 0051ea30
    FLD float ptr [EBX + 0x2565c]       ; 0051ea32
    PUSH EBX                            ; 0051ea38
    FSTP float ptr [EBX + 0x25658]      ; 0051ea39
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0051ea3f
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051ea44
    PUSH 0x0                            ; 0051ea47
    PUSH 0x5e29d6                       ; 0051ea49
    PUSH 0x2                            ; 0051ea4e
    PUSH 0x1                            ; 0051ea50
    PUSH EBX                            ; 0051ea52
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330 ; 0051ea53
        ;   XREF to: 0042a330 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a330(CCharacter * this_ptr, int from_bone_index, int to_bone_index, char * motion_name, ...)
    ADD ESP,0x14                        ; 0051ea58
    MOV EAX,EBX                         ; 0051ea5b
    POP EBX                             ; 0051ea5d
    RET                                 ; 0051ea5e

