; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_initSearch_FUN_00514860(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
; CPodSearchContext * Stack[0xc]:4   search_context
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70 at 00482ad1
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482cd1
;
; Called Functions:
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00514860
        ;   Label: engine_pod.cpp_CPod_initSearch_FUN_00514860
    PUSH EDI                            ; 00514861
    MOV EDX,dword ptr [ESP + 0x14]      ; 00514862
    MOV ESI,dword ptr [ESP + 0x10]      ; 00514866
    LEA EDI,[EDX + 0x214]               ; 0051486a
    PUSH EDI                            ; 00514870
    MOV AL,byte ptr [ESI]               ; 00514871
        ;   Label: LAB_00514871
    MOV byte ptr [EDI],AL               ; 00514873
    CMP AL,0x0                          ; 00514875
    JZ 0x00514889                       ; 00514877
        ;   XREF to: 00514889 (CONDITIONAL_JUMP)  ; LAB_00514889
    MOV AL,byte ptr [ESI + 0x1]         ; 00514879
    ADD ESI,0x2                         ; 0051487c
    MOV byte ptr [EDI + 0x1],AL         ; 0051487f
    ADD EDI,0x2                         ; 00514882
    CMP AL,0x0                          ; 00514885
    JNZ 0x00514871                      ; 00514887
        ;   XREF to: 00514871 (CONDITIONAL_JUMP)  ; LAB_00514871
    POP EDI                             ; 00514889
        ;   Label: LAB_00514889
    MOV dword ptr [EDX + 0x314],0x0     ; 0051488a
    PUSH EDX                            ; 00514894
    MOV dword ptr [EDX + 0x318],0x0     ; 00514895
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051489f
    PUSH EDX                            ; 005148a3
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0 ; 005148a4
        ;   XREF to: 005148b0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 005148a9
    POP EDI                             ; 005148ac
    POP ESI                             ; 005148ad
    RET                                 ; 005148ae

