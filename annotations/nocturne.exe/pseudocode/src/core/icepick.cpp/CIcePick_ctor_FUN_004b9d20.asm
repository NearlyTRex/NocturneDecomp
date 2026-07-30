; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CIcePick * __cdecl core_icepick_cpp_CIcePick_ctor_FUN_004b9d20(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_icepick.cpp_factoryFunc_FUN_004b9cf0 at 004b9d03
;
; Referenced Globals:
;   TerminatedCString s_icepick_dfm_0058600b
;   CHero_full_vtable g_CIcePickVTable
;
; Called Functions:
;   core_hero.cpp_FUN_004b46d0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9d20
        ;   Label: core_icepick.cpp_CIcePick_ctor_FUN_004b9d20
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b9d21
    PUSH EDX                            ; 004b9d25
    CALL core_hero.cpp_FUN_004b46d0     ; 004b9d26
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_FUN_004b46d0(CHero * this_ptr)
    MOV EBX,EAX                         ; 004b9d2b
    ADD EAX,0x150                       ; 004b9d2d
    ADD ESP,0x4                         ; 004b9d32
    MOV dword ptr [EAX + -0x4],0x59f3e4 ; 004b9d35 | g_CIcePickVTable
    PUSH 0x58600b                       ; 004b9d3c | = "icepick.dfm"
    MOV dword ptr [EAX + 0x1f8ec],0x0   ; 004b9d41
    PUSH EAX                            ; 004b9d4b
    MOV dword ptr [EAX + 0x1f8f0],0x0   ; 004b9d4c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b9d56
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fa4c]             ; 004b9d5b
    MOV dword ptr [EBX + 0x1fa58],0x3f800000 ; 004b9d61
    MOV dword ptr [EAX + 0x8],0x0       ; 004b9d6b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b9d72
    MOV dword ptr [EAX + 0x4],EDX       ; 004b9d75
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b9d78
    MOV dword ptr [EAX],EDX             ; 004b9d7b
    MOV dword ptr [EBX + 0x1fa5c],0x0   ; 004b9d7d
    ADD ESP,0x8                         ; 004b9d87
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 004b9d8a
    MOV EAX,EBX                         ; 004b9d94
    MOV dword ptr [EBX + 0x2434],0x43960000 ; 004b9d96
    POP EBX                             ; 004b9da0
    RET                                 ; 004b9da1

