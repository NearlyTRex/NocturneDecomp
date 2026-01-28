; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_scat_cpp_FUN_00558fd0(void)
;
; Local Variables:
; undefined1       Stack[-0x160]:1  local_160
; undefined1       Stack[-0x130]:1  local_130
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_scat.cpp_FUN_005571f0 at 005575ab
;
; Referenced Globals:
;   int INT_03106194
;
; Called Functions:
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_getTranslation_FUN_005f6110
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558fd0
        ;   Label: core_scat.cpp_FUN_00558fd0
    PUSH ESI                            ; 00558fd1
    PUSH EDI                            ; 00558fd2
    PUSH EBP                            ; 00558fd3
    MOV EBP,ESP                         ; 00558fd4
    SUB ESP,0x150                       ; 00558fd6
    SUB EBP,0x7e                        ; 00558fdc
    MOV EBX,dword ptr [EBP + 0x92]      ; 00558fdf
    MOV EDX,dword ptr [EBX + 0x1fbe8]   ; 00558fe5
    TEST EDX,EDX                        ; 00558feb
    JZ 0x00558ff8                       ; 00558fed
        ;   XREF to: 00558ff8 (CONDITIONAL_JUMP)  ; LAB_00558ff8
    CMP dword ptr [EDX + 0x2e0],0x8     ; 00558fef
    JNZ 0x00559000                      ; 00558ff6
        ;   XREF to: 00559000 (CONDITIONAL_JUMP)  ; LAB_00559000
    LEA ESP,[EBP + 0x7e]                ; 00558ff8
        ;   Label: LAB_00558ff8
    POP EBP                             ; 00558ffb
    POP EDI                             ; 00558ffc
    POP ESI                             ; 00558ffd
    POP EBX                             ; 00558ffe
    RET                                 ; 00558fff
    MOV EDI,0x3fc90fdb                  ; 00559000
        ;   Label: LAB_00559000
    LEA EAX,[EBP + 0x4e]                ; 00559005
    MOV EDX,0x3ec817db                  ; 00559008
    XOR ESI,ESI                         ; 0055900d
    MOV ECX,0xbdd340d5                  ; 0055900f
    MOV dword ptr [EBP + 0x4e],ESI      ; 00559014
    MOV dword ptr [EBP + 0x56],EDI      ; 00559017
    MOV dword ptr [EBP + 0x52],EDI      ; 0055901a
    PUSH EAX                            ; 0055901d
    LEA EAX,[EBP + 0x66]                ; 0055901e
    MOV dword ptr [EBP + 0x66],EDX      ; 00559021
    PUSH EAX                            ; 00559024
    LEA EAX,[EBP + 0xffffff5e]          ; 00559025
    MOV ESI,0x3ddfa765                  ; 0055902b
    PUSH EAX                            ; 00559030
    MOV dword ptr [EBP + 0x6a],ECX      ; 00559031
    MOV dword ptr [EBP + 0x6e],ESI      ; 00559034
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 00559037
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV ESI,dword ptr [0x03106194]      ; 0055903c | INT_03106194
    LEA EAX,[ESI*0x4 + 0x0]             ; 00559042
    SUB EAX,ESI                         ; 00559049
    MOV ESI,EAX                         ; 0055904b
    SHL ESI,0x4                         ; 0055904d
    LEA EAX,[EBX + 0xfd8]               ; 00559050
    ADD ESP,0xc                         ; 00559056
    ADD EAX,ESI                         ; 00559059
    PUSH EAX                            ; 0055905b
    LEA EAX,[EBP + 0xffffff5e]          ; 0055905c
    PUSH EAX                            ; 00559062
    LEA ESI,[EBP + -0x42]               ; 00559063
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 00559066
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0055906b
    LEA EAX,[EBX + 0x30]                ; 0055906e
    LEA EDI,[EBP + 0x1e]                ; 00559071
    PUSH EAX                            ; 00559074
    LEA EAX,[EBX + 0x20]                ; 00559075
    MOV ECX,0xc                         ; 00559078
    PUSH EAX                            ; 0055907d
    LEA EAX,[EBP + 0xffffff2e]          ; 0055907e
    LEA ESI,[EBP + -0x42]               ; 00559084
    PUSH EAX                            ; 00559087
    MOVSD.REP ES:EDI,ESI                ; 00559088
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0055908a
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0055908f
    LEA EAX,[EBP + 0xffffff2e]          ; 00559092
    PUSH EAX                            ; 00559098
    LEA EAX,[EBP + 0x1e]                ; 00559099
    PUSH EAX                            ; 0055909c
    LEA ESI,[EBP + -0x72]               ; 0055909d
    LEA EDI,[EBP + -0x12]               ; 005590a0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005590a3
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005590a8
    ADD ESP,0x8                         ; 005590ad
    LEA EAX,[EBP + 0x5a]                ; 005590b0
    LEA ESI,[EBP + -0x72]               ; 005590b3
    PUSH EAX                            ; 005590b6
    MOVSD.REP ES:EDI,ESI                ; 005590b7
    LEA EAX,[EBP + -0x12]               ; 005590b9
    MOV EBX,dword ptr [EBX + 0x1fbe8]   ; 005590bc
    PUSH EAX                            ; 005590c2
    MOV ESI,dword ptr [EBX + 0x154]     ; 005590c3
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 005590c9
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 005590ce
    PUSH EAX                            ; 005590d1
    LEA EAX,[EBP + 0x72]                ; 005590d2
    PUSH EAX                            ; 005590d5
    LEA EAX,[EBP + -0x12]               ; 005590d6
    PUSH EAX                            ; 005590d9
    CALL core_xform.cpp_getTranslation_FUN_005f6110 ; 005590da
        ;   XREF to: 005f6110 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_getTranslation_FUN_005f6110(CMatrix3x4f * matrix_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005590df
    PUSH EAX                            ; 005590e2
    PUSH EBX                            ; 005590e3
    CALL dword ptr [ESI + 0x60]         ; 005590e4
    ADD ESP,0xc                         ; 005590e7
    LEA ESP,[EBP + 0x7e]                ; 005590ea
    POP EBP                             ; 005590ed
    POP EDI                             ; 005590ee
    POP ESI                             ; 005590ef
    POP EBX                             ; 005590f0
    RET                                 ; 005590f1

