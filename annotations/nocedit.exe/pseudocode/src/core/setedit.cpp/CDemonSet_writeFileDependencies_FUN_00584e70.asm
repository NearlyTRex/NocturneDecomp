; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_CDemonSet_writeFileDependencies_FUN_00584e70(CDemonSet *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[256]        Stack[-0x218]:256  local_218
; char[256]        Stack[-0x118]:256  local_118
; CDemonSet *      Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fileman.cpp_CDemonFileManager_addSetToExtractList_FUN_004bd8e0 at 004bd91f
;
; Referenced Globals:
;   TerminatedCString s_data_s_00648ffe
;   TerminatedCString s_core_setedit_cpp_00649007
;   TerminatedCString s_Unable_to_find_ext_in_ge_0064901b
;   TerminatedCString s_zth_0064903a
;   TerminatedCString s_data_s_0064903f
;   TerminatedCString s_thm_00649048
;   TerminatedCString s_data_s_0064904d
;   TerminatedCString s_backdrop_sn_raw_00649056
;   TerminatedCString s_backdrop_sn_act_00649068
;   TerminatedCString s_backdrop_ss_raw_0064907a
;   TerminatedCString s_backdrop_ss_act_0064908c
;   TerminatedCString s_backdrop_se_raw_0064909e
;   TerminatedCString s_backdrop_se_act_006490b0
;   TerminatedCString s_backdrop_sw_raw_006490c2
;   TerminatedCString s_backdrop_sw_act_006490d4
;   ... and 22 more
;
; Called Functions:
;   core_dmodel.cpp_writeModelDependencies_FUN_0047ee30
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_dosio.cpp_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584e70
        ;   Label: core_setedit.cpp_CDemonSet_writeFileDependencies_FUN_00584e70
    PUSH ESI                            ; 00584e71
    PUSH EDI                            ; 00584e72
    PUSH EBP                            ; 00584e73
    SUB ESP,0x208                       ; 00584e74
    MOV EBP,dword ptr [ESP + 0x220]     ; 00584e7a
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00584e81
    ADD EDX,0x14d0f0                    ; 00584e88
    PUSH EDX                            ; 00584e8e
    PUSH 0x648ffe                       ; 00584e8f | = "data\\%s\n"
    PUSH EBP                            ; 00584e94
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00584e95
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00584e9a
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00584e9d
    CMP dword ptr [EDX + 0x15ac94],0x0  ; 00584ea4
    JNZ 0x0058508b                      ; 00584eab
        ;   XREF to: 0058508b (CONDITIONAL_JUMP)  ; LAB_0058508b
    PUSH 0x1                            ; 00584eb1
        ;   Label: LAB_00584eb1
    MOV EBX,dword ptr [ESP + 0x220]     ; 00584eb3
    PUSH EBX                            ; 00584eba
    LEA EDI,[ESP + 0x108]               ; 00584ebb
    CALL core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0 ; 00584ec2
        ;   XREF to: 00576da0 (UNCONDITIONAL_CALL)  ; void core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet * this_ptr, int force_rebuild)
    ADD ESP,0x8                         ; 00584ec7
    LEA ESI,[EBX + 0x14d0f0]            ; 00584eca
    MOV DL,0x2e                         ; 00584ed0
    PUSH EDI                            ; 00584ed2
    MOV AL,byte ptr [ESI]               ; 00584ed3
        ;   Label: LAB_00584ed3
    MOV byte ptr [EDI],AL               ; 00584ed5
    CMP AL,0x0                          ; 00584ed7
    JZ 0x00584eeb                       ; 00584ed9
        ;   XREF to: 00584eeb (CONDITIONAL_JUMP)  ; LAB_00584eeb
    MOV AL,byte ptr [ESI + 0x1]         ; 00584edb
    ADD ESI,0x2                         ; 00584ede
    MOV byte ptr [EDI + 0x1],AL         ; 00584ee1
    ADD EDI,0x2                         ; 00584ee4
    CMP AL,0x0                          ; 00584ee7
    JNZ 0x00584ed3                      ; 00584ee9
        ;   XREF to: 00584ed3 (CONDITIONAL_JUMP)  ; LAB_00584ed3
    POP EDI                             ; 00584eeb
        ;   Label: LAB_00584eeb
    LEA ESI,[ESP + 0x100]               ; 00584eec
    MOV AL,byte ptr [ESI]               ; 00584ef3
        ;   Label: LAB_00584ef3
    CMP AL,DL                           ; 00584ef5
    JZ 0x00584f0b                       ; 00584ef7
        ;   XREF to: 00584f0b (CONDITIONAL_JUMP)  ; LAB_00584f0b
    CMP AL,0x0                          ; 00584ef9
    JZ 0x00584f09                       ; 00584efb
        ;   XREF to: 00584f09 (CONDITIONAL_JUMP)  ; LAB_00584f09
    INC ESI                             ; 00584efd
    MOV AL,byte ptr [ESI]               ; 00584efe
    CMP AL,DL                           ; 00584f00
    JZ 0x00584f0b                       ; 00584f02
        ;   XREF to: 00584f0b (CONDITIONAL_JUMP)  ; LAB_00584f0b
    INC ESI                             ; 00584f04
    CMP AL,0x0                          ; 00584f05
    JNZ 0x00584ef3                      ; 00584f07
        ;   XREF to: 00584ef3 (CONDITIONAL_JUMP)  ; LAB_00584ef3
    SUB ESI,ESI                         ; 00584f09
        ;   Label: LAB_00584f09
    MOV EBX,ESI                         ; 00584f0b
        ;   Label: LAB_00584f0b
    TEST ESI,ESI                        ; 00584f0d
    JNZ 0x00584f34                      ; 00584f0f
        ;   XREF to: 00584f34 (CONDITIONAL_JUMP)  ; LAB_00584f34
    MOV ESI,0x649007                    ; 00584f11 | = "..\\core\\setedit.cpp"
    MOV EDI,0x1756                      ; 00584f16
    PUSH 0x64901b                       ; 00584f1b | = "Unable to find ext in geomName"
    MOV dword ptr [0x02f0ca48],ESI      ; 00584f20 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00584f26 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00584f2c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00584f31
    PUSH 0x64903a                       ; 00584f34 | = ".zth"
        ;   Label: LAB_00584f34
    PUSH EBX                            ; 00584f39
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00584f3a
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00584f3f
    LEA EDX,[ESP + 0x100]               ; 00584f42
    PUSH EDX                            ; 00584f49
    PUSH 0x64903f                       ; 00584f4a | = "data\\%s\n"
    PUSH EBP                            ; 00584f4f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00584f50
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00584f55
    PUSH 0x649048                       ; 00584f58 | = ".thm"
    PUSH EBX                            ; 00584f5d
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00584f5e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00584f63
    LEA EDX,[ESP + 0x100]               ; 00584f66
    PUSH EDX                            ; 00584f6d
    PUSH 0x64904d                       ; 00584f6e | = "data\\%s\n"
    PUSH EBP                            ; 00584f73
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00584f74
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00584f79
    MOV EDX,dword ptr [ESP + 0x21c]     ; 00584f7c
    XOR EAX,EAX                         ; 00584f83
    MOV ECX,dword ptr [EDX]             ; 00584f85
    MOV dword ptr [ESP + 0x204],EAX     ; 00584f87
    TEST ECX,ECX                        ; 00584f8e
    JLE 0x00585080                      ; 00584f90
        ;   XREF to: 00585080 (CONDITIONAL_JUMP)  ; LAB_00585080
    LEA EBX,[EDX + 0x4]                 ; 00584f96
    MOV dword ptr [ESP + 0x200],EDX     ; 00584f99
    MOV EDX,dword ptr [ESP + 0x200]     ; 00584fa0
        ;   Label: LAB_00584fa0
    CMP dword ptr [EDX + 0x144],0x0     ; 00584fa7
    JNZ 0x005850a0                      ; 00584fae
        ;   XREF to: 005850a0 (CONDITIONAL_JUMP)  ; LAB_005850a0
    PUSH EBX                            ; 00584fb4
    PUSH 0x64913e                       ; 00584fb5 | = "%s.raw"
    LEA EDX,[ESP + 0x108]               ; 00584fba
    PUSH EDX                            ; 00584fc1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00584fc2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00584fc7
    PUSH 0x649145                       ; 00584fca | = "rb"
    LEA EDX,[ESP + 0x104]               ; 00584fcf
    PUSH EDX                            ; 00584fd6
    PUSH 0x649148                       ; 00584fd7 | = "backdrop"
    CALL engine_dosio.cpp_getFile_FUN_00481a50 ; 00584fdc
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
    MOV EDX,EAX                         ; 00584fe1
    ADD ESP,0xc                         ; 00584fe3
    TEST EAX,EAX                        ; 00584fe6
    JNZ 0x0058515f                      ; 00584fe8
        ;   XREF to: 0058515f (CONDITIONAL_JUMP)  ; LAB_0058515f
    MOV ESI,0x649151                    ; 00584fee | = "art"
    MOV EDI,ESP                         ; 00584ff3
    PUSH EDI                            ; 00584ff5
    MOV AL,byte ptr [ESI]               ; 00584ff6 | = "art" | s_t_00649151+2
        ;   Label: LAB_00584ff6
    MOV byte ptr [EDI],AL               ; 00584ff8
    CMP AL,0x0                          ; 00584ffa
    JZ 0x0058500e                       ; 00584ffc
        ;   XREF to: 0058500e (CONDITIONAL_JUMP)  ; LAB_0058500e
    MOV AL,byte ptr [ESI + 0x1]         ; 00584ffe | s_rt_00649151+1 | s__00649151+3
    ADD ESI,0x2                         ; 00585001
    MOV byte ptr [EDI + 0x1],AL         ; 00585004
    ADD EDI,0x2                         ; 00585007
    CMP AL,0x0                          ; 0058500a
    JNZ 0x00584ff6                      ; 0058500c
        ;   XREF to: 00584ff6 (CONDITIONAL_JUMP)  ; LAB_00584ff6
    POP EDI                             ; 0058500e
        ;   Label: LAB_0058500e
    PUSH EBX                            ; 0058500f
        ;   Label: LAB_0058500f
    LEA EDX,[ESP + 0x4]                 ; 00585010
    PUSH EDX                            ; 00585014
    PUSH 0x649172                       ; 00585015 | = "%s\\%s.raw\n"
    PUSH EBP                            ; 0058501a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058501b
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00585020
    PUSH EBX                            ; 00585023
    LEA EDX,[ESP + 0x4]                 ; 00585024
    PUSH EDX                            ; 00585028
    PUSH 0x64917d                       ; 00585029 | = "%s\\%s.act\n"
    PUSH EBP                            ; 0058502e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058502f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00585034
    PUSH EBX                            ; 00585037
    PUSH 0x649188                       ; 00585038 | = "backdrop\\%s.fog\n"
    PUSH EBP                            ; 0058503d
        ;   Label: LAB_0058503d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058503e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585043
    MOV ESI,dword ptr [ESP + 0x200]     ; 00585046
    ADD ESI,0x1a4                       ; 0058504d
    MOV EDI,dword ptr [ESP + 0x204]     ; 00585053
    MOV dword ptr [ESP + 0x200],ESI     ; 0058505a
    MOV ESI,dword ptr [ESP + 0x21c]     ; 00585061
    ADD EBX,0x1a4                       ; 00585068
    INC EDI                             ; 0058506e
    MOV EAX,dword ptr [ESI]             ; 0058506f
    MOV dword ptr [ESP + 0x204],EDI     ; 00585071
    CMP EDI,EAX                         ; 00585078
    JL 0x00584fa0                       ; 0058507a
        ;   XREF to: 00584fa0 (CONDITIONAL_JUMP)  ; LAB_00584fa0
    ADD ESP,0x208                       ; 00585080
        ;   Label: LAB_00585080
    POP EBP                             ; 00585086
    POP EDI                             ; 00585087
    POP ESI                             ; 00585088
    POP EBX                             ; 00585089
    RET                                 ; 0058508a
    ADD EDX,0x15ac98                    ; 0058508b
        ;   Label: LAB_0058508b
    PUSH EDX                            ; 00585091
    PUSH EBP                            ; 00585092
    CALL core_dmodel.cpp_writeModelDependencies_FUN_0047ee30 ; 00585093
        ;   XREF to: 0047ee30 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_writeModelDependencies_FUN_0047ee30(_FILE * dependency_file, char * model_filename)
    ADD ESP,0x8                         ; 00585098
    JMP 0x00584eb1                      ; 0058509b
        ;   XREF to: 00584eb1 (UNCONDITIONAL_JUMP)  ; LAB_00584eb1
    PUSH EBX                            ; 005850a0
        ;   Label: LAB_005850a0
    PUSH 0x649056                       ; 005850a1 | = "backdrop\\%sn.raw\n"
    PUSH EBP                            ; 005850a6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850a7
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850ac
    PUSH EBX                            ; 005850af
    PUSH 0x649068                       ; 005850b0 | = "backdrop\\%sn.act\n"
    PUSH EBP                            ; 005850b5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850b6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850bb
    PUSH EBX                            ; 005850be
    PUSH 0x64907a                       ; 005850bf | = "backdrop\\%ss.raw\n"
    PUSH EBP                            ; 005850c4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850c5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850ca
    PUSH EBX                            ; 005850cd
    PUSH 0x64908c                       ; 005850ce | = "backdrop\\%ss.act\n"
    PUSH EBP                            ; 005850d3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850d4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850d9
    PUSH EBX                            ; 005850dc
    PUSH 0x64909e                       ; 005850dd | = "backdrop\\%se.raw\n"
    PUSH EBP                            ; 005850e2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850e3
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850e8
    PUSH EBX                            ; 005850eb
    PUSH 0x6490b0                       ; 005850ec | = "backdrop\\%se.act\n"
    PUSH EBP                            ; 005850f1
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005850f2
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 005850f7
    PUSH EBX                            ; 005850fa
    PUSH 0x6490c2                       ; 005850fb | = "backdrop\\%sw.raw\n"
    PUSH EBP                            ; 00585100
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585101
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585106
    PUSH EBX                            ; 00585109
    PUSH 0x6490d4                       ; 0058510a | = "backdrop\\%sw.act\n"
    PUSH EBP                            ; 0058510f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585110
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585115
    PUSH EBX                            ; 00585118
    PUSH 0x6490e6                       ; 00585119 | = "backdrop\\%su.raw\n"
    PUSH EBP                            ; 0058511e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058511f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585124
    PUSH EBX                            ; 00585127
    PUSH 0x6490f8                       ; 00585128 | = "backdrop\\%su.act\n"
    PUSH EBP                            ; 0058512d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058512e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585133
    PUSH EBX                            ; 00585136
    PUSH 0x64910a                       ; 00585137 | = "backdrop\\%sd.raw\n"
    PUSH EBP                            ; 0058513c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058513d
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585142
    PUSH EBX                            ; 00585145
    PUSH 0x64911c                       ; 00585146 | = "backdrop\\%sd.act\n"
    PUSH EBP                            ; 0058514b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058514c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00585151
    PUSH EBX                            ; 00585154
    PUSH 0x64912e                       ; 00585155 | = "backdrop\\%s.cm\n"
    JMP 0x0058503d                      ; 0058515a
        ;   XREF to: 0058503d (UNCONDITIONAL_JUMP)  ; LAB_0058503d
    MOV ESI,0x649155                    ; 0058515f | = "backdrop"
        ;   Label: LAB_0058515f
    MOV EDI,ESP                         ; 00585164
    PUSH EDI                            ; 00585166
    MOV AL,byte ptr [ESI]               ; 00585167 | = "backdrop" | s_ckdrop_00649157
        ;   Label: LAB_00585167
    MOV byte ptr [EDI],AL               ; 00585169
    CMP AL,0x0                          ; 0058516b
    JZ 0x0058517f                       ; 0058516d
        ;   XREF to: 0058517f (CONDITIONAL_JUMP)  ; LAB_0058517f
    MOV AL,byte ptr [ESI + 0x1]         ; 0058516f | s_ackdrop_00649156 | s_kdrop_00649158
    ADD ESI,0x2                         ; 00585172
    MOV byte ptr [EDI + 0x1],AL         ; 00585175
    ADD EDI,0x2                         ; 00585178
    CMP AL,0x0                          ; 0058517b
    JNZ 0x00585167                      ; 0058517d
        ;   XREF to: 00585167 (CONDITIONAL_JUMP)  ; LAB_00585167
    POP EDI                             ; 0058517f
        ;   Label: LAB_0058517f
    PUSH 0x177e                         ; 00585180
    PUSH 0x64915e                       ; 00585185 | = "..\\core\\setedit.cpp"
    PUSH EDX                            ; 0058518a
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 0058518b
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)  ; int shape_memdbg.cpp_closeFile_FUN_0050f9b0(_FILE * file_ptr, char * source_file, int line_number)
    ADD ESP,0xc                         ; 00585190
    JMP 0x0058500f                      ; 00585193
        ;   XREF to: 0058500f (UNCONDITIONAL_JUMP)  ; LAB_0058500f

