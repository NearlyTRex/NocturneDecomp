; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00404370(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   FUN_00403920
;   FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404370
        ;   Label: FUN_00404370
    PUSH ESI                            ; 00404371
    PUSH EBP                            ; 00404372
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404373
    LEA ESI,[EBX + 0x18]                ; 00404377
    LEA EAX,[EBX + 0x8]                 ; 0040437a
    PUSH EAX                            ; 0040437d
    CALL FUN_00403920                   ; 0040437e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00404383
    TEST EAX,EAX                        ; 00404386
    JZ 0x004043cb                       ; 00404388
        ;   XREF to: 004043cb (CONDITIONAL_JUMP)  ; LAB_004043cb
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040438a | DAT_01c6e2a0
    JNZ 0x004043e6                      ; 00404391
        ;   XREF to: 004043e6 (CONDITIONAL_JUMP)  ; LAB_004043e6
    CMP dword ptr [0x005fba20],0x20     ; 00404393 | DAT_005fba20
    JNZ 0x004043da                      ; 0040439a
        ;   XREF to: 004043da (CONDITIONAL_JUMP)  ; LAB_004043da
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040439c | DAT_01c6b5cc
    PUSH EDI                            ; 004043a6
        ;   Label: LAB_004043a6
    MOV EDI,0x1                         ; 004043a7
    PUSH ESI                            ; 004043ac
    MOV EAX,dword ptr [EBX + 0x4]       ; 004043ad
    MOV EBP,0x2                         ; 004043b0
    PUSH EAX                            ; 004043b5
    MOV dword ptr [0x01c6e2b4],EDI      ; 004043b6 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EBP      ; 004043bc | DAT_01c6e2b8
    CALL FUN_0043a840                   ; 004043c2
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0043a840()
    ADD ESP,0x8                         ; 004043c7
    POP EDI                             ; 004043ca
    MOV EAX,dword ptr [EBX + 0x4]       ; 004043cb
        ;   Label: LAB_004043cb
    ADD EBX,0x18                        ; 004043ce
    SHL EAX,0x2                         ; 004043d1
    ADD EAX,EBX                         ; 004043d4
    POP EBP                             ; 004043d6
    POP ESI                             ; 004043d7
    POP EBX                             ; 004043d8
    RET                                 ; 004043d9
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004043da | DAT_01c6b5cc
        ;   Label: LAB_004043da
    JMP 0x004043a6                      ; 004043e4
        ;   XREF to: 004043a6 (UNCONDITIONAL_JUMP)  ; LAB_004043a6
    CMP dword ptr [0x005fba20],0x20     ; 004043e6 | DAT_005fba20
        ;   Label: LAB_004043e6
    JNZ 0x004043fb                      ; 004043ed
        ;   XREF to: 004043fb (CONDITIONAL_JUMP)  ; LAB_004043fb
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004043ef | DAT_01c6b5cc | LAB_00560f31
    JMP 0x004043a6                      ; 004043f9
        ;   XREF to: 004043a6 (UNCONDITIONAL_JUMP)  ; LAB_004043a6
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004043fb | DAT_01c6b5cc | LAB_00561713
        ;   Label: LAB_004043fb
    JMP 0x004043a6                      ; 00404405
        ;   XREF to: 004043a6 (UNCONDITIONAL_JUMP)  ; LAB_004043a6

