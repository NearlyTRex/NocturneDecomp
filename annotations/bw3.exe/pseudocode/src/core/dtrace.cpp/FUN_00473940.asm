; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00473940(CDemonRaytrace *param_1,_FILE *param_2)
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
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00473b20 at 00473b46
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_005bc8f3
;   TerminatedCString s_CDemonRaytrace_loadBinar_005bc906
;   TerminatedCString s_core_dtrace_cpp_005bc933
;   TerminatedCString s_CDemonRaytrace_loadBinar_005bc946
;   TerminatedCString s_core_dtrace_cpp_005bc97c
;   TerminatedCString s_Release_build_doesn_t_su_005bc98f
;   TerminatedCString s_core_dtrace_cpp_005bc9ba
;   TerminatedCString s_CDemonRaytrace_loadBinar_005bc9cd
;   undefined4 DAT_005bc9fd
;   undefined4 DAT_005fb0e0
;   undefined4 DAT_01c599bc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_load_FUN_00453fa0
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0
;   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fread_FUN_005a3890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473940
        ;   Label: core_dtrace.cpp_FUN_00473940
    PUSH ESI                            ; 00473941
    PUSH EDI                            ; 00473942
    PUSH EBP                            ; 00473943
    SUB ESP,0x1c                        ; 00473944
    MOV EBX,dword ptr [ESP + 0x30]      ; 00473947
    MOV EBP,dword ptr [ESP + 0x34]      ; 0047394b
    PUSH EBX                            ; 0047394f
    CALL core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630 ; 00473950
        ;   XREF to: 00473630 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00473955
    PUSH EBP                            ; 00473958
    PUSH 0x1                            ; 00473959
    PUSH 0x4                            ; 0047395b
    LEA EAX,[ESP + 0x24]                ; 0047395d
    XOR EDX,EDX                         ; 00473961
    PUSH EAX                            ; 00473963
    MOV dword ptr [0x01c599bc],EDX      ; 00473964 | DAT_01c599bc
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0047396a
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0047396f
    CMP dword ptr [ESP + 0x18],0x1      ; 00473972
    JL 0x00473a95                       ; 00473977
        ;   XREF to: 00473a95 (CONDITIONAL_JUMP)  ; LAB_00473a95
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047397d
        ;   Label: LAB_0047397d
    CMP EAX,dword ptr [0x005fb0e0]      ; 00473981 | DAT_005fb0e0
    JLE 0x004739ac                      ; 00473987
        ;   XREF to: 004739ac (CONDITIONAL_JUMP)  ; LAB_004739ac
    MOV ECX,0x5bc933                    ; 00473989 | = "..\\core\\dtrace.cpp"
    MOV ESI,0x14b                       ; 0047398e
    PUSH 0x5bc946                       ; 00473993 | = "CDemonRaytrace::loadBinary - file is ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00473998 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0047399e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004739a4
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004739a9
    PUSH EBP                            ; 004739ac
        ;   Label: LAB_004739ac
    PUSH 0x1                            ; 004739ad
    PUSH 0x4                            ; 004739af
    LEA EAX,[EBX + 0x40]                ; 004739b1
    PUSH EAX                            ; 004739b4
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004739b5
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004739ba
    PUSH EBP                            ; 004739bd
    PUSH 0x1                            ; 004739be
    PUSH 0x4                            ; 004739c0
    LEA EAX,[EBX + 0x44]                ; 004739c2
    PUSH EAX                            ; 004739c5
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004739c6
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004739cb
    PUSH EBP                            ; 004739ce
    PUSH 0x1                            ; 004739cf
    PUSH 0x4                            ; 004739d1
    LEA EAX,[EBX + 0x48]                ; 004739d3
    PUSH EAX                            ; 004739d6
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004739d7
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004739dc
    PUSH EBP                            ; 004739df
    PUSH 0x1                            ; 004739e0
    PUSH 0xc                            ; 004739e2
    LEA EAX,[EBX + 0x10]                ; 004739e4
    PUSH EAX                            ; 004739e7
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004739e8
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004739ed
    PUSH EBP                            ; 004739f0
    PUSH 0x1                            ; 004739f1
    PUSH 0xc                            ; 004739f3
    LEA EAX,[EBX + 0x1c]                ; 004739f5
    PUSH EAX                            ; 004739f8
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004739f9
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004739fe
    PUSH EBP                            ; 00473a01
    PUSH 0x1                            ; 00473a02
    PUSH 0xc                            ; 00473a04
    LEA ESI,[EBX + 0x28]                ; 00473a06
    PUSH ESI                            ; 00473a09
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00473a0a
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005a3890(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    FLD float ptr [0x005bc9fd]          ; 00473a0f | DAT_005bc9fd
    FLD float ptr [ESI]                 ; 00473a15
    FMUL ST1                            ; 00473a17
    FLD float ptr [ESI + 0x4]           ; 00473a19
    FMUL ST2                            ; 00473a1c
    FLD float ptr [ESI + 0x8]           ; 00473a1e
    FMULP ST3                           ; 00473a21
    LEA EDI,[ESP + 0x1c]                ; 00473a23
    ADD ESP,0x10                        ; 00473a27
    MOV ESI,ESP                         ; 00473a2a
    FXCH                                ; 00473a2c
    FSTP float ptr [ESP]                ; 00473a2e
    FSTP float ptr [ESP + 0x4]          ; 00473a31
    FSTP float ptr [ESP + 0x8]          ; 00473a35
    MOVSD ES:EDI,ESI                    ; 00473a39
    MOVSD ES:EDI,ESI                    ; 00473a3a
    MOVSD ES:EDI,ESI                    ; 00473a3b
    LEA EAX,[ESP + 0xc]                 ; 00473a3c
    LEA ESI,[EBX + 0x34]                ; 00473a40
    CMP ESI,EAX                         ; 00473a43
    JZ 0x00473a5b                       ; 00473a45
        ;   XREF to: 00473a5b (CONDITIONAL_JUMP)  ; LAB_00473a5b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00473a47
    MOV dword ptr [ESI],EAX             ; 00473a4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 00473a4d
    MOV dword ptr [ESI + 0x4],EAX       ; 00473a51
    MOV EAX,dword ptr [ESP + 0x14]      ; 00473a54
    MOV dword ptr [ESI + 0x8],EAX       ; 00473a58
    CMP dword ptr [ESP + 0x18],0x4      ; 00473a5b
        ;   Label: LAB_00473a5b
    JL 0x00473abd                       ; 00473a60
        ;   XREF to: 00473abd (CONDITIONAL_JUMP)  ; LAB_00473abd
    PUSH EBX                            ; 00473a62
    CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0 ; 00473a63
        ;   XREF to: 004735c0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(CDemonRaytrace * this_ptr)
    XOR ESI,ESI                         ; 00473a68
    XOR EDI,EDI                         ; 00473a6a
    ADD ESP,0x4                         ; 00473a6c
    MOV ECX,dword ptr [EBX + 0x44]      ; 00473a6f
        ;   Label: LAB_00473a6f
    MOV EAX,dword ptr [EBX + 0x40]      ; 00473a72
    IMUL EAX,ECX                        ; 00473a75
    IMUL EAX,dword ptr [EBX + 0x48]     ; 00473a78
    CMP ESI,EAX                         ; 00473a7c
    JGE 0x00473adf                      ; 00473a7e
        ;   XREF to: 00473adf (CONDITIONAL_JUMP)  ; LAB_00473adf
    MOV EAX,dword ptr [EBX + 0x50]      ; 00473a80
    PUSH EBP                            ; 00473a83
    ADD EAX,EDI                         ; 00473a84
    PUSH EAX                            ; 00473a86
    INC ESI                             ; 00473a87
    CALL core_dcube.cpp_CDemonCube_load_FUN_00453fa0 ; 00473a88
        ;   XREF to: 00453fa0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_load_FUN_00453fa0(CDemonCube * this_ptr, _FILE * file_handle)
    ADD EDI,0x34                        ; 00473a8d
    ADD ESP,0x8                         ; 00473a90
    JMP 0x00473a6f                      ; 00473a93
        ;   XREF to: 00473a6f (UNCONDITIONAL_JUMP)  ; LAB_00473a6f
    MOV ESI,0x5bc8f3                    ; 00473a95 | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00473a95
    MOV EDI,0x148                       ; 00473a9a
    PUSH 0x5bc906                       ; 00473a9f | = "CDemonRaytrace::loadBinary - invalid ..."
    MOV dword ptr [0x01d71de0],ESI      ; 00473aa4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00473aaa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473ab0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00473ab5
    JMP 0x0047397d                      ; 00473ab8
        ;   XREF to: 0047397d (UNCONDITIONAL_JUMP)  ; LAB_0047397d
    MOV EAX,0x5bc97c                    ; 00473abd | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00473abd
    MOV EDX,0x1e2                       ; 00473ac2
    PUSH 0x5bc98f                       ; 00473ac7 | = "Release build doesn't support old geo..."
    MOV [0x01d71de0],EAX                ; 00473acc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00473ad1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473ad7
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00473adc
    TEST byte ptr [EBP + 0xc],0x20      ; 00473adf
        ;   Label: LAB_00473adf
    JNZ 0x00473aed                      ; 00473ae3
        ;   XREF to: 00473aed (CONDITIONAL_JUMP)  ; LAB_00473aed
    ADD ESP,0x1c                        ; 00473ae5
    POP EBP                             ; 00473ae8
    POP EDI                             ; 00473ae9
    POP ESI                             ; 00473aea
    POP EBX                             ; 00473aeb
    RET                                 ; 00473aec
    MOV ECX,0x5bc9ba                    ; 00473aed | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00473aed
    MOV EBX,0x1ff                       ; 00473af2
    PUSH 0x5bc9cd                       ; 00473af7 | = "CDemonRaytrace::loadBinary - error re..."
    MOV dword ptr [0x01d71de0],ECX      ; 00473afc | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00473b02 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00473b08
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00473b0d
    ADD ESP,0x1c                        ; 00473b10
    POP EBP                             ; 00473b13
    POP EDI                             ; 00473b14
    POP ESI                             ; 00473b15
    POP EBX                             ; 00473b16
    RET                                 ; 00473b17

