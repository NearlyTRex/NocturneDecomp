; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_00449c20(float *param_1,float *param_2,float *param_3)
;
;
; XREF[6]:
;   core_dirmat.cpp_FUN_00449280 at 00449298
;   core_xform.cpp_FUN_00591ad0 at 00591aed
;   core_xform.cpp_FUN_00591c10 at 00591c2d
;   core_xform.cpp_FUN_00594380 at 005943a6
;   core_xform.cpp_FUN_005944a0 at 005944c6
;   engine_mini3d.cpp_FUN_004f2be0 at 004f2c45
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449c20
        ;   Label: core_dirmat.cpp_FUN_00449c20
    PUSH ESI                            ; 00449c21
    PUSH EDI                            ; 00449c22
    PUSH EBP                            ; 00449c23
    MOV EBP,ESP                         ; 00449c24
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00449c26
    FLD float ptr [EBX]                 ; 00449c2c
    FSINCOS                             ; 00449c2e
    MOV EBX,dword ptr [EBP + 0x18]      ; 00449c30
    FSTP float ptr [EBX]                ; 00449c36
    MOV EBX,dword ptr [EBP + 0x14]      ; 00449c38
    FSTP float ptr [EBX]                ; 00449c3e
    MOV ESP,EBP                         ; 00449c40
    POP EBP                             ; 00449c42
    POP EDI                             ; 00449c43
    POP ESI                             ; 00449c44
    POP EBX                             ; 00449c45
    RET                                 ; 00449c46

