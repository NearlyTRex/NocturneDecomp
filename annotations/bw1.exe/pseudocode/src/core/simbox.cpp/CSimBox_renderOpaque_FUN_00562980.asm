; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_simbox_cpp_CSimBox_renderOpaque_FUN_00562980(CSimBox *this_ptr)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562980
        ;   Label: core_simbox.cpp_CSimBox_renderOpaque_FUN_00562980
    PUSH ESI                            ; 00562981
    PUSH EDI                            ; 00562982
    SUB ESP,0x30                        ; 00562983
    MOV EBX,dword ptr [ESP + 0x40]      ; 00562986
    PUSH EBX                            ; 0056298a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0056298b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00562990
    PUSH 0x0                            ; 00562993
    MOV EAX,dword ptr [EBX + 0x154]     ; 00562995
    PUSH EBX                            ; 0056299b
    LEA ESI,[ESP + 0x8]                 ; 0056299c
    LEA EDI,[ESP + 0x20]                ; 005629a0
    CALL dword ptr [EAX + 0x1c]         ; 005629a4
    MOV ECX,0x6                         ; 005629a7
    ADD ESP,0x4                         ; 005629ac
    LEA EAX,[ESP + 0x1c]                ; 005629af
    LEA ESI,[ESP + 0x4]                 ; 005629b3
    PUSH EAX                            ; 005629b7
    MOVSD.REP ES:EDI,ESI                ; 005629b8
    CALL core_box.cpp_FUN_004207b0      ; 005629ba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 005629bf
    MOV ESI,EAX                         ; 005629c2
    TEST EAX,EAX                        ; 005629c4
    JNZ 0x005629da                      ; 005629c6
        ;   XREF to: 005629da (CONDITIONAL_JUMP)  ; LAB_005629da
    PUSH EBX                            ; 005629c8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005629c9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005629ce
    MOV EAX,ESI                         ; 005629d1
    ADD ESP,0x30                        ; 005629d3
    POP EDI                             ; 005629d6
    POP ESI                             ; 005629d7
    POP EBX                             ; 005629d8
    RET                                 ; 005629d9
    PUSH -0x1                           ; 005629da
        ;   Label: LAB_005629da
    LEA EAX,[EBX + 0x158]               ; 005629dc
    PUSH 0x0                            ; 005629e2
    PUSH EAX                            ; 005629e4
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 005629e5
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005629ea
    PUSH EBX                            ; 005629ed
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 005629ee
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005629f3
    MOV EAX,ESI                         ; 005629f6
    ADD ESP,0x30                        ; 005629f8
    POP EDI                             ; 005629fb
    POP ESI                             ; 005629fc
    POP EBX                             ; 005629fd
    RET                                 ; 005629fe

