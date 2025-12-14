; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0(CLodMesh * this_ptr, FILE * file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0 at 0051b903
;   shape_meshlod.cpp_CLodMesh_replayLodGeneration_FUN_005173f0 at 005174ea
;
; Referenced Globals:
;   TerminatedCString s_d_00637fd4
;   TerminatedCString s_shape_meshlod_cpp_00637fd8
;   TerminatedCString s_shape_meshlod_cpp_00637fed
;   TerminatedCString s_Out_of_memory_00638002
;   TerminatedCString s_d_d_lf_f_00638011
;   TerminatedCString s_shape_meshlod_cpp_0063801f
;   TerminatedCString s_LodMesh_eqLoad_file_is_c_00638034
;   TerminatedCString s_shape_meshlod_cpp_00638057
;   TerminatedCString s_LodMesh_eqLoad_EQ_is_not_0063806c
;   TerminatedCString s_shape_meshlod_cpp_00638098
;   double DOUBLE_006380ad = 0.950000000000000
;   double g_InfiniteCollapseCost = 1.00000000000000E+35
;   undefined4 g_InfiniteCollapseCost+4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710
;   shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cdf0
        ;   Label: shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
    PUSH ESI                            ; 0051cdf1
    PUSH EDI                            ; 0051cdf2
    PUSH EBP                            ; 0051cdf3
    MOV EBP,ESP                         ; 0051cdf4
    SUB ESP,0x2c                        ; 0051cdf6
    AND ESP,0xfffffff8                  ; 0051cdf9
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051cdfc
    LEA EAX,[ESP + 0x8]                 ; 0051cdff
    PUSH EAX                            ; 0051ce03
    PUSH 0x637fd4                       ; 0051ce04 | = "%d\n"
    MOV ECX,dword ptr [EBP + 0x18]      ; 0051ce09
    MOV EDX,0x1                         ; 0051ce0c
    PUSH ECX                            ; 0051ce11
    MOV dword ptr [ESP + 0x2c],EDX      ; 0051ce12
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051ce16
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0xc                         ; 0051ce1b
    PUSH 0x13e4                         ; 0051ce1e
    PUSH 0x637fd8                       ; 0051ce23 | = "..\\shape\\meshlod.cpp"
    PUSH 0xf0                           ; 0051ce28
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051ce2d
    PUSH EBX                            ; 0051ce31
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 0051ce32
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0051ce37
    MOV dword ptr [ESP + 0xc],EAX       ; 0051ce3a
    TEST EAX,EAX                        ; 0051ce3e
    JZ 0x0051d04e                       ; 0051ce40
        ;   XREF to: 0051d04e (CONDITIONAL_JUMP)  ; LAB_0051d04e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051ce46
        ;   Label: LAB_0051ce46
    CMP EAX,dword ptr [EDI + 0x44]      ; 0051ce4a
    JZ 0x0051ce55                       ; 0051ce4d
        ;   XREF to: 0051ce55 (CONDITIONAL_JUMP)  ; LAB_0051ce55
    XOR ECX,ECX                         ; 0051ce4f
    MOV dword ptr [ESP + 0x20],ECX      ; 0051ce51
    XOR EBX,EBX                         ; 0051ce55
        ;   Label: LAB_0051ce55
    MOV ESI,dword ptr [ESP + 0x8]       ; 0051ce57
    MOV dword ptr [ESP + 0x1c],EBX      ; 0051ce5b
    TEST ESI,ESI                        ; 0051ce5f
    JLE 0x0051cfb1                      ; 0051ce61
        ;   XREF to: 0051cfb1 (CONDITIONAL_JUMP)  ; LAB_0051cfb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051ce67
    FLD double ptr [0x00661388]         ; 0051ce6b | g_InfiniteCollapseCost
    ADD EAX,0x4                         ; 0051ce71
    FMUL double ptr [0x006380ad]        ; 0051ce74 | DOUBLE_006380ad
    MOV dword ptr [ESP + 0x14],EAX      ; 0051ce7a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051ce7e
    ADD EAX,0x8                         ; 0051ce82
    MOV dword ptr [ESP + 0x18],EAX      ; 0051ce85
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051ce89
    MOV dword ptr [ESP + 0x24],EBX      ; 0051ce8d
    ADD EAX,0x10                        ; 0051ce91
    FSTP double ptr [ESP]               ; 0051ce94
    MOV dword ptr [ESP + 0x10],EAX      ; 0051ce97
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051ce9b
        ;   Label: LAB_0051ce9b
    MOV EBX,dword ptr [ESP + 0x24]      ; 0051ce9f
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051cea3
    ADD EAX,EBX                         ; 0051cea7
    PUSH ESI                            ; 0051cea9
    MOV dword ptr [ESP + 0x2c],EAX      ; 0051ceaa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051ceae
    PUSH EAX                            ; 0051ceb2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0051ceb3
    PUSH EDX                            ; 0051ceb7
    MOV ECX,dword ptr [ESP + 0x34]      ; 0051ceb8
    PUSH ECX                            ; 0051cebc
    PUSH 0x638011                       ; 0051cebd | = "%d,%d,%lf,%f\n"
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051cec2
    PUSH EBX                            ; 0051cec5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051cec6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    MOV EBX,EAX                         ; 0051cecb
    ADD ESP,0x18                        ; 0051cecd
    MOV EDX,EAX                         ; 0051ced0
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051ced2
    FLD double ptr [EAX + 0x8]          ; 0051ced6
    FCOMP double ptr [ESP]              ; 0051ced9
    FNSTSW AX                           ; 0051cedc
    SAHF                                ; 0051cede
    JBE 0x0051d075                      ; 0051cedf
        ;   XREF to: 0051d075 (CONDITIONAL_JUMP)  ; LAB_0051d075
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051cee5
    MOV ECX,dword ptr [0x00661388]      ; 0051cee9 | g_InfiniteCollapseCost
    MOV dword ptr [EAX + 0x8],ECX       ; 0051ceef
    MOV ECX,dword ptr [0x0066138c]      ; 0051cef2 | g_InfiniteCollapseCost+4
    MOV dword ptr [EAX + 0xc],ECX       ; 0051cef8
    MOV dword ptr [EAX + 0x10],0x0      ; 0051cefb
    CMP EBX,0x3                         ; 0051cf02
    JNZ 0x0051d075                      ; 0051cf05
        ;   XREF to: 0051d075 (CONDITIONAL_JUMP)  ; LAB_0051d075
    MOV EBX,0x1                         ; 0051cf0b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0051cf10
    PUSH ESI                            ; 0051cf13
        ;   Label: LAB_0051cf13
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051cf14
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0051cf19
    TEST EAX,EAX                        ; 0051cf1c
    JL 0x0051cf2a                       ; 0051cf1e
        ;   XREF to: 0051cf2a (CONDITIONAL_JUMP)  ; LAB_0051cf2a
    CMP EAX,0xa                         ; 0051cf20
    JNZ 0x0051cf13                      ; 0051cf23
        ;   XREF to: 0051cf13 (CONDITIONAL_JUMP)  ; LAB_0051cf13
    DEC EBX                             ; 0051cf25
    TEST EBX,EBX                        ; 0051cf26
    JG 0x0051cf13                       ; 0051cf28
        ;   XREF to: 0051cf13 (CONDITIONAL_JUMP)  ; LAB_0051cf13
    CMP dword ptr [ESP + 0x20],0x0      ; 0051cf2a
        ;   Label: LAB_0051cf2a
    JZ 0x0051cf65                       ; 0051cf2f
        ;   XREF to: 0051cf65 (CONDITIONAL_JUMP)  ; LAB_0051cf65
    MOV EDX,dword ptr [ESP + 0x24]      ; 0051cf31
    MOV EAX,dword ptr [EDI + 0x48]      ; 0051cf35
    ADD EAX,EDX                         ; 0051cf38
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051cf3a
    MOV EAX,dword ptr [EAX]             ; 0051cf3e
    CMP EAX,dword ptr [EDX]             ; 0051cf40
    JZ 0x0051cf4a                       ; 0051cf42
        ;   XREF to: 0051cf4a (CONDITIONAL_JUMP)  ; LAB_0051cf4a
    XOR EBX,EBX                         ; 0051cf44
    MOV dword ptr [ESP + 0x20],EBX      ; 0051cf46
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051cf4a
        ;   Label: LAB_0051cf4a
    MOV EAX,dword ptr [EDI + 0x48]      ; 0051cf4e
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051cf51
    ADD EAX,ESI                         ; 0051cf55
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051cf57
    CMP ECX,dword ptr [EAX + 0x4]       ; 0051cf5a
    JZ 0x0051cf65                       ; 0051cf5d
        ;   XREF to: 0051cf65 (CONDITIONAL_JUMP)  ; LAB_0051cf65
    XOR EBX,EBX                         ; 0051cf5f
    MOV dword ptr [ESP + 0x20],EBX      ; 0051cf61
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051cf65
        ;   Label: LAB_0051cf65
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051cf69
    MOV ECX,dword ptr [ESP + 0x10]      ; 0051cf6d
    MOV EBX,dword ptr [ESP + 0x24]      ; 0051cf71
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0051cf75
    ADD EAX,0xf0                        ; 0051cf79
    ADD EDX,0xf0                        ; 0051cf7e
    ADD ECX,0xf0                        ; 0051cf84
    ADD EBX,0xf0                        ; 0051cf8a
    INC ESI                             ; 0051cf90
    MOV dword ptr [ESP + 0x14],EAX      ; 0051cf91
    MOV dword ptr [ESP + 0x18],EDX      ; 0051cf95
    MOV dword ptr [ESP + 0x10],ECX      ; 0051cf99
    MOV dword ptr [ESP + 0x24],EBX      ; 0051cf9d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051cfa1
    MOV dword ptr [ESP + 0x1c],ESI      ; 0051cfa5
    CMP ESI,EDX                         ; 0051cfa9
    JL 0x0051ce9b                       ; 0051cfab
        ;   XREF to: 0051ce9b (CONDITIONAL_JUMP)  ; LAB_0051ce9b
    CMP dword ptr [ESP + 0x20],0x0      ; 0051cfb1
        ;   Label: LAB_0051cfb1
    JZ 0x0051d0a5                       ; 0051cfb6
        ;   XREF to: 0051d0a5 (CONDITIONAL_JUMP)  ; LAB_0051d0a5
    MOV EDX,dword ptr [EDI + 0x44]      ; 0051cfbc
    XOR EAX,EAX                         ; 0051cfbf
    TEST EDX,EDX                        ; 0051cfc1
    JLE 0x0051d010                      ; 0051cfc3
        ;   XREF to: 0051d010 (CONDITIONAL_JUMP)  ; LAB_0051d010
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051cfc5
    IMUL ESI,EAX,0xf0                   ; 0051cfc9
        ;   Label: LAB_0051cfc9
    MOV EDX,dword ptr [EDI + 0x48]      ; 0051cfcf
    MOV ECX,dword ptr [EBX + 0x8]       ; 0051cfd2
    MOV dword ptr [EDX + ESI*0x1 + 0x8],ECX ; 0051cfd5
    MOV ECX,dword ptr [EBX + 0xc]       ; 0051cfd9
    MOV dword ptr [EDX + ESI*0x1 + 0xc],ECX ; 0051cfdc
    MOV EDX,dword ptr [EDI + 0x48]      ; 0051cfe0
    MOV ECX,dword ptr [EBX + 0x10]      ; 0051cfe3
    MOV dword ptr [EDX + ESI*0x1 + 0x10],ECX ; 0051cfe6
    MOV EDX,dword ptr [EDI + 0x48]      ; 0051cfea
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0x0 ; 0051cfed
    INC EAX                             ; 0051cff5
    MOV EDX,dword ptr [EDI + 0x44]      ; 0051cff6
    ADD EBX,0xf0                        ; 0051cff9
    CMP EAX,EDX                         ; 0051cfff
    JL 0x0051cfc9                       ; 0051d001
        ;   XREF to: 0051cfc9 (CONDITIONAL_JUMP)  ; LAB_0051cfc9
    LEA EAX,[EAX]                       ; 0051d003
    LEA EDX,[EDX]                       ; 0051d009
    NOP                                 ; 0051d00f
    MOV ECX,dword ptr [EDI + 0x44]      ; 0051d010
        ;   Label: LAB_0051d010
    XOR EBX,EBX                         ; 0051d013
    TEST ECX,ECX                        ; 0051d015
    JLE 0x0051d030                      ; 0051d017
        ;   XREF to: 0051d030 (CONDITIONAL_JUMP)  ; LAB_0051d030
    PUSH 0x1                            ; 0051d019
        ;   Label: LAB_0051d019
    PUSH EBX                            ; 0051d01b
    PUSH EDI                            ; 0051d01c
    CALL shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000 ; 0051d01d
        ;   XREF to: 00516000 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_evaluateEdgeCollapse_FUN_00516000(CLodMesh * this_ptr, int edge_index, int full_check)
    INC EBX                             ; 0051d022
    MOV ESI,dword ptr [EDI + 0x44]      ; 0051d023
    ADD ESP,0xc                         ; 0051d026
    CMP EBX,ESI                         ; 0051d029
    JL 0x0051d019                       ; 0051d02b
        ;   XREF to: 0051d019 (CONDITIONAL_JUMP)  ; LAB_0051d019
    LEA EAX,[EAX]                       ; 0051d02d
    PUSH 0x141f                         ; 0051d030
        ;   Label: LAB_0051d030
    PUSH 0x638098                       ; 0051d035 | = "..\\shape\\meshlod.cpp"
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051d03a
    PUSH ESI                            ; 0051d03e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0051d03f
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 0051d044
    MOV ESP,EBP                         ; 0051d047
    POP EBP                             ; 0051d049
    POP EDI                             ; 0051d04a
    POP ESI                             ; 0051d04b
    POP EBX                             ; 0051d04c
    RET                                 ; 0051d04d
    MOV ESI,0x637fed                    ; 0051d04e | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051d04e
    MOV EAX,0x13e5                      ; 0051d053
    PUSH 0x638002                       ; 0051d058 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],ESI      ; 0051d05d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051d063 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d068
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051d06d
    JMP 0x0051ce46                      ; 0051d070
        ;   XREF to: 0051ce46 (UNCONDITIONAL_JUMP)  ; LAB_0051ce46
    CMP EDX,0x4                         ; 0051d075
        ;   Label: LAB_0051d075
    JZ 0x0051cf2a                       ; 0051d078
        ;   XREF to: 0051cf2a (CONDITIONAL_JUMP)  ; LAB_0051cf2a
    MOV ESI,0x63801f                    ; 0051d07e | = "..\\shape\\meshlod.cpp"
    MOV EAX,0x13fa                      ; 0051d083
    PUSH 0x638034                       ; 0051d088 | = "LodMesh::eqLoad - file is corrupt."
    MOV dword ptr [0x02f0ca48],ESI      ; 0051d08d | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0051d093 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d098
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051d09d
    JMP 0x0051cf2a                      ; 0051d0a0
        ;   XREF to: 0051cf2a (UNCONDITIONAL_JUMP)  ; LAB_0051cf2a
    MOV EBX,0x638057                    ; 0051d0a5 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051d0a5
    MOV ESI,0x1419                      ; 0051d0aa
    PUSH 0x63806c                       ; 0051d0af | = "LodMesh::eqLoad - EQ is not not up to..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0051d0b4 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0051d0ba | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051d0c0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051d0c5
    PUSH EDI                            ; 0051d0c8
    CALL shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710 ; 0051d0c9
        ;   XREF to: 00519710 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_computeAllEdgeCollapseCosts_FUN_00519710(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051d0ce
    JMP 0x0051d030                      ; 0051d0d1
        ;   XREF to: 0051d030 (UNCONDITIONAL_JUMP)  ; LAB_0051d030

