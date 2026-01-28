; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CHaystack * __cdecl core_haystack_cpp_CHaystack_ctor_FUN_004f0c10(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_haystack.cpp_factoryFunc_FUN_004f0bd0 at 004f0bea
;
; Referenced Globals:
;   TerminatedCString s_haystack_dfm_0062e7fa
;   CDemonActor_vtable g_CHaystackVTable
;
; Called Functions:
;   core_hero.cpp_CHero_ctor_FUN_004f2340
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0c10
        ;   Label: core_haystack.cpp_CHaystack_ctor_FUN_004f0c10
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f0c11
    PUSH EDX                            ; 004f0c15
    CALL core_hero.cpp_CHero_ctor_FUN_004f2340 ; 004f0c16
        ;   XREF to: 004f2340 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_CHero_ctor_FUN_004f2340(CHero * this_ptr)
    MOV EBX,EAX                         ; 004f0c1b
    ADD EAX,0x158                       ; 004f0c1d
    ADD ESP,0x4                         ; 004f0c22
    MOV dword ptr [EAX + -0x4],0x65f3f4 ; 004f0c25 | g_CHaystackVTable
    PUSH 0x62e7fa                       ; 004f0c2c | = "haystack.dfm"
    MOV dword ptr [EAX + 0x1fa7c],0x0   ; 004f0c31
    PUSH EAX                            ; 004f0c3b
    MOV dword ptr [EAX + 0x1fa80],0x0   ; 004f0c3c
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f0c46
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    LEA EAX,[EBX + 0x1fbdc]             ; 004f0c4b
    MOV dword ptr [EBX + 0x1fbe8],0x3f800000 ; 004f0c51
    MOV dword ptr [EAX + 0x8],0x0       ; 004f0c5b
    ADD ESP,0x8                         ; 004f0c62
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f0c65
    MOV dword ptr [EAX + 0x4],EDX       ; 004f0c68
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f0c6b
    MOV dword ptr [EAX],EDX             ; 004f0c6e
    MOV EAX,EBX                         ; 004f0c70
    POP EBX                             ; 004f0c72
    RET                                 ; 004f0c73

