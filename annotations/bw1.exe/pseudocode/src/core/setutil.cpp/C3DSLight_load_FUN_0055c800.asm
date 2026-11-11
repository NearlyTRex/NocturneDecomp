; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_load_FUN_0055c800(C3DSLight *this_ptr,_FILE *file_handle)
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
;   core_set.cpp_FUN_0054d3c0 at 0054d883
;
; Referenced Globals:
;   TerminatedCString s_anon_005f11f1
;   TerminatedCString s_f_f_f_005f11f8
;   TerminatedCString s_f_f_f_005f1202
;   undefined4 DAT_005f120c
;   undefined4 DAT_005f1210
;   undefined4 DAT_005f1214
;   undefined4 DAT_005f1218
;   TerminatedCString s_f_f_f_f_f_005f121c
;   TerminatedCString s_d_d_005f122c
;   undefined4 DAT_005f1233
;   undefined4 DAT_005f1237
;   TerminatedCString s_f_s_005f123b
;   TerminatedCString s_f_d_s_005f1242
;   undefined4 DAT_005f124c
;   TerminatedCString s_d_d_d_d_d_005f1250
;   ... and 11 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c800
        ;   Label: core_setutil.cpp_C3DSLight_load_FUN_0055c800
    PUSH ESI                            ; 0055c801
    PUSH EDI                            ; 0055c802
    PUSH EBP                            ; 0055c803
    SUB ESP,0x138                       ; 0055c804
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0055c80a
    MOV ESI,dword ptr [ESP + 0x150]     ; 0055c811
    MOV EAX,[0x00622c18]                ; 0055c818 | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0055c81d | g_CDemonSetInstance.set_file_version
    JGE 0x0055cd2c                      ; 0055c824
        ;   XREF to: 0055cd2c (CONDITIONAL_JUMP)  ; LAB_0055cd2c
    LEA EAX,[EBX + 0x4]                 ; 0055c82a
        ;   Label: LAB_0055c82a
    PUSH EAX                            ; 0055c82d
    PUSH 0x5f11f1                       ; 0055c82e | = "%[^\n]\n"
    PUSH ESI                            ; 0055c833
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c834
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c839 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0055c83e | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055c844
    CMP ECX,0xb                         ; 0055c847
    JL 0x0055c85f                       ; 0055c84a
        ;   XREF to: 0055c85f (CONDITIONAL_JUMP)  ; LAB_0055c85f
    PUSH ESI                            ; 0055c84c
    PUSH 0xff                           ; 0055c84d
    LEA EAX,[ESP + 0x8]                 ; 0055c852
    PUSH EAX                            ; 0055c856
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c857
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c85c
    LEA EAX,[EBX + 0x10c]               ; 0055c85f
        ;   Label: LAB_0055c85f
    PUSH EAX                            ; 0055c865
    LEA EAX,[EBX + 0x108]               ; 0055c866
    PUSH EAX                            ; 0055c86c
    LEA EAX,[EBX + 0x104]               ; 0055c86d
    PUSH EAX                            ; 0055c873
    PUSH 0x5f11f8                       ; 0055c874 | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c879
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c87a
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c87f | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0055c884 | g_CDemonSetInstance.set_file_version
    ADD ESP,0x14                        ; 0055c88a
    CMP EDI,0xb                         ; 0055c88d
    JL 0x0055c8a5                       ; 0055c890
        ;   XREF to: 0055c8a5 (CONDITIONAL_JUMP)  ; LAB_0055c8a5
    PUSH ESI                            ; 0055c892
    PUSH 0xff                           ; 0055c893
    LEA EAX,[ESP + 0x8]                 ; 0055c898
    PUSH EAX                            ; 0055c89c
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c89d
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c8a2
    LEA EAX,[EBX + 0x114]               ; 0055c8a5
        ;   Label: LAB_0055c8a5
    PUSH EAX                            ; 0055c8ab
    LEA EAX,[EBX + 0x118]               ; 0055c8ac
    PUSH EAX                            ; 0055c8b2
    LEA EAX,[EBX + 0x110]               ; 0055c8b3
    PUSH EAX                            ; 0055c8b9
    PUSH 0x5f1202                       ; 0055c8ba | = "%f,%f,%f\n"
    PUSH ESI                            ; 0055c8bf
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c8c0
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c8c5 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0055c8ca | g_CDemonSetInstance.set_file_version
    ADD ESP,0x14                        ; 0055c8d0
    CMP EBP,0xb                         ; 0055c8d3
    JL 0x0055c8eb                       ; 0055c8d6
        ;   XREF to: 0055c8eb (CONDITIONAL_JUMP)  ; LAB_0055c8eb
    PUSH ESI                            ; 0055c8d8
    PUSH 0xff                           ; 0055c8d9
    LEA EAX,[ESP + 0x8]                 ; 0055c8de
    PUSH EAX                            ; 0055c8e2
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c8e3
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c8e8
    LEA EAX,[EBX + 0x11c]               ; 0055c8eb
        ;   Label: LAB_0055c8eb
    PUSH EAX                            ; 0055c8f1
    PUSH 0x5f120c                       ; 0055c8f2 | DAT_005f120c
    PUSH ESI                            ; 0055c8f7
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c8f8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c8fd | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0055c902 | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055c908
    CMP EDX,0x15                        ; 0055c90b
    JL 0x0055cd44                       ; 0055c90e
        ;   XREF to: 0055cd44 (CONDITIONAL_JUMP)  ; LAB_0055cd44
    PUSH ESI                            ; 0055c914
    PUSH 0xff                           ; 0055c915
    LEA EAX,[ESP + 0x8]                 ; 0055c91a
    PUSH EAX                            ; 0055c91e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c91f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c924
    LEA EAX,[EBX + 0x120]               ; 0055c927
    PUSH EAX                            ; 0055c92d
    PUSH 0x5f1210                       ; 0055c92e | DAT_005f1210
    PUSH ESI                            ; 0055c933
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c934
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055c939
    MOV EAX,[0x00622c18]                ; 0055c93c | g_CDemonSetPtr
        ;   Label: LAB_0055c93c
    CMP dword ptr [EAX + 0x15acc0],0x16 ; 0055c941 | g_CDemonSetInstance.set_file_version
    JL 0x0055cd53                       ; 0055c948
        ;   XREF to: 0055cd53 (CONDITIONAL_JUMP)  ; LAB_0055cd53
    PUSH ESI                            ; 0055c94e
    PUSH 0xff                           ; 0055c94f
    LEA EAX,[ESP + 0x8]                 ; 0055c954
    PUSH EAX                            ; 0055c958
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c959
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c95e
    LEA EAX,[EBX + 0x124]               ; 0055c961
    PUSH EAX                            ; 0055c967
    PUSH 0x5f1214                       ; 0055c968 | DAT_005f1214
    PUSH ESI                            ; 0055c96d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c96e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055c973
    MOV EAX,[0x00622c18]                ; 0055c976 | g_CDemonSetPtr
        ;   Label: LAB_0055c976
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0055c97b | g_CDemonSetInstance.set_file_version
    JL 0x0055c997                       ; 0055c982
        ;   XREF to: 0055c997 (CONDITIONAL_JUMP)  ; LAB_0055c997
    PUSH ESI                            ; 0055c984
    PUSH 0xff                           ; 0055c985
    LEA EAX,[ESP + 0x8]                 ; 0055c98a
    PUSH EAX                            ; 0055c98e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c98f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c994
    PUSH EBX                            ; 0055c997
        ;   Label: LAB_0055c997
    PUSH 0x5f1218                       ; 0055c998 | DAT_005f1218
    PUSH ESI                            ; 0055c99d
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c99e
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c9a3 | g_CDemonSetPtr
    MOV EBP,dword ptr [EAX + 0x15acc0]  ; 0055c9a8 | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055c9ae
    CMP EBP,0xb                         ; 0055c9b1
    JL 0x0055c9c9                       ; 0055c9b4
        ;   XREF to: 0055c9c9 (CONDITIONAL_JUMP)  ; LAB_0055c9c9
    PUSH ESI                            ; 0055c9b6
    PUSH 0xff                           ; 0055c9b7
    LEA EAX,[ESP + 0x8]                 ; 0055c9bc
    PUSH EAX                            ; 0055c9c0
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055c9c1
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055c9c6
    LEA EAX,[EBX + 0x11d4]              ; 0055c9c9
        ;   Label: LAB_0055c9c9
    PUSH EAX                            ; 0055c9cf
    LEA EAX,[EBX + 0x11d0]              ; 0055c9d0
    PUSH EAX                            ; 0055c9d6
    LEA EAX,[EBX + 0x11cc]              ; 0055c9d7
    PUSH EAX                            ; 0055c9dd
    LEA EAX,[EBX + 0x11c8]              ; 0055c9de
    PUSH EAX                            ; 0055c9e4
    LEA EAX,[EBX + 0x11c4]              ; 0055c9e5
    PUSH EAX                            ; 0055c9eb
    PUSH 0x5f121c                       ; 0055c9ec | = "%f,%f,%f,%f,%f\n"
    PUSH ESI                            ; 0055c9f1
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055c9f2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055c9f7 | g_CDemonSetPtr
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 0055c9fc | g_CDemonSetInstance.set_file_version
    ADD ESP,0x1c                        ; 0055ca02
    CMP EDX,0xb                         ; 0055ca05
    JL 0x0055ca1d                       ; 0055ca08
        ;   XREF to: 0055ca1d (CONDITIONAL_JUMP)  ; LAB_0055ca1d
    PUSH ESI                            ; 0055ca0a
    PUSH 0xff                           ; 0055ca0b
    LEA EAX,[ESP + 0x8]                 ; 0055ca10
    PUSH EAX                            ; 0055ca14
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055ca15
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055ca1a
    LEA EAX,[EBX + 0x180c]              ; 0055ca1d
        ;   Label: LAB_0055ca1d
    PUSH EAX                            ; 0055ca23
    LEA EAX,[EBX + 0x1808]              ; 0055ca24
    PUSH EAX                            ; 0055ca2a
    PUSH 0x5f122c                       ; 0055ca2b | = "%d,%d\n"
    PUSH ESI                            ; 0055ca30
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055ca31
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055ca36 | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0055ca3b | g_CDemonSetInstance.set_file_version
    ADD ESP,0x10                        ; 0055ca41
    CMP ECX,0xb                         ; 0055ca44
    JL 0x0055ca5c                       ; 0055ca47
        ;   XREF to: 0055ca5c (CONDITIONAL_JUMP)  ; LAB_0055ca5c
    PUSH ESI                            ; 0055ca49
    PUSH 0xff                           ; 0055ca4a
    LEA EAX,[ESP + 0x8]                 ; 0055ca4f
    PUSH EAX                            ; 0055ca53
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055ca54
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055ca59
    LEA EAX,[EBX + 0x11ec]              ; 0055ca5c
        ;   Label: LAB_0055ca5c
    PUSH EAX                            ; 0055ca62
    PUSH 0x5f1233                       ; 0055ca63 | DAT_005f1233
    PUSH ESI                            ; 0055ca68
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055ca69
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055ca6e | g_CDemonSetPtr
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 0055ca73 | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055ca79
    CMP EDI,0xb                         ; 0055ca7c
    JL 0x0055ca94                       ; 0055ca7f
        ;   XREF to: 0055ca94 (CONDITIONAL_JUMP)  ; LAB_0055ca94
    PUSH ESI                            ; 0055ca81
    PUSH 0xff                           ; 0055ca82
    LEA EAX,[ESP + 0x8]                 ; 0055ca87
    PUSH EAX                            ; 0055ca8b
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055ca8c
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055ca91
    MOV EAX,[0x00622c18]                ; 0055ca94 | g_CDemonSetPtr
        ;   Label: LAB_0055ca94
    CMP dword ptr [EAX + 0x15acc0],0x9  ; 0055ca99 | g_CDemonSetInstance.set_file_version
    JL 0x0055cd62                       ; 0055caa0
        ;   XREF to: 0055cd62 (CONDITIONAL_JUMP)  ; LAB_0055cd62
    LEA EAX,[EBX + 0x11f0]              ; 0055caa6
    PUSH EAX                            ; 0055caac
    PUSH 0x5f1237                       ; 0055caad | DAT_005f1237
    PUSH ESI                            ; 0055cab2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cab3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055cab8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0055cabb
        ;   Label: LAB_0055cabb
    XOR EDI,EDI                         ; 0055cac1
    TEST EAX,EAX                        ; 0055cac3
    JLE 0x0055cb79                      ; 0055cac5
        ;   XREF to: 0055cb79 (CONDITIONAL_JUMP)  ; LAB_0055cb79
    LEA EAX,[EBX + 0x1774]              ; 0055cacb
    LEA EBP,[EBX + 0x16f4]              ; 0055cad1
    MOV dword ptr [ESP + 0x120],EAX     ; 0055cad7
    LEA EAX,[EBX + 0x11f4]              ; 0055cade
    MOV dword ptr [ESP + 0x134],EAX     ; 0055cae4
    MOV dword ptr [ESP + 0x130],EBX     ; 0055caeb
    LEA EDX,[EDI*0x4 + 0x0]             ; 0055caf2
        ;   Label: LAB_0055caf2
    MOV EAX,[0x00622c18]                ; 0055caf9 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x12c],EDX     ; 0055cafe
    CMP dword ptr [EAX + 0x15acc0],0x10 ; 0055cb05 | g_CDemonSetInstance.set_file_version
    JGE 0x0055cd71                      ; 0055cb0c
        ;   XREF to: 0055cd71 (CONDITIONAL_JUMP)  ; LAB_0055cd71
    MOV ECX,dword ptr [ESP + 0x134]     ; 0055cb12
    PUSH ECX                            ; 0055cb19
    PUSH EBP                            ; 0055cb1a
    PUSH 0x5f123b                       ; 0055cb1b | = "%f,%s\n"
    PUSH ESI                            ; 0055cb20
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cb21
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 0055cb26
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0055cb29
    MOV dword ptr [EBX + EAX*0x1 + 0x1774],0x0 ; 0055cb30
    MOV EAX,dword ptr [ESP + 0x130]     ; 0055cb3b
        ;   Label: LAB_0055cb3b
    MOV EDX,dword ptr [ESP + 0x134]     ; 0055cb42
    ADD EBP,0x4                         ; 0055cb49
    INC EDI                             ; 0055cb4c
    ADD EDX,0x28                        ; 0055cb4d
    LEA ECX,[EAX + 0x4]                 ; 0055cb50
    MOV dword ptr [EAX + 0x1810],0x0    ; 0055cb53
    MOV dword ptr [ESP + 0x134],EDX     ; 0055cb5d
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 0055cb64
    MOV dword ptr [ESP + 0x130],ECX     ; 0055cb6a
    CMP EDI,EAX                         ; 0055cb71
    JL 0x0055caf2                       ; 0055cb73
        ;   XREF to: 0055caf2 (CONDITIONAL_JUMP)  ; LAB_0055caf2
    MOV EAX,[0x00622c18]                ; 0055cb79 | g_CDemonSetPtr
        ;   Label: LAB_0055cb79
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0055cb7e | g_CDemonSetInstance.set_file_version
    JL 0x0055cb9a                       ; 0055cb85
        ;   XREF to: 0055cb9a (CONDITIONAL_JUMP)  ; LAB_0055cb9a
    PUSH ESI                            ; 0055cb87
    PUSH 0xff                           ; 0055cb88
    LEA EAX,[ESP + 0x8]                 ; 0055cb8d
    PUSH EAX                            ; 0055cb91
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055cb92
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055cb97
    LEA EAX,[EBX + 0x1890]              ; 0055cb9a
        ;   Label: LAB_0055cb9a
    PUSH EAX                            ; 0055cba0
    PUSH 0x5f124c                       ; 0055cba1 | DAT_005f124c
    PUSH ESI                            ; 0055cba6
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cba7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    MOV EAX,[0x00622c18]                ; 0055cbac | g_CDemonSetPtr
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 0055cbb1 | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055cbb7
    CMP ECX,0x13                        ; 0055cbba
    JL 0x0055cd9e                       ; 0055cbbd
        ;   XREF to: 0055cd9e (CONDITIONAL_JUMP)  ; LAB_0055cd9e
    PUSH ESI                            ; 0055cbc3
    PUSH 0xff                           ; 0055cbc4
    LEA EAX,[ESP + 0x8]                 ; 0055cbc9
    PUSH EAX                            ; 0055cbcd
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055cbce
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055cbd3
    LEA EAX,[EBX + 0x1804]              ; 0055cbd6
    PUSH EAX                            ; 0055cbdc
    LEA EAX,[EBX + 0x1800]              ; 0055cbdd
    PUSH EAX                            ; 0055cbe3
    LEA EAX,[EBX + 0x17fc]              ; 0055cbe4
    PUSH EAX                            ; 0055cbea
    LEA EAX,[EBX + 0x17f8]              ; 0055cbeb
    PUSH EAX                            ; 0055cbf1
    LEA EAX,[EBX + 0x17f4]              ; 0055cbf2
    PUSH EAX                            ; 0055cbf8
    PUSH 0x5f1250                       ; 0055cbf9 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0055cbfe
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cbff
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x1c                        ; 0055cc04
    MOV EAX,[0x00622c18]                ; 0055cc07 | g_CDemonSetPtr
        ;   Label: LAB_0055cc07
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 0055cc0c | g_CDemonSetInstance.set_file_version
    JL 0x0055cc28                       ; 0055cc13
        ;   XREF to: 0055cc28 (CONDITIONAL_JUMP)  ; LAB_0055cc28
    PUSH ESI                            ; 0055cc15
    PUSH 0xff                           ; 0055cc16
    LEA EAX,[ESP + 0x8]                 ; 0055cc1b
    PUSH EAX                            ; 0055cc1f
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055cc20
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055cc25
    LEA EAX,[EBX + 0x11e4]              ; 0055cc28
        ;   Label: LAB_0055cc28
    PUSH EAX                            ; 0055cc2e
    LEA EAX,[EBX + 0x11e0]              ; 0055cc2f
    PUSH EAX                            ; 0055cc35
    PUSH 0x5f1260                       ; 0055cc36 | = "%f,%f\n"
    PUSH ESI                            ; 0055cc3b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cc3c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 0055cc41
    PUSH ESI                            ; 0055cc44
    PUSH 0xff                           ; 0055cc45
    LEA EAX,[ESP + 0x8]                 ; 0055cc4a
    PUSH EAX                            ; 0055cc4e
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055cc4f
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    MOV EBP,dword ptr [0x00622c18]      ; 0055cc54 | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0x15acc0]  ; 0055cc5a | g_CDemonSetInstance.set_file_version
    ADD ESP,0xc                         ; 0055cc60
    CMP EAX,0xb                         ; 0055cc63
    JGE 0x0055ce32                      ; 0055cc66
        ;   XREF to: 0055ce32 (CONDITIONAL_JUMP)  ; LAB_0055ce32
    MOV ECX,dword ptr [EBP + 0x15acc0]  ; 0055cc6c | g_CDemonSetInstance.set_file_version
    MOV EAX,0x64                        ; 0055cc72
    CMP ECX,0x7                         ; 0055cc77
    JL 0x0055cc8a                       ; 0055cc7a
        ;   XREF to: 0055cc8a (CONDITIONAL_JUMP)  ; LAB_0055cc8a
    CMP ECX,0x1a                        ; 0055cc7c
    JL 0x0055cdd5                       ; 0055cc7f
        ;   XREF to: 0055cdd5 (CONDITIONAL_JUMP)  ; LAB_0055cdd5
    MOV EAX,0xfa                        ; 0055cc85
    TEST EAX,EAX                        ; 0055cc8a
        ;   Label: LAB_0055cc8a
    JLE 0x0055cd03                      ; 0055cc8c
        ;   XREF to: 0055cd03 (CONDITIONAL_JUMP)  ; LAB_0055cd03
    LEA EDX,[EBX + 0x224]               ; 0055cc8e
    SHL EAX,0x4                         ; 0055cc94
    XOR EDI,EDI                         ; 0055cc97
    MOV EBP,EBX                         ; 0055cc99
    MOV dword ptr [ESP + 0x128],EAX     ; 0055cc9b
    MOV dword ptr [ESP + 0x124],EDX     ; 0055cca2
    MOV EAX,[0x00622c18]                ; 0055cca9 | g_CDemonSetPtr
        ;   Label: LAB_0055cca9
    CMP dword ptr [EAX + 0x15acc0],0x2  ; 0055ccae | g_CDemonSetInstance.set_file_version
    JL 0x0055cddf                       ; 0055ccb5
        ;   XREF to: 0055cddf (CONDITIONAL_JUMP)  ; LAB_0055cddf
    MOV EAX,dword ptr [ESP + 0x124]     ; 0055ccbb
    ADD EAX,EDI                         ; 0055ccc2
    LEA EDX,[EAX + 0xc]                 ; 0055ccc4
    PUSH EDX                            ; 0055ccc7
    LEA EDX,[EAX + 0x8]                 ; 0055ccc8
    PUSH EDX                            ; 0055cccb
    LEA EDX,[EAX + 0x4]                 ; 0055cccc
    PUSH EDX                            ; 0055cccf
    PUSH EAX                            ; 0055ccd0
    LEA EAX,[ESP + 0x118]               ; 0055ccd1
    PUSH EAX                            ; 0055ccd8
    PUSH 0x5f126b                       ; 0055ccd9 | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0055ccde
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055ccdf
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x1c                        ; 0055cce4
    MOV AL,byte ptr [ESP + 0x108]       ; 0055cce7
    MOV byte ptr [EBP + 0x128],AL       ; 0055ccee
    MOV EAX,dword ptr [ESP + 0x128]     ; 0055ccf4
        ;   Label: LAB_0055ccf4
    ADD EDI,0x10                        ; 0055ccfb
    INC EBP                             ; 0055ccfe
    CMP EDI,EAX                         ; 0055ccff
    JL 0x0055cca9                       ; 0055cd01
        ;   XREF to: 0055cca9 (CONDITIONAL_JUMP)  ; LAB_0055cca9
    FLD float ptr [EBX + 0x11d4]        ; 0055cd03
        ;   Label: LAB_0055cd03
    FLD1                                ; 0055cd09
    FDIVRP                              ; 0055cd0b
    FLD float ptr [EBX + 0x11d4]        ; 0055cd0d
    FMUL ST0                            ; 0055cd13
    FSTP float ptr [EBX + 0x11d8]       ; 0055cd15
    FSTP float ptr [EBX + 0x11dc]       ; 0055cd1b
    ADD ESP,0x138                       ; 0055cd21
    POP EBP                             ; 0055cd27
    POP EDI                             ; 0055cd28
    POP ESI                             ; 0055cd29
    POP EBX                             ; 0055cd2a
    RET                                 ; 0055cd2b
    PUSH ESI                            ; 0055cd2c
        ;   Label: LAB_0055cd2c
    PUSH 0xff                           ; 0055cd2d
    LEA EAX,[ESP + 0x8]                 ; 0055cd32
    PUSH EAX                            ; 0055cd36
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0055cd37
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 0055cd3c
    JMP 0x0055c82a                      ; 0055cd3f
        ;   XREF to: 0055c82a (UNCONDITIONAL_JUMP)  ; LAB_0055c82a
    MOV dword ptr [EBX + 0x120],0x3f800000 ; 0055cd44
        ;   Label: LAB_0055cd44
    JMP 0x0055c93c                      ; 0055cd4e
        ;   XREF to: 0055c93c (UNCONDITIONAL_JUMP)  ; LAB_0055c93c
    MOV dword ptr [EBX + 0x124],0x3f800000 ; 0055cd53
        ;   Label: LAB_0055cd53
    JMP 0x0055c976                      ; 0055cd5d
        ;   XREF to: 0055c976 (UNCONDITIONAL_JUMP)  ; LAB_0055c976
    MOV dword ptr [EBX + 0x11f0],0x1    ; 0055cd62
        ;   Label: LAB_0055cd62
    JMP 0x0055cabb                      ; 0055cd6c
        ;   XREF to: 0055cabb (UNCONDITIONAL_JUMP)  ; LAB_0055cabb
    MOV ECX,dword ptr [ESP + 0x134]     ; 0055cd71
        ;   Label: LAB_0055cd71
    MOV EAX,dword ptr [ESP + 0x120]     ; 0055cd78
    MOV EDX,dword ptr [ESP + 0x12c]     ; 0055cd7f
    PUSH ECX                            ; 0055cd86
    ADD EAX,EDX                         ; 0055cd87
    PUSH EAX                            ; 0055cd89
    PUSH EBP                            ; 0055cd8a
    PUSH 0x5f1242                       ; 0055cd8b | = "%f,%d,%s\n"
    PUSH ESI                            ; 0055cd90
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cd91
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0055cd96
    JMP 0x0055cb3b                      ; 0055cd99
        ;   XREF to: 0055cb3b (UNCONDITIONAL_JUMP)  ; LAB_0055cb3b
    MOV dword ptr [EBX + 0x17f8],0x0    ; 0055cd9e
        ;   Label: LAB_0055cd9e
    MOV dword ptr [EBX + 0x17fc],0x0    ; 0055cda8
    MOV dword ptr [EBX + 0x1800],0x0    ; 0055cdb2
    MOV dword ptr [EBX + 0x1804],0x0    ; 0055cdbc
    MOV dword ptr [EBX + 0x17f4],0x0    ; 0055cdc6
    JMP 0x0055cc07                      ; 0055cdd0
        ;   XREF to: 0055cc07 (UNCONDITIONAL_JUMP)  ; LAB_0055cc07
    MOV EAX,0xc8                        ; 0055cdd5
        ;   Label: LAB_0055cdd5
    JMP 0x0055cc8a                      ; 0055cdda
        ;   XREF to: 0055cc8a (UNCONDITIONAL_JUMP)  ; LAB_0055cc8a
    LEA EAX,[ESP + 0x104]               ; 0055cddf
        ;   Label: LAB_0055cddf
    PUSH EAX                            ; 0055cde6
    PUSH 0x5f1267                       ; 0055cde7 | DAT_005f1267
    PUSH ESI                            ; 0055cdec
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055cded
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055cdf2
    MOV AL,byte ptr [ESP + 0x104]       ; 0055cdf5
    MOV byte ptr [EBP + 0x128],AL       ; 0055cdfc
    LEA EAX,[EBX + EDI*0x1]             ; 0055ce02
    MOV dword ptr [EAX + 0x224],0x1     ; 0055ce05
    MOV dword ptr [EAX + 0x228],0x13e   ; 0055ce0f
    MOV dword ptr [EAX + 0x22c],0x1     ; 0055ce19
    MOV dword ptr [EAX + 0x230],0xee    ; 0055ce23
    JMP 0x0055ccf4                      ; 0055ce2d
        ;   XREF to: 0055ccf4 (UNCONDITIONAL_JUMP)  ; LAB_0055ccf4
    PUSH 0xfa                           ; 0055ce32
        ;   Label: LAB_0055ce32
    PUSH 0x0                            ; 0055ce37
    LEA EAX,[EBX + 0x128]               ; 0055ce39
    PUSH EAX                            ; 0055ce3f
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0055ce40
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055ce45
    PUSH 0xfa0                          ; 0055ce48
    PUSH 0x0                            ; 0055ce4d
    LEA EAX,[EBX + 0x224]               ; 0055ce4f
    PUSH EAX                            ; 0055ce55
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0055ce56
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055ce5b
    LEA EAX,[ESP + 0x100]               ; 0055ce5e
    PUSH EAX                            ; 0055ce65
    PUSH 0x5f127b                       ; 0055ce66 | DAT_005f127b
    PUSH ESI                            ; 0055ce6b
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055ce6c
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0055ce71
    MOV EDX,dword ptr [ESP + 0x100]     ; 0055ce74
    XOR EBP,EBP                         ; 0055ce7b
    TEST EDX,EDX                        ; 0055ce7d
    JLE 0x0055cd03                      ; 0055ce7f
        ;   XREF to: 0055cd03 (CONDITIONAL_JUMP)  ; LAB_0055cd03
    LEA EAX,[ESP + 0x11c]               ; 0055ce85
        ;   Label: LAB_0055ce85
    PUSH EAX                            ; 0055ce8c
    LEA EAX,[ESP + 0x118]               ; 0055ce8d
    PUSH EAX                            ; 0055ce94
    LEA EAX,[ESP + 0x120]               ; 0055ce95
    PUSH EAX                            ; 0055ce9c
    LEA EAX,[ESP + 0x11c]               ; 0055ce9d
    PUSH EAX                            ; 0055cea4
    LEA EAX,[ESP + 0x11c]               ; 0055cea5
    PUSH EAX                            ; 0055ceac
    PUSH 0x5f127f                       ; 0055cead | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 0055ceb2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0055ceb3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x1c                        ; 0055ceb8
    CMP dword ptr [ESP + 0x10c],0xfa    ; 0055cebb
    JGE 0x0055cf54                      ; 0055cec6
        ;   XREF to: 0055cf54 (CONDITIONAL_JUMP)  ; LAB_0055cf54
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0055cecc
        ;   Label: LAB_0055cecc
    MOV byte ptr [EBX + EAX*0x1 + 0x128],0x1 ; 0055ced3
    MOV EDX,dword ptr [ESP + 0x10c]     ; 0055cedb
    SHL EDX,0x4                         ; 0055cee2
    MOV EAX,dword ptr [ESP + 0x110]     ; 0055cee5
    MOV dword ptr [EDX + EBX*0x1 + 0x224],EAX ; 0055ceec
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0055cef3
    SHL EAX,0x4                         ; 0055cefa
    LEA EDX,[EBX + EAX*0x1]             ; 0055cefd
    MOV EAX,dword ptr [ESP + 0x118]     ; 0055cf00
    MOV dword ptr [EDX + 0x228],EAX     ; 0055cf07
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0055cf0d
    SHL EAX,0x4                         ; 0055cf14
    LEA EDX,[EBX + EAX*0x1]             ; 0055cf17
    MOV EAX,dword ptr [ESP + 0x114]     ; 0055cf1a
    MOV dword ptr [EDX + 0x22c],EAX     ; 0055cf21
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0055cf27
    SHL EAX,0x4                         ; 0055cf2e
    LEA EDX,[EBX + EAX*0x1]             ; 0055cf31
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0055cf34
    MOV dword ptr [EDX + 0x230],EAX     ; 0055cf3b
    INC EBP                             ; 0055cf41
    CMP EBP,dword ptr [ESP + 0x100]     ; 0055cf42
    JGE 0x0055cd03                      ; 0055cf49
        ;   XREF to: 0055cd03 (CONDITIONAL_JUMP)  ; LAB_0055cd03
    JMP 0x0055ce85                      ; 0055cf4f
        ;   XREF to: 0055ce85 (UNCONDITIONAL_JUMP)  ; LAB_0055ce85
    MOV EDX,0x5f128f                    ; 0055cf54 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0055cf54
    MOV ECX,0x2d8                       ; 0055cf59
    PUSH 0x5f12a3                       ; 0055cf5e | = "Invalid camera number in visiblilty l..."
    MOV dword ptr [0x01d1d400],EDX      ; 0055cf63 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0055cf69 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055cf6f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0055cf74
    JMP 0x0055cecc                      ; 0055cf77
        ;   XREF to: 0055cecc (UNCONDITIONAL_JUMP)  ; LAB_0055cecc

