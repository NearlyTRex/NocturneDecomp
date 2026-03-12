; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470(CKeyFramedModel *this_ptr,float desired_height)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   desired_height
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
;   core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c470
        ;   Label: core_dmodel.cpp_CKeyFramedModel_scaleToHeight_FUN_0047c470
    MOV EBX,dword ptr [ESP + 0x8]       ; 0047c471
    PUSH EBX                            ; 0047c475
    CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010 ; 0047c476
        ;   XREF to: 00478010 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(CKeyFramedModel * model_ptr)
    MOV EAX,dword ptr [EBX + 0x5690]    ; 0047c47b
    FLD float ptr [EAX + 0x10]          ; 0047c481
    FSUB float ptr [EAX + 0x4]          ; 0047c484
    ADD ESP,0x4                         ; 0047c487
    FDIVR float ptr [ESP + 0xc]         ; 0047c48a
    SUB ESP,0x4                         ; 0047c48e
    FSTP float ptr [ESP]                ; 0047c491
    PUSH EBX                            ; 0047c494
    CALL core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0 ; 0047c495
        ;   XREF to: 0047c4a0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_scaleUniform_FUN_0047c4a0(CKeyFramedModel * this_ptr, float uniform_scale)
    ADD ESP,0x8                         ; 0047c49a
    POP EBX                             ; 0047c49d
    RET                                 ; 0047c49e

