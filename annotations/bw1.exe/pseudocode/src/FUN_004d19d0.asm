; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d19d0(void)
;
;
; XREF[7]:
;   FUN_00415be0 at 00415c0e
;   FUN_004cf5e0 at 004cf98c
;   FUN_004d0860 at 004d08a5
;   FUN_004d77d0 at 004d7b6f
;   FUN_005437f0 at 00543873
;   FUN_00544310 at 005443ad
;   FUN_00544460 at 0054861f
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061d418
;   undefined4 DAT_00622580
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c3978
;   undefined4 DAT_01cc8044
;   undefined4 DAT_01ccff98
;   undefined4 DAT_01cd01f0
;   undefined4 DAT_01cd01f4
;   undefined4 DAT_01cd0b40
;   undefined4 DAT_01fdd020
;
; Called Functions:
;   FUN_00530660
;   FUN_005b2750
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 004d19d0
        ;   Label: FUN_004d19d0
    PUSH 0x0                            ; 004d19d2
    MOV EDX,dword ptr [0x00622580]      ; 004d19d4 | DAT_00622580
    PUSH EDX                            ; 004d19da
    CALL FUN_00530660                   ; 004d19db
        ;   XREF to: 00530660 (UNCONDITIONAL_CALL)  ; undefined FUN_00530660()
    ADD ESP,0x4                         ; 004d19e0
    PUSH EAX                            ; 004d19e3
    CALL FUN_005bfb70                   ; 004d19e4
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 004d19e9
    PUSH 0x258                          ; 004d19ec
    PUSH 0x0                            ; 004d19f1
    PUSH 0x1ccff98                      ; 004d19f3 | DAT_01ccff98
    CALL FUN_005bfb70                   ; 004d19f8
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV EAX,[0x00622c18]                ; 004d19fd | DAT_00622c18
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004d1a02 | DAT_01fdd020
    MOV [0x01cd01f4],EAX                ; 004d1a08 | DAT_01cd01f4
    MOV EAX,[0x0061d418]                ; 004d1a0d | DAT_0061d418
    MOV ECX,dword ptr [EAX + 0x40]      ; 004d1a12 | DAT_01cc8044
    ADD ESP,0xc                         ; 004d1a15
    TEST ECX,ECX                        ; 004d1a18
    JZ 0x004d1a3b                       ; 004d1a1a
        ;   XREF to: 004d1a3b (CONDITIONAL_JUMP)  ; LAB_004d1a3b
    MOV EAX,[0x0061d418]                ; 004d1a1c | DAT_0061d418
        ;   Label: LAB_004d1a1c
    CMP dword ptr [EAX + 0x40],0x0      ; 004d1a21 | DAT_01cc8044
    JZ 0x004d1a31                       ; 004d1a25
        ;   XREF to: 004d1a31 (CONDITIONAL_JUMP)  ; LAB_004d1a31
    MOV dword ptr [0x01cd0b40],0xffffffff ; 004d1a27 | DAT_01cd0b40
    CMP dword ptr [0x007c3978],0x0      ; 004d1a31 | DAT_007c3978
        ;   Label: LAB_004d1a31
    JNZ 0x004d1a72                      ; 004d1a38
        ;   XREF to: 004d1a72 (CONDITIONAL_JUMP)  ; LAB_004d1a72
    RET                                 ; 004d1a3a
    CMP dword ptr [0x007c3978],0x0      ; 004d1a3b | DAT_007c3978
        ;   Label: LAB_004d1a3b
    JNZ 0x004d1a1c                      ; 004d1a42
        ;   XREF to: 004d1a1c (CONDITIONAL_JUMP)  ; LAB_004d1a1c
    MOV EAX,[0x0061b49c]                ; 004d1a44 | DAT_0061b49c
    MOV EDX,EAX                         ; 004d1a49
    SAR EDX,0x1f                        ; 004d1a4b
    SUB EAX,EDX                         ; 004d1a4e
    SAR EAX,0x1                         ; 004d1a50
    PUSH EAX                            ; 004d1a52
    MOV EAX,[0x0061b498]                ; 004d1a53 | DAT_0061b498
    MOV EDX,EAX                         ; 004d1a58
    SAR EDX,0x1f                        ; 004d1a5a
    SUB EAX,EDX                         ; 004d1a5d
    SAR EAX,0x1                         ; 004d1a5f
    PUSH EAX                            ; 004d1a61
    MOV dword ptr [0x01cd01f0],ECX      ; 004d1a62 | DAT_01cd01f0
    CALL FUN_005b2750                   ; 004d1a68
        ;   XREF to: 005b2750 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2750()
    ADD ESP,0x8                         ; 004d1a6d
    JMP 0x004d1a1c                      ; 004d1a70
        ;   XREF to: 004d1a1c (UNCONDITIONAL_JUMP)  ; LAB_004d1a1c
    MOV dword ptr [0x01cd0b40],0xffffffff ; 004d1a72 | DAT_01cd0b40
        ;   Label: LAB_004d1a72
    RET                                 ; 004d1a7c

