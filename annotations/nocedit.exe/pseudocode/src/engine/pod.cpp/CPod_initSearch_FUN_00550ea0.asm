; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_pod_cpp_CPod_initSearch_FUN_00550ea0 (CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
; CPodSearchContext * Stack[0xc]:4   search_context
;
; XREF[3]:
;   engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70 at 004bcbfd
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0 at 004a3611
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0 at 004a3811
;
; Called Functions:
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00550ea0
        ;   Label: engine_pod.cpp_CPod_initSearch_FUN_00550ea0
    PUSH EDI                            ; 00550ea1
    MOV EDX,dword ptr [ESP + 0x14]      ; 00550ea2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00550ea6
    LEA EDI,[EDX + 0x214]               ; 00550eaa
    PUSH EDI                            ; 00550eb0
    MOV AL,byte ptr [ESI]               ; 00550eb1
        ;   Label: LAB_00550eb1
    MOV byte ptr [EDI],AL               ; 00550eb3
    CMP AL,0x0                          ; 00550eb5
    JZ 0x00550ec9                       ; 00550eb7
        ;   XREF to: 00550ec9 (CONDITIONAL_JUMP)  ; LAB_00550ec9
    MOV AL,byte ptr [ESI + 0x1]         ; 00550eb9
    ADD ESI,0x2                         ; 00550ebc
    MOV byte ptr [EDI + 0x1],AL         ; 00550ebf
    ADD EDI,0x2                         ; 00550ec2
    CMP AL,0x0                          ; 00550ec5
    JNZ 0x00550eb1                      ; 00550ec7
        ;   XREF to: 00550eb1 (CONDITIONAL_JUMP)  ; LAB_00550eb1
    POP EDI                             ; 00550ec9
        ;   Label: LAB_00550ec9
    MOV dword ptr [EDX + 0x314],0x0     ; 00550eca
    PUSH EDX                            ; 00550ed4
    MOV dword ptr [EDX + 0x318],0x0     ; 00550ed5
    MOV EDX,dword ptr [ESP + 0x10]      ; 00550edf
    PUSH EDX                            ; 00550ee3
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0 ; 00550ee4
        ;   XREF to: 00550ef0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_00550ef0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 00550ee9
    POP EDI                             ; 00550eec
    POP ESI                             ; 00550eed
    RET                                 ; 00550eee

