; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_enemy_cpp_FUN_004a9a50(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x2c]:1  local_2c
;
; XREF[1]:
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 at 005267da
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
;   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9a50
        ;   Label: core_enemy.cpp_FUN_004a9a50
    PUSH ESI                            ; 004a9a51
    SUB ESP,0x54                        ; 004a9a52
    MOV ESI,dword ptr [ESP + 0x60]      ; 004a9a55
    MOV EBX,dword ptr [ESP + 0x64]      ; 004a9a59
    TEST EBX,EBX                        ; 004a9a5d
    JNZ 0x004a9a69                      ; 004a9a5f
        ;   XREF to: 004a9a69 (CONDITIONAL_JUMP)  ; LAB_004a9a69
    XOR EAX,EAX                         ; 004a9a61
    ADD ESP,0x54                        ; 004a9a63
    POP ESI                             ; 004a9a66
    POP EBX                             ; 004a9a67
    RET                                 ; 004a9a68
    LEA EDX,[ESP + 0x30]                ; 004a9a69
        ;   Label: LAB_004a9a69
    PUSH EDX                            ; 004a9a6d
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a9a6e
    PUSH ESI                            ; 004a9a74
    CALL dword ptr [EAX + 0x154]        ; 004a9a75
    ADD ESP,0x8                         ; 004a9a7b
    PUSH EAX                            ; 004a9a7e
    LEA EAX,[ESP + 0x28]                ; 004a9a7f
    PUSH EAX                            ; 004a9a83
    PUSH ESI                            ; 004a9a84
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a9a85
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a9a8a
    MOV EDX,ESP                         ; 004a9a8d
    PUSH EDX                            ; 004a9a8f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9a90
    PUSH EBX                            ; 004a9a96
    CALL dword ptr [EAX + 0x14]         ; 004a9a97
    ADD ESP,0x8                         ; 004a9a9a
    LEA EAX,[ESP + 0x24]                ; 004a9a9d
    PUSH EAX                            ; 004a9aa1
    LEA EAX,[ESP + 0x4c]                ; 004a9aa2
    PUSH EAX                            ; 004a9aa6
    PUSH EBX                            ; 004a9aa7
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004a9aa8
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004a9aad
    PUSH EAX                            ; 004a9ab0
    LEA EAX,[ESP + 0x40]                ; 004a9ab1
    PUSH EAX                            ; 004a9ab5
    LEA EAX,[ESP + 0x8]                 ; 004a9ab6
    PUSH EAX                            ; 004a9aba
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550 ; 004a9abb
        ;   XREF to: 00421550 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    ADD ESP,0xc                         ; 004a9ac0
    PUSH EAX                            ; 004a9ac3
    LEA EAX,[ESP + 0x1c]                ; 004a9ac4
    PUSH EAX                            ; 004a9ac8
    PUSH EBX                            ; 004a9ac9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a9aca
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a9acf
    LEA EAX,[ESP + 0x18]                ; 004a9ad2
    PUSH EAX                            ; 004a9ad6
    LEA EAX,[ESP + 0x28]                ; 004a9ad7
    PUSH EAX                            ; 004a9adb
    MOV EDX,dword ptr [0x006810c8]      ; 004a9adc | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004a9ae2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510 ; 004a9ae3
        ;   XREF to: 00572510 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_00572510(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004a9ae8
    TEST EAX,EAX                        ; 004a9aeb
    SETZ AL                             ; 004a9aed
    AND EAX,0xff                        ; 004a9af0
    ADD ESP,0x54                        ; 004a9af5
    POP ESI                             ; 004a9af8
    POP EBX                             ; 004a9af9
    RET                                 ; 004a9afa

