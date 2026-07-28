; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00473ff0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_sort_FUN_00474010 at 00474051
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00473ff0
        ;   Label: shape_edittool.cpp_FUN_00473ff0
    MOV EDX,dword ptr [EAX]             ; 00473ff4
    MOV EAX,dword ptr [ESP + 0x4]       ; 00473ff6
    PUSH EDX                            ; 00473ffa
    MOV ECX,dword ptr [EAX]             ; 00473ffb
    PUSH ECX                            ; 00473ffd
    CALL crt_string.c__stricmp_FUN_00564520 ; 00473ffe
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 00474003
    RET                                 ; 00474006

