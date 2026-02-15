; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_addFilesToExtract_FUN_00414070(CBaron *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00414070
        ;   Label: core_baron.cpp_CBaron_addFilesToExtract_FUN_00414070
    PUSH EDX                            ; 00414074
    MOV ECX,dword ptr [ESP + 0x8]       ; 00414075
    PUSH ECX                            ; 00414079
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 0041407a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0041407f
    RET                                 ; 00414082

