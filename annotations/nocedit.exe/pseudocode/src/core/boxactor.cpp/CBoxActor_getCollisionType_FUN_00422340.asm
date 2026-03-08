; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_00422340(CBoxActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422340
        ;   Label: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_00422340
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422341
    CMP dword ptr [EBX + 0x5f8],0x0     ; 00422345
    JZ 0x00422357                       ; 0042234c
        ;   XREF to: 00422357 (CONDITIONAL_JUMP)  ; LAB_00422357
    CMP dword ptr [EBX + 0x318],0x0     ; 0042234e
    JZ 0x0042235b                       ; 00422355
        ;   XREF to: 0042235b (CONDITIONAL_JUMP)  ; LAB_0042235b
    XOR EAX,EAX                         ; 00422357
        ;   Label: LAB_00422357
    POP EBX                             ; 00422359
    RET                                 ; 0042235a
    PUSH ESI                            ; 0042235b
        ;   Label: LAB_0042235b
    LEA EAX,[EBX + 0x158]               ; 0042235c
    PUSH EAX                            ; 00422362
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00422363
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x5698]    ; 00422368
    ADD ESP,0x4                         ; 0042236e
    TEST ESI,ESI                        ; 00422371
    JZ 0x00422382                       ; 00422373
        ;   XREF to: 00422382 (CONDITIONAL_JUMP)  ; LAB_00422382
    MOV EAX,dword ptr [ESP + 0x10]      ; 00422375
    ADD EBX,0x158                       ; 00422379
    MOV dword ptr [EAX + 0x24],EBX      ; 0042237f
    MOV EAX,0x1                         ; 00422382
        ;   Label: LAB_00422382
    POP ESI                             ; 00422387
    POP EBX                             ; 00422388
    RET                                 ; 00422389

