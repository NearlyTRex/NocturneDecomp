; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_boxactor_cpp_CBoxActor_getCollisionType_FUN_0041fed0(CBoxActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fed0
        ;   Label: core_boxactor.cpp_CBoxActor_getCollisionType_FUN_0041fed0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041fed1
    CMP dword ptr [EBX + 0x5f8],0x0     ; 0041fed5
    JZ 0x0041fee7                       ; 0041fedc
        ;   XREF to: 0041fee7 (CONDITIONAL_JUMP)  ; LAB_0041fee7
    CMP dword ptr [EBX + 0x318],0x0     ; 0041fede
    JZ 0x0041feeb                       ; 0041fee5
        ;   XREF to: 0041feeb (CONDITIONAL_JUMP)  ; LAB_0041feeb
    XOR EAX,EAX                         ; 0041fee7
        ;   Label: LAB_0041fee7
    POP EBX                             ; 0041fee9
    RET                                 ; 0041feea
    PUSH ESI                            ; 0041feeb
        ;   Label: LAB_0041feeb
    LEA EAX,[EBX + 0x158]               ; 0041feec
    PUSH EAX                            ; 0041fef2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0041fef3
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV ESI,dword ptr [EAX + 0x358]     ; 0041fef8
    ADD ESP,0x4                         ; 0041fefe
    TEST ESI,ESI                        ; 0041ff01
    JZ 0x0041ff12                       ; 0041ff03
        ;   XREF to: 0041ff12 (CONDITIONAL_JUMP)  ; LAB_0041ff12
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ff05
    ADD EBX,0x158                       ; 0041ff09
    MOV dword ptr [EAX + 0x24],EBX      ; 0041ff0f
    MOV EAX,0x1                         ; 0041ff12
        ;   Label: LAB_0041ff12
    POP ESI                             ; 0041ff17
    POP EBX                             ; 0041ff18
    RET                                 ; 0041ff19

