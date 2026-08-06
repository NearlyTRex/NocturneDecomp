; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_sort_FUN_00474010(CStrList *this_ptr,int sort_type,int sort_order)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sort_type
; int              Stack[0xc]:4   sort_order
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_sort_FUN_004761a0 at 004761bf
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ecb1
;   TerminatedCString s_CStrList_sort_invalid_ra_0057ecc7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdlib.c__qsort_FUN_00563db8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474010
        ;   Label: shape_edittool.cpp_CStrList_sort_FUN_00474010
    PUSH ESI                            ; 00474011
    MOV EBX,dword ptr [ESP + 0x10]      ; 00474012
    MOV ESI,dword ptr [ESP + 0x14]      ; 00474016
    CMP EBX,ESI                         ; 0047401a
    JGE 0x00474071                      ; 0047401c
        ;   XREF to: 00474071 (CONDITIONAL_JUMP)  ; LAB_00474071
    TEST EBX,EBX                        ; 0047401e
    JL 0x0047402a                       ; 00474020
        ;   XREF to: 0047402a (CONDITIONAL_JUMP)  ; LAB_0047402a
    MOV EAX,dword ptr [ESP + 0xc]       ; 00474022
    CMP ESI,dword ptr [EAX]             ; 00474026
    JL 0x0047404f                       ; 00474028
        ;   XREF to: 0047404f (CONDITIONAL_JUMP)  ; LAB_0047404f
    PUSH EDI                            ; 0047402a
        ;   Label: LAB_0047402a
    MOV ECX,0x57ecb1                    ; 0047402b | = "..\\shape\\edittool.cpp"
    MOV EDI,0xa32                       ; 00474030
    PUSH 0x57ecc7                       ; 00474035 | = "CStrList::sort - invalid range!"
    MOV dword ptr [0x01cc4800],ECX      ; 0047403a | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00474040 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00474046
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0047404b
    POP EDI                             ; 0047404e
    MOV EAX,ESI                         ; 0047404f
        ;   Label: LAB_0047404f
    PUSH 0x473ff0                       ; 00474051
    SUB EAX,EBX                         ; 00474056
    PUSH 0x4                            ; 00474058
    INC EAX                             ; 0047405a
    PUSH EAX                            ; 0047405b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047405c
    SHL EBX,0x2                         ; 00474060
    MOV EAX,dword ptr [EAX + 0x8]       ; 00474063
    ADD EAX,EBX                         ; 00474066
    PUSH EAX                            ; 00474068
    CALL crt_stdlib.c__qsort_FUN_00563db8 ; 00474069
        ;   XREF to: 00563db8 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__qsort_FUN_00563db8(void * base, SIZE_T num, SIZE_T size, QSORT_COMPARATOR compar)
    ADD ESP,0x10                        ; 0047406e
    POP ESI                             ; 00474071
        ;   Label: LAB_00474071
    POP EBX                             ; 00474072
    RET                                 ; 00474073

