; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton *this_ptr,_FILE *file_handle)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_load_FUN_00599b10 at 00599b5c
;
; Referenced Globals:
;   TerminatedCString s_d_0064e2f0
;   TerminatedCString s_core_skeleton_cpp_0064e2f4
;   TerminatedCString s_Invalid_skeleton_version_0064e309
;   TerminatedCString s_core_skeleton_cpp_0064e322
;   TerminatedCString s_Old_skeleton_version_d_n_0064e337
;   TerminatedCString s_core_skeleton_cpp_0064e35d
;   TerminatedCString s_Skeleton_version_d_is_ne_0064e372
;   TerminatedCString s_d_d_0064e3c2
;   TerminatedCString s_d_0064e3c9
;   TerminatedCString s_f_f_f_f_0064e3d5
;   TerminatedCString s_f_f_f_0064e3e2
;   TerminatedCString s_f_f_f_0064e3ec
;   TerminatedCString s_core_skeleton_cpp_0064e3f6
;   TerminatedCString s_CSkeleton_loadStream_err_0064e40b
;   TerminatedCString s_f_f_f_0064e437
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_motion.cpp_CMotionList_load_FUN_0052cd70
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
;   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599bb0
        ;   Label: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
    PUSH ESI                            ; 00599bb1
    PUSH EDI                            ; 00599bb2
    PUSH EBP                            ; 00599bb3
    SUB ESP,0x14                        ; 00599bb4
    MOV EDX,dword ptr [ESP + 0x28]      ; 00599bb7
    PUSH EDX                            ; 00599bbb
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 00599bbc
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 00599bc1
    MOV ECX,0xffffffff                  ; 00599bc4
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00599bc9
    MOV dword ptr [ESP],ECX             ; 00599bcd
    PUSH EBX                            ; 00599bd0
        ;   Label: LAB_00599bd0
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599bd1
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599bd6
    TEST EAX,EAX                        ; 00599bd9
    JL 0x00599be2                       ; 00599bdb
        ;   XREF to: 00599be2 (CONDITIONAL_JUMP)  ; LAB_00599be2
    CMP EAX,0xa                         ; 00599bdd
    JNZ 0x00599bd0                      ; 00599be0
        ;   XREF to: 00599bd0 (CONDITIONAL_JUMP)  ; LAB_00599bd0
    MOV EAX,ESP                         ; 00599be2
        ;   Label: LAB_00599be2
    PUSH EAX                            ; 00599be4
    PUSH 0x64e2f0                       ; 00599be5 | = "%d\n"
    MOV EBX,dword ptr [ESP + 0x34]      ; 00599bea
    PUSH EBX                            ; 00599bee
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599bef
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00599bf4
    CMP dword ptr [ESP],0x1             ; 00599bf7
    JGE 0x00599c20                      ; 00599bfb
        ;   XREF to: 00599c20 (CONDITIONAL_JUMP)  ; LAB_00599c20
    MOV EDI,0x64e2f4                    ; 00599bfd | = "..\\core\\skeleton.cpp"
    MOV EBP,0x10d                       ; 00599c02
    PUSH 0x64e309                       ; 00599c07 | = "Invalid skeleton version"
    MOV dword ptr [0x02f0ca48],EDI      ; 00599c0c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00599c12 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599c18
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00599c1d
    MOV EAX,dword ptr [ESP]             ; 00599c20
        ;   Label: LAB_00599c20
    CMP EAX,0x2                         ; 00599c23
    JGE 0x00599c4c                      ; 00599c26
        ;   XREF to: 00599c4c (CONDITIONAL_JUMP)  ; LAB_00599c4c
    PUSH EAX                            ; 00599c28
    MOV EDX,0x64e322                    ; 00599c29 | = "..\\core\\skeleton.cpp"
    MOV ECX,0x10e                       ; 00599c2e
    PUSH 0x64e337                       ; 00599c33 | = "Old skeleton version %d not supported"
    MOV dword ptr [0x02f0ca48],EDX      ; 00599c38 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00599c3e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599c44
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00599c49
    MOV EAX,dword ptr [ESP]             ; 00599c4c
        ;   Label: LAB_00599c4c
    MOV ESI,dword ptr [0x00681860]      ; 00599c4f | g_CSkeletonVersion
    CMP EAX,ESI                         ; 00599c55
    JG 0x00599f52                       ; 00599c57
        ;   XREF to: 00599f52 (CONDITIONAL_JUMP)  ; LAB_00599f52
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00599c5d
        ;   Label: LAB_00599c5d
    PUSH EBX                            ; 00599c61
        ;   Label: LAB_00599c61
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599c62
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599c67
    TEST EAX,EAX                        ; 00599c6a
    JL 0x00599c73                       ; 00599c6c
        ;   XREF to: 00599c73 (CONDITIONAL_JUMP)  ; LAB_00599c73
    CMP EAX,0xa                         ; 00599c6e
    JNZ 0x00599c61                      ; 00599c71
        ;   XREF to: 00599c61 (CONDITIONAL_JUMP)  ; LAB_00599c61
    LEA EAX,[ESP + 0x8]                 ; 00599c73
        ;   Label: LAB_00599c73
    PUSH EAX                            ; 00599c77
    LEA EAX,[ESP + 0x8]                 ; 00599c78
    PUSH EAX                            ; 00599c7c
    PUSH 0x64e3c2                       ; 00599c7d | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x38]      ; 00599c82
    PUSH ECX                            ; 00599c86
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599c87
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00599c8c
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599c8f
    PUSH EBX                            ; 00599c93
    MOV ESI,dword ptr [ESP + 0x8]       ; 00599c94
    PUSH ESI                            ; 00599c98
    MOV EDI,dword ptr [ESP + 0x30]      ; 00599c99
    PUSH EDI                            ; 00599c9d
    CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910 ; 00599c9e
        ;   XREF to: 00599910 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910(CSkeleton * this_ptr, int bone_count, int frame_count)
    ADD ESP,0xc                         ; 00599ca3
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00599ca6
    PUSH EBX                            ; 00599caa
        ;   Label: LAB_00599caa
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599cab
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599cb0
    TEST EAX,EAX                        ; 00599cb3
    JL 0x00599cbc                       ; 00599cb5
        ;   XREF to: 00599cbc (CONDITIONAL_JUMP)  ; LAB_00599cbc
    CMP EAX,0xa                         ; 00599cb7
    JNZ 0x00599caa                      ; 00599cba
        ;   XREF to: 00599caa (CONDITIONAL_JUMP)  ; LAB_00599caa
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599cbc
        ;   Label: LAB_00599cbc
    MOV EBP,dword ptr [EAX + 0x28558]   ; 00599cc0
    XOR EBX,EBX                         ; 00599cc6
    TEST EBP,EBP                        ; 00599cc8
    JLE 0x00599d10                      ; 00599cca
        ;   XREF to: 00599d10 (CONDITIONAL_JUMP)  ; LAB_00599d10
    LEA EDI,[EAX + 0x2855c]             ; 00599ccc
    LEA ESI,[EAX + 0x2857c]             ; 00599cd2
    IMUL EAX,EBX,0x24                   ; 00599cd8
        ;   Label: LAB_00599cd8
    PUSH ESI                            ; 00599cdb
    ADD EAX,EDI                         ; 00599cdc
    PUSH EAX                            ; 00599cde
    PUSH 0x64e3c9                       ; 00599cdf | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x38]      ; 00599ce4
    PUSH EAX                            ; 00599ce8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599ce9
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00599cee
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599cf1
    INC EBX                             ; 00599cf5
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00599cf6
    ADD ESI,0x24                        ; 00599cfc
    CMP EBX,EDX                         ; 00599cff
    JL 0x00599cd8                       ; 00599d01
        ;   XREF to: 00599cd8 (CONDITIONAL_JUMP)  ; LAB_00599cd8
    LEA EAX,[EAX]                       ; 00599d03
    LEA EDX,[EDX]                       ; 00599d09
    NOP                                 ; 00599d0f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00599d10
        ;   Label: LAB_00599d10
    PUSH ESI                            ; 00599d14
        ;   Label: LAB_00599d14
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599d15
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599d1a
    TEST EAX,EAX                        ; 00599d1d
    JL 0x00599d26                       ; 00599d1f
        ;   XREF to: 00599d26 (CONDITIONAL_JUMP)  ; LAB_00599d26
    CMP EAX,0xa                         ; 00599d21
    JNZ 0x00599d14                      ; 00599d24
        ;   XREF to: 00599d14 (CONDITIONAL_JUMP)  ; LAB_00599d14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599d26
        ;   Label: LAB_00599d26
    XOR ECX,ECX                         ; 00599d2a
    MOV EBX,dword ptr [ESP + 0x28]      ; 00599d2c
    MOV dword ptr [ESP + 0xc],ECX       ; 00599d30
    MOV ESI,dword ptr [EAX + 0x2936c]   ; 00599d34
    MOV EBX,dword ptr [EBX + 0x29370]   ; 00599d3a
    TEST ESI,ESI                        ; 00599d40
    JLE 0x00599db5                      ; 00599d42
        ;   XREF to: 00599db5 (CONDITIONAL_JUMP)  ; LAB_00599db5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599d44
        ;   Label: LAB_00599d44
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00599d48
    XOR EBP,EBP                         ; 00599d4e
    TEST EDX,EDX                        ; 00599d50
    JLE 0x00599d9e                      ; 00599d52
        ;   XREF to: 00599d9e (CONDITIONAL_JUMP)  ; LAB_00599d9e
    LEA ESI,[EBX + 0x4]                 ; 00599d54
    LEA EAX,[EBX + 0x8]                 ; 00599d57
    MOV dword ptr [ESP + 0x10],EAX      ; 00599d5a
    LEA EDI,[EBX + 0xc]                 ; 00599d5e
    PUSH EDI                            ; 00599d61
        ;   Label: LAB_00599d61
    MOV EAX,dword ptr [ESP + 0x14]      ; 00599d62
    PUSH EAX                            ; 00599d66
    PUSH ESI                            ; 00599d67
    PUSH EBX                            ; 00599d68
    PUSH 0x64e3d5                       ; 00599d69 | = "%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x40]      ; 00599d6e
    PUSH EDX                            ; 00599d72
    INC EBP                             ; 00599d73
    ADD EDI,0x10                        ; 00599d74
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599d77
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00599d7c
    ADD ESI,0x10                        ; 00599d7f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00599d82
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599d86
    ADD EBX,0x10                        ; 00599d8a
    ADD ECX,0x10                        ; 00599d8d
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00599d90
    MOV dword ptr [ESP + 0x10],ECX      ; 00599d96
    CMP EBP,EDX                         ; 00599d9a
    JL 0x00599d61                       ; 00599d9c
        ;   XREF to: 00599d61 (CONDITIONAL_JUMP)  ; LAB_00599d61
    MOV EDI,dword ptr [ESP + 0xc]       ; 00599d9e
        ;   Label: LAB_00599d9e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00599da2
    INC EDI                             ; 00599da6
    MOV EBP,dword ptr [ESI + 0x2936c]   ; 00599da7
    MOV dword ptr [ESP + 0xc],EDI       ; 00599dad
    CMP EDI,EBP                         ; 00599db1
    JL 0x00599d44                       ; 00599db3
        ;   XREF to: 00599d44 (CONDITIONAL_JUMP)  ; LAB_00599d44
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00599db5
        ;   Label: LAB_00599db5
    PUSH EBP                            ; 00599db9
        ;   Label: LAB_00599db9
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599dba
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599dbf
    TEST EAX,EAX                        ; 00599dc2
    JL 0x00599dcb                       ; 00599dc4
        ;   XREF to: 00599dcb (CONDITIONAL_JUMP)  ; LAB_00599dcb
    CMP EAX,0xa                         ; 00599dc6
    JNZ 0x00599db9                      ; 00599dc9
        ;   XREF to: 00599db9 (CONDITIONAL_JUMP)  ; LAB_00599db9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599dcb
        ;   Label: LAB_00599dcb
    MOV ECX,dword ptr [EAX + 0x2936c]   ; 00599dcf
    XOR EBX,EBX                         ; 00599dd5
    TEST ECX,ECX                        ; 00599dd7
    JLE 0x00599e20                      ; 00599dd9
        ;   XREF to: 00599e20 (CONDITIONAL_JUMP)  ; LAB_00599e20
    XOR ESI,ESI                         ; 00599ddb
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599ddd
        ;   Label: LAB_00599ddd
    MOV EAX,dword ptr [EAX + 0x29374]   ; 00599de1
    ADD EAX,ESI                         ; 00599de7
    LEA EDI,[EAX + 0x8]                 ; 00599de9
    PUSH EDI                            ; 00599dec
    LEA EDI,[EAX + 0x4]                 ; 00599ded
    PUSH EDI                            ; 00599df0
    PUSH EAX                            ; 00599df1
    PUSH 0x64e3e2                       ; 00599df2 | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00599df7
    PUSH EDI                            ; 00599dfb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599dfc
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00599e01
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599e04
    INC EBX                             ; 00599e08
    MOV EBP,dword ptr [EAX + 0x2936c]   ; 00599e09
    ADD ESI,0xc                         ; 00599e0f
    CMP EBX,EBP                         ; 00599e12
    JL 0x00599ddd                       ; 00599e14
        ;   XREF to: 00599ddd (CONDITIONAL_JUMP)  ; LAB_00599ddd
    LEA EAX,[EAX]                       ; 00599e16
    LEA EDX,[EDX]                       ; 00599e1c
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00599e20
        ;   Label: LAB_00599e20
    PUSH ESI                            ; 00599e24
        ;   Label: LAB_00599e24
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599e25
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599e2a
    TEST EAX,EAX                        ; 00599e2d
    JL 0x00599e36                       ; 00599e2f
        ;   XREF to: 00599e36 (CONDITIONAL_JUMP)  ; LAB_00599e36
    CMP EAX,0xa                         ; 00599e31
    JNZ 0x00599e24                      ; 00599e34
        ;   XREF to: 00599e24 (CONDITIONAL_JUMP)  ; LAB_00599e24
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599e36
        ;   Label: LAB_00599e36
    MOV EDX,dword ptr [EAX + 0x2936c]   ; 00599e3a
    XOR EBX,EBX                         ; 00599e40
    TEST EDX,EDX                        ; 00599e42
    JLE 0x00599e90                      ; 00599e44
        ;   XREF to: 00599e90 (CONDITIONAL_JUMP)  ; LAB_00599e90
    XOR ESI,ESI                         ; 00599e46
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599e48
        ;   Label: LAB_00599e48
    MOV EAX,dword ptr [EAX + 0x29378]   ; 00599e4c
    ADD EAX,ESI                         ; 00599e52
    LEA EDI,[EAX + 0x8]                 ; 00599e54
    PUSH EDI                            ; 00599e57
    LEA EDI,[EAX + 0x4]                 ; 00599e58
    PUSH EDI                            ; 00599e5b
    PUSH EAX                            ; 00599e5c
    PUSH 0x64e3ec                       ; 00599e5d | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00599e62
    PUSH ECX                            ; 00599e66
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599e67
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00599e6c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599e6f
    INC EBX                             ; 00599e73
    MOV EDI,dword ptr [EAX + 0x2936c]   ; 00599e74
    ADD ESI,0xc                         ; 00599e7a
    CMP EBX,EDI                         ; 00599e7d
    JL 0x00599e48                       ; 00599e7f
        ;   XREF to: 00599e48 (CONDITIONAL_JUMP)  ; LAB_00599e48
    LEA EAX,[EAX]                       ; 00599e81
    LEA EDX,[EDX]                       ; 00599e87
    LEA EAX,[EAX]                       ; 00599e8d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00599e90
        ;   Label: LAB_00599e90
    TEST byte ptr [EAX + 0xc],0x20      ; 00599e94
    JZ 0x00599ebc                       ; 00599e98
        ;   XREF to: 00599ebc (CONDITIONAL_JUMP)  ; LAB_00599ebc
    MOV EBP,0x64e3f6                    ; 00599e9a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x144                       ; 00599e9f
    PUSH 0x64e40b                       ; 00599ea4 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00599ea9 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00599eaf | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599eb4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00599eb9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00599ebc
        ;   Label: LAB_00599ebc
    PUSH EDX                            ; 00599ec0
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00599ec1
    PUSH ECX                            ; 00599ec5
    CALL core_motion.cpp_CMotionList_load_FUN_0052cd70 ; 00599ec6
        ;   XREF to: 0052cd70 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionList_load_FUN_0052cd70(CMotionList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00599ecb
    CMP dword ptr [ESP],0x3             ; 00599ece
    JL 0x00599f7c                       ; 00599ed2
        ;   XREF to: 00599f7c (CONDITIONAL_JUMP)  ; LAB_00599f7c
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00599ed8
    PUSH ESI                            ; 00599edc
        ;   Label: LAB_00599edc
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00599edd
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 00599ee2
    TEST EAX,EAX                        ; 00599ee5
    JL 0x00599eee                       ; 00599ee7
        ;   XREF to: 00599eee (CONDITIONAL_JUMP)  ; LAB_00599eee
    CMP EAX,0xa                         ; 00599ee9
    JNZ 0x00599edc                      ; 00599eec
        ;   XREF to: 00599edc (CONDITIONAL_JUMP)  ; LAB_00599edc
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599eee
        ;   Label: LAB_00599eee
    MOV ESI,dword ptr [EAX + 0x28558]   ; 00599ef2
    XOR EBX,EBX                         ; 00599ef8
    TEST ESI,ESI                        ; 00599efa
    JLE 0x00599f40                      ; 00599efc
        ;   XREF to: 00599f40 (CONDITIONAL_JUMP)  ; LAB_00599f40
    LEA EBP,[EAX + 0x2937c]             ; 00599efe
    LEA ESI,[EAX + 0x29380]             ; 00599f04
    LEA EDI,[EAX + 0x29384]             ; 00599f0a
    IMUL EAX,EBX,0xc                    ; 00599f10
        ;   Label: LAB_00599f10
    PUSH EDI                            ; 00599f13
    PUSH ESI                            ; 00599f14
    ADD EAX,EBP                         ; 00599f15
    PUSH EAX                            ; 00599f17
    PUSH 0x64e437                       ; 00599f18 | = "%f,%f,%f\n"
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00599f1d
    PUSH EAX                            ; 00599f21
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00599f22
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00599f27
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599f2a
    ADD EDI,0xc                         ; 00599f2e
    INC EBX                             ; 00599f31
    MOV EDX,dword ptr [EAX + 0x28558]   ; 00599f32
    ADD ESI,0xc                         ; 00599f38
    CMP EBX,EDX                         ; 00599f3b
    JL 0x00599f10                       ; 00599f3d
        ;   XREF to: 00599f10 (CONDITIONAL_JUMP)  ; LAB_00599f10
    NOP                                 ; 00599f3f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00599f40
        ;   Label: LAB_00599f40
    TEST byte ptr [EAX + 0xc],0x20      ; 00599f44
    JNZ 0x00599f8c                      ; 00599f48
        ;   XREF to: 00599f8c (CONDITIONAL_JUMP)  ; LAB_00599f8c
    ADD ESP,0x14                        ; 00599f4a
    POP EBP                             ; 00599f4d
    POP EDI                             ; 00599f4e
    POP ESI                             ; 00599f4f
    POP EBX                             ; 00599f50
    RET                                 ; 00599f51
    PUSH ESI                            ; 00599f52
        ;   Label: LAB_00599f52
    PUSH EAX                            ; 00599f53
    MOV EDI,0x64e35d                    ; 00599f54 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x10f                       ; 00599f59
    PUSH 0x64e372                       ; 00599f5e | = "Skeleton version %d is newer than .EX..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00599f63 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00599f69 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599f6f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00599f74
    JMP 0x00599c5d                      ; 00599f77
        ;   XREF to: 00599c5d (UNCONDITIONAL_JUMP)  ; LAB_00599c5d
    MOV EAX,dword ptr [ESP + 0x28]      ; 00599f7c
        ;   Label: LAB_00599f7c
    MOV dword ptr [EAX + 0x2937c],0xc7c34f80 ; 00599f80
    JMP 0x00599f40                      ; 00599f8a
        ;   XREF to: 00599f40 (UNCONDITIONAL_JUMP)  ; LAB_00599f40
    MOV ECX,0x64e441                    ; 00599f8c | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00599f8c
    MOV EBX,0x15f                       ; 00599f91
    PUSH 0x64e456                       ; 00599f96 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00599f9b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00599fa1 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599fa7
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00599fac
    ADD ESP,0x14                        ; 00599faf
    POP EBP                             ; 00599fb2
    POP EDI                             ; 00599fb3
    POP ESI                             ; 00599fb4
    POP EBX                             ; 00599fb5
    RET                                 ; 00599fb6

