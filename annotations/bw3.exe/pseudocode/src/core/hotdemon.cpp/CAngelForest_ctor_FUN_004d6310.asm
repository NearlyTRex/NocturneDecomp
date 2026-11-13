; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CAngelForest * __cdecl core_hotdemon_cpp_CAngelForest_ctor_FUN_004d6310(CAngelForest *this_ptr)
;
; Parameters:
; CAngelForest *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hotdemon.cpp_FUN_004d62e0 at 004d62f3
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6310
        ;   Label: core_hotdemon.cpp_CAngelForest_ctor_FUN_004d6310
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d6311
    PUSH EDX                            ; 004d6315
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430 ; 004d6316
        ;   XREF to: 004d5430 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004d631b
    PUSH 0x5c5429                       ; 004d631e
    MOV EBX,EAX                         ; 004d6323
    ADD EAX,0x158                       ; 004d6325
    PUSH EAX                            ; 004d632a
    MOV dword ptr [EAX + -0x4],0x5e1a64 ; 004d632b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 004d6332
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2538],0x42200000 ; 004d6337
    ADD ESP,0x8                         ; 004d6341
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 004d6344
    MOV EAX,EBX                         ; 004d634e
    MOV dword ptr [EBX + 0xce60],0x41700000 ; 004d6350
    POP EBX                             ; 004d635a
    RET                                 ; 004d635b

