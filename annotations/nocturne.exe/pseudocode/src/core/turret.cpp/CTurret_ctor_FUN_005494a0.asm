; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTurret * __cdecl core_turret_cpp_CTurret_ctor_FUN_005494a0(CTurret *this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_turret.cpp_factoryFunc_FUN_00549470 at 00549483
;
; Referenced Globals:
;   TerminatedCString s_gturret_head_kfm_00596ce5
;   TerminatedCString s_gturret_tripod_kfm_00596cf6
;   TerminatedCString s_CCharacter_00596d09
;   undefined4 s_Character_00596d09+1
;   undefined4 s_haracter_00596d09+2
;   undefined4 s_aracter_00596d09+3
;   CWeapon_full_vtable g_CTurretVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_weapon.cpp_CWeapon_ctor_FUN_00553d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005494a0
        ;   Label: core_turret.cpp_CTurret_ctor_FUN_005494a0
    PUSH ESI                            ; 005494a1
    PUSH EDI                            ; 005494a2
    SUB ESP,0x18                        ; 005494a3
    MOV EBX,dword ptr [ESP + 0x28]      ; 005494a6
    PUSH EBX                            ; 005494aa
    CALL core_weapon.cpp_CWeapon_ctor_FUN_00553d90 ; 005494ab
        ;   XREF to: 00553d90 (UNCONDITIONAL_CALL)  ; CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_00553d90(CWeapon * this_ptr)
    ADD ESP,0x4                         ; 005494b0
    ADD EAX,0x57c                       ; 005494b3
    PUSH EAX                            ; 005494b8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 005494b9
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005494be
    LEA EBX,[EAX + 0xfffffa84]          ; 005494c1
    PUSH 0x596ce5                       ; 005494c7 | = "gturret_head.kfm"
    LEA EAX,[EBX + 0x150]               ; 005494cc
    PUSH EAX                            ; 005494d2
    MOV dword ptr [EBX + 0x14c],0x5a37b4 ; 005494d3 | g_CTurretVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 005494dd
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005494e2
    PUSH 0x596cf6                       ; 005494e5 | = "gturret_tripod.kfm"
    LEA EAX,[EBX + 0x57c]               ; 005494ea
    PUSH EAX                            ; 005494f0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 005494f1
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x6f8],0x0     ; 005494f6
    MOV byte ptr [EBX + 0x6fc],0x0      ; 00549500
    MOV dword ptr [EBX + 0x760],0x40400000 ; 00549507
    MOV dword ptr [EBX + 0x764],0x40c00000 ; 00549511
    MOV dword ptr [EBX + 0x768],0x40400000 ; 0054951b
    MOV dword ptr [EBX + 0x76c],0x3e4ccccd ; 00549525
    MOV dword ptr [EBX + 0x770],0x41f00000 ; 0054952f
    MOV ESI,0x596d09                    ; 00549539 | = "CCharacter"
    MOV dword ptr [EBX + 0x774],0x0     ; 0054953e
    ADD ESP,0x8                         ; 00549548
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0054954b
    LEA EDI,[EBX + 0x77c]               ; 00549555
    MOV dword ptr [EBX + 0x778],0x0     ; 0054955b
    PUSH EDI                            ; 00549565
    MOV AL,byte ptr [ESI]               ; 00549566 | = "CCharacter" | s_haracter_00596d09+2
        ;   Label: LAB_00549566
    MOV byte ptr [EDI],AL               ; 00549568
    CMP AL,0x0                          ; 0054956a
    JZ 0x0054957e                       ; 0054956c
        ;   XREF to: 0054957e (CONDITIONAL_JUMP)  ; LAB_0054957e
    MOV AL,byte ptr [ESI + 0x1]         ; 0054956e | s_Character_00596d09+1 | s_aracter_00596d09+3
    ADD ESI,0x2                         ; 00549571
    MOV byte ptr [EDI + 0x1],AL         ; 00549574
    ADD EDI,0x2                         ; 00549577
    CMP AL,0x0                          ; 0054957a
    JNZ 0x00549566                      ; 0054957c
        ;   XREF to: 00549566 (CONDITIONAL_JUMP)  ; LAB_00549566
    POP EDI                             ; 0054957e
        ;   Label: LAB_0054957e
    LEA EAX,[ESP + 0xc]                 ; 0054957f
    PUSH EAX                            ; 00549583
    LEA EAX,[ESP + 0x4]                 ; 00549584
    XOR EDX,EDX                         ; 00549588
    PUSH EAX                            ; 0054958a
    MOV ESI,0x3f800000                  ; 0054958b
    MOV dword ptr [ESP + 0x14],EDX      ; 00549590
    PUSH EBX                            ; 00549594
    MOV dword ptr [ESP + 0x1c],EDX      ; 00549595
    MOV dword ptr [ESP + 0x20],ESI      ; 00549599
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054959d
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[EBX + 0x844]               ; 005495a2
    ADD ESP,0xc                         ; 005495a8
    CMP EDX,EAX                         ; 005495ab
    JNZ 0x005495d6                      ; 005495ad
        ;   XREF to: 005495d6 (CONDITIONAL_JUMP)  ; LAB_005495d6
    MOV dword ptr [EBX + 0x854],0x0     ; 005495af
        ;   Label: LAB_005495af
    MOV dword ptr [EBX + 0x864],0x0     ; 005495b9
    MOV EAX,EBX                         ; 005495c3
    MOV dword ptr [EBX + 0x850],0x0     ; 005495c5
    ADD ESP,0x18                        ; 005495cf
    POP EDI                             ; 005495d2
    POP ESI                             ; 005495d3
    POP EBX                             ; 005495d4
    RET                                 ; 005495d5
    MOV ECX,dword ptr [EAX]             ; 005495d6
        ;   Label: LAB_005495d6
    MOV dword ptr [EDX],ECX             ; 005495d8
    MOV ECX,dword ptr [EAX + 0x4]       ; 005495da
    MOV dword ptr [EDX + 0x4],ECX       ; 005495dd
    MOV ECX,dword ptr [EAX + 0x8]       ; 005495e0
    MOV dword ptr [EDX + 0x8],ECX       ; 005495e3
    JMP 0x005495af                      ; 005495e6
        ;   XREF to: 005495af (UNCONDITIONAL_JUMP)  ; LAB_005495af

