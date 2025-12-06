; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220(CKeyFramedModel * this_ptr, int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047de67
;
; Referenced Globals:
;   float FLOAT_00620557 = 0.5
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c220
        ;   Label: core_dmodel.cpp_CKeyFramedModel_recenter_FUN_0047c220
    SUB ESP,0x24                        ; 0047c221
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0047c224
    PUSH EBX                            ; 0047c228
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c229 | void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047c22e
    MOV EDX,dword ptr [ESP + 0x30]      ; 0047c231
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047c235
    SUB EAX,EDX                         ; 0047c23c
    LEA EDX,[EAX*0x8 + 0x0]             ; 0047c23e
    MOV EAX,dword ptr [EBX + 0x5690]    ; 0047c245
    ADD EAX,EDX                         ; 0047c24b
    LEA EDX,[EAX + 0xc]                 ; 0047c24d
    FLD float ptr [EAX]                 ; 0047c250
    FADD float ptr [EDX]                ; 0047c252
    FST float ptr [ESP + 0xc]           ; 0047c254
    FLD float ptr [EAX + 0x4]           ; 0047c258
    FADD float ptr [EDX + 0x4]          ; 0047c25b
    FXCH                                ; 0047c25e
    FLD float ptr [0x00620557]          ; 0047c260 | float FLOAT_00620557
    FXCH                                ; 0047c266
    FMUL ST1                            ; 0047c268
    FXCH ST2                            ; 0047c26a
    FST float ptr [ESP + 0x10]          ; 0047c26c
    FLD float ptr [EAX + 0x8]           ; 0047c270
    FADD float ptr [EDX + 0x8]          ; 0047c273
    FXCH                                ; 0047c276
    FMUL ST2                            ; 0047c278
    FXCH                                ; 0047c27a
    FST float ptr [ESP + 0x14]          ; 0047c27c
    FMULP ST2                           ; 0047c280
    LEA EAX,[ESP + 0x18]                ; 0047c282
    FXCH ST2                            ; 0047c286
    FSTP float ptr [ESP]                ; 0047c288
    FXCH                                ; 0047c28b
    FSTP float ptr [ESP + 0x4]          ; 0047c28d
    PUSH EAX                            ; 0047c291
    FLD float ptr [ESP + 0x8]           ; 0047c292
    FLD float ptr [ESP + 0x4]           ; 0047c296
    FCHS                                ; 0047c29a
    FXCH                                ; 0047c29c
    FCHS                                ; 0047c29e
    PUSH EBX                            ; 0047c2a0
    FXCH                                ; 0047c2a1
    FSTP float ptr [ESP + 0x20]         ; 0047c2a3
    FSTP float ptr [ESP + 0x24]         ; 0047c2a7
    FST float ptr [ESP + 0x10]          ; 0047c2ab
    FCHS                                ; 0047c2af
    FSTP float ptr [ESP + 0x28]         ; 0047c2b1
    CALL core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370 ; 0047c2b5 | void core_dmodel.cpp_CKeyFramedModel_applyBias_FUN_0047c370(CKeyFramedModel * this_ptr, CVector3f * bias_offset)
        ;   XREF to: 0047c370 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047c2ba
    ADD ESP,0x24                        ; 0047c2bd
    POP EBX                             ; 0047c2c0
    RET                                 ; 0047c2c1

