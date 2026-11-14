; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_event_cpp_CEventList_getActorByVarName_FUN_004aa1d0(CEventList *this_ptr,char *name)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[2]:
;   core_event.cpp_resolveActorByName_FUN_004a1370 at 004a138f
;   core_script.cpp_getActor_FUN_005433c0 at 00543432
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.actor_count
;
; Called Functions:
;   core_event.cpp_CEventList_findActorVariable_FUN_004aa240
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa1d0
        ;   Label: core_event.cpp_CEventList_getActorByVarName_FUN_004aa1d0
    PUSH ESI                            ; 004aa1d1
    PUSH EDI                            ; 004aa1d2
    PUSH EBP                            ; 004aa1d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004aa1d4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004aa1d8
    PUSH EDX                            ; 004aa1dc
    PUSH EDI                            ; 004aa1dd
    CALL core_event.cpp_CEventList_findActorVariable_FUN_004aa240 ; 004aa1de
        ;   XREF to: 004aa240 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findActorVariable_FUN_004aa240(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004aa1e3
    TEST EAX,EAX                        ; 004aa1e6
    JL 0x004aa20c                       ; 004aa1e8
        ;   XREF to: 004aa20c (CONDITIONAL_JUMP)  ; LAB_004aa20c
    ADD EAX,EAX                         ; 004aa1ea
    MOV EBX,EAX                         ; 004aa1ec
    SHL EAX,0x4                         ; 004aa1ee
    ADD EDI,0x37da                      ; 004aa1f1
    SUB EAX,EBX                         ; 004aa1f7
    XOR ESI,ESI                         ; 004aa1f9
    ADD EDI,EAX                         ; 004aa1fb
    XOR EBX,EBX                         ; 004aa1fd
    MOV EAX,[0x00622c18]                ; 004aa1ff | g_CDemonSetPtr
        ;   Label: LAB_004aa1ff
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 004aa204 | g_CDemonSetInstance.actor_count
    JL 0x004aa219                       ; 004aa20a
        ;   XREF to: 004aa219 (CONDITIONAL_JUMP)  ; LAB_004aa219
    XOR EAX,EAX                         ; 004aa20c
        ;   Label: LAB_004aa20c
    POP EBP                             ; 004aa20e
    POP EDI                             ; 004aa20f
    POP ESI                             ; 004aa210
    POP EBX                             ; 004aa211
    RET                                 ; 004aa212
    INC ESI                             ; 004aa213
        ;   Label: LAB_004aa213
    ADD EBX,0x4                         ; 004aa214
    JMP 0x004aa1ff                      ; 004aa217
        ;   XREF to: 004aa1ff (UNCONDITIONAL_JUMP)  ; LAB_004aa1ff
    PUSH EDI                            ; 004aa219
        ;   Label: LAB_004aa219
    MOV EBP,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004aa21a
    PUSH EBP                            ; 004aa221
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004aa222
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004aa227
    TEST EAX,EAX                        ; 004aa22a
    JNZ 0x004aa213                      ; 004aa22c
        ;   XREF to: 004aa213 (CONDITIONAL_JUMP)  ; LAB_004aa213
    MOV EAX,[0x00622c18]                ; 004aa22e | g_CDemonSetPtr
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 004aa233
    POP EBP                             ; 004aa23a
    POP EDI                             ; 004aa23b
    POP ESI                             ; 004aa23c
    POP EBX                             ; 004aa23d
    RET                                 ; 004aa23e

