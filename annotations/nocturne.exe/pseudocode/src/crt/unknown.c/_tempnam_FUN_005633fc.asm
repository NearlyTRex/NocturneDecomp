; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __watcallStack crt_unknown_c__tempnam_FUN_005633fc(char *buffer,int file_handle)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int              Stack[0x8]:4   file_handle
;
; XREF[2]:
;   crt_unknown.c_FUN_00568690 at 005686ae
;   crt_unknown.c_fclose_FUN_005634b0 at 0056355e
;
; Called Functions:
;   crt_io.c_getTempDirectory_FUN_005687bc
;   crt_process.c_getpid_FUN_00568680
;   crt_unknown.c_hexDigitToChar_FUN_005633ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005633fc
        ;   Label: crt_unknown.c__tempnam_FUN_005633fc
    PUSH ESI                            ; 005633fd
    PUSH EDI                            ; 005633fe
    PUSH EBP                            ; 005633ff
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563400
    CALL crt_process.c_getpid_FUN_00568680 ; 00563404
        ;   XREF to: 00568680 (UNCONDITIONAL_CALL)  ; undefined1 crt_process.c_getpid_FUN_00568680()
    MOV EBP,EAX                         ; 00563409
    SHR EBP,0x10                        ; 0056340b
    MOV EDI,EBX                         ; 0056340e
    OR EBP,EAX                          ; 00563410
    CALL crt_io.c_getTempDirectory_FUN_005687bc ; 00563412
        ;   XREF to: 005687bc (UNCONDITIONAL_CALL)  ; undefined1 crt_io.c_getTempDirectory_FUN_005687bc()
    MOV ESI,EAX                         ; 00563417
    PUSH EDI                            ; 00563419
    MOV AL,byte ptr [ESI]               ; 0056341a
        ;   Label: LAB_0056341a
    MOV byte ptr [EDI],AL               ; 0056341c
    CMP AL,0x0                          ; 0056341e
    JZ 0x00563432                       ; 00563420
        ;   XREF to: 00563432 (CONDITIONAL_JUMP)  ; LAB_00563432
    MOV AL,byte ptr [ESI + 0x1]         ; 00563422
    ADD ESI,0x2                         ; 00563425
    MOV byte ptr [EDI + 0x1],AL         ; 00563428
    ADD EDI,0x2                         ; 0056342b
    CMP AL,0x0                          ; 0056342e
    JNZ 0x0056341a                      ; 00563430
        ;   XREF to: 0056341a (CONDITIONAL_JUMP)  ; LAB_0056341a
    POP EDI                             ; 00563432
        ;   Label: LAB_00563432
    PUSH ES                             ; 00563433
    MOV AX,DS                           ; 00563434
    MOV ES,AX                           ; 00563436
    SUB ECX,ECX                         ; 00563438
    DEC ECX                             ; 0056343a
    XOR EAX,EAX                         ; 0056343b
    SCASB.REPNE ES:EDI                  ; 0056343d
    NOT ECX                             ; 0056343f
    DEC ECX                             ; 00563441
    POP ES                              ; 00563442
    LEA EDI,[EBX + ECX*0x1]             ; 00563443
    LEA EBX,[EDI + 0x4]                 ; 00563446
    MOV byte ptr [EDI],0x74             ; 00563449
    MOV ESI,EDI                         ; 0056344c
    MOV EAX,EBP                         ; 0056344e
        ;   Label: LAB_0056344e
    AND EAX,0xf                         ; 00563450
    DEC EBX                             ; 00563453
    PUSH EAX                            ; 00563454
    SHR EBP,0x4                         ; 00563455
    CALL crt_unknown.c_hexDigitToChar_FUN_005633ec ; 00563458
        ;   XREF to: 005633ec (UNCONDITIONAL_CALL)  ; char crt_unknown.c_hexDigitToChar_FUN_005633ec(int digit)
    ADD ESP,0x4                         ; 0056345d
    MOV byte ptr [EBX + 0x1],AL         ; 00563460
    CMP EBX,ESI                         ; 00563463
    JNZ 0x0056344e                      ; 00563465
        ;   XREF to: 0056344e (CONDITIONAL_JUMP)  ; LAB_0056344e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00563467
    SAR EAX,0x4                         ; 0056346b
    AND EAX,0xf                         ; 0056346e
    PUSH EAX                            ; 00563471
    MOV byte ptr [EDI + 0x5],0x5f       ; 00563472
    CALL crt_unknown.c_hexDigitToChar_FUN_005633ec ; 00563476
        ;   XREF to: 005633ec (UNCONDITIONAL_CALL)  ; char crt_unknown.c_hexDigitToChar_FUN_005633ec(int digit)
    ADD ESP,0x4                         ; 0056347b
    MOV byte ptr [EDI + 0x6],AL         ; 0056347e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00563481
    AND EAX,0xf                         ; 00563485
    PUSH EAX                            ; 00563488
    CALL crt_unknown.c_hexDigitToChar_FUN_005633ec ; 00563489
        ;   XREF to: 005633ec (UNCONDITIONAL_CALL)  ; char crt_unknown.c_hexDigitToChar_FUN_005633ec(int digit)
    MOV byte ptr [EDI + 0x8],0x2e       ; 0056348e
    MOV byte ptr [EDI + 0x9],0x74       ; 00563492
    MOV byte ptr [EDI + 0xa],0x6d       ; 00563496
    MOV byte ptr [EDI + 0xb],0x70       ; 0056349a
    MOV byte ptr [EDI + 0xc],0x0        ; 0056349e
    ADD ESP,0x4                         ; 005634a2
    MOV byte ptr [EDI + 0x7],AL         ; 005634a5
    POP EBP                             ; 005634a8
    POP EDI                             ; 005634a9
    POP ESI                             ; 005634aa
    POP EBX                             ; 005634ab
    RET                                 ; 005634ac

