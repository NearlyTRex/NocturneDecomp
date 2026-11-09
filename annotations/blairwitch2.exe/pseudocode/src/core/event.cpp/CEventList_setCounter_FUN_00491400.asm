; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setCounter_FUN_00491400(CEventList *this_ptr,char *name,int value)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   value
;
; XREF[2]:
;   core_event.cpp_FUN_00489670 at 0048b8ba
;   core_script.cpp_FUN_00522350 at 00525688
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005d4e0b
;   TerminatedCString s_CEventList_setCounter_to_005d4e1d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_event.cpp_CEventList_findCounter_FUN_00491630
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491400
        ;   Label: core_event.cpp_CEventList_setCounter_FUN_00491400
    PUSH ESI                            ; 00491401
    PUSH EDI                            ; 00491402
    PUSH EBP                            ; 00491403
    MOV EBX,dword ptr [ESP + 0x14]      ; 00491404
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00491408
    MOV EDX,dword ptr [ESP + 0x18]      ; 0049140c
    PUSH EDX                            ; 00491410
    PUSH EBX                            ; 00491411
    CALL core_event.cpp_CEventList_findCounter_FUN_00491630 ; 00491412
        ;   XREF to: 00491630 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findCounter_FUN_00491630(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 00491417
    ADD ESP,0x8                         ; 00491419
    TEST EAX,EAX                        ; 0049141c
    JL 0x0049148e                       ; 0049141e
        ;   XREF to: 0049148e (CONDITIONAL_JUMP)  ; LAB_0049148e
    LEA EDI,[EAX*0x4 + 0x0]             ; 00491420
    TEST EBP,EBP                        ; 00491427
    JZ 0x00491437                       ; 00491429
        ;   XREF to: 00491437 (CONDITIONAL_JUMP)  ; LAB_00491437
    MOV dword ptr [EDI + EBX*0x1 + 0x34c0],EBP ; 0049142b
    POP EBP                             ; 00491432
        ;   Label: LAB_00491432
    POP EDI                             ; 00491433
    POP ESI                             ; 00491434
    POP EBX                             ; 00491435
    RET                                 ; 00491436
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00491437
        ;   Label: LAB_00491437
    DEC EAX                             ; 0049143d
    MOV dword ptr [EBX + 0x337c],EAX    ; 0049143e
    SUB EAX,ESI                         ; 00491444
    SHL EAX,0x5                         ; 00491446
    PUSH EAX                            ; 00491449
    MOV EAX,ESI                         ; 0049144a
    SHL EAX,0x5                         ; 0049144c
    LEA EBP,[EBX + 0x3380]              ; 0049144f
    LEA EDX,[EAX + 0x20]                ; 00491455
    ADD EDX,EBP                         ; 00491458
    PUSH EDX                            ; 0049145a
    ADD EAX,EBP                         ; 0049145b
    PUSH EAX                            ; 0049145d
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0049145e
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x337c]    ; 00491463
    SUB EAX,ESI                         ; 00491469
    ADD ESP,0xc                         ; 0049146b
    SHL EAX,0x2                         ; 0049146e
    ADD EBX,0x34c0                      ; 00491471
    PUSH EAX                            ; 00491477
    LEA EAX,[EDI + 0x4]                 ; 00491478
    ADD EAX,EBX                         ; 0049147b
    PUSH EAX                            ; 0049147d
    ADD EBX,EDI                         ; 0049147e
    PUSH EBX                            ; 00491480
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 00491481
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00491486
    POP EBP                             ; 00491489
    POP EDI                             ; 0049148a
    POP ESI                             ; 0049148b
    POP EBX                             ; 0049148c
    RET                                 ; 0049148d
    TEST EBP,EBP                        ; 0049148e
        ;   Label: LAB_0049148e
    JZ 0x00491432                       ; 00491490
        ;   XREF to: 00491432 (CONDITIONAL_JUMP)  ; LAB_00491432
    CMP dword ptr [EBX + 0x337c],0xa    ; 00491492
    JL 0x004914be                       ; 00491499
        ;   XREF to: 004914be (CONDITIONAL_JUMP)  ; LAB_004914be
    MOV ESI,0x5d4e0b                    ; 0049149b | = "..\\core\\event.cpp"
    MOV EDI,0xdc4                       ; 004914a0
    PUSH 0x5d4e1d                       ; 004914a5 | = "CEventList::setCounter - too many cou..."
    MOV dword ptr [0x01d046a0],ESI      ; 004914aa | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004914b0 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004914b6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004914bb
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004914be
        ;   Label: LAB_004914be
    LEA EDI,[EBX + 0x3380]              ; 004914c4
    SHL EAX,0x5                         ; 004914ca
    MOV ESI,dword ptr [ESP + 0x18]      ; 004914cd
    ADD EDI,EAX                         ; 004914d1
    PUSH EDI                            ; 004914d3
    MOV AL,byte ptr [ESI]               ; 004914d4
        ;   Label: LAB_004914d4
    MOV byte ptr [EDI],AL               ; 004914d6
    CMP AL,0x0                          ; 004914d8
    JZ 0x004914ec                       ; 004914da
        ;   XREF to: 004914ec (CONDITIONAL_JUMP)  ; LAB_004914ec
    MOV AL,byte ptr [ESI + 0x1]         ; 004914dc
    ADD ESI,0x2                         ; 004914df
    MOV byte ptr [EDI + 0x1],AL         ; 004914e2
    ADD EDI,0x2                         ; 004914e5
    CMP AL,0x0                          ; 004914e8
    JNZ 0x004914d4                      ; 004914ea
        ;   XREF to: 004914d4 (CONDITIONAL_JUMP)  ; LAB_004914d4
    POP EDI                             ; 004914ec
        ;   Label: LAB_004914ec
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004914ed
    MOV dword ptr [EBX + EAX*0x4 + 0x34c0],EBP ; 004914f3
    INC dword ptr [EBX + 0x337c]        ; 004914fa
    POP EBP                             ; 00491500
    POP EDI                             ; 00491501
    POP ESI                             ; 00491502
    POP EBX                             ; 00491503
    RET                                 ; 00491504

