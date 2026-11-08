; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
;
; XREF[1]:
;   FUN_004a93f0 at 004a9424
;
; Called Functions:
;   FUN_004a93a0
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9440
        ;   Label: FUN_004a9440
    PUSH ESI                            ; 004a9441
    PUSH EDI                            ; 004a9442
    PUSH EBP                            ; 004a9443
    SUB ESP,0x1000                      ; 004a9444
    MOV EDX,dword ptr [ESP + 0x1030]    ; 004a944a
    PUSH EDX                            ; 004a9451
    MOV ECX,dword ptr [ESP + 0x1030]    ; 004a9452
    PUSH ECX                            ; 004a9459
    LEA EAX,[ESP + 0x8]                 ; 004a945a
    PUSH EAX                            ; 004a945e
    CALL FUN_005b7768                   ; 004a945f
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 004a9464
    MOV EAX,ESP                         ; 004a9467
    PUSH EAX                            ; 004a9469
    MOV EBX,dword ptr [ESP + 0x102c]    ; 004a946a
    PUSH EBX                            ; 004a9471
    MOV ESI,dword ptr [ESP + 0x102c]    ; 004a9472
    PUSH ESI                            ; 004a9479
    MOV EDI,dword ptr [ESP + 0x102c]    ; 004a947a
    PUSH EDI                            ; 004a9481
    MOV EBP,dword ptr [ESP + 0x102c]    ; 004a9482
    PUSH EBP                            ; 004a9489
    MOV EAX,dword ptr [ESP + 0x102c]    ; 004a948a
    PUSH EAX                            ; 004a9491
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004a9492
    PUSH EDX                            ; 004a9499
    CALL FUN_004a93a0                   ; 004a949a
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a93a0()
    ADD ESP,0x1c                        ; 004a949f
    ADD ESP,0x1000                      ; 004a94a2
    POP EBP                             ; 004a94a8
    POP EDI                             ; 004a94a9
    POP ESI                             ; 004a94aa
    POP EBX                             ; 004a94ab
    RET                                 ; 004a94ac

