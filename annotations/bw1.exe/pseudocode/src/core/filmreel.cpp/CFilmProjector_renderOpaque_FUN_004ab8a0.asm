; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_filmreel_cpp_CFilmProjector_renderOpaque_FUN_004ab8a0(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab8a0
        ;   Label: core_filmreel.cpp_CFilmProjector_renderOpaque_FUN_004ab8a0
    PUSH ESI                            ; 004ab8a1
    PUSH EDI                            ; 004ab8a2
    PUSH EBP                            ; 004ab8a3
    SUB ESP,0x48                        ; 004ab8a4
    MOV EBX,dword ptr [ESP + 0x5c]      ; 004ab8a7
    PUSH EBX                            ; 004ab8ab
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004ab8ac
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ab8b1
    PUSH 0x0                            ; 004ab8b4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ab8b6
    PUSH EBX                            ; 004ab8bc
    LEA ESI,[ESP + 0x8]                 ; 004ab8bd
    LEA EDI,[ESP + 0x20]                ; 004ab8c1
    CALL dword ptr [EAX + 0x1c]         ; 004ab8c5
    MOV ECX,0x6                         ; 004ab8c8
    ADD ESP,0x4                         ; 004ab8cd
    LEA EAX,[ESP + 0x1c]                ; 004ab8d0
    LEA ESI,[ESP + 0x4]                 ; 004ab8d4
    PUSH EAX                            ; 004ab8d8
    MOVSD.REP ES:EDI,ESI                ; 004ab8d9
    CALL core_box.cpp_FUN_004207b0      ; 004ab8db
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 004ab8e0
    MOV ESI,EAX                         ; 004ab8e3
    TEST EAX,EAX                        ; 004ab8e5
    JNZ 0x004ab8fc                      ; 004ab8e7
        ;   XREF to: 004ab8fc (CONDITIONAL_JUMP)  ; LAB_004ab8fc
    PUSH EBX                            ; 004ab8e9
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004ab8ea
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ab8ef
    MOV EAX,ESI                         ; 004ab8f2
    ADD ESP,0x48                        ; 004ab8f4
    POP EBP                             ; 004ab8f7
    POP EDI                             ; 004ab8f8
    POP ESI                             ; 004ab8f9
    POP EBX                             ; 004ab8fa
    RET                                 ; 004ab8fb
    XOR EDX,EDX                         ; 004ab8fc
        ;   Label: LAB_004ab8fc
    MOV dword ptr [ESP + 0x3c],EDX      ; 004ab8fe
    MOV EAX,dword ptr [EBX + 0x3d8]     ; 004ab902
    MOV dword ptr [ESP + 0x44],EAX      ; 004ab908
    LEA EAX,[ESP + 0x30]                ; 004ab90c
    MOV dword ptr [ESP + 0x40],EDX      ; 004ab910
    PUSH EAX                            ; 004ab914
    MOV dword ptr [ESP + 0x34],EDX      ; 004ab915
    MOV dword ptr [ESP + 0x3c],EDX      ; 004ab919
    PUSH 0x2c8af28                      ; 004ab91d
    MOV EDX,dword ptr [0x00612560]      ; 004ab922 | DAT_00612560
    MOV EBP,0x40000000                  ; 004ab928
    PUSH EDX                            ; 004ab92d
    MOV dword ptr [ESP + 0x40],EBP      ; 004ab92e
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004ab932
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004ab937
    PUSH 0x2c8af28                      ; 004ab93a
    LEA EAX,[ESP + 0x40]                ; 004ab93f
    PUSH EAX                            ; 004ab943
    MOV ECX,dword ptr [0x00612560]      ; 004ab944 | DAT_00612560
    PUSH ECX                            ; 004ab94a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004ab94b
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004ab950
    PUSH -0x1                           ; 004ab953
    LEA EAX,[EBX + 0x1f4]               ; 004ab955
    PUSH 0x0                            ; 004ab95b
    PUSH EAX                            ; 004ab95d
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 004ab95e
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004ab963
    MOV EDI,dword ptr [0x00612560]      ; 004ab966 | DAT_00612560
    PUSH EDI                            ; 004ab96c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004ab96d
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ab972
    MOV EBP,dword ptr [0x00612560]      ; 004ab975 | DAT_00612560
    PUSH EBP                            ; 004ab97b
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004ab97c
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004ab981
    PUSH EBX                            ; 004ab984
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 004ab985
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004ab98a
    MOV EAX,ESI                         ; 004ab98d
    ADD ESP,0x48                        ; 004ab98f
    POP EBP                             ; 004ab992
    POP EDI                             ; 004ab993
    POP ESI                             ; 004ab994
    POP EBX                             ; 004ab995
    RET                                 ; 004ab996

