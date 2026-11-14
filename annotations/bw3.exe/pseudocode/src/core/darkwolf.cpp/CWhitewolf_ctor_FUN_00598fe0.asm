; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CWhitewolf * __cdecl core_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf *this_ptr)
;
; Parameters:
; CWhitewolf *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_darkwolf.cpp_FUN_00598fb0 at 00598fc3
;
; Called Functions:
;   core_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00598fe0
        ;   Label: core_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00598fe1
    PUSH EDX                            ; 00598fe5
    CALL core_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780 ; 00598fe6
        ;   XREF to: 00598780 (UNCONDITIONAL_CALL)  ; CDarkwolf * core_darkwolf.cpp_CDarkwolf_ctor_FUN_00598780(CDarkwolf * this_ptr)
    ADD ESP,0x4                         ; 00598feb
    PUSH 0x5d98bf                       ; 00598fee
    MOV EBX,EAX                         ; 00598ff3
    ADD EAX,0x158                       ; 00598ff5
    PUSH EAX                            ; 00598ffa
    MOV dword ptr [EAX + -0x4],0x5e7b54 ; 00598ffb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 00599002
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 00599007
    ADD ESP,0x8                         ; 00599011
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00599014
    MOV EAX,EBX                         ; 0059901e
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 00599020
    POP EBX                             ; 0059902a
    RET                                 ; 0059902b

