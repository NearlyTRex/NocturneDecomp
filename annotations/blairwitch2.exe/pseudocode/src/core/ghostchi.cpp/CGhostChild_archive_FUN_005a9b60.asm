; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghostchi_cpp_CGhostChild_archive_FUN_005a9b60(CGhostChild *this_ptr)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9b60
        ;   Label: core_ghostchi.cpp_CGhostChild_archive_FUN_005a9b60
    PUSH EDX                            ; 005a9b64
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005a9b65
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a9b6a
    RET                                 ; 005a9b6d

