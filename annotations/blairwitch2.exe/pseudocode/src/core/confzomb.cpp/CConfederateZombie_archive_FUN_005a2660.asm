; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confzomb_cpp_CConfederateZombie_archive_FUN_005a2660(CConfederateZombie *this_ptr)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2660
        ;   Label: core_confzomb.cpp_CConfederateZombie_archive_FUN_005a2660
    PUSH EDX                            ; 005a2664
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005a2665
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a266a
    RET                                 ; 005a266d

