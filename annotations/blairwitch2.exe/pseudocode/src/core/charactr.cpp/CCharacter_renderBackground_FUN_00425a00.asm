; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderBackground_FUN_00425a00(CCharacter *this_ptr,int layer_flag)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_enemy.cpp_CEnemy_renderBackground_FUN_00488940 at 00488961
;   core_npc.cpp_CNPC_renderBackground_FUN_005108d0 at 005108f1
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425a00
        ;   Label: core_charactr.cpp_CCharacter_renderBackground_FUN_00425a00
    SUB ESP,0x30                        ; 00425a01
    MOV EBX,dword ptr [ESP + 0x38]      ; 00425a04
    CMP dword ptr [EBX + 0x2568],0x0    ; 00425a08
    JNZ 0x00425a16                      ; 00425a0f
        ;   XREF to: 00425a16 (CONDITIONAL_JUMP)  ; LAB_00425a16
    ADD ESP,0x30                        ; 00425a11
    POP EBX                             ; 00425a14
    RET                                 ; 00425a15
    PUSH EDI                            ; 00425a16
        ;   Label: LAB_00425a16
    PUSH ESI                            ; 00425a17
    PUSH EBX                            ; 00425a18
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 00425a19
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00425a1e
    PUSH 0x0                            ; 00425a21
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00425a23
    PUSH EBX                            ; 00425a29
    LEA ESI,[ESP + 0x10]                ; 00425a2a
    LEA EDI,[ESP + 0x28]                ; 00425a2e
    CALL dword ptr [EAX + 0x24]         ; 00425a32
    MOV ECX,0x6                         ; 00425a35
    ADD ESP,0x4                         ; 00425a3a
    LEA EAX,[ESP + 0x24]                ; 00425a3d
    LEA ESI,[ESP + 0xc]                 ; 00425a41
    PUSH EAX                            ; 00425a45
    MOVSD.REP ES:EDI,ESI                ; 00425a46
    CALL core_box.cpp_FUN_0041a840      ; 00425a48
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 00425a4d
    TEST EAX,EAX                        ; 00425a50
    JZ 0x00425a5d                       ; 00425a52
        ;   XREF to: 00425a5d (CONDITIONAL_JUMP)  ; LAB_00425a5d
    PUSH EBX                            ; 00425a54
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0 ; 00425a55
        ;   XREF to: 00424bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_00424bd0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00425a5a
    PUSH EBX                            ; 00425a5d
        ;   Label: LAB_00425a5d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 00425a5e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00425a63
    POP ESI                             ; 00425a66
    POP EDI                             ; 00425a67
    ADD ESP,0x30                        ; 00425a68
    POP EBX                             ; 00425a6b
    RET                                 ; 00425a6c

