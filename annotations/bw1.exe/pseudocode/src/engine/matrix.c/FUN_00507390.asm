; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_matrix_c_FUN_00507390(uint param_1)
;
;
; XREF[4]:
;   core_inv.cpp_FUN_004f90d0 at 004f91c2
;   core_level.cpp_FUN_004fe9c0 at 004feafa
;   engine_matrix.c_buildRotationMatrix_FUN_005076b0 at 005076cb
;   engine_matrix.c_matrixPushAndTransform_FUN_00507c70 at 00507dd9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507390
        ;   Label: engine_matrix.c_FUN_00507390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00507391
    MOV EAX,EBX                         ; 00507395
    SAR EAX,0x8                         ; 00507397
    AND EAX,0xff                        ; 0050739a
    MOV ECX,dword ptr [EAX*0x4 + 0x1d1d914] ; 0050739f
    MOV EDX,dword ptr [EAX*0x4 + 0x1d1d918] ; 005073a6
    AND EBX,0xff                        ; 005073ad
    SUB EDX,ECX                         ; 005073b3
    IMUL EDX,EBX                        ; 005073b5
    MOV EAX,EDX                         ; 005073b8
    SAR EDX,0x1f                        ; 005073ba
    SHL EDX,0x8                         ; 005073bd
    SBB EAX,EDX                         ; 005073c0
    SAR EAX,0x8                         ; 005073c2
    ADD EAX,ECX                         ; 005073c5
    POP EBX                             ; 005073c7
    RET                                 ; 005073c8

