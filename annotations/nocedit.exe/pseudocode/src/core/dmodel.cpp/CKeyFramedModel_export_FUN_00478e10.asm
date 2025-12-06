; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel * this_ptr, char * output_filename)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   output_filename
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047daa3
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0061f9f9
;   TerminatedCString s_wt_0061fa0c
;   TerminatedCString s_wt_0061fa0f
;   TerminatedCString s_models_0061fa12
;   TerminatedCString s_core_dmodel_cpp_0061fa19
;   TerminatedCString s_Can_t_create_demon_model_0061fa2c
;   TerminatedCString s_KFM_version_0061fa48
;   TerminatedCString s_d_0061fa59
;   TerminatedCString s_vertexCount_polyCount_te_0061fa5d
;   TerminatedCString s_d_d_d_d_d_0061fa99
;   TerminatedCString s_useCollisionListFlag_0061faa9
;   TerminatedCString s_d_0061fac2
;   TerminatedCString s_transparentPixelFlag_0061fac6
;   TerminatedCString s_d_0061fadf
;   TerminatedCString s_disableBackfaceCulling_0061fae3
;   ... and 20 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;   engine_dosio.c_getFile_FUN_00481a50
;   shape_memdbg.cpp_closeFile_FUN_0050f9b0
;   shape_memdbg.cpp_openFile_FUN_0050f7a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478e10
        ;   Label: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
    PUSH ESI                            ; 00478e11
    PUSH EDI                            ; 00478e12
    PUSH EBP                            ; 00478e13
    SUB ESP,0x10                        ; 00478e14
    MOV DL,0x3a                         ; 00478e17
    MOV ESI,dword ptr [ESP + 0x28]      ; 00478e19
    MOV AL,byte ptr [ESI]               ; 00478e1d
        ;   Label: LAB_00478e1d
    CMP AL,DL                           ; 00478e1f
    JZ 0x00478e35                       ; 00478e21 | LAB_00478e35
        ;   XREF to: 00478e35 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00478e23
    JZ 0x00478e33                       ; 00478e25 | LAB_00478e33
        ;   XREF to: 00478e33 (CONDITIONAL_JUMP)
    INC ESI                             ; 00478e27
    MOV AL,byte ptr [ESI]               ; 00478e28
    CMP AL,DL                           ; 00478e2a
    JZ 0x00478e35                       ; 00478e2c | LAB_00478e35
        ;   XREF to: 00478e35 (CONDITIONAL_JUMP)
    INC ESI                             ; 00478e2e
    CMP AL,0x0                          ; 00478e2f
    JNZ 0x00478e1d                      ; 00478e31 | LAB_00478e1d
        ;   XREF to: 00478e1d (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00478e33
        ;   Label: LAB_00478e33
    TEST ESI,ESI                        ; 00478e35
        ;   Label: LAB_00478e35
    JNZ 0x00478e5f                      ; 00478e37 | LAB_00478e5f
        ;   XREF to: 00478e5f (CONDITIONAL_JUMP)
    MOV DL,0x5c                         ; 00478e39
    MOV ESI,dword ptr [ESP + 0x28]      ; 00478e3b
    MOV AL,byte ptr [ESI]               ; 00478e3f
        ;   Label: LAB_00478e3f
    CMP AL,DL                           ; 00478e41
    JZ 0x00478e57                       ; 00478e43 | LAB_00478e57
        ;   XREF to: 00478e57 (CONDITIONAL_JUMP)
    CMP AL,0x0                          ; 00478e45
    JZ 0x00478e55                       ; 00478e47 | LAB_00478e55
        ;   XREF to: 00478e55 (CONDITIONAL_JUMP)
    INC ESI                             ; 00478e49
    MOV AL,byte ptr [ESI]               ; 00478e4a
    CMP AL,DL                           ; 00478e4c
    JZ 0x00478e57                       ; 00478e4e | LAB_00478e57
        ;   XREF to: 00478e57 (CONDITIONAL_JUMP)
    INC ESI                             ; 00478e50
    CMP AL,0x0                          ; 00478e51
    JNZ 0x00478e3f                      ; 00478e53 | LAB_00478e3f
        ;   XREF to: 00478e3f (CONDITIONAL_JUMP)
    SUB ESI,ESI                         ; 00478e55
        ;   Label: LAB_00478e55
    TEST ESI,ESI                        ; 00478e57
        ;   Label: LAB_00478e57
    JZ 0x00479015                       ; 00478e59 | LAB_00479015
        ;   XREF to: 00479015 (CONDITIONAL_JUMP)
    PUSH 0x569                          ; 00478e5f
        ;   Label: LAB_00478e5f
    PUSH 0x61f9f9                       ; 00478e64 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061f9f9 = ..\core\dmodel.cpp
    PUSH 0x61fa0c                       ; 00478e69 | = "wt" | s_wt_0061fa0c = wt
    PUSH 0x0                            ; 00478e6e
    MOV ECX,dword ptr [ESP + 0x38]      ; 00478e70
    PUSH ECX                            ; 00478e74
    CALL shape_memdbg.cpp_openFile_FUN_0050f7a0 ; 00478e75 | FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, ...)
        ;   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 00478e7a
    ADD ESP,0x14                        ; 00478e7c
    TEST EDI,EDI                        ; 00478e7f
        ;   Label: LAB_00478e7f
    JNZ 0x00478eab                      ; 00478e81 | LAB_00478eab
        ;   XREF to: 00478eab (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x28]      ; 00478e83
    PUSH EBP                            ; 00478e87
    MOV EBX,0x61fa19                    ; 00478e88 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061fa19 = ..\core\dmodel.cpp
    MOV ESI,0x56d                       ; 00478e8d
    PUSH 0x61fa2c                       ; 00478e92 | = "Can't create demon model %s" | s_Can_t_create_demon_model_0061fa2c = Can't create demon model %s
    MOV dword ptr [0x02f0ca48],EBX      ; 00478e97 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00478e9d | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00478ea3 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478ea8
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478eab
        ;   Label: LAB_00478eab
    MOV EDX,dword ptr [EAX + 0x5698]    ; 00478eaf
    XOR EBX,EBX                         ; 00478eb5
    TEST EDX,EDX                        ; 00478eb7
    JNZ 0x00479033                      ; 00478eb9 | LAB_00479033
        ;   XREF to: 00479033 (CONDITIONAL_JUMP)
    PUSH 0x61fa48                       ; 00478ebf | = "// .KFM version\n" | s_KFM_version_0061fa48 = // .KFM version

        ;   Label: LAB_00478ebf
    PUSH EDI                            ; 00478ec4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478ec5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478eca
    PUSH 0x8                            ; 00478ecd
    PUSH 0x61fa59                       ; 00478ecf | = "%d\n" | s_d_0061fa59 = %d

    PUSH EDI                            ; 00478ed4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478ed5 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00478eda
    PUSH 0x61fa5d                       ; 00478edd | = "// vertexCount,polyCount,textureCount..." | s_vertexCount_polyCount_te_0061fa5d = // vertexCount,polyCount,textureCount,partCount,frameCount

    PUSH EDI                            ; 00478ee2
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478ee3 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478ee8
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478eeb
    MOV ECX,dword ptr [EAX + 0x100]     ; 00478eef
    PUSH ECX                            ; 00478ef5
    MOV ESI,dword ptr [EAX + 0x5584]    ; 00478ef6
    PUSH ESI                            ; 00478efc
    MOV EBP,dword ptr [EAX + 0x120]     ; 00478efd
    PUSH EBP                            ; 00478f03
    MOV EDX,dword ptr [EAX + 0x110]     ; 00478f04
    PUSH EDX                            ; 00478f0a
    MOV ECX,dword ptr [EAX + 0x104]     ; 00478f0b
    PUSH ECX                            ; 00478f11
    PUSH 0x61fa99                       ; 00478f12 | = "%d,%d,%d,%d,%d\n" | s_d_d_d_d_d_0061fa99 = %d,%d,%d,%d,%d

    PUSH EDI                            ; 00478f17
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f18 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x1c                        ; 00478f1d
    PUSH 0x61faa9                       ; 00478f20 | = "// useCollisionListFlag\n" | s_useCollisionListFlag_0061faa9 = // useCollisionListFlag

    PUSH EDI                            ; 00478f25
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f26 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478f2b
    PUSH EBX                            ; 00478f2e
    PUSH 0x61fac2                       ; 00478f2f | = "%d\n" | s_d_0061fac2 = %d

    PUSH EDI                            ; 00478f34
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f35 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00478f3a
    PUSH 0x61fac6                       ; 00478f3d | = "// transparentPixelFlag\n" | s_transparentPixelFlag_0061fac6 = // transparentPixelFlag

    PUSH EDI                            ; 00478f42
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f43 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478f48
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478f4b
    MOV EBX,dword ptr [EAX + 0x569c]    ; 00478f4f
    PUSH EBX                            ; 00478f55
    PUSH 0x61fadf                       ; 00478f56 | = "%d\n" | s_d_0061fadf = %d

    PUSH EDI                            ; 00478f5b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f5c | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00478f61
    PUSH 0x61fae3                       ; 00478f64 | = "// disableBackfaceCulling\n" | s_disableBackfaceCulling_0061fae3 = // disableBackfaceCulling

    PUSH EDI                            ; 00478f69
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f6a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478f6f
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478f72
    MOV ESI,dword ptr [EAX + 0x56a0]    ; 00478f76
    PUSH ESI                            ; 00478f7c
    PUSH 0x61fafe                       ; 00478f7d | = "%d\n" | s_d_0061fafe = %d

    PUSH EDI                            ; 00478f82
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478f83 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00478f88
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478f8b
    CMP dword ptr [EAX + 0x11c],0x0     ; 00478f8f
    SETNZ BL                            ; 00478f96
    PUSH 0x61fb02                       ; 00478f99 | = "// envMapListFlag\n" | s_envMapListFlag_0061fb02 = // envMapListFlag

    AND EBX,0xff                        ; 00478f9e
    PUSH EDI                            ; 00478fa4
    MOV dword ptr [ESP + 0x8],EBX       ; 00478fa5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478fa9 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478fae
    PUSH EBX                            ; 00478fb1
    PUSH 0x61fb15                       ; 00478fb2 | = "%d\n" | s_d_0061fb15 = %d

    PUSH EDI                            ; 00478fb7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478fb8 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00478fbd
    PUSH 0x61fb19                       ; 00478fc0 | = "// vertex list: x,y,z\n" | s_vertex_list_x_y_z_0061fb19 = // vertex list: x,y,z

    PUSH EDI                            ; 00478fc5
    XOR ESI,ESI                         ; 00478fc6
    XOR EBP,EBP                         ; 00478fc8
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00478fca | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00478fcf
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478fd2
        ;   Label: LAB_00478fd2
    MOV EBX,dword ptr [ESP + 0x24]      ; 00478fd6
    MOV EDX,dword ptr [EAX + 0x100]     ; 00478fda
    MOV EBX,dword ptr [EBX + 0x104]     ; 00478fe0
    IMUL EBX,EDX                        ; 00478fe6
    CMP ESI,EBX                         ; 00478fe9
    JGE 0x0047903d                      ; 00478feb | LAB_0047903d
        ;   XREF to: 0047903d (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX + 0x10c]     ; 00478fed
    MOV EAX,dword ptr [EBX + EBP*0x1 + 0x8] ; 00478ff3
    PUSH EAX                            ; 00478ff7
    MOV EDX,dword ptr [EBX + EBP*0x1 + 0x4] ; 00478ff8
    PUSH EDX                            ; 00478ffc
    MOV ECX,dword ptr [EBX + EBP*0x1]   ; 00478ffd
    PUSH ECX                            ; 00479000
    PUSH 0x61fb30                       ; 00479001 | = "%d,%d,%d\n" | s_d_d_d_0061fb30 = %d,%d,%d

    PUSH EDI                            ; 00479006
    ADD EBP,0xc                         ; 00479007
    INC ESI                             ; 0047900a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047900b | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00479010
    JMP 0x00478fd2                      ; 00479013 | LAB_00478fd2
        ;   XREF to: 00478fd2 (UNCONDITIONAL_JUMP)
    PUSH 0x61fa0f                       ; 00479015 | = "wt" | s_wt_0061fa0f = wt
        ;   Label: LAB_00479015
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0047901a
    PUSH EDX                            ; 0047901e
    PUSH 0x61fa12                       ; 0047901f | = "models" | s_models_0061fa12 = models
    CALL engine_dosio.c_getFile_FUN_00481a50 ; 00479024 | FILE * engine_dosio.c_getFile_FUN_00481a50(char * directory, char * filename, char * mode)
        ;   XREF to: 00481a50 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 00479029
    ADD ESP,0xc                         ; 0047902b
    JMP 0x00478e7f                      ; 0047902e | LAB_00478e7f
        ;   XREF to: 00478e7f (UNCONDITIONAL_JUMP)
    MOV EBX,0x1                         ; 00479033
        ;   Label: LAB_00479033
    JMP 0x00478ebf                      ; 00479038 | LAB_00478ebf
        ;   XREF to: 00478ebf (UNCONDITIONAL_JUMP)
    PUSH 0x61fb3a                       ; 0047903d | = "// poly list: textureIndex, n, verts(..." | s_poly_list_textureIndex_n_0061fb3a = // poly list: textureIndex, n, verts(index,x2s,y2s)

        ;   Label: LAB_0047903d
    PUSH EDI                            ; 00479042
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479043 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00479048
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047904b
    XOR ECX,ECX                         ; 0047904f
    MOV EBX,dword ptr [EAX + 0x110]     ; 00479051
    MOV dword ptr [ESP + 0xc],ECX       ; 00479057
    TEST EBX,EBX                        ; 0047905b
    JLE 0x0047910f                      ; 0047905d | LAB_0047910f
        ;   XREF to: 0047910f (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],ECX       ; 00479063
    MOV dword ptr [ESP + 0x4],ECX       ; 00479067
    MOV EBP,dword ptr [ESP + 0x24]      ; 0047906b
        ;   Label: LAB_0047906b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047906f
    MOV EBP,dword ptr [EBP + 0x114]     ; 00479073
    MOV EBX,dword ptr [ESP + 0x24]      ; 00479079
    ADD EBP,EAX                         ; 0047907d
    MOV ECX,dword ptr [ESP + 0x4]       ; 0047907f
    MOV EBX,dword ptr [EBX + 0x118]     ; 00479083
    MOV EDX,dword ptr [EBP + 0x4]       ; 00479089
    ADD EBX,ECX                         ; 0047908c
    PUSH EDX                            ; 0047908e
    MOV ESI,dword ptr [EBX]             ; 0047908f
    PUSH ESI                            ; 00479091
    PUSH 0x61fb6f                       ; 00479092 | = "%d,%d" | s_d_d_0061fb6f = %d,%d
    PUSH EDI                            ; 00479097
    XOR ESI,ESI                         ; 00479098
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047909a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x4]       ; 0047909f
    ADD ESP,0x10                        ; 004790a2
    TEST EAX,EAX                        ; 004790a5
    JLE 0x004790d0                      ; 004790a7 | LAB_004790d0
        ;   XREF to: 004790d0 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 004790a9
    MOV EAX,dword ptr [EBX + 0x20]      ; 004790ab
        ;   Label: LAB_004790ab
    PUSH EAX                            ; 004790ae
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004790af
    PUSH EDX                            ; 004790b2
    MOV ECX,dword ptr [EBX + 0x18]      ; 004790b3
    PUSH ECX                            ; 004790b6
    PUSH 0x61fb75                       ; 004790b7 | = ", %d,%d,%d" | s_d_d_d_0061fb75 = , %d,%d,%d
    PUSH EDI                            ; 004790bc
    ADD EBX,0xc                         ; 004790bd
    INC ESI                             ; 004790c0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004790c1 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x4]       ; 004790c6
    ADD ESP,0x14                        ; 004790c9
    CMP ESI,EAX                         ; 004790cc
    JL 0x004790ab                       ; 004790ce | LAB_004790ab
        ;   XREF to: 004790ab (CONDITIONAL_JUMP)
    PUSH 0x61fb80                       ; 004790d0 | = "\n" | s_anon_0061fb80 =

        ;   Label: LAB_004790d0
    PUSH EDI                            ; 004790d5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004790d6 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004790db
    MOV EBX,dword ptr [ESP + 0x4]       ; 004790de
    MOV ESI,dword ptr [ESP + 0x8]       ; 004790e2
    MOV EBP,dword ptr [ESP + 0xc]       ; 004790e6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004790ea
    ADD EBX,0x4                         ; 004790ee
    ADD ESI,0x48                        ; 004790f1
    INC EBP                             ; 004790f4
    MOV EDX,dword ptr [EAX + 0x110]     ; 004790f5
    MOV dword ptr [ESP + 0x4],EBX       ; 004790fb
    MOV dword ptr [ESP + 0x8],ESI       ; 004790ff
    MOV dword ptr [ESP + 0xc],EBP       ; 00479103
    CMP EBP,EDX                         ; 00479107
    JL 0x0047906b                       ; 00479109 | LAB_0047906b
        ;   XREF to: 0047906b (CONDITIONAL_JUMP)
    CMP dword ptr [ESP],0x0             ; 0047910f
        ;   Label: LAB_0047910f
    JZ 0x00479170                       ; 00479113 | LAB_00479170
        ;   XREF to: 00479170 (CONDITIONAL_JUMP)
    PUSH 0x61fb82                       ; 00479115 | = "// envMapOpacity list\n" | s_envMapOpacity_list_0061fb82 = // envMapOpacity list

    PUSH EDI                            ; 0047911a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047911b | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00479120
    MOV EAX,dword ptr [ESP + 0x24]      ; 00479123
    MOV EBX,dword ptr [EAX + 0x110]     ; 00479127
    XOR ESI,ESI                         ; 0047912d
    TEST EBX,EBX                        ; 0047912f
    JLE 0x00479170                      ; 00479131 | LAB_00479170
        ;   XREF to: 00479170 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x24]      ; 00479133
        ;   Label: LAB_00479133
    MOV EBX,dword ptr [EBX + 0x11c]     ; 00479137
    MOV BL,byte ptr [ESI + EBX*0x1]     ; 0047913d
    AND EBX,0xff                        ; 00479140
    PUSH EBX                            ; 00479146
    PUSH 0x61fb99                       ; 00479147 | = "%d\n" | s_d_0061fb99 = %d

    PUSH EDI                            ; 0047914c
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047914d | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00479152
    MOV EAX,dword ptr [ESP + 0x24]      ; 00479155
    INC ESI                             ; 00479159
    CMP ESI,dword ptr [EAX + 0x110]     ; 0047915a
    JL 0x00479133                       ; 00479160 | LAB_00479133
        ;   XREF to: 00479133 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00479162
    LEA EDX,[EDX]                       ; 00479168
    MOV EAX,EAX                         ; 0047916e
    PUSH 0x61fb9d                       ; 00479170 | = "// texture list\n" | s_texture_list_0061fb9d = // texture list

        ;   Label: LAB_00479170
    PUSH EDI                            ; 00479175
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00479176 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047917b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0047917e
    MOV ECX,dword ptr [EAX + 0x120]     ; 00479182
    XOR EBX,EBX                         ; 00479188
    TEST ECX,ECX                        ; 0047918a
    JLE 0x004791c0                      ; 0047918c | LAB_004791c0
        ;   XREF to: 004791c0 (CONDITIONAL_JUMP)
    LEA ESI,[EAX + 0x12c]               ; 0047918e
    PUSH ESI                            ; 00479194
        ;   Label: LAB_00479194
    PUSH 0x61fbae                       ; 00479195 | = "%s\n" | s_s_0061fbae = %s

    PUSH EDI                            ; 0047919a
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0047919b | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004791a0
    MOV EAX,dword ptr [ESP + 0x24]      ; 004791a3
    INC EBX                             ; 004791a7
    MOV EBP,dword ptr [EAX + 0x120]     ; 004791a8
    ADD ESI,0x48                        ; 004791ae
    CMP EBX,EBP                         ; 004791b1
    JL 0x00479194                       ; 004791b3 | LAB_00479194
        ;   XREF to: 00479194 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004791b5
    LEA EDX,[EDX]                       ; 004791bb
    MOV EBX,EBX                         ; 004791be
    PUSH 0x61fbb2                       ; 004791c0 | = "// part list (vertexCount, polyCount)\n" | s_part_list_vertexCount_po_0061fbb2 = // part list (vertexCount, polyCount)

        ;   Label: LAB_004791c0
    PUSH EDI                            ; 004791c5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004791c6 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004791cb
    MOV EAX,dword ptr [ESP + 0x24]      ; 004791ce
    MOV EDX,dword ptr [EAX + 0x5584]    ; 004791d2
    XOR ESI,ESI                         ; 004791d8
    TEST EDX,EDX                        ; 004791da
    JLE 0x00479210                      ; 004791dc | LAB_00479210
        ;   XREF to: 00479210 (CONDITIONAL_JUMP)
    MOV EBX,EAX                         ; 004791de
    MOV ECX,dword ptr [EBX + 0x558c]    ; 004791e0
        ;   Label: LAB_004791e0
    PUSH ECX                            ; 004791e6
    MOV EBP,dword ptr [EBX + 0x5588]    ; 004791e7
    PUSH EBP                            ; 004791ed
    PUSH 0x61fbd9                       ; 004791ee | = "%d,%d\n" | s_d_d_0061fbd9 = %d,%d

    PUSH EDI                            ; 004791f3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004791f4 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004791f9
    MOV EBP,dword ptr [ESP + 0x24]      ; 004791fc
    INC ESI                             ; 00479200
    MOV EAX,dword ptr [EBP + 0x5584]    ; 00479201
    ADD EBX,0x8                         ; 00479207
    CMP ESI,EAX                         ; 0047920a
    JL 0x004791e0                       ; 0047920c | LAB_004791e0
        ;   XREF to: 004791e0 (CONDITIONAL_JUMP)
    MOV EAX,EAX                         ; 0047920e
    TEST byte ptr [EDI + 0xc],0x20      ; 00479210
        ;   Label: LAB_00479210
    JNZ 0x00479231                      ; 00479214 | LAB_00479231
        ;   XREF to: 00479231 (CONDITIONAL_JUMP)
    PUSH 0x5e5                          ; 00479216
        ;   Label: LAB_00479216
    PUSH 0x61fc0d                       ; 0047921b | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061fc0d = ..\core\dmodel.cpp
    PUSH EDI                            ; 00479220
    CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0 ; 00479221 | int shape_memdbg.cpp_closeFile_FUN_0050f9b0(FILE * file_ptr, char * source_file, int line_number)
        ;   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00479226
    ADD ESP,0x10                        ; 00479229
    POP EBP                             ; 0047922c
    POP EDI                             ; 0047922d
    POP ESI                             ; 0047922e
    POP EBX                             ; 0047922f
    RET                                 ; 00479230
    MOV EBX,dword ptr [ESP + 0x28]      ; 00479231
        ;   Label: LAB_00479231
    PUSH EBX                            ; 00479235
    MOV EDX,0x61fbe0                    ; 00479236 | = "..\\core\\dmodel.cpp" | s_core_dmodel_cpp_0061fbe0 = ..\core\dmodel.cpp
    MOV ECX,0x5e1                       ; 0047923b
    PUSH 0x61fbf3                       ; 00479240 | = "Error writing model to %s" | s_Error_writing_model_to_s_0061fbf3 = Error writing model to %s
    MOV dword ptr [0x02f0ca48],EDX      ; 00479245 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0047924b | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00479251 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00479256
    JMP 0x00479216                      ; 00479259 | LAB_00479216
        ;   XREF to: 00479216 (UNCONDITIONAL_JUMP)

