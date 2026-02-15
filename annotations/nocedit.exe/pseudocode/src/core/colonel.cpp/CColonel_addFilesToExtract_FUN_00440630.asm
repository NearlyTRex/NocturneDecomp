; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_colonel_cpp_CColonel_addFilesToExtract_FUN_00440630(CColonel *this_ptr,_FILE *file_handle)
;
; Parameters:
; CColonel *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00440630
        ;   Label: core_colonel.cpp_CColonel_addFilesToExtract_FUN_00440630
    PUSH EDX                            ; 00440634
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440635
    PUSH ECX                            ; 00440639
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 0044063a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0044063f
    RET                                 ; 00440642

