; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0(char * a, char * b)
;
; Parameters:
; char *           Stack[0x4]:4   a
; char *           Stack[0x8]:4   b
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_sort_FUN_004a2f00 at 004a2f41
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004a2ee0
        ;   Label: shape_edittool.cpp_CStrList_qsortByString_FUN_004a2ee0
    MOV EDX,dword ptr [EAX]             ; 004a2ee4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2ee6
    PUSH EDX                            ; 004a2eea
    MOV ECX,dword ptr [EAX]             ; 004a2eeb
    PUSH ECX                            ; 004a2eed
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004a2eee
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a2ef3
    RET                                 ; 004a2ef6

