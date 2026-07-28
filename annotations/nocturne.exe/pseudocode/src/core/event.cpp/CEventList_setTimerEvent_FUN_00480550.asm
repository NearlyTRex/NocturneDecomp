; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_00480550(CEventList *this_ptr,char *name,float duration)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; float            Stack[0xc]:4   duration
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047d0ce
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00580ab0
;   TerminatedCString s_CEventList_setTimerEvent_00580ac2
;   TerminatedCString s_core_event_cpp_00580afa
;   TerminatedCString s_CEventList_setTimerEvent_00580b0c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_event.cpp_CEventList_findTimer_FUN_004808b0
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480550
        ;   Label: core_event.cpp_CEventList_setTimerEvent_FUN_00480550
    PUSH ESI                            ; 00480551
    PUSH EDI                            ; 00480552
    PUSH EBP                            ; 00480553
    MOV EBP,ESP                         ; 00480554
    SUB ESP,0xc                         ; 00480556
    AND ESP,0xfffffff8                  ; 00480559
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048055c
    FLD float ptr [EBP + 0x1c]          ; 0048055f
    FLDZ                                ; 00480562
    FXCH                                ; 00480564
    FSTP double ptr [ESP]               ; 00480566
    FCOMP double ptr [ESP]              ; 00480569
    FNSTSW AX                           ; 0048056c
    SAHF                                ; 0048056e
    JBE 0x004805a2                      ; 0048056f
        ;   XREF to: 004805a2 (CONDITIONAL_JUMP)  ; LAB_004805a2
    MOV ESI,dword ptr [ESP + 0x4]       ; 00480571
    PUSH ESI                            ; 00480575
    MOV EDI,dword ptr [ESP + 0x4]       ; 00480576
    PUSH EDI                            ; 0048057a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048057b
    PUSH EAX                            ; 0048057e
    MOV EDX,0x580ab0                    ; 0048057f | = "..\\core\\event.cpp"
    MOV ECX,0xa5d                       ; 00480584
    PUSH 0x580ac2                       ; 00480589 | = "CEventList::setTimerEvent - invalid d..."
    MOV dword ptr [0x01cc4800],EDX      ; 0048058e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00480594 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0048059a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x10                        ; 0048059f
    MOV EDX,dword ptr [EBP + 0x18]      ; 004805a2
        ;   Label: LAB_004805a2
    PUSH EDX                            ; 004805a5
    PUSH EBX                            ; 004805a6
    CALL core_event.cpp_CEventList_findTimer_FUN_004808b0 ; 004805a7
        ;   XREF to: 004808b0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004808b0(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004805ac
    ADD ESP,0x8                         ; 004805ae
    TEST EAX,EAX                        ; 004805b1
    JL 0x00480640                       ; 004805b3
        ;   XREF to: 00480640 (CONDITIONAL_JUMP)  ; LAB_00480640
    FLD float ptr [EBP + 0x1c]          ; 004805b9
    FLDZ                                ; 004805bc
    LEA EDI,[EAX*0x4 + 0x0]             ; 004805be
    FCOMPP                              ; 004805c5
    FNSTSW AX                           ; 004805c7
    SAHF                                ; 004805c9
    JNC 0x004805dd                      ; 004805ca
        ;   XREF to: 004805dd (CONDITIONAL_JUMP)  ; LAB_004805dd
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004805cc
    MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX ; 004805cf
    MOV ESP,EBP                         ; 004805d6
        ;   Label: LAB_004805d6
    POP EBP                             ; 004805d8
    POP EDI                             ; 004805d9
    POP ESI                             ; 004805da
    POP EBX                             ; 004805db
    RET                                 ; 004805dc
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004805dd
        ;   Label: LAB_004805dd
    DEC EDX                             ; 004805e3
    MOV EAX,EDX                         ; 004805e4
    MOV dword ptr [EBX + 0x3210],EDX    ; 004805e6
    SUB EAX,ESI                         ; 004805ec
    MOV EDX,ESI                         ; 004805ee
    SHL EAX,0x5                         ; 004805f0
    SHL EDX,0x5                         ; 004805f3
    PUSH EAX                            ; 004805f6
    LEA EAX,[EDX + 0x20]                ; 004805f7
    MOV dword ptr [ESP + 0xc],EAX       ; 004805fa
    MOV ECX,dword ptr [ESP + 0xc]       ; 004805fe
    LEA EAX,[EBX + 0x3214]              ; 00480602
    ADD ECX,EAX                         ; 00480608
    PUSH ECX                            ; 0048060a
    ADD EAX,EDX                         ; 0048060b
    PUSH EAX                            ; 0048060d
    CALL crt_string.c_memmove_FUN_00566170 ; 0048060e
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00480613
    SUB EAX,ESI                         ; 00480619
    ADD ESP,0xc                         ; 0048061b
    SHL EAX,0x2                         ; 0048061e
    ADD EBX,0x3354                      ; 00480621
    PUSH EAX                            ; 00480627
    LEA EAX,[EDI + 0x4]                 ; 00480628
    ADD EAX,EBX                         ; 0048062b
    PUSH EAX                            ; 0048062d
    ADD EBX,EDI                         ; 0048062e
    PUSH EBX                            ; 00480630
    CALL crt_string.c_memmove_FUN_00566170 ; 00480631
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00480636
    MOV ESP,EBP                         ; 00480639
    POP EBP                             ; 0048063b
    POP EDI                             ; 0048063c
    POP ESI                             ; 0048063d
    POP EBX                             ; 0048063e
    RET                                 ; 0048063f
    FLD float ptr [EBP + 0x1c]          ; 00480640
        ;   Label: LAB_00480640
    FLDZ                                ; 00480643
    FCOMPP                              ; 00480645
    FNSTSW AX                           ; 00480647
    SAHF                                ; 00480649
    JNC 0x004805d6                      ; 0048064a
        ;   XREF to: 004805d6 (CONDITIONAL_JUMP)  ; LAB_004805d6
    CMP dword ptr [EBX + 0x3210],0xa    ; 0048064c
    JL 0x00480678                       ; 00480653
        ;   XREF to: 00480678 (CONDITIONAL_JUMP)  ; LAB_00480678
    MOV ESI,0x580afa                    ; 00480655 | = "..\\core\\event.cpp"
    MOV EDI,0xa7e                       ; 0048065a
    PUSH 0x580b0c                       ; 0048065f | = "CEventList::setTimerEvent - too many ..."
    MOV dword ptr [0x01cc4800],ESI      ; 00480664 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0048066a | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00480670
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00480675
    MOV EDI,dword ptr [EBX + 0x3210]    ; 00480678
        ;   Label: LAB_00480678
    LEA EAX,[EBX + 0x3214]              ; 0048067e
    SHL EDI,0x5                         ; 00480684
    MOV ESI,dword ptr [EBP + 0x18]      ; 00480687
    ADD EDI,EAX                         ; 0048068a
    PUSH EDI                            ; 0048068c
    MOV AL,byte ptr [ESI]               ; 0048068d
        ;   Label: LAB_0048068d
    MOV byte ptr [EDI],AL               ; 0048068f
    CMP AL,0x0                          ; 00480691
    JZ 0x004806a5                       ; 00480693
        ;   XREF to: 004806a5 (CONDITIONAL_JUMP)  ; LAB_004806a5
    MOV AL,byte ptr [ESI + 0x1]         ; 00480695
    ADD ESI,0x2                         ; 00480698
    MOV byte ptr [EDI + 0x1],AL         ; 0048069b
    ADD EDI,0x2                         ; 0048069e
    CMP AL,0x0                          ; 004806a1
    JNZ 0x0048068d                      ; 004806a3
        ;   XREF to: 0048068d (CONDITIONAL_JUMP)  ; LAB_0048068d
    POP EDI                             ; 004806a5
        ;   Label: LAB_004806a5
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004806a6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004806ac
    MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX ; 004806af
    INC dword ptr [EBX + 0x3210]        ; 004806b6
    MOV ESP,EBP                         ; 004806bc
    POP EBP                             ; 004806be
    POP EDI                             ; 004806bf
    POP ESI                             ; 004806c0
    POP EBX                             ; 004806c1
    RET                                 ; 004806c2

