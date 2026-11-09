; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00482500(CStrList *this_ptr,char *search_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_string
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00482c70 at 00482d65
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482500
        ;   Label: shape_edittool.cpp_CStrList_findString_FUN_00482500
    PUSH ESI                            ; 00482501
    PUSH EDI                            ; 00482502
    MOV ESI,dword ptr [ESP + 0x10]      ; 00482503
    MOV EDI,dword ptr [ESP + 0x14]      ; 00482507
    MOV EDX,dword ptr [ESI]             ; 0048250b
    XOR EBX,EBX                         ; 0048250d
    TEST EDX,EDX                        ; 0048250f
    JLE 0x00482530                      ; 00482511
        ;   XREF to: 00482530 (CONDITIONAL_JUMP)  ; LAB_00482530
    PUSH EDI                            ; 00482513
        ;   Label: LAB_00482513
    PUSH EBX                            ; 00482514
    PUSH ESI                            ; 00482515
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 00482516
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048251b
    PUSH EAX                            ; 0048251e
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0048251f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00482524
    TEST EAX,EAX                        ; 00482527
    JZ 0x00482539                       ; 00482529
        ;   XREF to: 00482539 (CONDITIONAL_JUMP)  ; LAB_00482539
    INC EBX                             ; 0048252b
    CMP EBX,dword ptr [ESI]             ; 0048252c
    JL 0x00482513                       ; 0048252e
        ;   XREF to: 00482513 (CONDITIONAL_JUMP)  ; LAB_00482513
    MOV EAX,0xffffffff                  ; 00482530
        ;   Label: LAB_00482530
    POP EDI                             ; 00482535
    POP ESI                             ; 00482536
    POP EBX                             ; 00482537
    RET                                 ; 00482538
    MOV EAX,EBX                         ; 00482539
        ;   Label: LAB_00482539
    POP EDI                             ; 0048253b
    POP ESI                             ; 0048253c
    POP EBX                             ; 0048253d
    RET                                 ; 0048253e

