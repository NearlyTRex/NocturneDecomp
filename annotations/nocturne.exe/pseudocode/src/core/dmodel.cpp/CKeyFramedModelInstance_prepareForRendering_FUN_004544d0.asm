; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(undefined4 param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[52]:
;   FUN_0040f2b0 at 0040f324
;   FUN_0040f740 at 0040f7b0
;   FUN_00414e70 at 00414ee6
;   FUN_004161a0 at 00416275
;   FUN_0041ea00 at 0041eaae
;   FUN_0041eaf0 at 0041eba4
;   FUN_00421540 at 00421676
;   FUN_0043cbc0 at 0043cc3c
;   FUN_0043d0a0 at 0043d106
;   FUN_00455d50 at 00455dea
;   ... and 42 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004544d0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004544d3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004544d7
    FLD float ptr [ESP + 0xc]           ; 004544db
    PUSH EDX                            ; 004544df
    CALL crt_math.c_round_FUN_00563a30  ; 004544e0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    PUSH EAX                            ; 004544e5
    FISTP dword ptr [ESP + 0x8]         ; 004544e6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004544ea
    PUSH ECX                            ; 004544ee
    PUSH EAX                            ; 004544ef
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004544f0
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530()
    ADD ESP,0x4                         ; 004544f5
    PUSH EAX                            ; 004544f8
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004544f9
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040()
    ADD ESP,0x10                        ; 004544fe
    ADD ESP,0x4                         ; 00454501
    RET                                 ; 00454504

