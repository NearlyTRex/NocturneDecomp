; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle *this_ptr)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_tentacle.cpp_factoryFuncTentacle_FUN_005daf20 at 005daf3a
;
; Referenced Globals:
;   TerminatedCString s_tentacle_dfm_00654db3
;   CEnemy_full_vtable g_CTentacleVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005daf60
        ;   Label: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
    MOV EDX,dword ptr [ESP + 0x8]       ; 005daf61
    PUSH EDX                            ; 005daf65
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005daf66
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005daf6b
    PUSH 0x654db3                       ; 005daf6e | = "tentacle.dfm"
    MOV EBX,EAX                         ; 005daf73
    ADD EAX,0x158                       ; 005daf75
    PUSH EAX                            ; 005daf7a
    MOV dword ptr [EAX + -0x4],0x664474 ; 005daf7b | g_CTentacleVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005daf82
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2de4],0x42480000 ; 005daf87
    MOV dword ptr [EBX + 0x2de8],0x42c80000 ; 005daf91
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005daf9b
    ADD ESP,0x8                         ; 005dafa5
    MOV dword ptr [EBX + 0xbec0],0x0    ; 005dafa8
    MOV EAX,EBX                         ; 005dafb2
    MOV dword ptr [EBX + 0xbec4],0x0    ; 005dafb4
    POP EBX                             ; 005dafbe
    RET                                 ; 005dafbf

