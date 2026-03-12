; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_004b05a0(CEventList *this_ptr,char *name,float duration)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; float            Stack[0xc]:4   duration
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  uStack_1c
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad13e
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625b32
;   TerminatedCString s_CEventList_setTimerEvent_00625b44
;   TerminatedCString s_core_event_cpp_00625b7c
;   TerminatedCString s_CEventList_setTimerEvent_00625b8e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_findTimer_FUN_004b0900
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b05a0
        ;   Label: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
    PUSH ESI                            ; 004b05a1
    PUSH EDI                            ; 004b05a2
    PUSH EBP                            ; 004b05a3
    MOV EBP,ESP                         ; 004b05a4
    SUB ESP,0xc                         ; 004b05a6
    AND ESP,0xfffffff8                  ; 004b05a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b05ac
    FLD float ptr [EBP + 0x1c]          ; 004b05af
    FLDZ                                ; 004b05b2
    FXCH                                ; 004b05b4
    FSTP double ptr [ESP]               ; 004b05b6
    FCOMP double ptr [ESP]              ; 004b05b9
    FNSTSW AX                           ; 004b05bc
    SAHF                                ; 004b05be
    JBE 0x004b05f2                      ; 004b05bf
        ;   XREF to: 004b05f2 (CONDITIONAL_JUMP)  ; LAB_004b05f2
    MOV ESI,dword ptr [ESP + 0x4]       ; 004b05c1
    PUSH ESI                            ; 004b05c5
    MOV EDI,dword ptr [ESP + 0x4]       ; 004b05c6
    PUSH EDI                            ; 004b05ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b05cb
    PUSH EAX                            ; 004b05ce
    MOV EDX,0x625b32                    ; 004b05cf | = "..\\core\\event.cpp"
    MOV ECX,0xa5d                       ; 004b05d4
    PUSH 0x625b44                       ; 004b05d9 | = "CEventList::setTimerEvent - invalid d..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004b05de | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b05e4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b05ea
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 004b05ef
    MOV EDX,dword ptr [EBP + 0x18]      ; 004b05f2
        ;   Label: LAB_004b05f2
    PUSH EDX                            ; 004b05f5
    PUSH EBX                            ; 004b05f6
    CALL core_event.cpp_CEventList_findTimer_FUN_004b0900 ; 004b05f7
        ;   XREF to: 004b0900 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004b0900(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004b05fc
    ADD ESP,0x8                         ; 004b05fe
    TEST EAX,EAX                        ; 004b0601
    JL 0x004b0690                       ; 004b0603
        ;   XREF to: 004b0690 (CONDITIONAL_JUMP)  ; LAB_004b0690
    FLD float ptr [EBP + 0x1c]          ; 004b0609
    FLDZ                                ; 004b060c
    LEA EDI,[EAX*0x4 + 0x0]             ; 004b060e
    FCOMPP                              ; 004b0615
    FNSTSW AX                           ; 004b0617
    SAHF                                ; 004b0619
    JNC 0x004b062d                      ; 004b061a
        ;   XREF to: 004b062d (CONDITIONAL_JUMP)  ; LAB_004b062d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004b061c
    MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX ; 004b061f
    MOV ESP,EBP                         ; 004b0626
        ;   Label: LAB_004b0626
    POP EBP                             ; 004b0628
    POP EDI                             ; 004b0629
    POP ESI                             ; 004b062a
    POP EBX                             ; 004b062b
    RET                                 ; 004b062c
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004b062d
        ;   Label: LAB_004b062d
    DEC EDX                             ; 004b0633
    MOV EAX,EDX                         ; 004b0634
    MOV dword ptr [EBX + 0x3210],EDX    ; 004b0636
    SUB EAX,ESI                         ; 004b063c
    MOV EDX,ESI                         ; 004b063e
    SHL EAX,0x5                         ; 004b0640
    SHL EDX,0x5                         ; 004b0643
    PUSH EAX                            ; 004b0646
    LEA EAX,[EDX + 0x20]                ; 004b0647
    MOV dword ptr [ESP + 0xc],EAX       ; 004b064a
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b064e
    LEA EAX,[EBX + 0x3214]              ; 004b0652
    ADD ECX,EAX                         ; 004b0658
    PUSH ECX                            ; 004b065a
    ADD EAX,EDX                         ; 004b065b
    PUSH EAX                            ; 004b065d
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b065e
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004b0663
    SUB EAX,ESI                         ; 004b0669
    ADD ESP,0xc                         ; 004b066b
    SHL EAX,0x2                         ; 004b066e
    ADD EBX,0x3354                      ; 004b0671
    PUSH EAX                            ; 004b0677
    LEA EAX,[EDI + 0x4]                 ; 004b0678
    ADD EAX,EBX                         ; 004b067b
    PUSH EAX                            ; 004b067d
    ADD EBX,EDI                         ; 004b067e
    PUSH EBX                            ; 004b0680
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 004b0681
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 004b0686
    MOV ESP,EBP                         ; 004b0689
    POP EBP                             ; 004b068b
    POP EDI                             ; 004b068c
    POP ESI                             ; 004b068d
    POP EBX                             ; 004b068e
    RET                                 ; 004b068f
    FLD float ptr [EBP + 0x1c]          ; 004b0690
        ;   Label: LAB_004b0690
    FLDZ                                ; 004b0693
    FCOMPP                              ; 004b0695
    FNSTSW AX                           ; 004b0697
    SAHF                                ; 004b0699
    JNC 0x004b0626                      ; 004b069a
        ;   XREF to: 004b0626 (CONDITIONAL_JUMP)  ; LAB_004b0626
    CMP dword ptr [EBX + 0x3210],0xa    ; 004b069c
    JL 0x004b06c8                       ; 004b06a3
        ;   XREF to: 004b06c8 (CONDITIONAL_JUMP)  ; LAB_004b06c8
    MOV ESI,0x625b7c                    ; 004b06a5 | = "..\\core\\event.cpp"
    MOV EDI,0xa7e                       ; 004b06aa
    PUSH 0x625b8e                       ; 004b06af | = "CEventList::setTimerEvent - too many ..."
    MOV dword ptr [0x02f0ca48],ESI      ; 004b06b4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b06ba | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b06c0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b06c5
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004b06c8
        ;   Label: LAB_004b06c8
    LEA EAX,[EBX + 0x3214]              ; 004b06ce
    SHL EDI,0x5                         ; 004b06d4
    MOV ESI,dword ptr [EBP + 0x18]      ; 004b06d7
    ADD EDI,EAX                         ; 004b06da
    PUSH EDI                            ; 004b06dc
    MOV AL,byte ptr [ESI]               ; 004b06dd
        ;   Label: LAB_004b06dd
    MOV byte ptr [EDI],AL               ; 004b06df
    CMP AL,0x0                          ; 004b06e1
    JZ 0x004b06f5                       ; 004b06e3
        ;   XREF to: 004b06f5 (CONDITIONAL_JUMP)  ; LAB_004b06f5
    MOV AL,byte ptr [ESI + 0x1]         ; 004b06e5
    ADD ESI,0x2                         ; 004b06e8
    MOV byte ptr [EDI + 0x1],AL         ; 004b06eb
    ADD EDI,0x2                         ; 004b06ee
    CMP AL,0x0                          ; 004b06f1
    JNZ 0x004b06dd                      ; 004b06f3
        ;   XREF to: 004b06dd (CONDITIONAL_JUMP)  ; LAB_004b06dd
    POP EDI                             ; 004b06f5
        ;   Label: LAB_004b06f5
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004b06f6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004b06fc
    MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX ; 004b06ff
    INC dword ptr [EBX + 0x3210]        ; 004b0706
    MOV ESP,EBP                         ; 004b070c
    POP EBP                             ; 004b070e
    POP EDI                             ; 004b070f
    POP ESI                             ; 004b0710
    POP EBX                             ; 004b0711
    RET                                 ; 004b0712

