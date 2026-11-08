; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00538480(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00538530 at 0053853b
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_005030e0
;   FUN_00537550
;   FUN_005375c0
;   FUN_005380b0
;   FUN_00538280
;   FUN_005bfb40
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538480
        ;   Label: FUN_00538480
    PUSH ESI                            ; 00538481
    SUB ESP,0x64                        ; 00538482
    MOV EBX,dword ptr [ESP + 0x70]      ; 00538485
    PUSH EBX                            ; 00538489
    CALL FUN_00537550                   ; 0053848a
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; undefined FUN_00537550()
    ADD ESP,0x4                         ; 0053848f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00538492
    PUSH EDX                            ; 00538496
    PUSH EBX                            ; 00538497
    CALL FUN_005375c0                   ; 00538498
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005375c0()
    ADD ESP,0x8                         ; 0053849d
    PUSH 0x5ecfbb                       ; 005384a0
    PUSH EBX                            ; 005384a5
    PUSH 0x5ecfbe                       ; 005384a6
    CALL FUN_00479180                   ; 005384ab
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 005384b0
    MOV ESI,EAX                         ; 005384b3
    TEST EAX,EAX                        ; 005384b5
    JNZ 0x005384f1                      ; 005384b7
        ;   XREF to: 005384f1 (CONDITIONAL_JUMP)  ; LAB_005384f1
    PUSH EDI                            ; 005384b9
    PUSH EBX                            ; 005384ba
    PUSH 0x5ecfc2                       ; 005384bb
    LEA EAX,[ESP + 0xc]                 ; 005384c0
    PUSH EAX                            ; 005384c4
    MOV EDI,0x51c                       ; 005384c5
    CALL FUN_005bfb40                   ; 005384ca
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 005384cf
    LEA EAX,[ESP + 0x4]                 ; 005384d2
    MOV ECX,0x5ecfdd                    ; 005384d6
    PUSH EAX                            ; 005384db
    MOV dword ptr [0x01d1d404],EDI      ; 005384dc | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 005384e2 | DAT_01d1d400
    CALL FUN_005030e0                   ; 005384e8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005384ed
    POP EDI                             ; 005384f0
    PUSH 0x0                            ; 005384f1
        ;   Label: LAB_005384f1
    PUSH ESI                            ; 005384f3
    PUSH EBX                            ; 005384f4
    CALL FUN_00538280                   ; 005384f5
        ;   XREF to: 00538280 (UNCONDITIONAL_CALL)  ; undefined FUN_00538280()
    ADD ESP,0xc                         ; 005384fa
    PUSH ESI                            ; 005384fd
    CALL FUN_005c0d10                   ; 005384fe
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00538503
    CMP dword ptr [ESP + 0x78],0x0      ; 00538506
    JNZ 0x00538513                      ; 0053850b
        ;   XREF to: 00538513 (CONDITIONAL_JUMP)  ; LAB_00538513
    ADD ESP,0x64                        ; 0053850d
    POP ESI                             ; 00538510
    POP EBX                             ; 00538511
    RET                                 ; 00538512
    PUSH EBX                            ; 00538513
        ;   Label: LAB_00538513
    CALL FUN_005380b0                   ; 00538514
        ;   XREF to: 005380b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005380b0()
    ADD ESP,0x4                         ; 00538519
    ADD ESP,0x64                        ; 0053851c
    POP ESI                             ; 0053851f
    POP EBX                             ; 00538520
    RET                                 ; 00538521

