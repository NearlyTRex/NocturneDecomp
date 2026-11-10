; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grandma_cpp_CGrandma_archive_FUN_005a7ce0(CGrandma *this_ptr)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7ce0
        ;   Label: core_grandma.cpp_CGrandma_archive_FUN_005a7ce0
    PUSH EDX                            ; 005a7ce4
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a7ce5
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a7cea
    RET                                 ; 005a7ced

