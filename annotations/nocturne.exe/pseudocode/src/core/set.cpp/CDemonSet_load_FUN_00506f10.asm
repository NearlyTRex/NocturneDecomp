; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_load_FUN_00506f10(CDemonSet *this_ptr,char *filename)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; Local Variables:
; undefined        Stack[-0x228]:1  local_228
; undefined        Stack[-0x128]:1  local_128
; undefined1       Stack[-0x127]:1  local_127
; undefined        Stack[-0xc4]:1  local_c4
; undefined1       Stack[-0xc3]:1  local_c3
; undefined1       Stack[-0xc1]:1  local_c1
; undefined1       Stack[-0xc0]:1  local_c0
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x48]:1  local_48
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
;   core_mission.cpp_CDemonMission_loadSet_FUN_004d9020 at 004d9048
;
; Referenced Globals:
;   TerminatedCString s_Loading_set_005900f8
;   TerminatedCString s_rt_00590104
;   TerminatedCString s_models_00590107
;   TerminatedCString s_core_set_cpp_0059010e
;   TerminatedCString s_CDemonSet_Unable_to_open_0059011e
;   TerminatedCString s_d_0059013b
;   TerminatedCString s_f_0059013f
;   TerminatedCString s_s_00590143
;   TerminatedCString s_s_00590147
;   TerminatedCString s_f_0059014b
;   TerminatedCString s_d_d_d_d_0059014f
;   TerminatedCString s_f_f_f_0059015c
;   TerminatedCString s_f_f_f_f_00590166
;   TerminatedCString s_f_f_00590173
;   TerminatedCString s_d_s_0059017a
;   ... and 56 more
;
; Called Functions:
;   core_dcamera.cpp_loadCameraFog_FUN_00447d10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650
;   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890
;   core_level.cpp_CLevelLoader_update_FUN_004c59e0
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_path.cpp_resetAllPathMaps_FUN_004f1e90
;   core_set.cpp_CDemonSet_clear_FUN_00506ec0
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
;   core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610
;   core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0
;   core_setutil.cpp_C3DSCamera_load_FUN_005144e0
;   core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
;   core_setutil.cpp_C3DSLight_load_FUN_00514a70
;   ... and 14 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506f10
        ;   Label: core_set.cpp_CDemonSet_load_FUN_00506f10
    PUSH ESI                            ; 00506f11
    PUSH EDI                            ; 00506f12
    PUSH EBP                            ; 00506f13
    SUB ESP,0x218                       ; 00506f14
    MOV EBP,dword ptr [ESP + 0x22c]     ; 00506f1a
    MOV ESI,dword ptr [ESP + 0x230]     ; 00506f21
    PUSH 0x0                            ; 00506f28
    PUSH 0x5900f8                       ; 00506f2a | = "Loading set"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00506f2f
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 00506f34
    PUSH EAX                            ; 00506f37
    MOV EDX,dword ptr [0x005baca0]      ; 00506f38 | g_CLevelLoader_PTR_005baca0
    PUSH EDX                            ; 00506f3e
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 00506f3f
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00506f44
    PUSH EBP                            ; 00506f47
    CALL core_set.cpp_CDemonSet_clear_FUN_00506ec0 ; 00506f48
        ;   XREF to: 00506ec0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_clear_FUN_00506ec0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00506f4d
    PUSH 0x590104                       ; 00506f50 | = "rt"
    PUSH ESI                            ; 00506f55
    PUSH 0x590107                       ; 00506f56 | = "models"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00506f5b
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00506f60
    MOV EBX,EAX                         ; 00506f63
    TEST EAX,EAX                        ; 00506f65
    JZ 0x0050795b                       ; 00506f67
        ;   XREF to: 0050795b (CONDITIONAL_JUMP)  ; LAB_0050795b
    LEA EAX,[EBP + 0x15a8c4]            ; 00506f6d
        ;   Label: LAB_00506f6d
    PUSH EAX                            ; 00506f73
    PUSH 0x59013b                       ; 00506f74 | = "%d\n"
    PUSH EBX                            ; 00506f79
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00506f7a
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00506f7f
    LEA EAX,[EBP + 0x15aaac]            ; 00506f82
    PUSH EAX                            ; 00506f88
    PUSH 0x59013f                       ; 00506f89 | = "%f\n"
    PUSH EBX                            ; 00506f8e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00506f8f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00506f94
    MOV EAX,ESP                         ; 00506f97
    PUSH EAX                            ; 00506f99
    PUSH 0x590143                       ; 00506f9a | = "%s\n"
    PUSH EBX                            ; 00506f9f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00506fa0
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00506fa5
    LEA EAX,[ESP + 0x100]               ; 00506fa8
    PUSH EAX                            ; 00506faf
    PUSH 0x590147                       ; 00506fb0 | = "%s\n"
    PUSH EBX                            ; 00506fb5
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00506fb6
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00506fbb
    LEA EAX,[EBP + 0x14cd68]            ; 00506fbe
    PUSH EAX                            ; 00506fc4
    PUSH 0x59014b                       ; 00506fc5 | = "%f\n"
    PUSH EBX                            ; 00506fca
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00506fcb
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EAX,dword ptr [EBP + 0x15a8c4]  ; 00506fd0
    ADD ESP,0xc                         ; 00506fd6
    TEST EAX,EAX                        ; 00506fd9
    JNZ 0x00507016                      ; 00506fdb
        ;   XREF to: 00507016 (CONDITIONAL_JUMP)  ; LAB_00507016
    PUSH EBX                            ; 00506fdd
    PUSH 0xff                           ; 00506fde
    LEA EAX,[ESP + 0x8]                 ; 00506fe3
    PUSH EAX                            ; 00506fe7
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00506fe8
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00506fed
    PUSH EBX                            ; 00506ff0
    PUSH 0xff                           ; 00506ff1
    LEA EAX,[ESP + 0x8]                 ; 00506ff6
    PUSH EAX                            ; 00506ffa
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00506ffb
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507000
    PUSH EBX                            ; 00507003
    PUSH 0xff                           ; 00507004
    LEA EAX,[ESP + 0x8]                 ; 00507009
    PUSH EAX                            ; 0050700d
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050700e
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507013
    MOV EDX,dword ptr [EBP + 0x15a8c4]  ; 00507016
        ;   Label: LAB_00507016
    LEA ESI,[EBP + 0x15a848]            ; 0050701c
    CMP EDX,0x11                        ; 00507022
    JGE 0x00507984                      ; 00507025
        ;   XREF to: 00507984 (CONDITIONAL_JUMP)  ; LAB_00507984
    PUSH EBX                            ; 0050702b
    PUSH 0xff                           ; 0050702c
    LEA EAX,[ESP + 0x8]                 ; 00507031
    PUSH EAX                            ; 00507035
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507036
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050703b
    LEA EAX,[EBP + 0x15a850]            ; 0050703e
    PUSH EAX                            ; 00507044
    LEA EAX,[EBP + 0x15a84c]            ; 00507045
    PUSH EAX                            ; 0050704b
    PUSH ESI                            ; 0050704c
    LEA EAX,[ESP + 0x1ec]               ; 0050704d
    PUSH EAX                            ; 00507054
    PUSH 0x59014f                       ; 00507055 | = "%d,%d,%d,%d\n"
    PUSH EBX                            ; 0050705a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050705b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x18                        ; 00507060
    PUSH EBX                            ; 00507063
    PUSH 0xff                           ; 00507064
    LEA EAX,[ESP + 0x8]                 ; 00507069
    PUSH EAX                            ; 0050706d
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050706e
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507073
    LEA EAX,[EBP + 0x15a85c]            ; 00507076
    PUSH EAX                            ; 0050707c
    LEA EAX,[EBP + 0x15a858]            ; 0050707d
    PUSH EAX                            ; 00507083
    LEA EAX,[EBP + 0x15a854]            ; 00507084
    PUSH EAX                            ; 0050708a
    PUSH 0x59015c                       ; 0050708b | = "%f,%f,%f\n"
    PUSH EBX                            ; 00507090
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507091
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00507096
    LEA EAX,[ESP + 0x1e0]               ; 00507099
    PUSH EAX                            ; 005070a0
    PUSH EAX                            ; 005070a1
    LEA EAX,[EBP + 0x15a864]            ; 005070a2
    PUSH EAX                            ; 005070a8
    LEA EAX,[EBP + 0x15a860]            ; 005070a9
    PUSH EAX                            ; 005070af
    PUSH 0x590166                       ; 005070b0 | = "%f,%f,%f,%f\n"
    PUSH EBX                            ; 005070b5
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005070b6
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x18                        ; 005070bb
    MOV dword ptr [EBP + 0x15a868],0x42480000 ; 005070be
    PUSH EBX                            ; 005070c8
        ;   Label: LAB_005070c8
    PUSH 0xff                           ; 005070c9
    LEA EAX,[ESP + 0x8]                 ; 005070ce
    PUSH EAX                            ; 005070d2
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005070d3
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EAX,[0x005c11ec]                ; 005070d8 | DAT_005c11ec
    ADD ESP,0xc                         ; 005070dd
    LEA ESI,[EAX + 0x8]                 ; 005070e0
    PUSH ESI                            ; 005070e3
    ADD EAX,0x4                         ; 005070e4
    PUSH EAX                            ; 005070e7
    PUSH 0x590173                       ; 005070e8 | = "%f,%f\n"
    PUSH EBX                            ; 005070ed
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005070ee
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005070f3
    PUSH EBX                            ; 005070f6
    PUSH 0xff                           ; 005070f7
    LEA EAX,[ESP + 0x8]                 ; 005070fc
    PUSH EAX                            ; 00507100
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507101
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507106
    LEA EAX,[EBP + 0x15a8b0]            ; 00507109
    PUSH EAX                            ; 0050710f
    LEA EAX,[EBP + 0x15a8ac]            ; 00507110
    PUSH EAX                            ; 00507116
    PUSH 0x59017a                       ; 00507117 | = "%d,%s\n"
    PUSH EBX                            ; 0050711c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050711d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ESI,dword ptr [EBP + 0x15a8c4]  ; 00507122
    ADD ESP,0x10                        ; 00507128
    CMP ESI,0x5                         ; 0050712b
    JL 0x00507994                       ; 0050712e
        ;   XREF to: 00507994 (CONDITIONAL_JUMP)  ; LAB_00507994
    PUSH EBX                            ; 00507134
    PUSH 0xff                           ; 00507135
    LEA EAX,[ESP + 0x8]                 ; 0050713a
    PUSH EAX                            ; 0050713e
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050713f
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507144
    MOV EDI,dword ptr [0x005c11ec]      ; 00507147 | DAT_005c11ec
    PUSH EDI                            ; 0050714d | g_CWater_02dd1210
    PUSH 0x590181                       ; 0050714e | = "%d\n"
    PUSH EBX                            ; 00507153
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507154
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507159
    CMP dword ptr [EBP + 0x15a8c4],0x6  ; 0050715c
        ;   Label: LAB_0050715c
    JL 0x005079cf                       ; 00507163
        ;   XREF to: 005079cf (CONDITIONAL_JUMP)  ; LAB_005079cf
    PUSH EBX                            ; 00507169
    PUSH 0xff                           ; 0050716a
    LEA EAX,[ESP + 0x8]                 ; 0050716f
    PUSH EAX                            ; 00507173
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507174
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507179
    LEA EAX,[EBP + 0x161240]            ; 0050717c
    PUSH EAX                            ; 00507182
    PUSH 0x59018a                       ; 00507183 | = "%d\n"
    PUSH EBX                            ; 00507188
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507189
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0050718e
    MOV EDX,dword ptr [EBP + 0x15a8c4]  ; 00507191
        ;   Label: LAB_00507191
    LEA EDI,[EBP + 0x161244]            ; 00507197
    CMP EDX,0xc                         ; 0050719d
    JL 0x005079de                       ; 005071a0
        ;   XREF to: 005079de (CONDITIONAL_JUMP)  ; LAB_005079de
    PUSH EDI                            ; 005071a6
    LEA EAX,[EBP + 0x161264]            ; 005071a7
    PUSH EAX                            ; 005071ad
    PUSH 0x59018e                       ; 005071ae | = "%d,%s\n"
    PUSH EBX                            ; 005071b3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005071b4
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005071b9
    MOV ECX,dword ptr [EBP + 0x15a8c4]  ; 005071bc
        ;   Label: LAB_005071bc
    LEA EDI,[EBP + 0x15aa68]            ; 005071c2
    CMP ECX,0xd                         ; 005071c8
    JL 0x00507a0c                       ; 005071cb
        ;   XREF to: 00507a0c (CONDITIONAL_JUMP)  ; LAB_00507a0c
    PUSH EBX                            ; 005071d1
    PUSH 0xff                           ; 005071d2
    LEA EAX,[ESP + 0x8]                 ; 005071d7
    PUSH EAX                            ; 005071db
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005071dc
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005071e1
    PUSH EDI                            ; 005071e4
    LEA EAX,[EBP + 0x15aa64]            ; 005071e5
    PUSH EAX                            ; 005071eb
    PUSH 0x5901a1                       ; 005071ec | = "%d,%s\n"
    PUSH EBX                            ; 005071f1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005071f2
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x10                        ; 005071f7
    CMP dword ptr [EBP + 0x15a8c4],0x19 ; 005071fa
        ;   Label: LAB_005071fa
    JL 0x00507a3a                       ; 00507201
        ;   XREF to: 00507a3a (CONDITIONAL_JUMP)  ; LAB_00507a3a
    PUSH EBX                            ; 00507207
    PUSH 0xff                           ; 00507208
    LEA EAX,[ESP + 0x8]                 ; 0050720d
    PUSH EAX                            ; 00507211
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507212
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507217
    LEA EAX,[EBP + 0x161280]            ; 0050721a
    PUSH EAX                            ; 00507220
    PUSH 0x5901ad                       ; 00507221 | = "%d\n"
    PUSH EBX                            ; 00507226
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507227
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 0050722c
    PUSH 0x5                            ; 0050722f
        ;   Label: LAB_0050722f
    PUSH 0x5901b1                       ; 00507231 | = "train"
    LEA EAX,[ESP + 0x108]               ; 00507236
    PUSH EAX                            ; 0050723d
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 0050723e
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507243
    TEST EAX,EAX                        ; 00507246
    JNZ 0x00507a49                      ; 00507248
        ;   XREF to: 00507a49 (CONDITIONAL_JUMP)  ; LAB_00507a49
    MOV EAX,[0x005c1144]                ; 0050724e | DAT_005c1144
    PUSH EAX                            ; 00507253
    MOV dword ptr [EBP + 0x15a8c0],0x1  ; 00507254
    CALL core_terrain.cpp_CTerrain_init_FUN_005492b0 ; 0050725e
        ;   XREF to: 005492b0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_init_FUN_005492b0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00507263
    PUSH EBP                            ; 00507266
        ;   Label: LAB_00507266
    MOV EDX,dword ptr [EBP + 0x15a8c4]  ; 00507267
    ADD ESP,0x4                         ; 0050726d
    CMP EDX,0xb                         ; 00507270
    JL 0x00507288                       ; 00507273
        ;   XREF to: 00507288 (CONDITIONAL_JUMP)  ; LAB_00507288
    PUSH EBX                            ; 00507275
    PUSH 0xff                           ; 00507276
    LEA EAX,[ESP + 0x8]                 ; 0050727b
    PUSH EAX                            ; 0050727f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507280
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507285
    LEA EAX,[EBP + 0x19644]             ; 00507288
        ;   Label: LAB_00507288
    PUSH EAX                            ; 0050728e
    PUSH 0x5901b7                       ; 0050728f | = "%d\n"
    PUSH EBX                            ; 00507294
    XOR EDI,EDI                         ; 00507295
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507297
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP + 0x19644]   ; 0050729c
    ADD ESP,0xc                         ; 005072a2
    TEST ECX,ECX                        ; 005072a5
    JLE 0x005072d0                      ; 005072a7
        ;   XREF to: 005072d0 (CONDITIONAL_JUMP)  ; LAB_005072d0
    LEA ESI,[EBP + 0x19648]             ; 005072a9
    PUSH EBX                            ; 005072af
        ;   Label: LAB_005072af
    PUSH ESI                            ; 005072b0
    INC EDI                             ; 005072b1
    CALL core_setutil.cpp_C3DSLight_load_FUN_00514a70 ; 005072b2
        ;   XREF to: 00514a70 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_load_FUN_00514a70(C3DSLight * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 005072b7
    MOV EAX,dword ptr [EBP + 0x19644]   ; 005072ba
    ADD ESI,0x1898                      ; 005072c0
    CMP EDI,EAX                         ; 005072c6
    JL 0x005072af                       ; 005072c8
        ;   XREF to: 005072af (CONDITIONAL_JUMP)  ; LAB_005072af
    LEA EAX,[EAX]                       ; 005072ca
    CMP dword ptr [EBP + 0x15a8c4],0xb  ; 005072d0
        ;   Label: LAB_005072d0
    JL 0x005072ec                       ; 005072d7
        ;   XREF to: 005072ec (CONDITIONAL_JUMP)  ; LAB_005072ec
    PUSH EBX                            ; 005072d9
    PUSH 0xff                           ; 005072da
    LEA EAX,[ESP + 0x8]                 ; 005072df
    PUSH EAX                            ; 005072e3
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 005072e4
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005072e9
    PUSH EBP                            ; 005072ec
        ;   Label: LAB_005072ec
    PUSH 0x5901bb                       ; 005072ed | = "%d\n"
    PUSH EBX                            ; 005072f2
    XOR EDI,EDI                         ; 005072f3
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005072f5
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP]             ; 005072fa
    ADD ESP,0xc                         ; 005072fd
    TEST ECX,ECX                        ; 00507300
    JLE 0x00507320                      ; 00507302
        ;   XREF to: 00507320 (CONDITIONAL_JUMP)  ; LAB_00507320
    LEA ESI,[EBP + 0x4]                 ; 00507304
    PUSH EBX                            ; 00507307
        ;   Label: LAB_00507307
    PUSH ESI                            ; 00507308
    INC EDI                             ; 00507309
    CALL core_setutil.cpp_C3DSCamera_load_FUN_005144e0 ; 0050730a
        ;   XREF to: 005144e0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_load_FUN_005144e0(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 0050730f
    MOV EAX,dword ptr [EBP]             ; 00507312
    ADD ESI,0x1a0                       ; 00507315
    CMP EDI,EAX                         ; 0050731b
    JL 0x00507307                       ; 0050731d
        ;   XREF to: 00507307 (CONDITIONAL_JUMP)  ; LAB_00507307
    NOP                                 ; 0050731f
    CMP dword ptr [EBP + 0x15a8c4],0x0  ; 00507320
        ;   Label: LAB_00507320
    JLE 0x00507a67                      ; 00507327
        ;   XREF to: 00507a67 (CONDITIONAL_JUMP)  ; LAB_00507a67
    PUSH EBX                            ; 0050732d
    PUSH 0xff                           ; 0050732e
    LEA EAX,[ESP + 0x8]                 ; 00507333
    PUSH EAX                            ; 00507337
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507338
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050733d
    LEA EAX,[EBP + 0x15aad0]            ; 00507340
    PUSH EAX                            ; 00507346
    PUSH 0x5901bf                       ; 00507347 | = "%d\n"
    PUSH EBX                            ; 0050734c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050734d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507352
    LEA EAX,[EBP + 0x15aad4]            ; 00507355
    PUSH EAX                            ; 0050735b
    PUSH 0x5901c3                       ; 0050735c | = "%d\n"
    PUSH EBX                            ; 00507361
    XOR ESI,ESI                         ; 00507362
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507364
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV ECX,dword ptr [EBP + 0x15aad4]  ; 00507369
    ADD ESP,0xc                         ; 0050736f
    TEST ECX,ECX                        ; 00507372
    JLE 0x00507500                      ; 00507374
        ;   XREF to: 00507500 (CONDITIONAL_JUMP)  ; LAB_00507500
    LEA EAX,[EBP + 0x15aad8]            ; 0050737a
    MOV dword ptr [ESP + 0x1f0],EAX     ; 00507380
    LEA EAX,[EBP + 0x15ab18]            ; 00507387
    LEA EDI,[EBP + 0x15aaf0]            ; 0050738d
    MOV dword ptr [ESP + 0x1e8],EAX     ; 00507393
    LEA EAX,[EBP + 0x15aae4]            ; 0050739a
    MOV dword ptr [ESP + 0x210],EAX     ; 005073a0
    LEA EAX,[EBP + 0x15aae8]            ; 005073a7
    MOV dword ptr [ESP + 0x1fc],EAX     ; 005073ad
    LEA EAX,[EBP + 0x15aaec]            ; 005073b4
    MOV dword ptr [ESP + 0x200],EAX     ; 005073ba
    LEA EAX,[EBP + 0x15aadc]            ; 005073c1
    MOV dword ptr [ESP + 0x208],EAX     ; 005073c7
    LEA EAX,[EBP + 0x15aae0]            ; 005073ce
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005073d4
    IMUL EAX,ESI,0x44                   ; 005073db
        ;   Label: LAB_005073db
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005073de
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 005073e5
    PUSH ECX                            ; 005073ec
    ADD EAX,EDX                         ; 005073ed
    MOV EDX,dword ptr [ESP + 0x20c]     ; 005073ef
    PUSH EDX                            ; 005073f6
    PUSH EAX                            ; 005073f7
    PUSH 0x5901c7                       ; 005073f8 | = "%f,%f,%f\n"
    PUSH EBX                            ; 005073fd
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005073fe
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00507403
    MOV ECX,dword ptr [ESP + 0x200]     ; 00507406
    PUSH ECX                            ; 0050740d
    MOV EAX,dword ptr [ESP + 0x200]     ; 0050740e
    PUSH EAX                            ; 00507415
    MOV EDX,dword ptr [ESP + 0x218]     ; 00507416
    PUSH EDX                            ; 0050741d
    PUSH 0x5901d1                       ; 0050741e | = "%f,%f,%f\n"
    PUSH EBX                            ; 00507423
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507424
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00507429
    LEA EAX,[ESP + 0x1d8]               ; 0050742c
    PUSH EAX                            ; 00507433
    LEA EAX,[ESP + 0x1e0]               ; 00507434
    PUSH EAX                            ; 0050743b
    LEA EAX,[ESP + 0x1dc]               ; 0050743c
    PUSH EAX                            ; 00507443
    PUSH 0x5901db                       ; 00507444 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00507449
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050744a
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0050744f
    LEA EAX,[ESP + 0x1d4]               ; 00507452
    PUSH EAX                            ; 00507459
    PUSH EDI                            ; 0050745a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0050745b
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00507460
    MOV ECX,dword ptr [ESP + 0x1e8]     ; 00507463
    PUSH ECX                            ; 0050746a
    PUSH 0x5901e5                       ; 0050746b | = "%d\n"
    PUSH EBX                            ; 00507470
    INC ESI                             ; 00507471
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507472
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507477
    ADD EDI,0x44                        ; 0050747a
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0050747d
    MOV EDX,dword ptr [ESP + 0x210]     ; 00507484
    MOV ECX,dword ptr [ESP + 0x1fc]     ; 0050748b
    ADD EAX,0x44                        ; 00507492
    ADD EDX,0x44                        ; 00507495
    ADD ECX,0x44                        ; 00507498
    MOV dword ptr [ESP + 0x1e8],EAX     ; 0050749b
    MOV dword ptr [ESP + 0x210],EDX     ; 005074a2
    MOV dword ptr [ESP + 0x1fc],ECX     ; 005074a9
    MOV EAX,dword ptr [ESP + 0x200]     ; 005074b0
    MOV EDX,dword ptr [ESP + 0x208]     ; 005074b7
    MOV ECX,dword ptr [ESP + 0x1e4]     ; 005074be
    ADD EAX,0x44                        ; 005074c5
    ADD EDX,0x44                        ; 005074c8
    ADD ECX,0x44                        ; 005074cb
    MOV dword ptr [ESP + 0x200],EAX     ; 005074ce
    MOV dword ptr [ESP + 0x208],EDX     ; 005074d5
    MOV EAX,dword ptr [EBP + 0x15aad4]  ; 005074dc
    MOV dword ptr [ESP + 0x1e4],ECX     ; 005074e2
    CMP ESI,EAX                         ; 005074e9
    JL 0x005073db                       ; 005074eb
        ;   XREF to: 005073db (CONDITIONAL_JUMP)  ; LAB_005073db
    LEA EAX,[EAX]                       ; 005074f1
    LEA EDX,[EDX]                       ; 005074f7
    LEA EAX,[EAX]                       ; 005074fd
    CMP dword ptr [EBP + 0x15a8c4],0x3  ; 00507500
        ;   Label: LAB_00507500
    JL 0x00507b31                       ; 00507507
        ;   XREF to: 00507b31 (CONDITIONAL_JUMP)  ; LAB_00507b31
    PUSH EBX                            ; 0050750d
    PUSH 0xff                           ; 0050750e
    LEA EAX,[ESP + 0x8]                 ; 00507513
    PUSH EAX                            ; 00507517
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507518
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0050751d
    LEA EAX,[EBP + 0x15f294]            ; 00507520
    PUSH EAX                            ; 00507526
    PUSH 0x590206                       ; 00507527 | = "%d\n"
    PUSH EBX                            ; 0050752c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050752d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507532
    CMP dword ptr [EBP + 0x15a8c4],0x18 ; 00507535
        ;   Label: LAB_00507535
    JL 0x00507c22                       ; 0050753c
        ;   XREF to: 00507c22 (CONDITIONAL_JUMP)  ; LAB_00507c22
    PUSH EBX                            ; 00507542
    PUSH 0xff                           ; 00507543
    LEA EAX,[ESP + 0x8]                 ; 00507548
    PUSH EAX                            ; 0050754c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050754d
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507552
    LEA EAX,[EBP + 0x15a894]            ; 00507555
    PUSH EAX                            ; 0050755b
    PUSH 0x59022e                       ; 0050755c | = "%d\n"
    PUSH EBX                            ; 00507561
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507562
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00507567
    MOV ESI,dword ptr [EBP + 0x15a8c4]  ; 0050756a
        ;   Label: LAB_0050756a
    CMP ESI,0x4                         ; 00507570
    JL 0x00507584                       ; 00507573
        ;   XREF to: 00507584 (CONDITIONAL_JUMP)  ; LAB_00507584
    CMP ESI,0x9                         ; 00507575
    JG 0x00507584                       ; 00507578
        ;   XREF to: 00507584 (CONDITIONAL_JUMP)  ; LAB_00507584
    PUSH EBX                            ; 0050757a
    PUSH EBP                            ; 0050757b
    CALL core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0 ; 0050757c
        ;   XREF to: 00513ce0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00513ce0(CDemonSet * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00507581
    CMP dword ptr [EBP + 0x15a8c4],0x5  ; 00507584
        ;   Label: LAB_00507584
    JL 0x00507c31                       ; 0050758b
        ;   XREF to: 00507c31 (CONDITIONAL_JUMP)  ; LAB_00507c31
    PUSH EBX                            ; 00507591
    PUSH 0xff                           ; 00507592
    LEA EAX,[ESP + 0x8]                 ; 00507597
    PUSH EAX                            ; 0050759b
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050759c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 005075a1
    LEA EAX,[EBP + 0x15b028]            ; 005075a4
    PUSH EAX                            ; 005075aa
    PUSH 0x590232                       ; 005075ab | = "%d\n"
    PUSH EBX                            ; 005075b0
    XOR ESI,ESI                         ; 005075b1
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 005075b3
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EDX,dword ptr [EBP + 0x15b028]  ; 005075b8
    ADD ESP,0xc                         ; 005075be
    TEST EDX,EDX                        ; 005075c1
    JLE 0x00507710                      ; 005075c3
        ;   XREF to: 00507710 (CONDITIONAL_JUMP)  ; LAB_00507710
    LEA EAX,[EBP + 0x15b02c]            ; 005075c9
    LEA EDI,[EBP + 0x15b044]            ; 005075cf
    MOV dword ptr [ESP + 0x1f4],EAX     ; 005075d5
    LEA EAX,[EBP + 0x15b038]            ; 005075dc
    MOV dword ptr [ESP + 0x20c],EAX     ; 005075e2
    LEA EAX,[EBP + 0x15b03c]            ; 005075e9
    MOV dword ptr [ESP + 0x1ec],EAX     ; 005075ef
    LEA EAX,[EBP + 0x15b040]            ; 005075f6
    MOV dword ptr [ESP + 0x1f8],EAX     ; 005075fc
    LEA EAX,[EBP + 0x15b030]            ; 00507603
    MOV dword ptr [ESP + 0x204],EAX     ; 00507609
    LEA EAX,[EBP + 0x15b034]            ; 00507610
    MOV dword ptr [ESP + 0x214],EAX     ; 00507616
    IMUL EAX,ESI,0x44                   ; 0050761d
        ;   Label: LAB_0050761d
    MOV EDX,dword ptr [ESP + 0x214]     ; 00507620
    MOV ECX,dword ptr [ESP + 0x1f4]     ; 00507627
    PUSH EDX                            ; 0050762e
    ADD EAX,ECX                         ; 0050762f
    MOV ECX,dword ptr [ESP + 0x208]     ; 00507631
    PUSH ECX                            ; 00507638
    PUSH EAX                            ; 00507639
    PUSH 0x590236                       ; 0050763a | = "%f,%f,%f\n"
    PUSH EBX                            ; 0050763f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507640
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00507645
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 00507648
    PUSH EAX                            ; 0050764f
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 00507650
    PUSH EDX                            ; 00507657
    MOV ECX,dword ptr [ESP + 0x214]     ; 00507658
    PUSH ECX                            ; 0050765f
    PUSH 0x590240                       ; 00507660 | = "%f,%f,%f\n"
    PUSH EBX                            ; 00507665
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00507666
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0050766b
    LEA EAX,[ESP + 0x1cc]               ; 0050766e
    PUSH EAX                            ; 00507675
    LEA EAX,[ESP + 0x1d4]               ; 00507676
    PUSH EAX                            ; 0050767d
    LEA EAX,[ESP + 0x1d0]               ; 0050767e
    PUSH EAX                            ; 00507685
    PUSH 0x59024a                       ; 00507686 | = "%f,%f,%f\n"
    PUSH EBX                            ; 0050768b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0050768c
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00507691
    LEA EAX,[ESP + 0x1c8]               ; 00507694
    PUSH EAX                            ; 0050769b
    PUSH EDI                            ; 0050769c
    INC ESI                             ; 0050769d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0050769e
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 005076a3
    ADD EDI,0x44                        ; 005076a6
    MOV EAX,dword ptr [ESP + 0x20c]     ; 005076a9
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 005076b0
    MOV ECX,dword ptr [ESP + 0x1f8]     ; 005076b7
    ADD EAX,0x44                        ; 005076be
    ADD EDX,0x44                        ; 005076c1
    ADD ECX,0x44                        ; 005076c4
    MOV dword ptr [ESP + 0x20c],EAX     ; 005076c7
    MOV dword ptr [ESP + 0x1ec],EDX     ; 005076ce
    MOV dword ptr [ESP + 0x1f8],ECX     ; 005076d5
    MOV EAX,dword ptr [ESP + 0x204]     ; 005076dc
    MOV EDX,dword ptr [ESP + 0x214]     ; 005076e3
    MOV ECX,dword ptr [EBP + 0x15b028]  ; 005076ea
    ADD EAX,0x44                        ; 005076f0
    ADD EDX,0x44                        ; 005076f3
    MOV dword ptr [ESP + 0x204],EAX     ; 005076f6
    MOV dword ptr [ESP + 0x214],EDX     ; 005076fd
    CMP ESI,ECX                         ; 00507704
    JL 0x0050761d                       ; 00507706
        ;   XREF to: 0050761d (CONDITIONAL_JUMP)  ; LAB_0050761d
    LEA EAX,[EAX]                       ; 0050770c
    PUSH EBP                            ; 00507710
        ;   Label: LAB_00507710
    CALL core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0 ; 00507711
        ;   XREF to: 005141f0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00507716
    CMP dword ptr [EBP + 0x15a8c4],0xe  ; 00507719
        ;   Label: LAB_00507719
    JNZ 0x00507748                      ; 00507720
        ;   XREF to: 00507748 (CONDITIONAL_JUMP)  ; LAB_00507748
    PUSH EBX                            ; 00507722
    PUSH 0xff                           ; 00507723
    LEA EAX,[ESP + 0x8]                 ; 00507728
    PUSH EAX                            ; 0050772c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050772d
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507732
    PUSH EBX                            ; 00507735
    PUSH 0xff                           ; 00507736
    LEA EAX,[ESP + 0x8]                 ; 0050773b
    PUSH EAX                            ; 0050773f
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00507740
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00507745
    CMP dword ptr [EBP + 0x15a8c4],0x14 ; 00507748
        ;   Label: LAB_00507748
    JL 0x00507790                       ; 0050774f
        ;   XREF to: 00507790 (CONDITIONAL_JUMP)  ; LAB_00507790
    PUSH EBX                            ; 00507751
    PUSH 0xff                           ; 00507752
    LEA EAX,[ESP + 0x8]                 ; 00507757
    PUSH EAX                            ; 0050775b
    XOR EDI,EDI                         ; 0050775c
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0050775e
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    MOV EAX,dword ptr [EBP]             ; 00507763
    ADD ESP,0xc                         ; 00507766
    TEST EAX,EAX                        ; 00507769
    JLE 0x00507790                      ; 0050776b
        ;   XREF to: 00507790 (CONDITIONAL_JUMP)  ; LAB_00507790
    LEA ESI,[EBP + 0x4]                 ; 0050776d
    PUSH EBX                            ; 00507770
        ;   Label: LAB_00507770
    PUSH ESI                            ; 00507771
    INC EDI                             ; 00507772
    CALL core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800 ; 00507773
        ;   XREF to: 00514800 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800(C3DSCamera * this_ptr, _FILE * file_handle)
    ADD ESP,0x8                         ; 00507778
    MOV EDX,dword ptr [EBP]             ; 0050777b
    ADD ESI,0x1a0                       ; 0050777e
    CMP EDI,EDX                         ; 00507784
    JL 0x00507770                       ; 00507786
        ;   XREF to: 00507770 (CONDITIONAL_JUMP)  ; LAB_00507770
    LEA EAX,[EAX]                       ; 00507788
    MOV EDX,EDX                         ; 0050778e
    PUSH EBX                            ; 00507790
        ;   Label: LAB_00507790
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00507791
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 00507796
    PUSH 0x0                            ; 00507799
    PUSH 0x590254                       ; 0050779b | = "Loading set geometry"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 005077a0
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 005077a5
    PUSH EAX                            ; 005077a8
    MOV ECX,dword ptr [0x005baca0]      ; 005077a9 | g_CLevelLoader_PTR_005baca0
    PUSH ECX                            ; 005077af
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 005077b0
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 005077b5
    LEA EAX,[ESP + 0x100]               ; 005077b8
    PUSH EAX                            ; 005077bf
    LEA EBX,[EBP + 0x14cd08]            ; 005077c0
    PUSH EBX                            ; 005077c6
    CALL crt_string.c__stricmp_FUN_00564520 ; 005077c7
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005077cc
    TEST EAX,EAX                        ; 005077cf
    JZ 0x00507c6a                       ; 005077d1
        ;   XREF to: 00507c6a (CONDITIONAL_JUMP)  ; LAB_00507c6a
    LEA ESI,[ESP + 0x100]               ; 005077d7
    MOV EDI,EBX                         ; 005077de
    PUSH EDI                            ; 005077e0
    MOV AL,byte ptr [ESI]               ; 005077e1
        ;   Label: LAB_005077e1
    MOV byte ptr [EDI],AL               ; 005077e3
    CMP AL,0x0                          ; 005077e5
    JZ 0x005077f9                       ; 005077e7
        ;   XREF to: 005077f9 (CONDITIONAL_JUMP)  ; LAB_005077f9
    MOV AL,byte ptr [ESI + 0x1]         ; 005077e9
    ADD ESI,0x2                         ; 005077ec
    MOV byte ptr [EDI + 0x1],AL         ; 005077ef
    ADD EDI,0x2                         ; 005077f2
    CMP AL,0x0                          ; 005077f5
    JNZ 0x005077e1                      ; 005077f7
        ;   XREF to: 005077e1 (CONDITIONAL_JUMP)  ; LAB_005077e1
    POP EDI                             ; 005077f9
        ;   Label: LAB_005077f9
    PUSH 0x590269                       ; 005077fa | = "rb"
    PUSH EBX                            ; 005077ff
    PUSH 0x59026c                       ; 00507800 | = "data"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00507805
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0050780a
    TEST EAX,EAX                        ; 0050780d
    JZ 0x00507c40                       ; 0050780f
        ;   XREF to: 00507c40 (CONDITIONAL_JUMP)  ; LAB_00507c40
    PUSH EAX                            ; 00507815
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00507816
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0050781b
    PUSH EBX                            ; 0050781e
    PUSH 0x1fba938                      ; 0050781f | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890 ; 00507824
        ;   XREF to: 00467890 (UNCONDITIONAL_CALL)  ; int core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00467890(CDemonRaytrace * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00507829
    CALL core_path.cpp_resetAllPathMaps_FUN_004f1e90 ; 0050782c
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; void core_path.cpp_resetAllPathMaps_FUN_004f1e90()
        ;   Label: LAB_0050782c
    PUSH 0x0                            ; 00507831
        ;   Label: LAB_00507831
    PUSH 0x590298                       ; 00507833 | = "Loading thumbs"
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 00507838
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_004ee370(char * key)
    ADD ESP,0x4                         ; 0050783d
    PUSH EAX                            ; 00507840
    MOV EBX,dword ptr [0x005baca0]      ; 00507841 | g_CLevelLoader_PTR_005baca0
    PUSH EBX                            ; 00507847
    LEA EDI,[ESP + 0x170]               ; 00507848
    CALL core_level.cpp_CLevelLoader_update_FUN_004c59e0 ; 0050784f
        ;   XREF to: 004c59e0 (UNCONDITIONAL_CALL)  ; void core_level.cpp_CLevelLoader_update_FUN_004c59e0(CLevelLoader * this_ptr, char * text, int clear_screen)
    ADD ESP,0xc                         ; 00507854
    LEA ESI,[EBP + 0x14cd08]            ; 00507857
    MOV DL,0x2e                         ; 0050785d
    PUSH EDI                            ; 0050785f
    MOV AL,byte ptr [ESI]               ; 00507860
        ;   Label: LAB_00507860
    MOV byte ptr [EDI],AL               ; 00507862
    CMP AL,0x0                          ; 00507864
    JZ 0x00507878                       ; 00507866
        ;   XREF to: 00507878 (CONDITIONAL_JUMP)  ; LAB_00507878
    MOV AL,byte ptr [ESI + 0x1]         ; 00507868
    ADD ESI,0x2                         ; 0050786b
    MOV byte ptr [EDI + 0x1],AL         ; 0050786e
    ADD EDI,0x2                         ; 00507871
    CMP AL,0x0                          ; 00507874
    JNZ 0x00507860                      ; 00507876
        ;   XREF to: 00507860 (CONDITIONAL_JUMP)  ; LAB_00507860
    POP EDI                             ; 00507878
        ;   Label: LAB_00507878
    LEA ESI,[ESP + 0x164]               ; 00507879
    MOV AL,byte ptr [ESI]               ; 00507880
        ;   Label: LAB_00507880
    CMP AL,DL                           ; 00507882
    JZ 0x00507898                       ; 00507884
        ;   XREF to: 00507898 (CONDITIONAL_JUMP)  ; LAB_00507898
    CMP AL,0x0                          ; 00507886
    JZ 0x00507896                       ; 00507888
        ;   XREF to: 00507896 (CONDITIONAL_JUMP)  ; LAB_00507896
    INC ESI                             ; 0050788a
    MOV AL,byte ptr [ESI]               ; 0050788b
    CMP AL,DL                           ; 0050788d
    JZ 0x00507898                       ; 0050788f
        ;   XREF to: 00507898 (CONDITIONAL_JUMP)  ; LAB_00507898
    INC ESI                             ; 00507891
    CMP AL,0x0                          ; 00507892
    JNZ 0x00507880                      ; 00507894
        ;   XREF to: 00507880 (CONDITIONAL_JUMP)  ; LAB_00507880
    SUB ESI,ESI                         ; 00507896
        ;   Label: LAB_00507896
    MOV EDI,ESI                         ; 00507898
        ;   Label: LAB_00507898
    TEST ESI,ESI                        ; 0050789a
    JNZ 0x005078c1                      ; 0050789c
        ;   XREF to: 005078c1 (CONDITIONAL_JUMP)  ; LAB_005078c1
    LEA ESI,[ESP + 0x164]               ; 0050789e
    XOR DL,DL                           ; 005078a5
    MOV AL,byte ptr [ESI]               ; 005078a7
        ;   Label: LAB_005078a7
    CMP AL,DL                           ; 005078a9
    JZ 0x005078bf                       ; 005078ab
        ;   XREF to: 005078bf (CONDITIONAL_JUMP)  ; LAB_005078bf
    CMP AL,0x0                          ; 005078ad
    JZ 0x005078bd                       ; 005078af
        ;   XREF to: 005078bd (CONDITIONAL_JUMP)  ; LAB_005078bd
    INC ESI                             ; 005078b1
    MOV AL,byte ptr [ESI]               ; 005078b2
    CMP AL,DL                           ; 005078b4
    JZ 0x005078bf                       ; 005078b6
        ;   XREF to: 005078bf (CONDITIONAL_JUMP)  ; LAB_005078bf
    INC ESI                             ; 005078b8
    CMP AL,0x0                          ; 005078b9
    JNZ 0x005078a7                      ; 005078bb
        ;   XREF to: 005078a7 (CONDITIONAL_JUMP)  ; LAB_005078a7
    SUB ESI,ESI                         ; 005078bd
        ;   Label: LAB_005078bd
    MOV EDI,ESI                         ; 005078bf
        ;   Label: LAB_005078bf
    MOV ESI,0x5902a7                    ; 005078c1 | = ".zth"
        ;   Label: LAB_005078c1
    PUSH EDI                            ; 005078c6
    MOV AL,byte ptr [ESI]               ; 005078c7 | = ".zth" | s_zth_005902a7+2
        ;   Label: LAB_005078c7
    MOV byte ptr [EDI],AL               ; 005078c9
    CMP AL,0x0                          ; 005078cb
    JZ 0x005078df                       ; 005078cd
        ;   XREF to: 005078df (CONDITIONAL_JUMP)  ; LAB_005078df
    MOV AL,byte ptr [ESI + 0x1]         ; 005078cf | s_zth_005902a7+1 | s_zth_005902a7+3
    ADD ESI,0x2                         ; 005078d2
    MOV byte ptr [EDI + 0x1],AL         ; 005078d5
    ADD EDI,0x2                         ; 005078d8
    CMP AL,0x0                          ; 005078db
    JNZ 0x005078c7                      ; 005078dd
        ;   XREF to: 005078c7 (CONDITIONAL_JUMP)  ; LAB_005078c7
    POP EDI                             ; 005078df
        ;   Label: LAB_005078df
    LEA EAX,[ESP + 0x164]               ; 005078e0
    PUSH EAX                            ; 005078e7
    PUSH EBP                            ; 005078e8
    CALL core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610 ; 005078e9
        ;   XREF to: 00513610 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CDemonSet_refreshThumbs_FUN_00513610(CDemonSet * this_ptr, char * filename)
    MOV ESI,dword ptr [EBP + 0x15a8ac]  ; 005078ee
    ADD ESP,0x8                         ; 005078f4
    TEST ESI,ESI                        ; 005078f7
    JZ 0x0050790f                       ; 005078f9
        ;   XREF to: 0050790f (CONDITIONAL_JUMP)  ; LAB_0050790f
    LEA EAX,[EBP + 0x15a8b0]            ; 005078fb
    PUSH EAX                            ; 00507901
    PUSH 0x1fbacc8                      ; 00507902
    CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 ; 00507907
        ;   XREF to: 00452650 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650(CKeyFramedModel * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0050790c
    MOV EDI,dword ptr [EBP]             ; 0050790f
        ;   Label: LAB_0050790f
    XOR ESI,ESI                         ; 00507912
    TEST EDI,EDI                        ; 00507914
    JLE 0x00507950                      ; 00507916
        ;   XREF to: 00507950 (CONDITIONAL_JUMP)  ; LAB_00507950
    MOV EBX,EBP                         ; 00507918
    FLD float ptr [EBP + 0x14cd68]      ; 0050791a
        ;   Label: LAB_0050791a
    MOV dword ptr [EBX + 0x14c],0x0     ; 00507920
    MOV dword ptr [EBX + 0x1a0],0x1     ; 0050792a
    INC ESI                             ; 00507934
    FSTP float ptr [EBX + 0x148]        ; 00507935
    MOV EAX,dword ptr [EBP]             ; 0050793b
    ADD EBX,0x1a0                       ; 0050793e
    CMP ESI,EAX                         ; 00507944
    JL 0x0050791a                       ; 00507946
        ;   XREF to: 0050791a (CONDITIONAL_JUMP)  ; LAB_0050791a
    LEA EAX,[EAX]                       ; 00507948
    MOV EDX,EDX                         ; 0050794e
    ADD ESP,0x218                       ; 00507950
        ;   Label: LAB_00507950
    POP EBP                             ; 00507956
    POP EDI                             ; 00507957
    POP ESI                             ; 00507958
    POP EBX                             ; 00507959
    RET                                 ; 0050795a
    PUSH ESI                            ; 0050795b
        ;   Label: LAB_0050795b
    MOV ECX,0x59010e                    ; 0050795c | = "..\\core\\set.cpp"
    MOV EDI,0x11b                       ; 00507961
    PUSH 0x59011e                       ; 00507966 | = "CDemonSet::Unable to open %s"
    MOV dword ptr [0x01cc4800],ECX      ; 0050796b | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EDI      ; 00507971 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00507977
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x8                         ; 0050797c
    JMP 0x00506f6d                      ; 0050797f
        ;   XREF to: 00506f6d (UNCONDITIONAL_JUMP)  ; LAB_00506f6d
    PUSH EDX                            ; 00507984
        ;   Label: LAB_00507984
    PUSH EBX                            ; 00507985
    PUSH ESI                            ; 00507986
    CALL core_dcamera.cpp_loadCameraFog_FUN_00447d10 ; 00507987
        ;   XREF to: 00447d10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_loadCameraFog_FUN_00447d10(SFog * fog, _FILE * file_handle, int file_version)
    ADD ESP,0xc                         ; 0050798c
    JMP 0x005070c8                      ; 0050798f
        ;   XREF to: 005070c8 (UNCONDITIONAL_JUMP)  ; LAB_005070c8
    PUSH 0x4                            ; 00507994
        ;   Label: LAB_00507994
    PUSH 0x590185                       ; 00507996 | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 0050799b
    PUSH EAX                            ; 005079a2
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 005079a3
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005079a8
    TEST EAX,EAX                        ; 005079ab
    JNZ 0x005079bf                      ; 005079ad
        ;   XREF to: 005079bf (CONDITIONAL_JUMP)  ; LAB_005079bf
    MOV EAX,[0x005c11ec]                ; 005079af | DAT_005c11ec
    MOV dword ptr [EAX],0x1             ; 005079b4 | g_CWater_02dd1210
    JMP 0x0050715c                      ; 005079ba
        ;   XREF to: 0050715c (UNCONDITIONAL_JUMP)  ; LAB_0050715c
    MOV EAX,[0x005c11ec]                ; 005079bf | DAT_005c11ec
        ;   Label: LAB_005079bf
    MOV dword ptr [EAX],0x0             ; 005079c4 | g_CWater_02dd1210
    JMP 0x0050715c                      ; 005079ca
        ;   XREF to: 0050715c (UNCONDITIONAL_JUMP)  ; LAB_0050715c
    MOV dword ptr [EBP + 0x161240],0x1  ; 005079cf
        ;   Label: LAB_005079cf
    JMP 0x00507191                      ; 005079d9
        ;   XREF to: 00507191 (UNCONDITIONAL_JUMP)  ; LAB_00507191
    MOV ESI,0x590195                    ; 005079de | = "NITESKY.RAW"
        ;   Label: LAB_005079de
    PUSH EDI                            ; 005079e3
    MOV AL,byte ptr [ESI]               ; 005079e4 | = "NITESKY.RAW" | s_NITESKY_RAW_00590195+2
        ;   Label: LAB_005079e4
    MOV byte ptr [EDI],AL               ; 005079e6
    CMP AL,0x0                          ; 005079e8
    JZ 0x005079fc                       ; 005079ea
        ;   XREF to: 005079fc (CONDITIONAL_JUMP)  ; LAB_005079fc
    MOV AL,byte ptr [ESI + 0x1]         ; 005079ec | s_NITESKY_RAW_00590195+1 | s_NITESKY_RAW_00590195+3
    ADD ESI,0x2                         ; 005079ef
    MOV byte ptr [EDI + 0x1],AL         ; 005079f2
    ADD EDI,0x2                         ; 005079f5
    CMP AL,0x0                          ; 005079f8
    JNZ 0x005079e4                      ; 005079fa
        ;   XREF to: 005079e4 (CONDITIONAL_JUMP)  ; LAB_005079e4
    POP EDI                             ; 005079fc
        ;   Label: LAB_005079fc
    MOV dword ptr [EBP + 0x161264],0x4000 ; 005079fd
    JMP 0x005071bc                      ; 00507a07
        ;   XREF to: 005071bc (UNCONDITIONAL_JUMP)  ; LAB_005071bc
    MOV ESI,0x5901a8                    ; 00507a0c | = "none"
        ;   Label: LAB_00507a0c
    MOV dword ptr [EBP + 0x15aa64],0x0  ; 00507a11
    PUSH EDI                            ; 00507a1b
    MOV AL,byte ptr [ESI]               ; 00507a1c | = "none" | s_ne_005901a8+2
        ;   Label: LAB_00507a1c
    MOV byte ptr [EDI],AL               ; 00507a1e
    CMP AL,0x0                          ; 00507a20
    JZ 0x00507a34                       ; 00507a22
        ;   XREF to: 00507a34 (CONDITIONAL_JUMP)  ; LAB_00507a34
    MOV AL,byte ptr [ESI + 0x1]         ; 00507a24 | s_one_005901a8+1 | s_e_005901a8+3
    ADD ESI,0x2                         ; 00507a27
    MOV byte ptr [EDI + 0x1],AL         ; 00507a2a
    ADD EDI,0x2                         ; 00507a2d
    CMP AL,0x0                          ; 00507a30
    JNZ 0x00507a1c                      ; 00507a32
        ;   XREF to: 00507a1c (CONDITIONAL_JUMP)  ; LAB_00507a1c
    POP EDI                             ; 00507a34
        ;   Label: LAB_00507a34
    JMP 0x005071fa                      ; 00507a35
        ;   XREF to: 005071fa (UNCONDITIONAL_JUMP)  ; LAB_005071fa
    MOV dword ptr [EBP + 0x161280],0x0  ; 00507a3a
        ;   Label: LAB_00507a3a
    JMP 0x0050722f                      ; 00507a44
        ;   XREF to: 0050722f (UNCONDITIONAL_JUMP)  ; LAB_0050722f
    MOV EDI,dword ptr [0x005c1144]      ; 00507a49 | DAT_005c1144
        ;   Label: LAB_00507a49
    PUSH EDI                            ; 00507a4f
    CALL core_terrain.cpp_CTerrain_free_FUN_005492f0 ; 00507a50
        ;   XREF to: 005492f0 (UNCONDITIONAL_CALL)  ; void core_terrain.cpp_CTerrain_free_FUN_005492f0(CTerrain * this_ptr)
    ADD ESP,0x4                         ; 00507a55
    MOV dword ptr [EBP + 0x15a8c0],0x0  ; 00507a58
    JMP 0x00507266                      ; 00507a62
        ;   XREF to: 00507266 (UNCONDITIONAL_JUMP)  ; LAB_00507266
    PUSH 0x5                            ; 00507a67
        ;   Label: LAB_00507a67
    PUSH 0x5901e9                       ; 00507a69 | = "mauso"
    LEA EAX,[ESP + 0x108]               ; 00507a6e
    PUSH EAX                            ; 00507a75
    MOV dword ptr [EBP + 0x15aad0],0x0  ; 00507a76
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507a80
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507a85
    TEST EAX,EAX                        ; 00507a88
    JNZ 0x00507a96                      ; 00507a8a
        ;   XREF to: 00507a96 (CONDITIONAL_JUMP)  ; LAB_00507a96
    MOV dword ptr [EBP + 0x15aad0],0x2  ; 00507a8c
    PUSH 0x4                            ; 00507a96
        ;   Label: LAB_00507a96
    PUSH 0x5901ef                       ; 00507a98 | = "h109"
    LEA EAX,[ESP + 0x108]               ; 00507a9d
    PUSH EAX                            ; 00507aa4
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507aa5
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507aaa
    TEST EAX,EAX                        ; 00507aad
    JNZ 0x00507ab7                      ; 00507aaf
        ;   XREF to: 00507ab7 (CONDITIONAL_JUMP)  ; LAB_00507ab7
    MOV dword ptr [EBP + 0x15aad0],EAX  ; 00507ab1
    PUSH 0x5                            ; 00507ab7
        ;   Label: LAB_00507ab7
    PUSH 0x5901f4                       ; 00507ab9 | = "smill"
    LEA EAX,[ESP + 0x108]               ; 00507abe
    PUSH EAX                            ; 00507ac5
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507ac6
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507acb
    TEST EAX,EAX                        ; 00507ace
    JNZ 0x00507adc                      ; 00507ad0
        ;   XREF to: 00507adc (CONDITIONAL_JUMP)  ; LAB_00507adc
    MOV dword ptr [EBP + 0x15aad0],0x3  ; 00507ad2
    PUSH 0x6                            ; 00507adc
        ;   Label: LAB_00507adc
    PUSH 0x5901fa                       ; 00507ade | = "pier59"
    LEA EAX,[ESP + 0x108]               ; 00507ae3
    PUSH EAX                            ; 00507aea
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507aeb
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507af0
    TEST EAX,EAX                        ; 00507af3
    JNZ 0x00507afd                      ; 00507af5
        ;   XREF to: 00507afd (CONDITIONAL_JUMP)  ; LAB_00507afd
    MOV dword ptr [EBP + 0x15aad0],EAX  ; 00507af7
    PUSH 0x4                            ; 00507afd
        ;   Label: LAB_00507afd
    PUSH 0x590201                       ; 00507aff | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 00507b04
    PUSH EAX                            ; 00507b0b
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507b0c
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507b11
    TEST EAX,EAX                        ; 00507b14
    JNZ 0x00507b22                      ; 00507b16
        ;   XREF to: 00507b22 (CONDITIONAL_JUMP)  ; LAB_00507b22
    MOV dword ptr [EBP + 0x15aad0],0x3  ; 00507b18
    MOV dword ptr [EBP + 0x15aad4],0x0  ; 00507b22
        ;   Label: LAB_00507b22
    JMP 0x00507500                      ; 00507b2c
        ;   XREF to: 00507500 (UNCONDITIONAL_JUMP)  ; LAB_00507500
    PUSH 0x5                            ; 00507b31
        ;   Label: LAB_00507b31
    PUSH 0x59020a                       ; 00507b33 | = "mauso"
    LEA EAX,[ESP + 0x108]               ; 00507b38
    PUSH EAX                            ; 00507b3f
    MOV dword ptr [EBP + 0x15f294],0x2  ; 00507b40
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507b4a
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507b4f
    TEST EAX,EAX                        ; 00507b52
    JNZ 0x00507b60                      ; 00507b54
        ;   XREF to: 00507b60 (CONDITIONAL_JUMP)  ; LAB_00507b60
    MOV dword ptr [EBP + 0x15f294],0x8  ; 00507b56
    PUSH 0x4                            ; 00507b60
        ;   Label: LAB_00507b60
    PUSH 0x590210                       ; 00507b62 | = "h109"
    LEA EAX,[ESP + 0x108]               ; 00507b67
    PUSH EAX                            ; 00507b6e
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507b6f
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507b74
    TEST EAX,EAX                        ; 00507b77
    JNZ 0x00507b85                      ; 00507b79
        ;   XREF to: 00507b85 (CONDITIONAL_JUMP)  ; LAB_00507b85
    MOV dword ptr [EBP + 0x15f294],0x3  ; 00507b7b
    PUSH 0x5                            ; 00507b85
        ;   Label: LAB_00507b85
    PUSH 0x590215                       ; 00507b87 | = "smill"
    LEA EAX,[ESP + 0x108]               ; 00507b8c
    PUSH EAX                            ; 00507b93
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507b94
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507b99
    TEST EAX,EAX                        ; 00507b9c
    JNZ 0x00507baa                      ; 00507b9e
        ;   XREF to: 00507baa (CONDITIONAL_JUMP)  ; LAB_00507baa
    MOV dword ptr [EBP + 0x15f294],0x2  ; 00507ba0
    PUSH 0x6                            ; 00507baa
        ;   Label: LAB_00507baa
    PUSH 0x59021b                       ; 00507bac | = "pier59"
    LEA EAX,[ESP + 0x108]               ; 00507bb1
    PUSH EAX                            ; 00507bb8
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507bb9
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507bbe
    TEST EAX,EAX                        ; 00507bc1
    JNZ 0x00507bcf                      ; 00507bc3
        ;   XREF to: 00507bcf (CONDITIONAL_JUMP)  ; LAB_00507bcf
    MOV dword ptr [EBP + 0x15f294],0x7  ; 00507bc5
    PUSH 0x6                            ; 00507bcf
        ;   Label: LAB_00507bcf
    PUSH 0x590222                       ; 00507bd1 | = "castle"
    LEA EAX,[ESP + 0x108]               ; 00507bd6
    PUSH EAX                            ; 00507bdd
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507bde
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507be3
    TEST EAX,EAX                        ; 00507be6
    JNZ 0x00507bf4                      ; 00507be8
        ;   XREF to: 00507bf4 (CONDITIONAL_JUMP)  ; LAB_00507bf4
    MOV dword ptr [EBP + 0x15f294],0x2  ; 00507bea
    PUSH 0x4                            ; 00507bf4
        ;   Label: LAB_00507bf4
    PUSH 0x590229                       ; 00507bf6 | = "ndun"
    LEA EAX,[ESP + 0x108]               ; 00507bfb
    PUSH EAX                            ; 00507c02
    CALL crt_string.c__strnicmp_FUN_00564bc0 ; 00507c03
        ;   XREF to: 00564bc0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_00564bc0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00507c08
    TEST EAX,EAX                        ; 00507c0b
    JNZ 0x00507535                      ; 00507c0d
        ;   XREF to: 00507535 (CONDITIONAL_JUMP)  ; LAB_00507535
    MOV dword ptr [EBP + 0x15f294],0x8  ; 00507c13
    JMP 0x00507535                      ; 00507c1d
        ;   XREF to: 00507535 (UNCONDITIONAL_JUMP)  ; LAB_00507535
    MOV dword ptr [EBP + 0x15a894],0x0  ; 00507c22
        ;   Label: LAB_00507c22
    JMP 0x0050756a                      ; 00507c2c
        ;   XREF to: 0050756a (UNCONDITIONAL_JUMP)  ; LAB_0050756a
    MOV dword ptr [EBP + 0x15b028],0x0  ; 00507c31
        ;   Label: LAB_00507c31
    JMP 0x00507719                      ; 00507c3b
        ;   XREF to: 00507719 (UNCONDITIONAL_JUMP)  ; LAB_00507719
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 00507c40
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
        ;   Label: LAB_00507c40
    PUSH 0x0                            ; 00507c45
    PUSH 0x0                            ; 00507c47
    PUSH 0x590271                       ; 00507c49 | = "Warning!  No .GEO file.  Press any key"
    CALL engine_2d.c_drawText_FUN_00402600 ; 00507c4e
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 00507c53
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 00507c56
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 00507c5b
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 00507c60
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    JMP 0x0050782c                      ; 00507c65
        ;   XREF to: 0050782c (UNCONDITIONAL_JUMP)  ; LAB_0050782c
    PUSH EBP                            ; 00507c6a
        ;   Label: LAB_00507c6a
    CALL core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30 ; 00507c6b
        ;   XREF to: 00511b30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00511b30(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00507c70
    JMP 0x00507831                      ; 00507c73
        ;   XREF to: 00507831 (UNCONDITIONAL_JUMP)  ; LAB_00507831

