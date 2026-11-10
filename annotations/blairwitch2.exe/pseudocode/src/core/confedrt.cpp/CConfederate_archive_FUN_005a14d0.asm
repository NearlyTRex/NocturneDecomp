; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_confedrt_cpp_CConfederate_archive_FUN_005a14d0(CConfederate *this_ptr)
;
; Parameters:
; CConfederate *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a14d0
        ;   Label: core_confedrt.cpp_CConfederate_archive_FUN_005a14d0
    PUSH EDX                            ; 005a14d4
    CALL core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10 ; 005a14d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_twigzomb.cpp_CTwigZombie_archive_FUN_0059fc10(CTwigZombie * this_ptr)
    ADD ESP,0x4                         ; 005a14da
    RET                                 ; 005a14dd

