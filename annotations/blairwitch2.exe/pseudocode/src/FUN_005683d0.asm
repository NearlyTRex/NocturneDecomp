; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005683d0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x128]:1  local_128
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; XREF[3]:
;   FUN_00563060 at 00563be4
;   FUN_0056b770 at 0056b9c7
;   FUN_0056e850 at 0056eaf2
;
; Called Functions:
;   FUN_00568500
;   FUN_005916b0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_00592720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005683d0
        ;   Label: FUN_005683d0
    PUSH EBP                            ; 005683d1
    SUB ESP,0x120                       ; 005683d2
    MOV EBX,dword ptr [ESP + 0x12c]     ; 005683d8
    MOV EDX,dword ptr [EBX + 0x25698]   ; 005683df
    TEST EDX,EDX                        ; 005683e5
    JZ 0x005684f2                       ; 005683e7
        ;   XREF to: 005684f2 (CONDITIONAL_JUMP)  ; LAB_005684f2
    CMP EDX,dword ptr [EBX + 0x2620]    ; 005683ed
    JZ 0x005684f2                       ; 005683f3
        ;   XREF to: 005684f2 (CONDITIONAL_JUMP)  ; LAB_005684f2
    CMP EDX,dword ptr [EBX + 0x2698]    ; 005683f9
    JZ 0x005684f2                       ; 005683ff
        ;   XREF to: 005684f2 (CONDITIONAL_JUMP)  ; LAB_005684f2
    PUSH EDI                            ; 00568405
    PUSH ESI                            ; 00568406
    MOV EBP,dword ptr [ESP + 0x138]     ; 00568407
    MOV ESI,0x1                         ; 0056840e
    TEST EBP,EBP                        ; 00568413
    JZ 0x00568419                       ; 00568415
        ;   XREF to: 00568419 (CONDITIONAL_JUMP)  ; LAB_00568419
    XOR ESI,ESI                         ; 00568417
    PUSH ESI                            ; 00568419
        ;   Label: LAB_00568419
    MOV EAX,dword ptr [EBX + 0x25698]   ; 0056841a
    PUSH EAX                            ; 00568420
    PUSH EBX                            ; 00568421
    LEA ESI,[ESP + 0x14]                ; 00568422
    LEA EDI,[ESP + 0x74]                ; 00568426
    CALL FUN_00568500                   ; 0056842a
        ;   XREF to: 00568500 (UNCONDITIONAL_CALL)  ; undefined FUN_00568500()
    MOV ECX,0xc                         ; 0056842f
    LEA ESI,[ESP + 0x14]                ; 00568434
    ADD ESP,0xc                         ; 00568438
    MOVSD.REP ES:EDI,ESI                ; 0056843b
    LEA ESI,[EBX + 0x30]                ; 0056843d
    PUSH ESI                            ; 00568440
    LEA ESI,[EBX + 0x20]                ; 00568441
    PUSH ESI                            ; 00568444
    LEA ESI,[ESP + 0xa0]                ; 00568445
    PUSH ESI                            ; 0056844c
    CALL FUN_00591c10                   ; 0056844d
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 00568452
    LEA ESI,[ESP + 0x98]                ; 00568455
    PUSH ESI                            ; 0056845c
    LEA ESI,[ESP + 0x6c]                ; 0056845d
    PUSH ESI                            ; 00568461
    LEA ESI,[ESP + 0xd0]                ; 00568462
    LEA EDI,[ESP + 0x40]                ; 00568469
    CALL FUN_005916b0                   ; 0056846d
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 00568472
    LEA ESI,[ESP + 0xd0]                ; 00568477
    ADD ESP,0x8                         ; 0056847e
    MOVSD.REP ES:EDI,ESI                ; 00568481
    LEA ESI,[ESP + 0x38]                ; 00568483
    LEA EDI,[ESP + 0x104]               ; 00568487
    MOV EBX,dword ptr [EBX + 0x25698]   ; 0056848e
    PUSH ESI                            ; 00568494
    LEA ESI,[ESP + 0xfc]                ; 00568495
    MOV EBP,dword ptr [EBX + 0x2b0]     ; 0056849c
    CALL FUN_00591de0                   ; 005684a2
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[ESP + 0xfc]                ; 005684a7
    ADD ESP,0x4                         ; 005684ae
    MOVSD ES:EDI,ESI                    ; 005684b1
    MOVSD ES:EDI,ESI                    ; 005684b2
    MOVSD ES:EDI,ESI                    ; 005684b3
    LEA ESI,[ESP + 0x104]               ; 005684b4
    PUSH ESI                            ; 005684bb
    LEA ESI,[ESP + 0x3c]                ; 005684bc
    PUSH ESI                            ; 005684c0
    LEA ESI,[ESP + 0x124]               ; 005684c1
    LEA EDI,[ESP + 0x118]               ; 005684c8
    CALL FUN_00592720                   ; 005684cf
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined FUN_00592720()
    LEA ESI,[ESP + 0x124]               ; 005684d4
    ADD ESP,0x4                         ; 005684db
    MOVSD ES:EDI,ESI                    ; 005684de
    MOVSD ES:EDI,ESI                    ; 005684df
    MOVSD ES:EDI,ESI                    ; 005684e0
    LEA ESI,[ESP + 0x114]               ; 005684e1
    PUSH ESI                            ; 005684e8
    PUSH EBX                            ; 005684e9
    CALL dword ptr [EBP + 0x70]         ; 005684ea
    ADD ESP,0xc                         ; 005684ed
    POP ESI                             ; 005684f0
    POP EDI                             ; 005684f1
    ADD ESP,0x120                       ; 005684f2
        ;   Label: LAB_005684f2
    POP EBP                             ; 005684f8
    POP EBX                             ; 005684f9
    RET                                 ; 005684fa

