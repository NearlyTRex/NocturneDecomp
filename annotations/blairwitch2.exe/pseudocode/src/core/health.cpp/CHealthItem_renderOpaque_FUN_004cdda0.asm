; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_renderOpaque_FUN_004cdda0(CHealthItem *this_ptr)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdda0
        ;   Label: core_health.cpp_CHealthItem_renderOpaque_FUN_004cdda0
    PUSH ESI                            ; 004cdda1
    PUSH EDI                            ; 004cdda2
    SUB ESP,0x30                        ; 004cdda3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004cdda6
    PUSH EBX                            ; 004cddaa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004cddab
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cddb0
    PUSH 0x0                            ; 004cddb3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004cddb5
    PUSH EBX                            ; 004cddbb
    LEA ESI,[ESP + 0x8]                 ; 004cddbc
    LEA EDI,[ESP + 0x20]                ; 004cddc0
    CALL dword ptr [EAX + 0x24]         ; 004cddc4
    MOV ECX,0x6                         ; 004cddc7
    ADD ESP,0x4                         ; 004cddcc
    LEA EAX,[ESP + 0x1c]                ; 004cddcf
    LEA ESI,[ESP + 0x4]                 ; 004cddd3
    PUSH EAX                            ; 004cddd7
    MOVSD.REP ES:EDI,ESI                ; 004cddd8
    CALL core_box.cpp_FUN_0041a840      ; 004cddda
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    ADD ESP,0x8                         ; 004cdddf
    MOV ESI,EAX                         ; 004cdde2
    TEST EAX,EAX                        ; 004cdde4
    JNZ 0x004cddfa                      ; 004cdde6
        ;   XREF to: 004cddfa (CONDITIONAL_JUMP)  ; LAB_004cddfa
    PUSH EBX                            ; 004cdde8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004cdde9
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cddee
    MOV EAX,ESI                         ; 004cddf1
    ADD ESP,0x30                        ; 004cddf3
    POP EDI                             ; 004cddf6
    POP ESI                             ; 004cddf7
    POP EBX                             ; 004cddf8
    RET                                 ; 004cddf9
    PUSH -0x1                           ; 004cddfa
        ;   Label: LAB_004cddfa
    LEA EAX,[EBX + 0x2b4]               ; 004cddfc
    PUSH 0x0                            ; 004cde02
    PUSH EAX                            ; 004cde04
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0 ; 004cde05
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004cde0a
    PUSH EBX                            ; 004cde0d
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004cde0e
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004cde13
    MOV EAX,ESI                         ; 004cde16
    ADD ESP,0x30                        ; 004cde18
    POP EDI                             ; 004cde1b
    POP ESI                             ; 004cde1c
    POP EBX                             ; 004cde1d
    RET                                 ; 004cde1e

