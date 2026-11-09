; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048adc0(CDemonRaytrace *param_1,_FILE *param_2)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_FUN_0048afa0 at 0048afc6
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005db836
;   TerminatedCString s_CDemonRaytrace_loadBinar_005db849
;   TerminatedCString s_core_dtrace_cpp_005db876
;   TerminatedCString s_CDemonRaytrace_loadBinar_005db889
;   TerminatedCString s_core_dtrace_cpp_005db8bf
;   TerminatedCString s_Release_build_doesn_t_su_005db8d2
;   TerminatedCString s_core_dtrace_cpp_005db8fd
;   TerminatedCString s_CDemonRaytrace_loadBinar_005db910
;   undefined4 DAT_005db940
;   undefined4 DAT_0061ab60
;   undefined4 DAT_01c3d420
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_load_FUN_00457e50
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40
;   core_dtrace.cpp_FUN_0048aab0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fread_FUN_005c0b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048adc0
        ;   Label: core_dtrace.cpp_FUN_0048adc0
    PUSH ESI                            ; 0048adc1
    PUSH EDI                            ; 0048adc2
    PUSH EBP                            ; 0048adc3
    SUB ESP,0x1c                        ; 0048adc4
    MOV EBX,dword ptr [ESP + 0x30]      ; 0048adc7
    MOV EBP,dword ptr [ESP + 0x34]      ; 0048adcb
    PUSH EBX                            ; 0048adcf
    CALL core_dtrace.cpp_FUN_0048aab0   ; 0048add0
        ;   XREF to: 0048aab0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048aab0()
    ADD ESP,0x4                         ; 0048add5
    PUSH EBP                            ; 0048add8
    PUSH 0x1                            ; 0048add9
    PUSH 0x4                            ; 0048addb
    LEA EAX,[ESP + 0x24]                ; 0048addd
    XOR EDX,EDX                         ; 0048ade1
    PUSH EAX                            ; 0048ade3
    MOV dword ptr [0x01c3d420],EDX      ; 0048ade4 | DAT_01c3d420
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048adea
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048adef
    CMP dword ptr [ESP + 0x18],0x1      ; 0048adf2
    JL 0x0048af15                       ; 0048adf7
        ;   XREF to: 0048af15 (CONDITIONAL_JUMP)  ; LAB_0048af15
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048adfd
        ;   Label: LAB_0048adfd
    CMP EAX,dword ptr [0x0061ab60]      ; 0048ae01 | DAT_0061ab60
    JLE 0x0048ae2c                      ; 0048ae07
        ;   XREF to: 0048ae2c (CONDITIONAL_JUMP)  ; LAB_0048ae2c
    MOV ECX,0x5db876                    ; 0048ae09 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x14b                       ; 0048ae0e
    PUSH 0x5db889                       ; 0048ae13 | = "CDemonRaytrace::loadBinary - file is ..."
    MOV dword ptr [0x01d1d400],ECX      ; 0048ae18 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0048ae1e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048ae24
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048ae29
    PUSH EBP                            ; 0048ae2c
        ;   Label: LAB_0048ae2c
    PUSH 0x1                            ; 0048ae2d
    PUSH 0x4                            ; 0048ae2f
    LEA EAX,[EBX + 0x40]                ; 0048ae31
    PUSH EAX                            ; 0048ae34
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae35
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048ae3a
    PUSH EBP                            ; 0048ae3d
    PUSH 0x1                            ; 0048ae3e
    PUSH 0x4                            ; 0048ae40
    LEA EAX,[EBX + 0x44]                ; 0048ae42
    PUSH EAX                            ; 0048ae45
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae46
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048ae4b
    PUSH EBP                            ; 0048ae4e
    PUSH 0x1                            ; 0048ae4f
    PUSH 0x4                            ; 0048ae51
    LEA EAX,[EBX + 0x48]                ; 0048ae53
    PUSH EAX                            ; 0048ae56
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae57
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048ae5c
    PUSH EBP                            ; 0048ae5f
    PUSH 0x1                            ; 0048ae60
    PUSH 0xc                            ; 0048ae62
    LEA EAX,[EBX + 0x10]                ; 0048ae64
    PUSH EAX                            ; 0048ae67
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae68
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048ae6d
    PUSH EBP                            ; 0048ae70
    PUSH 0x1                            ; 0048ae71
    PUSH 0xc                            ; 0048ae73
    LEA EAX,[EBX + 0x1c]                ; 0048ae75
    PUSH EAX                            ; 0048ae78
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae79
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    ADD ESP,0x10                        ; 0048ae7e
    PUSH EBP                            ; 0048ae81
    PUSH 0x1                            ; 0048ae82
    PUSH 0xc                            ; 0048ae84
    LEA ESI,[EBX + 0x28]                ; 0048ae86
    PUSH ESI                            ; 0048ae89
    CALL crt_stdio.c_fread_FUN_005c0b10 ; 0048ae8a
        ;   XREF to: 005c0b10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005c0b10()
    FLD float ptr [0x005db940]          ; 0048ae8f | DAT_005db940
    FLD float ptr [ESI]                 ; 0048ae95
    FMUL ST1                            ; 0048ae97
    FLD float ptr [ESI + 0x4]           ; 0048ae99
    FMUL ST2                            ; 0048ae9c
    FLD float ptr [ESI + 0x8]           ; 0048ae9e
    FMULP ST3                           ; 0048aea1
    LEA EDI,[ESP + 0x1c]                ; 0048aea3
    ADD ESP,0x10                        ; 0048aea7
    MOV ESI,ESP                         ; 0048aeaa
    FXCH                                ; 0048aeac
    FSTP float ptr [ESP]                ; 0048aeae
    FSTP float ptr [ESP + 0x4]          ; 0048aeb1
    FSTP float ptr [ESP + 0x8]          ; 0048aeb5
    MOVSD ES:EDI,ESI                    ; 0048aeb9
    MOVSD ES:EDI,ESI                    ; 0048aeba
    MOVSD ES:EDI,ESI                    ; 0048aebb
    LEA EAX,[ESP + 0xc]                 ; 0048aebc
    LEA ESI,[EBX + 0x34]                ; 0048aec0
    CMP ESI,EAX                         ; 0048aec3
    JZ 0x0048aedb                       ; 0048aec5
        ;   XREF to: 0048aedb (CONDITIONAL_JUMP)  ; LAB_0048aedb
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048aec7
    MOV dword ptr [ESI],EAX             ; 0048aecb
    MOV EAX,dword ptr [ESP + 0x10]      ; 0048aecd
    MOV dword ptr [ESI + 0x4],EAX       ; 0048aed1
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048aed4
    MOV dword ptr [ESI + 0x8],EAX       ; 0048aed8
    CMP dword ptr [ESP + 0x18],0x4      ; 0048aedb
        ;   Label: LAB_0048aedb
    JL 0x0048af3d                       ; 0048aee0
        ;   XREF to: 0048af3d (CONDITIONAL_JUMP)  ; LAB_0048af3d
    PUSH EBX                            ; 0048aee2
    CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40 ; 0048aee3
        ;   XREF to: 0048aa40 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_0048aa40(CDemonRaytrace * this_ptr)
    XOR ESI,ESI                         ; 0048aee8
    XOR EDI,EDI                         ; 0048aeea
    ADD ESP,0x4                         ; 0048aeec
    MOV ECX,dword ptr [EBX + 0x44]      ; 0048aeef
        ;   Label: LAB_0048aeef
    MOV EAX,dword ptr [EBX + 0x40]      ; 0048aef2
    IMUL EAX,ECX                        ; 0048aef5
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0048aef8
    CMP ESI,EAX                         ; 0048aefc
    JGE 0x0048af5f                      ; 0048aefe
        ;   XREF to: 0048af5f (CONDITIONAL_JUMP)  ; LAB_0048af5f
    MOV EAX,dword ptr [EBX + 0x50]      ; 0048af00
    PUSH EBP                            ; 0048af03
    ADD EAX,EDI                         ; 0048af04
    PUSH EAX                            ; 0048af06
    INC ESI                             ; 0048af07
    CALL core_dcube.cpp_CDemonCube_load_FUN_00457e50 ; 0048af08
        ;   XREF to: 00457e50 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_load_FUN_00457e50(CDemonCube * this_ptr, _FILE * file_handle)
    ADD EDI,0x34                        ; 0048af0d
    ADD ESP,0x8                         ; 0048af10
    JMP 0x0048aeef                      ; 0048af13
        ;   XREF to: 0048aeef (UNCONDITIONAL_JUMP)  ; LAB_0048aeef
    MOV ESI,0x5db836                    ; 0048af15 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0048af15
    MOV EDI,0x148                       ; 0048af1a
    PUSH 0x5db849                       ; 0048af1f | = "CDemonRaytrace::loadBinary - invalid ..."
    MOV dword ptr [0x01d1d400],ESI      ; 0048af24 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0048af2a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048af30
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048af35
    JMP 0x0048adfd                      ; 0048af38
        ;   XREF to: 0048adfd (UNCONDITIONAL_JUMP)  ; LAB_0048adfd
    MOV EAX,0x5db8bf                    ; 0048af3d | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0048af3d
    MOV EDX,0x1e2                       ; 0048af42
    PUSH 0x5db8d2                       ; 0048af47 | = "Release build doesn't support old geo..."
    MOV [0x01d1d400],EAX                ; 0048af4c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0048af51 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048af57
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048af5c
    TEST byte ptr [EBP + 0xc],0x20      ; 0048af5f
        ;   Label: LAB_0048af5f
    JNZ 0x0048af6d                      ; 0048af63
        ;   XREF to: 0048af6d (CONDITIONAL_JUMP)  ; LAB_0048af6d
    ADD ESP,0x1c                        ; 0048af65
    POP EBP                             ; 0048af68
    POP EDI                             ; 0048af69
    POP ESI                             ; 0048af6a
    POP EBX                             ; 0048af6b
    RET                                 ; 0048af6c
    MOV ECX,0x5db8fd                    ; 0048af6d | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0048af6d
    MOV EBX,0x1ff                       ; 0048af72
    PUSH 0x5db910                       ; 0048af77 | = "CDemonRaytrace::loadBinary - error re..."
    MOV dword ptr [0x01d1d400],ECX      ; 0048af7c | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0048af82 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0048af88
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0048af8d
    ADD ESP,0x1c                        ; 0048af90
    POP EBP                             ; 0048af93
    POP EDI                             ; 0048af94
    POP ESI                             ; 0048af95
    POP EBX                             ; 0048af96
    RET                                 ; 0048af97

