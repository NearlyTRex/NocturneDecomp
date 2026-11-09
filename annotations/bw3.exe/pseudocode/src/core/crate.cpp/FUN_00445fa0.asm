; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_crate_cpp_FUN_00445fa0(int param_1)
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

    PUSH EBX                            ; 00445fa0
        ;   Label: core_crate.cpp_FUN_00445fa0
    PUSH ESI                            ; 00445fa1
    PUSH EDI                            ; 00445fa2
    SUB ESP,0x30                        ; 00445fa3
    MOV EBX,dword ptr [ESP + 0x40]      ; 00445fa6
    LEA EAX,[EBX + 0x20]                ; 00445faa
    PUSH EAX                            ; 00445fad
    MOV EDX,dword ptr [0x005f2afc]      ; 00445fae | DAT_005f2afc
    PUSH EDX                            ; 00445fb4 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 00445fb5
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 00445fba
    PUSH 0x0                            ; 00445fbd
    LEA EAX,[EBX + 0x30]                ; 00445fbf
    PUSH EAX                            ; 00445fc2
    MOV ECX,dword ptr [0x005f2afc]      ; 00445fc3 | DAT_005f2afc
    PUSH ECX                            ; 00445fc9 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 00445fca
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00445fcf
    PUSH 0x0                            ; 00445fd2
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445fd4
    PUSH EBX                            ; 00445fda
    LEA ESI,[ESP + 0x20]                ; 00445fdb
    LEA EDI,[ESP + 0x8]                 ; 00445fdf
    CALL dword ptr [EAX + 0x1c]         ; 00445fe3
    MOV ECX,0x6                         ; 00445fe6
    ADD ESP,0x4                         ; 00445feb
    LEA EAX,[ESP + 0x4]                 ; 00445fee
    LEA ESI,[ESP + 0x1c]                ; 00445ff2
    PUSH EAX                            ; 00445ff6
    MOVSD.REP ES:EDI,ESI                ; 00445ff7
    CALL core_box.cpp_FUN_0041daf0      ; 00445ff9
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 00445ffe
    MOV ESI,EAX                         ; 00446001
    TEST EAX,EAX                        ; 00446003
    JNZ 0x00446021                      ; 00446005
        ;   XREF to: 00446021 (CONDITIONAL_JUMP)  ; LAB_00446021
    MOV EBX,dword ptr [0x005f2afc]      ; 00446007 | DAT_005f2afc
        ;   Label: LAB_00446007
    PUSH EBX                            ; 0044600d | DAT_01bdd7e4
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0044600e
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 00446013
    MOV EAX,ESI                         ; 00446016
    ADD ESP,0x30                        ; 00446018
    POP EDI                             ; 0044601b
    POP ESI                             ; 0044601c
    POP EBX                             ; 0044601d
    MOV EAX,EAX                         ; 0044601e
    PUSH -0x1                           ; 00446021
        ;   Label: LAB_00446021
    ADD EBX,0x158                       ; 00446023
    PUSH 0x0                            ; 00446029
    PUSH EBX                            ; 0044602b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0044602c
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00446031
    JMP 0x00446007                      ; 00446034
        ;   XREF to: 00446007 (UNCONDITIONAL_JUMP)  ; LAB_00446007

