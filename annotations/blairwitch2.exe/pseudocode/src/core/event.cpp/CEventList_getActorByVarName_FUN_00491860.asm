; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_00491860(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_resolveActorByName_FUN_00488d00 at 00488d1f
;   core_script.cpp_getActor_FUN_00521290 at 00521302
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;
; Called Functions:
;   core_event.cpp_CEventList_findActorVariable_FUN_004918d0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491860
        ;   Label: core_event.cpp_CEventList_getActorByVarName_FUN_00491860
    PUSH ESI                            ; 00491861
    PUSH EDI                            ; 00491862
    PUSH EBP                            ; 00491863
    MOV EDI,dword ptr [ESP + 0x14]      ; 00491864
    MOV EDX,dword ptr [ESP + 0x18]      ; 00491868
    PUSH EDX                            ; 0049186c
    PUSH EDI                            ; 0049186d
    CALL core_event.cpp_CEventList_findActorVariable_FUN_004918d0 ; 0049186e
        ;   XREF to: 004918d0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findActorVariable_FUN_004918d0(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 00491873
    TEST EAX,EAX                        ; 00491876
    JL 0x0049189c                       ; 00491878
        ;   XREF to: 0049189c (CONDITIONAL_JUMP)  ; LAB_0049189c
    ADD EAX,EAX                         ; 0049187a
    MOV EBX,EAX                         ; 0049187c
    SHL EAX,0x4                         ; 0049187e
    ADD EDI,0x37da                      ; 00491881
    SUB EAX,EBX                         ; 00491887
    XOR ESI,ESI                         ; 00491889
    ADD EDI,EAX                         ; 0049188b
    XOR EBX,EBX                         ; 0049188d
    MOV EAX,[0x0061b5a8]                ; 0049188f | g_CDemonSetPtr
        ;   Label: LAB_0049188f
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 00491894 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004918a9                       ; 0049189a
        ;   XREF to: 004918a9 (CONDITIONAL_JUMP)  ; LAB_004918a9
    XOR EAX,EAX                         ; 0049189c
        ;   Label: LAB_0049189c
    POP EBP                             ; 0049189e
    POP EDI                             ; 0049189f
    POP ESI                             ; 004918a0
    POP EBX                             ; 004918a1
    RET                                 ; 004918a2
    INC ESI                             ; 004918a3
        ;   Label: LAB_004918a3
    ADD EBX,0x4                         ; 004918a4
    JMP 0x0049188f                      ; 004918a7
        ;   XREF to: 0049188f (UNCONDITIONAL_JUMP)  ; LAB_0049188f
    PUSH EDI                            ; 004918a9
        ;   Label: LAB_004918a9
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004918aa
    PUSH EBP                            ; 004918b1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004918b2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004918b7
    TEST EAX,EAX                        ; 004918ba
    JNZ 0x004918a3                      ; 004918bc
        ;   XREF to: 004918a3 (CONDITIONAL_JUMP)  ; LAB_004918a3
    MOV EAX,[0x0061b5a8]                ; 004918be | g_CDemonSetPtr
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004918c3
    POP EBP                             ; 004918ca
    POP EDI                             ; 004918cb
    POP ESI                             ; 004918cc
    POP EBX                             ; 004918cd
    RET                                 ; 004918ce

