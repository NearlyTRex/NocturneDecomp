; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_door_cpp_CDoor_renderBackground_FUN_00464b40(CDoor *this_ptr,int layer_flag)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00464b40
        ;   Label: core_door.cpp_CDoor_renderBackground_FUN_00464b40
    SUB ESP,0x30                        ; 00464b41
    MOV EBX,dword ptr [ESP + 0x38]      ; 00464b44
    CMP dword ptr [ESP + 0x3c],0x0      ; 00464b48
    JZ 0x00464b58                       ; 00464b4d
        ;   XREF to: 00464b58 (CONDITIONAL_JUMP)  ; LAB_00464b58
    CMP dword ptr [EBX + 0x9c8],0x2     ; 00464b4f
    JGE 0x00464b5d                      ; 00464b56
        ;   XREF to: 00464b5d (CONDITIONAL_JUMP)  ; LAB_00464b5d
    ADD ESP,0x30                        ; 00464b58
        ;   Label: LAB_00464b58
    POP EBX                             ; 00464b5b
    RET                                 ; 00464b5c
    PUSH EDI                            ; 00464b5d
        ;   Label: LAB_00464b5d
    PUSH ESI                            ; 00464b5e
    PUSH EBX                            ; 00464b5f
    MOV dword ptr [EBX + 0x9c8],0x3     ; 00464b60
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 00464b6a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464b6f
    PUSH 0x0                            ; 00464b72
    MOV EAX,dword ptr [EBX + 0x154]     ; 00464b74
    PUSH EBX                            ; 00464b7a
    LEA ESI,[ESP + 0x10]                ; 00464b7b
    LEA EDI,[ESP + 0x28]                ; 00464b7f
    CALL dword ptr [EAX + 0x1c]         ; 00464b83
    MOV ECX,0x6                         ; 00464b86
    ADD ESP,0x4                         ; 00464b8b
    LEA EAX,[ESP + 0x24]                ; 00464b8e
    LEA ESI,[ESP + 0xc]                 ; 00464b92
    PUSH EAX                            ; 00464b96
    MOVSD.REP ES:EDI,ESI                ; 00464b97
    CALL core_box.cpp_FUN_0041daf0      ; 00464b99
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00464b9e
    TEST EAX,EAX                        ; 00464ba1
    JZ 0x00464bb8                       ; 00464ba3
        ;   XREF to: 00464bb8 (CONDITIONAL_JUMP)  ; LAB_00464bb8
    PUSH -0x1                           ; 00464ba5
    LEA EAX,[EBX + 0x158]               ; 00464ba7
    PUSH 0x0                            ; 00464bad
    PUSH EAX                            ; 00464baf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 00464bb0
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00464bb5
    PUSH EBX                            ; 00464bb8
        ;   Label: LAB_00464bb8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 00464bb9
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00464bbe
    POP ESI                             ; 00464bc1
    POP EDI                             ; 00464bc2
    ADD ESP,0x30                        ; 00464bc3
    POP EBX                             ; 00464bc6
    RET                                 ; 00464bc7

