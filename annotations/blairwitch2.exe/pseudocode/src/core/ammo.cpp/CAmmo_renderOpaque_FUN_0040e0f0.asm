; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_0040e0f0(CAmmo *this_ptr)
;
; Parameters:
; CAmmo *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e0f0
        ;   Label: core_ammo.cpp_CAmmo_renderOpaque_FUN_0040e0f0
    PUSH ESI                            ; 0040e0f1
    PUSH EDI                            ; 0040e0f2
    SUB ESP,0x30                        ; 0040e0f3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040e0f6
    PUSH EBX                            ; 0040e0fa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0040e0fb
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e100
    PUSH 0x0                            ; 0040e103
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040e105
    PUSH EBX                            ; 0040e10b
    LEA ESI,[ESP + 0x8]                 ; 0040e10c
    LEA EDI,[ESP + 0x20]                ; 0040e110
    CALL dword ptr [EAX + 0x24]         ; 0040e114
    MOV ECX,0x6                         ; 0040e117
    ADD ESP,0x4                         ; 0040e11c
    LEA EAX,[ESP + 0x1c]                ; 0040e11f
    LEA ESI,[ESP + 0x4]                 ; 0040e123
    PUSH EAX                            ; 0040e127
    MOVSD.REP ES:EDI,ESI                ; 0040e128
    CALL core_box.cpp_FUN_0041a840      ; 0040e12a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 0040e12f
    MOV ESI,EAX                         ; 0040e132
    TEST EAX,EAX                        ; 0040e134
    JNZ 0x0040e14a                      ; 0040e136
        ;   XREF to: 0040e14a (CONDITIONAL_JUMP)  ; LAB_0040e14a
    PUSH EBX                            ; 0040e138
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0040e139
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e13e
    MOV EAX,ESI                         ; 0040e141
    ADD ESP,0x30                        ; 0040e143
    POP EDI                             ; 0040e146
    POP ESI                             ; 0040e147
    POP EBX                             ; 0040e148
    RET                                 ; 0040e149
    PUSH -0x1                           ; 0040e14a
        ;   Label: LAB_0040e14a
    LEA EAX,[EBX + 0x2b4]               ; 0040e14c
    PUSH 0x0                            ; 0040e152
    PUSH EAX                            ; 0040e154
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 0040e155
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0040e15a
    PUSH EBX                            ; 0040e15d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0040e15e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040e163
    MOV EAX,ESI                         ; 0040e166
    ADD ESP,0x30                        ; 0040e168
    POP EDI                             ; 0040e16b
    POP ESI                             ; 0040e16c
    POP EBX                             ; 0040e16d
    RET                                 ; 0040e16e

