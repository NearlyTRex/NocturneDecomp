; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_addFilesToExtract_FUN_005c6910(CStranger *this_ptr,_FILE *file_handle)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; Called Functions:
;   core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005c6910
        ;   Label: core_stranger.cpp_CStranger_addFilesToExtract_FUN_005c6910
    PUSH EDX                            ; 005c6914
    MOV ECX,dword ptr [ESP + 0x8]       ; 005c6915
    PUSH ECX                            ; 005c6919
    CALL core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0 ; 005c691a
        ;   XREF to: 004f3fa0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_addFilesToExtract_FUN_004f3fa0(CHero * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005c691f
    RET                                 ; 005c6922

