; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPod_getNextSearchResult_FUN_005148b0(CPod *this_ptr,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; CPodSearchContext * Stack[0x8]:4   search_context
;
; XREF[3]:
;   engine_pod.cpp_CPod_initSearch_FUN_00514860 at 005148a4
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482b8f
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482d7f
;
; Called Functions:
;   engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005148b0
        ;   Label: engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0
    PUSH ESI                            ; 005148b1
    PUSH EDI                            ; 005148b2
    PUSH EBP                            ; 005148b3
    MOV EBX,dword ptr [ESP + 0x18]      ; 005148b4
    MOV ESI,dword ptr [ESP + 0x14]      ; 005148b8
    MOV EAX,dword ptr [EBX + 0x314]     ; 005148bc
    CMP EAX,dword ptr [ESI]             ; 005148c2
    JGE 0x00514925                      ; 005148c4
        ;   XREF to: 00514925 (CONDITIONAL_JUMP)  ; LAB_00514925
    LEA EDI,[EBX + 0x214]               ; 005148c6
    CMP dword ptr [EBX + 0x314],0x0     ; 005148cc
        ;   Label: LAB_005148cc
    JL 0x0051492f                       ; 005148d3
        ;   XREF to: 0051492f (CONDITIONAL_JUMP)  ; LAB_0051492f
    MOV EAX,dword ptr [EBX + 0x314]     ; 005148d5
        ;   Label: LAB_005148d5
    MOV EDX,dword ptr [ESP + 0x14]      ; 005148db
    SHL EAX,0x2                         ; 005148df
    ADD EAX,EDX                         ; 005148e2
    MOV EBP,dword ptr [EAX + 0x4]       ; 005148e4
    CMP dword ptr [EBX + 0x318],0x0     ; 005148e7
        ;   Label: LAB_005148e7
    JL 0x0051493b                       ; 005148ee
        ;   XREF to: 0051493b (CONDITIONAL_JUMP)  ; LAB_0051493b
    MOV ESI,dword ptr [EBP + 0x410]     ; 005148f0
        ;   Label: LAB_005148f0
    MOV EAX,dword ptr [EBX + 0x318]     ; 005148f6
    CMP EAX,ESI                         ; 005148fc
    JL 0x00514947                       ; 005148fe
        ;   XREF to: 00514947 (CONDITIONAL_JUMP)  ; LAB_00514947
    MOV ECX,dword ptr [EBX + 0x314]     ; 00514900
    MOV dword ptr [EBX + 0x318],0x0     ; 00514906
    INC ECX                             ; 00514910
    MOV dword ptr [EBX + 0x314],ECX     ; 00514911
    MOV ESI,dword ptr [ESP + 0x14]      ; 00514917
    MOV EAX,dword ptr [EBX + 0x314]     ; 0051491b
    CMP EAX,dword ptr [ESI]             ; 00514921
    JL 0x005148cc                       ; 00514923
        ;   XREF to: 005148cc (CONDITIONAL_JUMP)  ; LAB_005148cc
    MOV byte ptr [EBX],0x0              ; 00514925
        ;   Label: LAB_00514925
    XOR EAX,EAX                         ; 00514928
    POP EBP                             ; 0051492a
    POP EDI                             ; 0051492b
    POP ESI                             ; 0051492c
    POP EBX                             ; 0051492d
    RET                                 ; 0051492e
    MOV dword ptr [EBX + 0x314],0x0     ; 0051492f
        ;   Label: LAB_0051492f
    JMP 0x005148d5                      ; 00514939
        ;   XREF to: 005148d5 (UNCONDITIONAL_JUMP)  ; LAB_005148d5
    MOV dword ptr [EBX + 0x318],0x0     ; 0051493b
        ;   Label: LAB_0051493b
    JMP 0x005148f0                      ; 00514945
        ;   XREF to: 005148f0 (UNCONDITIONAL_JUMP)  ; LAB_005148f0
    IMUL EAX,EAX,0x14                   ; 00514947
        ;   Label: LAB_00514947
    MOV ESI,dword ptr [EBP + 0x414]     ; 0051494a
    ADD ESI,EAX                         ; 00514950
    PUSH 0x0                            ; 00514952
    MOV ECX,dword ptr [ESI]             ; 00514954
    PUSH ECX                            ; 00514956
    PUSH EDI                            ; 00514957
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 00514958
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0051495d
    TEST EAX,EAX                        ; 00514960
    JNZ 0x0051496f                      ; 00514962
        ;   XREF to: 0051496f (CONDITIONAL_JUMP)  ; LAB_0051496f
    INC dword ptr [EBX + 0x318]         ; 00514964
    JMP 0x005148e7                      ; 0051496a
        ;   XREF to: 005148e7 (UNCONDITIONAL_JUMP)  ; LAB_005148e7
    MOV EDI,EBX                         ; 0051496f
        ;   Label: LAB_0051496f
    MOV ESI,dword ptr [ESI]             ; 00514971
    PUSH EDI                            ; 00514973
    MOV AL,byte ptr [ESI]               ; 00514974
        ;   Label: LAB_00514974
    MOV byte ptr [EDI],AL               ; 00514976
    CMP AL,0x0                          ; 00514978
    JZ 0x0051498c                       ; 0051497a
        ;   XREF to: 0051498c (CONDITIONAL_JUMP)  ; LAB_0051498c
    MOV AL,byte ptr [ESI + 0x1]         ; 0051497c
    ADD ESI,0x2                         ; 0051497f
    MOV byte ptr [EDI + 0x1],AL         ; 00514982
    ADD EDI,0x2                         ; 00514985
    CMP AL,0x0                          ; 00514988
    JNZ 0x00514974                      ; 0051498a
        ;   XREF to: 00514974 (CONDITIONAL_JUMP)  ; LAB_00514974
    POP EDI                             ; 0051498c
        ;   Label: LAB_0051498c
    PUSH EBX                            ; 0051498d
    MOV EDI,dword ptr [EBX + 0x318]     ; 0051498e
    PUSH EDI                            ; 00514994
    PUSH EBP                            ; 00514995
    CALL engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0 ; 00514996
        ;   XREF to: 00513ca0 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_populateFileInfo_FUN_00513ca0(CPodFile * this_ptr, int file_index, SFoundFileInfo * output_info)
    MOV EAX,0x1                         ; 0051499b
    MOV EBP,dword ptr [EBX + 0x318]     ; 005149a0
    ADD EBP,EAX                         ; 005149a6
    ADD ESP,0xc                         ; 005149a8
    MOV dword ptr [EBX + 0x318],EBP     ; 005149ab
    POP EBP                             ; 005149b1
    POP EDI                             ; 005149b2
    POP ESI                             ; 005149b3
    POP EBX                             ; 005149b4
    RET                                 ; 005149b5

