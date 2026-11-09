; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_004811b0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_CStrList_sort_FUN_004811d0 at 00481211
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004811b0
        ;   Label: shape_edittool.cpp_FUN_004811b0
    MOV EDX,dword ptr [EAX]             ; 004811b4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004811b6
    PUSH EDX                            ; 004811ba
    MOV ECX,dword ptr [EAX]             ; 004811bb
    PUSH ECX                            ; 004811bd
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004811be
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004811c3
    RET                                 ; 004811c6

