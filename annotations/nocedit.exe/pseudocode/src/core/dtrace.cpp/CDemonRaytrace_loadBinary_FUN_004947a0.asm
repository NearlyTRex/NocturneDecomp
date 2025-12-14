; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0(CDemonRaytrace * this_ptr, FILE * file_handle)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0 at 00494e1e
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0062274d
;   TerminatedCString s_CDemonRaytrace_loadBinar_00622760
;   TerminatedCString s_core_dtrace_cpp_0062278d
;   TerminatedCString s_CDemonRaytrace_loadBinar_006227a0
;   TerminatedCString s_core_dtrace_cpp_006227d6
;   TerminatedCString s_core_dtrace_cpp_006227e9
;   TerminatedCString s_core_dtrace_cpp_006227fc
;   TerminatedCString s_CDemonRaytrace_loadBinar_0062280f
;   TerminatedCString s_core_dtrace_cpp_0062283b
;   TerminatedCString s_core_dtrace_cpp_0062284e
;   TerminatedCString s_core_dtrace_cpp_00622861
;   TerminatedCString s_Out_of_memory_for_cube_m_00622874
;   TerminatedCString s_Converting_GEO_file_to_v_006228a9
;   TerminatedCString s_core_dtrace_cpp_006228cb
;   TerminatedCString s_CDemonRaytrace_loadBinar_006228de
;   ... and 8 more
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_load_FUN_00457530
;   core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
;   core_dpart.cpp_CDemonPart_ctor_FUN_00482110
;   core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270
;   core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380
;   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
;   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
;   core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
;   core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
;   core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400
;   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
;   core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;   ... and 6 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004947a0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0
    PUSH ESI                            ; 004947a1
    PUSH EDI                            ; 004947a2
    PUSH EBP                            ; 004947a3
    SUB ESP,0x40                        ; 004947a4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004947a7
    XOR EDX,EDX                         ; 004947ab
    PUSH EBP                            ; 004947ad
    MOV dword ptr [ESP + 0x3c],EDX      ; 004947ae
    CALL core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400 ; 004947b2
        ;   XREF to: 00494400 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeNewCubeList_FUN_00494400(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 004947b7
    MOV EBX,dword ptr [ESP + 0x58]      ; 004947ba
    PUSH EBX                            ; 004947be
    PUSH 0x1                            ; 004947bf
    PUSH 0x4                            ; 004947c1
    LEA EAX,[ESP + 0x30]                ; 004947c3
    XOR ECX,ECX                         ; 004947c7
    PUSH EAX                            ; 004947c9
    MOV dword ptr [0x02cee5ac],ECX      ; 004947ca | DAT_02cee5ac
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004947d0
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 004947d5
    CMP dword ptr [ESP + 0x24],0x1      ; 004947d8
    JL 0x004948ff                       ; 004947dd
        ;   XREF to: 004948ff (CONDITIONAL_JUMP)  ; LAB_004948ff
    MOV EAX,dword ptr [ESP + 0x24]      ; 004947e3
        ;   Label: LAB_004947e3
    CMP EAX,dword ptr [0x006789f0]      ; 004947e7 | g_GeoFileFormatVersion
    JLE 0x00494812                      ; 004947ed
        ;   XREF to: 00494812 (CONDITIONAL_JUMP)  ; LAB_00494812
    MOV ECX,0x62278d                    ; 004947ef | = "..\\core\\dtrace.cpp"
    MOV EBX,0x14b                       ; 004947f4
    PUSH 0x6227a0                       ; 004947f9 | = "CDemonRaytrace::loadBinary - file is ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004947fe | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00494804 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0049480a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049480f
    MOV ESI,dword ptr [ESP + 0x58]      ; 00494812
        ;   Label: LAB_00494812
    PUSH ESI                            ; 00494816
    PUSH 0x1                            ; 00494817
    PUSH 0x4                            ; 00494819
    LEA EAX,[EBP + 0x40]                ; 0049481b
    PUSH EAX                            ; 0049481e
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049481f
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494824
    PUSH ESI                            ; 00494827
    PUSH 0x1                            ; 00494828
    PUSH 0x4                            ; 0049482a
    LEA EAX,[EBP + 0x44]                ; 0049482c
    PUSH EAX                            ; 0049482f
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494830
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494835
    PUSH ESI                            ; 00494838
    PUSH 0x1                            ; 00494839
    PUSH 0x4                            ; 0049483b
    LEA EAX,[EBP + 0x48]                ; 0049483d
    PUSH EAX                            ; 00494840
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494841
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494846
    PUSH ESI                            ; 00494849
    PUSH 0x1                            ; 0049484a
    PUSH 0xc                            ; 0049484c
    LEA EAX,[EBP + 0x10]                ; 0049484e
    PUSH EAX                            ; 00494851
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494852
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494857
    PUSH ESI                            ; 0049485a
    PUSH 0x1                            ; 0049485b
    PUSH 0xc                            ; 0049485d
    LEA EAX,[EBP + 0x1c]                ; 0049485f
    PUSH EAX                            ; 00494862
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494863
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494868
    PUSH ESI                            ; 0049486b
    PUSH 0x1                            ; 0049486c
    PUSH 0xc                            ; 0049486e
    LEA EBX,[EBP + 0x28]                ; 00494870
    PUSH EBX                            ; 00494873
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494874
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    FLD float ptr [EBX]                 ; 00494879
    FDIV float ptr [0x0062290e]         ; 0049487b | FLOAT_0062290e
    ADD ESP,0x10                        ; 00494881
    FSTP float ptr [ESP + 0x18]         ; 00494884
    FLD float ptr [0x00622912]          ; 00494888 | FLOAT_00622912
    FLD float ptr [EBX + 0x4]           ; 0049488e
    FMUL ST1                            ; 00494891
    FSTP float ptr [ESP + 0x1c]         ; 00494893
    FMUL float ptr [EBX + 0x8]          ; 00494897
    LEA EAX,[ESP + 0x18]                ; 0049489a
    LEA EDX,[EBP + 0x34]                ; 0049489e
    FSTP float ptr [ESP + 0x20]         ; 004948a1
    CMP EDX,EAX                         ; 004948a5
    JZ 0x004948bd                       ; 004948a7
        ;   XREF to: 004948bd (CONDITIONAL_JUMP)  ; LAB_004948bd
    MOV EAX,dword ptr [ESP + 0x18]      ; 004948a9
    MOV dword ptr [EDX],EAX             ; 004948ad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004948af
    MOV dword ptr [EDX + 0x4],EAX       ; 004948b3
    MOV EAX,dword ptr [ESP + 0x20]      ; 004948b6
    MOV dword ptr [EDX + 0x8],EAX       ; 004948ba
    CMP dword ptr [ESP + 0x24],0x4      ; 004948bd
        ;   Label: LAB_004948bd
    JL 0x00494926                       ; 004948c2
        ;   XREF to: 00494926 (CONDITIONAL_JUMP)  ; LAB_00494926
    PUSH EBP                            ; 004948c4
    CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 ; 004948c5
        ;   XREF to: 00494380 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace * this_ptr)
    XOR EDI,EDI                         ; 004948ca
    XOR ESI,ESI                         ; 004948cc
    ADD ESP,0x4                         ; 004948ce
    MOV ECX,dword ptr [EBP + 0x44]      ; 004948d1
        ;   Label: LAB_004948d1
    MOV EAX,dword ptr [EBP + 0x40]      ; 004948d4
    IMUL EAX,ECX                        ; 004948d7
    IMUL EAX,dword ptr [EBP + 0x48]     ; 004948da
    CMP EDI,EAX                         ; 004948de
    JGE 0x00494d98                      ; 004948e0
        ;   XREF to: 00494d98 (CONDITIONAL_JUMP)  ; LAB_00494d98
    MOV EAX,dword ptr [ESP + 0x58]      ; 004948e6
    PUSH EAX                            ; 004948ea
    MOV EAX,dword ptr [EBP + 0x50]      ; 004948eb
    ADD EAX,ESI                         ; 004948ee
    PUSH EAX                            ; 004948f0
    INC EDI                             ; 004948f1
    CALL core_dcube.cpp_CDemonCube_load_FUN_00457530 ; 004948f2
        ;   XREF to: 00457530 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_load_FUN_00457530(CDemonCube * this_ptr, FILE * file_handle)
    ADD ESI,0x34                        ; 004948f7
    ADD ESP,0x8                         ; 004948fa
    JMP 0x004948d1                      ; 004948fd
        ;   XREF to: 004948d1 (UNCONDITIONAL_JUMP)  ; LAB_004948d1
    MOV EDI,0x62274d                    ; 004948ff | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_004948ff
    MOV EAX,0x148                       ; 00494904
    PUSH 0x622760                       ; 00494909 | = "CDemonRaytrace::loadBinary - invalid ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 0049490e | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00494914 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00494919
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049491e
    JMP 0x004947e3                      ; 00494921
        ;   XREF to: 004947e3 (UNCONDITIONAL_JUMP)  ; LAB_004947e3
    PUSH EBP                            ; 00494926
        ;   Label: LAB_00494926
    CALL core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270 ; 00494927
        ;   XREF to: 00494270 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00494270(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0049492c
    CMP dword ptr [ESP + 0x24],0x3      ; 0049492f
    JGE 0x00494b94                      ; 00494934
        ;   XREF to: 00494b94 (CONDITIONAL_JUMP)  ; LAB_00494b94
    XOR EAX,EAX                         ; 0049493a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0049493c
    MOV dword ptr [ESP + 0x34],EAX      ; 00494940
    MOV EBX,dword ptr [EBP + 0x44]      ; 00494944
        ;   Label: LAB_00494944
    MOV EAX,dword ptr [EBP + 0x40]      ; 00494947
    IMUL EAX,EBX                        ; 0049494a
    IMUL EAX,dword ptr [EBP + 0x48]     ; 0049494d
    CMP EAX,dword ptr [ESP + 0x34]      ; 00494951
    JLE 0x00494ac7                      ; 00494955
        ;   XREF to: 00494ac7 (CONDITIONAL_JUMP)  ; LAB_00494ac7
    MOV EDX,dword ptr [ESP + 0x58]      ; 0049495b
    PUSH EDX                            ; 0049495f
    PUSH 0x1                            ; 00494960
    MOV EAX,dword ptr [ESP + 0x34]      ; 00494962
    MOV EDI,dword ptr [EBP + 0x4c]      ; 00494966
    PUSH 0x4                            ; 00494969
    ADD EDI,EAX                         ; 0049496b
    PUSH EDI                            ; 0049496d
    CALL crt_stdio.c_fread_FUN_005fd990 ; 0049496e
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV ECX,dword ptr [EDI]             ; 00494973
    ADD ESP,0x10                        ; 00494975
    TEST ECX,ECX                        ; 00494978
    JZ 0x00494a50                       ; 0049497a
        ;   XREF to: 00494a50 (CONDITIONAL_JUMP)  ; LAB_00494a50
    MOV EBX,ECX                         ; 00494980
    IMUL EAX,ECX,0x38                   ; 00494982
    PUSH 0x172                          ; 00494985
    PUSH 0x6227d6                       ; 0049498a | = "..\\core\\dtrace.cpp"
    ADD EAX,0x4                         ; 0049498f
    PUSH EAX                            ; 00494992
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00494993
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00494998
    TEST EAX,EAX                        ; 0049499b
    JZ 0x004949a5                       ; 0049499d
        ;   XREF to: 004949a5 (CONDITIONAL_JUMP)  ; LAB_004949a5
    ADD EAX,0x4                         ; 0049499f
    MOV dword ptr [EAX + -0x4],EBX      ; 004949a2
    PUSH 0x173                          ; 004949a5
        ;   Label: LAB_004949a5
    PUSH 0x6227e9                       ; 004949aa | = "..\\core\\dtrace.cpp"
    MOV EBX,dword ptr [EDI]             ; 004949af
    PUSH EBX                            ; 004949b1
    MOV dword ptr [EDI + 0x4],EAX       ; 004949b2
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 004949b5
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004949ba
    MOV ESI,dword ptr [EDI + 0x4]       ; 004949bd
    MOV dword ptr [EDI + 0x54],EAX      ; 004949c0
    TEST ESI,ESI                        ; 004949c3
    JNZ 0x00494aa7                      ; 004949c5
        ;   XREF to: 00494aa7 (CONDITIONAL_JUMP)  ; LAB_00494aa7
    MOV EDX,0x6227fc                    ; 004949cb | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_004949cb
    MOV ECX,0x175                       ; 004949d0
    PUSH 0x62280f                       ; 004949d5 | = "CDemonRaytrace::loadBinary - out of m..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004949da | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004949e0 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004949e6
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004949eb
    MOV EBX,dword ptr [EDI]             ; 004949ee
        ;   Label: LAB_004949ee
    XOR ESI,ESI                         ; 004949f0
    TEST EBX,EBX                        ; 004949f2
    JLE 0x00494a15                      ; 004949f4
        ;   XREF to: 00494a15 (CONDITIONAL_JUMP)  ; LAB_00494a15
    XOR EBX,EBX                         ; 004949f6
    MOV EAX,dword ptr [ESP + 0x58]      ; 004949f8
        ;   Label: LAB_004949f8
    PUSH EAX                            ; 004949fc
    MOV EAX,dword ptr [EDI + 0x4]       ; 004949fd
    ADD EAX,EBX                         ; 00494a00
    PUSH EAX                            ; 00494a02
    INC ESI                             ; 00494a03
    CALL core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0 ; 00494a04
        ;   XREF to: 0049a5a0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0(CDemonTriangle * this_ptr, FILE * file_handle)
    ADD EBX,0x38                        ; 00494a09
    MOV EDX,dword ptr [EDI]             ; 00494a0c
    ADD ESP,0x8                         ; 00494a0e
    CMP ESI,EDX                         ; 00494a11
    JL 0x004949f8                       ; 00494a13
        ;   XREF to: 004949f8 (CONDITIONAL_JUMP)  ; LAB_004949f8
    PUSH 0x17a                          ; 00494a15
        ;   Label: LAB_00494a15
    PUSH 0x62283b                       ; 00494a1a | = "..\\core\\dtrace.cpp"
    PUSH 0x388                          ; 00494a1f
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00494a24
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00494a29
    TEST EAX,EAX                        ; 00494a2c
    JZ 0x00494a39                       ; 00494a2e
        ;   XREF to: 00494a39 (CONDITIONAL_JUMP)  ; LAB_00494a39
    PUSH EAX                            ; 00494a30
    CALL core_dpart.cpp_CDemonPart_ctor_FUN_00482110 ; 00494a31
        ;   XREF to: 00482110 (UNCONDITIONAL_CALL)  ; CDemonPart * core_dpart.cpp_CDemonPart_ctor_FUN_00482110(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00494a36
    MOV ECX,dword ptr [ESP + 0x58]      ; 00494a39
        ;   Label: LAB_00494a39
    PUSH ECX                            ; 00494a3d
    MOV EBX,dword ptr [ESP + 0x38]      ; 00494a3e
    PUSH EBX                            ; 00494a42
    PUSH EAX                            ; 00494a43
    PUSH EBP                            ; 00494a44
    MOV dword ptr [EDI + 0xc],EAX       ; 00494a45
    CALL core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710 ; 00494a48
        ;   XREF to: 00494710 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710(CDemonRaytrace * this_ptr, void * callback_data, int linear_index, void * user_data)
    ADD ESP,0x10                        ; 00494a4d
    MOV EAX,dword ptr [ESP + 0x58]      ; 00494a50
        ;   Label: LAB_00494a50
    PUSH EAX                            ; 00494a54
    PUSH 0x1                            ; 00494a55
    PUSH 0x40                           ; 00494a57
    LEA EAX,[EDI + 0x14]                ; 00494a59
    PUSH EAX                            ; 00494a5c
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494a5d
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494a62
    CMP dword ptr [ESP + 0x24],0x2      ; 00494a65
    JL 0x00494ab4                       ; 00494a6a
        ;   XREF to: 00494ab4 (CONDITIONAL_JUMP)  ; LAB_00494ab4
    MOV ESI,dword ptr [ESP + 0x58]      ; 00494a6c
    PUSH ESI                            ; 00494a70
    PUSH 0x1                            ; 00494a71
    MOV EAX,dword ptr [EDI]             ; 00494a73
    PUSH EAX                            ; 00494a75
    MOV EDX,dword ptr [EDI + 0x54]      ; 00494a76
    PUSH EDX                            ; 00494a79
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494a7a
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494a7f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00494a82
        ;   Label: LAB_00494a82
    MOV ESI,dword ptr [ESP + 0x34]      ; 00494a86
    MOV ECX,dword ptr [ESP + 0x38]      ; 00494a8a
    MOV EAX,dword ptr [EDI]             ; 00494a8e
    ADD EBX,0x58                        ; 00494a90
    INC ESI                             ; 00494a93
    ADD ECX,EAX                         ; 00494a94
    MOV dword ptr [ESP + 0x2c],EBX      ; 00494a96
    MOV dword ptr [ESP + 0x34],ESI      ; 00494a9a
    MOV dword ptr [ESP + 0x38],ECX      ; 00494a9e
    JMP 0x00494944                      ; 00494aa2
        ;   XREF to: 00494944 (UNCONDITIONAL_JUMP)  ; LAB_00494944
    TEST EAX,EAX                        ; 00494aa7
        ;   Label: LAB_00494aa7
    JZ 0x004949cb                       ; 00494aa9
        ;   XREF to: 004949cb (CONDITIONAL_JUMP)  ; LAB_004949cb
    JMP 0x004949ee                      ; 00494aaf
        ;   XREF to: 004949ee (UNCONDITIONAL_JUMP)  ; LAB_004949ee
    MOV ECX,dword ptr [EDI]             ; 00494ab4
        ;   Label: LAB_00494ab4
    PUSH ECX                            ; 00494ab6
    PUSH 0x0                            ; 00494ab7
    MOV EBX,dword ptr [EDI + 0x54]      ; 00494ab9
    PUSH EBX                            ; 00494abc
    CALL crt_memory.c_memset_FUN_005fde40 ; 00494abd
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00494ac2
    JMP 0x00494a82                      ; 00494ac5
        ;   XREF to: 00494a82 (UNCONDITIONAL_JUMP)  ; LAB_00494a82
    PUSH EBP                            ; 00494ac7
        ;   Label: LAB_00494ac7
    CALL core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 ; 00494ac8
        ;   XREF to: 00494450 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00494acd
    PUSH EBP                            ; 00494ad0
        ;   Label: LAB_00494ad0
    CALL core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380 ; 00494ad1
        ;   XREF to: 00494380 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocNewCubeList_FUN_00494380(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00494ad6
    PUSH 0x6228a9                       ; 00494ad9 | = "Converting .GEO file to version 4"
    MOV EDI,dword ptr [0x00678a60]      ; 00494ade | g_CEditorToolsPtr
    PUSH EDI                            ; 00494ae4 | g_CEditorToolsPtr
    XOR EBX,EBX                         ; 00494ae5
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00494ae7
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 00494aec
    LEA EAX,[EBP + 0x28]                ; 00494aef
    XOR EDI,EDI                         ; 00494af2
    MOV dword ptr [ESP + 0x28],EAX      ; 00494af4
    MOV dword ptr [ESP + 0x30],EBX      ; 00494af8
    MOV EDX,dword ptr [EBP + 0x44]      ; 00494afc
        ;   Label: LAB_00494afc
    MOV EAX,dword ptr [EBP + 0x40]      ; 00494aff
    IMUL EAX,EDX                        ; 00494b02
    IMUL EAX,dword ptr [EBP + 0x48]     ; 00494b05
    CMP EBX,EAX                         ; 00494b09
    JGE 0x00494d6c                      ; 00494b0b
        ;   XREF to: 00494d6c (CONDITIONAL_JUMP)  ; LAB_00494d6c
    PUSH EBX                            ; 00494b11
    LEA EAX,[ESP + 0x10]                ; 00494b12
    PUSH EAX                            ; 00494b16
    PUSH EBP                            ; 00494b17
    MOV ESI,dword ptr [EBP + 0x4c]      ; 00494b18
    CALL core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0 ; 00494b1b
        ;   XREF to: 00499ba0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0(CDemonRaytrace * this_ptr, CVector3f * output_position, int cube_index)
    ADD ESP,0xc                         ; 00494b20
    ADD ESI,EDI                         ; 00494b23
    MOV EAX,dword ptr [ESP + 0x28]      ; 00494b25
    FLD float ptr [ESP + 0xc]           ; 00494b29
    FADD float ptr [EAX]                ; 00494b2d
    FLD float ptr [ESP + 0x10]          ; 00494b2f
    FXCH                                ; 00494b33
    FSTP float ptr [ESP]                ; 00494b35
    FADD float ptr [EAX + 0x4]          ; 00494b38
    FLD float ptr [ESP + 0x14]          ; 00494b3b
    FXCH                                ; 00494b3f
    FSTP float ptr [ESP + 0x4]          ; 00494b41
    FADD float ptr [EAX + 0x8]          ; 00494b45
    LEA EAX,[ESI + 0x14]                ; 00494b48
    PUSH EAX                            ; 00494b4b
    FSTP float ptr [ESP + 0xc]          ; 00494b4c
    MOV EAX,dword ptr [ESI + 0x54]      ; 00494b50
    PUSH EAX                            ; 00494b53
    LEA EAX,[ESP + 0x8]                 ; 00494b54
    PUSH EAX                            ; 00494b58
    LEA EAX,[ESP + 0x18]                ; 00494b59
    PUSH EAX                            ; 00494b5d
    MOV EDX,dword ptr [ESI]             ; 00494b5e
    MOV ECX,dword ptr [ESI + 0x4]       ; 00494b60
    PUSH EDX                            ; 00494b63
    MOV ESI,dword ptr [ESP + 0x44]      ; 00494b64
    MOV EAX,dword ptr [EBP + 0x50]      ; 00494b68
    PUSH ECX                            ; 00494b6b
    ADD EAX,ESI                         ; 00494b6c
    PUSH EAX                            ; 00494b6e
    CALL core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 ; 00494b6f
        ;   XREF to: 004570a0 (UNCONDITIONAL_CALL)  ; void core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube * this_ptr, void * triangle_data, int triangle_count, CVector3f * min_bounds, ...)
    ADD ESP,0x1c                        ; 00494b74
    TEST BL,0xf                         ; 00494b77
    JZ 0x00494d1d                       ; 00494b7a
        ;   XREF to: 00494d1d (CONDITIONAL_JUMP)  ; LAB_00494d1d
    MOV EAX,dword ptr [ESP + 0x30]      ; 00494b80
    ADD EDI,0x58                        ; 00494b84
    ADD EAX,0x34                        ; 00494b87
    INC EBX                             ; 00494b8a
    MOV dword ptr [ESP + 0x30],EAX      ; 00494b8b
    JMP 0x00494afc                      ; 00494b8f
        ;   XREF to: 00494afc (UNCONDITIONAL_JUMP)  ; LAB_00494afc
    XOR EDI,EDI                         ; 00494b94
        ;   Label: LAB_00494b94
    XOR ESI,ESI                         ; 00494b96
    MOV EDX,dword ptr [EBP + 0x44]      ; 00494b98
        ;   Label: LAB_00494b98
    MOV EAX,dword ptr [EBP + 0x40]      ; 00494b9b
    IMUL EAX,EDX                        ; 00494b9e
    IMUL EAX,dword ptr [EBP + 0x48]     ; 00494ba1
    CMP ESI,EAX                         ; 00494ba5
    JGE 0x00494c6b                      ; 00494ba7
        ;   XREF to: 00494c6b (CONDITIONAL_JUMP)  ; LAB_00494c6b
    MOV EAX,dword ptr [ESP + 0x58]      ; 00494bad
    PUSH EAX                            ; 00494bb1
    PUSH 0x1                            ; 00494bb2
    MOV EBX,dword ptr [EBP + 0x4c]      ; 00494bb4
    PUSH 0x4                            ; 00494bb7
    ADD EBX,EDI                         ; 00494bb9
    PUSH EBX                            ; 00494bbb
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494bbc
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV EDX,dword ptr [EBX]             ; 00494bc1
    ADD ESP,0x10                        ; 00494bc3
    TEST EDX,EDX                        ; 00494bc6
    JLE 0x00494c52                      ; 00494bc8
        ;   XREF to: 00494c52 (CONDITIONAL_JUMP)  ; LAB_00494c52
    PUSH 0x19a                          ; 00494bce
    PUSH 0x62284e                       ; 00494bd3 | = "..\\core\\dtrace.cpp"
    PUSH 0x388                          ; 00494bd8
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00494bdd
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00494be2
    TEST EAX,EAX                        ; 00494be5
    JZ 0x00494bf2                       ; 00494be7
        ;   XREF to: 00494bf2 (CONDITIONAL_JUMP)  ; LAB_00494bf2
    PUSH EAX                            ; 00494be9
    CALL core_dpart.cpp_CDemonPart_ctor_FUN_00482110 ; 00494bea
        ;   XREF to: 00482110 (UNCONDITIONAL_CALL)  ; CDemonPart * core_dpart.cpp_CDemonPart_ctor_FUN_00482110(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00494bef
    MOV dword ptr [EBX + 0xc],EAX       ; 00494bf2
        ;   Label: LAB_00494bf2
    TEST EAX,EAX                        ; 00494bf5
    JNZ 0x00494c1b                      ; 00494bf7
        ;   XREF to: 00494c1b (CONDITIONAL_JUMP)  ; LAB_00494c1b
    MOV EAX,0x622861                    ; 00494bf9 | = "..\\core\\dtrace.cpp"
    MOV EDX,0x19b                       ; 00494bfe
    PUSH 0x622874                       ; 00494c03 | = "Out of memory for cube model loading ..."
    MOV [0x02f0ca48],EAX                ; 00494c08 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00494c0d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00494c13
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00494c18
    MOV ECX,dword ptr [ESP + 0x58]      ; 00494c1b
        ;   Label: LAB_00494c1b
    PUSH ECX                            ; 00494c1f
    PUSH ESI                            ; 00494c20
    MOV EAX,dword ptr [EBX + 0xc]       ; 00494c21
    PUSH EAX                            ; 00494c24
    PUSH EBP                            ; 00494c25
    CALL core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710 ; 00494c26
        ;   XREF to: 00494710 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_convertLinearIndexToWorldPosAndCallback_FUN_00494710(CDemonRaytrace * this_ptr, void * callback_data, int linear_index, void * user_data)
    ADD ESP,0x10                        ; 00494c2b
    MOV EDX,dword ptr [ESP + 0x58]      ; 00494c2e
    PUSH EDX                            ; 00494c32
    PUSH 0x1                            ; 00494c33
    PUSH 0x40                           ; 00494c35
    LEA EAX,[EBX + 0x14]                ; 00494c37
    PUSH EAX                            ; 00494c3a
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494c3b
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494c40
    MOV EAX,dword ptr [EBX]             ; 00494c43
    ADD dword ptr [ESP + 0x38],EAX      ; 00494c45
    INC ESI                             ; 00494c49
    ADD EDI,0x58                        ; 00494c4a
    JMP 0x00494b98                      ; 00494c4d
        ;   XREF to: 00494b98 (UNCONDITIONAL_JUMP)  ; LAB_00494b98
    PUSH 0x40                           ; 00494c52
        ;   Label: LAB_00494c52
    PUSH 0x0                            ; 00494c54
    ADD EBX,0x14                        ; 00494c56
    PUSH EBX                            ; 00494c59
    CALL crt_memory.c_memset_FUN_005fde40 ; 00494c5a
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00494c5f
    INC ESI                             ; 00494c62
    ADD EDI,0x58                        ; 00494c63
    JMP 0x00494b98                      ; 00494c66
        ;   XREF to: 00494b98 (UNCONDITIONAL_JUMP)  ; LAB_00494b98
    MOV EAX,dword ptr [ESP + 0x38]      ; 00494c6b
        ;   Label: LAB_00494c6b
    PUSH EBP                            ; 00494c6f
    XOR ESI,ESI                         ; 00494c70
    MOV dword ptr [EBP + 0x4],EAX       ; 00494c72
    CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600 ; 00494c75
        ;   XREF to: 00494600 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace * this_ptr)
    MOV EBX,dword ptr [EBP + 0x4]       ; 00494c7a
    ADD ESP,0x4                         ; 00494c7d
    TEST EBX,EBX                        ; 00494c80
    JLE 0x00494cb0                      ; 00494c82
        ;   XREF to: 00494cb0 (CONDITIONAL_JUMP)  ; LAB_00494cb0
    MOV EDI,dword ptr [ESP + 0x58]      ; 00494c84
    XOR EBX,EBX                         ; 00494c88
    MOV EAX,dword ptr [EBP + 0x8]       ; 00494c8a
        ;   Label: LAB_00494c8a
    PUSH EDI                            ; 00494c8d
    ADD EAX,EBX                         ; 00494c8e
    PUSH EAX                            ; 00494c90
    INC ESI                             ; 00494c91
    CALL core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0 ; 00494c92
        ;   XREF to: 0049a5a0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0(CDemonTriangle * this_ptr, FILE * file_handle)
    ADD EBX,0x38                        ; 00494c97
    MOV EAX,dword ptr [EBP + 0x4]       ; 00494c9a
    ADD ESP,0x8                         ; 00494c9d
    CMP ESI,EAX                         ; 00494ca0
    JL 0x00494c8a                       ; 00494ca2
        ;   XREF to: 00494c8a (CONDITIONAL_JUMP)  ; LAB_00494c8a
    LEA EAX,[EAX]                       ; 00494ca4
    LEA EDX,[EDX]                       ; 00494caa
    MOV EDX,dword ptr [ESP + 0x58]      ; 00494cb0
        ;   Label: LAB_00494cb0
    PUSH EDX                            ; 00494cb4
    PUSH 0x1                            ; 00494cb5
    MOV ECX,dword ptr [EBP + 0x4]       ; 00494cb7
    PUSH ECX                            ; 00494cba
    MOV EBX,dword ptr [EBP + 0xc]       ; 00494cbb
    PUSH EBX                            ; 00494cbe
    XOR ESI,ESI                         ; 00494cbf
    XOR EDI,EDI                         ; 00494cc1
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00494cc3
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00494cc8
    XOR EBX,EBX                         ; 00494ccb
    MOV EDX,dword ptr [EBP + 0x44]      ; 00494ccd
        ;   Label: LAB_00494ccd
    MOV EAX,dword ptr [EBP + 0x40]      ; 00494cd0
    IMUL EAX,EDX                        ; 00494cd3
    IMUL EAX,dword ptr [EBP + 0x48]     ; 00494cd6
    CMP ESI,EAX                         ; 00494cda
    JGE 0x00494ad0                      ; 00494cdc
        ;   XREF to: 00494ad0 (CONDITIONAL_JUMP)  ; LAB_00494ad0
    MOV EAX,dword ptr [EBP + 0x4c]      ; 00494ce2
    ADD EAX,EDI                         ; 00494ce5
    CMP dword ptr [EAX],0x0             ; 00494ce7
    JLE 0x00494d09                      ; 00494cea
        ;   XREF to: 00494d09 (CONDITIONAL_JUMP)  ; LAB_00494d09
    IMUL EDX,EBX,0x38                   ; 00494cec
    MOV ECX,dword ptr [EBP + 0x8]       ; 00494cef
    ADD ECX,EDX                         ; 00494cf2
    MOV dword ptr [EAX + 0x4],ECX       ; 00494cf4
    MOV EDX,dword ptr [EBP + 0xc]       ; 00494cf7
    MOV ECX,dword ptr [EAX]             ; 00494cfa
    ADD EDX,EBX                         ; 00494cfc
    ADD EBX,ECX                         ; 00494cfe
    MOV dword ptr [EAX + 0x54],EDX      ; 00494d00
    INC ESI                             ; 00494d03
    ADD EDI,0x58                        ; 00494d04
    JMP 0x00494ccd                      ; 00494d07
        ;   XREF to: 00494ccd (UNCONDITIONAL_JUMP)  ; LAB_00494ccd
    MOV dword ptr [EAX + 0x54],0x0      ; 00494d09
        ;   Label: LAB_00494d09
    MOV dword ptr [EAX + 0x4],0x0       ; 00494d10
    INC ESI                             ; 00494d17
    ADD EDI,0x58                        ; 00494d18
    JMP 0x00494ccd                      ; 00494d1b
        ;   XREF to: 00494ccd (UNCONDITIONAL_JUMP)  ; LAB_00494ccd
    MOV EAX,dword ptr [EBP + 0x40]      ; 00494d1d
        ;   Label: LAB_00494d1d
    IMUL EAX,dword ptr [EBP + 0x44]     ; 00494d20
    MOV ECX,dword ptr [EBP + 0x48]      ; 00494d24
    IMUL EAX,ECX                        ; 00494d27
    MOV dword ptr [ESP + 0x3c],EAX      ; 00494d2a
    FILD dword ptr [ESP + 0x3c]         ; 00494d2e
    LEA EAX,[EBX + 0x1]                 ; 00494d32
    SUB ESP,0x4                         ; 00494d35
    MOV dword ptr [ESP + 0x40],EAX      ; 00494d38
    FSTP float ptr [ESP]                ; 00494d3c
    FILD dword ptr [ESP + 0x40]         ; 00494d3f
    SUB ESP,0x4                         ; 00494d43
    MOV ESI,dword ptr [0x00678a60]      ; 00494d46 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00494d4c
    PUSH ESI                            ; 00494d4f | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00494d50
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 00494d55
    MOV EAX,dword ptr [ESP + 0x30]      ; 00494d58
    ADD EDI,0x58                        ; 00494d5c
    ADD EAX,0x34                        ; 00494d5f
    INC EBX                             ; 00494d62
    MOV dword ptr [ESP + 0x30],EAX      ; 00494d63
    JMP 0x00494afc                      ; 00494d67
        ;   XREF to: 00494afc (UNCONDITIONAL_JUMP)  ; LAB_00494afc
    MOV EBX,dword ptr [0x00678a60]      ; 00494d6c | g_CEditorToolsPtr
        ;   Label: LAB_00494d6c
    PUSH EBX                            ; 00494d72 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00494d73
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00494d78
    PUSH EBP                            ; 00494d7b
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0 ; 00494d7c
        ;   XREF to: 004942d0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00494d81
    PUSH EBP                            ; 00494d84
    MOV ESI,0x1                         ; 00494d85
    CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690 ; 00494d8a
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00494d8f
    MOV dword ptr [0x02cee5ac],ESI      ; 00494d92 | DAT_02cee5ac
    MOV EAX,dword ptr [ESP + 0x58]      ; 00494d98
        ;   Label: LAB_00494d98
    TEST byte ptr [EAX + 0xc],0x20      ; 00494d9c
    JNZ 0x00494daa                      ; 00494da0
        ;   XREF to: 00494daa (CONDITIONAL_JUMP)  ; LAB_00494daa
    ADD ESP,0x40                        ; 00494da2
    POP EBP                             ; 00494da5
    POP EDI                             ; 00494da6
    POP ESI                             ; 00494da7
    POP EBX                             ; 00494da8
    RET                                 ; 00494da9
    MOV EDX,0x6228cb                    ; 00494daa | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_00494daa
    MOV ECX,0x1ff                       ; 00494daf
    PUSH 0x6228de                       ; 00494db4 | = "CDemonRaytrace::loadBinary - error re..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00494db9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00494dbf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00494dc5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00494dca
    ADD ESP,0x40                        ; 00494dcd
    POP EBP                             ; 00494dd0
    POP EDI                             ; 00494dd1
    POP ESI                             ; 00494dd2
    POP EBX                             ; 00494dd3
    RET                                 ; 00494dd4

