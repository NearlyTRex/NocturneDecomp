; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl crt_string_c_memmove_FUN_005ba1f0(void *dest,void *src,SIZE_T n)
;
; Parameters:
; void *           Stack[0x4]:4   dest
; void *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   n
;
; XREF[44]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0048e7e0 at 0048eaa2
;   core_event.cpp_CEventList_process_FUN_004893d0 at 004894ae
;   core_event.cpp_CEventList_setActorVariable_FUN_00491680 at 00491826
;   core_event.cpp_CEventList_setCounter_FUN_00491400 at 0049145e
;   core_event.cpp_CEventList_setTimerEvent_FUN_00491280 at 0049133e
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90 at 00491bc9
;   core_event.cpp_FUN_00489670 at 0048992e
;   core_event.cpp_FUN_00490f80 at 00491098
;   core_event.cpp_FUN_00491110 at 00491228
;   core_event.cpp_FUN_00492360 at 004923f0
;   ... and 34 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005ba1f0
        ;   Label: crt_string.c_memmove_FUN_005ba1f0
    PUSH EDI                            ; 005ba1f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ba1f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ba1f6
    MOV ECX,dword ptr [ESP + 0x14]      ; 005ba1fa
    CMP ESI,EAX                         ; 005ba1fe
    JZ 0x005ba23f                       ; 005ba200
        ;   XREF to: 005ba23f (CONDITIONAL_JUMP)  ; LAB_005ba23f
    JNC 0x005ba22b                      ; 005ba202
        ;   XREF to: 005ba22b (CONDITIONAL_JUMP)  ; LAB_005ba22b
    LEA EDX,[ESI + ECX*0x1]             ; 005ba204
    CMP EDX,EAX                         ; 005ba207
    JBE 0x005ba22b                      ; 005ba209
        ;   XREF to: 005ba22b (CONDITIONAL_JUMP)  ; LAB_005ba22b
    LEA EDI,[EAX + ECX*0x1]             ; 005ba20b
    LEA ESI,[EDX + -0x1]                ; 005ba20e
    DEC EDI                             ; 005ba211
    MOV DX,DS                           ; 005ba212
    PUSH ES                             ; 005ba214
    MOV ES,DX                           ; 005ba215
    STD                                 ; 005ba217
    DEC ESI                             ; 005ba218
    DEC EDI                             ; 005ba219
    SHR ECX,0x1                         ; 005ba21a
    MOVSW.REP ES:EDI,ESI                ; 005ba21c
    ADC ECX,ECX                         ; 005ba21f
    INC ESI                             ; 005ba221
    INC EDI                             ; 005ba222
    MOVSB.REP ES:EDI,ESI                ; 005ba223
    POP ES                              ; 005ba226
    CLD                                 ; 005ba227
    POP EDI                             ; 005ba228
    POP ESI                             ; 005ba229
    RET                                 ; 005ba22a
    MOV DX,DS                           ; 005ba22b
        ;   Label: LAB_005ba22b
    MOV EDI,EAX                         ; 005ba22d
    PUSH ES                             ; 005ba22f
    MOV ES,DX                           ; 005ba230
    PUSH ECX                            ; 005ba232
    SHR ECX,0x2                         ; 005ba233
    MOVSD.REP ES:EDI,ESI                ; 005ba236
    POP ECX                             ; 005ba238
    AND ECX,0x3                         ; 005ba239
    MOVSB.REP ES:EDI,ESI                ; 005ba23c
    POP ES                              ; 005ba23e
    POP EDI                             ; 005ba23f
        ;   Label: LAB_005ba23f
    POP ESI                             ; 005ba240
    RET                                 ; 005ba241

