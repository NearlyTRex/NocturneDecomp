; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; CPodSearchContext * Stack[0x8]:4   search_context
;
; XREF[4]:
;   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 at 004bcc59
;   engine_pod.cpp_CPod_initSearch_FUN_00550ea0 at 00550ee4
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a36cf
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a38bf
;
; Called Functions:
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550ef0
        ;   Label: engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
    PUSH ESI                            ; 00550ef1
    PUSH EDI                            ; 00550ef2
    PUSH EBP                            ; 00550ef3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00550ef4
    MOV ESI,dword ptr [ESP + 0x14]      ; 00550ef8
    MOV EAX,dword ptr [EBX + 0x314]     ; 00550efc
    CMP EAX,dword ptr [ESI]             ; 00550f02
    JGE 0x00550f65                      ; 00550f04 | LAB_00550f65
        ;   XREF to: 00550f65 (CONDITIONAL_JUMP)
    LEA EDI,[EBX + 0x214]               ; 00550f06
    CMP dword ptr [EBX + 0x314],0x0     ; 00550f0c
        ;   Label: LAB_00550f0c
    JL 0x00550f6f                       ; 00550f13 | LAB_00550f6f
        ;   XREF to: 00550f6f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x314]     ; 00550f15
        ;   Label: LAB_00550f15
    MOV EDX,dword ptr [ESP + 0x14]      ; 00550f1b
    SHL EAX,0x2                         ; 00550f1f
    ADD EAX,EDX                         ; 00550f22
    MOV EBP,dword ptr [EAX + 0x4]       ; 00550f24
    CMP dword ptr [EBX + 0x318],0x0     ; 00550f27
        ;   Label: LAB_00550f27
    JL 0x00550f7b                       ; 00550f2e | LAB_00550f7b
        ;   XREF to: 00550f7b (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [EBP + 0x410]     ; 00550f30
        ;   Label: LAB_00550f30
    MOV EAX,dword ptr [EBX + 0x318]     ; 00550f36
    CMP EAX,ESI                         ; 00550f3c
    JL 0x00550f87                       ; 00550f3e | LAB_00550f87
        ;   XREF to: 00550f87 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x314]     ; 00550f40
    MOV dword ptr [EBX + 0x318],0x0     ; 00550f46
    INC ECX                             ; 00550f50
    MOV dword ptr [EBX + 0x314],ECX     ; 00550f51
    MOV ESI,dword ptr [ESP + 0x14]      ; 00550f57
    MOV EAX,dword ptr [EBX + 0x314]     ; 00550f5b
    CMP EAX,dword ptr [ESI]             ; 00550f61
    JL 0x00550f0c                       ; 00550f63 | LAB_00550f0c
        ;   XREF to: 00550f0c (CONDITIONAL_JUMP)
    MOV byte ptr [EBX],0x0              ; 00550f65
        ;   Label: LAB_00550f65
    XOR EAX,EAX                         ; 00550f68
    POP EBP                             ; 00550f6a
    POP EDI                             ; 00550f6b
    POP ESI                             ; 00550f6c
    POP EBX                             ; 00550f6d
    RET                                 ; 00550f6e
    MOV dword ptr [EBX + 0x314],0x0     ; 00550f6f
        ;   Label: LAB_00550f6f
    JMP 0x00550f15                      ; 00550f79 | LAB_00550f15
        ;   XREF to: 00550f15 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x318],0x0     ; 00550f7b
        ;   Label: LAB_00550f7b
    JMP 0x00550f30                      ; 00550f85 | LAB_00550f30
        ;   XREF to: 00550f30 (UNCONDITIONAL_JUMP)
    IMUL EAX,EAX,0x14                   ; 00550f87
        ;   Label: LAB_00550f87
    MOV ESI,dword ptr [EBP + 0x414]     ; 00550f8a
    ADD ESI,EAX                         ; 00550f90
    PUSH 0x0                            ; 00550f92
    MOV ECX,dword ptr [ESI]             ; 00550f94
    PUSH ECX                            ; 00550f96
    PUSH EDI                            ; 00550f97
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 00550f98 | int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00550f9d
    TEST EAX,EAX                        ; 00550fa0
    JNZ 0x00550faf                      ; 00550fa2 | LAB_00550faf
        ;   XREF to: 00550faf (CONDITIONAL_JUMP)
    INC dword ptr [EBX + 0x318]         ; 00550fa4
    JMP 0x00550f27                      ; 00550faa | LAB_00550f27
        ;   XREF to: 00550f27 (UNCONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 00550faf
        ;   Label: LAB_00550faf
    MOV ESI,dword ptr [ESI]             ; 00550fb1
    PUSH EDI                            ; 00550fb3
    MOV AL,byte ptr [ESI]               ; 00550fb4
        ;   Label: LAB_00550fb4
    MOV byte ptr [EDI],AL               ; 00550fb6
    CMP AL,0x0                          ; 00550fb8
    JZ 0x00550fcc                       ; 00550fba | LAB_00550fcc
        ;   XREF to: 00550fcc (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00550fbc
    ADD ESI,0x2                         ; 00550fbf
    MOV byte ptr [EDI + 0x1],AL         ; 00550fc2
    ADD EDI,0x2                         ; 00550fc5
    CMP AL,0x0                          ; 00550fc8
    JNZ 0x00550fb4                      ; 00550fca | LAB_00550fb4
        ;   XREF to: 00550fb4 (CONDITIONAL_JUMP)
    POP EDI                             ; 00550fcc
        ;   Label: LAB_00550fcc
    PUSH EBX                            ; 00550fcd
    MOV EDI,dword ptr [EBX + 0x318]     ; 00550fce
    PUSH EDI                            ; 00550fd4
    PUSH EBP                            ; 00550fd5
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0 ; 00550fd6 | void engine_pod.cpp_CPodFile_populateFileInfo_FUN_005501b0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
        ;   XREF to: 005501b0 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 00550fdb
    MOV EBP,dword ptr [EBX + 0x318]     ; 00550fe0
    ADD EBP,EAX                         ; 00550fe6
    ADD ESP,0xc                         ; 00550fe8
    MOV dword ptr [EBX + 0x318],EBP     ; 00550feb
    POP EBP                             ; 00550ff1
    POP EDI                             ; 00550ff2
    POP ESI                             ; 00550ff3
    POP EBX                             ; 00550ff4
    RET                                 ; 00550ff5

