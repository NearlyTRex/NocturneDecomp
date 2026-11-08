; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499510(int *param_1,int param_2,char *param_3)
;
;
; XREF[1]:
;   FUN_0049c290 at 0049c2a2
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc338
;   TerminatedCString s_CStrList_insert_invalid_005dc34e
;   TerminatedCString s_shape_edittool_cpp_005dc36f
;   TerminatedCString s_CStrList_insert_out_of_m_005dc385
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00499600
;   FUN_005030e0
;   FUN_005c08d0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499510
        ;   Label: FUN_00499510
    PUSH ESI                            ; 00499511
    PUSH EDI                            ; 00499512
    PUSH EBP                            ; 00499513
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499514
    MOV EBP,dword ptr [ESP + 0x18]      ; 00499518
    TEST EBP,EBP                        ; 0049951c
    JL 0x00499524                       ; 0049951e
        ;   XREF to: 00499524 (CONDITIONAL_JUMP)  ; LAB_00499524
    CMP EBP,dword ptr [EBX]             ; 00499520
    JLE 0x00499547                      ; 00499522
        ;   XREF to: 00499547 (CONDITIONAL_JUMP)  ; LAB_00499547
    MOV ECX,0x5dc338                    ; 00499524 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00499524
    MOV ESI,0xc2b                       ; 00499529
    PUSH 0x5dc34e                       ; 0049952e | = "CStrList::insert - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 00499533 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00499539 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049953f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00499544
    MOV EDI,dword ptr [EBX]             ; 00499547
        ;   Label: LAB_00499547
    INC EDI                             ; 00499549
    MOV EDX,dword ptr [EBX + 0x4]       ; 0049954a
    MOV dword ptr [EBX],EDI             ; 0049954d
    CMP EDI,EDX                         ; 0049954f
    JLE 0x00499560                      ; 00499551
        ;   XREF to: 00499560 (CONDITIONAL_JUMP)  ; LAB_00499560
    LEA EAX,[EDI + 0x14]                ; 00499553
    PUSH EAX                            ; 00499556
    PUSH EBX                            ; 00499557
    CALL FUN_00499600                   ; 00499558
        ;   XREF to: 00499600 (UNCONDITIONAL_CALL)  ; undefined FUN_00499600()
    ADD ESP,0x8                         ; 0049955d
    MOV EAX,dword ptr [EBX]             ; 00499560
        ;   Label: LAB_00499560
    SUB EAX,EBP                         ; 00499562
    SHL EAX,0x2                         ; 00499564
    SUB EAX,0x4                         ; 00499567
    LEA ESI,[EBP*0x4 + 0x0]             ; 0049956a
    PUSH EAX                            ; 00499571
    MOV EAX,dword ptr [EBX + 0x8]       ; 00499572
    LEA ECX,[EAX + ESI*0x1]             ; 00499575
    PUSH ECX                            ; 00499578
    LEA ECX,[ESI + 0x4]                 ; 00499579
    ADD EAX,ECX                         ; 0049957c
    PUSH EAX                            ; 0049957e
    CALL FUN_005c25d0                   ; 0049957f
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 00499584
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00499587
    SUB ECX,ECX                         ; 0049958b
    DEC ECX                             ; 0049958d
    XOR EAX,EAX                         ; 0049958e
    SCASB.REPNE ES:EDI                  ; 00499590
    NOT ECX                             ; 00499592
    DEC ECX                             ; 00499594
    INC ECX                             ; 00499595
    PUSH ECX                            ; 00499596
    CALL FUN_005c08d0                   ; 00499597
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    MOV ECX,dword ptr [EBX + 0x8]       ; 0049959c
    MOV dword ptr [ECX + ESI*0x1],EAX   ; 0049959f
    MOV EAX,dword ptr [EBX + 0x8]       ; 004995a2
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 004995a5
    ADD ESP,0x4                         ; 004995a8
    TEST ECX,ECX                        ; 004995ab
    JZ 0x004995d8                       ; 004995ad
        ;   XREF to: 004995d8 (CONDITIONAL_JUMP)  ; LAB_004995d8
    MOV EDI,dword ptr [EBX + 0x8]       ; 004995af
        ;   Label: LAB_004995af
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004995b2
    MOV EDI,dword ptr [EDI + EBP*0x4]   ; 004995b6
    PUSH EDI                            ; 004995b9
    MOV AL,byte ptr [ESI]               ; 004995ba
        ;   Label: LAB_004995ba
    MOV byte ptr [EDI],AL               ; 004995bc
    CMP AL,0x0                          ; 004995be
    JZ 0x004995d2                       ; 004995c0
        ;   XREF to: 004995d2 (CONDITIONAL_JUMP)  ; LAB_004995d2
    MOV AL,byte ptr [ESI + 0x1]         ; 004995c2
    ADD ESI,0x2                         ; 004995c5
    MOV byte ptr [EDI + 0x1],AL         ; 004995c8
    ADD EDI,0x2                         ; 004995cb
    CMP AL,0x0                          ; 004995ce
    JNZ 0x004995ba                      ; 004995d0
        ;   XREF to: 004995ba (CONDITIONAL_JUMP)  ; LAB_004995ba
    POP EDI                             ; 004995d2
        ;   Label: LAB_004995d2
    POP EBP                             ; 004995d3
    POP EDI                             ; 004995d4
    POP ESI                             ; 004995d5
    POP EBX                             ; 004995d6
    RET                                 ; 004995d7
    MOV ESI,0x5dc36f                    ; 004995d8 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_004995d8
    MOV EDI,0xc39                       ; 004995dd
    PUSH 0x5dc385                       ; 004995e2 | = "CStrList::insert - out of memory"
    MOV dword ptr [0x01d1d400],ESI      ; 004995e7 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004995ed | DAT_01d1d404
    CALL FUN_005030e0                   ; 004995f3
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004995f8
    JMP 0x004995af                      ; 004995fb
        ;   XREF to: 004995af (UNCONDITIONAL_JUMP)  ; LAB_004995af

