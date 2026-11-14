; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritShadow * __cdecl core_shadow_cpp_CSpiritShadow_ctor_FUN_00545f30(CSpiritShadow *this_ptr)
;
; Parameters:
; CSpiritShadow *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shadow.cpp_FUN_00545f00 at 00545f13
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_00543500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545f30
        ;   Label: core_shadow.cpp_CSpiritShadow_ctor_FUN_00545f30
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545f31
    PUSH EDX                            ; 00545f35
    CALL core_shadow.cpp_CShadow_ctor_FUN_00543500 ; 00545f36
        ;   XREF to: 00543500 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_00543500(CShadow * this_ptr)
    ADD ESP,0x4                         ; 00545f3b
    PUSH 0x5d13f6                       ; 00545f3e
    MOV EBX,EAX                         ; 00545f43
    ADD EAX,0x158                       ; 00545f45
    PUSH EAX                            ; 00545f4a
    MOV dword ptr [EAX + -0x4],0x5e4014 ; 00545f4b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00545f52
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00545f57
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 00545f61
    ADD ESP,0x8                         ; 00545f6b
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00545f6e
    MOV EAX,EBX                         ; 00545f78
    MOV dword ptr [EBX + 0xd0a8],0x2    ; 00545f7a
    POP EBX                             ; 00545f84
    RET                                 ; 00545f85

