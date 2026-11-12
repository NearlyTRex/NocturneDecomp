; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00542850(CDeformableModel *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined2       Stack[-0x70]:2  local_70
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
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
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_load_FUN_005427c0 at 005427e6
;
; Referenced Globals:
;   undefined4 DAT_005e6e5d
;   TerminatedCString s_core_skeleton_cpp_005e6e61
;   TerminatedCString s_Deformable_model_file_is_005e6e76
;   TerminatedCString s_core_skeleton_cpp_005e6e97
;   TerminatedCString s_Can_t_load_model_of_vers_005e6eac
;   TerminatedCString s_d_d_d_d_d_005e6ef7
;   TerminatedCString s_d_d_d_d_005e6f07
;   TerminatedCString s_d_d_d_d_d_005e6f14
;   TerminatedCString s_d_d_d_d_d_d_005e6f24
;   TerminatedCString s_anon_005e6f37
;   TerminatedCString s_d_005e6f3e
;   TerminatedCString s_d_d_005e6f4b
;   undefined4 DAT_005e6f5c
;   TerminatedCString s_d_d_005e6f60
;   TerminatedCString s_d_d_d_005e6f67
;   ... and 15 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380
;   core_skeleton.cpp_FUN_00541370
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00542850
        ;   Label: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00542850
    PUSH ESI                            ; 00542851
    PUSH EDI                            ; 00542852
    PUSH EBP                            ; 00542853
    SUB ESP,0x7c                        ; 00542854
    MOV EBX,dword ptr [ESP + 0x90]      ; 00542857
    MOV ESI,dword ptr [ESP + 0x94]      ; 0054285e
    MOV EDI,ESI                         ; 00542865
    PUSH EDI                            ; 00542867
        ;   Label: LAB_00542867
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542868
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 0054286d
    TEST EAX,EAX                        ; 00542870
    JL 0x00542879                       ; 00542872
        ;   XREF to: 00542879 (CONDITIONAL_JUMP)  ; LAB_00542879
    CMP EAX,0xa                         ; 00542874
    JNZ 0x00542867                      ; 00542877
        ;   XREF to: 00542867 (CONDITIONAL_JUMP)  ; LAB_00542867
    LEA EAX,[ESP + 0x28]                ; 00542879
        ;   Label: LAB_00542879
    PUSH EAX                            ; 0054287d
    PUSH 0x5e6e5d                       ; 0054287e | DAT_005e6e5d
    PUSH ESI                            ; 00542883
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542884
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542889
    CMP EAX,0x1                         ; 0054288c
    JZ 0x005428b4                       ; 0054288f
        ;   XREF to: 005428b4 (CONDITIONAL_JUMP)  ; LAB_005428b4
    MOV EDX,0x5e6e61                    ; 00542891 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00542891
    MOV ECX,0x4d6                       ; 00542896
    PUSH 0x5e6e76                       ; 0054289b | = "Deformable model file is corrupt"
    MOV dword ptr [0x01d046a0],EDX      ; 005428a0 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005428a6 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005428ac
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005428b1
    MOV EAX,dword ptr [ESP + 0x28]      ; 005428b4
        ;   Label: LAB_005428b4
    MOV EDI,dword ptr [0x0061bbd8]      ; 005428b8 | DAT_0061bbd8
    CMP EAX,EDI                         ; 005428be
    JLE 0x005428ea                      ; 005428c0
        ;   XREF to: 005428ea (CONDITIONAL_JUMP)  ; LAB_005428ea
    PUSH EDI                            ; 005428c2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005428c3
    PUSH ECX                            ; 005428c7
    MOV EBP,0x5e6e97                    ; 005428c8 | = "..\\core\\skeleton.cpp"
    MOV EAX,0x4d9                       ; 005428cd
    PUSH 0x5e6eac                       ; 005428d2 | = "Can't load model of version %d, this ..."
    MOV dword ptr [0x01d046a0],EBP      ; 005428d7 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 005428dd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005428e2
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 005428e7
    MOV EDI,dword ptr [ESP + 0x28]      ; 005428ea
        ;   Label: LAB_005428ea
    CMP EDI,0x3                         ; 005428ee
    JL 0x00542a1e                       ; 005428f1
        ;   XREF to: 00542a1e (CONDITIONAL_JUMP)  ; LAB_00542a1e
    CMP EDI,0x5                         ; 005428f7
    JL 0x005429d2                       ; 005428fa
        ;   XREF to: 005429d2 (CONDITIONAL_JUMP)  ; LAB_005429d2
    MOV EDI,ESI                         ; 00542900
    PUSH EDI                            ; 00542902
        ;   Label: LAB_00542902
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542903
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542908
    TEST EAX,EAX                        ; 0054290b
    JL 0x00542914                       ; 0054290d
        ;   XREF to: 00542914 (CONDITIONAL_JUMP)  ; LAB_00542914
    CMP EAX,0xa                         ; 0054290f
    JNZ 0x00542902                      ; 00542912
        ;   XREF to: 00542902 (CONDITIONAL_JUMP)  ; LAB_00542902
    LEA EAX,[ESP + 0x24]                ; 00542914
        ;   Label: LAB_00542914
    PUSH EAX                            ; 00542918
    LEA EAX,[ESP + 0x30]                ; 00542919
    PUSH EAX                            ; 0054291d
    LEA EAX,[ESP + 0x40]                ; 0054291e
    PUSH EAX                            ; 00542922
    LEA EAX,[ESP + 0x40]                ; 00542923
    PUSH EAX                            ; 00542927
    LEA EAX,[ESP + 0x40]                ; 00542928
    PUSH EAX                            ; 0054292c
    PUSH 0x5e6ef7                       ; 0054292d | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00542932
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542933
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 00542938
    CMP EAX,0x5                         ; 0054293b
    JNZ 0x00542891                      ; 0054293e
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV EDX,dword ptr [ESP + 0x24]      ; 00542944
        ;   Label: LAB_00542944
    PUSH EDX                            ; 00542948
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00542949
    PUSH ECX                            ; 0054294d
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0054294e
    PUSH EDI                            ; 00542952
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00542953
    PUSH EBP                            ; 00542957
    PUSH EBX                            ; 00542958
    MOV EDI,ESI                         ; 00542959
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250 ; 0054295b
        ;   XREF to: 00541250 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 00542960
    PUSH EDI                            ; 00542963
        ;   Label: LAB_00542963
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542964
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542969
    TEST EAX,EAX                        ; 0054296c
    JL 0x00542975                       ; 0054296e
        ;   XREF to: 00542975 (CONDITIONAL_JUMP)  ; LAB_00542975
    CMP EAX,0xa                         ; 00542970
    JNZ 0x00542963                      ; 00542973
        ;   XREF to: 00542963 (CONDITIONAL_JUMP)  ; LAB_00542963
    XOR EDI,EDI                         ; 00542975
        ;   Label: LAB_00542975
    CMP EDI,dword ptr [EBX]             ; 00542977
        ;   Label: LAB_00542977
    JGE 0x00542a98                      ; 00542979
        ;   XREF to: 00542a98 (CONDITIONAL_JUMP)  ; LAB_00542a98
    LEA EDX,[EDI*0x8 + 0x0]             ; 0054297f
    LEA EAX,[EBX + 0x4]                 ; 00542986
    ADD EAX,EDX                         ; 00542989
    LEA EDX,[EAX + 0x4]                 ; 0054298b
    PUSH EDX                            ; 0054298e
    PUSH EAX                            ; 0054298f
    LEA EAX,[ESP + 0x60]                ; 00542990
    PUSH EAX                            ; 00542994
    LEA EAX,[ESP + 0x60]                ; 00542995
    PUSH EAX                            ; 00542999
    LEA EAX,[ESP + 0x60]                ; 0054299a
    PUSH EAX                            ; 0054299e
    PUSH 0x5e6f14                       ; 0054299f | = "%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 005429a4
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 005429a5
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 005429aa
    CMP EAX,0x5                         ; 005429ad
    JNZ 0x00542891                      ; 005429b0
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV EBP,dword ptr [ESP + 0x58]      ; 005429b6
    PUSH EBP                            ; 005429ba
    MOV EAX,dword ptr [ESP + 0x58]      ; 005429bb
    PUSH EAX                            ; 005429bf
    MOV EDX,dword ptr [ESP + 0x58]      ; 005429c0
    PUSH EDX                            ; 005429c4
    PUSH EDI                            ; 005429c5
    PUSH EBX                            ; 005429c6
    CALL core_skeleton.cpp_FUN_00541370 ; 005429c7
        ;   XREF to: 00541370 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00541370()
    INC EDI                             ; 005429cc
    ADD ESP,0x14                        ; 005429cd
    JMP 0x00542977                      ; 005429d0
        ;   XREF to: 00542977 (UNCONDITIONAL_JUMP)  ; LAB_00542977
    MOV EDI,ESI                         ; 005429d2
        ;   Label: LAB_005429d2
    PUSH EDI                            ; 005429d4
        ;   Label: LAB_005429d4
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 005429d5
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 005429da
    TEST EAX,EAX                        ; 005429dd
    JL 0x005429e6                       ; 005429df
        ;   XREF to: 005429e6 (CONDITIONAL_JUMP)  ; LAB_005429e6
    CMP EAX,0xa                         ; 005429e1
    JNZ 0x005429d4                      ; 005429e4
        ;   XREF to: 005429d4 (CONDITIONAL_JUMP)  ; LAB_005429d4
    LEA EAX,[ESP + 0x24]                ; 005429e6
        ;   Label: LAB_005429e6
    PUSH EAX                            ; 005429ea
    LEA EAX,[ESP + 0x30]                ; 005429eb
    PUSH EAX                            ; 005429ef
    LEA EAX,[ESP + 0x40]                ; 005429f0
    PUSH EAX                            ; 005429f4
    LEA EAX,[ESP + 0x3c]                ; 005429f5
    PUSH EAX                            ; 005429f9
    PUSH 0x5e6f07                       ; 005429fa | = "%d,%d,%d,%d\n"
    PUSH ESI                            ; 005429ff
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542a00
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00542a05
    CMP EAX,0x4                         ; 00542a08
    JNZ 0x00542891                      ; 00542a0b
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV dword ptr [ESP + 0x34],0x1      ; 00542a11
    JMP 0x00542944                      ; 00542a19
        ;   XREF to: 00542944 (UNCONDITIONAL_JUMP)  ; LAB_00542944
    MOV EDI,ESI                         ; 00542a1e
        ;   Label: LAB_00542a1e
    PUSH EDI                            ; 00542a20
        ;   Label: LAB_00542a20
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542a21
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542a26
    TEST EAX,EAX                        ; 00542a29
    JL 0x00542a32                       ; 00542a2b
        ;   XREF to: 00542a32 (CONDITIONAL_JUMP)  ; LAB_00542a32
    CMP EAX,0xa                         ; 00542a2d
    JNZ 0x00542a20                      ; 00542a30
        ;   XREF to: 00542a20 (CONDITIONAL_JUMP)  ; LAB_00542a20
    LEA EAX,[ESP + 0x4c]                ; 00542a32
        ;   Label: LAB_00542a32
    PUSH EAX                            ; 00542a36
    LEA EAX,[ESP + 0x30]                ; 00542a37
    PUSH EAX                            ; 00542a3b
    LEA EAX,[ESP + 0x50]                ; 00542a3c
    PUSH EAX                            ; 00542a40
    LEA EAX,[ESP + 0x50]                ; 00542a41
    PUSH EAX                            ; 00542a45
    LEA EAX,[ESP + 0x50]                ; 00542a46
    PUSH EAX                            ; 00542a4a
    LEA EAX,[ESP + 0x50]                ; 00542a4b
    PUSH EAX                            ; 00542a4f
    PUSH 0x5e6f24                       ; 00542a50 | = "%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00542a55
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542a56
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x20                        ; 00542a5b
    CMP EAX,0x6                         ; 00542a5e
    JNZ 0x00542891                      ; 00542a61
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00542a67
    PUSH EBP                            ; 00542a6b
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00542a6c
    PUSH EAX                            ; 00542a70
    PUSH 0x1                            ; 00542a71
    PUSH 0x1                            ; 00542a73
    PUSH EBX                            ; 00542a75
    CALL core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250 ; 00542a76
        ;   XREF to: 00541250 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_allocMemory_FUN_00541250(CDeformableModel * this_ptr, int num_lods, int num_texture_sets, int num_textures, ...)
    ADD ESP,0x14                        ; 00542a7b
    MOV EDX,dword ptr [ESP + 0x44]      ; 00542a7e
    PUSH EDX                            ; 00542a82
    MOV ECX,dword ptr [ESP + 0x44]      ; 00542a83
    PUSH ECX                            ; 00542a87
    MOV EDI,dword ptr [ESP + 0x44]      ; 00542a88
    PUSH EDI                            ; 00542a8c
    PUSH 0x0                            ; 00542a8d
    PUSH EBX                            ; 00542a8f
    CALL core_skeleton.cpp_FUN_00541370 ; 00542a90
        ;   XREF to: 00541370 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00541370()
    ADD ESP,0x14                        ; 00542a95
    MOV EDI,ESI                         ; 00542a98
        ;   Label: LAB_00542a98
    PUSH EDI                            ; 00542a9a
        ;   Label: LAB_00542a9a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542a9b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542aa0
    TEST EAX,EAX                        ; 00542aa3
    JL 0x00542aac                       ; 00542aa5
        ;   XREF to: 00542aac (CONDITIONAL_JUMP)  ; LAB_00542aac
    CMP EAX,0xa                         ; 00542aa7
    JNZ 0x00542a9a                      ; 00542aaa
        ;   XREF to: 00542a9a (CONDITIONAL_JUMP)  ; LAB_00542a9a
    LEA EAX,[EBX + 0x2a1c]              ; 00542aac
        ;   Label: LAB_00542aac
    PUSH EAX                            ; 00542ab2
    PUSH 0x5e6f37                       ; 00542ab3 | = "%[^\n]\n"
    PUSH ESI                            ; 00542ab8
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542ab9
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542abe
    CMP EAX,0x1                         ; 00542ac1
    JNZ 0x00542891                      ; 00542ac4
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV EDI,ESI                         ; 00542aca
    PUSH EDI                            ; 00542acc
        ;   Label: LAB_00542acc
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542acd
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542ad2
    TEST EAX,EAX                        ; 00542ad5
    JL 0x00542ade                       ; 00542ad7
        ;   XREF to: 00542ade (CONDITIONAL_JUMP)  ; LAB_00542ade
    CMP EAX,0xa                         ; 00542ad9
    JNZ 0x00542acc                      ; 00542adc
        ;   XREF to: 00542acc (CONDITIONAL_JUMP)  ; LAB_00542acc
    CMP dword ptr [ESP + 0x28],0x3      ; 00542ade
        ;   Label: LAB_00542ade
    JL 0x00542bbd                       ; 00542ae3
        ;   XREF to: 00542bbd (CONDITIONAL_JUMP)  ; LAB_00542bbd
    XOR EDI,EDI                         ; 00542ae9
    CMP EDI,dword ptr [EBX + 0xc00]     ; 00542aeb
        ;   Label: LAB_00542aeb
    JGE 0x00542c52                      ; 00542af1
        ;   XREF to: 00542c52 (CONDITIONAL_JUMP)  ; LAB_00542c52
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542af7
    SUB EAX,EDI                         ; 00542afe
    LEA EBP,[EBX + 0xc04]               ; 00542b00
    SHL EAX,0x5                         ; 00542b06
    ADD EAX,EBP                         ; 00542b09
    MOV ECX,dword ptr [ESP + 0x28]      ; 00542b0b
    LEA EDX,[EAX + 0x48]                ; 00542b0f
    CMP ECX,0x6                         ; 00542b12
    JGE 0x00542b69                      ; 00542b15
        ;   XREF to: 00542b69 (CONDITIONAL_JUMP)  ; LAB_00542b69
    PUSH EDX                            ; 00542b17
    PUSH EAX                            ; 00542b18
    PUSH 0x5e6f3e                       ; 00542b19 | = "\"%[^\"]\", %d\n"
    PUSH ESI                            ; 00542b1e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542b1f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00542b24
    XOR EBP,EBP                         ; 00542b27
        ;   Label: LAB_00542b27
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542b29
        ;   Label: LAB_00542b29
    SUB EAX,EDI                         ; 00542b30
    SHL EAX,0x5                         ; 00542b32
    LEA EDX,[EBX + EAX*0x1]             ; 00542b35
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00542b38
    JGE 0x00542b7f                      ; 00542b3e
        ;   XREF to: 00542b7f (CONDITIONAL_JUMP)  ; LAB_00542b7f
    LEA EDX,[EBX + 0xc04]               ; 00542b40
    ADD EAX,EDX                         ; 00542b46
    LEA EDX,[EBP*0x4 + 0x0]             ; 00542b48
    ADD EAX,0x4c                        ; 00542b4f
    ADD EAX,EDX                         ; 00542b52
    PUSH EAX                            ; 00542b54
    PUSH 0x5e6f5c                       ; 00542b55 | DAT_005e6f5c
    PUSH ESI                            ; 00542b5a
    INC EBP                             ; 00542b5b
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542b5c
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542b61
    JMP 0x00542b29                      ; 00542b64
        ;   XREF to: 00542b29 (UNCONDITIONAL_JUMP)  ; LAB_00542b29
    INC EDI                             ; 00542b66
        ;   Label: LAB_00542b66
    JMP 0x00542aeb                      ; 00542b67
        ;   XREF to: 00542aeb (UNCONDITIONAL_JUMP)  ; LAB_00542aeb
    PUSH EDX                            ; 00542b69
        ;   Label: LAB_00542b69
    LEA EDX,[EAX + 0x5c]                ; 00542b6a
    PUSH EDX                            ; 00542b6d
    PUSH EAX                            ; 00542b6e
    PUSH 0x5e6f4b                       ; 00542b6f | = "\"%[^\"]\", %d, %d\n"
    PUSH ESI                            ; 00542b74
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542b75
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00542b7a
    JMP 0x00542b27                      ; 00542b7d
        ;   XREF to: 00542b27 (UNCONDITIONAL_JUMP)  ; LAB_00542b27
    XOR EBP,EBP                         ; 00542b7f
        ;   Label: LAB_00542b7f
    CMP EBP,dword ptr [EBX]             ; 00542b81
        ;   Label: LAB_00542b81
    JGE 0x00542b66                      ; 00542b83
        ;   XREF to: 00542b66 (CONDITIONAL_JUMP)  ; LAB_00542b66
    LEA EDX,[EDI*0x4 + 0x0]             ; 00542b85
    SUB EDX,EDI                         ; 00542b8c
    LEA EAX,[EBX + 0xc04]               ; 00542b8e
    SHL EDX,0x5                         ; 00542b94
    ADD EAX,EDX                         ; 00542b97
    LEA ECX,[EAX + 0x34]                ; 00542b99
    LEA EDX,[EBP*0x4 + 0x0]             ; 00542b9c
    ADD ECX,EDX                         ; 00542ba3
    ADD EAX,0x20                        ; 00542ba5
    PUSH ECX                            ; 00542ba8
    ADD EAX,EDX                         ; 00542ba9
    PUSH EAX                            ; 00542bab
    PUSH 0x5e6f60                       ; 00542bac | = "%d,%d\n"
    PUSH ESI                            ; 00542bb1
    INC EBP                             ; 00542bb2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542bb3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00542bb8
    JMP 0x00542b81                      ; 00542bbb
        ;   XREF to: 00542b81 (UNCONDITIONAL_JUMP)  ; LAB_00542b81
    XOR EDI,EDI                         ; 00542bbd
        ;   Label: LAB_00542bbd
    CMP EDI,dword ptr [EBX + 0xc00]     ; 00542bbf
        ;   Label: LAB_00542bbf
    JGE 0x00542c52                      ; 00542bc5
        ;   XREF to: 00542c52 (CONDITIONAL_JUMP)  ; LAB_00542c52
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542bcb
    SUB EAX,EDI                         ; 00542bd2
    LEA EDX,[EBX + 0xc04]               ; 00542bd4
    SHL EAX,0x5                         ; 00542bda
    ADD EAX,EDX                         ; 00542bdd
    LEA EDX,[EAX + 0x48]                ; 00542bdf
    PUSH EDX                            ; 00542be2
    LEA EDX,[EAX + 0x34]                ; 00542be3
    PUSH EDX                            ; 00542be6
    LEA EDX,[EAX + 0x20]                ; 00542be7
    PUSH EDX                            ; 00542bea
    PUSH EAX                            ; 00542beb
    PUSH 0x5e6f67                       ; 00542bec | = "\"%[^\"]\",%d,%d,%d\n"
    PUSH ESI                            ; 00542bf1
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542bf2
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00542bf7
    CMP EAX,0x4                         ; 00542bfa
    JNZ 0x00542891                      ; 00542bfd
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    XOR EBP,EBP                         ; 00542c03
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542c05
        ;   Label: LAB_00542c05
    SUB EAX,EDI                         ; 00542c0c
    SHL EAX,0x5                         ; 00542c0e
    LEA EDX,[EBX + EAX*0x1]             ; 00542c11
    CMP EBP,dword ptr [EDX + 0xc4c]     ; 00542c14
    JGE 0x00542c4c                      ; 00542c1a
        ;   XREF to: 00542c4c (CONDITIONAL_JUMP)  ; LAB_00542c4c
    LEA EDX,[EBX + 0xc04]               ; 00542c1c
    ADD EDX,EAX                         ; 00542c22
    LEA EAX,[EBP*0x4 + 0x0]             ; 00542c24
    ADD EDX,0x4c                        ; 00542c2b
    ADD EAX,EDX                         ; 00542c2e
    PUSH EAX                            ; 00542c30
    PUSH 0x5e6f79                       ; 00542c31 | DAT_005e6f79
    PUSH ESI                            ; 00542c36
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542c37
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542c3c
    CMP EAX,0x1                         ; 00542c3f
    JNZ 0x00542891                      ; 00542c42
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    ADD EBP,EAX                         ; 00542c48
    JMP 0x00542c05                      ; 00542c4a
        ;   XREF to: 00542c05 (UNCONDITIONAL_JUMP)  ; LAB_00542c05
    INC EDI                             ; 00542c4c
        ;   Label: LAB_00542c4c
    JMP 0x00542bbf                      ; 00542c4d
        ;   XREF to: 00542bbf (UNCONDITIONAL_JUMP)  ; LAB_00542bbf
    MOV EDI,ESI                         ; 00542c52
        ;   Label: LAB_00542c52
    PUSH EDI                            ; 00542c54
        ;   Label: LAB_00542c54
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542c55
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542c5a
    TEST EAX,EAX                        ; 00542c5d
    JL 0x00542c66                       ; 00542c5f
        ;   XREF to: 00542c66 (CONDITIONAL_JUMP)  ; LAB_00542c66
    CMP EAX,0xa                         ; 00542c61
    JNZ 0x00542c54                      ; 00542c64
        ;   XREF to: 00542c54 (CONDITIONAL_JUMP)  ; LAB_00542c54
    XOR EAX,EAX                         ; 00542c66
        ;   Label: LAB_00542c66
    MOV dword ptr [ESP + 0x6c],EAX      ; 00542c68
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00542c6c
        ;   Label: LAB_00542c6c
    CMP EAX,dword ptr [EBX]             ; 00542c70
    JGE 0x00542d38                      ; 00542c72
        ;   XREF to: 00542d38 (CONDITIONAL_JUMP)  ; LAB_00542d38
    XOR ECX,ECX                         ; 00542c78
    MOV dword ptr [ESP + 0x74],ECX      ; 00542c7a
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00542c7e
        ;   Label: LAB_00542c7e
    SHL EDI,0x2                         ; 00542c82
    ADD EDI,EBX                         ; 00542c85
    MOV EAX,dword ptr [ESP + 0x74]      ; 00542c87
    CMP EAX,dword ptr [EDI + 0x2c]      ; 00542c8b
    JGE 0x00542d26                      ; 00542c8e
        ;   XREF to: 00542d26 (CONDITIONAL_JUMP)  ; LAB_00542d26
    MOV EDX,EAX                         ; 00542c94
    SHL EAX,0x2                         ; 00542c96
    SUB EAX,EDX                         ; 00542c99
    SHL EAX,0x2                         ; 00542c9b
    ADD EAX,EDX                         ; 00542c9e
    MOV EBP,dword ptr [EDI + 0x40]      ; 00542ca0
    SHL EAX,0x2                         ; 00542ca3
    ADD EBP,EAX                         ; 00542ca6
    LEA EAX,[ESP + 0x5c]                ; 00542ca8
    PUSH EAX                            ; 00542cac
    PUSH 0x5e6f7d                       ; 00542cad | DAT_005e6f7d
    PUSH ESI                            ; 00542cb2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542cb3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542cb8
    CMP EAX,0x1                         ; 00542cbb
    JNZ 0x00542891                      ; 00542cbe
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    MOV AL,byte ptr [ESP + 0x5c]        ; 00542cc4
    XOR EDI,EDI                         ; 00542cc8
    MOV byte ptr [EBP],AL               ; 00542cca
    XOR EAX,EAX                         ; 00542ccd
        ;   Label: LAB_00542ccd
    MOV AL,byte ptr [EBP]               ; 00542ccf
    CMP EDI,EAX                         ; 00542cd2
    JGE 0x00542d2f                      ; 00542cd4
        ;   XREF to: 00542d2f (CONDITIONAL_JUMP)  ; LAB_00542d2f
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542cd6
    SUB EAX,EDI                         ; 00542cdd
    LEA EDX,[EBP + 0x10]                ; 00542cdf
    SHL EAX,0x2                         ; 00542ce2
    ADD EAX,EDX                         ; 00542ce5
    LEA EDX,[EAX + 0x8]                 ; 00542ce7
    PUSH EDX                            ; 00542cea
    LEA EDX,[EAX + 0x4]                 ; 00542ceb
    PUSH EDX                            ; 00542cee
    PUSH EAX                            ; 00542cef
    LEA EDX,[EBP + 0x4]                 ; 00542cf0
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542cf3
    ADD EAX,EDX                         ; 00542cfa
    PUSH EAX                            ; 00542cfc
    LEA EAX,[ESP + 0x70]                ; 00542cfd
    PUSH EAX                            ; 00542d01
    PUSH 0x5e6f81                       ; 00542d02 | = "%d,%f,%f,%f,%f\n"
    PUSH ESI                            ; 00542d07
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542d08
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x1c                        ; 00542d0d
    CMP EAX,0x5                         ; 00542d10
    JNZ 0x00542891                      ; 00542d13
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    LEA EDX,[EDI + EBP*0x1]             ; 00542d19
    MOV AL,byte ptr [ESP + 0x60]        ; 00542d1c
    INC EDI                             ; 00542d20
    MOV byte ptr [EDX + 0x1],AL         ; 00542d21
    JMP 0x00542ccd                      ; 00542d24
        ;   XREF to: 00542ccd (UNCONDITIONAL_JUMP)  ; LAB_00542ccd
    INC dword ptr [ESP + 0x6c]          ; 00542d26
        ;   Label: LAB_00542d26
    JMP 0x00542c6c                      ; 00542d2a
        ;   XREF to: 00542c6c (UNCONDITIONAL_JUMP)  ; LAB_00542c6c
    INC dword ptr [ESP + 0x74]          ; 00542d2f
        ;   Label: LAB_00542d2f
    JMP 0x00542c7e                      ; 00542d33
        ;   XREF to: 00542c7e (UNCONDITIONAL_JUMP)  ; LAB_00542c7e
    MOV EDI,ESI                         ; 00542d38
        ;   Label: LAB_00542d38
    PUSH EDI                            ; 00542d3a
        ;   Label: LAB_00542d3a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542d3b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542d40
    TEST EAX,EAX                        ; 00542d43
    JL 0x00542d4c                       ; 00542d45
        ;   XREF to: 00542d4c (CONDITIONAL_JUMP)  ; LAB_00542d4c
    CMP EAX,0xa                         ; 00542d47
    JNZ 0x00542d3a                      ; 00542d4a
        ;   XREF to: 00542d3a (CONDITIONAL_JUMP)  ; LAB_00542d3a
    XOR ECX,ECX                         ; 00542d4c
        ;   Label: LAB_00542d4c
    MOV dword ptr [ESP + 0x78],ECX      ; 00542d4e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00542d52
        ;   Label: LAB_00542d52
    CMP EAX,dword ptr [EBX]             ; 00542d56
    JGE 0x00542e33                      ; 00542d58
        ;   XREF to: 00542e33 (CONDITIONAL_JUMP)  ; LAB_00542e33
    XOR EDI,EDI                         ; 00542d5e
    MOV EBP,dword ptr [ESP + 0x78]      ; 00542d60
        ;   Label: LAB_00542d60
    SHL EBP,0x2                         ; 00542d64
    ADD EBP,EBX                         ; 00542d67
    MOV EAX,dword ptr [EBP + 0x54]      ; 00542d69
    ADD EAX,dword ptr [EBP + 0x68]      ; 00542d6c
    CMP EDI,EAX                         ; 00542d6f
    JGE 0x00542e2a                      ; 00542d71
        ;   XREF to: 00542e2a (CONDITIONAL_JUMP)  ; LAB_00542e2a
    LEA EAX,[EDI*0x8 + 0x0]             ; 00542d77
    LEA EDX,[EDI + EAX*0x1]             ; 00542d7e
    MOV EAX,dword ptr [EBP + 0x7c]      ; 00542d81
    ADD EDX,EDX                         ; 00542d84
    ADD EAX,EDX                         ; 00542d86
    MOV dword ptr [ESP + 0x70],EAX      ; 00542d88
    LEA EAX,[ESP + 0x8]                 ; 00542d8c
    PUSH EAX                            ; 00542d90
    LEA EAX,[ESP + 0x18]                ; 00542d91
    PUSH EAX                            ; 00542d95
    LEA EAX,[ESP + 0x28]                ; 00542d96
    PUSH EAX                            ; 00542d9a
    LEA EAX,[ESP + 0x10]                ; 00542d9b
    PUSH EAX                            ; 00542d9f
    LEA EAX,[ESP + 0x20]                ; 00542da0
    PUSH EAX                            ; 00542da4
    LEA EAX,[ESP + 0x30]                ; 00542da5
    PUSH EAX                            ; 00542da9
    LEA EAX,[ESP + 0x18]                ; 00542daa
    PUSH EAX                            ; 00542dae
    LEA EAX,[ESP + 0x28]                ; 00542daf
    PUSH EAX                            ; 00542db3
    LEA EAX,[ESP + 0x38]                ; 00542db4
    PUSH EAX                            ; 00542db8
    LEA EAX,[ESP + 0x88]                ; 00542db9
    PUSH EAX                            ; 00542dc0
    PUSH 0x5e6f91                       ; 00542dc1 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 00542dc6
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542dc7
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x30                        ; 00542dcc
    CMP EAX,0xa                         ; 00542dcf
    JNZ 0x00542891                      ; 00542dd2
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542dd8
    MOV EDX,dword ptr [EBP + 0x90]      ; 00542ddf
    ADD EDX,EAX                         ; 00542de5
    MOV EAX,dword ptr [ESP + 0x64]      ; 00542de7
    MOV dword ptr [EDX],EAX             ; 00542deb
    XOR EAX,EAX                         ; 00542ded
    MOV EDX,dword ptr [ESP + 0x70]      ; 00542def
        ;   Label: LAB_00542def
    LEA EBP,[EAX + EAX*0x1]             ; 00542df3
    ADD EBP,EDX                         ; 00542df6
    MOV CX,word ptr [ESP + EAX*0x4 + 0x18] ; 00542df8
    MOV word ptr [EBP],CX               ; 00542dfd
    MOV ECX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00542e01
    SAR ECX,0x8                         ; 00542e05
    MOV dword ptr [ESP + 0x68],ECX      ; 00542e08
    MOV ECX,dword ptr [ESP + 0x68]      ; 00542e0c
    MOV word ptr [EBP + 0x6],CX         ; 00542e10
    MOV EDX,dword ptr [ESP + EAX*0x4]   ; 00542e14
    SAR EDX,0x8                         ; 00542e17
    INC EAX                             ; 00542e1a
    MOV word ptr [EBP + 0xc],DX         ; 00542e1b
    CMP EAX,0x3                         ; 00542e1f
    JL 0x00542def                       ; 00542e22
        ;   XREF to: 00542def (CONDITIONAL_JUMP)  ; LAB_00542def
    INC EDI                             ; 00542e24
    JMP 0x00542d60                      ; 00542e25
        ;   XREF to: 00542d60 (UNCONDITIONAL_JUMP)  ; LAB_00542d60
    INC dword ptr [ESP + 0x78]          ; 00542e2a
        ;   Label: LAB_00542e2a
    JMP 0x00542d52                      ; 00542e2e
        ;   XREF to: 00542d52 (UNCONDITIONAL_JUMP)  ; LAB_00542d52
    MOV EDI,ESI                         ; 00542e33
        ;   Label: LAB_00542e33
    PUSH EDI                            ; 00542e35
        ;   Label: LAB_00542e35
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542e36
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542e3b
    TEST EAX,EAX                        ; 00542e3e
    JL 0x00542e47                       ; 00542e40
        ;   XREF to: 00542e47 (CONDITIONAL_JUMP)  ; LAB_00542e47
    CMP EAX,0xa                         ; 00542e42
    JNZ 0x00542e35                      ; 00542e45
        ;   XREF to: 00542e35 (CONDITIONAL_JUMP)  ; LAB_00542e35
    XOR EBP,EBP                         ; 00542e47
        ;   Label: LAB_00542e47
    CMP EBP,dword ptr [EBX]             ; 00542e49
        ;   Label: LAB_00542e49
    JGE 0x00542e8b                      ; 00542e4b
        ;   XREF to: 00542e8b (CONDITIONAL_JUMP)  ; LAB_00542e8b
    XOR EDI,EDI                         ; 00542e4d
    LEA EAX,[EBP*0x4 + 0x0]             ; 00542e4f
        ;   Label: LAB_00542e4f
    ADD EAX,EBX                         ; 00542e56
    CMP EDI,dword ptr [EAX + 0x68]      ; 00542e58
    JGE 0x00542e88                      ; 00542e5b
        ;   XREF to: 00542e88 (CONDITIONAL_JUMP)  ; LAB_00542e88
    LEA EDX,[EDI*0x4 + 0x0]             ; 00542e5d
    MOV EAX,dword ptr [EAX + 0xa4]      ; 00542e64
    ADD EAX,EDX                         ; 00542e6a
    PUSH EAX                            ; 00542e6c
    PUSH 0x5e6fb0                       ; 00542e6d | DAT_005e6fb0
    PUSH ESI                            ; 00542e72
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542e73
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542e78
    CMP EAX,0x1                         ; 00542e7b
    JNZ 0x00542891                      ; 00542e7e
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    ADD EDI,EAX                         ; 00542e84
    JMP 0x00542e4f                      ; 00542e86
        ;   XREF to: 00542e4f (UNCONDITIONAL_JUMP)  ; LAB_00542e4f
    INC EBP                             ; 00542e88
        ;   Label: LAB_00542e88
    JMP 0x00542e49                      ; 00542e89
        ;   XREF to: 00542e49 (UNCONDITIONAL_JUMP)  ; LAB_00542e49
    MOV EDI,ESI                         ; 00542e8b
        ;   Label: LAB_00542e8b
    PUSH EDI                            ; 00542e8d
        ;   Label: LAB_00542e8d
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542e8e
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542e93
    TEST EAX,EAX                        ; 00542e96
    JL 0x00542e9f                       ; 00542e98
        ;   XREF to: 00542e9f (CONDITIONAL_JUMP)  ; LAB_00542e9f
    CMP EAX,0xa                         ; 00542e9a
    JNZ 0x00542e8d                      ; 00542e9d
        ;   XREF to: 00542e8d (CONDITIONAL_JUMP)  ; LAB_00542e8d
    XOR EDI,EDI                         ; 00542e9f
        ;   Label: LAB_00542e9f
    CMP EDI,dword ptr [EBX + 0xb8]      ; 00542ea1
        ;   Label: LAB_00542ea1
    JGE 0x00542ef7                      ; 00542ea7
        ;   XREF to: 00542ef7 (CONDITIONAL_JUMP)  ; LAB_00542ef7
    XOR EBP,EBP                         ; 00542ea9
    CMP EBP,dword ptr [EBX + 0xbc]      ; 00542eab
        ;   Label: LAB_00542eab
    JGE 0x00542ef4                      ; 00542eb1
        ;   XREF to: 00542ef4 (CONDITIONAL_JUMP)  ; LAB_00542ef4
    LEA EAX,[EDI*0x8 + 0x0]             ; 00542eb3
    ADD EAX,EDI                         ; 00542eba
    LEA EDX,[EBX + 0xc0]                ; 00542ebc
    SHL EAX,0x6                         ; 00542ec2
    ADD EDX,EAX                         ; 00542ec5
    LEA EAX,[EBP*0x8 + 0x0]             ; 00542ec7
    ADD EAX,EBP                         ; 00542ece
    SHL EAX,0x3                         ; 00542ed0
    ADD EAX,EDX                         ; 00542ed3
    ADD EAX,0x8                         ; 00542ed5
    PUSH EAX                            ; 00542ed8
    PUSH 0x5e6fb4                       ; 00542ed9 | = "%[^\n]\n"
    PUSH ESI                            ; 00542ede
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542edf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00542ee4
    CMP EAX,0x1                         ; 00542ee7
    JNZ 0x00542891                      ; 00542eea
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    ADD EBP,EAX                         ; 00542ef0
    JMP 0x00542eab                      ; 00542ef2
        ;   XREF to: 00542eab (UNCONDITIONAL_JUMP)  ; LAB_00542eab
    INC EDI                             ; 00542ef4
        ;   Label: LAB_00542ef4
    JMP 0x00542ea1                      ; 00542ef5
        ;   XREF to: 00542ea1 (UNCONDITIONAL_JUMP)  ; LAB_00542ea1
    MOV EDI,ESI                         ; 00542ef7
        ;   Label: LAB_00542ef7
    PUSH EDI                            ; 00542ef9
        ;   Label: LAB_00542ef9
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542efa
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542eff
    TEST EAX,EAX                        ; 00542f02
    JL 0x00542f0b                       ; 00542f04
        ;   XREF to: 00542f0b (CONDITIONAL_JUMP)  ; LAB_00542f0b
    CMP EAX,0xa                         ; 00542f06
    JNZ 0x00542ef9                      ; 00542f09
        ;   XREF to: 00542ef9 (CONDITIONAL_JUMP)  ; LAB_00542ef9
    XOR EDI,EDI                         ; 00542f0b
        ;   Label: LAB_00542f0b
    CMP EDI,dword ptr [ESP + 0x2c]      ; 00542f0d
        ;   Label: LAB_00542f0d
    JGE 0x00542f4a                      ; 00542f11
        ;   XREF to: 00542f4a (CONDITIONAL_JUMP)  ; LAB_00542f4a
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542f13
    SUB EAX,EDI                         ; 00542f1a
    LEA EDX,[EBX + 0x1750]              ; 00542f1c
    SHL EAX,0x2                         ; 00542f22
    ADD EAX,EDX                         ; 00542f25
    LEA EDX,[EAX + 0x8]                 ; 00542f27
    PUSH EDX                            ; 00542f2a
    LEA EDX,[EAX + 0x4]                 ; 00542f2b
    PUSH EDX                            ; 00542f2e
    PUSH EAX                            ; 00542f2f
    PUSH 0x5e6fbb                       ; 00542f30 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00542f35
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542f36
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00542f3b
    CMP EAX,0x3                         ; 00542f3e
    JNZ 0x00542891                      ; 00542f41
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    INC EDI                             ; 00542f47
    JMP 0x00542f0d                      ; 00542f48
        ;   XREF to: 00542f0d (UNCONDITIONAL_JUMP)  ; LAB_00542f0d
    CMP dword ptr [ESP + 0x28],0x2      ; 00542f4a
        ;   Label: LAB_00542f4a
    JL 0x0054301f                       ; 00542f4f
        ;   XREF to: 0054301f (CONDITIONAL_JUMP)  ; LAB_0054301f
    MOV EDI,ESI                         ; 00542f55
    PUSH EDI                            ; 00542f57
        ;   Label: LAB_00542f57
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542f58
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542f5d
    TEST EAX,EAX                        ; 00542f60
    JL 0x00542f69                       ; 00542f62
        ;   XREF to: 00542f69 (CONDITIONAL_JUMP)  ; LAB_00542f69
    CMP EAX,0xa                         ; 00542f64
    JNZ 0x00542f57                      ; 00542f67
        ;   XREF to: 00542f57 (CONDITIONAL_JUMP)  ; LAB_00542f57
    LEA EAX,[EBX + 0x174c]              ; 00542f69
        ;   Label: LAB_00542f69
    PUSH EAX                            ; 00542f6f
    LEA EAX,[EBX + 0x1748]              ; 00542f70
    PUSH EAX                            ; 00542f76
    LEA EAX,[EBX + 0x1744]              ; 00542f77
    PUSH EAX                            ; 00542f7d
    PUSH 0x5e6fc5                       ; 00542f7e | = "%f,%f,%f\n"
    PUSH ESI                            ; 00542f83
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542f84
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00542f89
    CMP EAX,0x3                         ; 00542f8c
    JNZ 0x00542891                      ; 00542f8f
        ;   XREF to: 00542891 (CONDITIONAL_JUMP)  ; LAB_00542891
    CMP dword ptr [ESP + 0x28],0x4      ; 00542f95
        ;   Label: LAB_00542f95
    JL 0x00543046                       ; 00542f9a
        ;   XREF to: 00543046 (CONDITIONAL_JUMP)  ; LAB_00543046
    MOV EDI,ESI                         ; 00542fa0
    PUSH EDI                            ; 00542fa2
        ;   Label: LAB_00542fa2
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542fa3
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542fa8
    TEST EAX,EAX                        ; 00542fab
    JL 0x00542fb4                       ; 00542fad
        ;   XREF to: 00542fb4 (CONDITIONAL_JUMP)  ; LAB_00542fb4
    CMP EAX,0xa                         ; 00542faf
    JNZ 0x00542fa2                      ; 00542fb2
        ;   XREF to: 00542fa2 (CONDITIONAL_JUMP)  ; LAB_00542fa2
    LEA EAX,[EBX + 0x1c08]              ; 00542fb4
        ;   Label: LAB_00542fb4
    PUSH EAX                            ; 00542fba
    LEA EAX,[EBX + 0x1c04]              ; 00542fbb
    PUSH EAX                            ; 00542fc1
    LEA EAX,[EBX + 0x1c00]              ; 00542fc2
    PUSH EAX                            ; 00542fc8
    PUSH 0x5e6fcf                       ; 00542fc9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00542fce
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00542fcf
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00542fd4
    CMP dword ptr [ESP + 0x28],0x7      ; 00542fd7
        ;   Label: LAB_00542fd7
    JL 0x00543063                       ; 00542fdc
        ;   XREF to: 00543063 (CONDITIONAL_JUMP)  ; LAB_00543063
    MOV EDI,ESI                         ; 00542fe2
    PUSH EDI                            ; 00542fe4
        ;   Label: LAB_00542fe4
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 00542fe5
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005b8180(_FILE * file)
    ADD ESP,0x4                         ; 00542fea
    TEST EAX,EAX                        ; 00542fed
    JL 0x00542ff6                       ; 00542fef
        ;   XREF to: 00542ff6 (CONDITIONAL_JUMP)  ; LAB_00542ff6
    CMP EAX,0xa                         ; 00542ff1
    JNZ 0x00542fe4                      ; 00542ff4
        ;   XREF to: 00542fe4 (CONDITIONAL_JUMP)  ; LAB_00542fe4
    XOR EDI,EDI                         ; 00542ff6
        ;   Label: LAB_00542ff6
    CMP EDI,dword ptr [ESP + 0x2c]      ; 00542ff8
        ;   Label: LAB_00542ff8
    JGE 0x00543063                      ; 00542ffc
        ;   XREF to: 00543063 (CONDITIONAL_JUMP)  ; LAB_00543063
    LEA EAX,[EDI*0x4 + 0x0]             ; 00542ffe
    LEA EDX,[EBX + 0x26fc]              ; 00543005
    ADD EAX,EDX                         ; 0054300b
    PUSH EAX                            ; 0054300d
    PUSH 0x5e6fd9                       ; 0054300e | DAT_005e6fd9
    PUSH ESI                            ; 00543013
    INC EDI                             ; 00543014
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 00543015
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0054301a
    JMP 0x00542ff8                      ; 0054301d
        ;   XREF to: 00542ff8 (UNCONDITIONAL_JUMP)  ; LAB_00542ff8
    MOV dword ptr [EBX + 0x174c],0x3f800000 ; 0054301f
        ;   Label: LAB_0054301f
    MOV EAX,dword ptr [EBX + 0x174c]    ; 00543029
    MOV dword ptr [EBX + 0x1748],EAX    ; 0054302f
    MOV EAX,dword ptr [EBX + 0x1748]    ; 00543035
    MOV dword ptr [EBX + 0x1744],EAX    ; 0054303b
    JMP 0x00542f95                      ; 00543041
        ;   XREF to: 00542f95 (UNCONDITIONAL_JUMP)  ; LAB_00542f95
    LEA EAX,[EBX + 0x1c00]              ; 00543046
        ;   Label: LAB_00543046
    MOV dword ptr [EAX + 0x8],0x0       ; 0054304c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00543053
    MOV dword ptr [EAX + 0x4],EDX       ; 00543056
    MOV EDX,dword ptr [EAX + 0x4]       ; 00543059
    MOV dword ptr [EAX],EDX             ; 0054305c
    JMP 0x00542fd7                      ; 0054305e
        ;   XREF to: 00542fd7 (UNCONDITIONAL_JUMP)  ; LAB_00542fd7
    CMP dword ptr [ESP + 0x28],0x7      ; 00543063
        ;   Label: LAB_00543063
    JGE 0x00543073                      ; 00543068
        ;   XREF to: 00543073 (CONDITIONAL_JUMP)  ; LAB_00543073
    PUSH EBX                            ; 0054306a
    CALL core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 ; 0054306b
        ;   XREF to: 00544380 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 00543070
    TEST byte ptr [ESI + 0xc],0x20      ; 00543073
        ;   Label: LAB_00543073
    JNZ 0x00543081                      ; 00543077
        ;   XREF to: 00543081 (CONDITIONAL_JUMP)  ; LAB_00543081
    ADD ESP,0x7c                        ; 00543079
    POP EBP                             ; 0054307c
    POP EDI                             ; 0054307d
    POP ESI                             ; 0054307e
    POP EBX                             ; 0054307f
    RET                                 ; 00543080
    MOV EBX,0x5e6fdd                    ; 00543081 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_00543081
    MOV ESI,0x5a5                       ; 00543086
    PUSH 0x5e6ff2                       ; 0054308b | = "CDeformableModel::loadStream - error ..."
    MOV dword ptr [0x01d046a0],EBX      ; 00543090 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00543096 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054309c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005430a1
    ADD ESP,0x7c                        ; 005430a4
    POP EBP                             ; 005430a7
    POP EDI                             ; 005430a8
    POP ESI                             ; 005430a9
    POP EBX                             ; 005430aa
    RET                                 ; 005430ab

