; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_0045bef0(float *param_1,float *param_2,float *param_3)
;
;
; XREF[6]:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 at 0045b568
;   core_xform.cpp_FUN_00583800 at 0058381d
;   core_xform.cpp_FUN_00583940 at 0058395d
;   core_xform.cpp_FUN_005860b0 at 005860d6
;   core_xform.cpp_FUN_005861d0 at 005861f6
;   engine_mini3d.cpp_matrixPushAndTransform_FUN_004ed1e0 at 004ed245
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bef0
        ;   Label: core_dirmat.cpp_FUN_0045bef0
    PUSH ESI                            ; 0045bef1
    PUSH EDI                            ; 0045bef2
    PUSH EBP                            ; 0045bef3
    MOV EBP,ESP                         ; 0045bef4
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0045bef6
    FLD float ptr [EBX]                 ; 0045befc
    FSINCOS                             ; 0045befe
    MOV EBX,dword ptr [EBP + 0x18]      ; 0045bf00
    FSTP float ptr [EBX]                ; 0045bf06
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045bf08
    FSTP float ptr [EBX]                ; 0045bf0e
    MOV ESP,EBP                         ; 0045bf10
    POP EBP                             ; 0045bf12
    POP EDI                             ; 0045bf13
    POP ESI                             ; 0045bf14
    POP EBX                             ; 0045bf15
    RET                                 ; 0045bf16

