; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_string_c_memmove_FUN_005a54c0(void *dest,void *src,SIZE_T n)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   n
;
; XREF[44]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 00492202
;   core_event.cpp_CEventList_process_FUN_0048c020 at 0048c0de
;   core_event.cpp_CEventList_setActorVariable_FUN_00494e70 at 00495016
;   core_event.cpp_CEventList_setCounter_FUN_00494bf0 at 00494c4e
;   core_event.cpp_CEventList_setTimerEvent_FUN_00494a70 at 00494b2e
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 at 004953b9
;   core_event.cpp_FUN_0048c2e0 at 0048c607
;   core_event.cpp_FUN_004946f0 at 0049486a
;   core_event.cpp_FUN_004948e0 at 00494a5a
;   core_event.cpp_FUN_00495b4e at 00495be0
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005a54c0
        ;   Label: crt_string.c_memmove_FUN_005a54c0
    PUSH EDI                            ; 005a54c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a54c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005a54c6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a54ca
    CMP ESI,EAX                         ; 005a54ce
    JZ 0x005a550f                       ; 005a54d0
        ;   XREF to: 005a550f (CONDITIONAL_JUMP)  ; LAB_005a550f
    JNC 0x005a54fb                      ; 005a54d2
        ;   XREF to: 005a54fb (CONDITIONAL_JUMP)  ; LAB_005a54fb
    LEA EDX,[ESI + ECX*0x1]             ; 005a54d4
    CMP EDX,EAX                         ; 005a54d7
    JBE 0x005a54fb                      ; 005a54d9
        ;   XREF to: 005a54fb (CONDITIONAL_JUMP)  ; LAB_005a54fb
    LEA EDI,[EAX + ECX*0x1]             ; 005a54db
    LEA ESI,[EDX + -0x1]                ; 005a54de
    DEC EDI                             ; 005a54e1
    MOV DX,DS                           ; 005a54e2
    PUSH ES                             ; 005a54e4
    MOV ES,DX                           ; 005a54e5
    STD                                 ; 005a54e7
    DEC ESI                             ; 005a54e8
    DEC EDI                             ; 005a54e9
    SHR ECX,0x1                         ; 005a54ea
    MOVSW.REP ES:EDI,ESI                ; 005a54ec
    ADC ECX,ECX                         ; 005a54ef
    INC ESI                             ; 005a54f1
    INC EDI                             ; 005a54f2
    MOVSB.REP ES:EDI,ESI                ; 005a54f3
    POP ES                              ; 005a54f6
    CLD                                 ; 005a54f7
    POP EDI                             ; 005a54f8
    POP ESI                             ; 005a54f9
    RET                                 ; 005a54fa
    MOV DX,DS                           ; 005a54fb
        ;   Label: LAB_005a54fb
    MOV EDI,EAX                         ; 005a54fd
    PUSH ES                             ; 005a54ff
    MOV ES,DX                           ; 005a5500
    PUSH ECX                            ; 005a5502
    SHR ECX,0x2                         ; 005a5503
    MOVSD.REP ES:EDI,ESI                ; 005a5506
    POP ECX                             ; 005a5508
    AND ECX,0x3                         ; 005a5509
    MOVSB.REP ES:EDI,ESI                ; 005a550c
    POP ES                              ; 005a550e
    POP EDI                             ; 005a550f
        ;   Label: LAB_005a550f
    POP ESI                             ; 005a5510
    RET                                 ; 005a5511

