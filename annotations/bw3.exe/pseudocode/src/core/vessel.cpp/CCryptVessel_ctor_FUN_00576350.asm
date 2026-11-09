; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_00576350(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_vessel.cpp_factoryFuncCryptVessel_FUN_00576320 at 00576333
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_flame.cpp_CFlame_ctor_FUN_004a59b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576350
        ;   Label: core_vessel.cpp_CCryptVessel_ctor_FUN_00576350
    PUSH ESI                            ; 00576351
    PUSH EDI                            ; 00576352
    MOV EBX,dword ptr [ESP + 0x10]      ; 00576353
    PUSH EBX                            ; 00576357
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00576358
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057635d
    ADD EAX,0x158                       ; 00576360
    PUSH EAX                            ; 00576365
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00576366
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0057636b
    ADD EAX,0x26c                       ; 0057636e
    PUSH EAX                            ; 00576373
    CALL core_flame.cpp_CFlame_ctor_FUN_004a59b0 ; 00576374
        ;   XREF to: 004a59b0 (UNCONDITIONAL_CALL)  ; CFlame * core_flame.cpp_CFlame_ctor_FUN_004a59b0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 00576379
    ADD EAX,0x2a8                       ; 0057637c
    PUSH EAX                            ; 00576381
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00576382
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00576387
    LEA EBX,[EAX + 0xfffff994]          ; 0057638a
    PUSH 0x5d7074                       ; 00576390
    LEA EAX,[EBX + 0x158]               ; 00576395
    PUSH EAX                            ; 0057639b
    MOV ESI,0x5d7081                    ; 0057639c
    MOV dword ptr [EBX + 0x154],0x5e5d74 ; 005763a1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 005763ab
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005763b0
    ADD ESP,0x8                         ; 005763ba
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005763bd
    LEA EDI,[EBX + 0x2e0]               ; 005763c7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005763cd
    PUSH EDI                            ; 005763d7
    MOV AL,byte ptr [ESI]               ; 005763d8
        ;   Label: LAB_005763d8
    MOV byte ptr [EDI],AL               ; 005763da
    CMP AL,0x0                          ; 005763dc
    JZ 0x005763f0                       ; 005763de
        ;   XREF to: 005763f0 (CONDITIONAL_JUMP)  ; LAB_005763f0
    MOV AL,byte ptr [ESI + 0x1]         ; 005763e0
    ADD ESI,0x2                         ; 005763e3
    MOV byte ptr [EDI + 0x1],AL         ; 005763e6
    ADD EDI,0x2                         ; 005763e9
    CMP AL,0x0                          ; 005763ec
    JNZ 0x005763d8                      ; 005763ee
        ;   XREF to: 005763d8 (CONDITIONAL_JUMP)  ; LAB_005763d8
    POP EDI                             ; 005763f0
        ;   Label: LAB_005763f0
    MOV dword ptr [EBX + 0x3a8],0x0     ; 005763f1
    MOV dword ptr [EBX + 0x3ac],0x0     ; 005763fb
    MOV ESI,0x5d7086                    ; 00576405
    MOV dword ptr [EBX + 0x3bc],0x0     ; 0057640a
    LEA EDI,[EBX + 0x344]               ; 00576414
    MOV dword ptr [EBX + 0x3b8],0x0     ; 0057641a
    PUSH EDI                            ; 00576424
    MOV AL,byte ptr [ESI]               ; 00576425
        ;   Label: LAB_00576425
    MOV byte ptr [EDI],AL               ; 00576427
    CMP AL,0x0                          ; 00576429
    JZ 0x0057643d                       ; 0057642b
        ;   XREF to: 0057643d (CONDITIONAL_JUMP)  ; LAB_0057643d
    MOV AL,byte ptr [ESI + 0x1]         ; 0057642d
    ADD ESI,0x2                         ; 00576430
    MOV byte ptr [EDI + 0x1],AL         ; 00576433
    ADD EDI,0x2                         ; 00576436
    CMP AL,0x0                          ; 00576439
    JNZ 0x00576425                      ; 0057643b
        ;   XREF to: 00576425 (CONDITIONAL_JUMP)  ; LAB_00576425
    POP EDI                             ; 0057643d
        ;   Label: LAB_0057643d
    MOV dword ptr [EBX + 0x3b0],0x41200000 ; 0057643e
    PUSH 0x5d708b                       ; 00576448
    MOV dword ptr [EBX + 0x3c0],0x1     ; 0057644d
    LEA EAX,[EBX + 0x66c]               ; 00576457
    MOV dword ptr [EBX + 0x3b4],0x0     ; 0057645d
    PUSH EAX                            ; 00576467
    MOV dword ptr [EBX + 0x668],0x0     ; 00576468
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00576472
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x7e8],0x1     ; 00576477
    MOV dword ptr [EBX + 0xfc],0x1      ; 00576481
    ADD ESP,0x8                         ; 0057648b
    MOV dword ptr [EBX + 0x7ec],0x0     ; 0057648e
    MOV EAX,EBX                         ; 00576498
    MOV dword ptr [EBX + 0x7f0],0x0     ; 0057649a
    POP EDI                             ; 005764a4
    POP ESI                             ; 005764a5
    POP EBX                             ; 005764a6
    RET                                 ; 005764a7

