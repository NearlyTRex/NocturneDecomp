; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CActorPropertyList_addRuleList_FUN_0040e5a0(CActorPropertyList *this_ptr,char *property_name,CRuleList *data_ptr,int max_count)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   property_name
; CRuleList *      Stack[0xc]:4   data_ptr
; int              Stack[0x10]:4   max_count
; Local Variables:
; undefined1       Stack[-0xd8]:1  local_d8
;
; XREF[2]:
;   core_door.cpp_CDoor_getPropertyList_FUN_00481320 at 004813ee
;   core_lever.cpp_CLever_getPropertyList_FUN_00505240 at 00505333
;
; Referenced Globals:
;   TerminatedCString s_s_d_0061446b
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e5a0
        ;   Label: core_actor.cpp_CActorPropertyList_addRuleList_FUN_0040e5a0
    PUSH ESI                            ; 0040e5a1
    PUSH EDI                            ; 0040e5a2
    PUSH EBP                            ; 0040e5a3
    SUB ESP,0xc8                        ; 0040e5a4
    MOV EBP,dword ptr [ESP + 0xe0]      ; 0040e5aa
    MOV EDI,dword ptr [ESP + 0xe4]      ; 0040e5b1
    MOV ESI,dword ptr [ESP + 0xe8]      ; 0040e5b8
    TEST ESI,ESI                        ; 0040e5bf
    JL 0x0040e62b                       ; 0040e5c1
        ;   XREF to: 0040e62b (CONDITIONAL_JUMP)  ; LAB_0040e62b
    MOV EDX,dword ptr [EDI]             ; 0040e5c3
        ;   Label: LAB_0040e5c3
    CMP ESI,EDX                         ; 0040e5c5
    JL 0x0040e5cc                       ; 0040e5c7
        ;   XREF to: 0040e5cc (CONDITIONAL_JUMP)  ; LAB_0040e5cc
    LEA ESI,[EDX + 0x1]                 ; 0040e5c9
    CMP ESI,0x5                         ; 0040e5cc
        ;   Label: LAB_0040e5cc
    JLE 0x0040e5d6                      ; 0040e5cf
        ;   XREF to: 0040e5d6 (CONDITIONAL_JUMP)  ; LAB_0040e5d6
    MOV ESI,0x5                         ; 0040e5d1
    XOR EBX,EBX                         ; 0040e5d6
        ;   Label: LAB_0040e5d6
    TEST ESI,ESI                        ; 0040e5d8
    JLE 0x0040e620                      ; 0040e5da
        ;   XREF to: 0040e620 (CONDITIONAL_JUMP)  ; LAB_0040e620
    LEA EAX,[EBX + 0x1]                 ; 0040e5dc
        ;   Label: LAB_0040e5dc
    PUSH EAX                            ; 0040e5df
    PUSH EBP                            ; 0040e5e0
    PUSH 0x61446b                       ; 0040e5e1 | = "%s %d"
    LEA EAX,[ESP + 0xc]                 ; 0040e5e6
    PUSH EAX                            ; 0040e5ea
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040e5eb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0040e5f0
    PUSH 0x0                            ; 0040e5f3
    PUSH EDI                            ; 0040e5f5
    LEA EAX,[ESP + 0x8]                 ; 0040e5f6
    PUSH EAX                            ; 0040e5fa
    PUSH 0x10                           ; 0040e5fb
    MOV ECX,dword ptr [ESP + 0xec]      ; 0040e5fd
    PUSH ECX                            ; 0040e604
    CALL core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0 ; 0040e605
        ;   XREF to: 0040e6c0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, EActorPropertyType property_type, char * property_name, void * data_ptr, ...)
    MOV dword ptr [EAX + 0x5c],EBX      ; 0040e60a
    INC EBX                             ; 0040e60d
    ADD ESP,0x14                        ; 0040e60e
    CMP EBX,ESI                         ; 0040e611
    JL 0x0040e5dc                       ; 0040e613
        ;   XREF to: 0040e5dc (CONDITIONAL_JUMP)  ; LAB_0040e5dc
    LEA EAX,[EAX]                       ; 0040e615
    LEA EDX,[EDX]                       ; 0040e61b
    MOV EBX,EBX                         ; 0040e61e
    ADD ESP,0xc8                        ; 0040e620
        ;   Label: LAB_0040e620
    POP EBP                             ; 0040e626
    POP EDI                             ; 0040e627
    POP ESI                             ; 0040e628
    POP EBX                             ; 0040e629
    RET                                 ; 0040e62a
    MOV ESI,0x5                         ; 0040e62b
        ;   Label: LAB_0040e62b
    JMP 0x0040e5c3                      ; 0040e630
        ;   XREF to: 0040e5c3 (UNCONDITIONAL_JUMP)  ; LAB_0040e5c3

