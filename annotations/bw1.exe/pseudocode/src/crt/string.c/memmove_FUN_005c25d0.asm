; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_string_c_memmove_FUN_005c25d0(void *dest,void *src,SIZE_T n)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   n
;
; XREF[45]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a7392
;   core_event.cpp_CEventList_setActorVariable_FUN_004a9ff0 at 004aa196
;   core_event.cpp_CEventList_setCounter_FUN_004a9d70 at 004a9dce
;   core_event.cpp_CEventList_setTimerEvent_FUN_004a9bf0 at 004a9cae
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004aa400 at 004aa539
;   core_event.cpp_FUN_004a15c0 at 004a161b
;   core_event.cpp_FUN_004a1630 at 004a171d
;   core_event.cpp_FUN_004a1a40 at 004a1afe
;   core_event.cpp_FUN_004a1d00 at 004a2027
;   core_event.cpp_FUN_004a9870 at 004a99ea
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005c25d0
        ;   Label: crt_string.c_memmove_FUN_005c25d0
    PUSH EDI                            ; 005c25d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c25d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c25d6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c25da
    CMP ESI,EAX                         ; 005c25de
    JZ 0x005c261f                       ; 005c25e0
        ;   XREF to: 005c261f (CONDITIONAL_JUMP)  ; LAB_005c261f
    JNC 0x005c260b                      ; 005c25e2
        ;   XREF to: 005c260b (CONDITIONAL_JUMP)  ; LAB_005c260b
    LEA EDX,[ESI + ECX*0x1]             ; 005c25e4
    CMP EDX,EAX                         ; 005c25e7
    JBE 0x005c260b                      ; 005c25e9
        ;   XREF to: 005c260b (CONDITIONAL_JUMP)  ; LAB_005c260b
    LEA EDI,[EAX + ECX*0x1]             ; 005c25eb
    LEA ESI,[EDX + -0x1]                ; 005c25ee
    DEC EDI                             ; 005c25f1
    MOV DX,DS                           ; 005c25f2
    PUSH ES                             ; 005c25f4
    MOV ES,DX                           ; 005c25f5
    STD                                 ; 005c25f7
    DEC ESI                             ; 005c25f8
    DEC EDI                             ; 005c25f9
    SHR ECX,0x1                         ; 005c25fa
    MOVSW.REP ES:EDI,ESI                ; 005c25fc
    ADC ECX,ECX                         ; 005c25ff
    INC ESI                             ; 005c2601
    INC EDI                             ; 005c2602
    MOVSB.REP ES:EDI,ESI                ; 005c2603
    POP ES                              ; 005c2606
    CLD                                 ; 005c2607
    POP EDI                             ; 005c2608
    POP ESI                             ; 005c2609
    RET                                 ; 005c260a
    MOV DX,DS                           ; 005c260b
        ;   Label: LAB_005c260b
    MOV EDI,EAX                         ; 005c260d
    PUSH ES                             ; 005c260f
    MOV ES,DX                           ; 005c2610
    PUSH ECX                            ; 005c2612
    SHR ECX,0x2                         ; 005c2613
    MOVSD.REP ES:EDI,ESI                ; 005c2616
    POP ECX                             ; 005c2618
    AND ECX,0x3                         ; 005c2619
    MOVSB.REP ES:EDI,ESI                ; 005c261c
    POP ES                              ; 005c261e
    POP EDI                             ; 005c261f
        ;   Label: LAB_005c261f
    POP ESI                             ; 005c2620
    RET                                 ; 005c2621

