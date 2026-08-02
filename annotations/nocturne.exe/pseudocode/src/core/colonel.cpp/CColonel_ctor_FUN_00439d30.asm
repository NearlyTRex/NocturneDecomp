; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_00439d30(CColonel *this_ptr)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_colonel.cpp_factoryFunc_FUN_00439d00 at 00439d13
;
; Referenced Globals:
;   TerminatedCString s_colonel_dfm_0057b00d
;   CHero_full_vtable g_CColonelVTable
;
; Called Functions:
;   core_hero.cpp_FUN_004b46d0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439d30
        ;   Label: core_colonel.cpp_CColonel_ctor_FUN_00439d30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00439d31
    PUSH EDX                            ; 00439d35
    CALL core_hero.cpp_FUN_004b46d0     ; 00439d36
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_FUN_004b46d0(CHero * this_ptr)
    MOV EBX,EAX                         ; 00439d3b
    ADD EAX,0x150                       ; 00439d3d
    ADD ESP,0x4                         ; 00439d42
    MOV dword ptr [EAX + -0x4],0x59b574 ; 00439d45 | g_CColonelVTable
    PUSH 0x57b00d                       ; 00439d4c | = "colonel.dfm"
    MOV dword ptr [EAX + 0x1f8ec],0x0   ; 00439d51
    PUSH EAX                            ; 00439d5b
    MOV dword ptr [EAX + 0x1f8f0],0x0   ; 00439d5c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 00439d66
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fa44]             ; 00439d6b
    MOV dword ptr [EBX + 0x1fa50],0x3f800000 ; 00439d71
    MOV dword ptr [EAX + 0x8],0x0       ; 00439d7b
    ADD ESP,0x8                         ; 00439d82
    MOV EDX,dword ptr [EAX + 0x8]       ; 00439d85
    MOV dword ptr [EAX + 0x4],EDX       ; 00439d88
    MOV EDX,dword ptr [EAX + 0x4]       ; 00439d8b
    MOV dword ptr [EAX],EDX             ; 00439d8e
    MOV EAX,EBX                         ; 00439d90
    POP EBX                             ; 00439d92
    RET                                 ; 00439d93

