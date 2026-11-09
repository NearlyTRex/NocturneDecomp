; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_00482a70(CStrList *this_ptr,char *directory_path,char *file_pattern)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   directory_path
; char *           Stack[0xc]:4   file_pattern
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x744]:1  local_744
; undefined4       Stack[-0x640]:4  local_640
; undefined4       Stack[-0x638]:4  local_638
; undefined        Stack[-0x528]:1  local_528
; undefined4       Stack[-0x424]:4  local_424
; undefined4       Stack[-0x420]:4  local_420
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined1       Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x110]:1  local_110
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047db70 at 0047dba1
;
; Referenced Globals:
;   TerminatedCString s_s_s_005bd6ae
;   CDemonPod* g_CDemonPodPtr = 01ed2af0
;
; Called Functions:
;   crt_string.c_memmove_FUN_005a54c0
;   crt_unknown.c_FUN_005a28c0
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
;   engine_dosio.cpp_FUN_00465e50
;   engine_dosio.cpp_FUN_00465e80
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0
;   engine_pod.cpp_CPod_initSearch_FUN_00514860
;   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482a70
        ;   Label: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_00482a70
    PUSH ESI                            ; 00482a71
    PUSH EDI                            ; 00482a72
    PUSH EBP                            ; 00482a73
    SUB ESP,0x834                       ; 00482a74
    MOV EBX,dword ptr [ESP + 0x848]     ; 00482a7a
    MOV ESI,dword ptr [ESP + 0x84c]     ; 00482a81
    MOV EDI,dword ptr [ESP + 0x850]     ; 00482a88
    TEST ESI,ESI                        ; 00482a8f
    JZ 0x00482c3d                       ; 00482a91
        ;   XREF to: 00482c3d (CONDITIONAL_JUMP)  ; LAB_00482c3d
    CMP byte ptr [ESI],0x0              ; 00482a97
    JZ 0x00482c3d                       ; 00482a9a
        ;   XREF to: 00482c3d (CONDITIONAL_JUMP)  ; LAB_00482c3d
    PUSH EDI                            ; 00482aa0
    PUSH ESI                            ; 00482aa1
    PUSH 0x5bd6ae                       ; 00482aa2 | = "%s\\%s"
    LEA ECX,[ESP + 0x540]               ; 00482aa7
    PUSH ECX                            ; 00482aae
    CALL crt_unknown.c_FUN_005a28c0     ; 00482aaf
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00482ab4
    MOV EDX,dword ptr [0x0060395c]      ; 00482ab7 | g_CDemonPodPtr
        ;   Label: LAB_00482ab7
    TEST EDX,EDX                        ; 00482abd
    JZ 0x00482ba1                       ; 00482abf
        ;   XREF to: 00482ba1 (CONDITIONAL_JUMP)  ; LAB_00482ba1
    MOV ECX,ESP                         ; 00482ac5
    PUSH ECX                            ; 00482ac7
    LEA ECX,[ESP + 0x538]               ; 00482ac8
    PUSH ECX                            ; 00482acf
    PUSH EDX                            ; 00482ad0
    CALL engine_pod.cpp_CPod_initSearch_FUN_00514860 ; 00482ad1
        ;   XREF to: 00514860 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPod_initSearch_FUN_00514860(CPod * this_ptr, char * search_pattern, CPodSearchContext * search_context)
    ADD ESP,0xc                         ; 00482ad6
    CMP byte ptr [ESP],0x0              ; 00482ad9
    JZ 0x00482ba1                       ; 00482add
        ;   XREF to: 00482ba1 (CONDITIONAL_JUMP)  ; LAB_00482ba1
    LEA ECX,[ESP + 0x634]               ; 00482ae3
        ;   Label: LAB_00482ae3
    PUSH ECX                            ; 00482aea
    LEA ECX,[ESP + 0x738]               ; 00482aeb
    PUSH ECX                            ; 00482af2
    PUSH 0x0                            ; 00482af3
    PUSH 0x0                            ; 00482af5
    LEA ECX,[ESP + 0x10]                ; 00482af7
    PUSH ECX                            ; 00482afb
    CALL engine_dosio.cpp_FUN_00465e50  ; 00482afc
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00482b01
    CMP byte ptr [ESP + 0x634],0x2e     ; 00482b04
    JNZ 0x00482b38                      ; 00482b0c
        ;   XREF to: 00482b38 (CONDITIONAL_JUMP)  ; LAB_00482b38
    LEA EDI,[ESP + 0x634]               ; 00482b0e
    SUB ECX,ECX                         ; 00482b15
    DEC ECX                             ; 00482b17
    XOR EAX,EAX                         ; 00482b18
    SCASB.REPNE ES:EDI                  ; 00482b1a
    NOT ECX                             ; 00482b1c
    DEC ECX                             ; 00482b1e
    PUSH ECX                            ; 00482b1f
    LEA ECX,[ESP + 0x639]               ; 00482b20
    PUSH ECX                            ; 00482b27
    LEA ECX,[ESP + 0x63c]               ; 00482b28
    PUSH ECX                            ; 00482b2f
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00482b30
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00482b35
    LEA ECX,[ESP + 0x634]               ; 00482b38
        ;   Label: LAB_00482b38
    PUSH ECX                            ; 00482b3f
    LEA ECX,[ESP + 0x738]               ; 00482b40
    PUSH ECX                            ; 00482b47
    PUSH 0x0                            ; 00482b48
    PUSH 0x0                            ; 00482b4a
    LEA ECX,[ESP + 0x440]               ; 00482b4c
    PUSH ECX                            ; 00482b53
    CALL engine_dosio.cpp_FUN_00465e80  ; 00482b54
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00482b59
    MOV ESI,dword ptr [ESP + 0x20c]     ; 00482b5c
    PUSH ESI                            ; 00482b63
    MOV EDI,dword ptr [ESP + 0x208]     ; 00482b64
    PUSH EDI                            ; 00482b6b
    LEA ECX,[ESP + 0x108]               ; 00482b6c
    PUSH ECX                            ; 00482b73
    LEA ECX,[ESP + 0x43c]               ; 00482b74
    PUSH ECX                            ; 00482b7b
    PUSH EBX                            ; 00482b7c
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 ; 00482b7d
        ;   XREF to: 00482820 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820(CStrList * this_ptr, char * search_key, char * file_path, int file_size, ...)
    ADD ESP,0x14                        ; 00482b82
    MOV ECX,ESP                         ; 00482b85
    PUSH ECX                            ; 00482b87
    MOV EBP,dword ptr [0x0060395c]      ; 00482b88 | g_CDemonPodPtr
    PUSH EBP                            ; 00482b8e
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0 ; 00482b8f
        ;   XREF to: 005148b0 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0(CPod * this_ptr, CPodSearchContext * search_context)
    ADD ESP,0x8                         ; 00482b94
    CMP byte ptr [ESP],0x0              ; 00482b97
    JNZ 0x00482ae3                      ; 00482b9b
        ;   XREF to: 00482ae3 (CONDITIONAL_JUMP)  ; LAB_00482ae3
    LEA ECX,[ESP + 0x31c]               ; 00482ba1
        ;   Label: LAB_00482ba1
    PUSH ECX                            ; 00482ba8
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 ; 00482ba9
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482bae
    LEA ECX,[ESP + 0x534]               ; 00482bb1
    PUSH ECX                            ; 00482bb8
    LEA ECX,[ESP + 0x320]               ; 00482bb9
    PUSH ECX                            ; 00482bc0
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 00482bc1
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00482bc6
    CMP byte ptr [ESP + 0x31c],0x0      ; 00482bc9
    JZ 0x00482c10                       ; 00482bd1
        ;   XREF to: 00482c10 (CONDITIONAL_JUMP)  ; LAB_00482c10
    MOV EAX,dword ptr [ESP + 0x424]     ; 00482bd3
        ;   Label: LAB_00482bd3
    PUSH EAX                            ; 00482bda
    MOV EDX,dword ptr [ESP + 0x424]     ; 00482bdb
    PUSH EDX                            ; 00482be2
    PUSH 0x0                            ; 00482be3
    LEA ECX,[ESP + 0x328]               ; 00482be5
    PUSH ECX                            ; 00482bec
    PUSH EBX                            ; 00482bed
    CALL shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820 ; 00482bee
        ;   XREF to: 00482820 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_00482820(CStrList * this_ptr, char * search_key, char * file_path, int file_size, ...)
    ADD ESP,0x14                        ; 00482bf3
    LEA ECX,[ESP + 0x31c]               ; 00482bf6
    PUSH ECX                            ; 00482bfd
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 00482bfe
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482c03
    CMP byte ptr [ESP + 0x31c],0x0      ; 00482c06
    JNZ 0x00482bd3                      ; 00482c0e
        ;   XREF to: 00482bd3 (CONDITIONAL_JUMP)  ; LAB_00482bd3
    LEA ECX,[ESP + 0x31c]               ; 00482c10
        ;   Label: LAB_00482c10
    PUSH ECX                            ; 00482c17
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00482c18
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482c1d
    PUSH 0x0                            ; 00482c20
    LEA ECX,[ESP + 0x320]               ; 00482c22
    PUSH ECX                            ; 00482c29
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 00482c2a
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00482c2f
    ADD ESP,0x834                       ; 00482c32
    POP EBP                             ; 00482c38
    POP EDI                             ; 00482c39
    POP ESI                             ; 00482c3a
    POP EBX                             ; 00482c3b
    RET                                 ; 00482c3c
    MOV ESI,EDI                         ; 00482c3d
        ;   Label: LAB_00482c3d
    LEA EDI,[ESP + 0x534]               ; 00482c3f
    PUSH EDI                            ; 00482c46
    MOV AL,byte ptr [ESI]               ; 00482c47
        ;   Label: LAB_00482c47
    MOV byte ptr [EDI],AL               ; 00482c49
    CMP AL,0x0                          ; 00482c4b
    JZ 0x00482c5f                       ; 00482c4d
        ;   XREF to: 00482c5f (CONDITIONAL_JUMP)  ; LAB_00482c5f
    MOV AL,byte ptr [ESI + 0x1]         ; 00482c4f
    ADD ESI,0x2                         ; 00482c52
    MOV byte ptr [EDI + 0x1],AL         ; 00482c55
    ADD EDI,0x2                         ; 00482c58
    CMP AL,0x0                          ; 00482c5b
    JNZ 0x00482c47                      ; 00482c5d
        ;   XREF to: 00482c47 (CONDITIONAL_JUMP)  ; LAB_00482c47
    POP EDI                             ; 00482c5f
        ;   Label: LAB_00482c5f
    JMP 0x00482ab7                      ; 00482c60
        ;   XREF to: 00482ab7 (UNCONDITIONAL_JUMP)  ; LAB_00482ab7

