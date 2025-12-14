; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 at 00476ed1
;   core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0 at 0047b4a6
;   core_dmodel.cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30 at 0047ad7b
;   core_dmodel.cpp_CKeyFramedModel_weldAndRemoveUnusedVertices_FUN_0047ada0 at 0047b033
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f73a
;   TerminatedCString s_CKeyFramedModel_calcNorm_0061f74d
;   double g_NormalizeScale = 65535
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_round_FUN_005fe6b0
;   crt_memory.c_memset_FUN_005fde40
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477e60
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
    PUSH ESI                            ; 00477e61
    PUSH EDI                            ; 00477e62
    PUSH EBP                            ; 00477e63
    MOV EBP,ESP                         ; 00477e64
    SUB ESP,0x30                        ; 00477e66
    AND ESP,0xfffffff8                  ; 00477e69
    MOV EDI,dword ptr [EBP + 0x14]      ; 00477e6c
    CMP dword ptr [EDI + 0x100],0x1     ; 00477e6f
    JNZ 0x00477f98                      ; 00477e76
        ;   XREF to: 00477f98 (CONDITIONAL_JUMP)  ; LAB_00477f98
    CMP dword ptr [EDI + 0x108],0x0     ; 00477e7c
    JZ 0x00477f9f                       ; 00477e83
        ;   XREF to: 00477f9f (CONDITIONAL_JUMP)  ; LAB_00477f9f
    MOV EDX,dword ptr [EDI + 0x104]     ; 00477e89
        ;   Label: LAB_00477e89
    LEA EAX,[EDX*0x4 + 0x0]             ; 00477e8f
    SUB EAX,EDX                         ; 00477e96
    SHL EAX,0x2                         ; 00477e98
    PUSH EAX                            ; 00477e9b
    PUSH 0x0                            ; 00477e9c
    MOV EAX,dword ptr [EDI + 0x108]     ; 00477e9e
    PUSH EAX                            ; 00477ea4
    CALL crt_memory.c_memset_FUN_005fde40 ; 00477ea5
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00477eaa
    XOR EDX,EDX                         ; 00477ead
    MOV ECX,dword ptr [EDI + 0x110]     ; 00477eaf
    MOV dword ptr [ESP + 0x2c],EDX      ; 00477eb5
    TEST ECX,ECX                        ; 00477eb9
    JLE 0x00477f2e                      ; 00477ebb
        ;   XREF to: 00477f2e (CONDITIONAL_JUMP)  ; LAB_00477f2e
    MOV dword ptr [ESP + 0x28],EDX      ; 00477ebd
    MOV ESI,dword ptr [ESP + 0x28]      ; 00477ec1
        ;   Label: LAB_00477ec1
    MOV EBX,dword ptr [EDI + 0x114]     ; 00477ec5
    ADD EBX,ESI                         ; 00477ecb
    PUSH EBX                            ; 00477ecd
    MOV EAX,dword ptr [EDI + 0x10c]     ; 00477ece
    PUSH EAX                            ; 00477ed4
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 00477ed5
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output)
    ADD ESP,0x8                         ; 00477eda
    MOV ECX,dword ptr [EBX + 0x4]       ; 00477edd
    XOR EDX,EDX                         ; 00477ee0
    TEST ECX,ECX                        ; 00477ee2
    JLE 0x00477f10                      ; 00477ee4
        ;   XREF to: 00477f10 (CONDITIONAL_JUMP)  ; LAB_00477f10
    MOV ECX,EBX                         ; 00477ee6
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 00477ee8
        ;   Label: LAB_00477ee8
    MOV EAX,dword ptr [EDI + 0x108]     ; 00477eec
    ADD EAX,ESI                         ; 00477ef2
    MOV ESI,dword ptr [EBX + 0x8]       ; 00477ef4
    ADD dword ptr [EAX],ESI             ; 00477ef7
    MOV ESI,dword ptr [EBX + 0xc]       ; 00477ef9
    ADD dword ptr [EAX + 0x4],ESI       ; 00477efc
    MOV ESI,dword ptr [EBX + 0x10]      ; 00477eff
    ADD dword ptr [EAX + 0x8],ESI       ; 00477f02
    INC EDX                             ; 00477f05
    MOV ESI,dword ptr [EBX + 0x4]       ; 00477f06
    ADD ECX,0xc                         ; 00477f09
    CMP EDX,ESI                         ; 00477f0c
    JL 0x00477ee8                       ; 00477f0e
        ;   XREF to: 00477ee8 (CONDITIONAL_JUMP)  ; LAB_00477ee8
    MOV EBX,dword ptr [ESP + 0x28]      ; 00477f10
        ;   Label: LAB_00477f10
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00477f14
    MOV EDX,dword ptr [EDI + 0x110]     ; 00477f18
    ADD EBX,0x48                        ; 00477f1e
    INC ESI                             ; 00477f21
    MOV dword ptr [ESP + 0x28],EBX      ; 00477f22
    MOV dword ptr [ESP + 0x2c],ESI      ; 00477f26
    CMP ESI,EDX                         ; 00477f2a
    JL 0x00477ec1                       ; 00477f2c
        ;   XREF to: 00477ec1 (CONDITIONAL_JUMP)  ; LAB_00477ec1
    MOV ECX,dword ptr [EDI + 0x104]     ; 00477f2e
        ;   Label: LAB_00477f2e
    XOR EBX,EBX                         ; 00477f34
    TEST ECX,ECX                        ; 00477f36
    JLE 0x00477f98                      ; 00477f38
        ;   XREF to: 00477f98 (CONDITIONAL_JUMP)  ; LAB_00477f98
    XOR ECX,ECX                         ; 00477f3a
    MOV EDX,dword ptr [EDI + 0x108]     ; 00477f3c
        ;   Label: LAB_00477f3c
    ADD EDX,ECX                         ; 00477f42
    FILD dword ptr [EDX]                ; 00477f44
    FST double ptr [ESP + 0x8]          ; 00477f46
    FMUL double ptr [ESP + 0x8]         ; 00477f4a
    FILD dword ptr [EDX + 0x4]          ; 00477f4e
    FST double ptr [ESP + 0x18]         ; 00477f51
    FMUL double ptr [ESP + 0x18]        ; 00477f55
    FILD dword ptr [EDX + 0x8]          ; 00477f59
    FXCH                                ; 00477f5c
    FADDP ST2,ST0                       ; 00477f5e
    FST double ptr [ESP + 0x10]         ; 00477f60
    FMUL double ptr [ESP + 0x10]        ; 00477f64
    FADDP                               ; 00477f68
    FSQRT                               ; 00477f6a
    FLDZ                                ; 00477f6c
    FXCH                                ; 00477f6e
    FSTP double ptr [ESP]               ; 00477f70
    FCOMP double ptr [ESP]              ; 00477f73
    FNSTSW AX                           ; 00477f76
    SAHF                                ; 00477f78
    JC 0x00477fc7                       ; 00477f79
        ;   XREF to: 00477fc7 (CONDITIONAL_JUMP)  ; LAB_00477fc7
    MOV dword ptr [EDX + 0x8],0x0       ; 00477f7b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00477f82
    MOV dword ptr [EDX + 0x4],EAX       ; 00477f85
    MOV dword ptr [EDX],EAX             ; 00477f88
    INC EBX                             ; 00477f8a
        ;   Label: LAB_00477f8a
    MOV ESI,dword ptr [EDI + 0x104]     ; 00477f8b
    ADD ECX,0xc                         ; 00477f91
    CMP EBX,ESI                         ; 00477f94
    JL 0x00477f3c                       ; 00477f96
        ;   XREF to: 00477f3c (CONDITIONAL_JUMP)  ; LAB_00477f3c
    MOV ESP,EBP                         ; 00477f98
        ;   Label: LAB_00477f98
    POP EBP                             ; 00477f9a
    POP EDI                             ; 00477f9b
    POP ESI                             ; 00477f9c
    POP EBX                             ; 00477f9d
    RET                                 ; 00477f9e
    MOV EBX,0x61f73a                    ; 00477f9f | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00477f9f
    MOV ESI,0x2f1                       ; 00477fa4
    PUSH 0x61f74d                       ; 00477fa9 | = "CKeyFramedModel::calcNormals() - vert..."
    MOV dword ptr [0x02f0ca48],EBX      ; 00477fae | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00477fb4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00477fba
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00477fbf
    JMP 0x00477e89                      ; 00477fc2
        ;   XREF to: 00477e89 (UNCONDITIONAL_JUMP)  ; LAB_00477e89
    FLD double ptr [ESP + 0x8]          ; 00477fc7
        ;   Label: LAB_00477fc7
    FLD double ptr [0x0061f793]         ; 00477fcb | g_NormalizeScale
    FDIV double ptr [ESP]               ; 00477fd1
    FXCH                                ; 00477fd4
    FMUL ST1                            ; 00477fd6
    FLD double ptr [ESP + 0x18]         ; 00477fd8
    FMUL ST2                            ; 00477fdc
    FLD double ptr [ESP + 0x10]         ; 00477fde
    FMULP ST3                           ; 00477fe2
    FXCH                                ; 00477fe4
    CALL crt_math.c_round_FUN_005fe6b0  ; 00477fe6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00477feb
    CALL crt_math.c_round_FUN_005fe6b0  ; 00477fed
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 00477ff2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00477ff4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 00477ff9
    FISTP dword ptr [EDX]               ; 00477ffb
    FXCH                                ; 00477ffd

