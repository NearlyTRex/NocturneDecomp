; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_0057e550(CWeapon *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ed684
;   undefined4 DAT_005fd518
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
;   core_weapon.cpp_FUN_00589b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e550
        ;   Label: core_turret.cpp_FUN_0057e550
    PUSH ESI                            ; 0057e551
    PUSH EDI                            ; 0057e552
    PUSH EBP                            ; 0057e553
    SUB ESP,0x8                         ; 0057e554
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0057e557
    LEA EAX,[EBP + 0x6e0]               ; 0057e55b
    PUSH EAX                            ; 0057e561
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00 ; 0057e562
        ;   XREF to: 0044fd00 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057e567
    PUSH EBP                            ; 0057e56a
    CALL core_weapon.cpp_FUN_00589b50   ; 0057e56b
        ;   XREF to: 00589b50 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_FUN_00589b50(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 0057e570
    LEA EAX,[EBP + 0x2b4]               ; 0057e573
    PUSH EAX                            ; 0057e579
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0057e57a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x100]     ; 0057e57f
    ADD ESP,0x4                         ; 0057e585
    DEC EDX                             ; 0057e588
    PUSH EDX                            ; 0057e589
    LEA ESI,[EBP + 0x9bc]               ; 0057e58a
    PUSH EAX                            ; 0057e590
    MOV EDI,EAX                         ; 0057e591
    MOV EBX,ESI                         ; 0057e593
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0 ; 0057e595
        ;   XREF to: 0044e6e0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel * this_ptr, int frame_index)
    MOV EDX,0xf149f2ca                  ; 0057e59a
    ADD ESP,0x8                         ; 0057e59f
    XOR ECX,ECX                         ; 0057e5a2
    MOV dword ptr [ESP],EDX             ; 0057e5a4
    MOV EDX,EAX                         ; 0057e5a7
    MOV EAX,dword ptr [EDI + 0x104]     ; 0057e5a9
        ;   Label: LAB_0057e5a9
    CMP ECX,EAX                         ; 0057e5af
    JGE 0x0057e600                      ; 0057e5b1
        ;   XREF to: 0057e600 (CONDITIONAL_JUMP)  ; LAB_0057e600
    FILD dword ptr [EDX + 0x4]          ; 0057e5b3
    FMUL double ptr [0x005ed684]        ; 0057e5b6 | DAT_005ed684
    FILD dword ptr [EDX + 0x8]          ; 0057e5bc
    FADDP                               ; 0057e5bf
    FST float ptr [ESP + 0x4]           ; 0057e5c1
    FCOMP float ptr [ESP]               ; 0057e5c5
    FNSTSW AX                           ; 0057e5c8
    SAHF                                ; 0057e5ca
    JA 0x0057e5d3                       ; 0057e5cb
        ;   XREF to: 0057e5d3 (CONDITIONAL_JUMP)  ; LAB_0057e5d3
    INC ECX                             ; 0057e5cd
        ;   Label: LAB_0057e5cd
    ADD EDX,0xc                         ; 0057e5ce
    JMP 0x0057e5a9                      ; 0057e5d1
        ;   XREF to: 0057e5a9 (UNCONDITIONAL_JUMP)  ; LAB_0057e5a9
    MOV EAX,EDX                         ; 0057e5d3
        ;   Label: LAB_0057e5d3
    FILD dword ptr [EAX]                ; 0057e5d5
    FMUL float ptr [0x005fd518]         ; 0057e5d7 | DAT_005fd518
    FSTP float ptr [EBX]                ; 0057e5dd
    FILD dword ptr [EAX + 0x4]          ; 0057e5df
    FMUL float ptr [0x005fd518]         ; 0057e5e2 | DAT_005fd518
    FSTP float ptr [EBX + 0x4]          ; 0057e5e8
    FILD dword ptr [EAX + 0x8]          ; 0057e5eb
    FMUL float ptr [0x005fd518]         ; 0057e5ee | DAT_005fd518
    FSTP float ptr [EBX + 0x8]          ; 0057e5f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057e5f7
    MOV dword ptr [ESP],EAX             ; 0057e5fb
    JMP 0x0057e5cd                      ; 0057e5fe
        ;   XREF to: 0057e5cd (UNCONDITIONAL_JUMP)  ; LAB_0057e5cd
    MOV dword ptr [EBP + 0xa10],0x0     ; 0057e600
        ;   Label: LAB_0057e600
    MOV dword ptr [EBP + 0xa14],0x0     ; 0057e60a
    MOV dword ptr [EBP + 0xa0c],0x0     ; 0057e614
    ADD ESP,0x8                         ; 0057e61e
    POP EBP                             ; 0057e621
    POP EDI                             ; 0057e622
    POP ESI                             ; 0057e623
    POP EBX                             ; 0057e624
    RET                                 ; 0057e625

