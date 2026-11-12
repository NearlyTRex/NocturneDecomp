; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00481ca0(CStrList *param_1,undefined4 param_2,undefined4 param_3,char *param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00481e00 at 00481e15
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005b8c30
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50
;   engine_dosio.cpp_FUN_00461260
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481ca0
        ;   Label: shape_edittool.cpp_FUN_00481ca0
    PUSH ESI                            ; 00481ca1
    PUSH EDI                            ; 00481ca2
    PUSH EBP                            ; 00481ca3
    SUB ESP,0x524                       ; 00481ca4
    MOV ESI,dword ptr [ESP + 0x538]     ; 00481caa
    MOV EBP,dword ptr [ESP + 0x53c]     ; 00481cb1
    MOV EBX,dword ptr [ESP + 0x540]     ; 00481cb8
    MOV EDI,dword ptr [ESP + 0x544]     ; 00481cbf
    LEA EAX,[ESP + 0x31c]               ; 00481cc6
    PUSH EAX                            ; 00481ccd
    PUSH 0x5d2864                       ; 00481cce
    PUSH EBX                            ; 00481cd3
    CALL engine_dosio.cpp_FUN_00461260  ; 00481cd4
        ;   XREF to: 00461260 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00461260()
    ADD ESP,0xc                         ; 00481cd9
    LEA EAX,[ESP + 0x420]               ; 00481cdc
    PUSH EAX                            ; 00481ce3
    LEA EAX,[ESP + 0x320]               ; 00481ce4
    PUSH EAX                            ; 00481ceb
    PUSH EBP                            ; 00481cec
    CALL engine_dosio.cpp_FUN_00461260  ; 00481ced
        ;   XREF to: 00461260 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00461260()
    ADD ESP,0xc                         ; 00481cf2
    MOV EAX,ESP                         ; 00481cf5
    PUSH EAX                            ; 00481cf7
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10 ; 00481cf8
        ;   XREF to: 00460e10 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00460e10(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481cfd
    LEA EAX,[ESP + 0x420]               ; 00481d00
    PUSH EAX                            ; 00481d07
    LEA EAX,[ESP + 0x4]                 ; 00481d08
    PUSH EAX                            ; 00481d0c
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50 ; 00481d0d
        ;   XREF to: 00460e50 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00460e50(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00481d12
    CMP byte ptr [ESP],0x0              ; 00481d15
    JZ 0x00481d42                       ; 00481d19
        ;   XREF to: 00481d42 (CONDITIONAL_JUMP)  ; LAB_00481d42
    PUSH 0x5d2866                       ; 00481d1b
        ;   Label: LAB_00481d1b
    LEA EAX,[ESP + 0x4]                 ; 00481d20
    PUSH EAX                            ; 00481d24
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00481d25
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00481d2a
    TEST EAX,EAX                        ; 00481d2d
    JNZ 0x00481d67                      ; 00481d2f
        ;   XREF to: 00481d67 (CONDITIONAL_JUMP)  ; LAB_00481d67
    MOV EAX,ESP                         ; 00481d31
        ;   Label: LAB_00481d31
    PUSH EAX                            ; 00481d33
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0 ; 00481d34
        ;   XREF to: 00460ed0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00460ed0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481d39
    CMP byte ptr [ESP],0x0              ; 00481d3c
    JNZ 0x00481d1b                      ; 00481d40
        ;   XREF to: 00481d1b (CONDITIONAL_JUMP)  ; LAB_00481d1b
    MOV EAX,ESP                         ; 00481d42
        ;   Label: LAB_00481d42
    PUSH EAX                            ; 00481d44
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50 ; 00481d45
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00460f50(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00481d4a
    PUSH 0x0                            ; 00481d4d
    LEA EAX,[ESP + 0x4]                 ; 00481d4f
    PUSH EAX                            ; 00481d53
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30 ; 00481d54
        ;   XREF to: 00460e30 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00460e30(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00481d59
    ADD ESP,0x524                       ; 00481d5c
    POP EBP                             ; 00481d62
    POP EDI                             ; 00481d63
    POP ESI                             ; 00481d64
    POP EBX                             ; 00481d65
    RET                                 ; 00481d66
    PUSH 0x5d2868                       ; 00481d67
        ;   Label: LAB_00481d67
    LEA EAX,[ESP + 0x4]                 ; 00481d6c
    PUSH EAX                            ; 00481d70
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 00481d71
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 00481d76
    TEST EAX,EAX                        ; 00481d79
    JZ 0x00481d31                       ; 00481d7b
        ;   XREF to: 00481d31 (CONDITIONAL_JUMP)  ; LAB_00481d31
    TEST byte ptr [ESP + 0x100],0x4     ; 00481d7d
    JZ 0x00481db5                       ; 00481d85
        ;   XREF to: 00481db5 (CONDITIONAL_JUMP)  ; LAB_00481db5
    LEA EAX,[ESP + 0x114]               ; 00481d87
    PUSH EAX                            ; 00481d8e
    LEA EAX,[ESP + 0x4]                 ; 00481d8f
    PUSH EAX                            ; 00481d93
    PUSH EBX                            ; 00481d94
    CALL engine_dosio.cpp_FUN_00461260  ; 00481d95
        ;   XREF to: 00461260 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00461260()
    ADD ESP,0xc                         ; 00481d9a
    PUSH EDI                            ; 00481d9d
    LEA EAX,[ESP + 0x118]               ; 00481d9e
    PUSH EAX                            ; 00481da5
    PUSH EBP                            ; 00481da6
    PUSH ESI                            ; 00481da7
    CALL shape_edittool.cpp_FUN_00481ca0 ; 00481da8
        ;   XREF to: 00481ca0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00481ca0()
    ADD ESP,0x10                        ; 00481dad
    JMP 0x00481d31                      ; 00481db0
        ;   XREF to: 00481d31 (UNCONDITIONAL_JUMP)  ; LAB_00481d31
    PUSH 0x0                            ; 00481db5
        ;   Label: LAB_00481db5
    LEA EAX,[ESP + 0x4]                 ; 00481db7
    PUSH EAX                            ; 00481dbb
    PUSH EDI                            ; 00481dbc
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 00481dbd
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00481dc2
    TEST EAX,EAX                        ; 00481dc5
    JZ 0x00481d31                       ; 00481dc7
        ;   XREF to: 00481d31 (CONDITIONAL_JUMP)  ; LAB_00481d31
    LEA EAX,[ESP + 0x218]               ; 00481dcd
    PUSH EAX                            ; 00481dd4
    LEA EAX,[ESP + 0x4]                 ; 00481dd5
    PUSH EAX                            ; 00481dd9
    PUSH EBX                            ; 00481dda
    CALL engine_dosio.cpp_FUN_00461260  ; 00481ddb
        ;   XREF to: 00461260 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00461260()
    ADD ESP,0xc                         ; 00481de0
    LEA EAX,[ESP + 0x218]               ; 00481de3
    PUSH EAX                            ; 00481dea
    PUSH ESI                            ; 00481deb
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 00481dec
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00481df1
    JMP 0x00481d31                      ; 00481df4
        ;   XREF to: 00481d31 (UNCONDITIONAL_JUMP)  ; LAB_00481d31

