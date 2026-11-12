; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_villain_cpp_CSteuben_archive_FUN_005a5d60(CSteuben *this_ptr)
;
; Parameters:
; CSteuben *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5d60
        ;   Label: core_villain.cpp_CSteuben_archive_FUN_005a5d60
    PUSH EDX                            ; 005a5d64
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a5d65
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a5d6a
    RET                                 ; 005a5d6d

