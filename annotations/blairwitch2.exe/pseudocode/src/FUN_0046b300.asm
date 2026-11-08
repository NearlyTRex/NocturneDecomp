; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b300(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[11]:
;   FUN_00493710 at 004937f3
;   FUN_004947a0 at 00494a42
;   FUN_00495150 at 0049542b
;   FUN_00495ca0 at 00495d00
;   FUN_004966a0 at 004966cc
;   FUN_004968d0 at 004968fc
;   FUN_0049b9d0 at 0049ba85
;   FUN_0049bd40 at 0049bdf8
;   FUN_0049f850 at 0049f9a1
;   FUN_004c7580 at 004c7603
;   ... and 1 more
;
; Called Functions:
;   FUN_004e8fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b300
        ;   Label: FUN_0046b300
    PUSH ESI                            ; 0046b301
    PUSH EBP                            ; 0046b302
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046b303
    MOV EDX,dword ptr [ESP + 0x18]      ; 0046b307
    TEST EDX,EDX                        ; 0046b30b
    JNZ 0x0046b329                      ; 0046b30d
        ;   XREF to: 0046b329 (CONDITIONAL_JUMP)  ; LAB_0046b329
    PUSH EDX                            ; 0046b30f
    PUSH EDX                            ; 0046b310
    PUSH EDX                            ; 0046b311
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046b312
    PUSH ECX                            ; 0046b315
    MOV EBX,dword ptr [EAX + 0x4]       ; 0046b316
    PUSH EBX                            ; 0046b319
    MOV ESI,dword ptr [EAX]             ; 0046b31a
    PUSH ESI                            ; 0046b31c
    CALL FUN_004e8fd0                   ; 0046b31d
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8fd0()
    ADD ESP,0x18                        ; 0046b322
    POP EBP                             ; 0046b325
    POP ESI                             ; 0046b326
    POP EBX                             ; 0046b327
    RET                                 ; 0046b328
    PUSH EDI                            ; 0046b329
        ;   Label: LAB_0046b329
    MOV ECX,dword ptr [EDX + 0x8]       ; 0046b32a
    PUSH ECX                            ; 0046b32d
    MOV EBX,dword ptr [EDX + 0x4]       ; 0046b32e
    PUSH EBX                            ; 0046b331
    MOV ESI,dword ptr [EDX]             ; 0046b332
    PUSH ESI                            ; 0046b334
    MOV EDI,dword ptr [EAX + 0x8]       ; 0046b335
    PUSH EDI                            ; 0046b338
    MOV EBP,dword ptr [EAX + 0x4]       ; 0046b339
    PUSH EBP                            ; 0046b33c
    MOV EDX,dword ptr [EAX]             ; 0046b33d
    PUSH EDX                            ; 0046b33f
    CALL FUN_004e8fd0                   ; 0046b340
        ;   XREF to: 004e8fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8fd0()
    ADD ESP,0x18                        ; 0046b345
    POP EDI                             ; 0046b348
    POP EBP                             ; 0046b349
    POP ESI                             ; 0046b34a
    POP EBX                             ; 0046b34b
    RET                                 ; 0046b34c

