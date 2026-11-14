; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00483020(CStrList *param_1,char *param_2,char *param_3)
;
;
; Called Functions:
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0
;   engine_dosio.cpp_getFullPath_FUN_00465ff0
;   engine_dosio.cpp_makePath_FUN_00465e80
;   engine_dosio.cpp_splitPath_FUN_00465e50
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483020
        ;   Label: shape_edittool.cpp_FUN_00483020
    SUB ESP,0x824                       ; 00483021
    MOV EBX,dword ptr [ESP + 0x82c]     ; 00483027
    LEA EAX,[ESP + 0x420]               ; 0048302e
    PUSH EAX                            ; 00483035
    LEA EAX,[ESP + 0x524]               ; 00483036
    PUSH EAX                            ; 0048303d
    LEA EAX,[ESP + 0x728]               ; 0048303e
    PUSH EAX                            ; 00483045
    LEA EAX,[ESP + 0x82c]               ; 00483046
    PUSH EAX                            ; 0048304d
    MOV EDX,dword ptr [ESP + 0x840]     ; 0048304e
    PUSH EDX                            ; 00483055
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00483056
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048305b
    LEA EAX,[ESP + 0x420]               ; 0048305e
    PUSH EAX                            ; 00483065
    LEA EAX,[ESP + 0x524]               ; 00483066
    PUSH EAX                            ; 0048306d
    LEA EAX,[ESP + 0x728]               ; 0048306e
    PUSH EAX                            ; 00483075
    PUSH 0x0                            ; 00483076
    LEA EAX,[ESP + 0x630]               ; 00483078
    PUSH EAX                            ; 0048307f
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 00483080
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00483085
    LEA EAX,[ESP + 0x420]               ; 00483088
    PUSH EAX                            ; 0048308f
    LEA EAX,[ESP + 0x524]               ; 00483090
    PUSH EAX                            ; 00483097
    PUSH 0x0                            ; 00483098
    PUSH 0x0                            ; 0048309a
    MOV ECX,dword ptr [ESP + 0x844]     ; 0048309c
    PUSH ECX                            ; 004830a3
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 004830a4
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004830a9
    LEA EAX,[ESP + 0x420]               ; 004830ac
    PUSH EAX                            ; 004830b3
    LEA EAX,[ESP + 0x524]               ; 004830b4
    PUSH EAX                            ; 004830bb
    LEA EAX,[ESP + 0x628]               ; 004830bc
    PUSH EAX                            ; 004830c3
    LEA EAX,[ESP + 0x82c]               ; 004830c4
    PUSH EAX                            ; 004830cb
    LEA EAX,[ESP + 0x32c]               ; 004830cc
    PUSH EAX                            ; 004830d3
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 004830d4
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004830d9
    MOV EAX,ESP                         ; 004830dc
    PUSH EAX                            ; 004830de
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60 ; 004830df
        ;   XREF to: 00465b60 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_ctor_FUN_00465b60(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 004830e4
    LEA EAX,[ESP + 0x31c]               ; 004830e7
    PUSH EAX                            ; 004830ee
    LEA EAX,[ESP + 0x4]                 ; 004830ef
    PUSH EAX                            ; 004830f3
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0 ; 004830f4
        ;   XREF to: 00465ba0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_openSearch_FUN_00465ba0(CFileFinder * this_ptr, char * search_pattern)
    ADD ESP,0x8                         ; 004830f9
    CMP byte ptr [ESP],0x0              ; 004830fc
    JZ 0x0048311d                       ; 00483100
        ;   XREF to: 0048311d (CONDITIONAL_JUMP)  ; LAB_0048311d
    TEST byte ptr [ESP + 0x100],0x4     ; 00483102
        ;   Label: LAB_00483102
    JZ 0x0048313f                       ; 0048310a
        ;   XREF to: 0048313f (CONDITIONAL_JUMP)  ; LAB_0048313f
    MOV EAX,ESP                         ; 0048310c
        ;   Label: LAB_0048310c
    PUSH EAX                            ; 0048310e
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20 ; 0048310f
        ;   XREF to: 00465c20 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_CFileFinder_findNext_FUN_00465c20(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00483114
    CMP byte ptr [ESP],0x0              ; 00483117
    JNZ 0x00483102                      ; 0048311b
        ;   XREF to: 00483102 (CONDITIONAL_JUMP)  ; LAB_00483102
    MOV EAX,ESP                         ; 0048311d
        ;   Label: LAB_0048311d
    PUSH EAX                            ; 0048311f
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0 ; 00483120
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder * this_ptr)
    ADD ESP,0x4                         ; 00483125
    PUSH 0x0                            ; 00483128
    LEA EAX,[ESP + 0x4]                 ; 0048312a
    PUSH EAX                            ; 0048312e
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80 ; 0048312f
        ;   XREF to: 00465b80 (UNCONDITIONAL_CALL)  ; CFileFinder * engine_dosio.cpp_CFileFinder_dtor_FUN_00465b80(CFileFinder * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00483134
    ADD ESP,0x824                       ; 00483137
    POP EBX                             ; 0048313d
    RET                                 ; 0048313e
    LEA EAX,[ESP + 0x420]               ; 0048313f
        ;   Label: LAB_0048313f
    PUSH EAX                            ; 00483146
    LEA EAX,[ESP + 0x524]               ; 00483147
    PUSH EAX                            ; 0048314e
    PUSH 0x0                            ; 0048314f
    PUSH 0x0                            ; 00483151
    LEA EAX,[ESP + 0x10]                ; 00483153
    PUSH EAX                            ; 00483157
    CALL engine_dosio.cpp_splitPath_FUN_00465e50 ; 00483158
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048315d
    LEA EAX,[ESP + 0x420]               ; 00483160
    PUSH EAX                            ; 00483167
    LEA EAX,[ESP + 0x524]               ; 00483168
    PUSH EAX                            ; 0048316f
    LEA EAX,[ESP + 0x628]               ; 00483170
    PUSH EAX                            ; 00483177
    LEA EAX,[ESP + 0x82c]               ; 00483178
    PUSH EAX                            ; 0048317f
    LEA EAX,[ESP + 0x124]               ; 00483180
    PUSH EAX                            ; 00483187
    CALL engine_dosio.cpp_makePath_FUN_00465e80 ; 00483188
        ;   XREF to: 00465e80 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_makePath_FUN_00465e80(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0048318d
    LEA EAX,[ESP + 0x114]               ; 00483190
    PUSH EAX                            ; 00483197
    LEA EAX,[ESP + 0x21c]               ; 00483198
    PUSH EAX                            ; 0048319f
    CALL engine_dosio.cpp_getFullPath_FUN_00465ff0 ; 004831a0
        ;   XREF to: 00465ff0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFullPath_FUN_00465ff0(char * output_path, char * input_path)
    ADD ESP,0x8                         ; 004831a5
    LEA EAX,[ESP + 0x218]               ; 004831a8
    PUSH EAX                            ; 004831af
    PUSH EBX                            ; 004831b0
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 004831b1
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004831b6
    JMP 0x0048310c                      ; 004831b9
        ;   XREF to: 0048310c (UNCONDITIONAL_JUMP)  ; LAB_0048310c

