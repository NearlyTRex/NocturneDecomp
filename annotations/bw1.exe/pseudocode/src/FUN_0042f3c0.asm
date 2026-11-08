; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042f3c0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_0042e960 at 0042e9ab
;   FUN_00510620 at 00510866
;   FUN_005a6b00 at 005a6bab
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_007c61c4
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_004688a0
;   FUN_00483850
;   FUN_005b5200
;   FUN_005b5930
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f3c0
        ;   Label: FUN_0042f3c0
    PUSH ESI                            ; 0042f3c1
    PUSH EDI                            ; 0042f3c2
    PUSH EBP                            ; 0042f3c3
    SUB ESP,0x88                        ; 0042f3c4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042f3ca
    MOV EDX,dword ptr [EAX + 0x3004]    ; 0042f3d1
    XOR EBP,EBP                         ; 0042f3d7
    TEST EDX,EDX                        ; 0042f3d9
    JLE 0x0042f422                      ; 0042f3db
        ;   XREF to: 0042f422 (CONDITIONAL_JUMP)  ; LAB_0042f422
    ADD EAX,0xfd8                       ; 0042f3dd
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0042f3e2
    MOV dword ptr [ESP + 0x84],EAX      ; 0042f3e9
    ADD EBX,0x3008                      ; 0042f3f0
    MOV EAX,dword ptr [EBX]             ; 0042f3f6
        ;   Label: LAB_0042f3f6
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0042f3f8
    SHL EAX,0x2                         ; 0042f3ff
    ADD EAX,ESI                         ; 0042f402
    CMP dword ptr [EAX + 0x2298],0x0    ; 0042f404
    JNZ 0x0042f42d                      ; 0042f40b
        ;   XREF to: 0042f42d (CONDITIONAL_JUMP)  ; LAB_0042f42d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042f40d
        ;   Label: LAB_0042f40d
    INC EBP                             ; 0042f414
    MOV ECX,dword ptr [EAX + 0x3004]    ; 0042f415
    ADD EBX,0x38                        ; 0042f41b
    CMP EBP,ECX                         ; 0042f41e
    JL 0x0042f3f6                       ; 0042f420
        ;   XREF to: 0042f3f6 (CONDITIONAL_JUMP)  ; LAB_0042f3f6
    ADD ESP,0x88                        ; 0042f422
        ;   Label: LAB_0042f422
    POP EBP                             ; 0042f428
    POP EDI                             ; 0042f429
    POP ESI                             ; 0042f42a
    POP EBX                             ; 0042f42b
    RET                                 ; 0042f42c
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 0042f42d
        ;   Label: LAB_0042f42d
    ADD EAX,dword ptr [ESP + 0x84]      ; 0042f431
    PUSH EAX                            ; 0042f438
    LEA EAX,[EBX + 0x8]                 ; 0042f439
    PUSH EAX                            ; 0042f43c
    LEA ESI,[ESP + 0x8]                 ; 0042f43d
    LEA EDI,[ESP + 0x38]                ; 0042f441
    CALL FUN_005b5200                   ; 0042f445
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5200()
    MOV ECX,0xc                         ; 0042f44a
    LEA ESI,[ESP + 0x8]                 ; 0042f44f
    ADD ESP,0x8                         ; 0042f453
    LEA EAX,[ESP + 0x30]                ; 0042f456
    MOVSD.REP ES:EDI,ESI                ; 0042f45a
    PUSH EAX                            ; 0042f45c
    LEA ESI,[ESP + 0x7c]                ; 0042f45d
    CALL FUN_005b5930                   ; 0042f461
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    ADD ESP,0x4                         ; 0042f466
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042f469
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042f46d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042f471
    MOV dword ptr [ESP + 0x70],EAX      ; 0042f475
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042f479
    LEA EDI,[ESP + 0x60]                ; 0042f47d
    MOV dword ptr [ESP + 0x74],EAX      ; 0042f481
    LEA EAX,[ESP + 0x6c]                ; 0042f485
    LEA ESI,[ESP + 0x78]                ; 0042f489
    PUSH EAX                            ; 0042f48d
    LEA EAX,[ESP + 0x64]                ; 0042f48e
    MOVSD ES:EDI,ESI                    ; 0042f492
    MOVSD ES:EDI,ESI                    ; 0042f493
    MOVSD ES:EDI,ESI                    ; 0042f494
    PUSH EAX                            ; 0042f495
    MOV ESI,dword ptr [0x00612560]      ; 0042f496 | DAT_00612560
    PUSH ESI                            ; 0042f49c | DAT_01bc120c
    CALL FUN_00483850                   ; 0042f49d
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0042f4a2
    PUSH -0x1                           ; 0042f4a5
    PUSH 0x0                            ; 0042f4a7
    PUSH 0x7c61c4                       ; 0042f4a9 | DAT_007c61c4
    CALL FUN_004688a0                   ; 0042f4ae
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0042f4b3
    MOV EDI,dword ptr [0x00612560]      ; 0042f4b6 | DAT_00612560
    PUSH EDI                            ; 0042f4bc | DAT_01bc120c
    CALL thunk_FUN_005084b0             ; 0042f4bd
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 0042f4c2
    JMP 0x0042f40d                      ; 0042f4c5
        ;   XREF to: 0042f40d (UNCONDITIONAL_JUMP)  ; LAB_0042f40d

