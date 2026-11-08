; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd3a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006138e0
;   undefined4 DAT_00618170
;   undefined4 DAT_0061b120
;   undefined4 DAT_01cb7b50
;
; Called Functions:
;   FUN_0047dae0
;   FUN_004fcb00
;   FUN_0050b4d0
;   FUN_0050b8d0
;   FUN_0050cf50
;   FUN_00578bf0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bd3a0
        ;   Label: FUN_004bd3a0
    PUSH EDI                            ; 004bd3a1
    PUSH EBP                            ; 004bd3a2
    SUB ESP,0x68                        ; 004bd3a3
    PUSH 0x1                            ; 004bd3a6
    PUSH 0x64                           ; 004bd3a8
    LEA EAX,[ESP + 0x8]                 ; 004bd3aa
    PUSH EAX                            ; 004bd3ae
    MOV ECX,0x19                        ; 004bd3af
    LEA EDI,[ESP + 0xc]                 ; 004bd3b4
    PUSH 0x5d880e                       ; 004bd3b8
    MOV EDX,dword ptr [0x006138e0]      ; 004bd3bd | DAT_006138e0
    MOV ESI,0x6166c0                    ; 004bd3c3
    PUSH EDX                            ; 004bd3c8
    MOVSD.REP ES:EDI,ESI                ; 004bd3c9
    CALL FUN_0047dae0                   ; 004bd3cb
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dae0()
    ADD ESP,0x14                        ; 004bd3d0
    TEST EAX,EAX                        ; 004bd3d3
    JNZ 0x004bd3de                      ; 004bd3d5
        ;   XREF to: 004bd3de (CONDITIONAL_JUMP)  ; LAB_004bd3de
    ADD ESP,0x68                        ; 004bd3d7
    POP EBP                             ; 004bd3da
    POP EDI                             ; 004bd3db
    POP ESI                             ; 004bd3dc
    RET                                 ; 004bd3dd
    MOV EAX,ESP                         ; 004bd3de
        ;   Label: LAB_004bd3de
    PUSH EAX                            ; 004bd3e0
    LEA EAX,[ESP + 0x68]                ; 004bd3e1
    PUSH EAX                            ; 004bd3e5
    CALL FUN_00578bf0                   ; 004bd3e6
        ;   XREF to: 00578bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00578bf0()
    ADD ESP,0x8                         ; 004bd3eb
    PUSH EAX                            ; 004bd3ee
    MOV ECX,dword ptr [0x0061b120]      ; 004bd3ef | DAT_0061b120
    PUSH ECX                            ; 004bd3f5
    CALL FUN_0050b4d0                   ; 004bd3f6
        ;   XREF to: 0050b4d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b4d0()
    ADD ESP,0x8                         ; 004bd3fb
    TEST EAX,EAX                        ; 004bd3fe
    JZ 0x004bd42e                       ; 004bd400
        ;   XREF to: 004bd42e (CONDITIONAL_JUMP)  ; LAB_004bd42e
    XOR AH,AH                           ; 004bd402
    MOV byte ptr [0x01cb7b50],AH        ; 004bd404 | DAT_01cb7b50
    MOV ESI,dword ptr [0x0061b120]      ; 004bd40a | DAT_0061b120
        ;   Label: LAB_004bd40a
    PUSH ESI                            ; 004bd410
    CALL FUN_0050cf50                   ; 004bd411
        ;   XREF to: 0050cf50 (UNCONDITIONAL_CALL)  ; undefined FUN_0050cf50()
    ADD ESP,0x4                         ; 004bd416
    TEST EAX,EAX                        ; 004bd419
    JZ 0x004bd447                       ; 004bd41b
        ;   XREF to: 004bd447 (CONDITIONAL_JUMP)  ; LAB_004bd447
    MOV EBP,dword ptr [0x00618170]      ; 004bd41d | DAT_00618170
    PUSH EBP                            ; 004bd423
    CALL FUN_004fcb00                   ; 004bd424
        ;   XREF to: 004fcb00 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcb00()
    ADD ESP,0x4                         ; 004bd429
    JMP 0x004bd40a                      ; 004bd42c
        ;   XREF to: 004bd40a (UNCONDITIONAL_JUMP)  ; LAB_004bd40a
    PUSH EBX                            ; 004bd42e
        ;   Label: LAB_004bd42e
    PUSH EAX                            ; 004bd42f
    MOV EBX,dword ptr [0x0061b120]      ; 004bd430 | DAT_0061b120
    PUSH EBX                            ; 004bd436
    CALL FUN_0050b8d0                   ; 004bd437
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b8d0()
    ADD ESP,0x8                         ; 004bd43c
    POP EBX                             ; 004bd43f
    ADD ESP,0x68                        ; 004bd440
    POP EBP                             ; 004bd443
    POP EDI                             ; 004bd444
    POP ESI                             ; 004bd445
    RET                                 ; 004bd446
    PUSH 0x1                            ; 004bd447
        ;   Label: LAB_004bd447
    MOV EDI,dword ptr [0x0061b120]      ; 004bd449 | DAT_0061b120
    PUSH EDI                            ; 004bd44f
    CALL FUN_0050b8d0                   ; 004bd450
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b8d0()
    ADD ESP,0x8                         ; 004bd455
    ADD ESP,0x68                        ; 004bd458
    POP EBP                             ; 004bd45b
    POP EDI                             ; 004bd45c
    POP ESI                             ; 004bd45d
    RET                                 ; 004bd45e

