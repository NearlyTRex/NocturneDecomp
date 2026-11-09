; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findString_FUN_00481300(CStrList *this_ptr,char *search_string)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_string
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_00481a70 at 00481b65
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481300
        ;   Label: shape_edittool.cpp_CStrList_findString_FUN_00481300
    PUSH ESI                            ; 00481301
    PUSH EDI                            ; 00481302
    MOV ESI,dword ptr [ESP + 0x10]      ; 00481303
    MOV EDI,dword ptr [ESP + 0x14]      ; 00481307
    MOV EDX,dword ptr [ESI]             ; 0048130b
    XOR EBX,EBX                         ; 0048130d
    TEST EDX,EDX                        ; 0048130f
    JLE 0x00481330                      ; 00481311
        ;   XREF to: 00481330 (CONDITIONAL_JUMP)  ; LAB_00481330
    PUSH EDI                            ; 00481313
        ;   Label: LAB_00481313
    PUSH EBX                            ; 00481314
    PUSH ESI                            ; 00481315
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00481316
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0048131b
    PUSH EAX                            ; 0048131e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0048131f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00481324
    TEST EAX,EAX                        ; 00481327
    JZ 0x00481339                       ; 00481329
        ;   XREF to: 00481339 (CONDITIONAL_JUMP)  ; LAB_00481339
    INC EBX                             ; 0048132b
    CMP EBX,dword ptr [ESI]             ; 0048132c
    JL 0x00481313                       ; 0048132e
        ;   XREF to: 00481313 (CONDITIONAL_JUMP)  ; LAB_00481313
    MOV EAX,0xffffffff                  ; 00481330
        ;   Label: LAB_00481330
    POP EDI                             ; 00481335
    POP ESI                             ; 00481336
    POP EBX                             ; 00481337
    RET                                 ; 00481338
    MOV EAX,EBX                         ; 00481339
        ;   Label: LAB_00481339
    POP EDI                             ; 0048133b
    POP ESI                             ; 0048133c
    POP EBX                             ; 0048133d
    RET                                 ; 0048133e

