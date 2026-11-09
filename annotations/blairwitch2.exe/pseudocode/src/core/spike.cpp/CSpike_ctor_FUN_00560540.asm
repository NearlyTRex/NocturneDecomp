; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00560540(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spike.cpp_factoryFuncSpike_FUN_00560510 at 00560523
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560540
        ;   Label: core_spike.cpp_CSpike_ctor_FUN_00560540
    PUSH ESI                            ; 00560541
    PUSH EDI                            ; 00560542
    MOV EBX,dword ptr [ESP + 0x10]      ; 00560543
    PUSH EBX                            ; 00560547
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408790 ; 00560548
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408790(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056054d
    ADD EAX,0x2b4                       ; 00560550
    PUSH EAX                            ; 00560555
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00560556
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056055b
    LEA EBX,[EAX + 0xfffffd4c]          ; 0056055e
    PUSH 0x5eafeb                       ; 00560564
    LEA EAX,[EBX + 0x2b4]               ; 00560569
    PUSH EAX                            ; 0056056f
    MOV ESI,0x5eaff5                    ; 00560570
    MOV dword ptr [EBX + 0x2b0],0x5fbe04 ; 00560575
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70 ; 0056057f
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x430],0x0     ; 00560584
    ADD ESP,0x8                         ; 0056058e
    MOV dword ptr [EBX + 0x434],0x0     ; 00560591
    LEA EDI,[EBX + 0x44c]               ; 0056059b
    MOV dword ptr [EBX + 0x438],0x0     ; 005605a1
    PUSH EDI                            ; 005605ab
    MOV AL,byte ptr [ESI]               ; 005605ac
        ;   Label: LAB_005605ac
    MOV byte ptr [EDI],AL               ; 005605ae
    CMP AL,0x0                          ; 005605b0
    JZ 0x005605c4                       ; 005605b2
        ;   XREF to: 005605c4 (CONDITIONAL_JUMP)  ; LAB_005605c4
    MOV AL,byte ptr [ESI + 0x1]         ; 005605b4
    ADD ESI,0x2                         ; 005605b7
    MOV byte ptr [EDI + 0x1],AL         ; 005605ba
    ADD EDI,0x2                         ; 005605bd
    CMP AL,0x0                          ; 005605c0
    JNZ 0x005605ac                      ; 005605c2
        ;   XREF to: 005605ac (CONDITIONAL_JUMP)  ; LAB_005605ac
    POP EDI                             ; 005605c4
        ;   Label: LAB_005605c4
    MOV ESI,0x5eaffa                    ; 005605c5
    LEA EDI,[EBX + 0x4b0]               ; 005605ca
    PUSH EDI                            ; 005605d0
    MOV AL,byte ptr [ESI]               ; 005605d1
        ;   Label: LAB_005605d1
    MOV byte ptr [EDI],AL               ; 005605d3
    CMP AL,0x0                          ; 005605d5
    JZ 0x005605e9                       ; 005605d7
        ;   XREF to: 005605e9 (CONDITIONAL_JUMP)  ; LAB_005605e9
    MOV AL,byte ptr [ESI + 0x1]         ; 005605d9
    ADD ESI,0x2                         ; 005605dc
    MOV byte ptr [EDI + 0x1],AL         ; 005605df
    ADD EDI,0x2                         ; 005605e2
    CMP AL,0x0                          ; 005605e5
    JNZ 0x005605d1                      ; 005605e7
        ;   XREF to: 005605d1 (CONDITIONAL_JUMP)  ; LAB_005605d1
    POP EDI                             ; 005605e9
        ;   Label: LAB_005605e9
    MOV ESI,0x5eafff                    ; 005605ea
    LEA EDI,[EBX + 0x514]               ; 005605ef
    PUSH EDI                            ; 005605f5
    MOV AL,byte ptr [ESI]               ; 005605f6
        ;   Label: LAB_005605f6
    MOV byte ptr [EDI],AL               ; 005605f8
    CMP AL,0x0                          ; 005605fa
    JZ 0x0056060e                       ; 005605fc
        ;   XREF to: 0056060e (CONDITIONAL_JUMP)  ; LAB_0056060e
    MOV AL,byte ptr [ESI + 0x1]         ; 005605fe
    ADD ESI,0x2                         ; 00560601
    MOV byte ptr [EDI + 0x1],AL         ; 00560604
    ADD EDI,0x2                         ; 00560607
    CMP AL,0x0                          ; 0056060a
    JNZ 0x005605f6                      ; 0056060c
        ;   XREF to: 005605f6 (CONDITIONAL_JUMP)  ; LAB_005605f6
    POP EDI                             ; 0056060e
        ;   Label: LAB_0056060e
    MOV ESI,0x5eb004                    ; 0056060f
    LEA EDI,[EBX + 0x578]               ; 00560614
    PUSH EDI                            ; 0056061a
    MOV AL,byte ptr [ESI]               ; 0056061b
        ;   Label: LAB_0056061b
    MOV byte ptr [EDI],AL               ; 0056061d
    CMP AL,0x0                          ; 0056061f
    JZ 0x00560633                       ; 00560621
        ;   XREF to: 00560633 (CONDITIONAL_JUMP)  ; LAB_00560633
    MOV AL,byte ptr [ESI + 0x1]         ; 00560623
    ADD ESI,0x2                         ; 00560626
    MOV byte ptr [EDI + 0x1],AL         ; 00560629
    ADD EDI,0x2                         ; 0056062c
    CMP AL,0x0                          ; 0056062f
    JNZ 0x0056061b                      ; 00560631
        ;   XREF to: 0056061b (CONDITIONAL_JUMP)  ; LAB_0056061b
    POP EDI                             ; 00560633
        ;   Label: LAB_00560633
    MOV dword ptr [EBX + 0x5dc],0x3f800000 ; 00560634
    MOV dword ptr [EBX + 0x5e0],0x3f800000 ; 0056063e
    MOV byte ptr [EBX + 0x5e8],0x0      ; 00560648
    MOV byte ptr [EBX + 0x64c],0x0      ; 0056064f
    MOV dword ptr [EBX + 0x6b0],0x3f800000 ; 00560656
    MOV dword ptr [EBX + 0x6b4],0x3dcccccd ; 00560660
    MOV EAX,EBX                         ; 0056066a
    MOV dword ptr [EBX + 0x6b8],0x0     ; 0056066c
    POP EDI                             ; 00560676
    POP ESI                             ; 00560677
    POP EBX                             ; 00560678
    RET                                 ; 00560679

