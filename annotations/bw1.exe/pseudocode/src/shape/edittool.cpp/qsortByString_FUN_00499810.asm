; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_qsortByString_FUN_00499810(char *a,char *b)
;
; Parameters:
; char *           Stack[0x4]:4   a
; char *           Stack[0x8]:4   b
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_sort_FUN_00499830 at 00499871
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00499810
        ;   Label: shape_edittool.cpp_qsortByString_FUN_00499810
    MOV EDX,dword ptr [EAX]             ; 00499814
    MOV EAX,dword ptr [ESP + 0x4]       ; 00499816
    PUSH EDX                            ; 0049981a
    MOV ECX,dword ptr [EAX]             ; 0049981b
    PUSH ECX                            ; 0049981d
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0049981e
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00499823
    RET                                 ; 00499826

