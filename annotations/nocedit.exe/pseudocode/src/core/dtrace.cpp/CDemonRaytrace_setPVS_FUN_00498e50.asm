; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_setPVS_FUN_00498e50(CDemonRaytrace *this_ptr,int visible_cube_count,int *visible_cube_indices)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   visible_cube_count
; int *            Stack[0xc]:4   visible_cube_indices
; Local Variables:
; CVector3f[2]     Stack[-0x20]:24  local_20
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 at 0056a369
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622bf2
;   TerminatedCString s_CDemonRaytrace_setPVS_To_00622c05
;   int g_PVSDrawnCubeCount
;   int g_PVSReadyFlag
;   CDemonCube*[20000] g_PVSCubePointers
;   undefined4 DAT_02ca03b0
;   CVector3f[20000] g_PVSCubePositions
;   undefined4 DAT_02cb3c30
;   undefined4 DAT_02cb3c34
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498e50
        ;   Label: core_dtrace.cpp_CDemonRaytrace_setPVS_FUN_00498e50
    PUSH EBP                            ; 00498e51
    SUB ESP,0x18                        ; 00498e52
    MOV EBX,dword ptr [ESP + 0x24]      ; 00498e55
    MOV EAX,dword ptr [ESP + 0x28]      ; 00498e59
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00498e5d
    XOR EDX,EDX                         ; 00498e61
    MOV dword ptr [0x02ca03a8],EDX      ; 00498e63 | g_PVSReadyFlag
    CMP EAX,0x1                         ; 00498e69
    JL 0x00498f73                       ; 00498e6c
        ;   XREF to: 00498f73 (CONDITIONAL_JUMP)  ; LAB_00498f73
    TEST EBP,EBP                        ; 00498e72
    JZ 0x00498f73                       ; 00498e74
        ;   XREF to: 00498f73 (CONDITIONAL_JUMP)  ; LAB_00498f73
    PUSH EDI                            ; 00498e7a
    PUSH ESI                            ; 00498e7b
    MOV [0x02ca03a4],EAX                ; 00498e7c | g_PVSDrawnCubeCount
    CMP EAX,0x4e20                      ; 00498e81
    JG 0x00498f79                       ; 00498e86
        ;   XREF to: 00498f79 (CONDITIONAL_JUMP)  ; LAB_00498f79
    MOV EAX,[0x02ca03a4]                ; 00498e8c | g_PVSDrawnCubeCount
        ;   Label: LAB_00498e8c
    XOR EDI,EDI                         ; 00498e91
    TEST EAX,EAX                        ; 00498e93
    JLE 0x00498f67                      ; 00498e95
        ;   XREF to: 00498f67 (CONDITIONAL_JUMP)  ; LAB_00498f67
    MOV ESI,0x2cb3c2c                   ; 00498e9b | g_PVSCubePositions
    LEA EAX,[EDI*0x4 + 0x0]             ; 00498ea0
        ;   Label: LAB_00498ea0
    MOV ECX,dword ptr [EBP]             ; 00498ea7
    MOV dword ptr [ESP + 0x1c],EAX      ; 00498eaa
    IMUL EAX,ECX,0x34                   ; 00498eae
    MOV EDX,dword ptr [EBX + 0x50]      ; 00498eb1
    ADD EAX,EDX                         ; 00498eb4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00498eb6
    MOV dword ptr [EDX + 0x2ca03ac],EAX ; 00498eba | g_PVSCubePointers | DAT_02ca03b0
    MOV EDX,ECX                         ; 00498ec0
    MOV EAX,ECX                         ; 00498ec2
    SAR EDX,0x1f                        ; 00498ec4
    IDIV dword ptr [EBX + 0x48]         ; 00498ec7
    MOV dword ptr [ESP + 0x14],EDX      ; 00498eca
    MOV EDX,ECX                         ; 00498ece
    MOV EAX,ECX                         ; 00498ed0
    SAR EDX,0x1f                        ; 00498ed2
    MOV ECX,dword ptr [EBX + 0x48]      ; 00498ed5
    IDIV ECX                            ; 00498ed8
    MOV EDX,EAX                         ; 00498eda
    SAR EDX,0x1f                        ; 00498edc
    MOV ECX,EAX                         ; 00498edf
    IDIV dword ptr [EBX + 0x44]         ; 00498ee1
    MOV dword ptr [ESP + 0x18],EDX      ; 00498ee4
    MOV EDX,ECX                         ; 00498ee8
    MOV EAX,ECX                         ; 00498eea
    SAR EDX,0x1f                        ; 00498eec
    MOV ECX,dword ptr [EBX + 0x44]      ; 00498eef
    IDIV ECX                            ; 00498ef2
    MOV dword ptr [ESP + 0x1c],EAX      ; 00498ef4
    MOV EAX,dword ptr [ESP + 0x18]      ; 00498ef8
    FILD dword ptr [ESP + 0x1c]         ; 00498efc
    MOV dword ptr [ESP + 0x1c],EAX      ; 00498f00
    FMUL float ptr [EBX + 0x28]         ; 00498f04
    FILD dword ptr [ESP + 0x1c]         ; 00498f07
    FXCH                                ; 00498f0b
    FADD float ptr [EBX + 0x10]         ; 00498f0d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00498f10
    FSTP float ptr [ESP + 0x8]          ; 00498f14
    FMUL float ptr [EBX + 0x2c]         ; 00498f18
    MOV dword ptr [ESP + 0x1c],EAX      ; 00498f1b
    FADD float ptr [EBX + 0x14]         ; 00498f1f
    FILD dword ptr [ESP + 0x1c]         ; 00498f22
    FXCH                                ; 00498f26
    FSTP float ptr [ESP + 0xc]          ; 00498f28
    FMUL float ptr [EBX + 0x30]         ; 00498f2c
    FADD float ptr [EBX + 0x18]         ; 00498f2f
    LEA EAX,[ESP + 0x8]                 ; 00498f32
    FSTP float ptr [ESP + 0x10]         ; 00498f36
    CMP ESI,EAX                         ; 00498f3a
    JZ 0x00498f52                       ; 00498f3c
        ;   XREF to: 00498f52 (CONDITIONAL_JUMP)  ; LAB_00498f52
    MOV EAX,dword ptr [ESP + 0x8]       ; 00498f3e
    MOV dword ptr [ESI],EAX             ; 00498f42 | g_PVSCubePositions
    MOV EAX,dword ptr [ESP + 0xc]       ; 00498f44
    MOV dword ptr [ESI + 0x4],EAX       ; 00498f48 | DAT_02cb3c30
    MOV EAX,dword ptr [ESP + 0x10]      ; 00498f4b
    MOV dword ptr [ESI + 0x8],EAX       ; 00498f4f | DAT_02cb3c34
    MOV EDX,dword ptr [0x02ca03a4]      ; 00498f52 | g_PVSDrawnCubeCount
        ;   Label: LAB_00498f52
    ADD ESI,0xc                         ; 00498f58
    INC EDI                             ; 00498f5b
    ADD EBP,0x4                         ; 00498f5c
    CMP EDI,EDX                         ; 00498f5f
    JL 0x00498ea0                       ; 00498f61
        ;   XREF to: 00498ea0 (CONDITIONAL_JUMP)  ; LAB_00498ea0
    MOV dword ptr [0x02ca03a8],0x1      ; 00498f67 | g_PVSReadyFlag
        ;   Label: LAB_00498f67
    POP ESI                             ; 00498f71
    POP EDI                             ; 00498f72
    ADD ESP,0x18                        ; 00498f73
        ;   Label: LAB_00498f73
    POP EBP                             ; 00498f76
    POP EBX                             ; 00498f77
    RET                                 ; 00498f78
    MOV ECX,0x622bf2                    ; 00498f79 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00498f79
    MOV ESI,0x8c9                       ; 00498f7e
    PUSH 0x622c05                       ; 00498f83 | = "CDemonRaytrace::setPVS - Too many dra..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00498f88 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00498f8e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00498f94
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00498f99
    JMP 0x00498e8c                      ; 00498f9c
        ;   XREF to: 00498e8c (UNCONDITIONAL_JUMP)  ; LAB_00498e8c

