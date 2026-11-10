; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_backgnd_cpp_CBackgroundActor_getCollisionType_FUN_0040f0e0(CBackgroundActor *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f0e0
        ;   Label: core_backgnd.cpp_CBackgroundActor_getCollisionType_FUN_0040f0e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f0e1
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0040f0e5
    JNZ 0x0040f0f2                      ; 0040f0ec
        ;   XREF to: 0040f0f2 (CONDITIONAL_JUMP)  ; LAB_0040f0f2
    XOR EAX,EAX                         ; 0040f0ee
    POP EBX                             ; 0040f0f0
    RET                                 ; 0040f0f1
    LEA EAX,[EBX + 0x15c]               ; 0040f0f2
        ;   Label: LAB_0040f0f2
    PUSH EAX                            ; 0040f0f8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0040f0f9
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x358]     ; 0040f0fe
    ADD ESP,0x4                         ; 0040f104
    TEST ECX,ECX                        ; 0040f107
    JZ 0x0040f118                       ; 0040f109
        ;   XREF to: 0040f118 (CONDITIONAL_JUMP)  ; LAB_0040f118
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040f10b
    ADD EBX,0x15c                       ; 0040f10f
    MOV dword ptr [EAX + 0x24],EBX      ; 0040f115
    MOV EAX,0x1                         ; 0040f118
        ;   Label: LAB_0040f118
    POP EBX                             ; 0040f11d
    RET                                 ; 0040f11e

