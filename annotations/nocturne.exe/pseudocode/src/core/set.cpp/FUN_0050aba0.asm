; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_set_cpp_FUN_0050aba0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_set.cpp_FUN_00509a80 at 0050a0fb
;
; Referenced Globals:
;   double DOUBLE_005905d2 = 4
;   undefined4 DAT_01cae0e8
;   undefined4 DAT_01fb8618
;   undefined4 DAT_01fb9b54
;   undefined4 DAT_01fb9b58
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0
;   core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050aba0
        ;   Label: core_set.cpp_FUN_0050aba0
    PUSH ESI                            ; 0050aba1
    PUSH EDI                            ; 0050aba2
    PUSH EBP                            ; 0050aba3
    MOV EBP,ESP                         ; 0050aba4
    SUB ESP,0x1c                        ; 0050aba6
    AND ESP,0xfffffff8                  ; 0050aba9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050abac
    MOV EDX,dword ptr [EBX + 0x15aabc]  ; 0050abaf
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050abb5
    SUB EAX,EDX                         ; 0050abbc
    SHL EAX,0x2                         ; 0050abbe
    ADD EAX,EDX                         ; 0050abc1
    MOV EDX,dword ptr [0x01cae0e8]      ; 0050abc3 | DAT_01cae0e8
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0050abc9
    SHL EAX,0x5                         ; 0050abd0
    FLD float ptr [EDX + 0x20]          ; 0050abd3
    FSUB float ptr [EBX + EAX*0x1 + 0x104] ; 0050abd6
    FSTP float ptr [ESP]                ; 0050abdd
    MOV ESI,dword ptr [EBX + 0x15aabc]  ; 0050abe0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050abe6
    SUB EAX,ESI                         ; 0050abed
    SHL EAX,0x2                         ; 0050abef
    ADD EAX,ESI                         ; 0050abf2
    SHL EAX,0x5                         ; 0050abf4
    FLD float ptr [EDX + 0x24]          ; 0050abf7
    FSUB float ptr [EBX + EAX*0x1 + 0x108] ; 0050abfa
    FADD double ptr [0x005905d2]        ; 0050ac01 | DOUBLE_005905d2
    FSTP float ptr [ESP + 0x4]          ; 0050ac07
    MOV ESI,dword ptr [EBX + 0x15aabc]  ; 0050ac0b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0050ac11
    SUB EAX,ESI                         ; 0050ac18
    SHL EAX,0x2                         ; 0050ac1a
    ADD EAX,ESI                         ; 0050ac1d
    SHL EAX,0x5                         ; 0050ac1f
    FLD float ptr [EDX + 0x28]          ; 0050ac22
    FSUB float ptr [EBX + EAX*0x1 + 0x10c] ; 0050ac25
    FST float ptr [ESP + 0x8]           ; 0050ac2c
    FLD float ptr [ESP]                 ; 0050ac30
    CALL crt_math.c_atan2_FUN_00566c81  ; 0050ac33
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FLD float ptr [ESP + 0x8]           ; 0050ac38
    FMUL ST0                            ; 0050ac3c
    FLD float ptr [ESP]                 ; 0050ac3e
    FMUL ST0                            ; 0050ac41
    FADDP                               ; 0050ac43
    FSQRT                               ; 0050ac45
    FLD float ptr [ESP + 0x4]           ; 0050ac47
    CALL crt_math.c_atan2_FUN_00566c81  ; 0050ac4b
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    XOR EDX,EDX                         ; 0050ac50
    MOV dword ptr [ESP + 0x14],EDX      ; 0050ac52
    LEA EAX,[ESP + 0xc]                 ; 0050ac56
    FXCH                                ; 0050ac5a
    FSTP float ptr [ESP + 0x10]         ; 0050ac5c
    PUSH EAX                            ; 0050ac60
    FCHS                                ; 0050ac61
    PUSH 0x1fb8618                      ; 0050ac63 | DAT_01fb8618
    FSTP float ptr [ESP + 0x14]         ; 0050ac68
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0050ac6c
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    MOV EDX,dword ptr [EBX + 0x15aabc]  ; 0050ac71
    LEA EAX,[EDX*0x4 + 0x0]             ; 0050ac77
    SUB EAX,EDX                         ; 0050ac7e
    SHL EAX,0x2                         ; 0050ac80
    ADD EAX,EDX                         ; 0050ac83
    SHL EAX,0x5                         ; 0050ac85
    LEA EDX,[EBX + 0x4]                 ; 0050ac88
    ADD EAX,EDX                         ; 0050ac8b
    LEA ESI,[EAX + 0x10c]               ; 0050ac8d
    LEA EAX,[ESP + 0x14]                ; 0050ac93
    ADD ESP,0x8                         ; 0050ac97
    CMP ESI,EAX                         ; 0050ac9a
    JZ 0x0050acb2                       ; 0050ac9c
        ;   XREF to: 0050acb2 (CONDITIONAL_JUMP)  ; LAB_0050acb2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0050ac9e
    MOV dword ptr [ESI],EAX             ; 0050aca2
    MOV EAX,dword ptr [ESP + 0x10]      ; 0050aca4
    MOV dword ptr [ESI + 0x4],EAX       ; 0050aca8
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050acab
    MOV dword ptr [ESI + 0x8],EAX       ; 0050acaf
    PUSH 0x0                            ; 0050acb2
        ;   Label: LAB_0050acb2
    PUSH 0x1fb8508                      ; 0050acb4
    CALL core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 ; 0050acb9
        ;   XREF to: 00440290 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290()
    ADD ESP,0x8                         ; 0050acbe
    PUSH 0x10                           ; 0050acc1
    PUSH EBX                            ; 0050acc3
    CALL core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 ; 0050acc4
        ;   XREF to: 0050d2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0()
    ADD ESP,0x8                         ; 0050acc9
    PUSH EBX                            ; 0050accc
    CALL core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640 ; 0050accd
        ;   XREF to: 0050a640 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_renderOpaqueActors_FUN_0050a640()
    ADD ESP,0x4                         ; 0050acd2
    PUSH 0x0                            ; 0050acd5
    PUSH 0x1fb8508                      ; 0050acd7
    XOR EBX,EBX                         ; 0050acdc
    CALL core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 ; 0050acde
        ;   XREF to: 00440a20 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20()
    MOV ECX,dword ptr [0x01fb9b54]      ; 0050ace3 | DAT_01fb9b54
    ADD ESP,0x8                         ; 0050ace9
    TEST ECX,ECX                        ; 0050acec
    JLE 0x0050ad10                      ; 0050acee
        ;   XREF to: 0050ad10 (CONDITIONAL_JUMP)  ; LAB_0050ad10
    XOR ESI,ESI                         ; 0050acf0
    MOV EDI,dword ptr [ESI + 0x1fb9b58] ; 0050acf2 | DAT_01fb9b58
        ;   Label: LAB_0050acf2
    PUSH EDI                            ; 0050acf8
    ADD ESI,0x4                         ; 0050acf9
    INC EBX                             ; 0050acfc
    CALL core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970 ; 0050acfd
        ;   XREF to: 0044e970 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044e970()
    MOV EAX,[0x01fb9b54]                ; 0050ad02 | DAT_01fb9b54
    ADD ESP,0x4                         ; 0050ad07
    CMP EBX,EAX                         ; 0050ad0a
    JL 0x0050acf2                       ; 0050ad0c
        ;   XREF to: 0050acf2 (CONDITIONAL_JUMP)  ; LAB_0050acf2
    MOV EAX,EAX                         ; 0050ad0e
    MOV ESP,EBP                         ; 0050ad10
        ;   Label: LAB_0050ad10
    POP EBP                             ; 0050ad12
    POP EDI                             ; 0050ad13
    POP ESI                             ; 0050ad14
    POP EBX                             ; 0050ad15
    RET                                 ; 0050ad16

