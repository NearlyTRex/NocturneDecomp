; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSCamera_save_FUN_00585a40(C3DSCamera * this_ptr, FILE * file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a512
;
; Referenced Globals:
;   TerminatedCString s_camera_name_00649353
;   TerminatedCString s_s_0064937c
;   TerminatedCString s_pos_00649380
;   TerminatedCString s_f_f_f_00649385
;   TerminatedCString s_orient_0064938f
;   TerminatedCString s_f_f_f_00649397
;   TerminatedCString s_fov_006493a1
;   TerminatedCString s_f_006493a6
;   TerminatedCString s_vmat_006493aa
;   TerminatedCString s_f_f_f_006493b0
;   TerminatedCString s_f_f_f_006493ba
;   TerminatedCString s_f_f_f_006493c4
;   TerminatedCString s_d_006493ce
;   TerminatedCString s_box_min_max_006493d2
;   TerminatedCString s_g_g_g_006493e0
;   ... and 3 more
;
; Called Functions:
;   core_dcamera.cpp_saveCameraFog_FUN_00453f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585a40
        ;   Label: core_setutil.cpp_C3DSCamera_save_FUN_00585a40
    PUSH ESI                            ; 00585a41
    PUSH EDI                            ; 00585a42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00585a43
    MOV ESI,dword ptr [ESP + 0x14]      ; 00585a47
    PUSH 0x649353                       ; 00585a4b | = "-- camera name ----------------------..."
    PUSH ESI                            ; 00585a50
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585a51
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585a56
    PUSH EBX                            ; 00585a59
    PUSH 0x64937c                       ; 00585a5a | = "%s\n"
    PUSH ESI                            ; 00585a5f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585a60
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00585a65
    PUSH 0x649380                       ; 00585a68 | = "pos\n"
    PUSH ESI                            ; 00585a6d
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585a6e
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585a73
    SUB ESP,0x8                         ; 00585a76
    FLD float ptr [EBX + 0x108]         ; 00585a79
    FSTP double ptr [ESP]               ; 00585a7f
    SUB ESP,0x8                         ; 00585a82
    FLD float ptr [EBX + 0x104]         ; 00585a85
    FSTP double ptr [ESP]               ; 00585a8b
    SUB ESP,0x8                         ; 00585a8e
    FLD float ptr [EBX + 0x100]         ; 00585a91
    FSTP double ptr [ESP]               ; 00585a97
    PUSH 0x649385                       ; 00585a9a | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585a9f
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585aa0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585aa5
    PUSH 0x64938f                       ; 00585aa8 | = "orient\n"
    PUSH ESI                            ; 00585aad
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585aae
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585ab3
    SUB ESP,0x8                         ; 00585ab6
    FLD float ptr [EBX + 0x110]         ; 00585ab9
    FSTP double ptr [ESP]               ; 00585abf
    SUB ESP,0x8                         ; 00585ac2
    FLD float ptr [EBX + 0x114]         ; 00585ac5
    FSTP double ptr [ESP]               ; 00585acb
    SUB ESP,0x8                         ; 00585ace
    FLD float ptr [EBX + 0x10c]         ; 00585ad1
    FSTP double ptr [ESP]               ; 00585ad7
    PUSH 0x649397                       ; 00585ada | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585adf
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585ae0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585ae5
    PUSH 0x6493a1                       ; 00585ae8 | = "fov\n"
    PUSH ESI                            ; 00585aed
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585aee
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585af3
    SUB ESP,0x8                         ; 00585af6
    FLD float ptr [EBX + 0x144]         ; 00585af9
    FSTP double ptr [ESP]               ; 00585aff
    PUSH 0x6493a6                       ; 00585b02 | = "%f\n"
    PUSH ESI                            ; 00585b07
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585b08
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00585b0d
    PUSH 0x6493aa                       ; 00585b10 | = "vmat\n"
    PUSH ESI                            ; 00585b15
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585b16
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585b1b
    SUB ESP,0x8                         ; 00585b1e
    FLD float ptr [EBX + 0x120]         ; 00585b21
    FSTP double ptr [ESP]               ; 00585b27
    SUB ESP,0x8                         ; 00585b2a
    FLD float ptr [EBX + 0x11c]         ; 00585b2d
    FSTP double ptr [ESP]               ; 00585b33
    SUB ESP,0x8                         ; 00585b36
    FLD float ptr [EBX + 0x118]         ; 00585b39
    FSTP double ptr [ESP]               ; 00585b3f
    PUSH 0x6493b0                       ; 00585b42 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585b47
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585b48
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585b4d
    SUB ESP,0x8                         ; 00585b50
    FLD float ptr [EBX + 0x12c]         ; 00585b53
    FSTP double ptr [ESP]               ; 00585b59
    SUB ESP,0x8                         ; 00585b5c
    FLD float ptr [EBX + 0x128]         ; 00585b5f
    FSTP double ptr [ESP]               ; 00585b65
    SUB ESP,0x8                         ; 00585b68
    FLD float ptr [EBX + 0x124]         ; 00585b6b
    FSTP double ptr [ESP]               ; 00585b71
    PUSH 0x6493ba                       ; 00585b74 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585b79
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585b7a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585b7f
    SUB ESP,0x8                         ; 00585b82
    FLD float ptr [EBX + 0x138]         ; 00585b85
    FSTP double ptr [ESP]               ; 00585b8b
    SUB ESP,0x8                         ; 00585b8e
    FLD float ptr [EBX + 0x134]         ; 00585b91
    FSTP double ptr [ESP]               ; 00585b97
    SUB ESP,0x8                         ; 00585b9a
    FLD float ptr [EBX + 0x130]         ; 00585b9d
    FSTP double ptr [ESP]               ; 00585ba3
    PUSH 0x6493c4                       ; 00585ba6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00585bab
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585bac
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585bb1
    MOV EDX,dword ptr [EBX + 0x150]     ; 00585bb4
    PUSH EDX                            ; 00585bba
    PUSH 0x6493ce                       ; 00585bbb | = "%d\n"
    PUSH ESI                            ; 00585bc0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585bc1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x150]     ; 00585bc6
    ADD ESP,0xc                         ; 00585bcc
    TEST ECX,ECX                        ; 00585bcf
    JZ 0x00585c70                       ; 00585bd1
        ;   XREF to: 00585c70 (CONDITIONAL_JUMP)  ; LAB_00585c70
    PUSH 0x6493d2                       ; 00585bd7 | = "box min, max\n"
        ;   Label: LAB_00585bd7
    PUSH ESI                            ; 00585bdc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585bdd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585be2
    SUB ESP,0x8                         ; 00585be5
    FLD float ptr [EBX + 0x184]         ; 00585be8
    FSTP double ptr [ESP]               ; 00585bee
    SUB ESP,0x8                         ; 00585bf1
    FLD float ptr [EBX + 0x180]         ; 00585bf4
    FSTP double ptr [ESP]               ; 00585bfa
    SUB ESP,0x8                         ; 00585bfd
    FLD float ptr [EBX + 0x17c]         ; 00585c00
    FSTP double ptr [ESP]               ; 00585c06
    PUSH 0x6493e0                       ; 00585c09 | = "%g,%g,%g\n"
    PUSH ESI                            ; 00585c0e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585c0f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585c14
    SUB ESP,0x8                         ; 00585c17
    FLD float ptr [EBX + 0x190]         ; 00585c1a
    FSTP double ptr [ESP]               ; 00585c20
    SUB ESP,0x8                         ; 00585c23
    FLD float ptr [EBX + 0x18c]         ; 00585c26
    FSTP double ptr [ESP]               ; 00585c2c
    SUB ESP,0x8                         ; 00585c2f
    FLD float ptr [EBX + 0x188]         ; 00585c32
    FSTP double ptr [ESP]               ; 00585c38
    PUSH 0x6493ea                       ; 00585c3b | = "%g,%g,%g\n"
    PUSH ESI                            ; 00585c40
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585c41
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00585c46
    PUSH 0x6493f4                       ; 00585c49 | = "reverbPreset\n"
    PUSH ESI                            ; 00585c4e
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585c4f
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00585c54
    MOV EDI,dword ptr [EBX + 0x178]     ; 00585c57
    PUSH EDI                            ; 00585c5d
    PUSH 0x649402                       ; 00585c5e | = "%d\n"
    PUSH ESI                            ; 00585c63
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00585c64
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0xc                         ; 00585c69
    POP EDI                             ; 00585c6c
    POP ESI                             ; 00585c6d
    POP EBX                             ; 00585c6e
    RET                                 ; 00585c6f
    PUSH ESI                            ; 00585c70
        ;   Label: LAB_00585c70
    LEA EAX,[EBX + 0x154]               ; 00585c71
    PUSH EAX                            ; 00585c77
    CALL core_dcamera.cpp_saveCameraFog_FUN_00453f10 ; 00585c78
        ;   XREF to: 00453f10 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle)
    ADD ESP,0x8                         ; 00585c7d
    JMP 0x00585bd7                      ; 00585c80
        ;   XREF to: 00585bd7 (UNCONDITIONAL_JUMP)  ; LAB_00585bd7

