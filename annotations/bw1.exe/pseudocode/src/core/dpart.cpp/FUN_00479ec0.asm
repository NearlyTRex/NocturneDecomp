; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00479ec0(void)
;
;
; XREF[1]:
;   core_dpart.cpp_FUN_00479c70 at 00479e40
;
; Referenced Globals:
;   undefined4 DAT_005dac05
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479ec0
        ;   Label: core_dpart.cpp_FUN_00479ec0
    CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0 ; 00479ec1
        ;   XREF to: 00479ba0 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0(CDemonPart * this_ptr)
    FLD double ptr [0x005dac05]         ; 00479ec6 | DAT_005dac05
    FILD dword ptr [EBX + 0x354]        ; 00479ecc
    FMUL ST1                            ; 00479ed2
    FILD dword ptr [EBX + 0x358]        ; 00479ed4
    FMUL ST2                            ; 00479eda
    FILD dword ptr [EBX + 0x35c]        ; 00479edc
    FMUL ST3                            ; 00479ee2
    FILD dword ptr [EBX + 0x360]        ; 00479ee4
    FMUL ST4                            ; 00479eea
    FILD dword ptr [EBX + 0x364]        ; 00479eec
    FMUL ST5                            ; 00479ef2
    FILD dword ptr [EBX + 0x368]        ; 00479ef4
    FMULP ST6                           ; 00479efa
    ADD ESP,0x4                         ; 00479efc
    FXCH ST4                            ; 00479eff
    FSTP float ptr [EBX + 0x36c]        ; 00479f01
    FXCH ST2                            ; 00479f07
    FSTP float ptr [EBX + 0x370]        ; 00479f09
    FSTP float ptr [EBX + 0x374]        ; 00479f0f
    FSTP float ptr [EBX + 0x378]        ; 00479f15
    FSTP float ptr [EBX + 0x37c]        ; 00479f1b
    FSTP float ptr [EBX + 0x380]        ; 00479f21
    ADD ESP,0xc                         ; 00479f27
    POP EBP                             ; 00479f2a
    POP EDI                             ; 00479f2b
    POP ESI                             ; 00479f2c
    POP EBX                             ; 00479f2d
    RET                                 ; 00479f2e

