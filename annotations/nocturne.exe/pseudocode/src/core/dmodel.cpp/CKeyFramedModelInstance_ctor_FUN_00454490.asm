; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490(int param_1)
;
;
; XREF[37]:
;   FUN_0040fed0 at 0040fee4
;   FUN_00411a10 at 00411a32
;   FUN_00414d80 at 00414d94
;   FUN_0043c810 at 0043c824
;   FUN_004a8a10 at 004a8a24
;   FUN_004b41f0 at 004b4204
;   FUN_004c3460 at 004c3474
;   FUN_004c9430 at 004c9446
;   FUN_004cbb00 at 004cbb14
;   FUN_004f5d90 at 004f5da9
;   ... and 27 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454490
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00454491
    MOV byte ptr [EBX + 0x78],0x0       ; 00454495
    PUSH EBX                            ; 00454499
    MOV dword ptr [EBX + 0x178],0x0     ; 0045449a
    CALL core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0 ; 004544a4
        ;   XREF to: 004544b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0()
    ADD ESP,0x4                         ; 004544a9
    MOV EAX,EBX                         ; 004544ac
    POP EBX                             ; 004544ae
    RET                                 ; 004544af

