; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_unionzom_cpp_CUnionZombie_archive_FUN_005a4740(CUnionZombie *this_ptr)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4740
        ;   Label: core_unionzom.cpp_CUnionZombie_archive_FUN_005a4740
    PUSH EDX                            ; 005a4744
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005a4745
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a474a
    RET                                 ; 005a474d

