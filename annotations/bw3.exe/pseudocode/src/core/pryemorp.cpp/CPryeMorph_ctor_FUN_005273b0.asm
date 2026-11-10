; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPryeMorph * core_pryemorp_cpp_CPryeMorph_ctor_FUN_005273b0(CPryeMorph *this_ptr)
;
; Parameters:
; CPryeMorph *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_pryemorp.cpp_factoryFuncPryeMorph_FUN_00527380 at 00527393
;
; Called Functions:
;   core_cloth.cpp_CClothList_add_FUN_0043fa40
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_npc.cpp_CNPC_ctor_FUN_00508f40
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005273b0
        ;   Label: core_pryemorp.cpp_CPryeMorph_ctor_FUN_005273b0
    PUSH ESI                            ; 005273b1
    PUSH EDI                            ; 005273b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005273b3
    PUSH EBX                            ; 005273b7
    CALL core_npc.cpp_CNPC_ctor_FUN_00508f40 ; 005273b8
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00508f40(CNPC * this_ptr)
    ADD ESP,0x4                         ; 005273bd
    ADD EAX,0x20814                     ; 005273c0
    PUSH EAX                            ; 005273c5
    MOV ESI,0x5cda15                    ; 005273c6
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 005273cb
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffdf7ec]          ; 005273d0
    ADD ESP,0x4                         ; 005273d6
    LEA EDI,[EBX + 0x2072c]             ; 005273d9
    MOV dword ptr [EBX + 0x154],0x5e36e4 ; 005273df
    PUSH EDI                            ; 005273e9
    MOV AL,byte ptr [ESI]               ; 005273ea
        ;   Label: LAB_005273ea
    MOV byte ptr [EDI],AL               ; 005273ec
    CMP AL,0x0                          ; 005273ee
    JZ 0x00527402                       ; 005273f0
        ;   XREF to: 00527402 (CONDITIONAL_JUMP)  ; LAB_00527402
    MOV AL,byte ptr [ESI + 0x1]         ; 005273f2
    ADD ESI,0x2                         ; 005273f5
    MOV byte ptr [EDI + 0x1],AL         ; 005273f8
    ADD EDI,0x2                         ; 005273fb
    CMP AL,0x0                          ; 005273fe
    JNZ 0x005273ea                      ; 00527400
        ;   XREF to: 005273ea (CONDITIONAL_JUMP)  ; LAB_005273ea
    POP EDI                             ; 00527402
        ;   Label: LAB_00527402
    MOV ESI,0x5cda21                    ; 00527403
    LEA EDI,[EBX + 0x2076c]             ; 00527408
    PUSH EDI                            ; 0052740e
    MOV AL,byte ptr [ESI]               ; 0052740f
        ;   Label: LAB_0052740f
    MOV byte ptr [EDI],AL               ; 00527411
    CMP AL,0x0                          ; 00527413
    JZ 0x00527427                       ; 00527415
        ;   XREF to: 00527427 (CONDITIONAL_JUMP)  ; LAB_00527427
    MOV AL,byte ptr [ESI + 0x1]         ; 00527417
    ADD ESI,0x2                         ; 0052741a
    MOV byte ptr [EDI + 0x1],AL         ; 0052741d
    ADD EDI,0x2                         ; 00527420
    CMP AL,0x0                          ; 00527423
    JNZ 0x0052740f                      ; 00527425
        ;   XREF to: 0052740f (CONDITIONAL_JUMP)  ; LAB_0052740f
    POP EDI                             ; 00527427
        ;   Label: LAB_00527427
    MOV ESI,0x5cda29                    ; 00527428
    LEA EDI,[EBX + 0x2078c]             ; 0052742d
    PUSH EDI                            ; 00527433
    MOV AL,byte ptr [ESI]               ; 00527434
        ;   Label: LAB_00527434
    MOV byte ptr [EDI],AL               ; 00527436
    CMP AL,0x0                          ; 00527438
    JZ 0x0052744c                       ; 0052743a
        ;   XREF to: 0052744c (CONDITIONAL_JUMP)  ; LAB_0052744c
    MOV AL,byte ptr [ESI + 0x1]         ; 0052743c
    ADD ESI,0x2                         ; 0052743f
    MOV byte ptr [EDI + 0x1],AL         ; 00527442
    ADD EDI,0x2                         ; 00527445
    CMP AL,0x0                          ; 00527448
    JNZ 0x00527434                      ; 0052744a
        ;   XREF to: 00527434 (CONDITIONAL_JUMP)  ; LAB_00527434
    POP EDI                             ; 0052744c
        ;   Label: LAB_0052744c
    MOV ESI,0x5cda2f                    ; 0052744d
    LEA EDI,[EBX + 0x206c8]             ; 00527452
    PUSH EDI                            ; 00527458
    MOV AL,byte ptr [ESI]               ; 00527459
        ;   Label: LAB_00527459
    MOV byte ptr [EDI],AL               ; 0052745b
    CMP AL,0x0                          ; 0052745d
    JZ 0x00527471                       ; 0052745f
        ;   XREF to: 00527471 (CONDITIONAL_JUMP)  ; LAB_00527471
    MOV AL,byte ptr [ESI + 0x1]         ; 00527461
    ADD ESI,0x2                         ; 00527464
    MOV byte ptr [EDI + 0x1],AL         ; 00527467
    ADD EDI,0x2                         ; 0052746a
    CMP AL,0x0                          ; 0052746d
    JNZ 0x00527459                      ; 0052746f
        ;   XREF to: 00527459 (CONDITIONAL_JUMP)  ; LAB_00527459
    POP EDI                             ; 00527471
        ;   Label: LAB_00527471
    PUSH 0x5cda35                       ; 00527472
    LEA EAX,[EBX + 0x158]               ; 00527477
    PUSH EAX                            ; 0052747d
    MOV ESI,0x5cda49                    ; 0052747e
    MOV dword ptr [EBX + 0x20810],0x0   ; 00527483
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 0052748d
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00527492
    LEA EDI,[EBX + 0x2074c]             ; 00527495
    MOV dword ptr [EBX + 0x21444],0x3f800000 ; 0052749b
    PUSH EDI                            ; 005274a5
    MOV AL,byte ptr [ESI]               ; 005274a6
        ;   Label: LAB_005274a6
    MOV byte ptr [EDI],AL               ; 005274a8
    CMP AL,0x0                          ; 005274aa
    JZ 0x005274be                       ; 005274ac
        ;   XREF to: 005274be (CONDITIONAL_JUMP)  ; LAB_005274be
    MOV AL,byte ptr [ESI + 0x1]         ; 005274ae
    ADD ESI,0x2                         ; 005274b1
    MOV byte ptr [EDI + 0x1],AL         ; 005274b4
    ADD EDI,0x2                         ; 005274b7
    CMP AL,0x0                          ; 005274ba
    JNZ 0x005274a6                      ; 005274bc
        ;   XREF to: 005274a6 (CONDITIONAL_JUMP)  ; LAB_005274a6
    POP EDI                             ; 005274be
        ;   Label: LAB_005274be
    PUSH 0x5cda56                       ; 005274bf
    LEA EAX,[EBX + 0x2f08]              ; 005274c4
    PUSH EAX                            ; 005274ca
    MOV byte ptr [EBX + 0x207ac],0x0    ; 005274cb
    CALL core_cloth.cpp_CClothList_add_FUN_0043fa40 ; 005274d2
        ;   XREF to: 0043fa40 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_0043fa40(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005274d7
    MOV EAX,EBX                         ; 005274da
    POP EDI                             ; 005274dc
    POP ESI                             ; 005274dd
    POP EBX                             ; 005274de
    RET                                 ; 005274df

