; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_004619b0(void)
;
;
; XREF[1]:
;   core_dpart.cpp_FUN_00461760 at 00461930
;
; Referenced Globals:
;   undefined4 DAT_005d0e0c
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004619b0
        ;   Label: core_dpart.cpp_FUN_004619b0
    CALL core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690 ; 004619b1
        ;   XREF to: 00461690 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690(CDemonPart * this_ptr)
    FLD double ptr [0x005d0e0c]         ; 004619b6 | DAT_005d0e0c
    FILD dword ptr [EBX + 0x354]        ; 004619bc
    FMUL ST1                            ; 004619c2
    FILD dword ptr [EBX + 0x358]        ; 004619c4
    FMUL ST2                            ; 004619ca
    FILD dword ptr [EBX + 0x35c]        ; 004619cc
    FMUL ST3                            ; 004619d2
    FILD dword ptr [EBX + 0x360]        ; 004619d4
    FMUL ST4                            ; 004619da
    FILD dword ptr [EBX + 0x364]        ; 004619dc
    FMUL ST5                            ; 004619e2
    FILD dword ptr [EBX + 0x368]        ; 004619e4
    FMULP ST6                           ; 004619ea
    ADD ESP,0x4                         ; 004619ec
    FXCH ST4                            ; 004619ef
    FSTP float ptr [EBX + 0x36c]        ; 004619f1
    FXCH ST2                            ; 004619f7
    FSTP float ptr [EBX + 0x370]        ; 004619f9
    FSTP float ptr [EBX + 0x374]        ; 004619ff
    FSTP float ptr [EBX + 0x378]        ; 00461a05
    FSTP float ptr [EBX + 0x37c]        ; 00461a0b
    FSTP float ptr [EBX + 0x380]        ; 00461a11
    ADD ESP,0xc                         ; 00461a17
    POP EBP                             ; 00461a1a
    POP EDI                             ; 00461a1b
    POP ESI                             ; 00461a1c
    POP EBX                             ; 00461a1d
    RET                                 ; 00461a1e

