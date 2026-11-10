; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_belling_cpp_CBelling_archive_FUN_005a9120(CBelling *this_ptr)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9120
        ;   Label: core_belling.cpp_CBelling_archive_FUN_005a9120
    PUSH EDX                            ; 005a9124
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a9125
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a912a
    RET                                 ; 005a912d

