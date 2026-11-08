; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[1]:
;   FUN_004a92e0 at 004a930f
;
; Called Functions:
;   FUN_004a92a0
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9330
        ;   Label: FUN_004a9330
    PUSH ESI                            ; 004a9331
    PUSH EDI                            ; 004a9332
    PUSH EBP                            ; 004a9333
    SUB ESP,0x1000                      ; 004a9334
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a933a
    PUSH EDX                            ; 004a9341
    MOV ECX,dword ptr [ESP + 0x102c]    ; 004a9342
    PUSH ECX                            ; 004a9349
    LEA EAX,[ESP + 0x8]                 ; 004a934a
    PUSH EAX                            ; 004a934e
    CALL FUN_005b7768                   ; 004a934f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 004a9354
    MOV EAX,ESP                         ; 004a9357
    PUSH EAX                            ; 004a9359
    MOV EBX,dword ptr [ESP + 0x1028]    ; 004a935a
    PUSH EBX                            ; 004a9361
    MOV ESI,dword ptr [ESP + 0x1028]    ; 004a9362
    PUSH ESI                            ; 004a9369
    MOV EDI,dword ptr [ESP + 0x1028]    ; 004a936a
    PUSH EDI                            ; 004a9371
    MOV EBP,dword ptr [ESP + 0x1028]    ; 004a9372
    PUSH EBP                            ; 004a9379
    MOV EAX,dword ptr [ESP + 0x1028]    ; 004a937a
    PUSH EAX                            ; 004a9381
    CALL FUN_004a92a0                   ; 004a9382
        ;   XREF to: 004a92a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a92a0()
    ADD ESP,0x18                        ; 004a9387
    ADD ESP,0x1000                      ; 004a938a
    POP EBP                             ; 004a9390
    POP EDI                             ; 004a9391
    POP ESI                             ; 004a9392
    POP EBX                             ; 004a9393
    RET                                 ; 004a9394

