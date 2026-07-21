; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_init_FUN_004544b0(undefined4 *param_1)
;
;
; XREF[2]:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 at 004544a4
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 at 004545b2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004544b0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_init_FUN_004544b0
    MOV EAX,EDX                         ; 004544b4
    ADD EDX,0x78                        ; 004544b6
    MOV dword ptr [EAX],0x1             ; 004544b9
        ;   Label: LAB_004544b9
    ADD EAX,0x4                         ; 004544bf
    CMP EAX,EDX                         ; 004544c2
    JNZ 0x004544b9                      ; 004544c4
        ;   XREF to: 004544b9 (CONDITIONAL_JUMP)  ; LAB_004544b9
    RET                                 ; 004544c6

