; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_tvbat.cpp_factoryFunc_FUN_005e3e80 at 005e3e9a
;
; Referenced Globals:
;   CDemonActor_vtable g_CTVBatVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3ef0
        ;   Label: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
    SUB ESP,0x8                         ; 005e3ef1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005e3ef4
    PUSH EBX                            ; 005e3ef8
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005e3ef9
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005e3efe
    ADD EAX,0xbec0                      ; 005e3f01
    PUSH EAX                            ; 005e3f06
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e3f07
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0xffff4140]          ; 005e3f0c
    ADD ESP,0x4                         ; 005e3f12
    MOV dword ptr [EBX + 0x154],0x664cd4 ; 005e3f15 | g_CTVBatVTable
    PUSH 0x3f8ccccd                     ; 005e3f1f
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005e3f24
    PUSH 0x3f666666                     ; 005e3f2e
    MOV dword ptr [EBX + 0xc040],0x0    ; 005e3f33
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e3f3d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

