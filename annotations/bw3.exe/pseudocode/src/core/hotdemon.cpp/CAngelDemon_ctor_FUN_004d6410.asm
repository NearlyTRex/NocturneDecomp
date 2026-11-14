; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAngelDemon * __cdecl core_hotdemon_cpp_CAngelDemon_ctor_FUN_004d6410(CAngelDemon *this_ptr)
;
; Parameters:
; CAngelDemon *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hotdemon.cpp_FUN_004d63e0 at 004d63f3
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6410
        ;   Label: core_hotdemon.cpp_CAngelDemon_ctor_FUN_004d6410
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d6411
    PUSH EDX                            ; 004d6415
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430 ; 004d6416
        ;   XREF to: 004d5430 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004d641b
    PUSH 0x5c5443                       ; 004d641e
    MOV EBX,EAX                         ; 004d6423
    ADD EAX,0x158                       ; 004d6425
    PUSH EAX                            ; 004d642a
    MOV dword ptr [EAX + -0x4],0x5e1d04 ; 004d642b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004d6432
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x42700000 ; 004d6437
    ADD ESP,0x8                         ; 004d6441
    MOV dword ptr [EBX + 0xce5c],0x41c80000 ; 004d6444
    MOV EAX,EBX                         ; 004d644e
    MOV dword ptr [EBX + 0xce60],0x41a00000 ; 004d6450
    POP EBX                             ; 004d645a
    RET                                 ; 004d645b

