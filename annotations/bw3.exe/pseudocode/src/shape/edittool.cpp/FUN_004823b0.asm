; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004823b0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_sort_FUN_004823d0 at 00482411
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004823b0
        ;   Label: shape_edittool.cpp_FUN_004823b0
    MOV EDX,dword ptr [EAX]             ; 004823b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004823b6
    PUSH EDX                            ; 004823ba
    MOV ECX,dword ptr [EAX]             ; 004823bb
    PUSH ECX                            ; 004823bd
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004823be
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004823c3
    RET                                 ; 004823c6

