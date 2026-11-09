; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_pod_cpp_CPod_initSearch_FUN_0053cb00(CPod *this_ptr,char *search_pattern,CPodSearchContext *search_context)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_pattern
; CPodSearchContext * Stack[0xc]:4   search_context
;
; XREF[2]:
;   shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00499ed0 at 00499f31
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_0049a0d0 at 0049a131
;
; Called Functions:
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_0053cb50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0053cb00
        ;   Label: engine_pod.cpp_CPod_initSearch_FUN_0053cb00
    PUSH EDI                            ; 0053cb01
    MOV EDX,dword ptr [ESP + 0x14]      ; 0053cb02
    MOV ESI,dword ptr [ESP + 0x10]      ; 0053cb06
    LEA EDI,[EDX + 0x214]               ; 0053cb0a
    PUSH EDI                            ; 0053cb10
    MOV AL,byte ptr [ESI]               ; 0053cb11
        ;   Label: LAB_0053cb11
    MOV byte ptr [EDI],AL               ; 0053cb13
    CMP AL,0x0                          ; 0053cb15
    JZ 0x0053cb29                       ; 0053cb17
        ;   XREF to: 0053cb29 (CONDITIONAL_JUMP)  ; LAB_0053cb29
    MOV AL,byte ptr [ESI + 0x1]         ; 0053cb19
    ADD ESI,0x2                         ; 0053cb1c
    MOV byte ptr [EDI + 0x1],AL         ; 0053cb1f
    ADD EDI,0x2                         ; 0053cb22
    CMP AL,0x0                          ; 0053cb25
    JNZ 0x0053cb11                      ; 0053cb27
        ;   XREF to: 0053cb11 (CONDITIONAL_JUMP)  ; LAB_0053cb11
    POP EDI                             ; 0053cb29
        ;   Label: LAB_0053cb29
    MOV dword ptr [EDX + 0x314],0x0     ; 0053cb2a
    PUSH EDX                            ; 0053cb34
    MOV dword ptr [EDX + 0x318],0x0     ; 0053cb35
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053cb3f
    PUSH EDX                            ; 0053cb43
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_0053cb50 ; 0053cb44
        ;   XREF to: 0053cb50 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_0053cb50(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 0053cb49
    POP EDI                             ; 0053cb4c
    POP ESI                             ; 0053cb4d
    RET                                 ; 0053cb4e

