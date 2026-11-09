; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_flamecan_cpp_FUN_004a7230(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
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

    PUSH EBX                            ; 004a7230
        ;   Label: core_flamecan.cpp_FUN_004a7230
    PUSH ESI                            ; 004a7231
    PUSH EDI                            ; 004a7232
    SUB ESP,0x30                        ; 004a7233
    MOV EBX,dword ptr [ESP + 0x40]      ; 004a7236
    LEA EAX,[EBX + 0x20]                ; 004a723a
    PUSH EAX                            ; 004a723d
    MOV EDX,dword ptr [0x005f2afc]      ; 004a723e | DAT_005f2afc
    PUSH EDX                            ; 004a7244
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 004a7245
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004a724a
    PUSH 0x0                            ; 004a724d
    LEA EAX,[EBX + 0x30]                ; 004a724f
    PUSH EAX                            ; 004a7252
    MOV ECX,dword ptr [0x005f2afc]      ; 004a7253 | DAT_005f2afc
    PUSH ECX                            ; 004a7259
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 004a725a
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004a725f
    PUSH 0x0                            ; 004a7262
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a7264
    PUSH EBX                            ; 004a726a
    LEA ESI,[ESP + 0x20]                ; 004a726b
    LEA EDI,[ESP + 0x8]                 ; 004a726f
    CALL dword ptr [EAX + 0x1c]         ; 004a7273
    MOV ECX,0x6                         ; 004a7276
    ADD ESP,0x4                         ; 004a727b
    LEA EAX,[ESP + 0x4]                 ; 004a727e
    LEA ESI,[ESP + 0x1c]                ; 004a7282
    PUSH EAX                            ; 004a7286
    MOVSD.REP ES:EDI,ESI                ; 004a7287
    CALL core_box.cpp_FUN_0041daf0      ; 004a7289
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 004a728e
    MOV ESI,EAX                         ; 004a7291
    MOV dword ptr [EBX + 0x5e4],EAX     ; 004a7293
    TEST EAX,EAX                        ; 004a7299
    JNZ 0x004a72b5                      ; 004a729b
        ;   XREF to: 004a72b5 (CONDITIONAL_JUMP)  ; LAB_004a72b5
    MOV EBX,dword ptr [0x005f2afc]      ; 004a729d | DAT_005f2afc
        ;   Label: LAB_004a729d
    PUSH EBX                            ; 004a72a3
    CALL engine_matrix.c_pop_FUN_0046d080 ; 004a72a4
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 004a72a9
    MOV EAX,ESI                         ; 004a72ac
    ADD ESP,0x30                        ; 004a72ae
    POP EDI                             ; 004a72b1
    POP ESI                             ; 004a72b2
    POP EBX                             ; 004a72b3
    RET                                 ; 004a72b4
    PUSH -0x1                           ; 004a72b5
        ;   Label: LAB_004a72b5
    ADD EBX,0x158                       ; 004a72b7
    PUSH 0x0                            ; 004a72bd
    PUSH EBX                            ; 004a72bf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 004a72c0
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 004a72c5
    JMP 0x004a729d                      ; 004a72c8
        ;   XREF to: 004a729d (UNCONDITIONAL_JUMP)  ; LAB_004a729d

