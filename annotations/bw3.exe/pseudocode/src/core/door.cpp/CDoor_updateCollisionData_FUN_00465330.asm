; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_updateCollisionData_FUN_00465330(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00600530
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01d81080
;   undefined4 DAT_01d82088
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_door.cpp_FUN_00463d80
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465330
        ;   Label: core_door.cpp_CDoor_updateCollisionData_FUN_00465330
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465331
    MOV EAX,[0x00600530]                ; 00465335 | DAT_00600530 | DAT_01d81080
    CMP dword ptr [EAX + 0x1008],0x0    ; 0046533a | DAT_01d82088
    JNZ 0x0046534c                      ; 00465341
        ;   XREF to: 0046534c (CONDITIONAL_JUMP)  ; LAB_0046534c
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00465343
    JZ 0x0046534e                       ; 0046534a
        ;   XREF to: 0046534e (CONDITIONAL_JUMP)  ; LAB_0046534e
    POP EBX                             ; 0046534c
        ;   Label: LAB_0046534c
    RET                                 ; 0046534d
    PUSH EBX                            ; 0046534e
        ;   Label: LAB_0046534e
    CALL core_door.cpp_FUN_00463d80     ; 0046534f
        ;   XREF to: 00463d80 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_00463d80()
    ADD ESP,0x4                         ; 00465354
    PUSH EBX                            ; 00465357
    MOV EBX,dword ptr [0x00603b28]      ; 00465358 | g_CDemonSetPtr
    PUSH EBX                            ; 0046535e | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00 ; 0046535f
        ;   XREF to: 0053ee00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_0053ee00(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00465364
    POP EBX                             ; 00465367
    RET                                 ; 00465368

