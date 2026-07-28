; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_turret_cpp_FUN_005495f0(CWeapon *param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00596d15 = 0.200000000000000
;   undefined4 DAT_005a3788
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_weapon.cpp_CWeapon_setup_FUN_00553f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005495f0
        ;   Label: core_turret.cpp_FUN_005495f0
    PUSH ESI                            ; 005495f1
    PUSH EDI                            ; 005495f2
    PUSH EBP                            ; 005495f3
    SUB ESP,0x8                         ; 005495f4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005495f7
    LEA EAX,[EBP + 0x57c]               ; 005495fb
    PUSH EAX                            ; 00549601
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 00549602
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00549607
    PUSH EBP                            ; 0054960a
    CALL core_weapon.cpp_CWeapon_setup_FUN_00553f10 ; 0054960b
        ;   XREF to: 00553f10 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_setup_FUN_00553f10(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 00549610
    LEA EAX,[EBP + 0x150]               ; 00549613
    PUSH EAX                            ; 00549619
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 0054961a
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x100]     ; 0054961f
    ADD ESP,0x4                         ; 00549625
    DEC EDX                             ; 00549628
    PUSH EDX                            ; 00549629
    LEA ESI,[EBP + 0x858]               ; 0054962a
    PUSH EAX                            ; 00549630
    MOV EDI,EAX                         ; 00549631
    MOV EBX,ESI                         ; 00549633
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080 ; 00549635
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(CKeyFramedModel * this_ptr, int frame_index)
    MOV EDX,0xf149f2ca                  ; 0054963a
    ADD ESP,0x8                         ; 0054963f
    XOR ECX,ECX                         ; 00549642
    MOV dword ptr [ESP],EDX             ; 00549644
    MOV EDX,EAX                         ; 00549647
    MOV EAX,dword ptr [EDI + 0x104]     ; 00549649
        ;   Label: LAB_00549649
    CMP ECX,EAX                         ; 0054964f
    JGE 0x005496a0                      ; 00549651
        ;   XREF to: 005496a0 (CONDITIONAL_JUMP)  ; LAB_005496a0
    FILD dword ptr [EDX + 0x4]          ; 00549653
    FMUL double ptr [0x00596d15]        ; 00549656 | DOUBLE_00596d15
    FILD dword ptr [EDX + 0x8]          ; 0054965c
    FADDP                               ; 0054965f
    FST float ptr [ESP + 0x4]           ; 00549661
    FCOMP float ptr [ESP]               ; 00549665
    FNSTSW AX                           ; 00549668
    SAHF                                ; 0054966a
    JA 0x00549673                       ; 0054966b
        ;   XREF to: 00549673 (CONDITIONAL_JUMP)  ; LAB_00549673
    INC ECX                             ; 0054966d
        ;   Label: LAB_0054966d
    ADD EDX,0xc                         ; 0054966e
    JMP 0x00549649                      ; 00549671
        ;   XREF to: 00549649 (UNCONDITIONAL_JUMP)  ; LAB_00549649
    MOV EAX,EDX                         ; 00549673
        ;   Label: LAB_00549673
    FILD dword ptr [EAX]                ; 00549675
    FMUL float ptr [0x005a3788]         ; 00549677 | DAT_005a3788
    FSTP float ptr [EBX]                ; 0054967d
    FILD dword ptr [EAX + 0x4]          ; 0054967f
    FMUL float ptr [0x005a3788]         ; 00549682 | DAT_005a3788
    FSTP float ptr [EBX + 0x4]          ; 00549688
    FILD dword ptr [EAX + 0x8]          ; 0054968b
    FMUL float ptr [0x005a3788]         ; 0054968e | DAT_005a3788
    FSTP float ptr [EBX + 0x8]          ; 00549694
    MOV EAX,dword ptr [ESP + 0x4]       ; 00549697
    MOV dword ptr [ESP],EAX             ; 0054969b
    JMP 0x0054966d                      ; 0054969e
        ;   XREF to: 0054966d (UNCONDITIONAL_JUMP)  ; LAB_0054966d
    MOV dword ptr [EBP + 0x8ac],0x0     ; 005496a0
        ;   Label: LAB_005496a0
    MOV dword ptr [EBP + 0x8b0],0x0     ; 005496aa
    MOV dword ptr [EBP + 0x8a8],0x0     ; 005496b4
    ADD ESP,0x8                         ; 005496be
    POP EBP                             ; 005496c1
    POP EDI                             ; 005496c2
    POP ESI                             ; 005496c3
    POP EBX                             ; 005496c4
    RET                                 ; 005496c5

