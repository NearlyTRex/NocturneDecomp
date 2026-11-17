; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodParticle_setupRenderState_FUN_004c7490(CBloodParticle *this_ptr)
;
; Parameters:
; CBloodParticle * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_renderParticles_FUN_004c9440 at 004c948a
;
; Referenced Globals:
;   double g_DOUBLE_005d9432 = -65536
;   CDemonRenderer* g_CDemonRenderer_PTR_0060b280 = 01ba5c50
;   CDemonCamera* g_CDemonCamera_PTR_007bda74
;   CDemonRenderer g_CDemonRenderer_01ba5c50
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.base.base.count
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.A
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.B
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.C
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.D
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[0]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[1]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[2]
;   undefined4 g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[3]
;   CVector3i g_CVector3i_01cb82b0
;   undefined4 g_CVector3i_01cb82b0.y
;   ... and 4 more
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7490
        ;   Label: core_gore.cpp_CBloodParticle_setupRenderState_FUN_004c7490
    PUSH ESI                            ; 004c7491
    PUSH EDI                            ; 004c7492
    SUB ESP,0x5c                        ; 004c7493
    MOV EDX,0x4                         ; 004c7496
    MOV EAX,0x1                         ; 004c749b
    LEA ESI,[ESP + 0x50]                ; 004c74a0
    MOV EBX,dword ptr [0x0060b280]      ; 004c74a4 | g_CDemonRenderer_PTR_0060b280
    MOV EDI,0x1cb82b0                   ; 004c74aa
    XOR ECX,ECX                         ; 004c74af
    MOV dword ptr [0x01cb828c],EDX      ; 004c74b1 | g_SMRGLPrimitiveQuadIndex_01cb8288.base.base.count
    MOV dword ptr [0x01cb8290],ECX      ; 004c74b7 | g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.A
    MOV dword ptr [0x01cb8294],ECX      ; 004c74bd | g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.B
    MOV dword ptr [0x01cb8298],ECX      ; 004c74c3 | g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.C
    MOV dword ptr [0x01cb829c],ECX      ; 004c74c9 | g_SMRGLPrimitiveQuadIndex_01cb8288.base.surface_normal.D
    MOV dword ptr [0x01cb82a0],ECX      ; 004c74cf | g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[0]
    MOV [0x01cb82a4],EAX                ; 004c74d5 | g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[1]
    PUSH EBX                            ; 004c74da | g_CDemonRenderer_01ba5c50
    MOV EDX,0x2                         ; 004c74db
    MOV ECX,0x3                         ; 004c74e0
    MOV dword ptr [0x01cb82a8],EDX      ; 004c74e5 | g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[2]
    MOV dword ptr [0x01cb82ac],ECX      ; 004c74eb | g_SMRGLPrimitiveQuadIndex_01cb8288.vertices[3]
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650 ; 004c74f1
        ;   XREF to: 0046b650 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046b650(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0x54]                ; 004c74f6
    ADD ESP,0x4                         ; 004c74fa
    MOVSD ES:EDI,ESI                    ; 004c74fd | g_CVector3i_01cb82b0
    MOVSD ES:EDI,ESI                    ; 004c74fe | g_CVector3i_01cb82b0.y
    MOVSD ES:EDI,ESI                    ; 004c74ff | g_CVector3i_01cb82b0.z
    XOR ESI,ESI                         ; 004c7500
    MOV dword ptr [0x01cb82b4],ESI      ; 004c7502 | g_CVector3i_01cb82b0.y
    MOV ESI,dword ptr [0x007bda74]      ; 004c7508 | g_CDemonCamera_PTR_007bda74
    MOV ECX,0xa                         ; 004c750e
    LEA EDI,[ESP + 0x28]                ; 004c7513
    LEA ESI,[ESI + 0x10]                ; 004c7517
    MOVSD.REP ES:EDI,ESI                ; 004c751a
    MOV ECX,0xa                         ; 004c751c
    MOV EDI,ESP                         ; 004c7521
    LEA ESI,[ESP + 0x28]                ; 004c7523
    MOVSD.REP ES:EDI,ESI                ; 004c7527
    FLD double ptr [0x005d9432]         ; 004c7529 | g_DOUBLE_005d9432
    FLD float ptr [ESP + 0x8]           ; 004c752f
    FMUL ST1                            ; 004c7533
    FLD float ptr [ESP + 0x14]          ; 004c7535
    FMUL ST2                            ; 004c7539
    FLD float ptr [ESP + 0x20]          ; 004c753b
    FMULP ST3                           ; 004c753f
    FXCH                                ; 004c7541
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c7543
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 004c7548
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c754a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH ST2                            ; 004c754f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004c7551
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FXCH                                ; 004c7556
    FISTP dword ptr [0x01cb82bc]        ; 004c7558 | g_CVector3i_01cb82bc
    FXCH                                ; 004c755e
    FISTP dword ptr [0x01cb82c0]        ; 004c7560 | g_CVector3i_01cb82bc.y
    FISTP dword ptr [0x01cb82c4]        ; 004c7566 | g_CVector3i_01cb82bc.z
    ADD ESP,0x5c                        ; 004c756c
    POP EDI                             ; 004c756f
    POP ESI                             ; 004c7570
    POP EBX                             ; 004c7571
    RET                                 ; 004c7572

