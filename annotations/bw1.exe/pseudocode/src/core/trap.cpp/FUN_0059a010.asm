; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_trap_cpp_FUN_0059a010(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   core_box.cpp_FUN_004207b0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a010
        ;   Label: core_trap.cpp_FUN_0059a010
    PUSH ESI                            ; 0059a011
    PUSH EDI                            ; 0059a012
    PUSH EBP                            ; 0059a013
    SUB ESP,0x30                        ; 0059a014
    MOV EBX,dword ptr [ESP + 0x44]      ; 0059a017
    LEA EAX,[EBX + 0x20]                ; 0059a01b
    PUSH EAX                            ; 0059a01e
    MOV EDX,dword ptr [0x00612560]      ; 0059a01f | DAT_00612560
    PUSH EDX                            ; 0059a025
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 0059a026
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0059a02b
    PUSH 0x0                            ; 0059a02e
    LEA EAX,[EBX + 0x30]                ; 0059a030
    PUSH EAX                            ; 0059a033
    MOV ECX,dword ptr [0x00612560]      ; 0059a034 | DAT_00612560
    PUSH ECX                            ; 0059a03a
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 0059a03b
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0059a040
    PUSH 0x0                            ; 0059a043
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059a045
    PUSH EBX                            ; 0059a04b
    LEA ESI,[ESP + 0x20]                ; 0059a04c
    LEA EDI,[ESP + 0x8]                 ; 0059a050
    CALL dword ptr [EAX + 0x1c]         ; 0059a054
    MOV ECX,0x6                         ; 0059a057
    ADD ESP,0x4                         ; 0059a05c
    LEA EAX,[ESP + 0x4]                 ; 0059a05f
    LEA ESI,[ESP + 0x1c]                ; 0059a063
    PUSH EAX                            ; 0059a067
    MOVSD.REP ES:EDI,ESI                ; 0059a068
    CALL core_box.cpp_FUN_004207b0      ; 0059a06a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0059a06f
    MOV ESI,EAX                         ; 0059a072
    TEST EAX,EAX                        ; 0059a074
    JZ 0x0059a098                       ; 0059a076
        ;   XREF to: 0059a098 (CONDITIONAL_JUMP)  ; LAB_0059a098
    MOV EDI,dword ptr [EBX + 0x2d8]     ; 0059a078
    LEA EAX,[EBX + 0x158]               ; 0059a07e
    TEST EDI,EDI                        ; 0059a084
    JZ 0x0059a0b1                       ; 0059a086
        ;   XREF to: 0059a0b1 (CONDITIONAL_JUMP)  ; LAB_0059a0b1
    PUSH -0x1                           ; 0059a088
    PUSH 0x40400000                     ; 0059a08a
    PUSH EAX                            ; 0059a08f
        ;   Label: LAB_0059a08f
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 0059a090
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0059a095
    MOV EBP,dword ptr [0x00612560]      ; 0059a098 | DAT_00612560
        ;   Label: LAB_0059a098
    PUSH EBP                            ; 0059a09e
    CALL engine_matrix.c_pop_FUN_004839a0 ; 0059a09f
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 0059a0a4
    MOV EAX,ESI                         ; 0059a0a7
    ADD ESP,0x30                        ; 0059a0a9
    POP EBP                             ; 0059a0ac
    POP EDI                             ; 0059a0ad
    POP ESI                             ; 0059a0ae
    POP EBX                             ; 0059a0af
    RET                                 ; 0059a0b0
    PUSH -0x1                           ; 0059a0b1
        ;   Label: LAB_0059a0b1
    PUSH 0x0                            ; 0059a0b3
    JMP 0x0059a08f                      ; 0059a0b5
        ;   XREF to: 0059a08f (UNCONDITIONAL_JUMP)  ; LAB_0059a08f

