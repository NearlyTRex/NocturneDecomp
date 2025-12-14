; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSLight_importS3D_FUN_00587710(C3DSLight * this_ptr, FILE * file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579ced
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057f739
;
; Referenced Globals:
;   TerminatedCString s_d_f_f_f_f_f_f_0064999f
;   TerminatedCString s_core_setutil_cpp_006499bd
;   TerminatedCString s_Can_t_parse_light_from_S_006499d1
;   TerminatedCString s_f_f_f_006499f2
;   TerminatedCString s_f_f_006499fd
;   TerminatedCString s_core_setutil_cpp_00649a05
;   TerminatedCString s_Unknown_light_type_00649a19
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_setutil.cpp_C3DSLight_reset_FUN_005879b0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587710
        ;   Label: core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
    PUSH ESI                            ; 00587711
    PUSH EDI                            ; 00587712
    MOV EBX,dword ptr [ESP + 0x10]      ; 00587713
    MOV ESI,dword ptr [ESP + 0x14]      ; 00587717
    PUSH EBX                            ; 0058771b
    CALL core_setutil.cpp_C3DSLight_reset_FUN_005879b0 ; 0058771c
        ;   XREF to: 005879b0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_reset_FUN_005879b0(C3DSLight * this_ptr)
    ADD ESP,0x4                         ; 00587721
    LEA EAX,[EBX + 0x11cc]              ; 00587724
    PUSH EAX                            ; 0058772a
    LEA EAX,[EBX + 0x11c8]              ; 0058772b
    PUSH EAX                            ; 00587731
    LEA EAX,[EBX + 0x11c4]              ; 00587732
    PUSH EAX                            ; 00587738
    LEA EAX,[EBX + 0x10c]               ; 00587739
    PUSH EAX                            ; 0058773f
    LEA EAX,[EBX + 0x108]               ; 00587740
    PUSH EAX                            ; 00587746
    LEA EAX,[EBX + 0x104]               ; 00587747
    PUSH EAX                            ; 0058774d
    PUSH EBX                            ; 0058774e
    LEA EAX,[EBX + 0x4]                 ; 0058774f
    PUSH EAX                            ; 00587752
    PUSH 0x64999f                       ; 00587753 | = "\"%[^\"]\",%d,%f,%f,%f,%f,%f,%f "
    PUSH ESI                            ; 00587758
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587759
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x28                        ; 0058775e
    CMP EAX,0x8                         ; 00587761
    JNZ 0x00587796                      ; 00587764
        ;   XREF to: 00587796 (CONDITIONAL_JUMP)  ; LAB_00587796
    MOV EDI,dword ptr [EBX]             ; 00587766
        ;   Label: LAB_00587766
    TEST EDI,EDI                        ; 00587768
    JZ 0x005877bb                       ; 0058776a
        ;   XREF to: 005877bb (CONDITIONAL_JUMP)  ; LAB_005877bb
    CMP EDI,0x1                         ; 0058776c
    JNZ 0x0058781d                      ; 0058776f
        ;   XREF to: 0058781d (CONDITIONAL_JUMP)  ; LAB_0058781d
    LEA EAX,[EBX + 0x11d4]              ; 00587775
    PUSH EAX                            ; 0058777b
    LEA EAX,[EBX + 0x11d0]              ; 0058777c
    PUSH EAX                            ; 00587782
    PUSH 0x6499fd                       ; 00587783 | = ",%f,%f\n"
    PUSH ESI                            ; 00587788
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00587789
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 0058778e
    CMP EAX,0x2                         ; 00587791
    JZ 0x005877e7                       ; 00587794
        ;   XREF to: 005877e7 (CONDITIONAL_JUMP)  ; LAB_005877e7
    MOV EDX,0x6499bd                    ; 00587796 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00587796
    MOV ECX,0x49d                       ; 0058779b
    PUSH 0x6499d1                       ; 005877a0 | = "Can't parse light from S3D file."
    MOV dword ptr [0x02f0ca48],EDX      ; 005877a5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005877ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005877b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005877b6
    JMP 0x00587766                      ; 005877b9
        ;   XREF to: 00587766 (UNCONDITIONAL_JUMP)  ; LAB_00587766
    LEA EAX,[EBX + 0x114]               ; 005877bb
        ;   Label: LAB_005877bb
    PUSH EAX                            ; 005877c1
    LEA EAX,[EBX + 0x118]               ; 005877c2
    PUSH EAX                            ; 005877c8
    LEA EAX,[EBX + 0x110]               ; 005877c9
    PUSH EAX                            ; 005877cf
    PUSH 0x6499f2                       ; 005877d0 | = ",%f,%f,%f\n"
    PUSH ESI                            ; 005877d5
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 005877d6
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 005877db
    CMP EAX,0x3                         ; 005877de
    JNZ 0x00587796                      ; 005877e1
        ;   XREF to: 00587796 (CONDITIONAL_JUMP)  ; LAB_00587796
    POP EDI                             ; 005877e3
        ;   Label: LAB_005877e3
    POP ESI                             ; 005877e4
    POP EBX                             ; 005877e5
    RET                                 ; 005877e6
    FLD float ptr [EBX + 0x11d0]        ; 005877e7
        ;   Label: LAB_005877e7
    FLDZ                                ; 005877ed
    FCOMPP                              ; 005877ef
    FNSTSW AX                           ; 005877f1
    SAHF                                ; 005877f3
    JBE 0x00587800                      ; 005877f4
        ;   XREF to: 00587800 (CONDITIONAL_JUMP)  ; LAB_00587800
    MOV dword ptr [EBX + 0x11d0],0x0    ; 005877f6
    FLD float ptr [EBX + 0x11d4]        ; 00587800
        ;   Label: LAB_00587800
    FLDZ                                ; 00587806
    FCOMPP                              ; 00587808
    FNSTSW AX                           ; 0058780a
    SAHF                                ; 0058780c
    JBE 0x005877e3                      ; 0058780d
        ;   XREF to: 005877e3 (CONDITIONAL_JUMP)  ; LAB_005877e3
    MOV dword ptr [EBX + 0x11d4],0x0    ; 0058780f
    POP EDI                             ; 00587819
    POP ESI                             ; 0058781a
    POP EBX                             ; 0058781b
    RET                                 ; 0058781c
    MOV EAX,0x649a05                    ; 0058781d | = "..\\core\\setutil.cpp"
        ;   Label: LAB_0058781d
    MOV EDX,0x4a9                       ; 00587822
    PUSH 0x649a19                       ; 00587827 | = "Unknown light type!"
    MOV [0x02f0ca48],EAX                ; 0058782c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00587831 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00587837
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058783c
    POP EDI                             ; 0058783f
    POP ESI                             ; 00587840
    POP EBX                             ; 00587841
    RET                                 ; 00587842

