; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spirmine_cpp_CSpiritMine_renderTransparent_FUN_005ad910(CSpiritMine *this_ptr)
;
; Parameters:
; CSpiritMine *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690
;   unkafter_superopt.cpp_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad910
        ;   Label: core_spirmine.cpp_CSpiritMine_renderTransparent_FUN_005ad910
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ad911
    PUSH EDX                            ; 005ad915
    CALL core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690 ; 005ad916
        ;   XREF to: 0041c690 (UNCONDITIONAL_CALL)  ; int core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 005ad91b
    MOV EBX,EAX                         ; 005ad91e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ad920
    ADD EAX,0x154                       ; 005ad924
    PUSH EAX                            ; 005ad929
    CALL unkafter_superopt.cpp_FUN_005a8290 ; 005ad92a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8290()
    ADD ESP,0x4                         ; 005ad92f
    MOV EAX,EBX                         ; 005ad932
    POP EBX                             ; 005ad934
    RET                                 ; 005ad935

