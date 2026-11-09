; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_findActorVariable_FUN_004918d0(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_CEventList_getActorByVarName_FUN_00491860 at 0049186e
;   core_event.cpp_CEventList_setActorVariable_FUN_00491680 at 004916cd
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004918d0
        ;   Label: core_event.cpp_CEventList_findActorVariable_FUN_004918d0
    PUSH ESI                            ; 004918d1
    PUSH EDI                            ; 004918d2
    PUSH EBP                            ; 004918d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004918d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004918d8
    MOV EDX,dword ptr [EDI + 0x34e8]    ; 004918dc
    XOR EBX,EBX                         ; 004918e2
    TEST EDX,EDX                        ; 004918e4
    JLE 0x0049190a                      ; 004918e6
        ;   XREF to: 0049190a (CONDITIONAL_JUMP)  ; LAB_0049190a
    LEA ESI,[EDI + 0x34ec]              ; 004918e8
    PUSH EBP                            ; 004918ee
        ;   Label: LAB_004918ee
    PUSH ESI                            ; 004918ef
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004918f0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004918f5
    TEST EAX,EAX                        ; 004918f8
    JZ 0x00491914                       ; 004918fa
        ;   XREF to: 00491914 (CONDITIONAL_JUMP)  ; LAB_00491914
    INC EBX                             ; 004918fc
    MOV ECX,dword ptr [EDI + 0x34e8]    ; 004918fd
    ADD ESI,0x1e                        ; 00491903
    CMP EBX,ECX                         ; 00491906
    JL 0x004918ee                       ; 00491908
        ;   XREF to: 004918ee (CONDITIONAL_JUMP)  ; LAB_004918ee
    MOV EAX,0xffffffff                  ; 0049190a
        ;   Label: LAB_0049190a
    POP EBP                             ; 0049190f
    POP EDI                             ; 00491910
    POP ESI                             ; 00491911
    POP EBX                             ; 00491912
    RET                                 ; 00491913
    MOV EAX,EBX                         ; 00491914
        ;   Label: LAB_00491914
    POP EBP                             ; 00491916
    POP EDI                             ; 00491917
    POP ESI                             ; 00491918
    POP EBX                             ; 00491919
    RET                                 ; 0049191a

