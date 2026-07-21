; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_CEventList_resolveVariable_FUN_0047dba0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e2b7
;
; Referenced Globals:
;   undefined4 DAT_00580227
;
; Called Functions:
;   core_event.cpp_CEventList_findGameFlag_FUN_00480860
;   core_event.cpp_CEventList_findPersistentEvent_FUN_00480810
;   core_event.cpp_CEventList_findTimer_FUN_004808b0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dba0
        ;   Label: core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
    PUSH ESI                            ; 0047dba1
    PUSH EDI                            ; 0047dba2
    PUSH EBP                            ; 0047dba3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047dba4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0047dba8
    PUSH 0x580227                       ; 0047dbac | DAT_00580227
    PUSH EBP                            ; 0047dbb1
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047dbb2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047dbb7
    TEST EAX,EAX                        ; 0047dbba
    JZ 0x0047dbfa                       ; 0047dbbc
        ;   XREF to: 0047dbfa (CONDITIONAL_JUMP)  ; LAB_0047dbfa
    MOV EDX,dword ptr [EDI + 0xc84]     ; 0047dbbe
    XOR ESI,ESI                         ; 0047dbc4
    TEST EDX,EDX                        ; 0047dbc6
    JLE 0x0047dbec                      ; 0047dbc8
        ;   XREF to: 0047dbec (CONDITIONAL_JUMP)  ; LAB_0047dbec
    LEA EBX,[EDI + 0xc88]               ; 0047dbca
    PUSH EBP                            ; 0047dbd0
        ;   Label: LAB_0047dbd0
    PUSH EBX                            ; 0047dbd1
    CALL crt_string.c__stricmp_FUN_00564520 ; 0047dbd2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0047dbd7
    TEST EAX,EAX                        ; 0047dbda
    JZ 0x0047dbfa                       ; 0047dbdc
        ;   XREF to: 0047dbfa (CONDITIONAL_JUMP)  ; LAB_0047dbfa
    INC ESI                             ; 0047dbde
    MOV ECX,dword ptr [EDI + 0xc84]     ; 0047dbdf
    ADD EBX,0x20                        ; 0047dbe5
    CMP ESI,ECX                         ; 0047dbe8
    JL 0x0047dbd0                       ; 0047dbea
        ;   XREF to: 0047dbd0 (CONDITIONAL_JUMP)  ; LAB_0047dbd0
    PUSH EBP                            ; 0047dbec
        ;   Label: LAB_0047dbec
    PUSH EDI                            ; 0047dbed
    CALL core_event.cpp_CEventList_findPersistentEvent_FUN_00480810 ; 0047dbee
        ;   XREF to: 00480810 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findPersistentEvent_FUN_00480810()
    ADD ESP,0x8                         ; 0047dbf3
    TEST EAX,EAX                        ; 0047dbf6
    JL 0x0047dc04                       ; 0047dbf8
        ;   XREF to: 0047dc04 (CONDITIONAL_JUMP)  ; LAB_0047dc04
    MOV EAX,0x1                         ; 0047dbfa
        ;   Label: LAB_0047dbfa
    POP EBP                             ; 0047dbff
    POP EDI                             ; 0047dc00
    POP ESI                             ; 0047dc01
    POP EBX                             ; 0047dc02
    RET                                 ; 0047dc03
    PUSH EBP                            ; 0047dc04
        ;   Label: LAB_0047dc04
    PUSH EDI                            ; 0047dc05
    CALL core_event.cpp_CEventList_findGameFlag_FUN_00480860 ; 0047dc06
        ;   XREF to: 00480860 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findGameFlag_FUN_00480860()
    ADD ESP,0x8                         ; 0047dc0b
    TEST EAX,EAX                        ; 0047dc0e
    JGE 0x0047dbfa                      ; 0047dc10
        ;   XREF to: 0047dbfa (CONDITIONAL_JUMP)  ; LAB_0047dbfa
    PUSH EBP                            ; 0047dc12
    PUSH EDI                            ; 0047dc13
    CALL core_event.cpp_CEventList_findTimer_FUN_004808b0 ; 0047dc14
        ;   XREF to: 004808b0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findTimer_FUN_004808b0()
    ADD ESP,0x8                         ; 0047dc19
    TEST EAX,EAX                        ; 0047dc1c
    JGE 0x0047dbfa                      ; 0047dc1e
        ;   XREF to: 0047dbfa (CONDITIONAL_JUMP)  ; LAB_0047dbfa
    XOR EAX,EAX                         ; 0047dc20
    POP EBP                             ; 0047dc22
    POP EDI                             ; 0047dc23
    POP ESI                             ; 0047dc24
    POP EBX                             ; 0047dc25
    RET                                 ; 0047dc26

