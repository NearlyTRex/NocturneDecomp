; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonShadow * __cdecl core_shadow_cpp_CDemonShadow_ctor_FUN_00545fc0(CDemonShadow *this_ptr)
;
; Parameters:
; CDemonShadow *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_shadow.cpp_FUN_00545f90 at 00545fa3
;
; Called Functions:
;   core_shadow.cpp_CShadow_ctor_FUN_00543500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545fc0
        ;   Label: core_shadow.cpp_CDemonShadow_ctor_FUN_00545fc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00545fc1
    PUSH EDX                            ; 00545fc5
    CALL core_shadow.cpp_CShadow_ctor_FUN_00543500 ; 00545fc6
        ;   XREF to: 00543500 (UNCONDITIONAL_CALL)  ; CShadow * core_shadow.cpp_CShadow_ctor_FUN_00543500(CShadow * this_ptr)
    ADD ESP,0x4                         ; 00545fcb
    PUSH 0x5d1406                       ; 00545fce
    MOV EBX,EAX                         ; 00545fd3
    ADD EAX,0x158                       ; 00545fd5
    PUSH EAX                            ; 00545fda
    MOV dword ptr [EAX + -0x4],0x5e4164 ; 00545fdb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00545fe2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x42700000 ; 00545fe7
    MOV dword ptr [EBX + 0xce5c],0x41f00000 ; 00545ff1
    ADD ESP,0x8                         ; 00545ffb
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 00545ffe
    MOV EAX,EBX                         ; 00546008
    MOV dword ptr [EBX + 0xd0a8],0x3    ; 0054600a
    POP EBX                             ; 00546014
    RET                                 ; 00546015

