; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0(CMansionPuzzleCircle *this_ptr,int reflector_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   reflector_index
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005042e0 at 005043b4
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061f650
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_matrix.c_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005054c0
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_005054c0
    PUSH ESI                            ; 005054c1
    PUSH EBP                            ; 005054c2
    MOV EBP,ESP                         ; 005054c3
    SUB ESP,0x4                         ; 005054c5
    MOV ESI,dword ptr [EBP + 0x10]      ; 005054c8
    MOV EBX,dword ptr [EBP + 0x14]      ; 005054cb
    LEA EAX,[EBX*0x4 + 0x0]             ; 005054ce
    SUB EAX,EBX                         ; 005054d5
    SHL EAX,0x5                         ; 005054d7
    LEA EBX,[ESI + 0x1340]              ; 005054da
    ADD EBX,EAX                         ; 005054e0
    MOV EAX,[0x0061f650]                ; 005054e2 | DAT_0061f650
    CMP dword ptr [EAX + 0x1008],0x0    ; 005054e7
    JNZ 0x00505502                      ; 005054ee
        ;   XREF to: 00505502 (CONDITIONAL_JUMP)  ; LAB_00505502
    FLD float ptr [EBX + 0x18]          ; 005054f0
    FLDZ                                ; 005054f3
    FCOMPP                              ; 005054f5
    FNSTSW AX                           ; 005054f7
    SAHF                                ; 005054f9
    JC 0x00505502                       ; 005054fa
        ;   XREF to: 00505502 (CONDITIONAL_JUMP)  ; LAB_00505502
    MOV ESP,EBP                         ; 005054fc
    POP EBP                             ; 005054fe
    POP ESI                             ; 005054ff
    POP EBX                             ; 00505500
    RET                                 ; 00505501
    LEA EAX,[EBX + 0x1c]                ; 00505502
        ;   Label: LAB_00505502
    PUSH EAX                            ; 00505505
    LEA EAX,[EBX + 0x28]                ; 00505506
    PUSH EAX                            ; 00505509
    MOV ECX,dword ptr [0x00612560]      ; 0050550a | DAT_00612560
    PUSH ECX                            ; 00505510
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00505511
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00505516
    PUSH -0x1                           ; 00505519
    ADD ESI,0x450                       ; 0050551b
    PUSH ESI                            ; 00505521
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00505522
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EAX,dword ptr [EAX + 0x100]     ; 00505527
    DEC EAX                             ; 0050552d
    MOV dword ptr [EBP + -0x4],EAX      ; 0050552e
    ADD ESP,0x4                         ; 00505531
    FILD dword ptr [EBP + -0x4]         ; 00505534
    FMUL float ptr [EBX + 0x18]         ; 00505537
    SUB ESP,0x4                         ; 0050553a
    FSTP float ptr [ESP]                ; 0050553d
    PUSH ESI                            ; 00505540
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0 ; 00505541
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 00505546
    MOV EBX,dword ptr [0x00612560]      ; 00505549 | DAT_00612560
    PUSH EBX                            ; 0050554f
    CALL engine_matrix.c_pop_FUN_004839a0 ; 00505550
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00505555
    MOV ESP,EBP                         ; 00505558
    POP EBP                             ; 0050555a
    POP ESI                             ; 0050555b
    POP EBX                             ; 0050555c
    RET                                 ; 0050555d

