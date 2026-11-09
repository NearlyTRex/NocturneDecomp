; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPassenger * __cdecl core_passngr_cpp_CPassenger_ctor_FUN_00511410(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_passngr.cpp_factoryFuncPassenger_FUN_005113e0 at 005113f3
;
; Called Functions:
;   core_morph.cpp_CMorph_ctor_FUN_005b6e60
;   core_npc.cpp_CNPC_ctor_FUN_00510460
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511410
        ;   Label: core_passngr.cpp_CPassenger_ctor_FUN_00511410
    PUSH ESI                            ; 00511411
    PUSH EDI                            ; 00511412
    MOV EBX,dword ptr [ESP + 0x10]      ; 00511413
    PUSH EBX                            ; 00511417
    CALL core_npc.cpp_CNPC_ctor_FUN_00510460 ; 00511418
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00510460(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0051141d
    ADD EAX,0x24454                     ; 00511420
    PUSH EAX                            ; 00511425
    MOV ESI,0x5e15e2                    ; 00511426
    CALL core_morph.cpp_CMorph_ctor_FUN_005b6e60 ; 0051142b
        ;   XREF to: 005b6e60 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_005b6e60(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffdbbac]          ; 00511430
    ADD ESP,0x4                         ; 00511436
    LEA EDI,[EBX + 0x243ac]             ; 00511439
    MOV dword ptr [EBX + 0x2b0],0x5fa924 ; 0051143f
    PUSH EDI                            ; 00511449
    MOV AL,byte ptr [ESI]               ; 0051144a
        ;   Label: LAB_0051144a
    MOV byte ptr [EDI],AL               ; 0051144c
    CMP AL,0x0                          ; 0051144e
    JZ 0x00511462                       ; 00511450
        ;   XREF to: 00511462 (CONDITIONAL_JUMP)  ; LAB_00511462
    MOV AL,byte ptr [ESI + 0x1]         ; 00511452
    ADD ESI,0x2                         ; 00511455
    MOV byte ptr [EDI + 0x1],AL         ; 00511458
    ADD EDI,0x2                         ; 0051145b
    CMP AL,0x0                          ; 0051145e
    JNZ 0x0051144a                      ; 00511460
        ;   XREF to: 0051144a (CONDITIONAL_JUMP)  ; LAB_0051144a
    POP EDI                             ; 00511462
        ;   Label: LAB_00511462
    MOV ESI,0x5e15ee                    ; 00511463
    LEA EDI,[EBX + 0x24348]             ; 00511468
    PUSH EDI                            ; 0051146e
    MOV AL,byte ptr [ESI]               ; 0051146f
        ;   Label: LAB_0051146f
    MOV byte ptr [EDI],AL               ; 00511471
    CMP AL,0x0                          ; 00511473
    JZ 0x00511487                       ; 00511475
        ;   XREF to: 00511487 (CONDITIONAL_JUMP)  ; LAB_00511487
    MOV AL,byte ptr [ESI + 0x1]         ; 00511477
    ADD ESI,0x2                         ; 0051147a
    MOV byte ptr [EDI + 0x1],AL         ; 0051147d
    ADD EDI,0x2                         ; 00511480
    CMP AL,0x0                          ; 00511483
    JNZ 0x0051146f                      ; 00511485
        ;   XREF to: 0051146f (CONDITIONAL_JUMP)  ; LAB_0051146f
    POP EDI                             ; 00511487
        ;   Label: LAB_00511487
    PUSH 0x5e15f4                       ; 00511488
    LEA EAX,[EBX + 0x2b4]               ; 0051148d
    PUSH EAX                            ; 00511493
    MOV ESI,0x5e1601                    ; 00511494
    MOV dword ptr [EBX + 0x24450],0x0   ; 00511499
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005114a3
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 005114a8
    LEA EDI,[EBX + 0x243cc]             ; 005114ab
    MOV dword ptr [EBX + 0x25084],0x3f800000 ; 005114b1
    PUSH EDI                            ; 005114bb
    MOV AL,byte ptr [ESI]               ; 005114bc
        ;   Label: LAB_005114bc
    MOV byte ptr [EDI],AL               ; 005114be
    CMP AL,0x0                          ; 005114c0
    JZ 0x005114d4                       ; 005114c2
        ;   XREF to: 005114d4 (CONDITIONAL_JUMP)  ; LAB_005114d4
    MOV AL,byte ptr [ESI + 0x1]         ; 005114c4
    ADD ESI,0x2                         ; 005114c7
    MOV byte ptr [EDI + 0x1],AL         ; 005114ca
    ADD EDI,0x2                         ; 005114cd
    CMP AL,0x0                          ; 005114d0
    JNZ 0x005114bc                      ; 005114d2
        ;   XREF to: 005114bc (CONDITIONAL_JUMP)  ; LAB_005114bc
    POP EDI                             ; 005114d4
        ;   Label: LAB_005114d4
    MOV EAX,EBX                         ; 005114d5
    MOV byte ptr [EBX + 0x243ec],0x0    ; 005114d7
    POP EDI                             ; 005114de
    POP ESI                             ; 005114df
    POP EBX                             ; 005114e0
    RET                                 ; 005114e1

