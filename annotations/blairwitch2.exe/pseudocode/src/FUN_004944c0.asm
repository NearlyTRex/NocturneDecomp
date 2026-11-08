; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004944c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   FUN_0049c780 at 0049cb40
;   FUN_0049cb50 at 0049cbdd
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0044fd20
;   FUN_0046b2b0
;   FUN_0046b350
;   FUN_00530980
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004944c0
        ;   Label: FUN_004944c0
    PUSH ESI                            ; 004944c1
    PUSH EDI                            ; 004944c2
    PUSH EBP                            ; 004944c3
    SUB ESP,0x18                        ; 004944c4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004944c7
    ADD EBP,0x4                         ; 004944cb
    PUSH EBP                            ; 004944ce
    MOV EDX,dword ptr [0x0060b280]      ; 004944cf | DAT_0060b280
    PUSH EDX                            ; 004944d5 | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 004944d6
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 004944db
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004944de
    PUSH 0x0                            ; 004944e2
    ADD EBX,0x10                        ; 004944e4
    PUSH EBX                            ; 004944e7
    MOV ECX,dword ptr [0x0060b280]      ; 004944e8 | DAT_0060b280
    PUSH ECX                            ; 004944ee | DAT_01ba5c50
    CALL FUN_0046b350                   ; 004944ef
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 004944f4
    PUSH 0x1c3def8                      ; 004944f7
    CALL FUN_0044fd20                   ; 004944fc
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 00494501
    MOV EDI,ESP                         ; 00494504
    LEA ESI,[EAX + 0x338]               ; 00494506
    PUSH 0x0                            ; 0049450c
    LEA EAX,[ESP + 0x4]                 ; 0049450e
    MOV ECX,0x6                         ; 00494512
    PUSH EAX                            ; 00494517
    MOVSD.REP ES:EDI,ESI                ; 00494518
    CALL FUN_0041a840                   ; 0049451a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0049451f
    TEST EAX,EAX                        ; 00494522
    JNZ 0x0049453d                      ; 00494524
        ;   XREF to: 0049453d (CONDITIONAL_JUMP)  ; LAB_0049453d
    MOV ESI,dword ptr [0x0060b280]      ; 00494526 | DAT_0060b280
        ;   Label: LAB_00494526
    PUSH ESI                            ; 0049452c | DAT_01ba5c50
    CALL thunk_FUN_004e9810             ; 0049452d
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00494532
    ADD ESP,0x18                        ; 00494535
    POP EBP                             ; 00494538
    POP EDI                             ; 00494539
    POP ESI                             ; 0049453a
    POP EBX                             ; 0049453b
    RET                                 ; 0049453c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049453d
        ;   Label: LAB_0049453d
    ADD EAX,0x1c                        ; 00494541
    PUSH EAX                            ; 00494544
    LEA EAX,[ESP + 0x10]                ; 00494545
    PUSH EAX                            ; 00494549
    LEA EAX,[ESP + 0x8]                 ; 0049454a
    PUSH EAX                            ; 0049454e
    PUSH EBX                            ; 0049454f
    PUSH EBP                            ; 00494550
    MOV EBX,dword ptr [0x0061b5a8]      ; 00494551 | DAT_0061b5a8
    PUSH EBX                            ; 00494557 | DAT_01e661b8
    CALL FUN_00530980                   ; 00494558
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; undefined FUN_00530980()
    ADD ESP,0x18                        ; 0049455d
    PUSH -0x1                           ; 00494560
    PUSH 0x0                            ; 00494562
    PUSH 0x1c3def8                      ; 00494564
    CALL FUN_0044fcc0                   ; 00494569
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0049456e
    JMP 0x00494526                      ; 00494571
        ;   XREF to: 00494526 (UNCONDITIONAL_JUMP)  ; LAB_00494526

