; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_attachActor_FUN_0054e1e0(void)
;
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x40]:1  local_40
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c072
;
; Referenced Globals:
;   TerminatedCString s_core_platfrm_cpp_0063f98a
;   TerminatedCString s_CPlatform_attachActor_to_0063f99e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e1e0
        ;   Label: core_platfrm.cpp_CPlatform_attachActor_FUN_0054e1e0
    PUSH ESI                            ; 0054e1e1
    PUSH EDI                            ; 0054e1e2
    PUSH EBP                            ; 0054e1e3
    SUB ESP,0x90                        ; 0054e1e4
    MOV ESI,dword ptr [ESP + 0xa4]      ; 0054e1ea
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0054e1f1
    TEST EBX,EBX                        ; 0054e1f8
    JZ 0x0054e21b                       ; 0054e1fa
        ;   XREF to: 0054e21b (CONDITIONAL_JUMP)  ; LAB_0054e21b
    MOV EDI,ESI                         ; 0054e1fc
    MOV EDX,dword ptr [ESI + 0x51c]     ; 0054e1fe
    XOR EAX,EAX                         ; 0054e204
    CMP EBX,EDX                         ; 0054e206
    JZ 0x0054e21b                       ; 0054e208
        ;   XREF to: 0054e21b (CONDITIONAL_JUMP)  ; LAB_0054e21b
    INC EAX                             ; 0054e20a
        ;   Label: LAB_0054e20a
    ADD EDI,0x34                        ; 0054e20b
    CMP EAX,0xa                         ; 0054e20e
    JGE 0x0054e226                      ; 0054e211
        ;   XREF to: 0054e226 (CONDITIONAL_JUMP)  ; LAB_0054e226
    CMP EBX,dword ptr [EDI + 0x51c]     ; 0054e213
    JNZ 0x0054e20a                      ; 0054e219
        ;   XREF to: 0054e20a (CONDITIONAL_JUMP)  ; LAB_0054e20a
    ADD ESP,0x90                        ; 0054e21b
        ;   Label: LAB_0054e21b
    POP EBP                             ; 0054e221
    POP EDI                             ; 0054e222
    POP ESI                             ; 0054e223
    POP EBX                             ; 0054e224
    RET                                 ; 0054e225
    MOV EDI,ESI                         ; 0054e226
        ;   Label: LAB_0054e226
    MOV EBP,dword ptr [ESI + 0x51c]     ; 0054e228
    XOR EAX,EAX                         ; 0054e22e
    TEST EBP,EBP                        ; 0054e230
    JZ 0x0054e246                       ; 0054e232
        ;   XREF to: 0054e246 (CONDITIONAL_JUMP)  ; LAB_0054e246
    INC EAX                             ; 0054e234
        ;   Label: LAB_0054e234
    ADD EDI,0x34                        ; 0054e235
    CMP EAX,0xa                         ; 0054e238
    JGE 0x0054e2a8                      ; 0054e23b
        ;   XREF to: 0054e2a8 (CONDITIONAL_JUMP)  ; LAB_0054e2a8
    CMP dword ptr [EDI + 0x51c],0x0     ; 0054e23d
    JNZ 0x0054e234                      ; 0054e244
        ;   XREF to: 0054e234 (CONDITIONAL_JUMP)  ; LAB_0054e234
    LEA EAX,[EBX + 0x30]                ; 0054e246
        ;   Label: LAB_0054e246
    PUSH EAX                            ; 0054e249
    LEA EAX,[EBX + 0x20]                ; 0054e24a
    PUSH EAX                            ; 0054e24d
    LEA EAX,[ESP + 0x8]                 ; 0054e24e
    PUSH EAX                            ; 0054e252
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0054e253
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054e258
    LEA EAX,[ESI + 0x30]                ; 0054e25b
    PUSH EAX                            ; 0054e25e
    ADD ESI,0x20                        ; 0054e25f
    PUSH ESI                            ; 0054e262
    LEA EAX,[ESP + 0x68]                ; 0054e263
    PUSH EAX                            ; 0054e267
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0054e268
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0054e26d
    LEA EAX,[ESP + 0x60]                ; 0054e270
    PUSH EAX                            ; 0054e274
    LEA EAX,[ESP + 0x4]                 ; 0054e275
    PUSH EAX                            ; 0054e279
    LEA ESI,[ESP + 0x38]                ; 0054e27a
    MOV dword ptr [EDI + 0x51c],EBX     ; 0054e27e
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0054e284
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 0054e289
    LEA ESI,[ESP + 0x38]                ; 0054e28e
    LEA EDI,[EDI + 0x520]               ; 0054e292
    ADD ESP,0x8                         ; 0054e298
    MOVSD.REP ES:EDI,ESI                ; 0054e29b
    ADD ESP,0x90                        ; 0054e29d
    POP EBP                             ; 0054e2a3
    POP EDI                             ; 0054e2a4
    POP ESI                             ; 0054e2a5
    POP EBX                             ; 0054e2a6
    RET                                 ; 0054e2a7
    MOV ECX,0x63f98a                    ; 0054e2a8 | = "..\\core\\platfrm.cpp"
        ;   Label: LAB_0054e2a8
    MOV EBX,0x3d0                       ; 0054e2ad
    PUSH 0x63f99e                       ; 0054e2b2 | = "CPlatform::attachActor - too many!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0054e2b7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054e2bd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054e2c3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054e2c8
    ADD ESP,0x90                        ; 0054e2cb
    POP EBP                             ; 0054e2d1
    POP EDI                             ; 0054e2d2
    POP ESI                             ; 0054e2d3
    POP EBX                             ; 0054e2d4
    RET                                 ; 0054e2d5

