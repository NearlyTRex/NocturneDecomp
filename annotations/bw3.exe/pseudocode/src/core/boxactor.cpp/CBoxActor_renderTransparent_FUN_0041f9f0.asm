; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boxactor_cpp_CBoxActor_renderTransparent_FUN_0041f9f0(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005b7505
;   undefined4 DAT_005f2af8
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   core_box.cpp_FUN_0041daf0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540
;   crt_math.c_round_FUN_005a3120
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_matrix.c_pop_FUN_0046d080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f9f0
        ;   Label: core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041f9f0
    PUSH EBP                            ; 0041f9f1
    SUB ESP,0x30                        ; 0041f9f2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0041f9f5
    LEA EAX,[EBX + 0x158]               ; 0041f9f9
    PUSH EAX                            ; 0041f9ff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0041fa00
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x110]     ; 0041fa05
    ADD ESP,0x4                         ; 0041fa0b
    CMP EDX,0x1                         ; 0041fa0e
    JL 0x0041fb19                       ; 0041fa11
        ;   XREF to: 0041fb19 (CONDITIONAL_JUMP)  ; LAB_0041fb19
    FLD float ptr [EBX + 0x6dc]         ; 0041fa17
    FLDZ                                ; 0041fa1d
    FCOMPP                              ; 0041fa1f
    FNSTSW AX                           ; 0041fa21
    SAHF                                ; 0041fa23
    JA 0x0041fa43                       ; 0041fa24
        ;   XREF to: 0041fa43 (CONDITIONAL_JUMP)  ; LAB_0041fa43
    FLD float ptr [EBX + 0x6dc]         ; 0041fa26
    FDIV float ptr [EBX + 0x6e0]        ; 0041fa2c
    FMUL float ptr [0x005b7505]         ; 0041fa32 | DAT_005b7505
    CALL crt_math.c_round_FUN_005a3120  ; 0041fa38
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0x6e4]       ; 0041fa3d
    PUSH EDI                            ; 0041fa43
        ;   Label: LAB_0041fa43
    PUSH ESI                            ; 0041fa44
    LEA EAX,[EBX + 0x20]                ; 0041fa45
    PUSH EAX                            ; 0041fa48
    MOV ECX,dword ptr [0x005f2af8]      ; 0041fa49 | DAT_005f2af8
    PUSH ECX                            ; 0041fa4f
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90 ; 0041fa50
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0041fa55
    PUSH 0x0                            ; 0041fa58
    LEA EAX,[EBX + 0x30]                ; 0041fa5a
    PUSH EAX                            ; 0041fa5d
    MOV ESI,dword ptr [0x005f2af8]      ; 0041fa5e | DAT_005f2af8
    PUSH ESI                            ; 0041fa64
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 ; 0041fa65
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0041fa6a
    PUSH 0x0                            ; 0041fa6d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041fa6f
    PUSH EBX                            ; 0041fa75
    LEA ESI,[ESP + 0x10]                ; 0041fa76
    LEA EDI,[ESP + 0x28]                ; 0041fa7a
    CALL dword ptr [EAX + 0x1c]         ; 0041fa7e
    MOV ECX,0x6                         ; 0041fa81
    ADD ESP,0x4                         ; 0041fa86
    LEA EAX,[ESP + 0x24]                ; 0041fa89
    LEA ESI,[ESP + 0xc]                 ; 0041fa8d
    PUSH EAX                            ; 0041fa91
    MOVSD.REP ES:EDI,ESI                ; 0041fa92
    CALL core_box.cpp_FUN_0041daf0      ; 0041fa94
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0041fa99
    MOV EDI,dword ptr [EBX + 0x6e4]     ; 0041fa9c
    PUSH EDI                            ; 0041faa2
    MOV EBP,dword ptr [0x005f2afc]      ; 0041faa3 | DAT_005f2afc
    PUSH EBP                            ; 0041faa9
    MOV ESI,EAX                         ; 0041faaa
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0041faac
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    MOV EAX,dword ptr [EBX + 0x5fc]     ; 0041fab1
    ADD ESP,0x8                         ; 0041fab7
    TEST EAX,EAX                        ; 0041faba
    JZ 0x0041facd                       ; 0041fabc
        ;   XREF to: 0041facd (CONDITIONAL_JUMP)  ; LAB_0041facd
    MOV EAX,[0x00603b28]                ; 0041fabe | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 0041fac3
    TEST ESI,ESI                        ; 0041facd
        ;   Label: LAB_0041facd
    JZ 0x0041fae8                       ; 0041facf
        ;   XREF to: 0041fae8 (CONDITIONAL_JUMP)  ; LAB_0041fae8
    PUSH -0x1                           ; 0041fad1
    LEA EAX,[EBX + 0x158]               ; 0041fad3
    PUSH dword ptr [EBX + 0x310]        ; 0041fad9
    PUSH EAX                            ; 0041fadf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540 ; 0041fae0
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00462540(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0041fae5
    CMP dword ptr [EBX + 0x5fc],0x0     ; 0041fae8
        ;   Label: LAB_0041fae8
    JZ 0x0041fb00                       ; 0041faef
        ;   XREF to: 0041fb00 (CONDITIONAL_JUMP)  ; LAB_0041fb00
    MOV EAX,[0x00603b28]                ; 0041faf1 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 0041faf6
    MOV ECX,dword ptr [0x005f2af8]      ; 0041fb00 | DAT_005f2af8
        ;   Label: LAB_0041fb00
    PUSH ECX                            ; 0041fb06
    CALL engine_matrix.c_pop_FUN_0046d080 ; 0041fb07
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_0046d080()
    ADD ESP,0x4                         ; 0041fb0c
    MOV EAX,ESI                         ; 0041fb0f
    POP ESI                             ; 0041fb11
    POP EDI                             ; 0041fb12
    ADD ESP,0x30                        ; 0041fb13
    POP EBP                             ; 0041fb16
    POP EBX                             ; 0041fb17
    RET                                 ; 0041fb18
    XOR EAX,EAX                         ; 0041fb19
        ;   Label: LAB_0041fb19
    ADD ESP,0x30                        ; 0041fb1b
    POP EBP                             ; 0041fb1e
    POP EBX                             ; 0041fb1f
    RET                                 ; 0041fb20

