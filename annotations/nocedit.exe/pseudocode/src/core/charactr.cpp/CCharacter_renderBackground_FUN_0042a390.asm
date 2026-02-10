; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_0042a390(CCharacter *this_ptr,int layer_flag)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; XREF[2]:
;   core_enemy.cpp_CEnemy_renderBackground_FUN_004a9fa0 at 004a9fc1
;   core_npc.cpp_CNPC_renderBackground_FUN_00544b70 at 00544b91
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a390
        ;   Label: core_charactr.cpp_CCharacter_renderBackground_FUN_0042a390
    SUB ESP,0x18                        ; 0042a391
    MOV EBX,dword ptr [ESP + 0x20]      ; 0042a394
    CMP dword ptr [EBX + 0x240c],0x0    ; 0042a398
    JNZ 0x0042a3a6                      ; 0042a39f
        ;   XREF to: 0042a3a6 (CONDITIONAL_JUMP)  ; LAB_0042a3a6
    ADD ESP,0x18                        ; 0042a3a1
    POP EBX                             ; 0042a3a4
    RET                                 ; 0042a3a5
    PUSH EBX                            ; 0042a3a6
        ;   Label: LAB_0042a3a6
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0042a3a7
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 0042a3ac
    MOV EDX,ESP                         ; 0042a3af
    PUSH EDX                            ; 0042a3b1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042a3b2
    PUSH EBX                            ; 0042a3b8
    CALL dword ptr [EAX + 0x14]         ; 0042a3b9
    ADD ESP,0x8                         ; 0042a3bc
    PUSH EAX                            ; 0042a3bf
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0042a3c0
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0042a3c5
    TEST EAX,EAX                        ; 0042a3c8
    JZ 0x0042a3d5                       ; 0042a3ca
        ;   XREF to: 0042a3d5 (CONDITIONAL_JUMP)  ; LAB_0042a3d5
    PUSH EBX                            ; 0042a3cc
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0 ; 0042a3cd
        ;   XREF to: 00429aa0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00429aa0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042a3d2
    PUSH EBX                            ; 0042a3d5
        ;   Label: LAB_0042a3d5
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0042a3d6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042a3db
    ADD ESP,0x18                        ; 0042a3de
    POP EBX                             ; 0042a3e1
    RET                                 ; 0042a3e2

