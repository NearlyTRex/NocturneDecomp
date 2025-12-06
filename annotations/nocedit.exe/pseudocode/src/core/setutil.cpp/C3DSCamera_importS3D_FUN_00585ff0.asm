; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0(C3DSCamera * this_ptr, FILE * file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 005791eb
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057f796
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_f_f_f_f_0064944f
;   TerminatedCString s_core_setutil_cpp_0064946d
;   TerminatedCString s_File_is_corrupt_in_C3DSC_00649481
;   TerminatedCString s_f_f_f_006494aa
;   TerminatedCString s_f_f_f_006494b4
;   TerminatedCString s_f_f_f_006494be
;   TerminatedCString s_f_f_f_006494c8
;   double DOUBLE_006494d3 = 0.5
;   double DOUBLE_006494db = 18
;   double DOUBLE_006494e3 = 11
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setutil.cpp_C3DSCamera_reset_FUN_005853b0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585ff0
        ;   Label: core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
    PUSH ESI                            ; 00585ff1
    PUSH EDI                            ; 00585ff2
    SUB ESP,0xc                         ; 00585ff3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00585ff6
    MOV ESI,dword ptr [ESP + 0x20]      ; 00585ffa
    PUSH EBX                            ; 00585ffe
    CALL core_setutil.cpp_C3DSCamera_reset_FUN_005853b0 ; 00585fff | void core_setutil.cpp_C3DSCamera_reset_FUN_005853b0(C3DSCamera * this_ptr)
        ;   XREF to: 005853b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00586004
    LEA EAX,[EBX + 0x144]               ; 00586007
    PUSH EAX                            ; 0058600d
    LEA EAX,[EBX + 0x110]               ; 0058600e
    PUSH EAX                            ; 00586014
    LEA EAX,[EBX + 0x114]               ; 00586015
    PUSH EAX                            ; 0058601b
    LEA EAX,[EBX + 0x10c]               ; 0058601c
    PUSH EAX                            ; 00586022
    LEA EAX,[EBX + 0x108]               ; 00586023
    PUSH EAX                            ; 00586029
    LEA EAX,[EBX + 0x104]               ; 0058602a
    PUSH EAX                            ; 00586030
    LEA EAX,[EBX + 0x100]               ; 00586031
    PUSH EAX                            ; 00586037
    PUSH EBX                            ; 00586038
    PUSH 0x64944f                       ; 00586039 | = "\"%[^\"]\",%f,%f,%f,%f,%f,%f,%f\n" | s_f_f_f_f_f_f_f_0064944f = "%[^"]",%f,%f,%f,%f,%f,%f,%f

    PUSH ESI                            ; 0058603e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 0058603f | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x28                        ; 00586044
    CMP EAX,0x8                         ; 00586047
    JZ 0x0058606f                       ; 0058604a | LAB_0058606f
        ;   XREF to: 0058606f (CONDITIONAL_JUMP)
    MOV EDX,0x64946d                    ; 0058604c | = "..\\core\\setutil.cpp" | s_core_setutil_cpp_0064946d = ..\core\setutil.cpp
    MOV ECX,0x1d3                       ; 00586051
    PUSH 0x649481                       ; 00586056 | = "File is corrupt in C3DSCamera::importS3D" | s_File_is_corrupt_in_C3DSC_00649481 = File is corrupt in C3DSCamera::importS3D
    MOV dword ptr [0x02f0ca48],EDX      ; 0058605b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00586061 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00586067 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058606c
    FLD float ptr [EBX + 0x144]         ; 0058606f
        ;   Label: LAB_0058606f
    FMUL double ptr [0x006494d3]        ; 00586075 | double DOUBLE_006494d3
    FPTAN                               ; 0058607b
    FSTP ST0                            ; 0058607d
    FDIVR double ptr [0x006494db]       ; 0058607f | double DOUBLE_006494db
    LEA EAX,[EBX + 0x130]               ; 00586085
    PUSH EAX                            ; 0058608b
    LEA EAX,[EBX + 0x124]               ; 0058608c
    PUSH EAX                            ; 00586092
    LEA EDI,[EBX + 0x118]               ; 00586093
    PUSH EDI                            ; 00586099
    PUSH 0x6494aa                       ; 0058609a | = "%f,%f,%f\n" | s_f_f_f_006494aa = %f,%f,%f

    PUSH ESI                            ; 0058609f
    FSTP float ptr [EBX + 0x144]        ; 005860a0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005860a6 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005860ab
    LEA EAX,[EBX + 0x134]               ; 005860ae
    PUSH EAX                            ; 005860b4
    LEA EAX,[EBX + 0x128]               ; 005860b5
    PUSH EAX                            ; 005860bb
    LEA EAX,[EBX + 0x11c]               ; 005860bc
    PUSH EAX                            ; 005860c2
    PUSH 0x6494b4                       ; 005860c3 | = "%f,%f,%f\n" | s_f_f_f_006494b4 = %f,%f,%f

    PUSH ESI                            ; 005860c8
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005860c9 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005860ce
    LEA EAX,[EBX + 0x138]               ; 005860d1
    PUSH EAX                            ; 005860d7
    LEA EAX,[EBX + 0x12c]               ; 005860d8
    PUSH EAX                            ; 005860de
    LEA EAX,[EBX + 0x120]               ; 005860df
    PUSH EAX                            ; 005860e5
    PUSH 0x6494be                       ; 005860e6 | = "%f,%f,%f\n" | s_f_f_f_006494be = %f,%f,%f

    PUSH ESI                            ; 005860eb
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005860ec | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 005860f1
    LEA EAX,[ESP + 0x8]                 ; 005860f4
    PUSH EAX                            ; 005860f8
    LEA EAX,[ESP + 0x8]                 ; 005860f9
    PUSH EAX                            ; 005860fd
    LEA EAX,[ESP + 0x8]                 ; 005860fe
    PUSH EAX                            ; 00586102
    PUSH 0x6494c8                       ; 00586103 | = "%f,%f,%f\n" | s_f_f_f_006494c8 = %f,%f,%f

    PUSH ESI                            ; 00586108
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00586109 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 0058610e
    LEA EAX,[EBX + 0x10c]               ; 00586111
    PUSH EAX                            ; 00586117
    PUSH EDI                            ; 00586118
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00586119 | void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0x144]         ; 0058611e
    ADD ESP,0x8                         ; 00586124
    FCOMP double ptr [0x006494e3]       ; 00586127 | double DOUBLE_006494e3
    FNSTSW AX                           ; 0058612d
    SAHF                                ; 0058612f
    JBE 0x00586139                      ; 00586130 | LAB_00586139
        ;   XREF to: 00586139 (CONDITIONAL_JUMP)
    ADD ESP,0xc                         ; 00586132
    POP EDI                             ; 00586135
    POP ESI                             ; 00586136
    POP EBX                             ; 00586137
    RET                                 ; 00586138
    MOV dword ptr [EBX + 0x140],0x0     ; 00586139
        ;   Label: LAB_00586139
    ADD ESP,0xc                         ; 00586143
    POP EDI                             ; 00586146
    POP ESI                             ; 00586147
    POP EBX                             ; 00586148
    RET                                 ; 00586149

