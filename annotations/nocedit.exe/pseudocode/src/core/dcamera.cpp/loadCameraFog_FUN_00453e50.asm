; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_loadCameraFog_FUN_00453e50(SFog * fog, FILE * file_handle, int file_version)
;
; Parameters:
; SFog *           Stack[0x4]:4   fog
; FILE *           Stack[0x8]:4   file_handle
; int              Stack[0xc]:4   file_version
; Local Variables:
; undefined1       Stack[-0x108]:1  local_108
;
; XREF[2]:
;   core_set.cpp_CDemonSet_load_FUN_00569410 at 00569e97
;   core_setutil.cpp_C3DSCamera_load_FUN_00585420 at 00585602
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_0061a472
;   TerminatedCString s_f_f_f_0061a47c
;   TerminatedCString s_f_f_0061a486
;   TerminatedCString s_f_0061a48d
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453e50
        ;   Label: core_dcamera.cpp_loadCameraFog_FUN_00453e50
    PUSH ESI                            ; 00453e51
    SUB ESP,0x100                       ; 00453e52
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00453e58
    MOV ESI,dword ptr [ESP + 0x110]     ; 00453e5f
    PUSH ESI                            ; 00453e66
    PUSH 0xff                           ; 00453e67
    LEA EAX,[ESP + 0x8]                 ; 00453e6c
    PUSH EAX                            ; 00453e70
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00453e71 | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00453e76
    LEA EAX,[EBX + 0x8]                 ; 00453e79
    PUSH EAX                            ; 00453e7c
    LEA EAX,[EBX + 0x4]                 ; 00453e7d
    PUSH EAX                            ; 00453e80
    PUSH EBX                            ; 00453e81
    PUSH 0x61a472                       ; 00453e82 | = "%d,%d,%d\n" | s_d_d_d_0061a472 = %d,%d,%d

    PUSH ESI                            ; 00453e87
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00453e88 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00453e8d
    PUSH ESI                            ; 00453e90
    PUSH 0xff                           ; 00453e91
    LEA EAX,[ESP + 0x8]                 ; 00453e96
    PUSH EAX                            ; 00453e9a
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00453e9b | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00453ea0
    LEA EAX,[EBX + 0x14]                ; 00453ea3
    PUSH EAX                            ; 00453ea6
    LEA EAX,[EBX + 0x10]                ; 00453ea7
    PUSH EAX                            ; 00453eaa
    LEA EAX,[EBX + 0xc]                 ; 00453eab
    PUSH EAX                            ; 00453eae
    PUSH 0x61a47c                       ; 00453eaf | = "%f,%f,%f\n" | s_f_f_f_0061a47c = %f,%f,%f

    PUSH ESI                            ; 00453eb4
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00453eb5 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00453eba
    LEA EAX,[EBX + 0x1c]                ; 00453ebd
    PUSH EAX                            ; 00453ec0
    LEA EAX,[EBX + 0x18]                ; 00453ec1
    PUSH EAX                            ; 00453ec4
    PUSH 0x61a486                       ; 00453ec5 | = "%f,%f\n" | s_f_f_0061a486 = %f,%f

    PUSH ESI                            ; 00453eca
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00453ecb | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00453ed0
    CMP dword ptr [ESP + 0x114],0x1a    ; 00453ed3
    JGE 0x00453eed                      ; 00453edb | LAB_00453eed
        ;   XREF to: 00453eed (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x20],0x42480000 ; 00453edd
    ADD ESP,0x100                       ; 00453ee4
    POP ESI                             ; 00453eea
    POP EBX                             ; 00453eeb
    RET                                 ; 00453eec
    ADD EBX,0x20                        ; 00453eed
        ;   Label: LAB_00453eed
    PUSH EBX                            ; 00453ef0
    PUSH 0x61a48d                       ; 00453ef1 | = "%f\n" | s_f_0061a48d = %f

    PUSH ESI                            ; 00453ef6
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00453ef7 | int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00453efc
    ADD ESP,0x100                       ; 00453eff
    POP ESI                             ; 00453f05
    POP EBX                             ; 00453f06
    RET                                 ; 00453f07

