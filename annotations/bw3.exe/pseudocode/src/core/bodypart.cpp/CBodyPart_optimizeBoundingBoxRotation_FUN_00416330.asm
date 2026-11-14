; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   out_bbox_min
; CVector3i *      Stack[0xc]:4   out_bbox_max
; Local Variables:
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 at 0041584f
;
; Referenced Globals:
;   undefined4 DAT_005b6c8e
;   undefined4 DAT_005b6c92
;   undefined4 DAT_005b6c96
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416330
        ;   Label: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_00416330
    PUSH ESI                            ; 00416331
    PUSH EDI                            ; 00416332
    PUSH EBP                            ; 00416333
    SUB ESP,0xa8                        ; 00416334
    MOV EDX,0x7fffffff                  ; 0041633a
    XOR ECX,ECX                         ; 0041633f
    MOV dword ptr [ESP + 0x78],EDX      ; 00416341
    MOV dword ptr [ESP + 0x70],ECX      ; 00416345
    MOV EAX,dword ptr [ESP + 0x70]      ; 00416349
        ;   Label: LAB_00416349
    XOR EBX,EBX                         ; 0041634d
    MOV dword ptr [ESP + 0x74],EAX      ; 0041634f
    MOV dword ptr [ESP + 0x7c],EBX      ; 00416353
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00416357
        ;   Label: LAB_00416357
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041635b
    MOV EAX,dword ptr [ESP + 0x74]      ; 00416362
    FILD dword ptr [ESP + 0xa4]         ; 00416366
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041636d
    FLD float ptr [0x005b6c8e]          ; 00416374 | DAT_005b6c8e
    FXCH                                ; 0041637a
    FMUL ST1                            ; 0041637c
    FILD dword ptr [ESP + 0xa4]         ; 0041637e
    FMULP ST2                           ; 00416385
    FLD float ptr [0x005b6c92]          ; 00416387 | DAT_005b6c92
    FXCH                                ; 0041638d
    FMUL ST1                            ; 0041638f
    FXCH ST2                            ; 00416391
    FMULP                               ; 00416393
    XOR ESI,ESI                         ; 00416395
    LEA EAX,[ESP + 0x4c]                ; 00416397
    MOV dword ptr [ESP + 0x54],ESI      ; 0041639b
    PUSH EAX                            ; 0041639f
    LEA EAX,[ESP + 0x4]                 ; 004163a0
    FXCH                                ; 004163a4
    FSTP float ptr [ESP + 0x50]         ; 004163a6
    PUSH EAX                            ; 004163aa
    FSTP float ptr [ESP + 0x58]         ; 004163ab
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 004163af
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004163b4
    FLD float ptr [ESP]                 ; 004163b7
    FMUL float ptr [0x005b6c96]         ; 004163ba | DAT_005b6c96
    FLD float ptr [ESP + 0x4]           ; 004163c0
    FMUL float ptr [0x005b6c96]         ; 004163c4 | DAT_005b6c96
    FLD float ptr [ESP + 0x8]           ; 004163ca
    FMUL float ptr [0x005b6c96]         ; 004163ce | DAT_005b6c96
    FLD float ptr [ESP + 0xc]           ; 004163d4
    FMUL float ptr [0x005b6c96]         ; 004163d8 | DAT_005b6c96
    FLD float ptr [ESP + 0x10]          ; 004163de
    FMUL float ptr [0x005b6c96]         ; 004163e2 | DAT_005b6c96
    FLD float ptr [ESP + 0x14]          ; 004163e8
    FMUL float ptr [0x005b6c96]         ; 004163ec | DAT_005b6c96
    FLD float ptr [ESP + 0x18]          ; 004163f2
    FMUL float ptr [0x005b6c96]         ; 004163f6 | DAT_005b6c96
    MOV EDI,0x7fffffff                  ; 004163fc
    FXCH ST6                            ; 00416401
    CALL crt_math.c_round_FUN_005a3120  ; 00416403
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x98]        ; 00416408
    FLD float ptr [ESP + 0x1c]          ; 0041640f
    FMUL float ptr [0x005b6c96]         ; 00416413 | DAT_005b6c96
    MOV EBP,EDI                         ; 00416419
    FXCH ST5                            ; 0041641b
    CALL crt_math.c_round_FUN_005a3120  ; 0041641d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x9c]        ; 00416422
    FLD float ptr [ESP + 0x20]          ; 00416429
    FMUL float ptr [0x005b6c96]         ; 0041642d | DAT_005b6c96
    XOR EBP,EDI                         ; 00416433
    MOV EDX,0x80000001                  ; 00416435
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0041643a
    MOV dword ptr [ESP + 0x60],EDI      ; 00416441
    MOV dword ptr [ESP + 0x5c],EDI      ; 00416445
    MOV dword ptr [ESP + 0x58],EDI      ; 00416449
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041644d
    MOV dword ptr [ESP + 0x68],EDX      ; 00416451
    MOV dword ptr [ESP + 0x64],EDX      ; 00416455
    MOV ESI,dword ptr [EAX + 0x174]     ; 00416459
    FXCH ST4                            ; 0041645f
    CALL crt_math.c_round_FUN_005a3120  ; 00416461
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 00416466
    CALL crt_math.c_round_FUN_005a3120  ; 00416468
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST2                            ; 0041646d
    CALL crt_math.c_round_FUN_005a3120  ; 0041646f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH                                ; 00416474
    CALL crt_math.c_round_FUN_005a3120  ; 00416476
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST6                            ; 0041647b
    CALL crt_math.c_round_FUN_005a3120  ; 0041647d
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST5                            ; 00416482
    CALL crt_math.c_round_FUN_005a3120  ; 00416484
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST4                            ; 00416489
    CALL crt_math.c_round_FUN_005a3120  ; 0041648b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FXCH ST3                            ; 00416490
    FISTP dword ptr [ESP + 0x88]        ; 00416492
    FXCH                                ; 00416499
    FISTP dword ptr [ESP + 0x8c]        ; 0041649b
    FISTP dword ptr [ESP + 0x90]        ; 004164a2
    FXCH ST3                            ; 004164a9
    FISTP dword ptr [ESP + 0x94]        ; 004164ab
    FXCH                                ; 004164b2
    FISTP dword ptr [ESP + 0x84]        ; 004164b4
    FISTP dword ptr [ESP + 0x80]        ; 004164bb
    FISTP dword ptr [ESP + 0xa0]        ; 004164c2
    TEST ESI,ESI                        ; 004164c9
    JLE 0x004165f9                      ; 004164cb
        ;   XREF to: 004165f9 (CONDITIONAL_JUMP)  ; LAB_004165f9
    XOR EDI,EDI                         ; 004164d1
    MOV ECX,dword ptr [ESP + 0xbc]      ; 004164d3
        ;   Label: LAB_004164d3
    MOV ECX,dword ptr [ECX + 0x178]     ; 004164da
    MOV EAX,dword ptr [ESP + 0x98]      ; 004164e0
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 004164e7
    IMUL EDX                            ; 004164ea
    SHRD EAX,EDX,0x10                   ; 004164ec
    MOV EBX,EAX                         ; 004164f0
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 004164f2
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004164f6
    IMUL EDX                            ; 004164fd
    SHRD EAX,EDX,0x10                   ; 004164ff
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 00416503
    ADD EBX,EAX                         ; 00416507
    MOV EAX,dword ptr [ESP + 0x84]      ; 00416509
    IMUL EDX                            ; 00416510
    SHRD EAX,EDX,0x10                   ; 00416512
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 00416516
    ADD EBX,EAX                         ; 00416519
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041651b
    IMUL EDX                            ; 00416522
    SHRD EAX,EDX,0x10                   ; 00416524
    MOV ESI,EAX                         ; 00416528
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 0041652a
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041652e
    IMUL EDX                            ; 00416535
    SHRD EAX,EDX,0x10                   ; 00416537
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041653b
    ADD ESI,EAX                         ; 0041653f
    MOV EAX,dword ptr [ESP + 0x80]      ; 00416541
    IMUL EDX                            ; 00416548
    SHRD EAX,EDX,0x10                   ; 0041654a
    MOV EDX,dword ptr [ECX + EDI*0x1]   ; 0041654e
    ADD ESI,EAX                         ; 00416551
    MOV EAX,dword ptr [ESP + 0x88]      ; 00416553
    IMUL EDX                            ; 0041655a
    SHRD EAX,EDX,0x10                   ; 0041655c
    MOV dword ptr [ESP + 0xa4],EAX      ; 00416560
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x4] ; 00416567
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041656b
    IMUL EDX                            ; 00416572
    SHRD EAX,EDX,0x10                   ; 00416574
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00416578
    ADD EDX,EAX                         ; 0041657f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00416581
    MOV dword ptr [ESP + 0xa4],EDX      ; 00416588
    MOV EDX,dword ptr [ECX + EDI*0x1 + 0x8] ; 0041658f
    IMUL EDX                            ; 00416593
    SHRD EAX,EDX,0x10                   ; 00416595
    MOV ECX,dword ptr [ESP + 0xa4]      ; 00416599
    MOV EDX,dword ptr [ESP + 0x58]      ; 004165a0
    ADD EAX,ECX                         ; 004165a4
    CMP EBX,EDX                         ; 004165a6
    JL 0x004166bc                       ; 004165a8
        ;   XREF to: 004166bc (CONDITIONAL_JUMP)  ; LAB_004166bc
    CMP EBX,dword ptr [ESP + 0x64]      ; 004165ae
        ;   Label: LAB_004165ae
    JLE 0x004165b8                      ; 004165b2
        ;   XREF to: 004165b8 (CONDITIONAL_JUMP)  ; LAB_004165b8
    MOV dword ptr [ESP + 0x64],EBX      ; 004165b4
    CMP ESI,dword ptr [ESP + 0x5c]      ; 004165b8
        ;   Label: LAB_004165b8
    JGE 0x004165c2                      ; 004165bc
        ;   XREF to: 004165c2 (CONDITIONAL_JUMP)  ; LAB_004165c2
    MOV dword ptr [ESP + 0x5c],ESI      ; 004165be
    CMP ESI,dword ptr [ESP + 0x68]      ; 004165c2
        ;   Label: LAB_004165c2
    JLE 0x004165cc                      ; 004165c6
        ;   XREF to: 004165cc (CONDITIONAL_JUMP)  ; LAB_004165cc
    MOV dword ptr [ESP + 0x68],ESI      ; 004165c8
    CMP EAX,dword ptr [ESP + 0x60]      ; 004165cc
        ;   Label: LAB_004165cc
    JGE 0x004165d6                      ; 004165d0
        ;   XREF to: 004165d6 (CONDITIONAL_JUMP)  ; LAB_004165d6
    MOV dword ptr [ESP + 0x60],EAX      ; 004165d2
    CMP EAX,dword ptr [ESP + 0x6c]      ; 004165d6
        ;   Label: LAB_004165d6
    JLE 0x004165e0                      ; 004165da
        ;   XREF to: 004165e0 (CONDITIONAL_JUMP)  ; LAB_004165e0
    MOV dword ptr [ESP + 0x6c],EAX      ; 004165dc
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004165e0
        ;   Label: LAB_004165e0
    INC EBP                             ; 004165e7
    MOV EDX,dword ptr [EAX + 0x174]     ; 004165e8
    ADD EDI,0xc                         ; 004165ee
    CMP EBP,EDX                         ; 004165f1
    JL 0x004164d3                       ; 004165f3
        ;   XREF to: 004164d3 (CONDITIONAL_JUMP)  ; LAB_004164d3
    MOV EDX,dword ptr [ESP + 0x64]      ; 004165f9
        ;   Label: LAB_004165f9
    MOV ECX,dword ptr [ESP + 0x58]      ; 004165fd
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00416601
    SUB EDX,ECX                         ; 00416605
    MOV ECX,dword ptr [ESP + 0x68]      ; 00416607
    SUB ECX,EBX                         ; 0041660b
    MOV EAX,EDX                         ; 0041660d
    CMP ECX,EDX                         ; 0041660f
    JLE 0x00416615                      ; 00416611
        ;   XREF to: 00416615 (CONDITIONAL_JUMP)  ; LAB_00416615
    MOV EAX,ECX                         ; 00416613
    CMP EAX,dword ptr [ESP + 0x78]      ; 00416615
        ;   Label: LAB_00416615
    JGE 0x00416659                      ; 00416619
        ;   XREF to: 00416659 (CONDITIONAL_JUMP)  ; LAB_00416659
    LEA EDI,[ESP + 0x28]                ; 0041661b
    LEA ESI,[ESP + 0x58]                ; 0041661f
    MOVSD ES:EDI,ESI                    ; 00416623
    MOVSD ES:EDI,ESI                    ; 00416624
    MOVSD ES:EDI,ESI                    ; 00416625
    LEA EDX,[ESP + 0x40]                ; 00416626
    LEA EDI,[ESP + 0x34]                ; 0041662a
    LEA ESI,[ESP + 0x64]                ; 0041662e
    MOV dword ptr [ESP + 0x78],EAX      ; 00416632
    LEA EAX,[ESP + 0x4c]                ; 00416636
    MOVSD ES:EDI,ESI                    ; 0041663a
    MOVSD ES:EDI,ESI                    ; 0041663b
    MOVSD ES:EDI,ESI                    ; 0041663c
    CMP EDX,EAX                         ; 0041663d
    JZ 0x00416659                       ; 0041663f
        ;   XREF to: 00416659 (CONDITIONAL_JUMP)  ; LAB_00416659
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00416641
    MOV dword ptr [ESP + 0x40],EAX      ; 00416645
    MOV EAX,dword ptr [ESP + 0x50]      ; 00416649
    MOV dword ptr [ESP + 0x44],EAX      ; 0041664d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00416651
    MOV dword ptr [ESP + 0x48],EAX      ; 00416655
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00416659
        ;   Label: LAB_00416659
    ADD EDI,0x2                         ; 0041665d
    MOV dword ptr [ESP + 0x7c],EDI      ; 00416660
    CMP EDI,0x18                        ; 00416664
    JNZ 0x00416357                      ; 00416667
        ;   XREF to: 00416357 (CONDITIONAL_JUMP)  ; LAB_00416357
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041666d
    ADD EAX,0x2                         ; 00416671
    MOV dword ptr [ESP + 0x70],EAX      ; 00416674
    CMP EAX,EDI                         ; 00416678
    JNZ 0x00416349                      ; 0041667a
        ;   XREF to: 00416349 (CONDITIONAL_JUMP)  ; LAB_00416349
    MOV EDI,dword ptr [ESP + 0xc0]      ; 00416680
    LEA ESI,[ESP + 0x28]                ; 00416687
    MOVSD ES:EDI,ESI                    ; 0041668b
    MOVSD ES:EDI,ESI                    ; 0041668c
    MOVSD ES:EDI,ESI                    ; 0041668d
    MOV EDI,dword ptr [ESP + 0xc4]      ; 0041668e
    LEA ESI,[ESP + 0x34]                ; 00416695
    LEA EAX,[ESP + 0x40]                ; 00416699
    MOVSD ES:EDI,ESI                    ; 0041669d
    MOVSD ES:EDI,ESI                    ; 0041669e
    MOVSD ES:EDI,ESI                    ; 0041669f
    PUSH EAX                            ; 004166a0
    MOV ESI,dword ptr [ESP + 0xc0]      ; 004166a1
    PUSH ESI                            ; 004166a8
    CALL core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30 ; 004166a9
        ;   XREF to: 00415e30 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_applyRotation_FUN_00415e30(CBodyPart * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004166ae
    ADD ESP,0xa8                        ; 004166b1
    POP EBP                             ; 004166b7
    POP EDI                             ; 004166b8
    POP ESI                             ; 004166b9
    POP EBX                             ; 004166ba
    RET                                 ; 004166bb
    MOV dword ptr [ESP + 0x58],EBX      ; 004166bc
        ;   Label: LAB_004166bc
    JMP 0x004165ae                      ; 004166c0
        ;   XREF to: 004165ae (UNCONDITIONAL_JUMP)  ; LAB_004165ae

