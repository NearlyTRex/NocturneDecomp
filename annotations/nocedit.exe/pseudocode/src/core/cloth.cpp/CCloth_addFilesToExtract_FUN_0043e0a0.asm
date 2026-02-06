; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CCloth_addFilesToExtract_FUN_0043e0a0(CCloth *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 at 004be1e2
;
; Referenced Globals:
;   TerminatedCString s_models_s_00618ac9
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e0a0
        ;   Label: core_cloth.cpp_CCloth_addFilesToExtract_FUN_0043e0a0
    PUSH ESI                            ; 0043e0a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043e0a2
    PUSH EDX                            ; 0043e0a6
    PUSH 0x618ac9                       ; 0043e0a7 | = "models\\%s\n"
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043e0ac
    PUSH ECX                            ; 0043e0b0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0043e0b1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0043e0b6
    PUSH 0x0                            ; 0043e0b9
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043e0bb
    PUSH EBX                            ; 0043e0bf
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043e0c0
    PUSH ESI                            ; 0043e0c4
    CALL core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00 ; 0043e0c5
        ;   XREF to: 0047ed00 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(CKeyFramedModel * this_ptr, _FILE * dependency_file, int skip_raw_files)
    ADD ESP,0xc                         ; 0043e0ca
    POP ESI                             ; 0043e0cd
    POP EBX                             ; 0043e0ce
    RET                                 ; 0043e0cf

