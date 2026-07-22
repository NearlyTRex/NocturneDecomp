; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(int param_1)
;
;
; XREF[48]:
;   FUN_0040f0f0 at 0040f0fc
;   FUN_0040f5f0 at 0040f607
;   FUN_00414de0 at 00414df5
;   FUN_00415430 at 00415456
;   FUN_0041f6e0 at 0041f737
;   FUN_004a8a60 at 004a8a77
;   FUN_004b0bd0 at 004b0bda
;   FUN_004b4250 at 004b425a
;   FUN_004c34c0 at 004c34ca
;   FUN_004c4340 at 004c4357
;   ... and 38 more
;
; Called Functions:
;   core_dmodel.cpp_loadModel_FUN_004543b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00454510
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
    ADD EAX,0x78                        ; 00454514
    PUSH EAX                            ; 00454517
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 00454518
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_004543b0()
    ADD ESP,0x4                         ; 0045451d
    MOV EDX,dword ptr [ESP + 0x4]       ; 00454520
    MOV dword ptr [EDX + 0x178],EAX     ; 00454524
    RET                                 ; 0045452a

