; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_00540aa0(CSkeleton *this_ptr,_FILE *file_handle)
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
;   core_skeleton.cpp_CSkeleton_load_FUN_00540a10 at 00540a36
;
; Referenced Globals:
;   undefined4 DAT_005e69ac
;   TerminatedCString s_core_skeleton_cpp_005e69b0
;   TerminatedCString s_Invalid_skeleton_version_005e69c5
;   TerminatedCString s_core_skeleton_cpp_005e69de
;   TerminatedCString s_Old_skeleton_version_d_n_005e69f3
;   TerminatedCString s_core_skeleton_cpp_005e6a19
;   TerminatedCString s_Skeleton_version_d_is_ne_005e6a2e
;   TerminatedCString s_d_d_005e6a7e
;   TerminatedCString s_d_005e6a85
;   TerminatedCString s_f_f_f_f_005e6a91
;   TerminatedCString s_f_f_f_005e6a9e
;   TerminatedCString s_f_f_f_005e6aa8
;   TerminatedCString s_core_skeleton_cpp_005e6ab2
;   TerminatedCString s_CSkeleton_loadStream_err_005e6ac7
;   TerminatedCString s_core_skeleton_cpp_005e6af3
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_motion.cpp_FUN_00502820
;   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00540870
;   core_skeleton.cpp_CSkeleton_free_FUN_00540980
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540aa0
        ;   Label: core_skeleton.cpp_CSkeleton_loadStream_FUN_00540aa0
    PUSH ESI                            ; 00540aa1
    PUSH EDI                            ; 00540aa2
    PUSH EBP                            ; 00540aa3
    SUB ESP,0x14                        ; 00540aa4
    PUSH 0x1                            ; 00540aa7
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00540aa9
    PUSH EDX                            ; 00540aad
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00540980 ; 00540aae
        ;   XREF to: 00540980 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00540980(CSkeleton * this_ptr, int free_motion_list)
    ADD ESP,0x8                         ; 00540ab3
    MOV ECX,0xffffffff                  ; 00540ab6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00540abb
    MOV dword ptr [ESP],ECX             ; 00540abf
    PUSH EBX                            ; 00540ac2
        ;   Label: LAB_00540ac2
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540ac3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540ac8
    TEST EAX,EAX                        ; 00540acb
    JL 0x00540ad4                       ; 00540acd
        ;   XREF to: 00540ad4 (CONDITIONAL_JUMP)  ; LAB_00540ad4
    CMP EAX,0xa                         ; 00540acf
    JNZ 0x00540ac2                      ; 00540ad2
        ;   XREF to: 00540ac2 (CONDITIONAL_JUMP)  ; LAB_00540ac2
    MOV EAX,ESP                         ; 00540ad4
        ;   Label: LAB_00540ad4
    PUSH EAX                            ; 00540ad6
    PUSH 0x5e69ac                       ; 00540ad7 | DAT_005e69ac
    MOV EBX,dword ptr [ESP + 0x34]      ; 00540adc
    PUSH EBX                            ; 00540ae0
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540ae1
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00540ae6
    CMP dword ptr [ESP],0x1             ; 00540ae9
    JGE 0x00540b12                      ; 00540aed
        ;   XREF to: 00540b12 (CONDITIONAL_JUMP)  ; LAB_00540b12
    MOV EDI,0x5e69b0                    ; 00540aef | = "..\\core\\skeleton.cpp"
    MOV EBP,0x118                       ; 00540af4
    PUSH 0x5e69c5                       ; 00540af9 | = "Invalid skeleton version"
    MOV dword ptr [0x01d046a0],EDI      ; 00540afe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00540b04 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00540b0a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00540b0f
    MOV EAX,dword ptr [ESP]             ; 00540b12
        ;   Label: LAB_00540b12
    CMP EAX,0x2                         ; 00540b15
    JGE 0x00540b3e                      ; 00540b18
        ;   XREF to: 00540b3e (CONDITIONAL_JUMP)  ; LAB_00540b3e
    PUSH EAX                            ; 00540b1a
    MOV EDX,0x5e69de                    ; 00540b1b | = "..\\core\\skeleton.cpp"
    MOV ECX,0x119                       ; 00540b20
    PUSH 0x5e69f3                       ; 00540b25 | = "Old skeleton version %d not supported"
    MOV dword ptr [0x01d046a0],EDX      ; 00540b2a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00540b30 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00540b36
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00540b3b
    MOV EAX,dword ptr [ESP]             ; 00540b3e
        ;   Label: LAB_00540b3e
    MOV ESI,dword ptr [0x0061bbd4]      ; 00540b41 | DAT_0061bbd4
    CMP EAX,ESI                         ; 00540b47
    JG 0x00540e1f                       ; 00540b49
        ;   XREF to: 00540e1f (CONDITIONAL_JUMP)  ; LAB_00540e1f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00540b4f
        ;   Label: LAB_00540b4f
    PUSH EBX                            ; 00540b53
        ;   Label: LAB_00540b53
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540b54
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540b59
    TEST EAX,EAX                        ; 00540b5c
    JL 0x00540b65                       ; 00540b5e
        ;   XREF to: 00540b65 (CONDITIONAL_JUMP)  ; LAB_00540b65
    CMP EAX,0xa                         ; 00540b60
    JNZ 0x00540b53                      ; 00540b63
        ;   XREF to: 00540b53 (CONDITIONAL_JUMP)  ; LAB_00540b53
    LEA EAX,[ESP + 0x8]                 ; 00540b65
        ;   Label: LAB_00540b65
    PUSH EAX                            ; 00540b69
    LEA EAX,[ESP + 0x8]                 ; 00540b6a
    PUSH EAX                            ; 00540b6e
    PUSH 0x5e6a7e                       ; 00540b6f | = "%d,%d\n"
    MOV ECX,dword ptr [ESP + 0x38]      ; 00540b74
    PUSH ECX                            ; 00540b78
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540b79
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00540b7e
    MOV EBX,dword ptr [ESP + 0x8]       ; 00540b81
    PUSH EBX                            ; 00540b85
    MOV ESI,dword ptr [ESP + 0x8]       ; 00540b86
    PUSH ESI                            ; 00540b8a
    MOV EDI,dword ptr [ESP + 0x30]      ; 00540b8b
    PUSH EDI                            ; 00540b8f
    CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_00540870 ; 00540b90
        ;   XREF to: 00540870 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_allocMemory_FUN_00540870(CSkeleton * this_ptr, int bone_count, int frame_count)
    ADD ESP,0xc                         ; 00540b95
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00540b98
    PUSH EBX                            ; 00540b9c
        ;   Label: LAB_00540b9c
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540b9d
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540ba2
    TEST EAX,EAX                        ; 00540ba5
    JL 0x00540bae                       ; 00540ba7
        ;   XREF to: 00540bae (CONDITIONAL_JUMP)  ; LAB_00540bae
    CMP EAX,0xa                         ; 00540ba9
    JNZ 0x00540b9c                      ; 00540bac
        ;   XREF to: 00540b9c (CONDITIONAL_JUMP)  ; LAB_00540b9c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540bae
        ;   Label: LAB_00540bae
    MOV EBP,dword ptr [EAX + 0x1d1f8]   ; 00540bb2
    XOR EBX,EBX                         ; 00540bb8
    TEST EBP,EBP                        ; 00540bba
    JLE 0x00540c00                      ; 00540bbc
        ;   XREF to: 00540c00 (CONDITIONAL_JUMP)  ; LAB_00540c00
    LEA EDI,[EAX + 0x1d1fc]             ; 00540bbe
    LEA ESI,[EAX + 0x1d21c]             ; 00540bc4
    IMUL EAX,EBX,0x24                   ; 00540bca
        ;   Label: LAB_00540bca
    PUSH ESI                            ; 00540bcd
    ADD EAX,EDI                         ; 00540bce
    PUSH EAX                            ; 00540bd0
    PUSH 0x5e6a85                       ; 00540bd1 | = "\"%[^\"]\",%d\n"
    MOV EAX,dword ptr [ESP + 0x38]      ; 00540bd6
    PUSH EAX                            ; 00540bda
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540bdb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00540be0
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540be3
    INC EBX                             ; 00540be7
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00540be8
    ADD ESI,0x24                        ; 00540bee
    CMP EBX,EDX                         ; 00540bf1
    JL 0x00540bca                       ; 00540bf3
        ;   XREF to: 00540bca (CONDITIONAL_JUMP)  ; LAB_00540bca
    LEA EAX,[EAX]                       ; 00540bf5
    LEA EDX,[EDX]                       ; 00540bfb
    MOV EBX,EBX                         ; 00540bfe
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00540c00
        ;   Label: LAB_00540c00
    PUSH ESI                            ; 00540c04
        ;   Label: LAB_00540c04
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540c05
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540c0a
    TEST EAX,EAX                        ; 00540c0d
    JL 0x00540c16                       ; 00540c0f
        ;   XREF to: 00540c16 (CONDITIONAL_JUMP)  ; LAB_00540c16
    CMP EAX,0xa                         ; 00540c11
    JNZ 0x00540c04                      ; 00540c14
        ;   XREF to: 00540c04 (CONDITIONAL_JUMP)  ; LAB_00540c04
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540c16
        ;   Label: LAB_00540c16
    XOR ECX,ECX                         ; 00540c1a
    MOV EBX,dword ptr [ESP + 0x28]      ; 00540c1c
    MOV dword ptr [ESP + 0xc],ECX       ; 00540c20
    MOV ESI,dword ptr [EAX + 0x1e00c]   ; 00540c24
    MOV EBX,dword ptr [EBX + 0x1e010]   ; 00540c2a
    TEST ESI,ESI                        ; 00540c30
    JLE 0x00540ca5                      ; 00540c32
        ;   XREF to: 00540ca5 (CONDITIONAL_JUMP)  ; LAB_00540ca5
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540c34
        ;   Label: LAB_00540c34
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00540c38
    XOR EDI,EDI                         ; 00540c3e
    TEST EDX,EDX                        ; 00540c40
    JLE 0x00540c8e                      ; 00540c42
        ;   XREF to: 00540c8e (CONDITIONAL_JUMP)  ; LAB_00540c8e
    LEA EAX,[EBX + 0x4]                 ; 00540c44
    LEA ESI,[EBX + 0x8]                 ; 00540c47
    MOV dword ptr [ESP + 0x10],EAX      ; 00540c4a
    LEA EBP,[EBX + 0xc]                 ; 00540c4e
    PUSH EBP                            ; 00540c51
        ;   Label: LAB_00540c51
    PUSH ESI                            ; 00540c52
    MOV EAX,dword ptr [ESP + 0x18]      ; 00540c53
    PUSH EAX                            ; 00540c57
    PUSH EBX                            ; 00540c58
    PUSH 0x5e6a91                       ; 00540c59 | = "%f,%f,%f,%f\n"
    MOV EDX,dword ptr [ESP + 0x40]      ; 00540c5e
    PUSH EDX                            ; 00540c62
    INC EDI                             ; 00540c63
    ADD EBP,0x10                        ; 00540c64
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540c67
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00540c6c
    ADD ESI,0x10                        ; 00540c6f
    MOV ECX,dword ptr [ESP + 0x10]      ; 00540c72
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540c76
    ADD EBX,0x10                        ; 00540c7a
    ADD ECX,0x10                        ; 00540c7d
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00540c80
    MOV dword ptr [ESP + 0x10],ECX      ; 00540c86
    CMP EDI,EDX                         ; 00540c8a
    JL 0x00540c51                       ; 00540c8c
        ;   XREF to: 00540c51 (CONDITIONAL_JUMP)  ; LAB_00540c51
    MOV EDI,dword ptr [ESP + 0xc]       ; 00540c8e
        ;   Label: LAB_00540c8e
    MOV ESI,dword ptr [ESP + 0x28]      ; 00540c92
    INC EDI                             ; 00540c96
    MOV EBP,dword ptr [ESI + 0x1e00c]   ; 00540c97
    MOV dword ptr [ESP + 0xc],EDI       ; 00540c9d
    CMP EDI,EBP                         ; 00540ca1
    JL 0x00540c34                       ; 00540ca3
        ;   XREF to: 00540c34 (CONDITIONAL_JUMP)  ; LAB_00540c34
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00540ca5
        ;   Label: LAB_00540ca5
    PUSH EDI                            ; 00540ca9
        ;   Label: LAB_00540ca9
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540caa
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540caf
    TEST EAX,EAX                        ; 00540cb2
    JL 0x00540cbb                       ; 00540cb4
        ;   XREF to: 00540cbb (CONDITIONAL_JUMP)  ; LAB_00540cbb
    CMP EAX,0xa                         ; 00540cb6
    JNZ 0x00540ca9                      ; 00540cb9
        ;   XREF to: 00540ca9 (CONDITIONAL_JUMP)  ; LAB_00540ca9
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540cbb
        ;   Label: LAB_00540cbb
    MOV ECX,dword ptr [EAX + 0x1e00c]   ; 00540cbf
    XOR EBX,EBX                         ; 00540cc5
    TEST ECX,ECX                        ; 00540cc7
    JLE 0x00540d10                      ; 00540cc9
        ;   XREF to: 00540d10 (CONDITIONAL_JUMP)  ; LAB_00540d10
    XOR ESI,ESI                         ; 00540ccb
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540ccd
        ;   Label: LAB_00540ccd
    MOV EAX,dword ptr [EAX + 0x1e014]   ; 00540cd1
    ADD EAX,ESI                         ; 00540cd7
    LEA EDI,[EAX + 0x8]                 ; 00540cd9
    PUSH EDI                            ; 00540cdc
    LEA EDI,[EAX + 0x4]                 ; 00540cdd
    PUSH EDI                            ; 00540ce0
    PUSH EAX                            ; 00540ce1
    PUSH 0x5e6a9e                       ; 00540ce2 | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00540ce7
    PUSH EDI                            ; 00540ceb
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540cec
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00540cf1
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540cf4
    INC EBX                             ; 00540cf8
    MOV EBP,dword ptr [EAX + 0x1e00c]   ; 00540cf9
    ADD ESI,0xc                         ; 00540cff
    CMP EBX,EBP                         ; 00540d02
    JL 0x00540ccd                       ; 00540d04
        ;   XREF to: 00540ccd (CONDITIONAL_JUMP)  ; LAB_00540ccd
    LEA EAX,[EAX]                       ; 00540d06
    LEA EDX,[EDX]                       ; 00540d0c
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00540d10
        ;   Label: LAB_00540d10
    PUSH ESI                            ; 00540d14
        ;   Label: LAB_00540d14
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540d15
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540d1a
    TEST EAX,EAX                        ; 00540d1d
    JL 0x00540d26                       ; 00540d1f
        ;   XREF to: 00540d26 (CONDITIONAL_JUMP)  ; LAB_00540d26
    CMP EAX,0xa                         ; 00540d21
    JNZ 0x00540d14                      ; 00540d24
        ;   XREF to: 00540d14 (CONDITIONAL_JUMP)  ; LAB_00540d14
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d26
        ;   Label: LAB_00540d26
    MOV EDX,dword ptr [EAX + 0x1e00c]   ; 00540d2a
    XOR EBX,EBX                         ; 00540d30
    TEST EDX,EDX                        ; 00540d32
    JLE 0x00540d80                      ; 00540d34
        ;   XREF to: 00540d80 (CONDITIONAL_JUMP)  ; LAB_00540d80
    XOR ESI,ESI                         ; 00540d36
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d38
        ;   Label: LAB_00540d38
    MOV EAX,dword ptr [EAX + 0x1e018]   ; 00540d3c
    ADD EAX,ESI                         ; 00540d42
    LEA EDI,[EAX + 0x8]                 ; 00540d44
    PUSH EDI                            ; 00540d47
    LEA EDI,[EAX + 0x4]                 ; 00540d48
    PUSH EDI                            ; 00540d4b
    PUSH EAX                            ; 00540d4c
    PUSH 0x5e6aa8                       ; 00540d4d | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00540d52
    PUSH ECX                            ; 00540d56
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00540d57
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00540d5c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540d5f
    INC EBX                             ; 00540d63
    MOV EDI,dword ptr [EAX + 0x1e00c]   ; 00540d64
    ADD ESI,0xc                         ; 00540d6a
    CMP EBX,EDI                         ; 00540d6d
    JL 0x00540d38                       ; 00540d6f
        ;   XREF to: 00540d38 (CONDITIONAL_JUMP)  ; LAB_00540d38
    LEA EAX,[EAX]                       ; 00540d71
    LEA EDX,[EDX]                       ; 00540d77
    LEA EAX,[EAX]                       ; 00540d7d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00540d80
        ;   Label: LAB_00540d80
    TEST byte ptr [EAX + 0xc],0x20      ; 00540d84
    JZ 0x00540dac                       ; 00540d88
        ;   XREF to: 00540dac (CONDITIONAL_JUMP)  ; LAB_00540dac
    MOV EBP,0x5e6ab2                    ; 00540d8a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x14f                       ; 00540d8f
    PUSH 0x5e6ac7                       ; 00540d94 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01d046a0],EBP      ; 00540d99 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00540d9f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00540da4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00540da9
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00540dac
        ;   Label: LAB_00540dac
    PUSH EDX                            ; 00540db0
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00540db1
    PUSH ECX                            ; 00540db5
    CALL core_motion.cpp_FUN_00502820   ; 00540db6
        ;   XREF to: 00502820 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_00502820(CMotionList * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00540dbb
    CMP dword ptr [ESP],0x3             ; 00540dbe
    JL 0x00540e0d                       ; 00540dc2
        ;   XREF to: 00540e0d (CONDITIONAL_JUMP)  ; LAB_00540e0d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00540dc4
    PUSH ESI                            ; 00540dc8
        ;   Label: LAB_00540dc8
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540dc9
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540dce
    TEST EAX,EAX                        ; 00540dd1
    JL 0x00540dda                       ; 00540dd3
        ;   XREF to: 00540dda (CONDITIONAL_JUMP)  ; LAB_00540dda
    CMP EAX,0xa                         ; 00540dd5
    JNZ 0x00540dc8                      ; 00540dd8
        ;   XREF to: 00540dc8 (CONDITIONAL_JUMP)  ; LAB_00540dc8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540dda
        ;   Label: LAB_00540dda
    MOV EDI,dword ptr [EAX + 0x1d1f8]   ; 00540dde
    XOR ESI,ESI                         ; 00540de4
    TEST EDI,EDI                        ; 00540de6
    JLE 0x00540e0d                      ; 00540de8
        ;   XREF to: 00540e0d (CONDITIONAL_JUMP)  ; LAB_00540e0d
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00540dea
    PUSH EBX                            ; 00540dee
        ;   Label: LAB_00540dee
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00540def
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00540df4
    TEST EAX,EAX                        ; 00540df7
    JL 0x00540e00                       ; 00540df9
        ;   XREF to: 00540e00 (CONDITIONAL_JUMP)  ; LAB_00540e00
    CMP EAX,0xa                         ; 00540dfb
    JNZ 0x00540dee                      ; 00540dfe
        ;   XREF to: 00540dee (CONDITIONAL_JUMP)  ; LAB_00540dee
    MOV EAX,dword ptr [ESP + 0x28]      ; 00540e00
        ;   Label: LAB_00540e00
    INC ESI                             ; 00540e04
    CMP ESI,dword ptr [EAX + 0x1d1f8]   ; 00540e05
    JL 0x00540dee                       ; 00540e0b
        ;   XREF to: 00540dee (CONDITIONAL_JUMP)  ; LAB_00540dee
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00540e0d
        ;   Label: LAB_00540e0d
    TEST byte ptr [EAX + 0xc],0x20      ; 00540e11
    JNZ 0x00540e49                      ; 00540e15
        ;   XREF to: 00540e49 (CONDITIONAL_JUMP)  ; LAB_00540e49
    ADD ESP,0x14                        ; 00540e17
    POP EBP                             ; 00540e1a
    POP EDI                             ; 00540e1b
    POP ESI                             ; 00540e1c
    POP EBX                             ; 00540e1d
    RET                                 ; 00540e1e
    PUSH ESI                            ; 00540e1f
        ;   Label: LAB_00540e1f
    PUSH EAX                            ; 00540e20
    MOV EDI,0x5e6a19                    ; 00540e21 | = "..\\core\\skeleton.cpp"
    MOV EBP,0x11a                       ; 00540e26
    PUSH 0x5e6a2e                       ; 00540e2b | = "Skeleton version %d is newer than .EX..."
    MOV dword ptr [0x01d046a0],EDI      ; 00540e30 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 00540e36 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00540e3c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00540e41
    JMP 0x00540b4f                      ; 00540e44
        ;   XREF to: 00540b4f (UNCONDITIONAL_JUMP)  ; LAB_00540b4f
    MOV EBX,0x5e6af3                    ; 00540e49 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00540e49
    MOV ESI,0x16a                       ; 00540e4e
    PUSH 0x5e6b08                       ; 00540e53 | = "CSkeleton::loadStream - error reading..."
    MOV dword ptr [0x01d046a0],EBX      ; 00540e58 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00540e5e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00540e64
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00540e69
    ADD ESP,0x14                        ; 00540e6c
    POP EBP                             ; 00540e6f
    POP EDI                             ; 00540e70
    POP ESI                             ; 00540e71
    POP EBX                             ; 00540e72
    RET                                 ; 00540e73

