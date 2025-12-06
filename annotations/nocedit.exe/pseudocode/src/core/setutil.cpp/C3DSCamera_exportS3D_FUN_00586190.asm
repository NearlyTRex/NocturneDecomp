; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190(C3DSCamera * this_ptr, FILE * file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0 at 0057a1ed
;
; Referenced Globals:
;   TerminatedCString s_s_g_g_g_g_g_g_g_006494eb
;   TerminatedCString s_g_g_g_00649506
;   TerminatedCString s_g_g_g_00649510
;   TerminatedCString s_g_g_g_0064951a
;   TerminatedCString s_g_g_g_00649524
;   double g_S3DProjectionScale = 18
;   double DOUBLE_0064953b = 2
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586190
        ;   Label: core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
    PUSH ESI                            ; 00586191
    MOV EBX,dword ptr [ESP + 0xc]       ; 00586192
    MOV ESI,dword ptr [ESP + 0x10]      ; 00586196
    CMP dword ptr [EBX + 0x140],0x0     ; 0058619a
    JZ 0x005861ad                       ; 005861a1 | LAB_005861ad
        ;   XREF to: 005861ad (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x144],0x41280000 ; 005861a3
    FLD float ptr [EBX + 0x144]         ; 005861ad
        ;   Label: LAB_005861ad
    FDIVR double ptr [0x00649533]       ; 005861b3 | double g_S3DProjectionScale
    FLD1                                ; 005861b9
    FPATAN                              ; 005861bb
    FMUL double ptr [0x0064953b]        ; 005861bd | double DOUBLE_0064953b
    SUB ESP,0x8                         ; 005861c3
    FSTP double ptr [ESP]               ; 005861c6
    SUB ESP,0x8                         ; 005861c9
    FLD float ptr [EBX + 0x110]         ; 005861cc
    FSTP double ptr [ESP]               ; 005861d2
    SUB ESP,0x8                         ; 005861d5
    FLD float ptr [EBX + 0x114]         ; 005861d8
    FSTP double ptr [ESP]               ; 005861de
    SUB ESP,0x8                         ; 005861e1
    FLD float ptr [EBX + 0x10c]         ; 005861e4
    FSTP double ptr [ESP]               ; 005861ea
    SUB ESP,0x8                         ; 005861ed
    FLD float ptr [EBX + 0x108]         ; 005861f0
    FSTP double ptr [ESP]               ; 005861f6
    SUB ESP,0x8                         ; 005861f9
    FLD float ptr [EBX + 0x104]         ; 005861fc
    FSTP double ptr [ESP]               ; 00586202
    SUB ESP,0x8                         ; 00586205
    FLD float ptr [EBX + 0x100]         ; 00586208
    FSTP double ptr [ESP]               ; 0058620e
    PUSH EBX                            ; 00586211
    PUSH 0x6494eb                       ; 00586212 | = "\"%s\",%g,%g,%g,%g,%g,%g,%g\n" | s_s_g_g_g_g_g_g_g_006494eb = "%s",%g,%g,%g,%g,%g,%g,%g

    PUSH ESI                            ; 00586217
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00586218 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x44                        ; 0058621d
    SUB ESP,0x8                         ; 00586220
    FLD float ptr [EBX + 0x130]         ; 00586223
    FSTP double ptr [ESP]               ; 00586229
    SUB ESP,0x8                         ; 0058622c
    FLD float ptr [EBX + 0x124]         ; 0058622f
    FSTP double ptr [ESP]               ; 00586235
    SUB ESP,0x8                         ; 00586238
    FLD float ptr [EBX + 0x118]         ; 0058623b
    FSTP double ptr [ESP]               ; 00586241
    PUSH 0x649506                       ; 00586244 | = "%g,%g,%g\n" | s_g_g_g_00649506 = %g,%g,%g

    PUSH ESI                            ; 00586249
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058624a | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 0058624f
    SUB ESP,0x8                         ; 00586252
    FLD float ptr [EBX + 0x134]         ; 00586255
    FSTP double ptr [ESP]               ; 0058625b
    SUB ESP,0x8                         ; 0058625e
    FLD float ptr [EBX + 0x128]         ; 00586261
    FSTP double ptr [ESP]               ; 00586267
    SUB ESP,0x8                         ; 0058626a
    FLD float ptr [EBX + 0x11c]         ; 0058626d
    FSTP double ptr [ESP]               ; 00586273
    PUSH 0x649510                       ; 00586276 | = "%g,%g,%g\n" | s_g_g_g_00649510 = %g,%g,%g

    PUSH ESI                            ; 0058627b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0058627c | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 00586281
    SUB ESP,0x8                         ; 00586284
    FLD float ptr [EBX + 0x138]         ; 00586287
    FSTP double ptr [ESP]               ; 0058628d
    SUB ESP,0x8                         ; 00586290
    FLD float ptr [EBX + 0x12c]         ; 00586293
    FSTP double ptr [ESP]               ; 00586299
    SUB ESP,0x8                         ; 0058629c
    FLD float ptr [EBX + 0x120]         ; 0058629f
    FSTP double ptr [ESP]               ; 005862a5
    PUSH 0x64951a                       ; 005862a8 | = "%g,%g,%g\n" | s_g_g_g_0064951a = %g,%g,%g

    PUSH ESI                            ; 005862ad
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005862ae | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 005862b3
    SUB ESP,0x8                         ; 005862b6
    FLD float ptr [EBX + 0x108]         ; 005862b9
    FSTP double ptr [ESP]               ; 005862bf
    SUB ESP,0x8                         ; 005862c2
    FLD float ptr [EBX + 0x104]         ; 005862c5
    FSTP double ptr [ESP]               ; 005862cb
    SUB ESP,0x8                         ; 005862ce
    FLD float ptr [EBX + 0x100]         ; 005862d1
    FSTP double ptr [ESP]               ; 005862d7
    PUSH 0x649524                       ; 005862da | = "%g,%g,%g\n" | s_g_g_g_00649524 = %g,%g,%g

    PUSH ESI                            ; 005862df
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005862e0 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x20                        ; 005862e5
    POP ESI                             ; 005862e8
    POP EBX                             ; 005862e9
    RET                                 ; 005862ea

