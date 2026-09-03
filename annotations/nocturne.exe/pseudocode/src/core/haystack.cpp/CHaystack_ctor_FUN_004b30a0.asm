; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004b30a0(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_haystack.cpp_factoryFuncHaystack_FUN_004b3070 at 004b3083
;
; Referenced Globals:
;   TerminatedCString s_haystack_dfm_0058544f
;   CHero_full_vtable g_CHaystackVTable
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004b46d0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b30a0
        ;   Label: core_haystack.cpp_CHaystack_ctor_FUN_004b30a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004b30a1
    PUSH EDX                            ; 004b30a5
    CALL core_hero.cpp_CHero_ctor_FUN_004b46d0 ; 004b30a6
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004b46d0(CHero * this_ptr)
    MOV EBX,EAX                         ; 004b30ab
    ADD EAX,0x150                       ; 004b30ad
    ADD ESP,0x4                         ; 004b30b2
    MOV dword ptr [EAX + -0x4],0x59e884 ; 004b30b5 | g_CHaystackVTable
    PUSH 0x58544f                       ; 004b30bc | = "haystack.dfm"
    MOV dword ptr [EAX + 0x1f8ec],0x0   ; 004b30c1
    PUSH EAX                            ; 004b30cb
    MOV dword ptr [EAX + 0x1f8f0],0x0   ; 004b30cc
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004b30d6
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fa44]             ; 004b30db
    MOV dword ptr [EBX + 0x1fa50],0x3f800000 ; 004b30e1
    MOV dword ptr [EAX + 0x8],0x0       ; 004b30eb
    ADD ESP,0x8                         ; 004b30f2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b30f5
    MOV dword ptr [EAX + 0x4],EDX       ; 004b30f8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b30fb
    MOV dword ptr [EAX],EDX             ; 004b30fe
    MOV EAX,EBX                         ; 004b3100
    POP EBX                             ; 004b3102
    RET                                 ; 004b3103

