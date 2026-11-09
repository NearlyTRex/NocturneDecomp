; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grave_cpp_FUN_004ca540(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca540
        ;   Label: core_grave.cpp_FUN_004ca540
    PUSH EDI                            ; 004ca541
    SUB ESP,0x1c                        ; 004ca542
    MOV ECX,dword ptr [ESP + 0x28]      ; 004ca545
    MOV EBX,ESI                         ; 004ca549
    MOV EDX,dword ptr [0x00618170]      ; 004ca54b | DAT_00618170
    MOV ESI,dword ptr [EDX + 0x1008]    ; 004ca551 | DAT_01d192f8
    LEA EAX,[ECX + 0x2b4]               ; 004ca557
    TEST ESI,ESI                        ; 004ca55d
    JZ 0x004ca5bf                       ; 004ca55f
        ;   XREF to: 004ca5bf (CONDITIONAL_JUMP)  ; LAB_004ca5bf
    PUSH EAX                            ; 004ca561
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004ca562
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    LEA EDX,[EAX + 0x338]               ; 004ca567
    ADD ESP,0x4                         ; 004ca56d
    MOV EAX,ESP                         ; 004ca570
    MOV ECX,EDX                         ; 004ca572
    CMP EAX,EDX                         ; 004ca574
    JZ 0x004ca58b                       ; 004ca576
        ;   XREF to: 004ca58b (CONDITIONAL_JUMP)  ; LAB_004ca58b
    MOV EAX,dword ptr [EDX]             ; 004ca578
    MOV dword ptr [ESP],EAX             ; 004ca57a
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ca57d
    MOV dword ptr [ESP + 0x4],EAX       ; 004ca580
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ca584
    MOV dword ptr [ESP + 0x8],EAX       ; 004ca587
    LEA EAX,[ESP + 0xc]                 ; 004ca58b
        ;   Label: LAB_004ca58b
    LEA EDX,[ECX + 0xc]                 ; 004ca58f
    CMP EAX,EDX                         ; 004ca592
    JNZ 0x004ca5a9                      ; 004ca594
        ;   XREF to: 004ca5a9 (CONDITIONAL_JUMP)  ; LAB_004ca5a9
    MOV ECX,0x6                         ; 004ca596
        ;   Label: LAB_004ca596
    MOV ESI,ESP                         ; 004ca59b
    MOV EDI,EBX                         ; 004ca59d
    MOVSD.REP ES:EDI,ESI                ; 004ca59f
    MOV EAX,EBX                         ; 004ca5a1
    ADD ESP,0x1c                        ; 004ca5a3
    POP EDI                             ; 004ca5a6
    POP EBX                             ; 004ca5a7
    RET                                 ; 004ca5a8
    MOV EAX,dword ptr [EDX]             ; 004ca5a9
        ;   Label: LAB_004ca5a9
    MOV dword ptr [ESP + 0xc],EAX       ; 004ca5ab
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ca5af
    MOV dword ptr [ESP + 0x10],EAX      ; 004ca5b2
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ca5b6
    MOV dword ptr [ESP + 0x14],EAX      ; 004ca5b9
    JMP 0x004ca596                      ; 004ca5bd
        ;   XREF to: 004ca596 (UNCONDITIONAL_JUMP)  ; LAB_004ca596
    FLD float ptr [ECX + 0x430]         ; 004ca5bf
        ;   Label: LAB_004ca5bf
    CALL crt_math.c_round_FUN_005b7ff0  ; 004ca5c5
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 004ca5ca
    FISTP dword ptr [ESP + 0x1c]        ; 004ca5cb
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004ca5cf
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004ca5d4
    MOV ECX,dword ptr [ESP + 0x18]      ; 004ca5d7
    MOV EDX,EAX                         ; 004ca5db
    LEA EAX,[ECX*0x4 + 0x0]             ; 004ca5dd
    SUB EAX,ECX                         ; 004ca5e4
    MOV EDX,dword ptr [EDX + 0x350]     ; 004ca5e6
    SHL EAX,0x3                         ; 004ca5ec
    ADD EDX,EAX                         ; 004ca5ef
    MOV EAX,ESP                         ; 004ca5f1
    MOV ECX,EDX                         ; 004ca5f3
    CMP EAX,EDX                         ; 004ca5f5
    JZ 0x004ca60c                       ; 004ca5f7
        ;   XREF to: 004ca60c (CONDITIONAL_JUMP)  ; LAB_004ca60c
    MOV EAX,dword ptr [EDX]             ; 004ca5f9
    MOV dword ptr [ESP],EAX             ; 004ca5fb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ca5fe
    MOV dword ptr [ESP + 0x4],EAX       ; 004ca601
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ca605
    MOV dword ptr [ESP + 0x8],EAX       ; 004ca608
    LEA EAX,[ESP + 0xc]                 ; 004ca60c
        ;   Label: LAB_004ca60c
    LEA EDX,[ECX + 0xc]                 ; 004ca610
    CMP EAX,EDX                         ; 004ca613
    JZ 0x004ca596                       ; 004ca615
        ;   XREF to: 004ca596 (CONDITIONAL_JUMP)  ; LAB_004ca596
    MOV EAX,dword ptr [EDX]             ; 004ca61b
    MOV dword ptr [ESP + 0xc],EAX       ; 004ca61d
    MOV EAX,dword ptr [EDX + 0x4]       ; 004ca621
    MOV dword ptr [ESP + 0x10],EAX      ; 004ca624
    MOV EAX,dword ptr [EDX + 0x8]       ; 004ca628
    MOV dword ptr [ESP + 0x14],EAX      ; 004ca62b
    MOV ECX,0x6                         ; 004ca62f
    MOV ESI,ESP                         ; 004ca634
    MOV EDI,EBX                         ; 004ca636
    MOVSD.REP ES:EDI,ESI                ; 004ca638
    MOV EAX,EBX                         ; 004ca63a
    ADD ESP,0x1c                        ; 004ca63c
    POP EDI                             ; 004ca63f
    POP EBX                             ; 004ca640
    RET                                 ; 004ca641

