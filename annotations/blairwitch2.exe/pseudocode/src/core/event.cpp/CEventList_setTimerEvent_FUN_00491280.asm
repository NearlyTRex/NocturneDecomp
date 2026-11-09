; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setTimerEvent_FUN_00491280(CEventList *this_ptr,char *name,float duration)
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
;   core_event.cpp_FUN_00489670 at 0048d5bb
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4d82
;   TerminatedCString s_CEventList_setTimerEvent_005d4d94
;   TerminatedCString s_core_event_cpp_005d4dcc
;   TerminatedCString s_CEventList_setTimerEvent_005d4dde
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_event.cpp_CEventList_findTimer_FUN_004915e0
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491280
        ;   Label: core_event.cpp_CEventList_setTimerEvent_FUN_00491280
    PUSH ESI                            ; 00491281
    PUSH EDI                            ; 00491282
    PUSH EBP                            ; 00491283
    MOV EBP,ESP                         ; 00491284
    SUB ESP,0xc                         ; 00491286
    AND ESP,0xfffffff8                  ; 00491289
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049128c
    FLD float ptr [EBP + 0x1c]          ; 0049128f
    FLDZ                                ; 00491292
    FXCH                                ; 00491294
    FSTP double ptr [ESP]               ; 00491296
    FCOMP double ptr [ESP]              ; 00491299
    FNSTSW AX                           ; 0049129c
    SAHF                                ; 0049129e
    JBE 0x004912d2                      ; 0049129f
        ;   XREF to: 004912d2 (CONDITIONAL_JUMP)  ; LAB_004912d2
    MOV ESI,dword ptr [ESP + 0x4]       ; 004912a1
    PUSH ESI                            ; 004912a5
    MOV EDI,dword ptr [ESP + 0x4]       ; 004912a6
    PUSH EDI                            ; 004912aa
    MOV EAX,dword ptr [EBP + 0x18]      ; 004912ab
    PUSH EAX                            ; 004912ae
    MOV EDX,0x5d4d82                    ; 004912af | = "..\\core\\event.cpp"
    MOV ECX,0xd6f                       ; 004912b4
    PUSH 0x5d4d94                       ; 004912b9 | = "CEventList::setTimerEvent - invalid d..."
    MOV dword ptr [0x01d046a0],EDX      ; 004912be | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004912c4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004912ca
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x10                        ; 004912cf
    MOV EDX,dword ptr [EBP + 0x18]      ; 004912d2
        ;   Label: LAB_004912d2
    PUSH EDX                            ; 004912d5
    PUSH EBX                            ; 004912d6
    CALL core_event.cpp_CEventList_findTimer_FUN_004915e0 ; 004912d7
        ;   XREF to: 004915e0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findTimer_FUN_004915e0(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 004912dc
    ADD ESP,0x8                         ; 004912de
    TEST EAX,EAX                        ; 004912e1
    JL 0x00491370                       ; 004912e3
        ;   XREF to: 00491370 (CONDITIONAL_JUMP)  ; LAB_00491370
    FLD float ptr [EBP + 0x1c]          ; 004912e9
    FLDZ                                ; 004912ec
    LEA EDI,[EAX*0x4 + 0x0]             ; 004912ee
    FCOMPP                              ; 004912f5
    FNSTSW AX                           ; 004912f7
    SAHF                                ; 004912f9
    JNC 0x0049130d                      ; 004912fa
        ;   XREF to: 0049130d (CONDITIONAL_JUMP)  ; LAB_0049130d
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004912fc
    MOV dword ptr [EDI + EBX*0x1 + 0x3354],EAX ; 004912ff
    MOV ESP,EBP                         ; 00491306
        ;   Label: LAB_00491306
    POP EBP                             ; 00491308
    POP EDI                             ; 00491309
    POP ESI                             ; 0049130a
    POP EBX                             ; 0049130b
    RET                                 ; 0049130c
    MOV EDX,dword ptr [EBX + 0x3210]    ; 0049130d
        ;   Label: LAB_0049130d
    DEC EDX                             ; 00491313
    MOV EAX,EDX                         ; 00491314
    MOV dword ptr [EBX + 0x3210],EDX    ; 00491316
    SUB EAX,ESI                         ; 0049131c
    MOV EDX,ESI                         ; 0049131e
    SHL EAX,0x5                         ; 00491320
    SHL EDX,0x5                         ; 00491323
    PUSH EAX                            ; 00491326
    LEA EAX,[EDX + 0x20]                ; 00491327
    MOV dword ptr [ESP + 0xc],EAX       ; 0049132a
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049132e
    LEA EAX,[EBX + 0x3214]              ; 00491332
    ADD ECX,EAX                         ; 00491338
    PUSH ECX                            ; 0049133a
    ADD EAX,EDX                         ; 0049133b
    PUSH EAX                            ; 0049133d
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0049133e
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x3210]    ; 00491343
    SUB EAX,ESI                         ; 00491349
    ADD ESP,0xc                         ; 0049134b
    SHL EAX,0x2                         ; 0049134e
    ADD EBX,0x3354                      ; 00491351
    PUSH EAX                            ; 00491357
    LEA EAX,[EDI + 0x4]                 ; 00491358
    ADD EAX,EBX                         ; 0049135b
    PUSH EAX                            ; 0049135d
    ADD EBX,EDI                         ; 0049135e
    PUSH EBX                            ; 00491360
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491361
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00491366
    MOV ESP,EBP                         ; 00491369
    POP EBP                             ; 0049136b
    POP EDI                             ; 0049136c
    POP ESI                             ; 0049136d
    POP EBX                             ; 0049136e
    RET                                 ; 0049136f
    FLD float ptr [EBP + 0x1c]          ; 00491370
        ;   Label: LAB_00491370
    FLDZ                                ; 00491373
    FCOMPP                              ; 00491375
    FNSTSW AX                           ; 00491377
    SAHF                                ; 00491379
    JNC 0x00491306                      ; 0049137a
        ;   XREF to: 00491306 (CONDITIONAL_JUMP)  ; LAB_00491306
    CMP dword ptr [EBX + 0x3210],0xa    ; 0049137c
    JL 0x004913a8                       ; 00491383
        ;   XREF to: 004913a8 (CONDITIONAL_JUMP)  ; LAB_004913a8
    MOV ESI,0x5d4dcc                    ; 00491385 | = "..\\core\\event.cpp"
    MOV EDI,0xd90                       ; 0049138a
    PUSH 0x5d4dde                       ; 0049138f | = "CEventList::setTimerEvent - too many ..."
    MOV dword ptr [0x01d046a0],ESI      ; 00491394 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0049139a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004913a0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004913a5
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004913a8
        ;   Label: LAB_004913a8
    LEA EAX,[EBX + 0x3214]              ; 004913ae
    SHL EDI,0x5                         ; 004913b4
    MOV ESI,dword ptr [EBP + 0x18]      ; 004913b7
    ADD EDI,EAX                         ; 004913ba
    PUSH EDI                            ; 004913bc
    MOV AL,byte ptr [ESI]               ; 004913bd
        ;   Label: LAB_004913bd
    MOV byte ptr [EDI],AL               ; 004913bf
    CMP AL,0x0                          ; 004913c1
    JZ 0x004913d5                       ; 004913c3
        ;   XREF to: 004913d5 (CONDITIONAL_JUMP)  ; LAB_004913d5
    MOV AL,byte ptr [ESI + 0x1]         ; 004913c5
    ADD ESI,0x2                         ; 004913c8
    MOV byte ptr [EDI + 0x1],AL         ; 004913cb
    ADD EDI,0x2                         ; 004913ce
    CMP AL,0x0                          ; 004913d1
    JNZ 0x004913bd                      ; 004913d3
        ;   XREF to: 004913bd (CONDITIONAL_JUMP)  ; LAB_004913bd
    POP EDI                             ; 004913d5
        ;   Label: LAB_004913d5
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004913d6
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004913dc
    MOV dword ptr [EBX + EAX*0x4 + 0x3354],EDX ; 004913df
    INC dword ptr [EBX + 0x3210]        ; 004913e6
    MOV ESP,EBP                         ; 004913ec
    POP EBP                             ; 004913ee
    POP EDI                             ; 004913ef
    POP ESI                             ; 004913f0
    POP EBX                             ; 004913f1
    RET                                 ; 004913f2

