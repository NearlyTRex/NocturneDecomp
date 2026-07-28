; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_load_FUN_00514a70(C3DSLight *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
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
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 005072b2
;
; Referenced Globals:
;   TerminatedCString s_anon_00590d49
;   TerminatedCString s_f_f_f_00590d50
;   TerminatedCString s_f_f_f_00590d5a
;   TerminatedCString s_f_00590d64
;   TerminatedCString s_f_00590d68
;   TerminatedCString s_f_00590d6c
;   TerminatedCString s_d_00590d70
;   TerminatedCString s_f_f_f_f_f_00590d74
;   TerminatedCString s_d_d_00590d84
;   TerminatedCString s_d_00590d8b
;   TerminatedCString s_d_00590d8f
;   TerminatedCString s_f_s_00590d93
;   TerminatedCString s_f_d_s_00590d9a
;   TerminatedCString s_d_00590da4
;   TerminatedCString s_d_d_d_d_d_00590da8
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_memory.c_memset_FUN_00563cc0
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514a70
        ;   Label: core_setutil.cpp_C3DSLight_load_FUN_00514a70
    PUSH ESI                            ; 00514a71
    PUSH EDI                            ; 00514a72
    PUSH EBP                            ; 00514a73
    SUB ESP,0x138                       ; 00514a74
    MOV EBX,dword ptr [ESP + 0x14c]     ; 00514a7a
    MOV ESI,dword ptr [ESP + 0x150]     ; 00514a81
    MOV EAX,[0x005be368]                ; 00514a88 | DAT_005be368
    CMP dword ptr [EAX + 0x15a8c4],0xb  ; 00514a8d | DAT_01fb1b48
    JGE 0x00514f9c                      ; 00514a94
        ;   XREF to: 00514f9c (CONDITIONAL_JUMP)  ; LAB_00514f9c
    LEA EAX,[EBX + 0x4]                 ; 00514a9a
        ;   Label: LAB_00514a9a
    PUSH EAX                            ; 00514a9d
    PUSH 0x590d49                       ; 00514a9e | = "%[^\n]\n"
    PUSH ESI                            ; 00514aa3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514aa4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514aa9 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x15a8c4]  ; 00514aae | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514ab4
    CMP ECX,0xb                         ; 00514ab7
    JL 0x00514acf                       ; 00514aba
        ;   XREF to: 00514acf (CONDITIONAL_JUMP)  ; LAB_00514acf
    PUSH ESI                            ; 00514abc
    PUSH 0xff                           ; 00514abd
    LEA EAX,[ESP + 0x8]                 ; 00514ac2
    PUSH EAX                            ; 00514ac6
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514ac7
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514acc
    LEA EAX,[EBX + 0x10c]               ; 00514acf
        ;   Label: LAB_00514acf
    PUSH EAX                            ; 00514ad5
    LEA EAX,[EBX + 0x108]               ; 00514ad6
    PUSH EAX                            ; 00514adc
    LEA EAX,[EBX + 0x104]               ; 00514add
    PUSH EAX                            ; 00514ae3
    PUSH 0x590d50                       ; 00514ae4 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514ae9
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514aea
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514aef | DAT_005be368
    MOV EDI,dword ptr [EAX + 0x15a8c4]  ; 00514af4 | DAT_01fb1b48
    ADD ESP,0x14                        ; 00514afa
    CMP EDI,0xb                         ; 00514afd
    JL 0x00514b15                       ; 00514b00
        ;   XREF to: 00514b15 (CONDITIONAL_JUMP)  ; LAB_00514b15
    PUSH ESI                            ; 00514b02
    PUSH 0xff                           ; 00514b03
    LEA EAX,[ESP + 0x8]                 ; 00514b08
    PUSH EAX                            ; 00514b0c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514b0d
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514b12
    LEA EAX,[EBX + 0x114]               ; 00514b15
        ;   Label: LAB_00514b15
    PUSH EAX                            ; 00514b1b
    LEA EAX,[EBX + 0x118]               ; 00514b1c
    PUSH EAX                            ; 00514b22
    LEA EAX,[EBX + 0x110]               ; 00514b23
    PUSH EAX                            ; 00514b29
    PUSH 0x590d5a                       ; 00514b2a | = "%f,%f,%f\n"
    PUSH ESI                            ; 00514b2f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514b30
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514b35 | DAT_005be368
    MOV EBP,dword ptr [EAX + 0x15a8c4]  ; 00514b3a | DAT_01fb1b48
    ADD ESP,0x14                        ; 00514b40
    CMP EBP,0xb                         ; 00514b43
    JL 0x00514b5b                       ; 00514b46
        ;   XREF to: 00514b5b (CONDITIONAL_JUMP)  ; LAB_00514b5b
    PUSH ESI                            ; 00514b48
    PUSH 0xff                           ; 00514b49
    LEA EAX,[ESP + 0x8]                 ; 00514b4e
    PUSH EAX                            ; 00514b52
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514b53
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514b58
    LEA EAX,[EBX + 0x11c]               ; 00514b5b
        ;   Label: LAB_00514b5b
    PUSH EAX                            ; 00514b61
    PUSH 0x590d64                       ; 00514b62 | = "%f\n"
    PUSH ESI                            ; 00514b67
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514b68
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514b6d | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x15a8c4]  ; 00514b72 | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514b78
    CMP EDX,0x15                        ; 00514b7b
    JL 0x00514fb4                       ; 00514b7e
        ;   XREF to: 00514fb4 (CONDITIONAL_JUMP)  ; LAB_00514fb4
    PUSH ESI                            ; 00514b84
    PUSH 0xff                           ; 00514b85
    LEA EAX,[ESP + 0x8]                 ; 00514b8a
    PUSH EAX                            ; 00514b8e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514b8f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514b94
    LEA EAX,[EBX + 0x120]               ; 00514b97
    PUSH EAX                            ; 00514b9d
    PUSH 0x590d68                       ; 00514b9e | = "%f\n"
    PUSH ESI                            ; 00514ba3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514ba4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00514ba9
    MOV EAX,[0x005be368]                ; 00514bac | DAT_005be368
        ;   Label: LAB_00514bac
    CMP dword ptr [EAX + 0x15a8c4],0x16 ; 00514bb1 | DAT_01fb1b48
    JL 0x00514fc3                       ; 00514bb8
        ;   XREF to: 00514fc3 (CONDITIONAL_JUMP)  ; LAB_00514fc3
    PUSH ESI                            ; 00514bbe
    PUSH 0xff                           ; 00514bbf
    LEA EAX,[ESP + 0x8]                 ; 00514bc4
    PUSH EAX                            ; 00514bc8
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514bc9
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514bce
    LEA EAX,[EBX + 0x124]               ; 00514bd1
    PUSH EAX                            ; 00514bd7
    PUSH 0x590d6c                       ; 00514bd8 | = "%f\n"
    PUSH ESI                            ; 00514bdd
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514bde
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00514be3
    MOV EAX,[0x005be368]                ; 00514be6 | DAT_005be368
        ;   Label: LAB_00514be6
    CMP dword ptr [EAX + 0x15a8c4],0xb  ; 00514beb | DAT_01fb1b48
    JL 0x00514c07                       ; 00514bf2
        ;   XREF to: 00514c07 (CONDITIONAL_JUMP)  ; LAB_00514c07
    PUSH ESI                            ; 00514bf4
    PUSH 0xff                           ; 00514bf5
    LEA EAX,[ESP + 0x8]                 ; 00514bfa
    PUSH EAX                            ; 00514bfe
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514bff
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514c04
    PUSH EBX                            ; 00514c07
        ;   Label: LAB_00514c07
    PUSH 0x590d70                       ; 00514c08 | = "%d\n"
    PUSH ESI                            ; 00514c0d
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514c0e
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514c13 | DAT_005be368
    MOV EBP,dword ptr [EAX + 0x15a8c4]  ; 00514c18 | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514c1e
    CMP EBP,0xb                         ; 00514c21
    JL 0x00514c39                       ; 00514c24
        ;   XREF to: 00514c39 (CONDITIONAL_JUMP)  ; LAB_00514c39
    PUSH ESI                            ; 00514c26
    PUSH 0xff                           ; 00514c27
    LEA EAX,[ESP + 0x8]                 ; 00514c2c
    PUSH EAX                            ; 00514c30
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514c31
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514c36
    LEA EAX,[EBX + 0x11d4]              ; 00514c39
        ;   Label: LAB_00514c39
    PUSH EAX                            ; 00514c3f
    LEA EAX,[EBX + 0x11d0]              ; 00514c40
    PUSH EAX                            ; 00514c46
    LEA EAX,[EBX + 0x11cc]              ; 00514c47
    PUSH EAX                            ; 00514c4d
    LEA EAX,[EBX + 0x11c8]              ; 00514c4e
    PUSH EAX                            ; 00514c54
    LEA EAX,[EBX + 0x11c4]              ; 00514c55
    PUSH EAX                            ; 00514c5b
    PUSH 0x590d74                       ; 00514c5c | = "%f,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00514c61
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514c62
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514c67 | DAT_005be368
    MOV EDX,dword ptr [EAX + 0x15a8c4]  ; 00514c6c | DAT_01fb1b48
    ADD ESP,0x1c                        ; 00514c72
    CMP EDX,0xb                         ; 00514c75
    JL 0x00514c8d                       ; 00514c78
        ;   XREF to: 00514c8d (CONDITIONAL_JUMP)  ; LAB_00514c8d
    PUSH ESI                            ; 00514c7a
    PUSH 0xff                           ; 00514c7b
    LEA EAX,[ESP + 0x8]                 ; 00514c80
    PUSH EAX                            ; 00514c84
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514c85
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514c8a
    LEA EAX,[EBX + 0x180c]              ; 00514c8d
        ;   Label: LAB_00514c8d
    PUSH EAX                            ; 00514c93
    LEA EAX,[EBX + 0x1808]              ; 00514c94
    PUSH EAX                            ; 00514c9a
    PUSH 0x590d84                       ; 00514c9b | = "%d,%d\n"
    PUSH ESI                            ; 00514ca0
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514ca1
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514ca6 | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x15a8c4]  ; 00514cab | DAT_01fb1b48
    ADD ESP,0x10                        ; 00514cb1
    CMP ECX,0xb                         ; 00514cb4
    JL 0x00514ccc                       ; 00514cb7
        ;   XREF to: 00514ccc (CONDITIONAL_JUMP)  ; LAB_00514ccc
    PUSH ESI                            ; 00514cb9
    PUSH 0xff                           ; 00514cba
    LEA EAX,[ESP + 0x8]                 ; 00514cbf
    PUSH EAX                            ; 00514cc3
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514cc4
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514cc9
    LEA EAX,[EBX + 0x11ec]              ; 00514ccc
        ;   Label: LAB_00514ccc
    PUSH EAX                            ; 00514cd2
    PUSH 0x590d8b                       ; 00514cd3 | = "%d\n"
    PUSH ESI                            ; 00514cd8
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514cd9
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514cde | DAT_005be368
    MOV EDI,dword ptr [EAX + 0x15a8c4]  ; 00514ce3 | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514ce9
    CMP EDI,0xb                         ; 00514cec
    JL 0x00514d04                       ; 00514cef
        ;   XREF to: 00514d04 (CONDITIONAL_JUMP)  ; LAB_00514d04
    PUSH ESI                            ; 00514cf1
    PUSH 0xff                           ; 00514cf2
    LEA EAX,[ESP + 0x8]                 ; 00514cf7
    PUSH EAX                            ; 00514cfb
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514cfc
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514d01
    MOV EAX,[0x005be368]                ; 00514d04 | DAT_005be368
        ;   Label: LAB_00514d04
    CMP dword ptr [EAX + 0x15a8c4],0x9  ; 00514d09 | DAT_01fb1b48
    JL 0x00514fd2                       ; 00514d10
        ;   XREF to: 00514fd2 (CONDITIONAL_JUMP)  ; LAB_00514fd2
    LEA EAX,[EBX + 0x11f0]              ; 00514d16
    PUSH EAX                            ; 00514d1c
    PUSH 0x590d8f                       ; 00514d1d | = "%d\n"
    PUSH ESI                            ; 00514d22
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514d23
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00514d28
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00514d2b
        ;   Label: LAB_00514d2b
    XOR EDI,EDI                         ; 00514d31
    TEST EAX,EAX                        ; 00514d33
    JLE 0x00514de9                      ; 00514d35
        ;   XREF to: 00514de9 (CONDITIONAL_JUMP)  ; LAB_00514de9
    LEA EAX,[EBX + 0x1774]              ; 00514d3b
    LEA EBP,[EBX + 0x16f4]              ; 00514d41
    MOV dword ptr [ESP + 0x120],EAX     ; 00514d47
    LEA EAX,[EBX + 0x11f4]              ; 00514d4e
    MOV dword ptr [ESP + 0x134],EAX     ; 00514d54
    MOV dword ptr [ESP + 0x130],EBX     ; 00514d5b
    LEA EDX,[EDI*0x4 + 0x0]             ; 00514d62
        ;   Label: LAB_00514d62
    MOV EAX,[0x005be368]                ; 00514d69 | DAT_005be368
    MOV dword ptr [ESP + 0x12c],EDX     ; 00514d6e
    CMP dword ptr [EAX + 0x15a8c4],0x10 ; 00514d75 | DAT_01fb1b48
    JGE 0x00514fe1                      ; 00514d7c
        ;   XREF to: 00514fe1 (CONDITIONAL_JUMP)  ; LAB_00514fe1
    MOV ECX,dword ptr [ESP + 0x134]     ; 00514d82
    PUSH ECX                            ; 00514d89
    PUSH EBP                            ; 00514d8a
    PUSH 0x590d93                       ; 00514d8b | = "%f,%s\n"
    PUSH ESI                            ; 00514d90
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514d91
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00514d96
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00514d99
    MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0 ; 00514da0
    MOV EAX,dword ptr [ESP + 0x130]     ; 00514dab
        ;   Label: LAB_00514dab
    MOV EDX,dword ptr [ESP + 0x134]     ; 00514db2
    ADD EBP,0x4                         ; 00514db9
    INC EDI                             ; 00514dbc
    ADD EDX,0x28                        ; 00514dbd
    LEA ECX,[EAX + 0x4]                 ; 00514dc0
    MOV dword ptr [EAX + 0x1810],0x0    ; 00514dc3
    MOV dword ptr [ESP + 0x134],EDX     ; 00514dcd
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00514dd4
    MOV dword ptr [ESP + 0x130],ECX     ; 00514dda
    CMP EDI,EAX                         ; 00514de1
    JL 0x00514d62                       ; 00514de3
        ;   XREF to: 00514d62 (CONDITIONAL_JUMP)  ; LAB_00514d62
    MOV EAX,[0x005be368]                ; 00514de9 | DAT_005be368
        ;   Label: LAB_00514de9
    CMP dword ptr [EAX + 0x15a8c4],0xb  ; 00514dee | DAT_01fb1b48
    JL 0x00514e0a                       ; 00514df5
        ;   XREF to: 00514e0a (CONDITIONAL_JUMP)  ; LAB_00514e0a
    PUSH ESI                            ; 00514df7
    PUSH 0xff                           ; 00514df8
    LEA EAX,[ESP + 0x8]                 ; 00514dfd
    PUSH EAX                            ; 00514e01
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514e02
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514e07
    LEA EAX,[EBX + 0x1890]              ; 00514e0a
        ;   Label: LAB_00514e0a
    PUSH EAX                            ; 00514e10
    PUSH 0x590da4                       ; 00514e11 | = "%d\n"
    PUSH ESI                            ; 00514e16
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514e17
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    MOV EAX,[0x005be368]                ; 00514e1c | DAT_005be368
    MOV ECX,dword ptr [EAX + 0x15a8c4]  ; 00514e21 | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514e27
    CMP ECX,0x13                        ; 00514e2a
    JL 0x0051500e                       ; 00514e2d
        ;   XREF to: 0051500e (CONDITIONAL_JUMP)  ; LAB_0051500e
    PUSH ESI                            ; 00514e33
    PUSH 0xff                           ; 00514e34
    LEA EAX,[ESP + 0x8]                 ; 00514e39
    PUSH EAX                            ; 00514e3d
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514e3e
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514e43
    LEA EAX,[EBX + 0x1804]              ; 00514e46
    PUSH EAX                            ; 00514e4c
    LEA EAX,[EBX + 0x1800]              ; 00514e4d
    PUSH EAX                            ; 00514e53
    LEA EAX,[EBX + 0x17fc]              ; 00514e54
    PUSH EAX                            ; 00514e5a
    LEA EAX,[EBX + 0x17f8]              ; 00514e5b
    PUSH EAX                            ; 00514e61
    LEA EAX,[EBX + 0x17f4]              ; 00514e62
    PUSH EAX                            ; 00514e68
    PUSH 0x590da8                       ; 00514e69 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00514e6e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514e6f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 00514e74
    MOV EAX,[0x005be368]                ; 00514e77 | DAT_005be368
        ;   Label: LAB_00514e77
    CMP dword ptr [EAX + 0x15a8c4],0xb  ; 00514e7c | DAT_01fb1b48
    JL 0x00514e98                       ; 00514e83
        ;   XREF to: 00514e98 (CONDITIONAL_JUMP)  ; LAB_00514e98
    PUSH ESI                            ; 00514e85
    PUSH 0xff                           ; 00514e86
    LEA EAX,[ESP + 0x8]                 ; 00514e8b
    PUSH EAX                            ; 00514e8f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514e90
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514e95
    LEA EAX,[EBX + 0x11e4]              ; 00514e98
        ;   Label: LAB_00514e98
    PUSH EAX                            ; 00514e9e
    LEA EAX,[EBX + 0x11e0]              ; 00514e9f
    PUSH EAX                            ; 00514ea5
    PUSH 0x590db8                       ; 00514ea6 | = "%f,%f\n"
    PUSH ESI                            ; 00514eab
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514eac
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00514eb1
    PUSH ESI                            ; 00514eb4
    PUSH 0xff                           ; 00514eb5
    LEA EAX,[ESP + 0x8]                 ; 00514eba
    PUSH EAX                            ; 00514ebe
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514ebf
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EBP,dword ptr [0x005be368]      ; 00514ec4 | DAT_005be368
    MOV EAX,dword ptr [EBP + 0x15a8c4]  ; 00514eca | DAT_01fb1b48
    ADD ESP,0xc                         ; 00514ed0
    CMP EAX,0xb                         ; 00514ed3
    JGE 0x005150a2                      ; 00514ed6
        ;   XREF to: 005150a2 (CONDITIONAL_JUMP)  ; LAB_005150a2
    MOV ECX,dword ptr [EBP + 0x15a8c4]  ; 00514edc | DAT_01fb1b48
    MOV EAX,0x64                        ; 00514ee2
    CMP ECX,0x7                         ; 00514ee7
    JL 0x00514efa                       ; 00514eea
        ;   XREF to: 00514efa (CONDITIONAL_JUMP)  ; LAB_00514efa
    CMP ECX,0x1a                        ; 00514eec
    JL 0x00515045                       ; 00514eef
        ;   XREF to: 00515045 (CONDITIONAL_JUMP)  ; LAB_00515045
    MOV EAX,0xfa                        ; 00514ef5
    TEST EAX,EAX                        ; 00514efa
        ;   Label: LAB_00514efa
    JLE 0x00514f73                      ; 00514efc
        ;   XREF to: 00514f73 (CONDITIONAL_JUMP)  ; LAB_00514f73
    LEA EDX,[EBX + 0x224]               ; 00514efe
    SHL EAX,0x4                         ; 00514f04
    XOR EDI,EDI                         ; 00514f07
    MOV EBP,EBX                         ; 00514f09
    MOV dword ptr [ESP + 0x128],EAX     ; 00514f0b
    MOV dword ptr [ESP + 0x124],EDX     ; 00514f12
    MOV EAX,[0x005be368]                ; 00514f19 | DAT_005be368
        ;   Label: LAB_00514f19
    CMP dword ptr [EAX + 0x15a8c4],0x2  ; 00514f1e | DAT_01fb1b48
    JL 0x0051504f                       ; 00514f25
        ;   XREF to: 0051504f (CONDITIONAL_JUMP)  ; LAB_0051504f
    MOV EAX,dword ptr [ESP + 0x124]     ; 00514f2b
    ADD EAX,EDI                         ; 00514f32
    LEA EDX,[EAX + 0xc]                 ; 00514f34
    PUSH EDX                            ; 00514f37
    LEA EDX,[EAX + 0x8]                 ; 00514f38
    PUSH EDX                            ; 00514f3b
    LEA EDX,[EAX + 0x4]                 ; 00514f3c
    PUSH EDX                            ; 00514f3f
    PUSH EAX                            ; 00514f40
    LEA EAX,[ESP + 0x118]               ; 00514f41
    PUSH EAX                            ; 00514f48
    PUSH 0x590dc3                       ; 00514f49 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00514f4e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00514f4f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 00514f54
    MOV AL,byte ptr [ESP + 0x108]       ; 00514f57
    MOV byte ptr [EBP + 0x128],AL       ; 00514f5e
    MOV EAX,dword ptr [ESP + 0x128]     ; 00514f64
        ;   Label: LAB_00514f64
    ADD EDI,0x10                        ; 00514f6b
    INC EBP                             ; 00514f6e
    CMP EDI,EAX                         ; 00514f6f
    JL 0x00514f19                       ; 00514f71
        ;   XREF to: 00514f19 (CONDITIONAL_JUMP)  ; LAB_00514f19
    FLD float ptr [EBX + 0x11d4]        ; 00514f73
        ;   Label: LAB_00514f73
    FLD1                                ; 00514f79
    FDIVRP                              ; 00514f7b
    FLD float ptr [EBX + 0x11d4]        ; 00514f7d
    FMUL ST0                            ; 00514f83
    FSTP float ptr [EBX + 0x11d8]       ; 00514f85
    FSTP float ptr [EBX + 0x11dc]       ; 00514f8b
    ADD ESP,0x138                       ; 00514f91
    POP EBP                             ; 00514f97
    POP EDI                             ; 00514f98
    POP ESI                             ; 00514f99
    POP EBX                             ; 00514f9a
    RET                                 ; 00514f9b
    PUSH ESI                            ; 00514f9c
        ;   Label: LAB_00514f9c
    PUSH 0xff                           ; 00514f9d
    LEA EAX,[ESP + 0x8]                 ; 00514fa2
    PUSH EAX                            ; 00514fa6
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00514fa7
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00514fac
    JMP 0x00514a9a                      ; 00514faf
        ;   XREF to: 00514a9a (UNCONDITIONAL_JUMP)  ; LAB_00514a9a
    MOV dword ptr [EBX + 0x120],0x3f800000 ; 00514fb4
        ;   Label: LAB_00514fb4
    JMP 0x00514bac                      ; 00514fbe
        ;   XREF to: 00514bac (UNCONDITIONAL_JUMP)  ; LAB_00514bac
    MOV dword ptr [EBX + 0x124],0x3f800000 ; 00514fc3
        ;   Label: LAB_00514fc3
    JMP 0x00514be6                      ; 00514fcd
        ;   XREF to: 00514be6 (UNCONDITIONAL_JUMP)  ; LAB_00514be6
    MOV dword ptr [EBX + 0x11f0],0x1    ; 00514fd2
        ;   Label: LAB_00514fd2
    JMP 0x00514d2b                      ; 00514fdc
        ;   XREF to: 00514d2b (UNCONDITIONAL_JUMP)  ; LAB_00514d2b
    MOV ECX,dword ptr [ESP + 0x134]     ; 00514fe1
        ;   Label: LAB_00514fe1
    MOV EAX,dword ptr [ESP + 0x120]     ; 00514fe8
    MOV EDX,dword ptr [ESP + 0x12c]     ; 00514fef
    PUSH ECX                            ; 00514ff6
    ADD EAX,EDX                         ; 00514ff7
    PUSH EAX                            ; 00514ff9
    PUSH EBP                            ; 00514ffa
    PUSH 0x590d9a                       ; 00514ffb | = "%f,%d,%s\n"
    PUSH ESI                            ; 00515000
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00515001
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00515006
    JMP 0x00514dab                      ; 00515009
        ;   XREF to: 00514dab (UNCONDITIONAL_JUMP)  ; LAB_00514dab
    MOV dword ptr [EBX + 0x17f8],0x0    ; 0051500e
        ;   Label: LAB_0051500e
    MOV dword ptr [EBX + 0x17fc],0x0    ; 00515018
    MOV dword ptr [EBX + 0x1800],0x0    ; 00515022
    MOV dword ptr [EBX + 0x1804],0x0    ; 0051502c
    MOV dword ptr [EBX + 0x17f4],0x0    ; 00515036
    JMP 0x00514e77                      ; 00515040
        ;   XREF to: 00514e77 (UNCONDITIONAL_JUMP)  ; LAB_00514e77
    MOV EAX,0xc8                        ; 00515045
        ;   Label: LAB_00515045
    JMP 0x00514efa                      ; 0051504a
        ;   XREF to: 00514efa (UNCONDITIONAL_JUMP)  ; LAB_00514efa
    LEA EAX,[ESP + 0x104]               ; 0051504f
        ;   Label: LAB_0051504f
    PUSH EAX                            ; 00515056
    PUSH 0x590dbf                       ; 00515057 | = "%d\n"
    PUSH ESI                            ; 0051505c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0051505d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00515062
    MOV AL,byte ptr [ESP + 0x104]       ; 00515065
    MOV byte ptr [EBP + 0x128],AL       ; 0051506c
    LEA EAX,[EBX + EDI*0x1]             ; 00515072
    MOV dword ptr [EAX + 0x224],0x1     ; 00515075
    MOV dword ptr [EAX + 0x228],0x13e   ; 0051507f
    MOV dword ptr [EAX + 0x22c],0x1     ; 00515089
    MOV dword ptr [EAX + 0x230],0xee    ; 00515093
    JMP 0x00514f64                      ; 0051509d
        ;   XREF to: 00514f64 (UNCONDITIONAL_JUMP)  ; LAB_00514f64
    PUSH 0xfa                           ; 005150a2
        ;   Label: LAB_005150a2
    PUSH 0x0                            ; 005150a7
    LEA EAX,[EBX + 0x128]               ; 005150a9
    PUSH EAX                            ; 005150af
    CALL crt_memory.c_memset_FUN_00563cc0 ; 005150b0
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005150b5
    PUSH 0xfa0                          ; 005150b8
    PUSH 0x0                            ; 005150bd
    LEA EAX,[EBX + 0x224]               ; 005150bf
    PUSH EAX                            ; 005150c5
    CALL crt_memory.c_memset_FUN_00563cc0 ; 005150c6
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005150cb
    LEA EAX,[ESP + 0x100]               ; 005150ce
    PUSH EAX                            ; 005150d5
    PUSH 0x590dd3                       ; 005150d6 | = "%d\n"
    PUSH ESI                            ; 005150db
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005150dc
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 005150e1
    MOV EDX,dword ptr [ESP + 0x100]     ; 005150e4
    XOR EBP,EBP                         ; 005150eb
    TEST EDX,EDX                        ; 005150ed
    JLE 0x00514f73                      ; 005150ef
        ;   XREF to: 00514f73 (CONDITIONAL_JUMP)  ; LAB_00514f73
    LEA EAX,[ESP + 0x11c]               ; 005150f5
        ;   Label: LAB_005150f5
    PUSH EAX                            ; 005150fc
    LEA EAX,[ESP + 0x118]               ; 005150fd
    PUSH EAX                            ; 00515104
    LEA EAX,[ESP + 0x120]               ; 00515105
    PUSH EAX                            ; 0051510c
    LEA EAX,[ESP + 0x11c]               ; 0051510d
    PUSH EAX                            ; 00515114
    LEA EAX,[ESP + 0x11c]               ; 00515115
    PUSH EAX                            ; 0051511c
    PUSH 0x590dd7                       ; 0051511d | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00515122
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00515123
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x1c                        ; 00515128
    CMP dword ptr [ESP + 0x10c],0xfa    ; 0051512b
    JGE 0x005151c4                      ; 00515136
        ;   XREF to: 005151c4 (CONDITIONAL_JUMP)  ; LAB_005151c4
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0051513c
        ;   Label: LAB_0051513c
    MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1 ; 00515143
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0051514b
    SHL EDX,0x4                         ; 00515152
    MOV EAX,dword ptr [ESP + 0x110]     ; 00515155
    MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX ; 0051515c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00515163
    SHL EAX,0x4                         ; 0051516a
    LEA EDX,[EBX + EAX*0x1]             ; 0051516d
    MOV EAX,dword ptr [ESP + 0x118]     ; 00515170
    MOV dword ptr [EDX + 0x228],EAX     ; 00515177
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0051517d
    SHL EAX,0x4                         ; 00515184
    LEA EDX,[EBX + EAX*0x1]             ; 00515187
    MOV EAX,dword ptr [ESP + 0x114]     ; 0051518a
    MOV dword ptr [EDX + 0x22c],EAX     ; 00515191
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00515197
    SHL EAX,0x4                         ; 0051519e
    LEA EDX,[EBX + EAX*0x1]             ; 005151a1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005151a4
    MOV dword ptr [EDX + 0x230],EAX     ; 005151ab
    INC EBP                             ; 005151b1
    CMP EBP,dword ptr [ESP + 0x100]     ; 005151b2
    JGE 0x00514f73                      ; 005151b9
        ;   XREF to: 00514f73 (CONDITIONAL_JUMP)  ; LAB_00514f73
    JMP 0x005150f5                      ; 005151bf
        ;   XREF to: 005150f5 (UNCONDITIONAL_JUMP)  ; LAB_005150f5
    MOV EDX,0x590de7                    ; 005151c4 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_005151c4
    MOV ECX,0x2a5                       ; 005151c9
    PUSH 0x590dfb                       ; 005151ce | = "Invalid camera number in visiblilty l..."
    MOV dword ptr [0x01cc4800],EDX      ; 005151d3 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005151d9 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005151df
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005151e4
    JMP 0x0051513c                      ; 005151e7
        ;   XREF to: 0051513c (UNCONDITIONAL_JUMP)  ; LAB_0051513c

