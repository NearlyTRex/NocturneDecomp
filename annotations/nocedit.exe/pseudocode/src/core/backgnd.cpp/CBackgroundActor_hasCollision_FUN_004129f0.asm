; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_backgnd_cpp_CBackgroundActor_hasCollision_FUN_004129f0 (CBackgroundActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004129f0
        ;   Label: core_backgnd.cpp_CBackgroundActor_hasCollision_FUN_004129f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004129f1
    CMP dword ptr [EBX + 0x2d4],0x0     ; 004129f5
    JNZ 0x00412a02                      ; 004129fc
        ;   XREF to: 00412a02 (CONDITIONAL_JUMP)  ; LAB_00412a02
    XOR EAX,EAX                         ; 004129fe
    POP EBX                             ; 00412a00
    RET                                 ; 00412a01
    LEA EAX,[EBX + 0x158]               ; 00412a02
        ;   Label: LAB_00412a02
    PUSH EAX                            ; 00412a08
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00412a09
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x5698]    ; 00412a0e
    ADD ESP,0x4                         ; 00412a14
    TEST ECX,ECX                        ; 00412a17
    JZ 0x00412a28                       ; 00412a19
        ;   XREF to: 00412a28 (CONDITIONAL_JUMP)  ; LAB_00412a28
    MOV EAX,dword ptr [ESP + 0xc]       ; 00412a1b
    ADD EBX,0x158                       ; 00412a1f
    MOV dword ptr [EAX + 0x24],EBX      ; 00412a25
    MOV EAX,0x1                         ; 00412a28
        ;   Label: LAB_00412a28
    POP EBX                             ; 00412a2d
    RET                                 ; 00412a2e

