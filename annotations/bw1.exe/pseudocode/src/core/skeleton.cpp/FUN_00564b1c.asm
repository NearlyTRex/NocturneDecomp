; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * core_skeleton_cpp_FUN_00564b1c(CDeformableModel *param_1,undefined4 param_2,int param_3,byte param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_00605888
;   undefined4 DAT_00612560
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40
;   core_xform.cpp_FUN_005b6270
;   core_xform.cpp_matrixToEulerAngles_FUN_005b5930
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   shape_edittool.cpp_FUN_00498360
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00564b1c
        ;   Label: core_skeleton.cpp_FUN_00564b1c
    PUSH EBX                            ; 00564b20
    PUSH ESI                            ; 00564b21
    PUSH EDI                            ; 00564b22
    PUSH EBP                            ; 00564b23
    SUB ESP,0x64                        ; 00564b24
    MOV EDX,dword ptr [ESP + 0x78]      ; 00564b27
    PUSH EDX                            ; 00564b2b
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40 ; 00564b2c
        ;   XREF to: 00563c40 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00563c40(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00564b31
    MOV DL,byte ptr [ESP + 0x84]        ; 00564b34
    MOV dword ptr [ESP + 0x60],EAX      ; 00564b3b
    TEST DL,0x1                         ; 00564b3f
    JZ 0x00564c74                       ; 00564b42
        ;   XREF to: 00564c74 (CONDITIONAL_JUMP)  ; LAB_00564c74
    MOV ECX,dword ptr [EAX + 0x1de78]   ; 00564b48
    XOR EBP,EBP                         ; 00564b4e
    TEST ECX,ECX                        ; 00564b50
    JLE 0x00564bf0                      ; 00564b52
        ;   XREF to: 00564bf0 (CONDITIONAL_JUMP)  ; LAB_00564bf0
    MOV EAX,dword ptr [ESP + 0x80]      ; 00564b58
    MOV dword ptr [ESP + 0x58],EAX      ; 00564b5f
    IMUL EAX,EBP,0x30                   ; 00564b63
        ;   Label: LAB_00564b63
    MOV EBX,dword ptr [ESP + 0x58]      ; 00564b66
    LEA ESI,[ESP + 0x3c]                ; 00564b6a
    PUSH EBX                            ; 00564b6e
    LEA EDI,[ESP + 0x28]                ; 00564b6f
    MOV dword ptr [ESP + 0x58],EAX      ; 00564b73
    CALL core_xform.cpp_FUN_005b6270    ; 00564b77
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    LEA ESI,[ESP + 0x40]                ; 00564b7c
    ADD ESP,0x4                         ; 00564b80
    LEA EBX,[ESP + 0x48]                ; 00564b83
    MOVSD ES:EDI,ESI                    ; 00564b87
    MOVSD ES:EDI,ESI                    ; 00564b88
    MOVSD ES:EDI,ESI                    ; 00564b89
    LEA EAX,[ESP + 0x24]                ; 00564b8a
    MOV ESI,dword ptr [0x00612560]      ; 00564b8e | DAT_00612560
    FLD float ptr [EAX]                 ; 00564b94
    FMUL float ptr [0x00605888]         ; 00564b96 | DAT_00605888
    FISTP dword ptr [EBX]               ; 00564b9c
    FLD float ptr [EAX + 0x4]           ; 00564b9e
    FMUL float ptr [0x00605888]         ; 00564ba1 | DAT_00605888
    FISTP dword ptr [EBX + 0x4]         ; 00564ba7
    FLD float ptr [EAX + 0x8]           ; 00564baa
    FMUL float ptr [0x00605888]         ; 00564bad | DAT_00605888
    FISTP dword ptr [EBX + 0x8]         ; 00564bb3
    LEA EAX,[ESP + 0x48]                ; 00564bb6
    PUSH EAX                            ; 00564bba
    MOV EAX,dword ptr [ESI]             ; 00564bbb
    ADD EAX,dword ptr [ESP + 0x58]      ; 00564bbd
    PUSH EAX                            ; 00564bc1
    CALL engine_special.cpp_FUN_00580173 ; 00564bc2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00564bc7
    MOV EDI,dword ptr [ESP + 0x58]      ; 00564bca
    MOV EAX,dword ptr [ESP + 0x60]      ; 00564bce
    INC EBP                             ; 00564bd2
    ADD EDI,0x30                        ; 00564bd3
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 00564bd6
    MOV dword ptr [ESP + 0x58],EDI      ; 00564bdc
    CMP EBP,EDX                         ; 00564be0
    JL 0x00564b63                       ; 00564be2
        ;   XREF to: 00564b63 (CONDITIONAL_JUMP)  ; LAB_00564b63
    LEA EAX,[EAX]                       ; 00564be8
    MOV EDX,EDX                         ; 00564bee
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00564bf0
        ;   Label: LAB_00564bf0
    MOV [0x01c4f020],EAX                ; 00564bf4 | DAT_01c4f020
    MOV EAX,dword ptr [ESP + 0x60]      ; 00564bf9
    XOR ECX,ECX                         ; 00564bfd
    MOV EBX,dword ptr [EAX + 0x1de78]   ; 00564bff
    MOV dword ptr [ESP + 0x5c],ECX      ; 00564c05
    TEST EBX,EBX                        ; 00564c09
    JLE 0x00564c74                      ; 00564c0b
        ;   XREF to: 00564c74 (CONDITIONAL_JUMP)  ; LAB_00564c74
    MOV EBP,EAX                         ; 00564c0d
    XOR EBX,EBX                         ; 00564c0f
    MOV ESI,dword ptr [EBP + 0x1de9c]   ; 00564c11
        ;   Label: LAB_00564c11
    TEST ESI,ESI                        ; 00564c17
    JL 0x00564c55                       ; 00564c19
        ;   XREF to: 00564c55 (CONDITIONAL_JUMP)  ; LAB_00564c55
    LEA EAX,[ESI*0x4 + 0x0]             ; 00564c1b
    MOV ECX,0xc                         ; 00564c22
    SUB EAX,ESI                         ; 00564c27
    SUB ESP,0x30                        ; 00564c29
    MOV ESI,EAX                         ; 00564c2c
    MOV EAX,[0x00612560]                ; 00564c2e | DAT_00612560
    SHL ESI,0x4                         ; 00564c33
    MOV EAX,dword ptr [EAX]             ; 00564c36
    MOV EDI,ESP                         ; 00564c38
    ADD ESI,EAX                         ; 00564c3a
    MOVSD.REP ES:EDI,ESI                ; 00564c3c
    SUB ESP,0x30                        ; 00564c3e
    MOV ECX,0xc                         ; 00564c41
    MOV EDI,ESP                         ; 00564c46
    LEA ESI,[EAX + EBX*0x1]             ; 00564c48
    MOVSD.REP ES:EDI,ESI                ; 00564c4b
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407af0 ; 00564c4d
        ;   XREF to: 00407af0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407af0()
    ADD ESP,0x60                        ; 00564c52
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00564c55
        ;   Label: LAB_00564c55
    INC ESI                             ; 00564c59
    MOV dword ptr [ESP + 0x5c],ESI      ; 00564c5a
    MOV EAX,ESI                         ; 00564c5e
    MOV ESI,dword ptr [ESP + 0x60]      ; 00564c60
    ADD EBP,0x24                        ; 00564c64
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 00564c67
    ADD EBX,0x30                        ; 00564c6d
    CMP EAX,EDI                         ; 00564c70
    JL 0x00564c11                       ; 00564c72
        ;   XREF to: 00564c11 (CONDITIONAL_JUMP)  ; LAB_00564c11
    TEST byte ptr [ESP + 0x84],0x2      ; 00564c74
        ;   Label: LAB_00564c74
    JZ 0x00564d30                       ; 00564c7c
        ;   XREF to: 00564d30 (CONDITIONAL_JUMP)  ; LAB_00564d30
    MOV EAX,dword ptr [ESP + 0x60]      ; 00564c82
    MOV EBP,dword ptr [EAX + 0x1de78]   ; 00564c86
    XOR EBX,EBX                         ; 00564c8c
    TEST EBP,EBP                        ; 00564c8e
    JLE 0x00564d30                      ; 00564c90
        ;   XREF to: 00564d30 (CONDITIONAL_JUMP)  ; LAB_00564d30
    MOV EBP,dword ptr [ESP + 0x80]      ; 00564c96
    PUSH EBP                            ; 00564c9d
        ;   Label: LAB_00564c9d
    LEA ESI,[ESP + 0x4]                 ; 00564c9e
    LEA EDI,[ESP + 0x34]                ; 00564ca2
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005b5930 ; 00564ca6
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_005b5930()
    LEA ESI,[ESP + 0x4]                 ; 00564cab
    ADD ESP,0x4                         ; 00564caf
    MOVSD ES:EDI,ESI                    ; 00564cb2
    MOVSD ES:EDI,ESI                    ; 00564cb3
    MOVSD ES:EDI,ESI                    ; 00564cb4
    PUSH EBP                            ; 00564cb5
    LEA ESI,[ESP + 0x10]                ; 00564cb6
    CALL core_xform.cpp_FUN_005b6270    ; 00564cba
        ;   XREF to: 005b6270 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b6270()
    ADD ESP,0x4                         ; 00564cbf
    LEA EAX,[ESP + 0x18]                ; 00564cc2
    PUSH EAX                            ; 00564cc6
    LEA EAX,[ESP + 0x34]                ; 00564cc7
    LEA EDI,[ESP + 0x1c]                ; 00564ccb
    PUSH EAX                            ; 00564ccf
    MOV EAX,[0x00612560]                ; 00564cd0 | DAT_00612560
    LEA ESI,[ESP + 0x14]                ; 00564cd5
    PUSH EAX                            ; 00564cd9
    MOVSD ES:EDI,ESI                    ; 00564cda
    MOVSD ES:EDI,ESI                    ; 00564cdb
    MOVSD ES:EDI,ESI                    ; 00564cdc
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00564cdd
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 00564ce2
    PUSH 0xff                           ; 00564ce5
    MOV EDX,dword ptr [0x0061abc0]      ; 00564cea | g_CEditorToolsPtr
    PUSH 0x3f000000                     ; 00564cf0
    PUSH EDX                            ; 00564cf5
    CALL shape_edittool.cpp_FUN_00498360 ; 00564cf6
        ;   XREF to: 00498360 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00498360(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 00564cfb
    MOV ECX,dword ptr [0x00612560]      ; 00564cfe | DAT_00612560
    PUSH ECX                            ; 00564d04
    CALL engine_matrix.c_pop_FUN_004839a0 ; 00564d05
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00564d0a
    MOV EAX,dword ptr [ESP + 0x60]      ; 00564d0d
    INC EBX                             ; 00564d11
    MOV ESI,dword ptr [EAX + 0x1de78]   ; 00564d12
    ADD EBP,0x30                        ; 00564d18
    CMP EBX,ESI                         ; 00564d1b
    JL 0x00564c9d                       ; 00564d1d
        ;   XREF to: 00564c9d (CONDITIONAL_JUMP)  ; LAB_00564c9d
    LEA EAX,[EAX]                       ; 00564d23
    LEA EDX,[EDX]                       ; 00564d29
    NOP                                 ; 00564d2f
    ADD ESP,0x64                        ; 00564d30
        ;   Label: LAB_00564d30
    POP EBP                             ; 00564d33
    POP EDI                             ; 00564d34
    POP ESI                             ; 00564d35
    POP EBX                             ; 00564d36
    RET                                 ; 00564d37

