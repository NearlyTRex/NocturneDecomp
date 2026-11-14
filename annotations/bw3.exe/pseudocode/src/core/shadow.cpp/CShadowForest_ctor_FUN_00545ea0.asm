; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShadowForest * __cdecl core_shadow_cpp_CShadowForest_ctor_FUN_00545ea0(CShadowForest *this_ptr)
;
; Parameters:
; CShadowForest *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shadow.cpp_FUN_00545e70 at 00545e83
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_00543500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545ea0
        ;   Label: core_shadow.cpp_CShadowForest_ctor_FUN_00545ea0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545ea1
    PUSH EDX                            ; 00545ea5
    CALL core_shadow.cpp_CShadow_ctor_FUN_00543500 ; 00545ea6
        ;   XREF to: 00543500 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_00543500(CShadow * this_ptr)
    ADD ESP,0x4                         ; 00545eab
    PUSH 0x5d13e6                       ; 00545eae
    MOV EBX,EAX                         ; 00545eb3
    ADD EAX,0x158                       ; 00545eb5
    PUSH EAX                            ; 00545eba
    MOV dword ptr [EAX + -0x4],0x5e3ec4 ; 00545ebb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00545ec2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 00545ec7
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 00545ed1
    ADD ESP,0x8                         ; 00545edb
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00545ede
    MOV EAX,EBX                         ; 00545ee8
    MOV dword ptr [EBX + 0xd0a8],0x1    ; 00545eea
    POP EBX                             ; 00545ef4
    RET                                 ; 00545ef5

