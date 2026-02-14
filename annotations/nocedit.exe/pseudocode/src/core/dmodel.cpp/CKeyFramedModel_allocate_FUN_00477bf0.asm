; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,int part_count,int frame_count)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   poly_count
; int              Stack[0x10]:4   texture_count
; int              Stack[0x14]:4   part_count
; int              Stack[0x18]:4   frame_count
;
; XREF[4]:
;   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 at 0047ea4e
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 004794f3
;   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 at 00476fdf
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 at 004771f4
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f5c3
;   TerminatedCString s_Too_many_materials_0061f5d6
;   TerminatedCString s_core_dmodel_cpp_0061f5ea
;   TerminatedCString s_Too_many_parts_0061f5fd
;   TerminatedCString s_core_dmodel_cpp_0061f60d
;   TerminatedCString s_core_dmodel_cpp_0061f620
;   TerminatedCString s_core_dmodel_cpp_0061f633
;   TerminatedCString s_core_dmodel_cpp_0061f646
;   TerminatedCString s_core_dmodel_cpp_0061f659
;   TerminatedCString s_Out_of_memory_in_CKeyFra_0061f66c
;   TerminatedCString s_core_dmodel_cpp_0061f6c5
;   TerminatedCString s_core_dmodel_cpp_0061f6d8
;   TerminatedCString s_Out_of_memory_for_vertex_0061f6eb
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477bf0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
    PUSH ESI                            ; 00477bf1
    PUSH EDI                            ; 00477bf2
    PUSH EBP                            ; 00477bf3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00477bf4
    PUSH EBX                            ; 00477bf8
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00477bf9
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00477bfe
    MOV EAX,dword ptr [ESP + 0x18]      ; 00477c01
    MOV dword ptr [EBX + 0x104],EAX     ; 00477c05
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00477c0b
    MOV dword ptr [EBX + 0x110],EAX     ; 00477c0f
    MOV EAX,dword ptr [ESP + 0x20]      ; 00477c15
    MOV dword ptr [EBX + 0x120],EAX     ; 00477c19
    MOV EAX,dword ptr [ESP + 0x24]      ; 00477c1f
    MOV dword ptr [EBX + 0x5584],EAX    ; 00477c23
    MOV EAX,dword ptr [ESP + 0x28]      ; 00477c29
    MOV EDX,dword ptr [EBX + 0x120]     ; 00477c2d
    MOV dword ptr [EBX + 0x100],EAX     ; 00477c33
    CMP EDX,0x12c                       ; 00477c39
    JG 0x00477d86                       ; 00477c3f
        ;   XREF to: 00477d86 (CONDITIONAL_JUMP)  ; LAB_00477d86
    CMP dword ptr [EBX + 0x5584],0x1e   ; 00477c45
        ;   Label: LAB_00477c45
    JLE 0x00477c70                      ; 00477c4c
        ;   XREF to: 00477c70 (CONDITIONAL_JUMP)  ; LAB_00477c70
    MOV EBP,0x61f5ea                    ; 00477c4e | = "..\\core\\dmodel.cpp"
    MOV EAX,0x2c1                       ; 00477c53
    PUSH 0x61f5fd                       ; 00477c58 | = "Too many parts!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00477c5d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00477c63 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00477c68
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00477c6d
    MOV EAX,dword ptr [EBX + 0x104]     ; 00477c70
        ;   Label: LAB_00477c70
    MOV EDX,dword ptr [EBX + 0x100]     ; 00477c76
    IMUL EDX,EAX                        ; 00477c7c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00477c7f
    PUSH 0x2c5                          ; 00477c86
    SUB EAX,EDX                         ; 00477c8b
    PUSH 0x61f60d                       ; 00477c8d | = "..\\core\\dmodel.cpp"
    SHL EAX,0x2                         ; 00477c92
    PUSH EAX                            ; 00477c95
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00477c96
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00477c9b
    MOV EDX,dword ptr [EBX + 0x110]     ; 00477c9e
    MOV dword ptr [EBX + 0x10c],EAX     ; 00477ca4
    LEA EAX,[EDX*0x8 + 0x0]             ; 00477caa
    PUSH 0x2c6                          ; 00477cb1
    ADD EAX,EDX                         ; 00477cb6
    PUSH 0x61f620                       ; 00477cb8 | = "..\\core\\dmodel.cpp"
    SHL EAX,0x3                         ; 00477cbd
    PUSH EAX                            ; 00477cc0
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00477cc1
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00477cc6
    MOV dword ptr [EBX + 0x114],EAX     ; 00477cc9
    PUSH 0x2c7                          ; 00477ccf
    MOV EAX,dword ptr [EBX + 0x110]     ; 00477cd4
    PUSH 0x61f633                       ; 00477cda | = "..\\core\\dmodel.cpp"
    SHL EAX,0x2                         ; 00477cdf
    PUSH EAX                            ; 00477ce2
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00477ce3
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV ESI,dword ptr [EBX + 0x100]     ; 00477ce8
    MOV dword ptr [EBX + 0x118],EAX     ; 00477cee
    LEA EAX,[ESI*0x4 + 0x0]             ; 00477cf4
    ADD ESP,0xc                         ; 00477cfb
    SUB EAX,ESI                         ; 00477cfe
    PUSH 0x2c8                          ; 00477d00
    SHL EAX,0x3                         ; 00477d05
    PUSH 0x61f646                       ; 00477d08 | = "..\\core\\dmodel.cpp"
    ADD EAX,0x4                         ; 00477d0d
    PUSH EAX                            ; 00477d10
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00477d11
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00477d16
    TEST EAX,EAX                        ; 00477d19
    JZ 0x00477d23                       ; 00477d1b
        ;   XREF to: 00477d23 (CONDITIONAL_JUMP)  ; LAB_00477d23
    ADD EAX,0x4                         ; 00477d1d
    MOV dword ptr [EAX + -0x4],ESI      ; 00477d20
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00477d23
        ;   Label: LAB_00477d23
    MOV dword ptr [EBX + 0x5690],EAX    ; 00477d29
    TEST ECX,ECX                        ; 00477d2f
    JNZ 0x00477dae                      ; 00477d31
        ;   XREF to: 00477dae (CONDITIONAL_JUMP)  ; LAB_00477dae
    PUSH EBX                            ; 00477d33
        ;   Label: LAB_00477d33
    CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690 ; 00477d34
        ;   XREF to: 00477690 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 00477d39
    MOV EDI,dword ptr [EBX + 0x110]     ; 00477d3c
    PUSH EDI                            ; 00477d42
    MOV EBP,dword ptr [EBX + 0x104]     ; 00477d43
    PUSH EBP                            ; 00477d49
    MOV EAX,dword ptr [EBX + 0x100]     ; 00477d4a
    PUSH EAX                            ; 00477d50
    MOV ESI,0x2d3                       ; 00477d51
    MOV ECX,0x61f659                    ; 00477d56 | = "..\\core\\dmodel.cpp"
    PUSH 0x61f66c                       ; 00477d5b | = "Out of memory in CKeyFramedModel::all..."
    MOV dword ptr [0x02f0ca4c],ESI      ; 00477d60 | g_CurrentLineNumber
    MOV dword ptr [0x02f0ca48],ECX      ; 00477d66 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00477d6c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 00477d71
    CMP dword ptr [EBX + 0x100],0x1     ; 00477d74
    JZ 0x00477df5                       ; 00477d7b
        ;   XREF to: 00477df5 (CONDITIONAL_JUMP)  ; LAB_00477df5
    POP EBP                             ; 00477d81
        ;   Label: LAB_00477d81
    POP EDI                             ; 00477d82
    POP ESI                             ; 00477d83
    POP EBX                             ; 00477d84
    RET                                 ; 00477d85
    MOV ECX,0x61f5c3                    ; 00477d86 | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_00477d86
    MOV ESI,0x2c0                       ; 00477d8b
    PUSH 0x61f5d6                       ; 00477d90 | = "Too many materials!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00477d95 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00477d9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00477da1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00477da6
    JMP 0x00477c45                      ; 00477da9
        ;   XREF to: 00477c45 (UNCONDITIONAL_JUMP)  ; LAB_00477c45
    CMP dword ptr [EBX + 0x110],0x0     ; 00477dae
        ;   Label: LAB_00477dae
    JLE 0x00477dc4                      ; 00477db5
        ;   XREF to: 00477dc4 (CONDITIONAL_JUMP)  ; LAB_00477dc4
    CMP dword ptr [EBX + 0x114],0x0     ; 00477db7
    JZ 0x00477d33                       ; 00477dbe
        ;   XREF to: 00477d33 (CONDITIONAL_JUMP)  ; LAB_00477d33
    CMP dword ptr [EBX + 0x110],0x0     ; 00477dc4
        ;   Label: LAB_00477dc4
    JLE 0x00477dda                      ; 00477dcb
        ;   XREF to: 00477dda (CONDITIONAL_JUMP)  ; LAB_00477dda
    CMP dword ptr [EBX + 0x118],0x0     ; 00477dcd
    JZ 0x00477d33                       ; 00477dd4
        ;   XREF to: 00477d33 (CONDITIONAL_JUMP)  ; LAB_00477d33
    CMP dword ptr [EBX + 0x5690],0x0    ; 00477dda
        ;   Label: LAB_00477dda
    JZ 0x00477d33                       ; 00477de1
        ;   XREF to: 00477d33 (CONDITIONAL_JUMP)  ; LAB_00477d33
    CMP dword ptr [EBX + 0x100],0x1     ; 00477de7
    JZ 0x00477df5                       ; 00477dee
        ;   XREF to: 00477df5 (CONDITIONAL_JUMP)  ; LAB_00477df5
    POP EBP                             ; 00477df0
    POP EDI                             ; 00477df1
    POP ESI                             ; 00477df2
    POP EBX                             ; 00477df3
    RET                                 ; 00477df4
    MOV EDX,dword ptr [EBX + 0x104]     ; 00477df5
        ;   Label: LAB_00477df5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00477dfb
    PUSH 0x2d9                          ; 00477e02
    SUB EAX,EDX                         ; 00477e07
    PUSH 0x61f6c5                       ; 00477e09 | = "..\\core\\dmodel.cpp"
    SHL EAX,0x2                         ; 00477e0e
    PUSH EAX                            ; 00477e11
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00477e12
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00477e17
    MOV dword ptr [EBX + 0x108],EAX     ; 00477e1a
    TEST EAX,EAX                        ; 00477e20
    JNZ 0x00477d81                      ; 00477e22
        ;   XREF to: 00477d81 (CONDITIONAL_JUMP)  ; LAB_00477d81
    MOV EBP,dword ptr [EBX + 0x104]     ; 00477e28
    PUSH EBP                            ; 00477e2e
    MOV ESI,0x61f6d8                    ; 00477e2f | = "..\\core\\dmodel.cpp"
    MOV EDI,0x2db                       ; 00477e34
    PUSH 0x61f6eb                       ; 00477e39 | = "Out of memory for vertex normals in C..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00477e3e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00477e44 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00477e4a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00477e4f
    POP EBP                             ; 00477e52
    POP EDI                             ; 00477e53
    POP ESI                             ; 00477e54
    POP EBX                             ; 00477e55
    RET                                 ; 00477e56

