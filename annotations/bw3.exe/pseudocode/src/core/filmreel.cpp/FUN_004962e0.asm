; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_filmreel_cpp_FUN_004962e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004962e0
        ;   Label: core_filmreel.cpp_FUN_004962e0
    PUSH ESI                            ; 004962e1
    PUSH EDI                            ; 004962e2
    SUB ESP,0x30                        ; 004962e3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004962e6
    LEA EAX,[EBX + 0x20]                ; 004962ea
    PUSH EAX                            ; 004962ed
    MOV EDX,dword ptr [0x005f2afc]      ; 004962ee | DAT_005f2afc
    PUSH EDX                            ; 004962f4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004962f5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004962fa
    PUSH 0x0                            ; 004962fd
    LEA EAX,[EBX + 0x30]                ; 004962ff
    PUSH EAX                            ; 00496302
    MOV ECX,dword ptr [0x005f2afc]      ; 00496303 | DAT_005f2afc
    PUSH ECX                            ; 00496309 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0049630a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0049630f
    PUSH 0x0                            ; 00496312
    MOV EAX,dword ptr [EBX + 0x154]     ; 00496314
    PUSH EBX                            ; 0049631a
    LEA ESI,[ESP + 0x20]                ; 0049631b
    LEA EDI,[ESP + 0x8]                 ; 0049631f
    CALL dword ptr [EAX + 0x1c]         ; 00496323
    MOV ECX,0x6                         ; 00496326
    ADD ESP,0x4                         ; 0049632b
    LEA EAX,[ESP + 0x4]                 ; 0049632e
    LEA ESI,[ESP + 0x1c]                ; 00496332
    PUSH EAX                            ; 00496336
    MOVSD.REP ES:EDI,ESI                ; 00496337
    CALL core_box.cpp_FUN_0041daf0      ; 00496339
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0049633e
    MOV ESI,EAX                         ; 00496341
    TEST EAX,EAX                        ; 00496343
    JNZ 0x00496361                      ; 00496345
        ;   XREF to: 00496361 (CONDITIONAL_JUMP)  ; LAB_00496361
    MOV EBX,dword ptr [0x005f2afc]      ; 00496347 | DAT_005f2afc
        ;   Label: LAB_00496347
    PUSH EBX                            ; 0049634d | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0049634e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00496353
    MOV EAX,ESI                         ; 00496356
    ADD ESP,0x30                        ; 00496358
    POP EDI                             ; 0049635b
    POP ESI                             ; 0049635c
    POP EBX                             ; 0049635d
    MOV EAX,EAX                         ; 0049635e
    PUSH -0x1                           ; 00496361
        ;   Label: LAB_00496361
    ADD EBX,0x158                       ; 00496363
    PUSH 0x0                            ; 00496369
    PUSH EBX                            ; 0049636b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0049636c
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00496371
    JMP 0x00496347                      ; 00496374
        ;   XREF to: 00496347 (UNCONDITIONAL_JUMP)  ; LAB_00496347

