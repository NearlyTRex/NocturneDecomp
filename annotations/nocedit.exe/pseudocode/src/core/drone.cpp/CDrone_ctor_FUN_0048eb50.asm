; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDrone * core_drone.cpp_CDrone_ctor_FUN_0048eb50(CDrone * this_ptr)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_drone.cpp_factoryFunc_FUN_0048eb10 at 0048eb2a
;
; Referenced Globals:
;   TerminatedCString s_drone_dfm_0062236d
;   float FLOAT_0065d0ac = 50
;   float FLOAT_0065d0b0 = 100
;   CDemonActor_vtable g_CDroneVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048eb50
        ;   Label: core_drone.cpp_CDrone_ctor_FUN_0048eb50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048eb51
    PUSH EDX                            ; 0048eb55
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 0048eb56
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0048eb5b
    PUSH 0x62236d                       ; 0048eb5e | = "drone.dfm"
    MOV EBX,EAX                         ; 0048eb63
    ADD EAX,0x158                       ; 0048eb65
    PUSH EAX                            ; 0048eb6a
    MOV dword ptr [EAX + -0x4],0x65d0c4 ; 0048eb6b | g_CDroneVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 0048eb72
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2ddc],0x3f400000 ; 0048eb77
    FLD float ptr [0x0065d0ac]          ; 0048eb81 | FLOAT_0065d0ac
    MOV dword ptr [EBX + 0x2de0],0x3fc00000 ; 0048eb87
    FLD float ptr [0x0065d0b0]          ; 0048eb91 | FLOAT_0065d0b0
    MOV dword ptr [EBX + 0x2610],0x1    ; 0048eb97
    ADD ESP,0x8                         ; 0048eba1
    MOV dword ptr [EBX + 0x243c],0x42960000 ; 0048eba4
    MOV EAX,EBX                         ; 0048ebae
    FXCH                                ; 0048ebb0
    FSTP float ptr [EBX + 0x2de4]       ; 0048ebb2
    FSTP float ptr [EBX + 0x2de8]       ; 0048ebb8
    POP EBX                             ; 0048ebbe
    RET                                 ; 0048ebbf

