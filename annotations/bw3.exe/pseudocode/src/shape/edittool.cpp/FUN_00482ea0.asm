; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00482ea0(CStrList *param_1,undefined4 param_2,undefined4 param_3,char *param_4)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_00483000 at 00483015
;
; Called Functions:
;   crt_string.c__strcmp_FUN_005a3d00
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
;   engine_dosio.cpp_FUN_00466040
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482ea0
        ;   Label: shape_edittool.cpp_FUN_00482ea0
    PUSH ESI                            ; 00482ea1
    PUSH EDI                            ; 00482ea2
    PUSH EBP                            ; 00482ea3
    SUB ESP,0x524                       ; 00482ea4
    MOV ESI,dword ptr [ESP + 0x538]     ; 00482eaa
    MOV EBP,dword ptr [ESP + 0x53c]     ; 00482eb1
    MOV EBX,dword ptr [ESP + 0x540]     ; 00482eb8
    MOV EDI,dword ptr [ESP + 0x544]     ; 00482ebf
    LEA EAX,[ESP + 0x31c]               ; 00482ec6
    PUSH EAX                            ; 00482ecd
    PUSH 0x5bd6ba                       ; 00482ece
    PUSH EBX                            ; 00482ed3
    CALL engine_dosio.cpp_FUN_00466040  ; 00482ed4
        ;   XREF to: 00466040 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00466040()
    ADD ESP,0xc                         ; 00482ed9
    LEA EAX,[ESP + 0x420]               ; 00482edc
    PUSH EAX                            ; 00482ee3
    LEA EAX,[ESP + 0x320]               ; 00482ee4
    PUSH EAX                            ; 00482eeb
    PUSH EBP                            ; 00482eec
    CALL engine_dosio.cpp_FUN_00466040  ; 00482eed
        ;   XREF to: 00466040 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00466040()
    ADD ESP,0xc                         ; 00482ef2
    MOV EAX,ESP                         ; 00482ef5
    PUSH EAX                            ; 00482ef7
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 ; 00482ef8
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482efd
    LEA EAX,[ESP + 0x420]               ; 00482f00
    PUSH EAX                            ; 00482f07
    LEA EAX,[ESP + 0x4]                 ; 00482f08
    PUSH EAX                            ; 00482f0c
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 00482f0d
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 00482f12
    CMP byte ptr [ESP],0x0              ; 00482f15
    JZ 0x00482f42                       ; 00482f19
        ;   XREF to: 00482f42 (CONDITIONAL_JUMP)  ; LAB_00482f42
    PUSH 0x5bd6bc                       ; 00482f1b
        ;   Label: LAB_00482f1b
    LEA EAX,[ESP + 0x4]                 ; 00482f20
    PUSH EAX                            ; 00482f24
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00482f25
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00482f2a
    TEST EAX,EAX                        ; 00482f2d
    JNZ 0x00482f67                      ; 00482f2f
        ;   XREF to: 00482f67 (CONDITIONAL_JUMP)  ; LAB_00482f67
    MOV EAX,ESP                         ; 00482f31
        ;   Label: LAB_00482f31
    PUSH EAX                            ; 00482f33
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 00482f34
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482f39
    CMP byte ptr [ESP],0x0              ; 00482f3c
    JNZ 0x00482f1b                      ; 00482f40
        ;   XREF to: 00482f1b (CONDITIONAL_JUMP)  ; LAB_00482f1b
    MOV EAX,ESP                         ; 00482f42
        ;   Label: LAB_00482f42
    PUSH EAX                            ; 00482f44
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00482f45
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00482f4a
    PUSH 0x0                            ; 00482f4d
    LEA EAX,[ESP + 0x4]                 ; 00482f4f
    PUSH EAX                            ; 00482f53
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 00482f54
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00482f59
    ADD ESP,0x524                       ; 00482f5c
    POP EBP                             ; 00482f62
    POP EDI                             ; 00482f63
    POP ESI                             ; 00482f64
    POP EBX                             ; 00482f65
    RET                                 ; 00482f66
    PUSH 0x5bd6be                       ; 00482f67
        ;   Label: LAB_00482f67
    LEA EAX,[ESP + 0x4]                 ; 00482f6c
    PUSH EAX                            ; 00482f70
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 00482f71
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 00482f76
    TEST EAX,EAX                        ; 00482f79
    JZ 0x00482f31                       ; 00482f7b
        ;   XREF to: 00482f31 (CONDITIONAL_JUMP)  ; LAB_00482f31
    TEST byte ptr [ESP + 0x100],0x4     ; 00482f7d
    JZ 0x00482fb5                       ; 00482f85
        ;   XREF to: 00482fb5 (CONDITIONAL_JUMP)  ; LAB_00482fb5
    LEA EAX,[ESP + 0x114]               ; 00482f87
    PUSH EAX                            ; 00482f8e
    LEA EAX,[ESP + 0x4]                 ; 00482f8f
    PUSH EAX                            ; 00482f93
    PUSH EBX                            ; 00482f94
    CALL engine_dosio.cpp_FUN_00466040  ; 00482f95
        ;   XREF to: 00466040 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00466040()
    ADD ESP,0xc                         ; 00482f9a
    PUSH EDI                            ; 00482f9d
    LEA EAX,[ESP + 0x118]               ; 00482f9e
    PUSH EAX                            ; 00482fa5
    PUSH EBP                            ; 00482fa6
    PUSH ESI                            ; 00482fa7
    CALL shape_edittool.cpp_FUN_00482ea0 ; 00482fa8
        ;   XREF to: 00482ea0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00482ea0()
    ADD ESP,0x10                        ; 00482fad
    JMP 0x00482f31                      ; 00482fb0
        ;   XREF to: 00482f31 (UNCONDITIONAL_JUMP)  ; LAB_00482f31
    PUSH 0x0                            ; 00482fb5
        ;   Label: LAB_00482fb5
    LEA EAX,[ESP + 0x4]                 ; 00482fb7
    PUSH EAX                            ; 00482fbb
    PUSH EDI                            ; 00482fbc
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 00482fbd
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00482fc2
    TEST EAX,EAX                        ; 00482fc5
    JZ 0x00482f31                       ; 00482fc7
        ;   XREF to: 00482f31 (CONDITIONAL_JUMP)  ; LAB_00482f31
    LEA EAX,[ESP + 0x218]               ; 00482fcd
    PUSH EAX                            ; 00482fd4
    LEA EAX,[ESP + 0x4]                 ; 00482fd5
    PUSH EAX                            ; 00482fd9
    PUSH EBX                            ; 00482fda
    CALL engine_dosio.cpp_FUN_00466040  ; 00482fdb
        ;   XREF to: 00466040 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00466040()
    ADD ESP,0xc                         ; 00482fe0
    LEA EAX,[ESP + 0x218]               ; 00482fe3
    PUSH EAX                            ; 00482fea
    PUSH ESI                            ; 00482feb
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 00482fec
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00482ff1
    JMP 0x00482f31                      ; 00482ff4
        ;   XREF to: 00482f31 (UNCONDITIONAL_JUMP)  ; LAB_00482f31

