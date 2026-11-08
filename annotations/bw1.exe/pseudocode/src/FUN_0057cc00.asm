; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057cc00(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   FUN_004cf5e0 at 004d0144
;   FUN_004d1a80 at 004d1be0
;   FUN_004d8060 at 004d8548
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fdcdd8
;   undefined4 DAT_01fdcddc
;   undefined4 DAT_01fdcde0
;   undefined4 DAT_01fdce20
;   undefined4 DAT_02c82a6c
;   undefined4 DAT_02c82a70
;   undefined4 DAT_02c82a74
;   undefined4 DAT_02c82a78
;   undefined4 DAT_02c82a7c
;   undefined4 DAT_02c82a80
;   undefined4 DAT_02c82a84
;   undefined4 DAT_02c82a88
;   ... and 11 more
;
; Called Functions:
;   FUN_004aa550
;   FUN_00572980
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_00573b30
;   FUN_00573bc0
;   FUN_00573c50
;   FUN_00573cd0
;   FUN_00573fa0
;   FUN_00574ee0
;   FUN_00575550
;   FUN_005756f0
;   FUN_0057b780
;   FUN_0057d880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057cc00
        ;   Label: FUN_0057cc00
    SUB ESP,0x1c                        ; 0057cc01
    PUSH 0x0                            ; 0057cc04
    MOV ESI,0x501502f9                  ; 0057cc06
    PUSH 0x0                            ; 0057cc0b
    XOR EDX,EDX                         ; 0057cc0d
    PUSH 0x0                            ; 0057cc0f
    MOV dword ptr [0x02c82a78],EDX      ; 0057cc11 | DAT_02c82a78
    MOV dword ptr [0x02c82a7c],EDX      ; 0057cc17 | DAT_02c82a7c
    MOV dword ptr [0x02c82a80],EDX      ; 0057cc1d | DAT_02c82a80
    MOV dword ptr [0x02c82a6c],ESI      ; 0057cc23 | DAT_02c82a6c
    MOV dword ptr [0x02c82a70],ESI      ; 0057cc29 | DAT_02c82a70
    MOV dword ptr [0x02c82a74],ESI      ; 0057cc2f | DAT_02c82a74
    CALL FUN_00573fa0                   ; 0057cc35
        ;   XREF to: 00573fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573fa0()
    ADD ESP,0xc                         ; 0057cc3a
    CALL FUN_0057b780                   ; 0057cc3d
        ;   XREF to: 0057b780 (UNCONDITIONAL_CALL)  ; undefined FUN_0057b780()
    PUSH dword ptr [0x02c82a8c]         ; 0057cc42 | DAT_02c82a8c
    PUSH dword ptr [0x02c82a88]         ; 0057cc48 | DAT_02c82a88
    XOR EAX,EAX                         ; 0057cc4e
    PUSH dword ptr [0x02c82a84]         ; 0057cc50 | DAT_02c82a84
    MOV [0x02c82a7c],EAX                ; 0057cc56 | DAT_02c82a7c
    CALL FUN_005756f0                   ; 0057cc5b
        ;   XREF to: 005756f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005756f0()
    ADD ESP,0xc                         ; 0057cc60
    CALL FUN_00574ee0                   ; 0057cc63
        ;   XREF to: 00574ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00574ee0()
    CALL FUN_00575550                   ; 0057cc68
        ;   XREF to: 00575550 (UNCONDITIONAL_CALL)  ; undefined FUN_00575550()
    TEST EAX,EAX                        ; 0057cc6d
    JNZ 0x0057cc76                      ; 0057cc6f
        ;   XREF to: 0057cc76 (CONDITIONAL_JUMP)  ; LAB_0057cc76
    ADD ESP,0x1c                        ; 0057cc71
    POP ESI                             ; 0057cc74
    RET                                 ; 0057cc75
    PUSH EDI                            ; 0057cc76
        ;   Label: LAB_0057cc76
    PUSH EBX                            ; 0057cc77
    MOV EDX,0x3f800000                  ; 0057cc78
    XOR EBX,EBX                         ; 0057cc7d
    MOV dword ptr [0x02c832a8],EDX      ; 0057cc7f | DAT_02c832a8
    PUSH EBX                            ; 0057cc85
    MOV dword ptr [0x02c832ac],EDX      ; 0057cc86 | DAT_02c832ac
    MOV dword ptr [0x02c832b0],EBX      ; 0057cc8c | DAT_02c832b0
    CALL FUN_00573cd0                   ; 0057cc92
        ;   XREF to: 00573cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573cd0()
    ADD ESP,0x4                         ; 0057cc97
    TEST EAX,EAX                        ; 0057cc9a
    JZ 0x0057cd9f                       ; 0057cc9c
        ;   XREF to: 0057cd9f (CONDITIONAL_JUMP)  ; LAB_0057cd9f
    PUSH 0x1                            ; 0057cca2
    PUSH 0x3                            ; 0057cca4
    CALL FUN_00573c50                   ; 0057cca6
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    ADD ESP,0x8                         ; 0057ccab
    PUSH EBX                            ; 0057ccae
    CALL FUN_00573bc0                   ; 0057ccaf
        ;   XREF to: 00573bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573bc0()
    MOV dword ptr [ESP + 0x24],EAX      ; 0057ccb4
    FLD float ptr [ESP + 0x24]          ; 0057ccb8
    ADD ESP,0x4                         ; 0057ccbc
    FMUL float ptr [0x02c832a8]         ; 0057ccbf | DAT_02c832a8
    SUB ESP,0x4                         ; 0057ccc5
    FSTP float ptr [ESP]                ; 0057ccc8
    PUSH 0x3                            ; 0057cccb
    CALL FUN_00573b30                   ; 0057cccd
        ;   XREF to: 00573b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00573b30()
    ADD ESP,0x8                         ; 0057ccd2
        ;   Label: LAB_0057ccd2
    CALL FUN_00572ac0                   ; 0057ccd5
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH 0x3                            ; 0057ccda
    CALL FUN_00572980                   ; 0057ccdc
        ;   XREF to: 00572980 (UNCONDITIONAL_CALL)  ; undefined FUN_00572980()
    ADD ESP,0x4                         ; 0057cce1
    PUSH 0x2c83278                      ; 0057cce4 | DAT_02c83278
    MOV ESI,dword ptr [0x00622c18]      ; 0057cce9 | DAT_00622c18
    PUSH ESI                            ; 0057ccef | DAT_01e82168
    MOV EDI,dword ptr [ESP + 0x34]      ; 0057ccf0
    PUSH EDI                            ; 0057ccf4
    CALL FUN_0057d880                   ; 0057ccf5
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d880()
    ADD ESP,0xc                         ; 0057ccfa
    MOV [0x02c832a0],EAX                ; 0057ccfd | DAT_02c832a0
    CALL FUN_00572b40                   ; 0057cd02
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    MOV EAX,[0x00622c18]                ; 0057cd07 | DAT_00622c18
    CMP dword ptr [EAX + 0x15acb8],0x0  ; 0057cd0c | DAT_01fdce20
    JZ 0x0057cd7e                       ; 0057cd13
        ;   XREF to: 0057cd7e (CONDITIONAL_JUMP)  ; LAB_0057cd7e
    FLD float ptr [EAX + 0x15ac70]      ; 0057cd15 | DAT_01fdcdd8
    FLD float ptr [EAX + 0x15ac74]      ; 0057cd1b | DAT_01fdcddc
    FLD float ptr [EAX + 0x15ac78]      ; 0057cd21 | DAT_01fdcde0
    LEA EDI,[ESP + 0x8]                 ; 0057cd27
    LEA ESI,[ESP + 0x14]                ; 0057cd2b
    FXCH ST2                            ; 0057cd2f
    FCHS                                ; 0057cd31
    FXCH                                ; 0057cd33
    FCHS                                ; 0057cd35
    FXCH ST2                            ; 0057cd37
    FCHS                                ; 0057cd39
    LEA EAX,[ESP + 0x8]                 ; 0057cd3b
    FXCH                                ; 0057cd3f
    FSTP float ptr [ESP + 0x14]         ; 0057cd41
    FXCH                                ; 0057cd45
    FSTP float ptr [ESP + 0x18]         ; 0057cd47
    FSTP float ptr [ESP + 0x1c]         ; 0057cd4b
    MOVSD ES:EDI,ESI                    ; 0057cd4f
    MOVSD ES:EDI,ESI                    ; 0057cd50
    MOVSD ES:EDI,ESI                    ; 0057cd51
    CMP EAX,0x2c83354                   ; 0057cd52
    JZ 0x0057cd74                       ; 0057cd57
        ;   XREF to: 0057cd74 (CONDITIONAL_JUMP)  ; LAB_0057cd74
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057cd59
    MOV [0x02c83354],EAX                ; 0057cd5d | DAT_02c83354
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057cd62
    MOV [0x02c83358],EAX                ; 0057cd66 | DAT_02c83358
    MOV EAX,dword ptr [ESP + 0x10]      ; 0057cd6b
    MOV [0x02c8335c],EAX                ; 0057cd6f | DAT_02c8335c
    MOV dword ptr [0x02c83364],0xffffffff ; 0057cd74 | DAT_02c83364
        ;   Label: LAB_0057cd74
    MOV EDX,dword ptr [0x0061b4d0]      ; 0057cd7e | DAT_0061b4d0
        ;   Label: LAB_0057cd7e
    PUSH EDX                            ; 0057cd84
    CALL FUN_004aa550                   ; 0057cd85
        ;   XREF to: 004aa550 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa550()
    MOV ECX,0x1                         ; 0057cd8a
    ADD ESP,0x4                         ; 0057cd8f
    MOV dword ptr [0x02c832a4],ECX      ; 0057cd92 | DAT_02c832a4
    POP EBX                             ; 0057cd98
    POP EDI                             ; 0057cd99
    ADD ESP,0x1c                        ; 0057cd9a
    POP ESI                             ; 0057cd9d
    RET                                 ; 0057cd9e
    PUSH EBX                            ; 0057cd9f
        ;   Label: LAB_0057cd9f
    PUSH 0x3                            ; 0057cda0
    CALL FUN_00573c50                   ; 0057cda2
        ;   XREF to: 00573c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00573c50()
    JMP 0x0057ccd2                      ; 0057cda7
        ;   XREF to: 0057ccd2 (UNCONDITIONAL_JUMP)  ; LAB_0057ccd2

