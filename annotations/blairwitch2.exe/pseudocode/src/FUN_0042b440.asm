; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b440(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00450a60 at 00450a73
;
; Referenced Globals:
;   undefined4 DAT_005f4088
;
; Called Functions:
;   FUN_004247f0
;   FUN_00429390
;   FUN_00547460
;   FUN_00547480
;   FUN_005478b0
;   FUN_005b14a0
;   FUN_005b15c0
;   FUN_005b1640
;   FUN_005b1740
;   FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b440
        ;   Label: FUN_0042b440
    PUSH ESI                            ; 0042b441
    PUSH EDI                            ; 0042b442
    PUSH EBP                            ; 0042b443
    MOV EBP,ESP                         ; 0042b444
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b446
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042b449
    LEA ESI,[EBX + 0x2b4]               ; 0042b44c
    PUSH EDX                            ; 0042b452
    LEA EAX,[EBX + 0x2514]              ; 0042b453
    PUSH EAX                            ; 0042b459
    CALL FUN_005b8c30                   ; 0042b45a
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8c30()
    ADD ESP,0x8                         ; 0042b45f
    TEST EAX,EAX                        ; 0042b462
    JNZ 0x0042b46b                      ; 0042b464
        ;   XREF to: 0042b46b (CONDITIONAL_JUMP)  ; LAB_0042b46b
    POP EBP                             ; 0042b466
    POP EDI                             ; 0042b467
    POP ESI                             ; 0042b468
    POP EBX                             ; 0042b469
    RET                                 ; 0042b46a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042b46b
        ;   Label: LAB_0042b46b
    PUSH ECX                            ; 0042b46e
    PUSH ESI                            ; 0042b46f
    CALL FUN_005478b0                   ; 0042b470
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 0042b475
    PUSH ESI                            ; 0042b478
    CALL FUN_00547480                   ; 0042b479
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 0042b47e
    PUSH ESI                            ; 0042b481
    CALL FUN_00547460                   ; 0042b482
        ;   XREF to: 00547460 (UNCONDITIONAL_CALL)  ; undefined FUN_00547460()
    MOV dword ptr [EBX + 0x109c0],0x0   ; 0042b487
    MOV dword ptr [EBX + 0x109c4],0x0   ; 0042b491
    MOV dword ptr [EBX + 0x109c8],0x0   ; 0042b49b
    MOV dword ptr [EBX + 0x109d4],0x0   ; 0042b4a5
    MOV dword ptr [EBX + 0x109cc],0x0   ; 0042b4af
    FLD float ptr [0x005f4088]          ; 0042b4b9 | DAT_005f4088
    FLD float ptr [EBX + 0x2824]        ; 0042b4bf
    MOV dword ptr [EBX + 0x109d8],0xfffffffe ; 0042b4c5
    ADD ESP,0x4                         ; 0042b4cf
    FSTP float ptr [EBX + 0x308]        ; 0042b4d2
    PUSH EBX                            ; 0042b4d8
    FSTP float ptr [EBX + 0x109d0]      ; 0042b4d9
    CALL FUN_00429390                   ; 0042b4df
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 0042b4e4
    PUSH EBX                            ; 0042b4e7
    CALL FUN_004247f0                   ; 0042b4e8
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004247f0()
    MOV ESI,dword ptr [EBX + 0x2d0c]    ; 0042b4ed
    ADD ESP,0x4                         ; 0042b4f3
    TEST ESI,ESI                        ; 0042b4f6
    JLE 0x0042b50b                      ; 0042b4f8
        ;   XREF to: 0042b50b (CONDITIONAL_JUMP)  ; LAB_0042b50b
    PUSH 0x0                            ; 0042b4fa
    LEA EAX,[EBX + 0x2d0c]              ; 0042b4fc
    PUSH EAX                            ; 0042b502
    CALL FUN_005b1640                   ; 0042b503
        ;   XREF to: 005b1640 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1640()
    ADD ESP,0x8                         ; 0042b508
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0042b50b
        ;   Label: LAB_0042b50b
    PUSH EDI                            ; 0042b50e
    LEA ESI,[EBX + 0x2d0c]              ; 0042b50f
    PUSH ESI                            ; 0042b515
    CALL FUN_005b15c0                   ; 0042b516
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b15c0()
    ADD ESP,0x8                         ; 0042b51b
    PUSH ESI                            ; 0042b51e
    CALL FUN_005b14a0                   ; 0042b51f
        ;   XREF to: 005b14a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b14a0()
    ADD ESP,0x4                         ; 0042b524
    LEA EAX,[EBX + 0x2b4]               ; 0042b527
    PUSH EAX                            ; 0042b52d
    LEA EAX,[EBX + 0x30]                ; 0042b52e
    PUSH EAX                            ; 0042b531
    ADD EBX,0x20                        ; 0042b532
    PUSH EBX                            ; 0042b535
    PUSH ESI                            ; 0042b536
    CALL FUN_005b1740                   ; 0042b537
        ;   XREF to: 005b1740 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1740()
    ADD ESP,0x10                        ; 0042b53c
    POP EBP                             ; 0042b53f
    POP EDI                             ; 0042b540
    POP ESI                             ; 0042b541
    POP EBX                             ; 0042b542
    RET                                 ; 0042b543

