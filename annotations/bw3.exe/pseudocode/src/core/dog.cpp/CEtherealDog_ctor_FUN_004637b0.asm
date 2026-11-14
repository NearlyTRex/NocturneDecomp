; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEtherealDog * __cdecl core_dog_cpp_CEtherealDog_ctor_FUN_004637b0(CEtherealDog *this_ptr)
;
; Parameters:
; CEtherealDog *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dog.cpp_FUN_00463780 at 00463793
;
; Called Functions:
;   core_dog.cpp_CZombieDog_ctor_FUN_00462710
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004637b0
        ;   Label: core_dog.cpp_CEtherealDog_ctor_FUN_004637b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004637b1
    PUSH EDX                            ; 004637b5
    CALL core_dog.cpp_CZombieDog_ctor_FUN_00462710 ; 004637b6
        ;   XREF to: 00462710 (UNCONDITIONAL_CALL)  ; CZombieDog * core_dog.cpp_CZombieDog_ctor_FUN_00462710(CZombieDog * this_ptr)
    ADD ESP,0x4                         ; 004637bb
    PUSH 0x5bbcb2                       ; 004637be
    MOV EBX,EAX                         ; 004637c3
    ADD EAX,0x158                       ; 004637c5
    PUSH EAX                            ; 004637ca
    MOV dword ptr [EAX + -0x4],0x5de9c4 ; 004637cb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004637d2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x41f00000 ; 004637d7
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 004637e1
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 004637eb
    ADD ESP,0x8                         ; 004637f5
    MOV dword ptr [EBX + 0xcdc4],0x1    ; 004637f8
    MOV EAX,EBX                         ; 00463802
    MOV dword ptr [EBX + 0xd060],0x3    ; 00463804
    POP EBX                             ; 0046380e
    RET                                 ; 0046380f

