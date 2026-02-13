; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl crt_string_c_memmove_FUN_005fe5e0(void *dest,void *src,SIZE_T n)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   n
;
; XREF[78]:
;   cockpit_drawsurf.cpp_CDrawSurface_fillPoly_FUN_00488cd0 at 00488f3a
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040ff10
;   core_actor.cpp_trimActorName_FUN_004087b0 at 0040880b
;   core_dmodel.cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0 at 0047bebd
;   core_dmodel.cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0 at 0047bccc
;   core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470 at 004b0588
;   core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330 at 004b0448
;   core_event.cpp_CEventList_evaluateAtom_FUN_004ae140 at 004ae520
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ad900
;   core_event.cpp_CEventList_process_FUN_004aaac0 at 004aabcb
;   ... and 68 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005fe5e0
        ;   Label: crt_string.c_memmove_FUN_005fe5e0
    PUSH EDI                            ; 005fe5e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fe5e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005fe5e6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005fe5ea
    CMP ESI,EAX                         ; 005fe5ee
    JZ 0x005fe62f                       ; 005fe5f0
        ;   XREF to: 005fe62f (CONDITIONAL_JUMP)  ; LAB_005fe62f
    JNC 0x005fe61b                      ; 005fe5f2
        ;   XREF to: 005fe61b (CONDITIONAL_JUMP)  ; LAB_005fe61b
    LEA EDX,[ESI + ECX*0x1]             ; 005fe5f4
    CMP EDX,EAX                         ; 005fe5f7
    JBE 0x005fe61b                      ; 005fe5f9
        ;   XREF to: 005fe61b (CONDITIONAL_JUMP)  ; LAB_005fe61b
    LEA EDI,[EAX + ECX*0x1]             ; 005fe5fb
    LEA ESI,[EDX + -0x1]                ; 005fe5fe
    DEC EDI                             ; 005fe601
    MOV DX,DS                           ; 005fe602
    PUSH ES                             ; 005fe604
    MOV ES,DX                           ; 005fe605
    STD                                 ; 005fe607
    DEC ESI                             ; 005fe608
    DEC EDI                             ; 005fe609
    SHR ECX,0x1                         ; 005fe60a
    MOVSW.REP ES:EDI,ESI                ; 005fe60c
    ADC ECX,ECX                         ; 005fe60f
    INC ESI                             ; 005fe611
    INC EDI                             ; 005fe612
    MOVSB.REP ES:EDI,ESI                ; 005fe613
    POP ES                              ; 005fe616
    CLD                                 ; 005fe617
    POP EDI                             ; 005fe618
    POP ESI                             ; 005fe619
    RET                                 ; 005fe61a
    MOV DX,DS                           ; 005fe61b
        ;   Label: LAB_005fe61b
    MOV EDI,EAX                         ; 005fe61d
    PUSH ES                             ; 005fe61f
    MOV ES,DX                           ; 005fe620
    PUSH ECX                            ; 005fe622
    SHR ECX,0x2                         ; 005fe623
    MOVSD.REP ES:EDI,ESI                ; 005fe626
    POP ECX                             ; 005fe628
    AND ECX,0x3                         ; 005fe629
    MOVSB.REP ES:EDI,ESI                ; 005fe62c
    POP ES                              ; 005fe62e
    POP EDI                             ; 005fe62f
        ;   Label: LAB_005fe62f
    POP ESI                             ; 005fe630
    RET                                 ; 005fe631

