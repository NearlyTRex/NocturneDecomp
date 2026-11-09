; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004ac3e0(CBulletHole *this_ptr,CVector3f *hit_position,CVector3f *surface_normal,CDemonActor *hit_actor)
;
; Parameters:
; CBulletHole *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   hit_position
; CVector3f *      Stack[0xc]:4   surface_normal
; CDemonActor *    Stack[0x10]:4   hit_actor
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_FUN_004b56a0 at 004b5879
;
; Referenced Globals:
;   undefined4 DAT_005df1c8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_0040cc60
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_FUN_005b5930
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_math.c_atan2_FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ac3e0
        ;   Label: core_fire.cpp_FUN_004ac3e0
    PUSH ESI                            ; 004ac3e1
    PUSH EDI                            ; 004ac3e2
    PUSH EBP                            ; 004ac3e3
    SUB ESP,0x138                       ; 004ac3e4
    MOV EBX,dword ptr [ESP + 0x14c]     ; 004ac3ea
    MOV EAX,dword ptr [ESP + 0x150]     ; 004ac3f1
    MOV EBP,dword ptr [ESP + 0x154]     ; 004ac3f8
    CMP EBX,EAX                         ; 004ac3ff
    JNZ 0x004ac518                      ; 004ac401
        ;   XREF to: 004ac518 (CONDITIONAL_JUMP)  ; LAB_004ac518
    FLD float ptr [0x005df1c8]          ; 004ac407 | DAT_005df1c8
        ;   Label: LAB_004ac407
    FLD float ptr [EBP]                 ; 004ac40d
    FMUL ST1                            ; 004ac410
    FLD float ptr [EBP + 0x4]           ; 004ac412
    FMUL ST2                            ; 004ac415
    FLD float ptr [EBP + 0x8]           ; 004ac417
    FMULP ST3                           ; 004ac41a
    LEA EDI,[ESP + 0x114]               ; 004ac41c
    LEA ESI,[ESP + 0x108]               ; 004ac423
    FXCH                                ; 004ac42a
    FSTP float ptr [ESP + 0x108]        ; 004ac42c
    FSTP float ptr [ESP + 0x10c]        ; 004ac433
    FSTP float ptr [ESP + 0x110]        ; 004ac43a
    MOVSD ES:EDI,ESI                    ; 004ac441
    MOVSD ES:EDI,ESI                    ; 004ac442
    MOVSD ES:EDI,ESI                    ; 004ac443
    LEA EAX,[ESP + 0xe4]                ; 004ac444
    FLD float ptr [EBX]                 ; 004ac44b
    FLD float ptr [EBX + 0x4]           ; 004ac44d
    FLD float ptr [EBX + 0x8]           ; 004ac450
    LEA EDI,[ESP + 0xe4]                ; 004ac453
    LEA ESI,[ESP + 0xfc]                ; 004ac45a
    FXCH ST2                            ; 004ac461
    FADD float ptr [ESP + 0x114]        ; 004ac463
    FXCH                                ; 004ac46a
    FADD float ptr [ESP + 0x118]        ; 004ac46c
    FXCH ST2                            ; 004ac473
    FADD float ptr [ESP + 0x11c]        ; 004ac475
    FXCH                                ; 004ac47c
    FSTP float ptr [ESP + 0xfc]         ; 004ac47e
    FXCH                                ; 004ac485
    FSTP float ptr [ESP + 0x100]        ; 004ac487
    FSTP float ptr [ESP + 0x104]        ; 004ac48e
    MOVSD ES:EDI,ESI                    ; 004ac495
    MOVSD ES:EDI,ESI                    ; 004ac496
    MOVSD ES:EDI,ESI                    ; 004ac497
    CMP EBX,EAX                         ; 004ac498
    JZ 0x004ac4b9                       ; 004ac49a
        ;   XREF to: 004ac4b9 (CONDITIONAL_JUMP)  ; LAB_004ac4b9
    MOV EAX,dword ptr [ESP + 0xe4]      ; 004ac49c
    MOV dword ptr [EBX],EAX             ; 004ac4a3
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004ac4a5
    MOV dword ptr [EBX + 0x4],EAX       ; 004ac4ac
    MOV EAX,dword ptr [ESP + 0xec]      ; 004ac4af
    MOV dword ptr [EBX + 0x8],EAX       ; 004ac4b6
    FLD float ptr [EBP + 0x8]           ; 004ac4b9
        ;   Label: LAB_004ac4b9
    FMUL ST0                            ; 004ac4bc
    FLD float ptr [EBP]                 ; 004ac4be
    FMUL ST0                            ; 004ac4c1
    FADDP                               ; 004ac4c3
    FSQRT                               ; 004ac4c5
    FLD float ptr [EBP + 0x4]           ; 004ac4c7
    CALL crt_math.c_atan2_FUN_005c1d69  ; 004ac4ca
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    MOV dword ptr [EBX + 0x1c],0x0      ; 004ac4cf
    FCHS                                ; 004ac4d6
    FSTP float ptr [EBX + 0x14]         ; 004ac4d8
    FLD float ptr [EBP + 0x8]           ; 004ac4db
    FLD float ptr [EBP]                 ; 004ac4de
    CALL crt_math.c_atan2_FUN_005c1d69  ; 004ac4e1
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    PUSH 0x3                            ; 004ac4e6
    PUSH 0x0                            ; 004ac4e8
    FSTP float ptr [EBX + 0x18]         ; 004ac4ea
    CALL core_actor.cpp_FUN_0040cc60    ; 004ac4ed
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc],0x1       ; 004ac4f2
    ADD ESP,0x8                         ; 004ac4f9
    MOV dword ptr [EBX + 0x20],EAX      ; 004ac4fc
    MOV EAX,dword ptr [ESP + 0x158]     ; 004ac4ff
    MOV dword ptr [EBX + 0x10],EAX      ; 004ac506
    TEST EAX,EAX                        ; 004ac509
    JNZ 0x004ac52d                      ; 004ac50b
        ;   XREF to: 004ac52d (CONDITIONAL_JUMP)  ; LAB_004ac52d
    ADD ESP,0x138                       ; 004ac50d
        ;   Label: LAB_004ac50d
    POP EBP                             ; 004ac513
    POP EDI                             ; 004ac514
    POP ESI                             ; 004ac515
    POP EBX                             ; 004ac516
    RET                                 ; 004ac517
    MOV EDX,dword ptr [EAX]             ; 004ac518
        ;   Label: LAB_004ac518
    MOV dword ptr [EBX],EDX             ; 004ac51a
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ac51c
    MOV dword ptr [EBX + 0x4],EDX       ; 004ac51f
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ac522
    MOV dword ptr [EBX + 0x8],EDX       ; 004ac525
    JMP 0x004ac407                      ; 004ac528
        ;   XREF to: 004ac407 (UNCONDITIONAL_JUMP)  ; LAB_004ac407
    LEA EAX,[EBX + 0x14]                ; 004ac52d
        ;   Label: LAB_004ac52d
    PUSH EAX                            ; 004ac530
    PUSH EBX                            ; 004ac531
    LEA EAX,[ESP + 0x38]                ; 004ac532
    PUSH EAX                            ; 004ac536
    CALL core_xform.cpp_FUN_005b5760    ; 004ac537
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EAX,dword ptr [EBX + 0x10]      ; 004ac53c
    ADD ESP,0xc                         ; 004ac53f
    LEA EDX,[EAX + 0x30]                ; 004ac542
    PUSH EDX                            ; 004ac545
    ADD EAX,0x20                        ; 004ac546
    PUSH EAX                            ; 004ac549
    LEA EAX,[ESP + 0x68]                ; 004ac54a
    PUSH EAX                            ; 004ac54e
    CALL core_xform.cpp_FUN_005b5620    ; 004ac54f
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004ac554
    LEA EAX,[ESP + 0x60]                ; 004ac557
    PUSH EAX                            ; 004ac55b
    LEA EAX,[ESP + 0x34]                ; 004ac55c
    PUSH EAX                            ; 004ac560
    LEA ESI,[ESP + 0x8]                 ; 004ac561
    LEA EDI,[ESP + 0x98]                ; 004ac565
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004ac56c
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004ac571
    LEA ESI,[ESP + 0x8]                 ; 004ac576
    ADD ESP,0x8                         ; 004ac57a
    LEA EAX,[ESP + 0x90]                ; 004ac57d
    MOVSD.REP ES:EDI,ESI                ; 004ac584
    PUSH EAX                            ; 004ac586
    LEA ESI,[ESP + 0xdc]                ; 004ac587
    LEA EDI,[ESP + 0xf4]                ; 004ac58e
    CALL core_xform.cpp_FUN_005b6270    ; 004ac595
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0xdc]                ; 004ac59a
    LEA EAX,[ESP + 0xf4]                ; 004ac5a1
    ADD ESP,0x4                         ; 004ac5a8
    LEA EDX,[EBX + 0x24]                ; 004ac5ab
    MOVSD ES:EDI,ESI                    ; 004ac5ae
    MOVSD ES:EDI,ESI                    ; 004ac5af
    MOVSD ES:EDI,ESI                    ; 004ac5b0
    CMP EDX,EAX                         ; 004ac5b1
    JZ 0x004ac5d2                       ; 004ac5b3
        ;   XREF to: 004ac5d2 (CONDITIONAL_JUMP)  ; LAB_004ac5d2
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004ac5b5
    MOV dword ptr [EDX],EAX             ; 004ac5bc
    MOV EAX,dword ptr [ESP + 0xf4]      ; 004ac5be
    MOV dword ptr [EDX + 0x4],EAX       ; 004ac5c5
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004ac5c8
    MOV dword ptr [EDX + 0x8],EAX       ; 004ac5cf
    LEA EAX,[ESP + 0x90]                ; 004ac5d2
        ;   Label: LAB_004ac5d2
    PUSH EAX                            ; 004ac5d9
    LEA ESI,[ESP + 0x124]               ; 004ac5da
    LEA EDI,[ESP + 0xd0]                ; 004ac5e1
    CALL core_xform.cpp_FUN_005b5930    ; 004ac5e8
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5930()
    LEA ESI,[ESP + 0x124]               ; 004ac5ed
    LEA EAX,[ESP + 0xd0]                ; 004ac5f4
    ADD ESP,0x4                         ; 004ac5fb
    LEA EDX,[EBX + 0x14]                ; 004ac5fe
    MOVSD ES:EDI,ESI                    ; 004ac601
    MOVSD ES:EDI,ESI                    ; 004ac602
    MOVSD ES:EDI,ESI                    ; 004ac603
    CMP EDX,EAX                         ; 004ac604
    JZ 0x004ac625                       ; 004ac606
        ;   XREF to: 004ac625 (CONDITIONAL_JUMP)  ; LAB_004ac625
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ac608
    MOV dword ptr [EDX],EAX             ; 004ac60f
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004ac611
    MOV dword ptr [EDX + 0x4],EAX       ; 004ac618
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004ac61b
    MOV dword ptr [EDX + 0x8],EAX       ; 004ac622
    PUSH EBP                            ; 004ac625
        ;   Label: LAB_004ac625
    MOV ECX,dword ptr [EBX + 0x10]      ; 004ac626
    LEA ESI,[ESP + 0xc4]                ; 004ac629
    PUSH ECX                            ; 004ac630
    LEA EDI,[ESP + 0x134]               ; 004ac631
    ADD EBX,0x30                        ; 004ac638
    CALL core_actor.cpp_FUN_00408b00    ; 004ac63b
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0xc8]                ; 004ac640
    ADD ESP,0x8                         ; 004ac647
    LEA EAX,[ESP + 0x12c]               ; 004ac64a
    MOVSD ES:EDI,ESI                    ; 004ac651
    MOVSD ES:EDI,ESI                    ; 004ac652
    MOVSD ES:EDI,ESI                    ; 004ac653
    CMP EBX,EAX                         ; 004ac654
    JZ 0x004ac50d                       ; 004ac656
        ;   XREF to: 004ac50d (CONDITIONAL_JUMP)  ; LAB_004ac50d
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ac65c
    MOV dword ptr [EBX],EAX             ; 004ac663
    MOV EAX,dword ptr [ESP + 0x130]     ; 004ac665
    MOV dword ptr [EBX + 0x4],EAX       ; 004ac66c
    MOV EAX,dword ptr [ESP + 0x134]     ; 004ac66f
    MOV dword ptr [EBX + 0x8],EAX       ; 004ac676
    ADD ESP,0x138                       ; 004ac679
    POP EBP                             ; 004ac67f
    POP EDI                             ; 004ac680
    POP ESI                             ; 004ac681
    POP EBX                             ; 004ac682
    RET                                 ; 004ac683

