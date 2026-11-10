; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044a020(CDemonLight *this_ptr,int skip_clear_buffers)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   skip_clear_buffers
;
; XREF[5]:
;   core_set.cpp_CDemonSet_initScene_FUN_0052d980 at 0052dae0
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0052ef80 at 0052f082
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e6e4
;   core_set.cpp_FUN_0052fad0 at 0052fc35
;   core_set.cpp_FUN_0052fea0 at 0052fffa
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf29f
;   TerminatedCString s_CDemonLight_beginScene_S_005cf2b2
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5714
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0
;   core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0
;   core_main.c_FUN_004e4500
;   crt_watcom.c__memset_FUN_00492670
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
;   engine_matrix.c_FUN_0046b4b0
;   engine_matrix.c_FUN_0046b710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a020
        ;   Label: core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020
    PUSH ESI                            ; 0044a021
    PUSH EDI                            ; 0044a022
    PUSH EBP                            ; 0044a023
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044a024
    CMP dword ptr [EBX + 0x11e4],0x0    ; 0044a028
    JNZ 0x0044a1b1                      ; 0044a02f
        ;   XREF to: 0044a1b1 (CONDITIONAL_JUMP)  ; LAB_0044a1b1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0044a035
        ;   Label: LAB_0044a035
    PUSH EDI                            ; 0044a039
    PUSH EBX                            ; 0044a03a
    MOV dword ptr [EBX + 0x11e4],0x1    ; 0044a03b
    CALL core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0 ; 0044a045
        ;   XREF to: 0043b7a0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setSceneCamera_FUN_0043b7a0(CDemonCamera * this_ptr, int skip_clear_buffers)
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044a04a
    ADD ESP,0x8                         ; 0044a050
    DEC EAX                             ; 0044a053
    PUSH EAX                            ; 0044a054
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044a055
    DEC EAX                             ; 0044a05b
    PUSH EAX                            ; 0044a05c
    PUSH 0x0                            ; 0044a05d
    PUSH 0x0                            ; 0044a05f
    MOV EBP,dword ptr [0x0060b280]      ; 0044a061 | DAT_0060b280
    PUSH EBP                            ; 0044a067 | DAT_01ba5c50
    CALL engine_matrix.c_FUN_0046b710   ; 0044a068
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b710()
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044a06d
    DEC EAX                             ; 0044a073
    MOV dword ptr [EBX + 0x11dc],EAX    ; 0044a074
    MOV EAX,dword ptr [EBX + 0x1cc4]    ; 0044a07a
    MOV dword ptr [EBX + 0x11d4],0x0    ; 0044a080
    DEC EAX                             ; 0044a08a
    ADD ESP,0x14                        ; 0044a08b
    MOV dword ptr [EBX + 0x11e0],EAX    ; 0044a08e
    LEA EAX,[EBX + 0x4]                 ; 0044a094
    MOV dword ptr [EBX + 0x11d8],0x0    ; 0044a097
    PUSH EAX                            ; 0044a0a1
    MOV EAX,[0x0060b280]                ; 0044a0a2 | DAT_0060b280
    MOV dword ptr [EBX + 0x1d0],0x0     ; 0044a0a7
    PUSH EAX                            ; 0044a0b1 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x168],EDI     ; 0044a0b2
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 0044a0b8
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0044a0bd
    MOV EDX,dword ptr [0x0060b280]      ; 0044a0c0 | DAT_0060b280
    PUSH dword ptr [EBX + 0x38]         ; 0044a0c6
    PUSH EDX                            ; 0044a0c9 | DAT_01ba5c50
    CALL engine_matrix.c_FUN_0046b4b0   ; 0044a0ca
        ;   XREF to: 0046b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046b4b0()
    ADD ESP,0x8                         ; 0044a0cf
    LEA EAX,[EBX + 0x10]                ; 0044a0d2
    PUSH EAX                            ; 0044a0d5
    MOV ECX,dword ptr [0x0060b280]      ; 0044a0d6 | DAT_0060b280
    PUSH ECX                            ; 0044a0dc | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060 ; 0044a0dd
        ;   XREF to: 0046b060 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 0044a0e2
    MOV EDX,dword ptr [0x01c38ba0]      ; 0044a0e5 | DAT_01c38ba0
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044a0eb
    IMUL EDX                            ; 0044a0f1
    SHRD EAX,EDX,0x10                   ; 0044a0f3
    MOV EDX,dword ptr [0x01c38bac]      ; 0044a0f7 | DAT_01c38bac
    MOV [0x01c38ba0],EAX                ; 0044a0fd | DAT_01c38ba0
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044a102
    IMUL EDX                            ; 0044a108
    SHRD EAX,EDX,0x10                   ; 0044a10a
    MOV EDX,dword ptr [0x01c38bb8]      ; 0044a10e | DAT_01c38bb8
    MOV [0x01c38bac],EAX                ; 0044a114 | DAT_01c38bac
    MOV EAX,dword ptr [EBX + 0x2fa4]    ; 0044a119
    IMUL EDX                            ; 0044a11f
    SHRD EAX,EDX,0x10                   ; 0044a121
    MOV [0x01c38bb8],EAX                ; 0044a125 | DAT_01c38bb8
    TEST EDI,EDI                        ; 0044a12a
    JZ 0x0044a1d9                       ; 0044a12c
        ;   XREF to: 0044a1d9 (CONDITIONAL_JUMP)  ; LAB_0044a1d9
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 0044a132
        ;   Label: LAB_0044a132
    XOR EAX,EAX                         ; 0044a138
    TEST EBP,EBP                        ; 0044a13a
    JLE 0x0044a180                      ; 0044a13c
        ;   XREF to: 0044a180 (CONDITIONAL_JUMP)  ; LAB_0044a180
    MOV EDX,EBX                         ; 0044a13e
    MOV ESI,dword ptr [EAX*0x4 + 0x1c2a38c] ; 0044a140 | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_0044a140
    MOV dword ptr [EDX + 0x1cd4],ESI    ; 0044a147
    MOV ESI,dword ptr [EBX + 0x1cc0]    ; 0044a14d
    IMUL ESI,EAX                        ; 0044a153
    MOV EDI,dword ptr [EBX + 0x2f94]    ; 0044a156
    ADD ESI,ESI                         ; 0044a15c
    ADD ESI,EDI                         ; 0044a15e
    MOV dword ptr [EAX*0x4 + 0x1c2a38c],ESI ; 0044a160 | DAT_01c2a38c | DAT_01c2a390
    INC EAX                             ; 0044a167
    MOV ECX,dword ptr [EBX + 0x1cc4]    ; 0044a168
    ADD EDX,0x4                         ; 0044a16e
    CMP EAX,ECX                         ; 0044a171
    JL 0x0044a140                       ; 0044a173
        ;   XREF to: 0044a140 (CONDITIONAL_JUMP)  ; LAB_0044a140
    LEA EAX,[EAX]                       ; 0044a175
    LEA EDX,[EDX]                       ; 0044a17b
    MOV EBX,EBX                         ; 0044a17e
    PUSH EBX                            ; 0044a180
        ;   Label: LAB_0044a180
    CALL core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0 ; 0044a181
        ;   XREF to: 0043c5d0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_updateTransformMatrices_FUN_0043c5d0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044a186
    PUSH 0x1                            ; 0044a189
    MOV EBX,dword ptr [0x0060b280]      ; 0044a18b | DAT_0060b280
    PUSH EBX                            ; 0044a191 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 0044a192
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 0044a197
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044a19a
    TEST ESI,ESI                        ; 0044a19e
    JZ 0x0044a1fe                       ; 0044a1a0
        ;   XREF to: 0044a1fe (CONDITIONAL_JUMP)  ; LAB_0044a1fe
    MOV dword ptr [0x01ba5714],0x8000   ; 0044a1a2 | DAT_01ba5714
    POP EBP                             ; 0044a1ac
    POP EDI                             ; 0044a1ad
    POP ESI                             ; 0044a1ae
    POP EBX                             ; 0044a1af
    RET                                 ; 0044a1b0
    MOV ECX,0x5cf29f                    ; 0044a1b1 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044a1b1
    MOV ESI,0xf4                        ; 0044a1b6
    PUSH 0x5cf2b2                       ; 0044a1bb | = "CDemonLight::beginScene - Scene alrea..."
    MOV dword ptr [0x01d046a0],ECX      ; 0044a1c0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0044a1c6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a1cc
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a1d1
    JMP 0x0044a035                      ; 0044a1d4
        ;   XREF to: 0044a035 (UNCONDITIONAL_JUMP)  ; LAB_0044a035
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 0044a1d9
        ;   Label: LAB_0044a1d9
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 0044a1df
    ADD EAX,EAX                         ; 0044a1e6
    PUSH EAX                            ; 0044a1e8
    MOV EDX,0xff                        ; 0044a1e9
    MOV ECX,dword ptr [EBX + 0x2f94]    ; 0044a1ee
    CALL crt_watcom.c__memset_FUN_00492670 ; 0044a1f4
        ;   XREF to: 00492670 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__memset_FUN_00492670()
    JMP 0x0044a132                      ; 0044a1f9
        ;   XREF to: 0044a132 (UNCONDITIONAL_JUMP)  ; LAB_0044a132
    MOV dword ptr [0x01ba5714],ESI      ; 0044a1fe | DAT_01ba5714
        ;   Label: LAB_0044a1fe
    POP EBP                             ; 0044a204
    POP EDI                             ; 0044a205
    POP ESI                             ; 0044a206
    POP EBX                             ; 0044a207
    RET                                 ; 0044a208

