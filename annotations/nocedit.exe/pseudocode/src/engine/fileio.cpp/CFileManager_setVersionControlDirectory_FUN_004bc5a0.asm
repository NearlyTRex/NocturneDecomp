; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0(CFileManager * this_ptr, char * directory)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory
;
; Referenced Globals:
;   char[264] g_VersionControlDirectory
;   undefined4 CHAR_ARRAY_02d12ac9
;   undefined4 CHAR_ARRAY_02d12aca
;   undefined4 CHAR_ARRAY_02d12acb
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bc5a0
        ;   Label: engine_fileio.cpp_CFileManager_setVersionControlDirectory_FUN_004bc5a0
    PUSH EDI                            ; 004bc5a1
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bc5a2
    MOV EDI,0x2d12ac8                   ; 004bc5a6 | char[264] g_VersionControlDirectory
    PUSH EDI                            ; 004bc5ab | char[264] g_VersionControlDirectory
    MOV AL,byte ptr [ESI]               ; 004bc5ac
        ;   Label: LAB_004bc5ac
    MOV byte ptr [EDI],AL               ; 004bc5ae | char[264] g_VersionControlDirectory
    CMP AL,0x0                          ; 004bc5b0
    JZ 0x004bc5c4                       ; 004bc5b2 | LAB_004bc5c4
        ;   XREF to: 004bc5c4 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 004bc5b4
    ADD ESI,0x2                         ; 004bc5b7
    MOV byte ptr [EDI + 0x1],AL         ; 004bc5ba | CHAR_ARRAY_02d12ac9
    ADD EDI,0x2                         ; 004bc5bd
    CMP AL,0x0                          ; 004bc5c0
    JNZ 0x004bc5ac                      ; 004bc5c2 | LAB_004bc5ac
        ;   XREF to: 004bc5ac (CONDITIONAL_JUMP)
    POP EDI                             ; 004bc5c4
        ;   Label: LAB_004bc5c4
    POP EDI                             ; 004bc5c5
    POP ESI                             ; 004bc5c6
    RET                                 ; 004bc5c7

