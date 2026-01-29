; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0(CLodMesh *this_ptr,_FILE *file_handle)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x224]:1  local_224
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_importFromFileAlt_FUN_0051ad60 at 0051ada2
;
; Referenced Globals:
;   TerminatedCString s_d_d_00637c66
;   TerminatedCString s_d_d_d_00637c6e
;   TerminatedCString s_anon_00637c78
;   TerminatedCString s_raw_00637c7f
;   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_00637c83
;   TerminatedCString s_f_f_f_00637ca5
;
; Called Functions:
;   crt_file.c_makepath_FUN_005febfc
;   crt_stdio.c_fgetc_FUN_005fe840
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   crt_string.c_splitpath_FUN_005ff178
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
;   shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051adf0
        ;   Label: shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0
    PUSH ESI                            ; 0051adf1
    PUSH EDI                            ; 0051adf2
    PUSH EBP                            ; 0051adf3
    SUB ESP,0x214                       ; 0051adf4
    MOV ESI,dword ptr [ESP + 0x228]     ; 0051adfa
    MOV EDI,dword ptr [ESP + 0x22c]     ; 0051ae01
    MOV EBX,0x2                         ; 0051ae08
    MOV EBP,EDI                         ; 0051ae0d
    PUSH EBP                            ; 0051ae0f
        ;   Label: LAB_0051ae0f
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ae10
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ae15
    TEST EAX,EAX                        ; 0051ae18
    JL 0x0051ae26                       ; 0051ae1a
        ;   XREF to: 0051ae26 (CONDITIONAL_JUMP)  ; LAB_0051ae26
    CMP EAX,0xa                         ; 0051ae1c
    JNZ 0x0051ae0f                      ; 0051ae1f
        ;   XREF to: 0051ae0f (CONDITIONAL_JUMP)  ; LAB_0051ae0f
    DEC EBX                             ; 0051ae21
    TEST EBX,EBX                        ; 0051ae22
    JG 0x0051ae0f                       ; 0051ae24
        ;   XREF to: 0051ae0f (CONDITIONAL_JUMP)  ; LAB_0051ae0f
    MOV EBX,0x1                         ; 0051ae26
        ;   Label: LAB_0051ae26
    MOV EBP,EDI                         ; 0051ae2b
    PUSH EBP                            ; 0051ae2d
        ;   Label: LAB_0051ae2d
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ae2e
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ae33
    TEST EAX,EAX                        ; 0051ae36
    JL 0x0051ae44                       ; 0051ae38
        ;   XREF to: 0051ae44 (CONDITIONAL_JUMP)  ; LAB_0051ae44
    CMP EAX,0xa                         ; 0051ae3a
    JNZ 0x0051ae2d                      ; 0051ae3d
        ;   XREF to: 0051ae2d (CONDITIONAL_JUMP)  ; LAB_0051ae2d
    DEC EBX                             ; 0051ae3f
    TEST EBX,EBX                        ; 0051ae40
    JG 0x0051ae2d                       ; 0051ae42
        ;   XREF to: 0051ae2d (CONDITIONAL_JUMP)  ; LAB_0051ae2d
    LEA EAX,[ESP + 0x204]               ; 0051ae44
        ;   Label: LAB_0051ae44
    PUSH EAX                            ; 0051ae4b
    PUSH 0x637c66                       ; 0051ae4c | = "%d,%*d\n"
    PUSH EDI                            ; 0051ae51
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051ae52
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0051ae57
    MOV EAX,dword ptr [ESP + 0x204]     ; 0051ae5a
    MOV EDX,dword ptr [ESP + 0x204]     ; 0051ae61
    SHL EAX,0x2                         ; 0051ae68
    ADD EDX,0x2                         ; 0051ae6b
    ADD EAX,EDX                         ; 0051ae6e
    MOV EBX,EDI                         ; 0051ae70
    MOV EBP,EAX                         ; 0051ae72
    TEST EAX,EAX                        ; 0051ae74
    JLE 0x0051ae8f                      ; 0051ae76
        ;   XREF to: 0051ae8f (CONDITIONAL_JUMP)  ; LAB_0051ae8f
    PUSH EBX                            ; 0051ae78
        ;   Label: LAB_0051ae78
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ae79
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ae7e
    TEST EAX,EAX                        ; 0051ae81
    JL 0x0051ae8f                       ; 0051ae83
        ;   XREF to: 0051ae8f (CONDITIONAL_JUMP)  ; LAB_0051ae8f
    CMP EAX,0xa                         ; 0051ae85
    JNZ 0x0051ae78                      ; 0051ae88
        ;   XREF to: 0051ae78 (CONDITIONAL_JUMP)  ; LAB_0051ae78
    DEC EBP                             ; 0051ae8a
    TEST EBP,EBP                        ; 0051ae8b
    JG 0x0051ae78                       ; 0051ae8d
        ;   XREF to: 0051ae78 (CONDITIONAL_JUMP)  ; LAB_0051ae78
    MOV EBX,0x1                         ; 0051ae8f
        ;   Label: LAB_0051ae8f
    MOV EBP,EDI                         ; 0051ae94
    PUSH EBP                            ; 0051ae96
        ;   Label: LAB_0051ae96
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051ae97
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051ae9c
    TEST EAX,EAX                        ; 0051ae9f
    JL 0x0051aead                       ; 0051aea1
        ;   XREF to: 0051aead (CONDITIONAL_JUMP)  ; LAB_0051aead
    CMP EAX,0xa                         ; 0051aea3
    JNZ 0x0051ae96                      ; 0051aea6
        ;   XREF to: 0051ae96 (CONDITIONAL_JUMP)  ; LAB_0051ae96
    DEC EBX                             ; 0051aea8
    TEST EBX,EBX                        ; 0051aea9
    JG 0x0051ae96                       ; 0051aeab
        ;   XREF to: 0051ae96 (CONDITIONAL_JUMP)  ; LAB_0051ae96
    LEA EAX,[ESP + 0x210]               ; 0051aead
        ;   Label: LAB_0051aead
    PUSH EAX                            ; 0051aeb4
    LEA EAX,[ESP + 0x210]               ; 0051aeb5
    PUSH EAX                            ; 0051aebc
    LEA EAX,[ESP + 0x210]               ; 0051aebd
    PUSH EAX                            ; 0051aec4
    PUSH 0x637c6e                       ; 0051aec5 | = "%d,%d,%d\n"
    PUSH EDI                            ; 0051aeca
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051aecb
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0051aed0
    MOV EDX,dword ptr [ESP + 0x208]     ; 0051aed3
    PUSH EDX                            ; 0051aeda
    MOV ECX,dword ptr [ESP + 0x214]     ; 0051aedb
    PUSH ECX                            ; 0051aee2
    MOV EBX,dword ptr [ESP + 0x214]     ; 0051aee3
    PUSH EBX                            ; 0051aeea
    PUSH ESI                            ; 0051aeeb
    MOV EBP,EDI                         ; 0051aeec
    MOV EBX,0x1                         ; 0051aeee
    CALL shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 ; 0051aef3
        ;   XREF to: 00515ac0 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count)
    ADD ESP,0x10                        ; 0051aef8
    PUSH EBP                            ; 0051aefb
        ;   Label: LAB_0051aefb
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051aefc
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051af01
    TEST EAX,EAX                        ; 0051af04
    JL 0x0051af12                       ; 0051af06
        ;   XREF to: 0051af12 (CONDITIONAL_JUMP)  ; LAB_0051af12
    CMP EAX,0xa                         ; 0051af08
    JNZ 0x0051aefb                      ; 0051af0b
        ;   XREF to: 0051aefb (CONDITIONAL_JUMP)  ; LAB_0051aefb
    DEC EBX                             ; 0051af0d
    TEST EBX,EBX                        ; 0051af0e
    JG 0x0051aefb                       ; 0051af10
        ;   XREF to: 0051aefb (CONDITIONAL_JUMP)  ; LAB_0051aefb
    MOV EAX,dword ptr [ESI + 0x10]      ; 0051af12
        ;   Label: LAB_0051af12
    XOR EBP,EBP                         ; 0051af15
    TEST EAX,EAX                        ; 0051af17
    JLE 0x0051af80                      ; 0051af19
        ;   XREF to: 0051af80 (CONDITIONAL_JUMP)  ; LAB_0051af80
    XOR EBX,EBX                         ; 0051af1b
    MOV EAX,ESP                         ; 0051af1d
        ;   Label: LAB_0051af1d
    PUSH EAX                            ; 0051af1f
    PUSH 0x637c78                       ; 0051af20 | = "%[^\n]\n"
    PUSH EDI                            ; 0051af25
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051af26
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0051af2b
    PUSH 0x0                            ; 0051af2e
    LEA EAX,[ESP + 0x108]               ; 0051af30
    PUSH EAX                            ; 0051af37
    PUSH 0x0                            ; 0051af38
    PUSH 0x0                            ; 0051af3a
    LEA EAX,[ESP + 0x10]                ; 0051af3c
    PUSH EAX                            ; 0051af40
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0051af41
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0051af46
    PUSH 0x637c7f                       ; 0051af49 | = "raw"
    LEA EAX,[ESP + 0x108]               ; 0051af4e
    PUSH EAX                            ; 0051af55
    MOV EAX,dword ptr [ESI + 0x14]      ; 0051af56
    PUSH 0x0                            ; 0051af59
    ADD EAX,EBX                         ; 0051af5b
    PUSH 0x0                            ; 0051af5d
    ADD EAX,0x8                         ; 0051af5f
    PUSH EAX                            ; 0051af62
    INC EBP                             ; 0051af63
    ADD EBX,0x48                        ; 0051af64
    CALL crt_file.c_makepath_FUN_005febfc ; 0051af67
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    MOV EDX,dword ptr [ESI + 0x10]      ; 0051af6c
    ADD ESP,0x14                        ; 0051af6f
    CMP EBP,EDX                         ; 0051af72
    JL 0x0051af1d                       ; 0051af74
        ;   XREF to: 0051af1d (CONDITIONAL_JUMP)  ; LAB_0051af1d
    LEA EAX,[EAX]                       ; 0051af76
    LEA EDX,[EDX]                       ; 0051af7c
    MOV EBX,0x1                         ; 0051af80
        ;   Label: LAB_0051af80
    MOV EBP,EDI                         ; 0051af85
    PUSH EBP                            ; 0051af87
        ;   Label: LAB_0051af87
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051af88
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051af8d
    TEST EAX,EAX                        ; 0051af90
    JL 0x0051af9e                       ; 0051af92
        ;   XREF to: 0051af9e (CONDITIONAL_JUMP)  ; LAB_0051af9e
    CMP EAX,0xa                         ; 0051af94
    JNZ 0x0051af87                      ; 0051af97
        ;   XREF to: 0051af87 (CONDITIONAL_JUMP)  ; LAB_0051af87
    DEC EBX                             ; 0051af99
    TEST EBX,EBX                        ; 0051af9a
    JG 0x0051af87                       ; 0051af9c
        ;   XREF to: 0051af87 (CONDITIONAL_JUMP)  ; LAB_0051af87
    MOV ECX,dword ptr [ESI + 0x8]       ; 0051af9e
        ;   Label: LAB_0051af9e
    XOR EBP,EBP                         ; 0051afa1
    TEST ECX,ECX                        ; 0051afa3
    JLE 0x0051aff0                      ; 0051afa5
        ;   XREF to: 0051aff0 (CONDITIONAL_JUMP)  ; LAB_0051aff0
    XOR EBX,EBX                         ; 0051afa7
    MOV EAX,dword ptr [ESI + 0xc]       ; 0051afa9
        ;   Label: LAB_0051afa9
    ADD EAX,EBX                         ; 0051afac
    LEA EDX,[EAX + 0x30]                ; 0051afae
    PUSH EDX                            ; 0051afb1
    LEA EDX,[EAX + 0x2c]                ; 0051afb2
    PUSH EDX                            ; 0051afb5
    LEA EDX,[EAX + 0x18]                ; 0051afb6
    PUSH EDX                            ; 0051afb9
    LEA EDX,[EAX + 0x28]                ; 0051afba
    PUSH EDX                            ; 0051afbd
    LEA EDX,[EAX + 0x24]                ; 0051afbe
    PUSH EDX                            ; 0051afc1
    LEA EDX,[EAX + 0x14]                ; 0051afc2
    PUSH EDX                            ; 0051afc5
    LEA EDX,[EAX + 0x20]                ; 0051afc6
    PUSH EDX                            ; 0051afc9
    LEA EDX,[EAX + 0x1c]                ; 0051afca
    PUSH EDX                            ; 0051afcd
    LEA EDX,[EAX + 0x10]                ; 0051afce
    PUSH EDX                            ; 0051afd1
    PUSH EAX                            ; 0051afd2
    PUSH 0x637c83                       ; 0051afd3 | = "%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n"
    PUSH EDI                            ; 0051afd8
    INC EBP                             ; 0051afd9
    ADD EBX,0x8c                        ; 0051afda
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051afe0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [ESI + 0x8]       ; 0051afe5
    ADD ESP,0x30                        ; 0051afe8
    CMP EBP,EAX                         ; 0051afeb
    JL 0x0051afa9                       ; 0051afed
        ;   XREF to: 0051afa9 (CONDITIONAL_JUMP)  ; LAB_0051afa9
    NOP                                 ; 0051afef
    MOV EBX,0x1                         ; 0051aff0
        ;   Label: LAB_0051aff0
    MOV EBP,EDI                         ; 0051aff5
    PUSH EBP                            ; 0051aff7
        ;   Label: LAB_0051aff7
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0051aff8
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 0051affd
    TEST EAX,EAX                        ; 0051b000
    JL 0x0051b00e                       ; 0051b002
        ;   XREF to: 0051b00e (CONDITIONAL_JUMP)  ; LAB_0051b00e
    CMP EAX,0xa                         ; 0051b004
    JNZ 0x0051aff7                      ; 0051b007
        ;   XREF to: 0051aff7 (CONDITIONAL_JUMP)  ; LAB_0051aff7
    DEC EBX                             ; 0051b009
    TEST EBX,EBX                        ; 0051b00a
    JG 0x0051aff7                       ; 0051b00c
        ;   XREF to: 0051aff7 (CONDITIONAL_JUMP)  ; LAB_0051aff7
    MOV EDX,dword ptr [ESI]             ; 0051b00e
        ;   Label: LAB_0051b00e
    XOR EBP,EBP                         ; 0051b010
    TEST EDX,EDX                        ; 0051b012
    JLE 0x0051b050                      ; 0051b014
        ;   XREF to: 0051b050 (CONDITIONAL_JUMP)  ; LAB_0051b050
    XOR EBX,EBX                         ; 0051b016
    MOV EAX,dword ptr [ESI + 0x4]       ; 0051b018
        ;   Label: LAB_0051b018
    ADD EAX,EBX                         ; 0051b01b
    LEA EDX,[EAX + 0x8]                 ; 0051b01d
    PUSH EDX                            ; 0051b020
    LEA EDX,[EAX + 0x4]                 ; 0051b021
    PUSH EDX                            ; 0051b024
    PUSH EAX                            ; 0051b025
    PUSH 0x637ca5                       ; 0051b026 | = "%f,%f,%f\n"
    PUSH EDI                            ; 0051b02b
    INC EBP                             ; 0051b02c
    ADD EBX,0x4c4                       ; 0051b02d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0051b033
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [ESI]             ; 0051b038
    ADD ESP,0x14                        ; 0051b03a
    CMP EBP,ECX                         ; 0051b03d
    JL 0x0051b018                       ; 0051b03f
        ;   XREF to: 0051b018 (CONDITIONAL_JUMP)  ; LAB_0051b018
    LEA EAX,[EAX]                       ; 0051b041
    LEA EDX,[EDX]                       ; 0051b047
    LEA EAX,[EAX]                       ; 0051b04d
    MOV dword ptr [ESI + 0x18],0x1      ; 0051b050
        ;   Label: LAB_0051b050
    MOV dword ptr [ESI + 0x1c],0x2      ; 0051b057
    PUSH ESI                            ; 0051b05e
    MOV dword ptr [ESI + 0x20],0x0      ; 0051b05f
    CALL shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330 ; 0051b066
        ;   XREF to: 0051b330 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_postprocessMesh_FUN_0051b330(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 0051b06b
    ADD ESP,0x214                       ; 0051b06e
    POP EBP                             ; 0051b074
    POP EDI                             ; 0051b075
    POP ESI                             ; 0051b076
    POP EBX                             ; 0051b077
    RET                                 ; 0051b078

