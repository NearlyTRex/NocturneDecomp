; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weaver_cpp_CRobin_archive_FUN_005a6750(CRobin *this_ptr)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6750
        ;   Label: core_weaver.cpp_CRobin_archive_FUN_005a6750
    PUSH EDX                            ; 005a6754
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a6755
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a675a
    RET                                 ; 005a675d

