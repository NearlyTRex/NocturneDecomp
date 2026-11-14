; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_loadCameraFog_FUN_00450c00(SFog *fog,_FILE *file_handle,int file_version)
;
; Parameters:
; SFog *           Stack[0x4]:4   fog
; _FILE *          Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   file_version
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[2]:
;   core_set.cpp_FUN_00532b80 at 00533820
;   core_setutil.cpp_C3DSCamera_load_FUN_00541b70 at 00541d52
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_005ba08e
;   TerminatedCString s_f_f_f_005ba098
;   TerminatedCString s_f_f_005ba0a2
;   undefined4 DAT_005ba0a9
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00450c00
        ;   Label: core_dcamera.cpp_loadCameraFog_FUN_00450c00
    PUSH ESI                            ; 00450c01
    SUB ESP,0x100                       ; 00450c02
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00450c08
    MOV ESI,dword ptr [ESP + 0x110]     ; 00450c0f
    PUSH ESI                            ; 00450c16
    PUSH 0xff                           ; 00450c17
    LEA EAX,[ESP + 0x8]                 ; 00450c1c
    PUSH EAX                            ; 00450c20
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00450c21
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00450c26
    LEA EAX,[EBX + 0x8]                 ; 00450c29
    PUSH EAX                            ; 00450c2c
    LEA EAX,[EBX + 0x4]                 ; 00450c2d
    PUSH EAX                            ; 00450c30
    PUSH EBX                            ; 00450c31
    PUSH 0x5ba08e                       ; 00450c32 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00450c37
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00450c38
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00450c3d
    PUSH ESI                            ; 00450c40
    PUSH 0xff                           ; 00450c41
    LEA EAX,[ESP + 0x8]                 ; 00450c46
    PUSH EAX                            ; 00450c4a
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00450c4b
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005a3f00(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 00450c50
    LEA EAX,[EBX + 0x14]                ; 00450c53
    PUSH EAX                            ; 00450c56
    LEA EAX,[EBX + 0x10]                ; 00450c57
    PUSH EAX                            ; 00450c5a
    LEA EAX,[EBX + 0xc]                 ; 00450c5b
    PUSH EAX                            ; 00450c5e
    PUSH 0x5ba098                       ; 00450c5f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00450c64
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00450c65
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x14                        ; 00450c6a
    LEA EAX,[EBX + 0x1c]                ; 00450c6d
    PUSH EAX                            ; 00450c70
    LEA EAX,[EBX + 0x18]                ; 00450c71
    PUSH EAX                            ; 00450c74
    PUSH 0x5ba0a2                       ; 00450c75 | = "%f,%f\n"
    PUSH ESI                            ; 00450c7a
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00450c7b
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x10                        ; 00450c80
    CMP dword ptr [ESP + 0x114],0x1a    ; 00450c83
    JGE 0x00450c9d                      ; 00450c8b
        ;   XREF to: 00450c9d (CONDITIONAL_JUMP)  ; LAB_00450c9d
    MOV dword ptr [EBX + 0x20],0x42480000 ; 00450c8d
    ADD ESP,0x100                       ; 00450c94
    POP ESI                             ; 00450c9a
    POP EBX                             ; 00450c9b
    RET                                 ; 00450c9c
    ADD EBX,0x20                        ; 00450c9d
        ;   Label: LAB_00450c9d
    PUSH EBX                            ; 00450ca0
    PUSH 0x5ba0a9                       ; 00450ca1 | DAT_005ba0a9
    PUSH ESI                            ; 00450ca6
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00450ca7
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0xc                         ; 00450cac
    ADD ESP,0x100                       ; 00450caf
    POP ESI                             ; 00450cb5
    POP EBX                             ; 00450cb6
    RET                                 ; 00450cb7

