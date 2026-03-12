; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFile_FUN_0051aa60(CLodMesh *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[260]        Stack[-0x234]:260  local_234
; char[256]        Stack[-0x130]:256  local_130
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined1[4]    Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; undefined1[4]    Stack[-0x20]:4  local_20
; undefined1[4]    Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_importFromFile_FUN_0051a9d0 at 0051aa12
;
; Referenced Globals:
;   TerminatedCString s_d_00637b30
;   TerminatedCString s_shape_meshlod_cpp_00637b34
;   TerminatedCString s_Corruption_in_S3D_detect_00637b49
;   TerminatedCString s_shape_meshlod_cpp_00637b65
;   TerminatedCString s_Can_t_import_S3D_file_ve_00637b7a
;   TerminatedCString s_d_d_d_d_d_d_d_00637bbc
;   TerminatedCString s_anon_00637bd2
;   TerminatedCString s_raw_00637bd9
;   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637bdd
;   TerminatedCString s_f_f_f_00637bff
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_splitpath_FUN_005ff178
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051aa60
        ;   Label: shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60
    PUSH ESI                            ; 0051aa61
    PUSH EDI                            ; 0051aa62
    PUSH EBP                            ; 0051aa63
    SUB ESP,0x224                       ; 0051aa64
    MOV ESI,dword ptr [ESP + 0x238]     ; 0051aa6a
    MOV EBX,dword ptr [ESP + 0x23c]     ; 0051aa71
    MOV EDI,0x1                         ; 0051aa78
    MOV EBP,EBX                         ; 0051aa7d
    PUSH EBP                            ; 0051aa7f
        ;   Label: LAB_0051aa7f
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051aa80
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051aa85
    TEST EAX,EAX                        ; 0051aa88
    JL 0x0051aa96                       ; 0051aa8a
        ;   XREF to: 0051aa96 (CONDITIONAL_JUMP)  ; LAB_0051aa96
    CMP EAX,0xa                         ; 0051aa8c
    JNZ 0x0051aa7f                      ; 0051aa8f
        ;   XREF to: 0051aa7f (CONDITIONAL_JUMP)  ; LAB_0051aa7f
    DEC EDI                             ; 0051aa91
    TEST EDI,EDI                        ; 0051aa92
    JG 0x0051aa7f                       ; 0051aa94
        ;   XREF to: 0051aa7f (CONDITIONAL_JUMP)  ; LAB_0051aa7f
    LEA EAX,[ESP + 0x204]               ; 0051aa96
        ;   Label: LAB_0051aa96
    PUSH EAX                            ; 0051aa9d
    PUSH 0x637b30                       ; 0051aa9e | = "%d\n"
    PUSH EBX                            ; 0051aaa3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051aaa4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0051aaa9
    CMP EAX,0x1                         ; 0051aaac
    JZ 0x0051aad4                       ; 0051aaaf
        ;   XREF to: 0051aad4 (CONDITIONAL_JUMP)  ; LAB_0051aad4
    MOV EDX,0x637b34                    ; 0051aab1 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051aab1
    MOV ECX,0x1080                      ; 0051aab6
    PUSH 0x637b49                       ; 0051aabb | = "Corruption in S3D detected!"
    MOV dword ptr [0x02f0ca48],EDX      ; 0051aac0 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051aac6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051aacc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051aad1
    MOV EDI,dword ptr [ESP + 0x204]     ; 0051aad4
        ;   Label: LAB_0051aad4
    CMP EDI,0x66                        ; 0051aadb
    JGE 0x0051abc1                      ; 0051aade
        ;   XREF to: 0051abc1 (CONDITIONAL_JUMP)  ; LAB_0051abc1
    PUSH 0x67                           ; 0051aae4
        ;   Label: LAB_0051aae4
    MOV ECX,dword ptr [ESP + 0x208]     ; 0051aae6
    PUSH ECX                            ; 0051aaed
    MOV EAX,0x637b65                    ; 0051aaee | = "..\\shape\\meshlod.cpp"
    MOV EDX,0x1084                      ; 0051aaf3
    PUSH 0x637b7a                       ; 0051aaf8 | = "Can't import S3D file version %d, I c..."
    MOV [0x02f0ca48],EAX                ; 0051aafd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0051ab02 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051ab08
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0051ab0d
    MOV EDI,0x1                         ; 0051ab10
        ;   Label: LAB_0051ab10
    MOV EBP,EBX                         ; 0051ab15
    PUSH EBP                            ; 0051ab17
        ;   Label: LAB_0051ab17
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ab18
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ab1d
    TEST EAX,EAX                        ; 0051ab20
    JL 0x0051ab2e                       ; 0051ab22
        ;   XREF to: 0051ab2e (CONDITIONAL_JUMP)  ; LAB_0051ab2e
    CMP EAX,0xa                         ; 0051ab24
    JNZ 0x0051ab17                      ; 0051ab27
        ;   XREF to: 0051ab17 (CONDITIONAL_JUMP)  ; LAB_0051ab17
    DEC EDI                             ; 0051ab29
    TEST EDI,EDI                        ; 0051ab2a
    JG 0x0051ab17                       ; 0051ab2c
        ;   XREF to: 0051ab17 (CONDITIONAL_JUMP)  ; LAB_0051ab17
    LEA EAX,[ESP + 0x218]               ; 0051ab2e
        ;   Label: LAB_0051ab2e
    PUSH EAX                            ; 0051ab35
    LEA EAX,[ESP + 0x218]               ; 0051ab36
    PUSH EAX                            ; 0051ab3d
    LEA EAX,[ESP + 0x214]               ; 0051ab3e
    PUSH EAX                            ; 0051ab45
    LEA EAX,[ESP + 0x21c]               ; 0051ab46
    PUSH EAX                            ; 0051ab4d
    LEA EAX,[ESP + 0x218]               ; 0051ab4e
    PUSH EAX                            ; 0051ab55
    LEA EAX,[ESP + 0x234]               ; 0051ab56
    PUSH EAX                            ; 0051ab5d
    LEA EAX,[ESP + 0x234]               ; 0051ab5e
    PUSH EAX                            ; 0051ab65
    PUSH 0x637bbc                       ; 0051ab66 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH EBX                            ; 0051ab6b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051ab6c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 0051ab71
    CMP EAX,0x7                         ; 0051ab74
    JNZ 0x0051aab1                      ; 0051ab77
        ;   XREF to: 0051aab1 (CONDITIONAL_JUMP)  ; LAB_0051aab1
    MOV EDI,dword ptr [ESP + 0x21c]     ; 0051ab7d
    PUSH EDI                            ; 0051ab84
    MOV EBP,dword ptr [ESP + 0x224]     ; 0051ab85
    PUSH EBP                            ; 0051ab8c
    MOV EAX,dword ptr [ESP + 0x210]     ; 0051ab8d
    PUSH EAX                            ; 0051ab94
    PUSH ESI                            ; 0051ab95
    CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 ; 0051ab96
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int lod_texture_count)
    ADD ESP,0x10                        ; 0051ab9b
    MOV EDI,dword ptr [ESP + 0x210]     ; 0051ab9e
    MOV EBP,EBX                         ; 0051aba5
    INC EDI                             ; 0051aba7
    TEST EDI,EDI                        ; 0051aba8
        ;   Label: LAB_0051aba8
    JLE 0x0051abcf                      ; 0051abaa
        ;   XREF to: 0051abcf (CONDITIONAL_JUMP)  ; LAB_0051abcf
    PUSH EBP                            ; 0051abac
        ;   Label: LAB_0051abac
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051abad
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051abb2
    TEST EAX,EAX                        ; 0051abb5
    JL 0x0051abcf                       ; 0051abb7
        ;   XREF to: 0051abcf (CONDITIONAL_JUMP)  ; LAB_0051abcf
    CMP EAX,0xa                         ; 0051abb9
    JNZ 0x0051abac                      ; 0051abbc
        ;   XREF to: 0051abac (CONDITIONAL_JUMP)  ; LAB_0051abac
    DEC EDI                             ; 0051abbe
    JMP 0x0051aba8                      ; 0051abbf
        ;   XREF to: 0051aba8 (UNCONDITIONAL_JUMP)  ; LAB_0051aba8
    CMP EDI,0x67                        ; 0051abc1
        ;   Label: LAB_0051abc1
    JG 0x0051aae4                       ; 0051abc4
        ;   XREF to: 0051aae4 (CONDITIONAL_JUMP)  ; LAB_0051aae4
    JMP 0x0051ab10                      ; 0051abca
        ;   XREF to: 0051ab10 (UNCONDITIONAL_JUMP)  ; LAB_0051ab10
    MOV EDI,0x1                         ; 0051abcf
        ;   Label: LAB_0051abcf
    MOV EBP,EBX                         ; 0051abd4
    PUSH EBP                            ; 0051abd6
        ;   Label: LAB_0051abd6
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051abd7
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051abdc
    TEST EAX,EAX                        ; 0051abdf
    JL 0x0051abed                       ; 0051abe1
        ;   XREF to: 0051abed (CONDITIONAL_JUMP)  ; LAB_0051abed
    CMP EAX,0xa                         ; 0051abe3
    JNZ 0x0051abd6                      ; 0051abe6
        ;   XREF to: 0051abd6 (CONDITIONAL_JUMP)  ; LAB_0051abd6
    DEC EDI                             ; 0051abe8
    TEST EDI,EDI                        ; 0051abe9
    JG 0x0051abd6                       ; 0051abeb
        ;   XREF to: 0051abd6 (CONDITIONAL_JUMP)  ; LAB_0051abd6
    XOR EDI,EDI                         ; 0051abed
        ;   Label: LAB_0051abed
    CMP EDI,dword ptr [ESI + 0x10]      ; 0051abef
        ;   Label: LAB_0051abef
    JGE 0x0051ac5a                      ; 0051abf2
        ;   XREF to: 0051ac5a (CONDITIONAL_JUMP)  ; LAB_0051ac5a
    MOV EAX,ESP                         ; 0051abf4
    PUSH EAX                            ; 0051abf6
    PUSH 0x637bd2                       ; 0051abf7 | = "%[^\n]\n"
    PUSH EBX                            ; 0051abfc
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051abfd
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0051ac02
    CMP EAX,0x1                         ; 0051ac05
    JNZ 0x0051aab1                      ; 0051ac08
        ;   XREF to: 0051aab1 (CONDITIONAL_JUMP)  ; LAB_0051aab1
    PUSH 0x0                            ; 0051ac0e
    LEA EAX,[ESP + 0x108]               ; 0051ac10
    PUSH EAX                            ; 0051ac17
    PUSH 0x0                            ; 0051ac18
    PUSH 0x0                            ; 0051ac1a
    LEA EAX,[ESP + 0x10]                ; 0051ac1c
    PUSH EAX                            ; 0051ac20
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0051ac21
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0051ac26
    PUSH 0x637bd9                       ; 0051ac29 | = "raw"
    LEA EAX,[ESP + 0x108]               ; 0051ac2e
    PUSH EAX                            ; 0051ac35
    LEA EAX,[EDI*0x8 + 0x0]             ; 0051ac36
    ADD EAX,EDI                         ; 0051ac3d
    MOV EDX,dword ptr [ESI + 0x14]      ; 0051ac3f
    SHL EAX,0x3                         ; 0051ac42
    PUSH 0x0                            ; 0051ac45
    ADD EAX,EDX                         ; 0051ac47
    PUSH 0x0                            ; 0051ac49
    ADD EAX,0x8                         ; 0051ac4b
    PUSH EAX                            ; 0051ac4e
    INC EDI                             ; 0051ac4f
    CALL crt_file.c_makepath_FUN_005febfc ; 0051ac50
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0051ac55
    JMP 0x0051abef                      ; 0051ac58
        ;   XREF to: 0051abef (UNCONDITIONAL_JUMP)  ; LAB_0051abef
    MOV EDI,0x1                         ; 0051ac5a
        ;   Label: LAB_0051ac5a
    MOV EBP,EBX                         ; 0051ac5f
    PUSH EBP                            ; 0051ac61
        ;   Label: LAB_0051ac61
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ac62
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ac67
    TEST EAX,EAX                        ; 0051ac6a
    JL 0x0051ac78                       ; 0051ac6c
        ;   XREF to: 0051ac78 (CONDITIONAL_JUMP)  ; LAB_0051ac78
    CMP EAX,0xa                         ; 0051ac6e
    JNZ 0x0051ac61                      ; 0051ac71
        ;   XREF to: 0051ac61 (CONDITIONAL_JUMP)  ; LAB_0051ac61
    DEC EDI                             ; 0051ac73
    TEST EDI,EDI                        ; 0051ac74
    JG 0x0051ac61                       ; 0051ac76
        ;   XREF to: 0051ac61 (CONDITIONAL_JUMP)  ; LAB_0051ac61
    XOR EDI,EDI                         ; 0051ac78
        ;   Label: LAB_0051ac78
    CMP EDI,dword ptr [ESI + 0x8]       ; 0051ac7a
        ;   Label: LAB_0051ac7a
    JGE 0x0051acd8                      ; 0051ac7d
        ;   XREF to: 0051acd8 (CONDITIONAL_JUMP)  ; LAB_0051acd8
    LEA EAX,[EDI*0x8 + 0x0]             ; 0051ac7f
    ADD EAX,EDI                         ; 0051ac86
    SHL EAX,0x2                         ; 0051ac88
    SUB EAX,EDI                         ; 0051ac8b
    LEA EDX,[EAX*0x4 + 0x0]             ; 0051ac8d
    MOV EAX,dword ptr [ESI + 0xc]       ; 0051ac94
    ADD EAX,EDX                         ; 0051ac97
    LEA EDX,[EAX + 0x30]                ; 0051ac99
    PUSH EDX                            ; 0051ac9c
    LEA EDX,[EAX + 0x2c]                ; 0051ac9d
    PUSH EDX                            ; 0051aca0
    LEA EDX,[EAX + 0x18]                ; 0051aca1
    PUSH EDX                            ; 0051aca4
    LEA EDX,[EAX + 0x28]                ; 0051aca5
    PUSH EDX                            ; 0051aca8
    LEA EDX,[EAX + 0x24]                ; 0051aca9
    PUSH EDX                            ; 0051acac
    LEA EDX,[EAX + 0x14]                ; 0051acad
    PUSH EDX                            ; 0051acb0
    LEA EDX,[EAX + 0x20]                ; 0051acb1
    PUSH EDX                            ; 0051acb4
    LEA EDX,[EAX + 0x1c]                ; 0051acb5
    PUSH EDX                            ; 0051acb8
    LEA EDX,[EAX + 0x10]                ; 0051acb9
    PUSH EDX                            ; 0051acbc
    PUSH EAX                            ; 0051acbd
    PUSH 0x637bdd                       ; 0051acbe | = "%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n"
    PUSH EBX                            ; 0051acc3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051acc4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0051acc9
    CMP EAX,0xa                         ; 0051accc
    JNZ 0x0051aab1                      ; 0051accf
        ;   XREF to: 0051aab1 (CONDITIONAL_JUMP)  ; LAB_0051aab1
    INC EDI                             ; 0051acd5
    JMP 0x0051ac7a                      ; 0051acd6
        ;   XREF to: 0051ac7a (UNCONDITIONAL_JUMP)  ; LAB_0051ac7a
    MOV EDI,0x1                         ; 0051acd8
        ;   Label: LAB_0051acd8
    MOV EBP,EBX                         ; 0051acdd
    PUSH EBP                            ; 0051acdf
        ;   Label: LAB_0051acdf
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ace0
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ace5
    TEST EAX,EAX                        ; 0051ace8
    JL 0x0051acf6                       ; 0051acea
        ;   XREF to: 0051acf6 (CONDITIONAL_JUMP)  ; LAB_0051acf6
    CMP EAX,0xa                         ; 0051acec
    JNZ 0x0051acdf                      ; 0051acef
        ;   XREF to: 0051acdf (CONDITIONAL_JUMP)  ; LAB_0051acdf
    DEC EDI                             ; 0051acf1
    TEST EDI,EDI                        ; 0051acf2
    JG 0x0051acdf                       ; 0051acf4
        ;   XREF to: 0051acdf (CONDITIONAL_JUMP)  ; LAB_0051acdf
    XOR EDI,EDI                         ; 0051acf6
        ;   Label: LAB_0051acf6
    CMP EDI,dword ptr [ESI]             ; 0051acf8
        ;   Label: LAB_0051acf8
    JL 0x0051ad25                       ; 0051acfa
        ;   XREF to: 0051ad25 (CONDITIONAL_JUMP)  ; LAB_0051ad25
    MOV dword ptr [ESI + 0x18],0x1      ; 0051acfc
    MOV dword ptr [ESI + 0x1c],0x2      ; 0051ad03
    PUSH ESI                            ; 0051ad0a
    MOV dword ptr [ESI + 0x20],0x0      ; 0051ad0b
    CALL shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 ; 0051ad12
        ;   XREF to: 0051b330 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051ad17
    ADD ESP,0x224                       ; 0051ad1a
    POP EBP                             ; 0051ad20
    POP EDI                             ; 0051ad21
    POP ESI                             ; 0051ad22
    POP EBX                             ; 0051ad23
    RET                                 ; 0051ad24
    IMUL EDX,EDI,0x4c4                  ; 0051ad25
        ;   Label: LAB_0051ad25
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051ad2b
    ADD EAX,EDX                         ; 0051ad2e
    LEA EDX,[EAX + 0x8]                 ; 0051ad30
    PUSH EDX                            ; 0051ad33
    LEA EDX,[EAX + 0x4]                 ; 0051ad34
    PUSH EDX                            ; 0051ad37
    PUSH EAX                            ; 0051ad38
    PUSH 0x637bff                       ; 0051ad39 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0051ad3e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051ad3f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0051ad44
    CMP EAX,0x3                         ; 0051ad47
    JNZ 0x0051aab1                      ; 0051ad4a
        ;   XREF to: 0051aab1 (CONDITIONAL_JUMP)  ; LAB_0051aab1
    INC EDI                             ; 0051ad50
    JMP 0x0051acf8                      ; 0051ad51
        ;   XREF to: 0051acf8 (UNCONDITIONAL_JUMP)  ; LAB_0051acf8

