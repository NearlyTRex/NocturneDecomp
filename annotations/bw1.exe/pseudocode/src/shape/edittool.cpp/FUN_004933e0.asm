; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004933e0(int param_1,uint param_2)
;
; Local Variables:
; undefined        Stack[-0x40c]:1  local_40c
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_004934b0 at 004935d8
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dbcac
;   TerminatedCString s_CInputString_calcX_strin_005dbcc2
;   undefined4 DAT_01c3eb50
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004c3ea0
;   FUN_005030e0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004933e0
        ;   Label: FUN_004933e0
    PUSH EBP                            ; 004933e1
    SUB ESP,0x404                       ; 004933e2
    MOV EAX,dword ptr [ESP + 0x410]     ; 004933e8
    MOV EBX,dword ptr [ESP + 0x414]     ; 004933ef
    TEST EBX,EBX                        ; 004933f6
    JL 0x00493472                       ; 004933f8
        ;   XREF to: 00493472 (CONDITIONAL_JUMP)  ; LAB_00493472
    MOV EDX,dword ptr [EAX + 0x130]     ; 004933fe
    CMP EBX,EDX                         ; 00493404
    JLE 0x0049340a                      ; 00493406
        ;   XREF to: 0049340a (CONDITIONAL_JUMP)  ; LAB_0049340a
    MOV EBX,EDX                         ; 00493408
    PUSH EDI                            ; 0049340a
        ;   Label: LAB_0049340a
    CMP dword ptr [EAX + 0x13c],0x0     ; 0049340b
    JZ 0x00493476                       ; 00493412
        ;   XREF to: 00493476 (CONDITIONAL_JUMP)  ; LAB_00493476
    CMP EBX,0x400                       ; 00493414
    JC 0x0049343f                       ; 0049341a
        ;   XREF to: 0049343f (CONDITIONAL_JUMP)  ; LAB_0049343f
    MOV EDI,0x5dbcac                    ; 0049341c | = "..\\shape\\edittool.cpp"
    MOV EBP,0x20e                       ; 00493421
    PUSH 0x5dbcc2                       ; 00493426 | = "CInputString::calcX - string too big ..."
    MOV dword ptr [0x01d1d400],EDI      ; 0049342b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00493431 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00493437
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049343c
    PUSH EBX                            ; 0049343f
        ;   Label: LAB_0049343f
    PUSH 0x2a                           ; 00493440
    LEA EAX,[ESP + 0xc]                 ; 00493442
    PUSH EAX                            ; 00493446
    CALL FUN_005bfb70                   ; 00493447
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 0049344c
    XOR AH,AH                           ; 0049344f
    MOV byte ptr [ESP + EBX*0x1 + 0x4],AH ; 00493451
    LEA EAX,[ESP + 0x4]                 ; 00493455
    PUSH EAX                            ; 00493459
    MOV EAX,[0x01c3eb50]                ; 0049345a | DAT_01c3eb50
    PUSH EAX                            ; 0049345f
    CALL FUN_004c3ea0                   ; 00493460
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 00493465
    POP EDI                             ; 00493468
    ADD ESP,0x404                       ; 00493469
        ;   Label: LAB_00493469
    POP EBP                             ; 0049346f
    POP EBX                             ; 00493470
    RET                                 ; 00493471
    XOR EAX,EAX                         ; 00493472
        ;   Label: LAB_00493472
    JMP 0x00493469                      ; 00493474
        ;   XREF to: 00493469 (UNCONDITIONAL_JUMP)  ; LAB_00493469
    PUSH ESI                            ; 00493476
        ;   Label: LAB_00493476
    PUSH EAX                            ; 00493477
    ADD EBX,EAX                         ; 00493478
    XOR EDX,EDX                         ; 0049347a
    MOV ESI,dword ptr [0x01c3eb50]      ; 0049347c | DAT_01c3eb50
    MOV DL,byte ptr [EBX]               ; 00493482
    PUSH ESI                            ; 00493484
    MOV dword ptr [ESP + 0x410],EDX     ; 00493485
    MOV byte ptr [EBX],0x0              ; 0049348c
    CALL FUN_004c3ea0                   ; 0049348f
        ;   XREF to: 004c3ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c3ea0()
    ADD ESP,0x8                         ; 00493494
    MOV DL,byte ptr [ESP + 0x408]       ; 00493497
    MOV byte ptr [EBX],DL               ; 0049349e
    POP ESI                             ; 004934a0
    POP EDI                             ; 004934a1
    ADD ESP,0x404                       ; 004934a2
    POP EBP                             ; 004934a8
    POP EBX                             ; 004934a9
    RET                                 ; 004934aa

