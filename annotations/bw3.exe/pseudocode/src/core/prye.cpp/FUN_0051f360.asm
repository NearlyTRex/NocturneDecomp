; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_0051f360(int param_1,int param_2)
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
;   core_prye.cpp_CPrye_renderOpaque_FUN_005220d0 at 0052237a
;   core_prye.cpp_FUN_00518cd0 at 00519c68
;   unkafter_prye.cpp_FUN_005263c0 at 00526746
;
; Called Functions:
;   core_prye.cpp_FUN_0051f490
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_matrixToEulerAngles_FUN_00583b10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f360
        ;   Label: core_prye.cpp_FUN_0051f360
    PUSH EBP                            ; 0051f361
    SUB ESP,0x120                       ; 0051f362
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0051f368
    MOV EDX,dword ptr [EBX + 0x20c24]   ; 0051f36f
    TEST EDX,EDX                        ; 0051f375
    JZ 0x0051f482                       ; 0051f377
        ;   XREF to: 0051f482 (CONDITIONAL_JUMP)  ; LAB_0051f482
    CMP EDX,dword ptr [EBX + 0x25b0]    ; 0051f37d
    JZ 0x0051f482                       ; 0051f383
        ;   XREF to: 0051f482 (CONDITIONAL_JUMP)  ; LAB_0051f482
    CMP EDX,dword ptr [EBX + 0x2628]    ; 0051f389
    JZ 0x0051f482                       ; 0051f38f
        ;   XREF to: 0051f482 (CONDITIONAL_JUMP)  ; LAB_0051f482
    PUSH EDI                            ; 0051f395
    PUSH ESI                            ; 0051f396
    MOV EBP,dword ptr [ESP + 0x138]     ; 0051f397
    MOV ESI,0x1                         ; 0051f39e
    TEST EBP,EBP                        ; 0051f3a3
    JZ 0x0051f3a9                       ; 0051f3a5
        ;   XREF to: 0051f3a9 (CONDITIONAL_JUMP)  ; LAB_0051f3a9
    XOR ESI,ESI                         ; 0051f3a7
    PUSH ESI                            ; 0051f3a9
        ;   Label: LAB_0051f3a9
    MOV EAX,dword ptr [EBX + 0x20c24]   ; 0051f3aa
    PUSH EAX                            ; 0051f3b0
    PUSH EBX                            ; 0051f3b1
    LEA ESI,[ESP + 0x14]                ; 0051f3b2
    LEA EDI,[ESP + 0x74]                ; 0051f3b6
    CALL core_prye.cpp_FUN_0051f490     ; 0051f3ba
        ;   XREF to: 0051f490 (UNCONDITIONAL_CALL)  ; undefined core_prye.cpp_FUN_0051f490()
    MOV ECX,0xc                         ; 0051f3bf
    LEA ESI,[ESP + 0x14]                ; 0051f3c4
    ADD ESP,0xc                         ; 0051f3c8
    MOVSD.REP ES:EDI,ESI                ; 0051f3cb
    LEA ESI,[EBX + 0x30]                ; 0051f3cd
    PUSH ESI                            ; 0051f3d0
    LEA ESI,[EBX + 0x20]                ; 0051f3d1
    PUSH ESI                            ; 0051f3d4
    LEA ESI,[ESP + 0xa0]                ; 0051f3d5
    PUSH ESI                            ; 0051f3dc
    CALL core_xform.cpp_FUN_00583940    ; 0051f3dd
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    ADD ESP,0xc                         ; 0051f3e2
    LEA ESI,[ESP + 0x98]                ; 0051f3e5
    PUSH ESI                            ; 0051f3ec
    LEA ESI,[ESP + 0x6c]                ; 0051f3ed
    PUSH ESI                            ; 0051f3f1
    LEA ESI,[ESP + 0xd0]                ; 0051f3f2
    LEA EDI,[ESP + 0x40]                ; 0051f3f9
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 0051f3fd
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 0051f402
    LEA ESI,[ESP + 0xd0]                ; 0051f407
    ADD ESP,0x8                         ; 0051f40e
    MOVSD.REP ES:EDI,ESI                ; 0051f411
    LEA ESI,[ESP + 0x38]                ; 0051f413
    LEA EDI,[ESP + 0x104]               ; 0051f417
    MOV EBX,dword ptr [EBX + 0x20c24]   ; 0051f41e
    PUSH ESI                            ; 0051f424
    LEA ESI,[ESP + 0xfc]                ; 0051f425
    MOV EBP,dword ptr [EBX + 0x154]     ; 0051f42c
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00583b10 ; 0051f432
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00583b10()
    LEA ESI,[ESP + 0xfc]                ; 0051f437
    ADD ESP,0x4                         ; 0051f43e
    MOVSD ES:EDI,ESI                    ; 0051f441
    MOVSD ES:EDI,ESI                    ; 0051f442
    MOVSD ES:EDI,ESI                    ; 0051f443
    LEA ESI,[ESP + 0x104]               ; 0051f444
    PUSH ESI                            ; 0051f44b
    LEA ESI,[ESP + 0x3c]                ; 0051f44c
    PUSH ESI                            ; 0051f450
    LEA ESI,[ESP + 0x124]               ; 0051f451
    LEA EDI,[ESP + 0x118]               ; 0051f458
    CALL core_xform.cpp_FUN_00584450    ; 0051f45f
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x124]               ; 0051f464
    ADD ESP,0x4                         ; 0051f46b
    MOVSD ES:EDI,ESI                    ; 0051f46e
    MOVSD ES:EDI,ESI                    ; 0051f46f
    MOVSD ES:EDI,ESI                    ; 0051f470
    LEA ESI,[ESP + 0x114]               ; 0051f471
    PUSH ESI                            ; 0051f478
    PUSH EBX                            ; 0051f479
    CALL dword ptr [EBP + 0x68]         ; 0051f47a
    ADD ESP,0xc                         ; 0051f47d
    POP ESI                             ; 0051f480
    POP EDI                             ; 0051f481
    ADD ESP,0x120                       ; 0051f482
        ;   Label: LAB_0051f482
    POP EBP                             ; 0051f488
    POP EBX                             ; 0051f489
    RET                                 ; 0051f48a

