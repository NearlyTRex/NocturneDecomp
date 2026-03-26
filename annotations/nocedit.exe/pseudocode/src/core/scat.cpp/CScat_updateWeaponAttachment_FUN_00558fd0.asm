; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_CScat_updateWeaponAttachment_FUN_00558fd0(CScat *this_ptr)
;
; Parameters:
; CScat *          Stack[0x4]:4   this_ptr
; Local Variables:
; CMatrix3x4f      Stack[-0x160]:48  local_160
; CMatrix3x4f      Stack[-0x130]:48  local_130
; CMatrix3x4f      Stack[-0x100]:48  local_100
; CMatrix3x4f      Stack[-0xd0]:48  local_d0
; CMatrix3x4f      Stack[-0xa0]:48  local_a0
; CMatrix3x4f      Stack[-0x70]:48  local_70
; CVector3f        Stack[-0x40]:12  local_40
; CVector3f        Stack[-0x34]:12  local_34
; CVector3f        Stack[-0x28]:12  local_28
; CVector3f        Stack[-0x1c]:12  local_1c
;
; XREF[1]:
;   core_scat.cpp_CScat_process_FUN_005571f0 at 005575ab
;
; Referenced Globals:
;   undefined4 g_ScatIndices[14]
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
        ;   Label: core_scat.cpp_CScat_updateWeaponAttachment_FUN_00558fd0
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
    MOV ESI,dword ptr [0x03106194]      ; 0055903c | g_ScatIndices[14]
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
    JMP 0x03fc4fd1                      ; 00559078
        ;   XREF to: 03fc4fd1 (UNCONDITIONAL_JUMP)  ; LAB_03fc4fd1
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0055908a
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
        ;   Label: LAB_0055908a
    ADD ESP,0xc                         ; 0055908f
    LEA EAX,[EBP + 0xffffff2e]          ; 00559092
    PUSH EAX                            ; 00559098
    LEA EAX,[EBP + 0x1e]                ; 00559099
    PUSH EAX                            ; 0055909c
    LEA ESI,[EBP + -0x72]               ; 0055909d
    LEA EDI,[EBP + -0x12]               ; 005590a0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005590a3
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    JMP 0x03fc5034                      ; 005590a8
        ;   XREF to: 03fc5034 (UNCONDITIONAL_JUMP)  ; LAB_03fc5034
    LEA EAX,[EBP + -0x12]               ; 005590b9
        ;   Label: LAB_005590b9
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
    MOV ECX,0xc                         ; 03fc4fd1
        ;   Label: LAB_03fc4fd1
    PUSH EAX                            ; 03fc4fd6
    LEA EAX,[EBP + 0xffffff2e]          ; 03fc4fd7
    LEA ESI,[EBP + -0x42]               ; 03fc4fdd
    PUSH EAX                            ; 03fc4fe0
    MOV ECX,dword ptr [ESI]             ; 03fc4fe1
    MOV dword ptr [EDI],ECX             ; 03fc4fe3
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc4fe5
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc4fe8
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc4feb
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc4fee
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc4ff1
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc4ff4
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc4ff7
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc4ffa
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc4ffd
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc5000
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5003
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5006
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc5009
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc500c
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc500f
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5012
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5015
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc5018
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc501b
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc501e
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc5021
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5024
    ADD ESI,0x30                        ; 03fc5027
    ADD EDI,0x30                        ; 03fc502a
    XOR ECX,ECX                         ; 03fc502d
    JMP 0x0055908a                      ; 03fc502f
        ;   XREF to: 0055908a (UNCONDITIONAL_JUMP)  ; LAB_0055908a
    MOV ECX,0xc                         ; 03fc5034
        ;   Label: LAB_03fc5034
    ADD ESP,0x8                         ; 03fc5039
    LEA EAX,[EBP + 0x5a]                ; 03fc503c
    LEA ESI,[EBP + -0x72]               ; 03fc503f
    PUSH EAX                            ; 03fc5042
    MOV ECX,dword ptr [ESI]             ; 03fc5043
    MOV dword ptr [EDI],ECX             ; 03fc5045
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc5047
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc504a
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc504d
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc5050
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc5053
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc5056
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc5059
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc505c
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc505f
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc5062
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc5065
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc5068
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc506b
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc506e
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc5071
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc5074
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc5077
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc507a
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc507d
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc5080
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc5083
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc5086
    ADD ESI,0x30                        ; 03fc5089
    ADD EDI,0x30                        ; 03fc508c
    XOR ECX,ECX                         ; 03fc508f
    JMP 0x005590b9                      ; 03fc5091
        ;   XREF to: 005590b9 (UNCONDITIONAL_JUMP)  ; LAB_005590b9

