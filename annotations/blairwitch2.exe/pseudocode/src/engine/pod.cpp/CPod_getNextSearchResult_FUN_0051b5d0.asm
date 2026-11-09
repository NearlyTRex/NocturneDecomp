; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_0051b5d0(CPod *this_ptr,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; CPodSearchContext * Stack[0x8]:4   search_context
;
; XREF[3]:
;   engine_pod.cpp_CPod_initSearch_FUN_0051b580 at 0051b5c4
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00481870 at 0048198f
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481b7f
;
; Called Functions:
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b5d0
        ;   Label: engine_pod.cpp_CPod_getNextSearchResult_FUN_0051b5d0
    PUSH ESI                            ; 0051b5d1
    PUSH EDI                            ; 0051b5d2
    PUSH EBP                            ; 0051b5d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051b5d4
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051b5d8
    MOV EAX,dword ptr [EBX + 0x314]     ; 0051b5dc
    CMP EAX,dword ptr [ESI]             ; 0051b5e2
    JGE 0x0051b645                      ; 0051b5e4
        ;   XREF to: 0051b645 (CONDITIONAL_JUMP)  ; LAB_0051b645
    LEA EDI,[EBX + 0x214]               ; 0051b5e6
    CMP dword ptr [EBX + 0x314],0x0     ; 0051b5ec
        ;   Label: LAB_0051b5ec
    JL 0x0051b64f                       ; 0051b5f3
        ;   XREF to: 0051b64f (CONDITIONAL_JUMP)  ; LAB_0051b64f
    MOV EAX,dword ptr [EBX + 0x314]     ; 0051b5f5
        ;   Label: LAB_0051b5f5
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051b5fb
    SHL EAX,0x2                         ; 0051b5ff
    ADD EAX,EDX                         ; 0051b602
    MOV EBP,dword ptr [EAX + 0x4]       ; 0051b604
    CMP dword ptr [EBX + 0x318],0x0     ; 0051b607
        ;   Label: LAB_0051b607
    JL 0x0051b65b                       ; 0051b60e
        ;   XREF to: 0051b65b (CONDITIONAL_JUMP)  ; LAB_0051b65b
    MOV ESI,dword ptr [EBP + 0x410]     ; 0051b610
        ;   Label: LAB_0051b610
    MOV EAX,dword ptr [EBX + 0x318]     ; 0051b616
    CMP EAX,ESI                         ; 0051b61c
    JL 0x0051b667                       ; 0051b61e
        ;   XREF to: 0051b667 (CONDITIONAL_JUMP)  ; LAB_0051b667
    MOV ECX,dword ptr [EBX + 0x314]     ; 0051b620
    MOV dword ptr [EBX + 0x318],0x0     ; 0051b626
    INC ECX                             ; 0051b630
    MOV dword ptr [EBX + 0x314],ECX     ; 0051b631
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051b637
    MOV EAX,dword ptr [EBX + 0x314]     ; 0051b63b
    CMP EAX,dword ptr [ESI]             ; 0051b641
    JL 0x0051b5ec                       ; 0051b643
        ;   XREF to: 0051b5ec (CONDITIONAL_JUMP)  ; LAB_0051b5ec
    MOV byte ptr [EBX],0x0              ; 0051b645
        ;   Label: LAB_0051b645
    XOR EAX,EAX                         ; 0051b648
    POP EBP                             ; 0051b64a
    POP EDI                             ; 0051b64b
    POP ESI                             ; 0051b64c
    POP EBX                             ; 0051b64d
    RET                                 ; 0051b64e
    MOV dword ptr [EBX + 0x314],0x0     ; 0051b64f
        ;   Label: LAB_0051b64f
    JMP 0x0051b5f5                      ; 0051b659
        ;   XREF to: 0051b5f5 (UNCONDITIONAL_JUMP)  ; LAB_0051b5f5
    MOV dword ptr [EBX + 0x318],0x0     ; 0051b65b
        ;   Label: LAB_0051b65b
    JMP 0x0051b610                      ; 0051b665
        ;   XREF to: 0051b610 (UNCONDITIONAL_JUMP)  ; LAB_0051b610
    IMUL EAX,EAX,0x14                   ; 0051b667
        ;   Label: LAB_0051b667
    MOV ESI,dword ptr [EBP + 0x414]     ; 0051b66a
    ADD ESI,EAX                         ; 0051b670
    PUSH 0x0                            ; 0051b672
    MOV ECX,dword ptr [ESI]             ; 0051b674
    PUSH ECX                            ; 0051b676
    PUSH EDI                            ; 0051b677
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 0051b678
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0051b67d
    TEST EAX,EAX                        ; 0051b680
    JNZ 0x0051b68f                      ; 0051b682
        ;   XREF to: 0051b68f (CONDITIONAL_JUMP)  ; LAB_0051b68f
    INC dword ptr [EBX + 0x318]         ; 0051b684
    JMP 0x0051b607                      ; 0051b68a
        ;   XREF to: 0051b607 (UNCONDITIONAL_JUMP)  ; LAB_0051b607
    MOV EDI,EBX                         ; 0051b68f
        ;   Label: LAB_0051b68f
    MOV ESI,dword ptr [ESI]             ; 0051b691
    PUSH EDI                            ; 0051b693
    MOV AL,byte ptr [ESI]               ; 0051b694
        ;   Label: LAB_0051b694
    MOV byte ptr [EDI],AL               ; 0051b696
    CMP AL,0x0                          ; 0051b698
    JZ 0x0051b6ac                       ; 0051b69a
        ;   XREF to: 0051b6ac (CONDITIONAL_JUMP)  ; LAB_0051b6ac
    MOV AL,byte ptr [ESI + 0x1]         ; 0051b69c
    ADD ESI,0x2                         ; 0051b69f
    MOV byte ptr [EDI + 0x1],AL         ; 0051b6a2
    ADD EDI,0x2                         ; 0051b6a5
    CMP AL,0x0                          ; 0051b6a8
    JNZ 0x0051b694                      ; 0051b6aa
        ;   XREF to: 0051b694 (CONDITIONAL_JUMP)  ; LAB_0051b694
    POP EDI                             ; 0051b6ac
        ;   Label: LAB_0051b6ac
    PUSH EBX                            ; 0051b6ad
    MOV EDI,dword ptr [EBX + 0x318]     ; 0051b6ae
    PUSH EDI                            ; 0051b6b4
    PUSH EBP                            ; 0051b6b5
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00 ; 0051b6b6
        ;   XREF to: 0051aa00 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_0051aa00(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 0051b6bb
    MOV EBP,dword ptr [EBX + 0x318]     ; 0051b6c0
    ADD EBP,EAX                         ; 0051b6c6
    ADD ESP,0xc                         ; 0051b6c8
    MOV dword ptr [EBX + 0x318],EBP     ; 0051b6cb
    POP EBP                             ; 0051b6d1
    POP EDI                             ; 0051b6d2
    POP ESI                             ; 0051b6d3
    POP EBX                             ; 0051b6d4
    RET                                 ; 0051b6d5

