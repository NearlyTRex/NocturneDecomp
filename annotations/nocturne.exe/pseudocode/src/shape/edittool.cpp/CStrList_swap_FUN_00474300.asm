; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_swap_FUN_00474300(int *param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_swap_FUN_00476200 at 0047621f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ed51
;   TerminatedCString s_CStrList_swap_invalid_in_0057ed67
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474300
        ;   Label: shape_edittool.cpp_CStrList_swap_FUN_00474300
    PUSH ESI                            ; 00474301
    PUSH EDI                            ; 00474302
    PUSH EBP                            ; 00474303
    MOV EBX,dword ptr [ESP + 0x14]      ; 00474304
    MOV EDI,dword ptr [ESP + 0x18]      ; 00474308
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0047430c
    TEST EDI,EDI                        ; 00474310
    JL 0x0047431a                       ; 00474312
        ;   XREF to: 0047431a (CONDITIONAL_JUMP)  ; LAB_0047431a
    MOV EDX,dword ptr [EBX]             ; 00474314
    CMP EDI,EDX                         ; 00474316
    JL 0x00474345                       ; 00474318
        ;   XREF to: 00474345 (CONDITIONAL_JUMP)  ; LAB_00474345
    MOV EBP,0x57ed51                    ; 0047431a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047431a
    MOV EAX,0xab6                       ; 0047431f
    PUSH 0x57ed67                       ; 00474324 | = "CStrList::swap - invalid indices"
    MOV dword ptr [0x01cc4800],EBP      ; 00474329 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0047432f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00474334
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00474339
    CMP EDI,ESI                         ; 0047433c
    JNZ 0x00474356                      ; 0047433e
        ;   XREF to: 00474356 (CONDITIONAL_JUMP)  ; LAB_00474356
    POP EBP                             ; 00474340
    POP EDI                             ; 00474341
    POP ESI                             ; 00474342
    POP EBX                             ; 00474343
    RET                                 ; 00474344
    TEST ESI,ESI                        ; 00474345
        ;   Label: LAB_00474345
    JL 0x0047431a                       ; 00474347
        ;   XREF to: 0047431a (CONDITIONAL_JUMP)  ; LAB_0047431a
    CMP ESI,EDX                         ; 00474349
    JGE 0x0047431a                      ; 0047434b
        ;   XREF to: 0047431a (CONDITIONAL_JUMP)  ; LAB_0047431a
    CMP EDI,ESI                         ; 0047434d
    JNZ 0x00474356                      ; 0047434f
        ;   XREF to: 00474356 (CONDITIONAL_JUMP)  ; LAB_00474356
    POP EBP                             ; 00474351
    POP EDI                             ; 00474352
    POP ESI                             ; 00474353
    POP EBX                             ; 00474354
    RET                                 ; 00474355
    LEA EAX,[EDI*0x4 + 0x0]             ; 00474356
        ;   Label: LAB_00474356
    MOV ECX,dword ptr [EBX + 0x8]       ; 0047435d
    ADD EAX,ECX                         ; 00474360
    MOV ECX,dword ptr [ECX + ESI*0x4]   ; 00474362
    MOV EDI,dword ptr [EAX]             ; 00474365
    MOV dword ptr [EAX],ECX             ; 00474367
    MOV EAX,dword ptr [EBX + 0x8]       ; 00474369
    MOV dword ptr [EAX + ESI*0x4],EDI   ; 0047436c
    POP EBP                             ; 0047436f
    POP EDI                             ; 00474370
    POP ESI                             ; 00474371
    POP EBX                             ; 00474372
    RET                                 ; 00474373

