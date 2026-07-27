; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_string_c_memmove_FUN_00566170(undefined4 *param_1,undefined4 *param_2,uint param_3)
;
;
; XREF[45]:
;   FUN_00571fd1 at 00572193
;   FUN_00573afc at 00573c5c
;   FUN_00573ca0 at 00573d4a
;   FUN_00574264 at 005743bf
;   FUN_00574404 at 005744b3
;   cockpit_drawsurf.cpp_FUN_0045d310 at 0045d57a
;   core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420 at 00480538
;   core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0 at 004803f8
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e398
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b0b7
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00566170
        ;   Label: crt_string.c_memmove_FUN_00566170
    PUSH EDI                            ; 00566171
    MOV EAX,dword ptr [ESP + 0xc]       ; 00566172
    MOV ESI,dword ptr [ESP + 0x10]      ; 00566176
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056617a
    CMP ESI,EAX                         ; 0056617e
    JZ 0x005661bf                       ; 00566180
        ;   XREF to: 005661bf (CONDITIONAL_JUMP)  ; LAB_005661bf
    JNC 0x005661ab                      ; 00566182
        ;   XREF to: 005661ab (CONDITIONAL_JUMP)  ; LAB_005661ab
    LEA EDX,[ESI + ECX*0x1]             ; 00566184
    CMP EDX,EAX                         ; 00566187
    JBE 0x005661ab                      ; 00566189
        ;   XREF to: 005661ab (CONDITIONAL_JUMP)  ; LAB_005661ab
    LEA EDI,[EAX + ECX*0x1]             ; 0056618b
    LEA ESI,[EDX + -0x1]                ; 0056618e
    DEC EDI                             ; 00566191
    MOV DX,DS                           ; 00566192
    PUSH ES                             ; 00566194
    MOV ES,DX                           ; 00566195
    STD                                 ; 00566197
    DEC ESI                             ; 00566198
    DEC EDI                             ; 00566199
    SHR ECX,0x1                         ; 0056619a
    MOVSW.REP ES:EDI,ESI                ; 0056619c
    ADC ECX,ECX                         ; 0056619f
    INC ESI                             ; 005661a1
    INC EDI                             ; 005661a2
    MOVSB.REP ES:EDI,ESI                ; 005661a3
    POP ES                              ; 005661a6
    CLD                                 ; 005661a7
    POP EDI                             ; 005661a8
    POP ESI                             ; 005661a9
    RET                                 ; 005661aa
    MOV DX,DS                           ; 005661ab
        ;   Label: LAB_005661ab
    MOV EDI,EAX                         ; 005661ad
    PUSH ES                             ; 005661af
    MOV ES,DX                           ; 005661b0
    PUSH ECX                            ; 005661b2
    SHR ECX,0x2                         ; 005661b3
    MOVSD.REP ES:EDI,ESI                ; 005661b6
    POP ECX                             ; 005661b8
    AND ECX,0x3                         ; 005661b9
    MOVSB.REP ES:EDI,ESI                ; 005661bc
    POP ES                              ; 005661be
    POP EDI                             ; 005661bf
        ;   Label: LAB_005661bf
    POP ESI                             ; 005661c0
    RET                                 ; 005661c1

