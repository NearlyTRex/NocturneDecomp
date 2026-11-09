; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * core_set_cpp_FUN_00532b80(CDemonSet *param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x330]:1  local_330
; undefined        Stack[-0x230]:1  local_230
; undefined        Stack[-0x130]:1  local_130
; undefined1       Stack[-0x12f]:1  local_12f
; undefined        Stack[-0xcc]:1  local_cc
; undefined1       Stack[-0xcb]:1  local_cb
; undefined1       Stack[-0xc9]:1  local_c9
; undefined1       Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x4c]:1  local_4c
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
;   core_mission.cpp_FUN_004f6de0 at 004f6e02
;
; Referenced Globals:
;   TerminatedCString s_Loading_set_005d0121
;   undefined4 DAT_005d012d
;   TerminatedCString s_models_005d0130
;   TerminatedCString s_core_set_cpp_005d0137
;   TerminatedCString s_CDemonSet_Unable_to_open_005d0147
;   undefined4 DAT_005d0164
;   undefined4 DAT_005d0168
;   undefined4 DAT_005d016c
;   undefined4 DAT_005d0170
;   undefined4 DAT_005d0174
;   TerminatedCString s_f_f_f_f_005d0178
;   TerminatedCString s_d_d_d_d_005d0185
;   TerminatedCString s_f_f_f_005d0192
;   TerminatedCString s_f_f_f_f_005d019c
;   TerminatedCString s_f_f_005d01a9
;   ... and 64 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00450c00
;   core_dirmat.cpp_FUN_0045b550
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550
;   core_dtrace.cpp_FUN_00473b20
;   core_level.cpp_FUN_004e0000
;   core_main.c_FUN_004e4330
;   core_path.cpp_resetAllPathMaps_FUN_0050cf60
;   core_set.cpp_CDemonSet_clear_FUN_00532b30
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40
;   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0
;   core_setdir.cpp_FUN_00540be0
;   core_setdir.cpp_FUN_005418d0
;   core_setutil.cpp_FUN_00541b70
;   core_setutil.cpp_FUN_00541f00
;   core_setutil.cpp_FUN_005421c0
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532b80
        ;   Label: core_set.cpp_FUN_00532b80
    PUSH ESI                            ; 00532b81
    PUSH EDI                            ; 00532b82
    PUSH EBP                            ; 00532b83
    MOV EBP,ESP                         ; 00532b84
    SUB ESP,0x320                       ; 00532b86
    AND ESP,0xfffffff8                  ; 00532b8c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00532b8f
    PUSH 0x0                            ; 00532b92
    PUSH 0x5d0121                       ; 00532b94 | = "Loading set"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00532b99
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 00532b9e
    PUSH EAX                            ; 00532ba1
    MOV EDX,dword ptr [0x006002ac]      ; 00532ba2 | DAT_006002ac
    PUSH EDX                            ; 00532ba8
    CALL core_level.cpp_FUN_004e0000    ; 00532ba9
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 00532bae
    MOV ECX,dword ptr [EBP + 0x14]      ; 00532bb1
    PUSH ECX                            ; 00532bb4
    CALL core_set.cpp_CDemonSet_clear_FUN_00532b30 ; 00532bb5
        ;   XREF to: 00532b30 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_00532b30(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00532bba
    PUSH 0x5d012d                       ; 00532bbd | DAT_005d012d
    PUSH ESI                            ; 00532bc2
    PUSH 0x5d0130                       ; 00532bc3 | = "models"
    CALL engine_dosio.cpp_FUN_004659c0  ; 00532bc8
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00532bcd
    MOV EBX,EAX                         ; 00532bd0
    TEST EAX,EAX                        ; 00532bd2
    JZ 0x00533751                       ; 00532bd4
        ;   XREF to: 00533751 (CONDITIONAL_JUMP)  ; LAB_00533751
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532bda
        ;   Label: LAB_00532bda
    ADD EAX,0x15acc0                    ; 00532bdd
    PUSH EAX                            ; 00532be2
    PUSH 0x5d0164                       ; 00532be3 | DAT_005d0164
    PUSH EBX                            ; 00532be8
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532be9
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532bee
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532bf1
    ADD EAX,0x15aea8                    ; 00532bf4
    PUSH EAX                            ; 00532bf9
    PUSH 0x5d0168                       ; 00532bfa | DAT_005d0168
    PUSH EBX                            ; 00532bff
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532c00
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532c05
    MOV EAX,ESP                         ; 00532c08
    PUSH EAX                            ; 00532c0a
    PUSH 0x5d016c                       ; 00532c0b | DAT_005d016c
    PUSH EBX                            ; 00532c10
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532c11
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532c16
    LEA EAX,[ESP + 0x200]               ; 00532c19
    PUSH EAX                            ; 00532c20
    PUSH 0x5d0170                       ; 00532c21 | DAT_005d0170
    PUSH EBX                            ; 00532c26
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532c27
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532c2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532c2f
    ADD EAX,0x14d150                    ; 00532c32
    PUSH EAX                            ; 00532c37
    PUSH 0x5d0174                       ; 00532c38 | DAT_005d0174
    PUSH EBX                            ; 00532c3d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532c3e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532c43
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532c46
    MOV ESI,dword ptr [EBP + 0x14]      ; 00532c49
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 00532c4c
    ADD ESI,0x14d154                    ; 00532c52
    CMP EDX,0x1e                        ; 00532c58
    JL 0x00533779                       ; 00532c5b
        ;   XREF to: 00533779 (CONDITIONAL_JUMP)  ; LAB_00533779
    ADD EAX,0x14d160                    ; 00532c61
    PUSH EAX                            ; 00532c66
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532c67
    ADD EAX,0x14d15c                    ; 00532c6a
    PUSH EAX                            ; 00532c6f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532c70
    ADD EAX,0x14d158                    ; 00532c73
    PUSH EAX                            ; 00532c78
    PUSH ESI                            ; 00532c79
    PUSH 0x5d0178                       ; 00532c7a | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 00532c7f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532c80
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x18                        ; 00532c85
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532c88
        ;   Label: LAB_00532c88
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 00532c8b
    JNZ 0x00532ccd                      ; 00532c92
        ;   XREF to: 00532ccd (CONDITIONAL_JUMP)  ; LAB_00532ccd
    PUSH EBX                            ; 00532c94
    PUSH 0xff                           ; 00532c95
    LEA EAX,[ESP + 0x8]                 ; 00532c9a
    PUSH EAX                            ; 00532c9e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532c9f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532ca4
    PUSH EBX                            ; 00532ca7
    PUSH 0xff                           ; 00532ca8
    LEA EAX,[ESP + 0x8]                 ; 00532cad
    PUSH EAX                            ; 00532cb1
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532cb2
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532cb7
    PUSH EBX                            ; 00532cba
    PUSH 0xff                           ; 00532cbb
    LEA EAX,[ESP + 0x8]                 ; 00532cc0
    PUSH EAX                            ; 00532cc4
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532cc5
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532cca
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532ccd
        ;   Label: LAB_00532ccd
    MOV ESI,dword ptr [EBP + 0x14]      ; 00532cd0
    MOV EDI,dword ptr [EAX + 0x15acc0]  ; 00532cd3
    ADD ESI,0x15ac40                    ; 00532cd9
    CMP EDI,0x11                        ; 00532cdf
    JGE 0x0053381d                      ; 00532ce2
        ;   XREF to: 0053381d (CONDITIONAL_JUMP)  ; LAB_0053381d
    PUSH EBX                            ; 00532ce8
    PUSH 0xff                           ; 00532ce9
    LEA EAX,[ESP + 0x8]                 ; 00532cee
    PUSH EAX                            ; 00532cf2
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532cf3
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532cf8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532cfb
    ADD EAX,0x15ac48                    ; 00532cfe
    PUSH EAX                            ; 00532d03
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d04
    ADD EAX,0x15ac44                    ; 00532d07
    PUSH EAX                            ; 00532d0c
    PUSH ESI                            ; 00532d0d
    LEA EAX,[ESP + 0x2f0]               ; 00532d0e
    PUSH EAX                            ; 00532d15
    PUSH 0x5d0185                       ; 00532d16 | = "%d,%d,%d,%d\n"
    PUSH EBX                            ; 00532d1b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532d1c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x18                        ; 00532d21
    PUSH EBX                            ; 00532d24
    PUSH 0xff                           ; 00532d25
    LEA EAX,[ESP + 0x8]                 ; 00532d2a
    PUSH EAX                            ; 00532d2e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532d2f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532d34
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d37
    ADD EAX,0x15ac54                    ; 00532d3a
    PUSH EAX                            ; 00532d3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d40
    ADD EAX,0x15ac50                    ; 00532d43
    PUSH EAX                            ; 00532d48
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d49
    ADD EAX,0x15ac4c                    ; 00532d4c
    PUSH EAX                            ; 00532d51
    PUSH 0x5d0192                       ; 00532d52 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00532d57
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532d58
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 00532d5d
    LEA EAX,[ESP + 0x2e4]               ; 00532d60
    PUSH EAX                            ; 00532d67
    PUSH EAX                            ; 00532d68
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d69
    ADD EAX,0x15ac5c                    ; 00532d6c
    PUSH EAX                            ; 00532d71
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d72
    ADD EAX,0x15ac58                    ; 00532d75
    PUSH EAX                            ; 00532d7a
    PUSH 0x5d019c                       ; 00532d7b | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 00532d80
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532d81
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x18                        ; 00532d86
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532d89
    MOV dword ptr [EAX + 0x15ac60],0x42480000 ; 00532d8c
    PUSH EBX                            ; 00532d96
        ;   Label: LAB_00532d96
    PUSH 0xff                           ; 00532d97
    LEA EAX,[ESP + 0x8]                 ; 00532d9c
    PUSH EAX                            ; 00532da0
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532da1
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    MOV EAX,[0x00606b20]                ; 00532da6 | g_CWaterPtr
    ADD ESP,0xc                         ; 00532dab
    LEA ESI,[EAX + 0x8]                 ; 00532dae
    PUSH ESI                            ; 00532db1
    ADD EAX,0x4                         ; 00532db2
    PUSH EAX                            ; 00532db5
    PUSH 0x5d01a9                       ; 00532db6 | = "%f,%f\n"
    PUSH EBX                            ; 00532dbb
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532dbc
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00532dc1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532dc4
    CMP dword ptr [EAX + 0x15acc0],0x1f ; 00532dc7
    JL 0x0053382d                       ; 00532dce
        ;   XREF to: 0053382d (CONDITIONAL_JUMP)  ; LAB_0053382d
    PUSH EBX                            ; 00532dd4
    PUSH 0xff                           ; 00532dd5
    LEA EAX,[ESP + 0x8]                 ; 00532dda
    PUSH EAX                            ; 00532dde
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532ddf
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532de4
    PUSH 0x2cfd964                      ; 00532de7 | DAT_02cfd964
    PUSH 0x2cfd960                      ; 00532dec | DAT_02cfd960
    PUSH 0x606b28                       ; 00532df1 | DAT_00606b28
    PUSH 0x606b24                       ; 00532df6 | DAT_00606b24
    PUSH 0x5d01b0                       ; 00532dfb | = "%f,%d,%f,%f\n"
    PUSH EBX                            ; 00532e00
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532e01
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x18                        ; 00532e06
    PUSH EBX                            ; 00532e09
        ;   Label: LAB_00532e09
    PUSH 0xff                           ; 00532e0a
    LEA EAX,[ESP + 0x8]                 ; 00532e0f
    PUSH EAX                            ; 00532e13
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532e14
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532e19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532e1c
    ADD EAX,0x15aca8                    ; 00532e1f
    PUSH EAX                            ; 00532e24
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532e25
    ADD EAX,0x15aca4                    ; 00532e28
    PUSH EAX                            ; 00532e2d
    PUSH 0x5d01bd                       ; 00532e2e | = "%d,%s\n"
    PUSH EBX                            ; 00532e33
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532e34
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00532e39
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532e3c
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 00532e3f
    JL 0x00533854                       ; 00532e46
        ;   XREF to: 00533854 (CONDITIONAL_JUMP)  ; LAB_00533854
    PUSH EBX                            ; 00532e4c
    PUSH 0xff                           ; 00532e4d
    LEA EAX,[ESP + 0x8]                 ; 00532e52
    PUSH EAX                            ; 00532e56
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532e57
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532e5c
    MOV ESI,dword ptr [0x00606b20]      ; 00532e5f | g_CWaterPtr
    PUSH ESI                            ; 00532e65 | g_CWaterInstance
    PUSH 0x5d01c4                       ; 00532e66 | DAT_005d01c4
    PUSH EBX                            ; 00532e6b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532e6c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532e71
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532e74
        ;   Label: LAB_00532e74
    CMP dword ptr [EAX + 0x15acc0],0x6  ; 00532e77
    JL 0x0053388f                       ; 00532e7e
        ;   XREF to: 0053388f (CONDITIONAL_JUMP)  ; LAB_0053388f
    PUSH EBX                            ; 00532e84
    PUSH 0xff                           ; 00532e85
    LEA EAX,[ESP + 0x8]                 ; 00532e8a
    PUSH EAX                            ; 00532e8e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532e8f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532e94
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532e97
    ADD EAX,0x161640                    ; 00532e9a
    PUSH EAX                            ; 00532e9f
    PUSH 0x5d01cd                       ; 00532ea0 | DAT_005d01cd
    PUSH EBX                            ; 00532ea5
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532ea6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532eab
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532eae
        ;   Label: LAB_00532eae
    MOV EDI,dword ptr [EBP + 0x14]      ; 00532eb1
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 00532eb4
    ADD EDI,0x161644                    ; 00532eba
    CMP EDX,0xc                         ; 00532ec0
    JL 0x0053389e                       ; 00532ec3
        ;   XREF to: 0053389e (CONDITIONAL_JUMP)  ; LAB_0053389e
    PUSH EDI                            ; 00532ec9
    ADD EAX,0x161664                    ; 00532eca
    PUSH EAX                            ; 00532ecf
    PUSH 0x5d01d1                       ; 00532ed0 | = "%d,%s\n"
    PUSH EBX                            ; 00532ed5
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532ed6
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00532edb
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532ede
        ;   Label: LAB_00532ede
    MOV EDI,dword ptr [EBP + 0x14]      ; 00532ee1
    MOV ECX,dword ptr [EAX + 0x15acc0]  ; 00532ee4
    ADD EDI,0x15ae64                    ; 00532eea
    CMP ECX,0xd                         ; 00532ef0
    JL 0x005338cf                       ; 00532ef3
        ;   XREF to: 005338cf (CONDITIONAL_JUMP)  ; LAB_005338cf
    PUSH EBX                            ; 00532ef9
    PUSH 0xff                           ; 00532efa
    LEA EAX,[ESP + 0x8]                 ; 00532eff
    PUSH EAX                            ; 00532f03
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532f04
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532f09
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532f0c
    PUSH EDI                            ; 00532f0f
    ADD EAX,0x15ae60                    ; 00532f10
    PUSH EAX                            ; 00532f15
    PUSH 0x5d01e4                       ; 00532f16 | = "%d,%s\n"
    PUSH EBX                            ; 00532f1b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532f1c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x10                        ; 00532f21
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532f24
        ;   Label: LAB_00532f24
    CMP dword ptr [EAX + 0x15acc0],0x19 ; 00532f27
    JL 0x005338fd                       ; 00532f2e
        ;   XREF to: 005338fd (CONDITIONAL_JUMP)  ; LAB_005338fd
    PUSH EBX                            ; 00532f34
    PUSH 0xff                           ; 00532f35
    LEA EAX,[ESP + 0x8]                 ; 00532f3a
    PUSH EAX                            ; 00532f3e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532f3f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532f44
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532f47
    ADD EAX,0x161680                    ; 00532f4a
    PUSH EAX                            ; 00532f4f
    PUSH 0x5d01f0                       ; 00532f50 | DAT_005d01f0
    PUSH EBX                            ; 00532f55
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532f56
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532f5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532f5e
        ;   Label: LAB_00532f5e
    CMP dword ptr [EAX + 0x15acc0],0x1d ; 00532f61
    JL 0x0053390c                       ; 00532f68
        ;   XREF to: 0053390c (CONDITIONAL_JUMP)  ; LAB_0053390c
    PUSH EBX                            ; 00532f6e
    PUSH 0xff                           ; 00532f6f
    LEA EAX,[ESP + 0x8]                 ; 00532f74
    PUSH EAX                            ; 00532f78
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00532f79
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00532f7e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532f81
    ADD EAX,0x15acbc                    ; 00532f84
    PUSH EAX                            ; 00532f89
    PUSH 0x5d01f4                       ; 00532f8a | DAT_005d01f4
    PUSH EBX                            ; 00532f8f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00532f90
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00532f95
    PUSH 0x0                            ; 00532f98
        ;   Label: LAB_00532f98
    LEA EAX,[ESP + 0x104]               ; 00532f9a
    PUSH EAX                            ; 00532fa1
    PUSH 0x0                            ; 00532fa2
    PUSH 0x0                            ; 00532fa4
    LEA EAX,[ESP + 0x210]               ; 00532fa6
    PUSH EAX                            ; 00532fad
    CALL engine_dosio.cpp_FUN_00465e50  ; 00532fae
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00532fb3
    PUSH 0x5d01f8                       ; 00532fb6 | = "train"
    LEA EAX,[ESP + 0x104]               ; 00532fbb
    PUSH EAX                            ; 00532fc2
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00532fc3
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00532fc8
    TEST EAX,EAX                        ; 00532fcb
    JNZ 0x0053391b                      ; 00532fcd
        ;   XREF to: 0053391b (CONDITIONAL_JUMP)  ; LAB_0053391b
    MOV EDX,dword ptr [0x00606aa0]      ; 00532fd3 | DAT_00606aa0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532fd9
    PUSH EDX                            ; 00532fdc
    MOV dword ptr [EAX + 0x15acb8],0x1  ; 00532fdd
    CALL core_terrain.cpp_CTerrain_init_FUN_00572370 ; 00532fe7
        ;   XREF to: 00572370 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_init_FUN_00572370(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00532fec
    MOV ECX,dword ptr [EBP + 0x14]      ; 00532fef
        ;   Label: LAB_00532fef
    PUSH ECX                            ; 00532ff2
    ADD ESP,0x4                         ; 00532ff3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00532ff6
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 00532ff9
    JL 0x00533015                       ; 00533000
        ;   XREF to: 00533015 (CONDITIONAL_JUMP)  ; LAB_00533015
    PUSH EBX                            ; 00533002
    PUSH 0xff                           ; 00533003
    LEA EAX,[ESP + 0x8]                 ; 00533008
    PUSH EAX                            ; 0053300c
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0053300d
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00533012
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533015
        ;   Label: LAB_00533015
    ADD EAX,0x19a2c                     ; 00533018
    PUSH EAX                            ; 0053301d
    PUSH 0x5d01fe                       ; 0053301e | DAT_005d01fe
    PUSH EBX                            ; 00533023
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533024
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00533029
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053302c
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 0053302f
    XOR EDI,EDI                         ; 00533035
    TEST EDX,EDX                        ; 00533037
    JLE 0x00533060                      ; 00533039
        ;   XREF to: 00533060 (CONDITIONAL_JUMP)  ; LAB_00533060
    LEA ESI,[EAX + 0x19a30]             ; 0053303b
    PUSH EBX                            ; 00533041
        ;   Label: LAB_00533041
    PUSH ESI                            ; 00533042
    CALL core_setutil.cpp_FUN_005421c0  ; 00533043
        ;   XREF to: 005421c0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_FUN_005421c0(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00533048
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053304b
    INC EDI                             ; 0053304e
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 0053304f
    ADD ESI,0x1898                      ; 00533055
    CMP EDI,ECX                         ; 0053305b
    JL 0x00533041                       ; 0053305d
        ;   XREF to: 00533041 (CONDITIONAL_JUMP)  ; LAB_00533041
    NOP                                 ; 0053305f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533060
        ;   Label: LAB_00533060
    CMP dword ptr [EAX + 0x15acc0],0xb  ; 00533063
    JL 0x0053307f                       ; 0053306a
        ;   XREF to: 0053307f (CONDITIONAL_JUMP)  ; LAB_0053307f
    PUSH EBX                            ; 0053306c
    PUSH 0xff                           ; 0053306d
    LEA EAX,[ESP + 0x8]                 ; 00533072
    PUSH EAX                            ; 00533076
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00533077
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0053307c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053307f
        ;   Label: LAB_0053307f
    PUSH EDI                            ; 00533082
    PUSH 0x5d0202                       ; 00533083 | DAT_005d0202
    PUSH EBX                            ; 00533088
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533089
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0053308e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533091
    MOV EDX,dword ptr [EAX]             ; 00533094
    XOR EDI,EDI                         ; 00533096
    TEST EDX,EDX                        ; 00533098
    JLE 0x005330c0                      ; 0053309a
        ;   XREF to: 005330c0 (CONDITIONAL_JUMP)  ; LAB_005330c0
    LEA ESI,[EAX + 0x4]                 ; 0053309c
    PUSH EBX                            ; 0053309f
        ;   Label: LAB_0053309f
    PUSH ESI                            ; 005330a0
    CALL core_setutil.cpp_FUN_00541b70  ; 005330a1
        ;   XREF to: 00541b70 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_FUN_00541b70(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005330a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005330a9
    INC EDI                             ; 005330ac
    MOV ECX,dword ptr [EAX]             ; 005330ad
    ADD ESI,0x1a4                       ; 005330af
    CMP EDI,ECX                         ; 005330b5
    JL 0x0053309f                       ; 005330b7
        ;   XREF to: 0053309f (CONDITIONAL_JUMP)  ; LAB_0053309f
    LEA EAX,[EAX]                       ; 005330b9
    NOP                                 ; 005330bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005330c0
        ;   Label: LAB_005330c0
    CMP dword ptr [EAX + 0x15acc0],0x0  ; 005330c3
    JLE 0x0053393b                      ; 005330ca
        ;   XREF to: 0053393b (CONDITIONAL_JUMP)  ; LAB_0053393b
    PUSH EBX                            ; 005330d0
    PUSH 0xff                           ; 005330d1
    LEA EAX,[ESP + 0x8]                 ; 005330d6
    PUSH EAX                            ; 005330da
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 005330db
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 005330e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005330e3
    ADD EAX,0x15aed0                    ; 005330e6
    PUSH EAX                            ; 005330eb
    PUSH 0x5d0206                       ; 005330ec | DAT_005d0206
    PUSH EBX                            ; 005330f1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005330f2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005330f7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005330fa
    ADD EAX,0x15aed4                    ; 005330fd
    PUSH EAX                            ; 00533102
    PUSH 0x5d020a                       ; 00533103 | DAT_005d020a
    PUSH EBX                            ; 00533108
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533109
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0053310e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533111
    MOV EDI,dword ptr [EAX + 0x15aed4]  ; 00533114
    XOR ESI,ESI                         ; 0053311a
    TEST EDI,EDI                        ; 0053311c
    JLE 0x005332b0                      ; 0053311e
        ;   XREF to: 005332b0 (CONDITIONAL_JUMP)  ; LAB_005332b0
    ADD EAX,0x15aed8                    ; 00533124
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00533129
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533130
    ADD EAX,0x15af18                    ; 00533133
    MOV dword ptr [ESP + 0x31c],EAX     ; 00533138
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053313f
    ADD EAX,0x15aef0                    ; 00533142
    MOV dword ptr [ESP + 0x2fc],EAX     ; 00533147
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053314e
    ADD EAX,0x15aee4                    ; 00533151
    MOV dword ptr [ESP + 0x318],EAX     ; 00533156
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053315d
    ADD EAX,0x15aee8                    ; 00533160
    MOV dword ptr [ESP + 0x304],EAX     ; 00533165
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053316c
    ADD EAX,0x15aeec                    ; 0053316f
    MOV dword ptr [ESP + 0x300],EAX     ; 00533174
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053317b
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053317e
    ADD EAX,0x15aee0                    ; 00533181
    ADD EDI,0x15aedc                    ; 00533186
    MOV dword ptr [ESP + 0x30c],EAX     ; 0053318c
    IMUL EAX,ESI,0x44                   ; 00533193
        ;   Label: LAB_00533193
    MOV ECX,dword ptr [ESP + 0x30c]     ; 00533196
    PUSH ECX                            ; 0053319d
    MOV EDX,dword ptr [ESP + 0x2f0]     ; 0053319e
    PUSH EDI                            ; 005331a5
    ADD EAX,EDX                         ; 005331a6
    PUSH EAX                            ; 005331a8
    PUSH 0x5d020e                       ; 005331a9 | = "%f,%f,%f\n"
    PUSH EBX                            ; 005331ae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005331af
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 005331b4
    MOV EAX,dword ptr [ESP + 0x300]     ; 005331b7
    PUSH EAX                            ; 005331be
    MOV EDX,dword ptr [ESP + 0x308]     ; 005331bf
    PUSH EDX                            ; 005331c6
    MOV ECX,dword ptr [ESP + 0x320]     ; 005331c7
    PUSH ECX                            ; 005331ce
    PUSH 0x5d0218                       ; 005331cf | = "%f,%f,%f\n"
    PUSH EBX                            ; 005331d4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005331d5
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 005331da
    LEA EAX,[ESP + 0x2d8]               ; 005331dd
    PUSH EAX                            ; 005331e4
    LEA EAX,[ESP + 0x2e0]               ; 005331e5
    PUSH EAX                            ; 005331ec
    LEA EAX,[ESP + 0x2dc]               ; 005331ed
    PUSH EAX                            ; 005331f4
    PUSH 0x5d0222                       ; 005331f5 | = "%f,%f,%f\n"
    PUSH EBX                            ; 005331fa
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005331fb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 00533200
    LEA EAX,[ESP + 0x2d4]               ; 00533203
    PUSH EAX                            ; 0053320a
    MOV EAX,dword ptr [ESP + 0x300]     ; 0053320b
    PUSH EAX                            ; 00533212
    CALL core_dirmat.cpp_FUN_0045b550   ; 00533213
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00533218
    MOV EDX,dword ptr [ESP + 0x31c]     ; 0053321b
    PUSH EDX                            ; 00533222
    PUSH 0x5d022c                       ; 00533223 | DAT_005d022c
    PUSH EBX                            ; 00533228
    ADD EDI,0x44                        ; 00533229
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053322c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00533231
    INC ESI                             ; 00533234
    MOV ECX,dword ptr [ESP + 0x31c]     ; 00533235
    MOV EAX,dword ptr [ESP + 0x2fc]     ; 0053323c
    MOV EDX,dword ptr [ESP + 0x318]     ; 00533243
    ADD ECX,0x44                        ; 0053324a
    ADD EAX,0x44                        ; 0053324d
    ADD EDX,0x44                        ; 00533250
    MOV dword ptr [ESP + 0x31c],ECX     ; 00533253
    MOV dword ptr [ESP + 0x2fc],EAX     ; 0053325a
    MOV dword ptr [ESP + 0x318],EDX     ; 00533261
    MOV ECX,dword ptr [ESP + 0x304]     ; 00533268
    MOV EAX,dword ptr [ESP + 0x300]     ; 0053326f
    MOV EDX,dword ptr [ESP + 0x30c]     ; 00533276
    ADD EAX,0x44                        ; 0053327d
    ADD ECX,0x44                        ; 00533280
    MOV dword ptr [ESP + 0x300],EAX     ; 00533283
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053328a
    ADD EDX,0x44                        ; 0053328d
    MOV dword ptr [ESP + 0x304],ECX     ; 00533290
    MOV ECX,dword ptr [EAX + 0x15aed4]  ; 00533297
    MOV dword ptr [ESP + 0x30c],EDX     ; 0053329d
    CMP ESI,ECX                         ; 005332a4
    JL 0x00533193                       ; 005332a6
        ;   XREF to: 00533193 (CONDITIONAL_JUMP)  ; LAB_00533193
    LEA EAX,[EAX]                       ; 005332ac
    MOV EAX,dword ptr [EBP + 0x14]      ; 005332b0
        ;   Label: LAB_005332b0
    CMP dword ptr [EAX + 0x15acc0],0x3  ; 005332b3
    JL 0x00533a1f                       ; 005332ba
        ;   XREF to: 00533a1f (CONDITIONAL_JUMP)  ; LAB_00533a1f
    PUSH EBX                            ; 005332c0
    PUSH 0xff                           ; 005332c1
    LEA EAX,[ESP + 0x8]                 ; 005332c6
    PUSH EAX                            ; 005332ca
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 005332cb
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 005332d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005332d3
    ADD EAX,0x15f694                    ; 005332d6
    PUSH EAX                            ; 005332db
    PUSH 0x5d024d                       ; 005332dc | DAT_005d024d
    PUSH EBX                            ; 005332e1
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 005332e2
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 005332e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005332ea
        ;   Label: LAB_005332ea
    CMP dword ptr [EAX + 0x15acc0],0x18 ; 005332ed
    JL 0x00533b22                       ; 005332f4
        ;   XREF to: 00533b22 (CONDITIONAL_JUMP)  ; LAB_00533b22
    PUSH EBX                            ; 005332fa
    PUSH 0xff                           ; 005332fb
    LEA EAX,[ESP + 0x8]                 ; 00533300
    PUSH EAX                            ; 00533304
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00533305
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0053330a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053330d
    ADD EAX,0x15ac8c                    ; 00533310
    PUSH EAX                            ; 00533315
    PUSH 0x5d0275                       ; 00533316 | DAT_005d0275
    PUSH EBX                            ; 0053331b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0053331c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00533321
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533324
        ;   Label: LAB_00533324
    MOV EDX,dword ptr [EAX + 0x15acc0]  ; 00533327
    CMP EDX,0x4                         ; 0053332d
    JL 0x00533341                       ; 00533330
        ;   XREF to: 00533341 (CONDITIONAL_JUMP)  ; LAB_00533341
    CMP EDX,0x9                         ; 00533332
    JG 0x00533341                       ; 00533335
        ;   XREF to: 00533341 (CONDITIONAL_JUMP)  ; LAB_00533341
    PUSH EBX                            ; 00533337
    PUSH EAX                            ; 00533338
    CALL core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0 ; 00533339
        ;   XREF to: 005412b0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0053333e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533341
        ;   Label: LAB_00533341
    CMP dword ptr [EAX + 0x15acc0],0x5  ; 00533344
    JL 0x00533b31                       ; 0053334b
        ;   XREF to: 00533b31 (CONDITIONAL_JUMP)  ; LAB_00533b31
    PUSH EBX                            ; 00533351
    PUSH 0xff                           ; 00533352
    LEA EAX,[ESP + 0x8]                 ; 00533357
    PUSH EAX                            ; 0053335b
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0053335c
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00533361
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533364
    ADD EAX,0x15b428                    ; 00533367
    PUSH EAX                            ; 0053336c
    PUSH 0x5d0279                       ; 0053336d | DAT_005d0279
    PUSH EBX                            ; 00533372
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533373
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00533378
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053337b
    MOV EDX,dword ptr [EAX + 0x15b428]  ; 0053337e
    XOR ESI,ESI                         ; 00533384
    TEST EDX,EDX                        ; 00533386
    JLE 0x005334e0                      ; 00533388
        ;   XREF to: 005334e0 (CONDITIONAL_JUMP)  ; LAB_005334e0
    ADD EAX,0x15b42c                    ; 0053338e
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00533393
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053339a
    ADD EAX,0x15b444                    ; 0053339d
    MOV dword ptr [ESP + 0x310],EAX     ; 005333a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 005333a9
    ADD EAX,0x15b43c                    ; 005333ac
    MOV dword ptr [ESP + 0x308],EAX     ; 005333b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 005333b8
    ADD EAX,0x15b440                    ; 005333bb
    MOV dword ptr [ESP + 0x314],EAX     ; 005333c0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005333c7
    ADD EAX,0x15b430                    ; 005333ca
    MOV dword ptr [ESP + 0x2f4],EAX     ; 005333cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 005333d6
    MOV EDI,dword ptr [EBP + 0x14]      ; 005333d9
    ADD EAX,0x15b434                    ; 005333dc
    ADD EDI,0x15b438                    ; 005333e1
    MOV dword ptr [ESP + 0x2f8],EAX     ; 005333e7
    IMUL EAX,ESI,0x44                   ; 005333ee
        ;   Label: LAB_005333ee
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 005333f1
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 005333f8
    PUSH EDX                            ; 005333ff
    ADD EAX,ECX                         ; 00533400
    MOV ECX,dword ptr [ESP + 0x2f8]     ; 00533402
    PUSH ECX                            ; 00533409
    PUSH EAX                            ; 0053340a
    PUSH 0x5d027d                       ; 0053340b | = "%f,%f,%f\n"
    PUSH EBX                            ; 00533410
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533411
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 00533416
    MOV EAX,dword ptr [ESP + 0x314]     ; 00533419
    PUSH EAX                            ; 00533420
    MOV EDX,dword ptr [ESP + 0x30c]     ; 00533421
    PUSH EDX                            ; 00533428
    PUSH EDI                            ; 00533429
    PUSH 0x5d0287                       ; 0053342a | = "%f,%f,%f\n"
    PUSH EBX                            ; 0053342f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533430
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 00533435
    LEA EAX,[ESP + 0x2cc]               ; 00533438
    PUSH EAX                            ; 0053343f
    LEA EAX,[ESP + 0x2d4]               ; 00533440
    PUSH EAX                            ; 00533447
    LEA EAX,[ESP + 0x2d0]               ; 00533448
    PUSH EAX                            ; 0053344f
    PUSH 0x5d0291                       ; 00533450 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00533455
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00533456
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0053345b
    LEA EAX,[ESP + 0x2c8]               ; 0053345e
    PUSH EAX                            ; 00533465
    MOV ECX,dword ptr [ESP + 0x314]     ; 00533466
    PUSH ECX                            ; 0053346d
    INC ESI                             ; 0053346e
    CALL core_dirmat.cpp_FUN_0045b550   ; 0053346f
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00533474
    ADD EDI,0x44                        ; 00533477
    MOV EAX,dword ptr [ESP + 0x310]     ; 0053347a
    MOV EDX,dword ptr [ESP + 0x308]     ; 00533481
    MOV ECX,dword ptr [ESP + 0x314]     ; 00533488
    ADD EAX,0x44                        ; 0053348f
    ADD EDX,0x44                        ; 00533492
    ADD ECX,0x44                        ; 00533495
    MOV dword ptr [ESP + 0x310],EAX     ; 00533498
    MOV EAX,dword ptr [ESP + 0x2f4]     ; 0053349f
    MOV dword ptr [ESP + 0x308],EDX     ; 005334a6
    ADD EAX,0x44                        ; 005334ad
    MOV EDX,dword ptr [ESP + 0x2f8]     ; 005334b0
    MOV dword ptr [ESP + 0x2f4],EAX     ; 005334b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 005334be
    MOV dword ptr [ESP + 0x314],ECX     ; 005334c1
    ADD EDX,0x44                        ; 005334c8
    MOV ECX,dword ptr [EAX + 0x15b428]  ; 005334cb
    MOV dword ptr [ESP + 0x2f8],EDX     ; 005334d1
    CMP ESI,ECX                         ; 005334d8
    JL 0x005333ee                       ; 005334da
        ;   XREF to: 005333ee (CONDITIONAL_JUMP)  ; LAB_005333ee
    MOV ESI,dword ptr [EBP + 0x14]      ; 005334e0
        ;   Label: LAB_005334e0
    PUSH ESI                            ; 005334e3
    CALL core_setdir.cpp_FUN_005418d0   ; 005334e4
        ;   XREF to: 005418d0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_005418d0()
    ADD ESP,0x4                         ; 005334e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005334ec
        ;   Label: LAB_005334ec
    CMP dword ptr [EAX + 0x15acc0],0xe  ; 005334ef
    JNZ 0x0053351e                      ; 005334f6
        ;   XREF to: 0053351e (CONDITIONAL_JUMP)  ; LAB_0053351e
    PUSH EBX                            ; 005334f8
    PUSH 0xff                           ; 005334f9
    LEA EAX,[ESP + 0x8]                 ; 005334fe
    PUSH EAX                            ; 00533502
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00533503
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00533508
    PUSH EBX                            ; 0053350b
    PUSH 0xff                           ; 0053350c
    LEA EAX,[ESP + 0x8]                 ; 00533511
    PUSH EAX                            ; 00533515
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00533516
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0053351b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053351e
        ;   Label: LAB_0053351e
    CMP dword ptr [EAX + 0x15acc0],0x14 ; 00533521
    JL 0x00533570                       ; 00533528
        ;   XREF to: 00533570 (CONDITIONAL_JUMP)  ; LAB_00533570
    PUSH EBX                            ; 0053352a
    PUSH 0xff                           ; 0053352b
    LEA EAX,[ESP + 0x8]                 ; 00533530
    PUSH EAX                            ; 00533534
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00533535
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0053353a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053353d
    MOV ECX,dword ptr [EAX]             ; 00533540
    XOR ESI,ESI                         ; 00533542
    TEST ECX,ECX                        ; 00533544
    JLE 0x00533570                      ; 00533546
        ;   XREF to: 00533570 (CONDITIONAL_JUMP)  ; LAB_00533570
    LEA EDI,[EAX + 0x4]                 ; 00533548
    PUSH EBX                            ; 0053354b
        ;   Label: LAB_0053354b
    PUSH EDI                            ; 0053354c
    CALL core_setutil.cpp_FUN_00541f00  ; 0053354d
        ;   XREF to: 00541f00 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_FUN_00541f00(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00533552
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533555
    INC ESI                             ; 00533558
    MOV EDX,dword ptr [EAX]             ; 00533559
    ADD EDI,0x1a4                       ; 0053355b
    CMP ESI,EDX                         ; 00533561
    JL 0x0053354b                       ; 00533563
        ;   XREF to: 0053354b (CONDITIONAL_JUMP)  ; LAB_0053354b
    LEA EAX,[EAX]                       ; 00533565
    LEA EDX,[EDX]                       ; 0053356b
    MOV EBX,EBX                         ; 0053356e
    PUSH EBX                            ; 00533570
        ;   Label: LAB_00533570
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00533571
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00533576
    PUSH 0x0                            ; 00533579
    PUSH 0x5d029b                       ; 0053357b | = "Loading set geometry"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00533580
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 00533585
    PUSH EAX                            ; 00533588
    MOV ECX,dword ptr [0x006002ac]      ; 00533589 | DAT_006002ac
    PUSH ECX                            ; 0053358f
    CALL core_level.cpp_FUN_004e0000    ; 00533590
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 00533595
    LEA EAX,[ESP + 0x200]               ; 00533598
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053359f
    PUSH EAX                            ; 005335a2
    ADD EBX,0x14d0f0                    ; 005335a3
    PUSH EBX                            ; 005335a9
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005335aa
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005335af
    TEST EAX,EAX                        ; 005335b2
    JZ 0x00533b6a                       ; 005335b4
        ;   XREF to: 00533b6a (CONDITIONAL_JUMP)  ; LAB_00533b6a
    LEA ESI,[ESP + 0x200]               ; 005335ba
    MOV EDI,EBX                         ; 005335c1
    PUSH EDI                            ; 005335c3
    MOV AL,byte ptr [ESI]               ; 005335c4
        ;   Label: LAB_005335c4
    MOV byte ptr [EDI],AL               ; 005335c6
    CMP AL,0x0                          ; 005335c8
    JZ 0x005335dc                       ; 005335ca
        ;   XREF to: 005335dc (CONDITIONAL_JUMP)  ; LAB_005335dc
    MOV AL,byte ptr [ESI + 0x1]         ; 005335cc
    ADD ESI,0x2                         ; 005335cf
    MOV byte ptr [EDI + 0x1],AL         ; 005335d2
    ADD EDI,0x2                         ; 005335d5
    CMP AL,0x0                          ; 005335d8
    JNZ 0x005335c4                      ; 005335da
        ;   XREF to: 005335c4 (CONDITIONAL_JUMP)  ; LAB_005335c4
    POP EDI                             ; 005335dc
        ;   Label: LAB_005335dc
    PUSH 0x5d02b0                       ; 005335dd | DAT_005d02b0
    PUSH EBX                            ; 005335e2
    PUSH 0x5d02b3                       ; 005335e3 | DAT_005d02b3
    CALL engine_dosio.cpp_FUN_004659c0  ; 005335e8
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005335ed
    TEST EAX,EAX                        ; 005335f0
    JZ 0x00533b40                       ; 005335f2
        ;   XREF to: 00533b40 (CONDITIONAL_JUMP)  ; LAB_00533b40
    PUSH EAX                            ; 005335f8
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005335f9
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 005335fe
    PUSH EBX                            ; 00533601
    PUSH 0x203b37c                      ; 00533602 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00473b20   ; 00533607
        ;   XREF to: 00473b20 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473b20()
    ADD ESP,0x8                         ; 0053360c
    CALL core_path.cpp_resetAllPathMaps_FUN_0050cf60 ; 0053360f
        ;   XREF to: 0050cf60 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_0050cf60()
        ;   Label: LAB_0053360f
    PUSH 0x0                            ; 00533614
        ;   Label: LAB_00533614
    PUSH 0x5d02df                       ; 00533616 | = "Loading thumbs"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 0053361b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 00533620
    PUSH EAX                            ; 00533623
    MOV ESI,dword ptr [0x006002ac]      ; 00533624 | DAT_006002ac
    PUSH ESI                            ; 0053362a
    CALL core_level.cpp_FUN_004e0000    ; 0053362b
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004e0000()
    ADD ESP,0xc                         ; 00533630
    MOV ESI,dword ptr [EBP + 0x14]      ; 00533633
    LEA EDI,[ESP + 0x264]               ; 00533636
    ADD ESI,0x14d0f0                    ; 0053363d
    MOV DL,0x2e                         ; 00533643
    PUSH EDI                            ; 00533645
    MOV AL,byte ptr [ESI]               ; 00533646
        ;   Label: LAB_00533646
    MOV byte ptr [EDI],AL               ; 00533648
    CMP AL,0x0                          ; 0053364a
    JZ 0x0053365e                       ; 0053364c
        ;   XREF to: 0053365e (CONDITIONAL_JUMP)  ; LAB_0053365e
    MOV AL,byte ptr [ESI + 0x1]         ; 0053364e
    ADD ESI,0x2                         ; 00533651
    MOV byte ptr [EDI + 0x1],AL         ; 00533654
    ADD EDI,0x2                         ; 00533657
    CMP AL,0x0                          ; 0053365a
    JNZ 0x00533646                      ; 0053365c
        ;   XREF to: 00533646 (CONDITIONAL_JUMP)  ; LAB_00533646
    POP EDI                             ; 0053365e
        ;   Label: LAB_0053365e
    LEA ESI,[ESP + 0x264]               ; 0053365f
    MOV AL,byte ptr [ESI]               ; 00533666
        ;   Label: LAB_00533666
    CMP AL,DL                           ; 00533668
    JZ 0x0053367e                       ; 0053366a
        ;   XREF to: 0053367e (CONDITIONAL_JUMP)  ; LAB_0053367e
    CMP AL,0x0                          ; 0053366c
    JZ 0x0053367c                       ; 0053366e
        ;   XREF to: 0053367c (CONDITIONAL_JUMP)  ; LAB_0053367c
    INC ESI                             ; 00533670
    MOV AL,byte ptr [ESI]               ; 00533671
    CMP AL,DL                           ; 00533673
    JZ 0x0053367e                       ; 00533675
        ;   XREF to: 0053367e (CONDITIONAL_JUMP)  ; LAB_0053367e
    INC ESI                             ; 00533677
    CMP AL,0x0                          ; 00533678
    JNZ 0x00533666                      ; 0053367a
        ;   XREF to: 00533666 (CONDITIONAL_JUMP)  ; LAB_00533666
    SUB ESI,ESI                         ; 0053367c
        ;   Label: LAB_0053367c
    MOV EDI,ESI                         ; 0053367e
        ;   Label: LAB_0053367e
    TEST ESI,ESI                        ; 00533680
    JNZ 0x005336a7                      ; 00533682
        ;   XREF to: 005336a7 (CONDITIONAL_JUMP)  ; LAB_005336a7
    LEA ESI,[ESP + 0x264]               ; 00533684
    XOR DL,DL                           ; 0053368b
    MOV AL,byte ptr [ESI]               ; 0053368d
        ;   Label: LAB_0053368d
    CMP AL,DL                           ; 0053368f
    JZ 0x005336a5                       ; 00533691
        ;   XREF to: 005336a5 (CONDITIONAL_JUMP)  ; LAB_005336a5
    CMP AL,0x0                          ; 00533693
    JZ 0x005336a3                       ; 00533695
        ;   XREF to: 005336a3 (CONDITIONAL_JUMP)  ; LAB_005336a3
    INC ESI                             ; 00533697
    MOV AL,byte ptr [ESI]               ; 00533698
    CMP AL,DL                           ; 0053369a
    JZ 0x005336a5                       ; 0053369c
        ;   XREF to: 005336a5 (CONDITIONAL_JUMP)  ; LAB_005336a5
    INC ESI                             ; 0053369e
    CMP AL,0x0                          ; 0053369f
    JNZ 0x0053368d                      ; 005336a1
        ;   XREF to: 0053368d (CONDITIONAL_JUMP)  ; LAB_0053368d
    SUB ESI,ESI                         ; 005336a3
        ;   Label: LAB_005336a3
    MOV EDI,ESI                         ; 005336a5
        ;   Label: LAB_005336a5
    MOV ESI,0x5d02ee                    ; 005336a7 | DAT_005d02ee
        ;   Label: LAB_005336a7
    PUSH EDI                            ; 005336ac
    MOV AL,byte ptr [ESI]               ; 005336ad | DAT_005d02ee | DAT_005d02f0
        ;   Label: LAB_005336ad
    MOV byte ptr [EDI],AL               ; 005336af
    CMP AL,0x0                          ; 005336b1
    JZ 0x005336c5                       ; 005336b3
        ;   XREF to: 005336c5 (CONDITIONAL_JUMP)  ; LAB_005336c5
    MOV AL,byte ptr [ESI + 0x1]         ; 005336b5 | DAT_005d02ef | DAT_005d02f1
    ADD ESI,0x2                         ; 005336b8
    MOV byte ptr [EDI + 0x1],AL         ; 005336bb
    ADD EDI,0x2                         ; 005336be
    CMP AL,0x0                          ; 005336c1
    JNZ 0x005336ad                      ; 005336c3
        ;   XREF to: 005336ad (CONDITIONAL_JUMP)  ; LAB_005336ad
    POP EDI                             ; 005336c5
        ;   Label: LAB_005336c5
    LEA EAX,[ESP + 0x264]               ; 005336c6
    PUSH EAX                            ; 005336cd
    MOV EDI,dword ptr [EBP + 0x14]      ; 005336ce
    PUSH EDI                            ; 005336d1
    CALL core_setdir.cpp_FUN_00540be0   ; 005336d2
        ;   XREF to: 00540be0 (UNCONDITIONAL_CALL)  ; undefined core_setdir.cpp_FUN_00540be0()
    MOV EDX,dword ptr [EDI + 0x15aca4]  ; 005336d7
    ADD ESP,0x8                         ; 005336dd
    TEST EDX,EDX                        ; 005336e0
    JZ 0x005336f8                       ; 005336e2
        ;   XREF to: 005336f8 (CONDITIONAL_JUMP)  ; LAB_005336f8
    LEA EAX,[EDI + 0x15aca8]            ; 005336e4
    PUSH EAX                            ; 005336ea
    PUSH 0x203b70c                      ; 005336eb
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550 ; 005336f0
        ;   XREF to: 00460550 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00460550(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005336f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005336f8
        ;   Label: LAB_005336f8
    MOV ECX,dword ptr [EAX]             ; 005336fb
    XOR ESI,ESI                         ; 005336fd
    TEST ECX,ECX                        ; 005336ff
    JLE 0x00533740                      ; 00533701
        ;   XREF to: 00533740 (CONDITIONAL_JUMP)  ; LAB_00533740
    MOV EBX,EAX                         ; 00533703
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533705
    FLD float ptr [EAX + 0x14d150]      ; 00533708
        ;   Label: LAB_00533708
    MOV dword ptr [EBX + 0x150],0x0     ; 0053370e
    MOV dword ptr [EBX + 0x1a4],0x1     ; 00533718
    INC ESI                             ; 00533722
    FSTP float ptr [EBX + 0x14c]        ; 00533723
    MOV EDI,dword ptr [EAX]             ; 00533729
    ADD EBX,0x1a4                       ; 0053372b
    CMP ESI,EDI                         ; 00533731
    JL 0x00533708                       ; 00533733
        ;   XREF to: 00533708 (CONDITIONAL_JUMP)  ; LAB_00533708
    LEA EAX,[EAX]                       ; 00533735
    LEA EDX,[EDX]                       ; 0053373b
    MOV EBX,EBX                         ; 0053373e
    MOV dword ptr [0x0207baa8],0x1      ; 00533740 | DAT_0207baa8
        ;   Label: LAB_00533740
    MOV ESP,EBP                         ; 0053374a
    POP EBP                             ; 0053374c
    POP EDI                             ; 0053374d
    POP ESI                             ; 0053374e
    POP EBX                             ; 0053374f
    RET                                 ; 00533750
    PUSH ESI                            ; 00533751
        ;   Label: LAB_00533751
    MOV EDI,0x5d0137                    ; 00533752 | = "..\\core\\set.cpp"
    MOV EAX,0x16a                       ; 00533757
    PUSH 0x5d0147                       ; 0053375c | = "CDemonSet::Unable to open %s"
    MOV dword ptr [0x01d71de0],EDI      ; 00533761 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00533767 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0053376c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00533771
    JMP 0x00532bda                      ; 00533774
        ;   XREF to: 00532bda (UNCONDITIONAL_JUMP)  ; LAB_00532bda
    MOV dword ptr [EAX + 0x14d154],0xbf800000 ; 00533779
        ;   Label: LAB_00533779
    MOV dword ptr [EAX + 0x14d158],0xbf800000 ; 00533783
    MOV dword ptr [EAX + 0x14d15c],0xbf800000 ; 0053378d
    FLD float ptr [ESI + 0x4]           ; 00533797
    FMUL ST0                            ; 0053379a
    FLD float ptr [ESI]                 ; 0053379c
    FMUL ST0                            ; 0053379e
    FADDP                               ; 005337a0
    FLD float ptr [ESI + 0x8]           ; 005337a2
    FMUL ST0                            ; 005337a5
    FADDP                               ; 005337a7
    FSQRT                               ; 005337a9
    FLDZ                                ; 005337ab
    FXCH                                ; 005337ad
    FSTP float ptr [ESP + 0x2e8]        ; 005337af
    FCOMP float ptr [ESP + 0x2e8]       ; 005337b6
    FNSTSW AX                           ; 005337bd
    SAHF                                ; 005337bf
    JNC 0x005337f9                      ; 005337c0
        ;   XREF to: 005337f9 (CONDITIONAL_JUMP)  ; LAB_005337f9
    FLD1                                ; 005337c2
    FLD float ptr [ESI]                 ; 005337c4
    FXCH                                ; 005337c6
    FDIV float ptr [ESP + 0x2e8]        ; 005337c8
    FXCH                                ; 005337cf
    FMUL ST1                            ; 005337d1
    FLD float ptr [ESI + 0x4]           ; 005337d3
    FMUL ST2                            ; 005337d6
    FLD float ptr [ESI + 0x8]           ; 005337d8
    FMULP ST3                           ; 005337db
    FXCH                                ; 005337dd
    FSTP float ptr [ESI]                ; 005337df
    FSTP float ptr [ESI + 0x4]          ; 005337e1
    FSTP float ptr [ESI + 0x8]          ; 005337e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005337e7
    MOV dword ptr [EAX + 0x14d160],0x0  ; 005337ea
    JMP 0x00532c88                      ; 005337f4
        ;   XREF to: 00532c88 (UNCONDITIONAL_JUMP)  ; LAB_00532c88
    MOV dword ptr [ESI + 0x8],0x0       ; 005337f9
        ;   Label: LAB_005337f9
    MOV EAX,dword ptr [ESI + 0x8]       ; 00533800
    MOV dword ptr [ESI + 0x4],EAX       ; 00533803
    MOV EAX,dword ptr [ESI + 0x4]       ; 00533806
    MOV dword ptr [ESI],EAX             ; 00533809
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053380b
    MOV dword ptr [EAX + 0x14d160],0x0  ; 0053380e
    JMP 0x00532c88                      ; 00533818
        ;   XREF to: 00532c88 (UNCONDITIONAL_JUMP)  ; LAB_00532c88
    PUSH EDI                            ; 0053381d
        ;   Label: LAB_0053381d
    PUSH EBX                            ; 0053381e
    PUSH ESI                            ; 0053381f
    CALL core_dcamera.cpp_loadCameraFog_FUN_00450c00 ; 00533820
        ;   XREF to: 00450c00 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_loadCameraFog_FUN_00450c00()
    ADD ESP,0xc                         ; 00533825
    JMP 0x00532d96                      ; 00533828
        ;   XREF to: 00532d96 (UNCONDITIONAL_JUMP)  ; LAB_00532d96
    MOV EDI,0x2000                      ; 0053382d
        ;   Label: LAB_0053382d
    MOV ESI,0x3e800000                  ; 00533832
    XOR EAX,EAX                         ; 00533837
    MOV dword ptr [0x00606b28],EDI      ; 00533839 | DAT_00606b28
    MOV [0x02cfd960],EAX                ; 0053383f | DAT_02cfd960
    MOV [0x02cfd964],EAX                ; 00533844 | DAT_02cfd964
    MOV dword ptr [0x00606b24],ESI      ; 00533849 | DAT_00606b24
    JMP 0x00532e09                      ; 0053384f
        ;   XREF to: 00532e09 (UNCONDITIONAL_JUMP)  ; LAB_00532e09
    PUSH 0x4                            ; 00533854
        ;   Label: LAB_00533854
    PUSH 0x5d01c8                       ; 00533856 | DAT_005d01c8
    LEA EAX,[ESP + 0x208]               ; 0053385b
    PUSH EAX                            ; 00533862
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533863
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533868
    TEST EAX,EAX                        ; 0053386b
    JNZ 0x0053387f                      ; 0053386d
        ;   XREF to: 0053387f (CONDITIONAL_JUMP)  ; LAB_0053387f
    MOV EAX,[0x00606b20]                ; 0053386f | g_CWaterPtr
    MOV dword ptr [EAX],0x1             ; 00533874 | g_CWaterInstance
    JMP 0x00532e74                      ; 0053387a
        ;   XREF to: 00532e74 (UNCONDITIONAL_JUMP)  ; LAB_00532e74
    MOV EAX,[0x00606b20]                ; 0053387f | g_CWaterPtr
        ;   Label: LAB_0053387f
    MOV dword ptr [EAX],0x0             ; 00533884 | g_CWaterInstance
    JMP 0x00532e74                      ; 0053388a
        ;   XREF to: 00532e74 (UNCONDITIONAL_JUMP)  ; LAB_00532e74
    MOV dword ptr [EAX + 0x161640],0x1  ; 0053388f
        ;   Label: LAB_0053388f
    JMP 0x00532eae                      ; 00533899
        ;   XREF to: 00532eae (UNCONDITIONAL_JUMP)  ; LAB_00532eae
    MOV ESI,0x5d01d8                    ; 0053389e | = "NITESKY.RAW"
        ;   Label: LAB_0053389e
    PUSH EDI                            ; 005338a3
    MOV AL,byte ptr [ESI]               ; 005338a4 | = "NITESKY.RAW" | s_NITESKY_RAW_005d01d8+2
        ;   Label: LAB_005338a4
    MOV byte ptr [EDI],AL               ; 005338a6
    CMP AL,0x0                          ; 005338a8
    JZ 0x005338bc                       ; 005338aa
        ;   XREF to: 005338bc (CONDITIONAL_JUMP)  ; LAB_005338bc
    MOV AL,byte ptr [ESI + 0x1]         ; 005338ac | s_NITESKY_RAW_005d01d8+1 | s_NITESKY_RAW_005d01d8+3
    ADD ESI,0x2                         ; 005338af
    MOV byte ptr [EDI + 0x1],AL         ; 005338b2
    ADD EDI,0x2                         ; 005338b5
    CMP AL,0x0                          ; 005338b8
    JNZ 0x005338a4                      ; 005338ba
        ;   XREF to: 005338a4 (CONDITIONAL_JUMP)  ; LAB_005338a4
    POP EDI                             ; 005338bc
        ;   Label: LAB_005338bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005338bd
    MOV dword ptr [EAX + 0x161664],0x4000 ; 005338c0
    JMP 0x00532ede                      ; 005338ca
        ;   XREF to: 00532ede (UNCONDITIONAL_JUMP)  ; LAB_00532ede
    MOV ESI,0x5d01eb                    ; 005338cf | DAT_005d01eb
        ;   Label: LAB_005338cf
    MOV dword ptr [EAX + 0x15ae60],0x0  ; 005338d4
    PUSH EDI                            ; 005338de
    MOV AL,byte ptr [ESI]               ; 005338df | DAT_005d01eb | DAT_005d01ed
        ;   Label: LAB_005338df
    MOV byte ptr [EDI],AL               ; 005338e1
    CMP AL,0x0                          ; 005338e3
    JZ 0x005338f7                       ; 005338e5
        ;   XREF to: 005338f7 (CONDITIONAL_JUMP)  ; LAB_005338f7
    MOV AL,byte ptr [ESI + 0x1]         ; 005338e7 | DAT_005d01ec | DAT_005d01ee
    ADD ESI,0x2                         ; 005338ea
    MOV byte ptr [EDI + 0x1],AL         ; 005338ed
    ADD EDI,0x2                         ; 005338f0
    CMP AL,0x0                          ; 005338f3
    JNZ 0x005338df                      ; 005338f5
        ;   XREF to: 005338df (CONDITIONAL_JUMP)  ; LAB_005338df
    POP EDI                             ; 005338f7
        ;   Label: LAB_005338f7
    JMP 0x00532f24                      ; 005338f8
        ;   XREF to: 00532f24 (UNCONDITIONAL_JUMP)  ; LAB_00532f24
    MOV dword ptr [EAX + 0x161680],0x0  ; 005338fd
        ;   Label: LAB_005338fd
    JMP 0x00532f5e                      ; 00533907
        ;   XREF to: 00532f5e (UNCONDITIONAL_JUMP)  ; LAB_00532f5e
    MOV dword ptr [EAX + 0x15acbc],0x0  ; 0053390c
        ;   Label: LAB_0053390c
    JMP 0x00532f98                      ; 00533916
        ;   XREF to: 00532f98 (UNCONDITIONAL_JUMP)  ; LAB_00532f98
    MOV EAX,[0x00606aa0]                ; 0053391b | DAT_00606aa0
        ;   Label: LAB_0053391b
    PUSH EAX                            ; 00533920
    CALL core_terrain.cpp_CTerrain_free_FUN_005723b0 ; 00533921
        ;   XREF to: 005723b0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_005723b0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00533926
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533929
    MOV dword ptr [EAX + 0x15acb8],0x0  ; 0053392c
    JMP 0x00532fef                      ; 00533936
        ;   XREF to: 00532fef (UNCONDITIONAL_JUMP)  ; LAB_00532fef
    PUSH 0x5                            ; 0053393b
        ;   Label: LAB_0053393b
    PUSH 0x5d0230                       ; 0053393d | = "mauso"
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 00533942
    LEA EAX,[ESP + 0x208]               ; 0053394c
    PUSH EAX                            ; 00533953
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533954
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533959
    TEST EAX,EAX                        ; 0053395c
    JNZ 0x0053396d                      ; 0053395e
        ;   XREF to: 0053396d (CONDITIONAL_JUMP)  ; LAB_0053396d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533960
    MOV dword ptr [EAX + 0x15aed0],0x2  ; 00533963
    PUSH 0x4                            ; 0053396d
        ;   Label: LAB_0053396d
    PUSH 0x5d0236                       ; 0053396f | DAT_005d0236
    LEA EAX,[ESP + 0x208]               ; 00533974
    PUSH EAX                            ; 0053397b
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0053397c
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533981
    TEST EAX,EAX                        ; 00533984
    JNZ 0x00533995                      ; 00533986
        ;   XREF to: 00533995 (CONDITIONAL_JUMP)  ; LAB_00533995
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533988
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 0053398b
    PUSH 0x5                            ; 00533995
        ;   Label: LAB_00533995
    PUSH 0x5d023b                       ; 00533997 | = "smill"
    LEA EAX,[ESP + 0x208]               ; 0053399c
    PUSH EAX                            ; 005339a3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005339a4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005339a9
    TEST EAX,EAX                        ; 005339ac
    JNZ 0x005339bd                      ; 005339ae
        ;   XREF to: 005339bd (CONDITIONAL_JUMP)  ; LAB_005339bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005339b0
    MOV dword ptr [EAX + 0x15aed0],0x3  ; 005339b3
    PUSH 0x6                            ; 005339bd
        ;   Label: LAB_005339bd
    PUSH 0x5d0241                       ; 005339bf | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 005339c4
    PUSH EAX                            ; 005339cb
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005339cc
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005339d1
    TEST EAX,EAX                        ; 005339d4
    JNZ 0x005339e5                      ; 005339d6
        ;   XREF to: 005339e5 (CONDITIONAL_JUMP)  ; LAB_005339e5
    MOV EAX,dword ptr [EBP + 0x14]      ; 005339d8
    MOV dword ptr [EAX + 0x15aed0],0x0  ; 005339db
    PUSH 0x4                            ; 005339e5
        ;   Label: LAB_005339e5
    PUSH 0x5d0248                       ; 005339e7 | DAT_005d0248
    LEA EAX,[ESP + 0x208]               ; 005339ec
    PUSH EAX                            ; 005339f3
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005339f4
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005339f9
    TEST EAX,EAX                        ; 005339fc
    JNZ 0x00533a0d                      ; 005339fe
        ;   XREF to: 00533a0d (CONDITIONAL_JUMP)  ; LAB_00533a0d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533a00
    MOV dword ptr [EAX + 0x15aed0],0x3  ; 00533a03
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533a0d
        ;   Label: LAB_00533a0d
    MOV dword ptr [EAX + 0x15aed4],0x0  ; 00533a10
    JMP 0x005332b0                      ; 00533a1a
        ;   XREF to: 005332b0 (UNCONDITIONAL_JUMP)  ; LAB_005332b0
    PUSH 0x5                            ; 00533a1f
        ;   Label: LAB_00533a1f
    PUSH 0x5d0251                       ; 00533a21 | = "mauso"
    MOV dword ptr [EAX + 0x15f694],0x2  ; 00533a26
    LEA EAX,[ESP + 0x208]               ; 00533a30
    PUSH EAX                            ; 00533a37
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533a38
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533a3d
    TEST EAX,EAX                        ; 00533a40
    JNZ 0x00533a51                      ; 00533a42
        ;   XREF to: 00533a51 (CONDITIONAL_JUMP)  ; LAB_00533a51
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533a44
    MOV dword ptr [EAX + 0x15f694],0x8  ; 00533a47
    PUSH 0x4                            ; 00533a51
        ;   Label: LAB_00533a51
    PUSH 0x5d0257                       ; 00533a53 | DAT_005d0257
    LEA EAX,[ESP + 0x208]               ; 00533a58
    PUSH EAX                            ; 00533a5f
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533a60
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533a65
    TEST EAX,EAX                        ; 00533a68
    JNZ 0x00533a79                      ; 00533a6a
        ;   XREF to: 00533a79 (CONDITIONAL_JUMP)  ; LAB_00533a79
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533a6c
    MOV dword ptr [EAX + 0x15f694],0x3  ; 00533a6f
    PUSH 0x5                            ; 00533a79
        ;   Label: LAB_00533a79
    PUSH 0x5d025c                       ; 00533a7b | = "smill"
    LEA EAX,[ESP + 0x208]               ; 00533a80
    PUSH EAX                            ; 00533a87
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533a88
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533a8d
    TEST EAX,EAX                        ; 00533a90
    JNZ 0x00533aa1                      ; 00533a92
        ;   XREF to: 00533aa1 (CONDITIONAL_JUMP)  ; LAB_00533aa1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533a94
    MOV dword ptr [EAX + 0x15f694],0x2  ; 00533a97
    PUSH 0x6                            ; 00533aa1
        ;   Label: LAB_00533aa1
    PUSH 0x5d0262                       ; 00533aa3 | = "pier59"
    LEA EAX,[ESP + 0x208]               ; 00533aa8
    PUSH EAX                            ; 00533aaf
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533ab0
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533ab5
    TEST EAX,EAX                        ; 00533ab8
    JNZ 0x00533ac9                      ; 00533aba
        ;   XREF to: 00533ac9 (CONDITIONAL_JUMP)  ; LAB_00533ac9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533abc
    MOV dword ptr [EAX + 0x15f694],0x7  ; 00533abf
    PUSH 0x6                            ; 00533ac9
        ;   Label: LAB_00533ac9
    PUSH 0x5d0269                       ; 00533acb | = "castle"
    LEA EAX,[ESP + 0x208]               ; 00533ad0
    PUSH EAX                            ; 00533ad7
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533ad8
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533add
    TEST EAX,EAX                        ; 00533ae0
    JNZ 0x00533af1                      ; 00533ae2
        ;   XREF to: 00533af1 (CONDITIONAL_JUMP)  ; LAB_00533af1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533ae4
    MOV dword ptr [EAX + 0x15f694],0x2  ; 00533ae7
    PUSH 0x4                            ; 00533af1
        ;   Label: LAB_00533af1
    PUSH 0x5d0270                       ; 00533af3 | DAT_005d0270
    LEA EAX,[ESP + 0x208]               ; 00533af8
    PUSH EAX                            ; 00533aff
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 00533b00
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00533b05
    TEST EAX,EAX                        ; 00533b08
    JNZ 0x005332ea                      ; 00533b0a
        ;   XREF to: 005332ea (CONDITIONAL_JUMP)  ; LAB_005332ea
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533b10
    MOV dword ptr [EAX + 0x15f694],0x8  ; 00533b13
    JMP 0x005332ea                      ; 00533b1d
        ;   XREF to: 005332ea (UNCONDITIONAL_JUMP)  ; LAB_005332ea
    MOV dword ptr [EAX + 0x15ac8c],0x0  ; 00533b22
        ;   Label: LAB_00533b22
    JMP 0x00533324                      ; 00533b2c
        ;   XREF to: 00533324 (UNCONDITIONAL_JUMP)  ; LAB_00533324
    MOV dword ptr [EAX + 0x15b428],0x0  ; 00533b31
        ;   Label: LAB_00533b31
    JMP 0x005334ec                      ; 00533b3b
        ;   XREF to: 005334ec (UNCONDITIONAL_JUMP)  ; LAB_005334ec
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 00533b40
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
        ;   Label: LAB_00533b40
    PUSH 0x0                            ; 00533b45
    PUSH 0x0                            ; 00533b47
    PUSH 0x5d02b8                       ; 00533b49 | = "Warning!  No .GEO file.  Press any key"
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00533b4e
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00533b53
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 00533b56
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00533b5b
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00580790 ; 00533b60
        ;   XREF to: 00580790 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00580790()
    JMP 0x0053360f                      ; 00533b65
        ;   XREF to: 0053360f (UNCONDITIONAL_JUMP)  ; LAB_0053360f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00533b6a
        ;   Label: LAB_00533b6a
    PUSH EBX                            ; 00533b6d
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40 ; 00533b6e
        ;   XREF to: 0053ef40 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00533b73
    JMP 0x00533614                      ; 00533b76
        ;   XREF to: 00533614 (UNCONDITIONAL_JUMP)  ; LAB_00533614

