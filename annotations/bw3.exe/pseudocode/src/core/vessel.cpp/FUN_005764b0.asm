; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vessel_cpp_FUN_005764b0(CDemonActor *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7097
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_flame.cpp_FUN_004a5aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005764b0
        ;   Label: core_vessel.cpp_FUN_005764b0
    PUSH ESI                            ; 005764b1
    PUSH EDI                            ; 005764b2
    PUSH EBP                            ; 005764b3
    MOV EBP,ESP                         ; 005764b4
    SUB ESP,0x30                        ; 005764b6
    AND ESP,0xfffffff8                  ; 005764b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005764bc
    PUSH EBX                            ; 005764bf
    CALL core_actor.cpp_FUN_00408890    ; 005764c0
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005764c5
    LEA EDX,[EBX + 0x158]               ; 005764c8
    PUSH EDX                            ; 005764ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 005764cf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005764d4
    LEA EDX,[EBX + 0x66c]               ; 005764d7
    PUSH EDX                            ; 005764dd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 005764de
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005764e3
    MOV EDX,dword ptr [EBX + 0x154]     ; 005764e6
    PUSH EBX                            ; 005764ec
    LEA ESI,[ESP + 0x4]                 ; 005764ed
    CALL dword ptr [EDX + 0x1c]         ; 005764f1
    ADD ESP,0x4                         ; 005764f4
    MOV EDX,dword ptr [EBX + 0x3a8]     ; 005764f7
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005764fd
    TEST EDX,EDX                        ; 00576507
    JZ 0x0057659f                       ; 00576509
        ;   XREF to: 0057659f (CONDITIONAL_JUMP)  ; LAB_0057659f
    LEA ECX,[EDX + 0x20]                ; 0057650f
    LEA EDI,[ESP + 0x18]                ; 00576512
    LEA ESI,[ESP + 0x24]                ; 00576516
    FLD float ptr [ECX]                 ; 0057651a
    FLD float ptr [ECX + 0x4]           ; 0057651c
    LEA EDX,[EBX + 0x20]                ; 0057651f
    FLD float ptr [ECX + 0x8]           ; 00576522
    FXCH ST2                            ; 00576525
    FSUB float ptr [EDX]                ; 00576527
    FXCH                                ; 00576529
    FSUB float ptr [EDX + 0x4]          ; 0057652b
    FXCH ST2                            ; 0057652e
    FSUB float ptr [EDX + 0x8]          ; 00576530
    FXCH                                ; 00576533
    FSTP float ptr [ESP + 0x24]         ; 00576535
    FXCH                                ; 00576539
    FSTP float ptr [ESP + 0x28]         ; 0057653b
    FSTP float ptr [ESP + 0x2c]         ; 0057653f
    MOVSD ES:EDI,ESI                    ; 00576543
    MOVSD ES:EDI,ESI                    ; 00576544
    MOVSD ES:EDI,ESI                    ; 00576545
    FLD float ptr [ESP + 0x1c]          ; 00576546
    FMUL ST0                            ; 0057654a
    FLD float ptr [ESP + 0x18]          ; 0057654c
    FMUL ST0                            ; 00576550
    FADDP                               ; 00576552
    FLD float ptr [ESP + 0x20]          ; 00576554
    FMUL ST0                            ; 00576558
    FADDP                               ; 0057655a
    FSQRT                               ; 0057655c
    FCOMP double ptr [0x005d7097]       ; 0057655e | DAT_005d7097
    FNSTSW AX                           ; 00576564
    SAHF                                ; 00576566
    JNC 0x0057659f                      ; 00576567
        ;   XREF to: 0057659f (CONDITIONAL_JUMP)  ; LAB_0057659f
    MOV EAX,dword ptr [ECX]             ; 00576569
    MOV dword ptr [EDX],EAX             ; 0057656b
    MOV EAX,dword ptr [ECX + 0x4]       ; 0057656d
    MOV dword ptr [EDX + 0x4],EAX       ; 00576570
    MOV EAX,dword ptr [ECX + 0x8]       ; 00576573
    MOV dword ptr [EDX + 0x8],EAX       ; 00576576
    MOV ECX,dword ptr [ECX + 0xc]       ; 00576579
    MOV dword ptr [EDX + 0xc],ECX       ; 0057657c
    MOV ECX,dword ptr [EBX + 0x3a8]     ; 0057657f
    LEA EDX,[EBX + 0x30]                ; 00576585
    ADD ECX,0x30                        ; 00576588
    CMP EDX,ECX                         ; 0057658b
    JZ 0x0057659f                       ; 0057658d
        ;   XREF to: 0057659f (CONDITIONAL_JUMP)  ; LAB_0057659f
    MOV EAX,dword ptr [ECX]             ; 0057658f
    MOV dword ptr [EDX],EAX             ; 00576591
    MOV EAX,dword ptr [ECX + 0x4]       ; 00576593
    MOV dword ptr [EDX + 0x4],EAX       ; 00576596
    MOV EAX,dword ptr [ECX + 0x8]       ; 00576599
    MOV dword ptr [EDX + 0x8],EAX       ; 0057659c
    MOV dword ptr [EBX + 0x3c0],0x1     ; 0057659f
        ;   Label: LAB_0057659f
    MOV dword ptr [EBX + 0x56c],0x0     ; 005765a9
    MOV dword ptr [EBX + 0x578],0x1     ; 005765b3
    MOV dword ptr [EBX + 0x570],0x0     ; 005765bd
    MOV dword ptr [EBX + 0x51c],0x3f000000 ; 005765c7
    LEA EDX,[EBX + 0x3c4]               ; 005765d1
    MOV dword ptr [EBX + 0x520],0x3f800000 ; 005765d7
    PUSH EDX                            ; 005765e1
    MOV dword ptr [EBX + 0x524],0x3f000000 ; 005765e2
    CALL core_flame.cpp_FUN_004a5aa0    ; 005765ec
        ;   XREF to: 004a5aa0 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_004a5aa0()
    ADD ESP,0x4                         ; 005765f1
    MOV dword ptr [EBX + 0xfc],0x1      ; 005765f4
    MOV ESP,EBP                         ; 005765fe
    POP EBP                             ; 00576600
    POP EDI                             ; 00576601
    POP ESI                             ; 00576602
    POP EBX                             ; 00576603
    RET                                 ; 00576604

