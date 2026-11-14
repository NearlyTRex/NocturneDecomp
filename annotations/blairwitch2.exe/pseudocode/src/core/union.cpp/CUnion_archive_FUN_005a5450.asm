; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_union_cpp_CUnion_archive_FUN_005a5450(CUnion *this_ptr)
;
; Parameters:
; CUnion *         Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5450
        ;   Label: core_union.cpp_CUnion_archive_FUN_005a5450
    PUSH EDX                            ; 005a5454
    CALL core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930 ; 005a5455
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; void core_basicnpc.cpp_CBasicNPC_archive_FUN_005a4930(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a545a
    RET                                 ; 005a545d

