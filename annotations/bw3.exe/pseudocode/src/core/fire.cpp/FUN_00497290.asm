; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00497290(float *param_1,float *param_2,float *param_3,float param_4,float param_5)
;
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined        Stack[-0x118]:1  local_118
; undefined        Stack[-0xe8]:1  local_e8
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
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
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_fire.cpp_FUN_004a2090 at 004a2254
;
; Referenced Globals:
;   undefined4 DAT_005c0504
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_xform.cpp_FUN_00583800
;   core_xform.cpp_FUN_00583940
;   core_xform.cpp_FUN_00583b10
;   core_xform.cpp_FUN_00584450
;   core_xform.cpp_multiplyMatrix3x4_FUN_005833e0
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497290
        ;   Label: core_fire.cpp_FUN_00497290
    PUSH ESI                            ; 00497291
    PUSH EDI                            ; 00497292
    PUSH EBP                            ; 00497293
    SUB ESP,0x138                       ; 00497294
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0049729a
    MOV EAX,dword ptr [ESP + 0x150]     ; 004972a1
    MOV EBP,dword ptr [ESP + 0x154]     ; 004972a8
    CMP EBX,EAX                         ; 004972af
    JNZ 0x004973d2                      ; 004972b1
        ;   XREF to: 004973d2 (CONDITIONAL_JUMP)  ; LAB_004973d2
    FLD float ptr [0x005c0504]          ; 004972b7 | DAT_005c0504
        ;   Label: LAB_004972b7
    FLD float ptr [EBP]                 ; 004972bd
    FMUL ST1                            ; 004972c0
    FLD float ptr [EBP + 0x4]           ; 004972c2
    FMUL ST2                            ; 004972c5
    FLD float ptr [EBP + 0x8]           ; 004972c7
    FMULP ST3                           ; 004972ca
    LEA EDI,[ESP + 0x108]               ; 004972cc
    LEA ESI,[ESP + 0xfc]                ; 004972d3
    FXCH                                ; 004972da
    FSTP float ptr [ESP + 0xfc]         ; 004972dc
    FSTP float ptr [ESP + 0x100]        ; 004972e3
    FSTP float ptr [ESP + 0x104]        ; 004972ea
    MOVSD ES:EDI,ESI                    ; 004972f1
    MOVSD ES:EDI,ESI                    ; 004972f2
    MOVSD ES:EDI,ESI                    ; 004972f3
    LEA EAX,[ESP + 0xcc]                ; 004972f4
    FLD float ptr [EBX]                 ; 004972fb
    FLD float ptr [EBX + 0x4]           ; 004972fd
    FLD float ptr [EBX + 0x8]           ; 00497300
    LEA EDI,[ESP + 0xcc]                ; 00497303
    LEA ESI,[ESP + 0xf0]                ; 0049730a
    FXCH ST2                            ; 00497311
    FADD float ptr [ESP + 0x108]        ; 00497313
    FXCH                                ; 0049731a
    FADD float ptr [ESP + 0x10c]        ; 0049731c
    FXCH ST2                            ; 00497323
    FADD float ptr [ESP + 0x110]        ; 00497325
    FXCH                                ; 0049732c
    FSTP float ptr [ESP + 0xf0]         ; 0049732e
    FXCH                                ; 00497335
    FSTP float ptr [ESP + 0xf4]         ; 00497337
    FSTP float ptr [ESP + 0xf8]         ; 0049733e
    MOVSD ES:EDI,ESI                    ; 00497345
    MOVSD ES:EDI,ESI                    ; 00497346
    MOVSD ES:EDI,ESI                    ; 00497347
    CMP EBX,EAX                         ; 00497348
    JZ 0x00497369                       ; 0049734a
        ;   XREF to: 00497369 (CONDITIONAL_JUMP)  ; LAB_00497369
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0049734c
    MOV dword ptr [EBX],EAX             ; 00497353
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00497355
    MOV dword ptr [EBX + 0x4],EAX       ; 0049735c
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0049735f
    MOV dword ptr [EBX + 0x8],EAX       ; 00497366
    FLD float ptr [EBP + 0x8]           ; 00497369
        ;   Label: LAB_00497369
    FMUL ST0                            ; 0049736c
    FLD float ptr [EBP]                 ; 0049736e
    FMUL ST0                            ; 00497371
    FADDP                               ; 00497373
    FSQRT                               ; 00497375
    FLD float ptr [EBP + 0x4]           ; 00497377
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 0049737a
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV dword ptr [EBX + 0x1c],0x0      ; 0049737f
    FCHS                                ; 00497386
    FSTP float ptr [EBX + 0x14]         ; 00497388
    FLD float ptr [EBP + 0x8]           ; 0049738b
    FLD float ptr [EBP]                 ; 0049738e
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00497391
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    PUSH 0x3                            ; 00497396
    PUSH 0x0                            ; 00497398
    FSTP float ptr [EBX + 0x18]         ; 0049739a
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0049739d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    MOV dword ptr [EBX + 0xc],0x1       ; 004973a2
    ADD ESP,0x8                         ; 004973a9
    MOV dword ptr [EBX + 0x20],EAX      ; 004973ac
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004973af
    MOV dword ptr [EBX + 0x3c],EAX      ; 004973b6
    MOV EAX,dword ptr [ESP + 0x158]     ; 004973b9
    MOV dword ptr [EBX + 0x10],EAX      ; 004973c0
    TEST EAX,EAX                        ; 004973c3
    JNZ 0x004973e7                      ; 004973c5
        ;   XREF to: 004973e7 (CONDITIONAL_JUMP)  ; LAB_004973e7
    ADD ESP,0x138                       ; 004973c7
        ;   Label: LAB_004973c7
    POP EBP                             ; 004973cd
    POP EDI                             ; 004973ce
    POP ESI                             ; 004973cf
    POP EBX                             ; 004973d0
    RET                                 ; 004973d1
    MOV EDX,dword ptr [EAX]             ; 004973d2
        ;   Label: LAB_004973d2
    MOV dword ptr [EBX],EDX             ; 004973d4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004973d6
    MOV dword ptr [EBX + 0x4],EDX       ; 004973d9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004973dc
    MOV dword ptr [EBX + 0x8],EDX       ; 004973df
    JMP 0x004972b7                      ; 004973e2
        ;   XREF to: 004972b7 (UNCONDITIONAL_JUMP)  ; LAB_004972b7
    LEA EAX,[EBX + 0x14]                ; 004973e7
        ;   Label: LAB_004973e7
    PUSH EAX                            ; 004973ea
    PUSH EBX                            ; 004973eb
    LEA EAX,[ESP + 0x68]                ; 004973ec
    PUSH EAX                            ; 004973f0
    CALL core_xform.cpp_FUN_00583940    ; 004973f1
        ;   XREF to: 00583940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583940()
    MOV EAX,dword ptr [EBX + 0x10]      ; 004973f6
    ADD ESP,0xc                         ; 004973f9
    LEA EDX,[EAX + 0x30]                ; 004973fc
    PUSH EDX                            ; 004973ff
    ADD EAX,0x20                        ; 00497400
    PUSH EAX                            ; 00497403
    LEA EAX,[ESP + 0x98]                ; 00497404
    PUSH EAX                            ; 0049740b
    CALL core_xform.cpp_FUN_00583800    ; 0049740c
        ;   XREF to: 00583800 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_00583800(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 00497411
    LEA EAX,[ESP + 0x90]                ; 00497414
    PUSH EAX                            ; 0049741b
    LEA EAX,[ESP + 0x64]                ; 0049741c
    PUSH EAX                            ; 00497420
    LEA ESI,[ESP + 0x8]                 ; 00497421
    LEA EDI,[ESP + 0x38]                ; 00497425
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005833e0 ; 00497429
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005833e0()
    MOV ECX,0xc                         ; 0049742e
    LEA ESI,[ESP + 0x8]                 ; 00497433
    ADD ESP,0x8                         ; 00497437
    LEA EAX,[ESP + 0x30]                ; 0049743a
    MOVSD.REP ES:EDI,ESI                ; 0049743e
    PUSH EAX                            ; 00497440
    LEA ESI,[ESP + 0x118]               ; 00497441
    LEA EDI,[ESP + 0xe8]                ; 00497448
    CALL core_xform.cpp_FUN_00584450    ; 0049744f
        ;   XREF to: 00584450 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00584450()
    LEA ESI,[ESP + 0x118]               ; 00497454
    LEA EAX,[ESP + 0xe8]                ; 0049745b
    ADD ESP,0x4                         ; 00497462
    LEA EDX,[EBX + 0x24]                ; 00497465
    MOVSD ES:EDI,ESI                    ; 00497468
    MOVSD ES:EDI,ESI                    ; 00497469
    MOVSD ES:EDI,ESI                    ; 0049746a
    CMP EDX,EAX                         ; 0049746b
    JZ 0x0049748c                       ; 0049746d
        ;   XREF to: 0049748c (CONDITIONAL_JUMP)  ; LAB_0049748c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0049746f
    MOV dword ptr [EDX],EAX             ; 00497476
    MOV EAX,dword ptr [ESP + 0xe8]      ; 00497478
    MOV dword ptr [EDX + 0x4],EAX       ; 0049747f
    MOV EAX,dword ptr [ESP + 0xec]      ; 00497482
    MOV dword ptr [EDX + 0x8],EAX       ; 00497489
    LEA EAX,[ESP + 0x30]                ; 0049748c
        ;   Label: LAB_0049748c
    PUSH EAX                            ; 00497490
    LEA ESI,[ESP + 0x130]               ; 00497491
    LEA EDI,[ESP + 0xdc]                ; 00497498
    CALL core_xform.cpp_FUN_00583b10    ; 0049749f
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583b10()
    LEA ESI,[ESP + 0x130]               ; 004974a4
    LEA EAX,[ESP + 0xdc]                ; 004974ab
    ADD ESP,0x4                         ; 004974b2
    LEA EDX,[EBX + 0x14]                ; 004974b5
    MOVSD ES:EDI,ESI                    ; 004974b8
    MOVSD ES:EDI,ESI                    ; 004974b9
    MOVSD ES:EDI,ESI                    ; 004974ba
    CMP EDX,EAX                         ; 004974bb
    JZ 0x004974dc                       ; 004974bd
        ;   XREF to: 004974dc (CONDITIONAL_JUMP)  ; LAB_004974dc
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004974bf
    MOV dword ptr [EDX],EAX             ; 004974c6
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004974c8
    MOV dword ptr [EDX + 0x4],EAX       ; 004974cf
    MOV EAX,dword ptr [ESP + 0xe0]      ; 004974d2
    MOV dword ptr [EDX + 0x8],EAX       ; 004974d9
    PUSH EBP                            ; 004974dc
        ;   Label: LAB_004974dc
    MOV ECX,dword ptr [EBX + 0x10]      ; 004974dd
    LEA ESI,[ESP + 0x124]               ; 004974e0
    PUSH ECX                            ; 004974e7
    LEA EDI,[ESP + 0xc8]                ; 004974e8
    ADD EBX,0x30                        ; 004974ef
    CALL core_actor.cpp_FUN_00408b40    ; 004974f2
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x128]               ; 004974f7
    ADD ESP,0x8                         ; 004974fe
    LEA EAX,[ESP + 0xc0]                ; 00497501
    MOVSD ES:EDI,ESI                    ; 00497508
    MOVSD ES:EDI,ESI                    ; 00497509
    MOVSD ES:EDI,ESI                    ; 0049750a
    CMP EBX,EAX                         ; 0049750b
    JZ 0x004973c7                       ; 0049750d
        ;   XREF to: 004973c7 (CONDITIONAL_JUMP)  ; LAB_004973c7
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00497513
    MOV dword ptr [EBX],EAX             ; 0049751a
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0049751c
    MOV dword ptr [EBX + 0x4],EAX       ; 00497523
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00497526
    MOV dword ptr [EBX + 0x8],EAX       ; 0049752d
    ADD ESP,0x138                       ; 00497530
    POP EBP                             ; 00497536
    POP EDI                             ; 00497537
    POP ESI                             ; 00497538
    POP EBX                             ; 00497539
    RET                                 ; 0049753a

