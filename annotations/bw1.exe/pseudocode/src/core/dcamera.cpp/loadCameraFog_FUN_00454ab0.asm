; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_loadCameraFog_FUN_00454ab0(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[2]:
;   core_set.cpp_FUN_0054d3c0 at 0054e060
;   core_setutil.cpp_C3DSCamera_load_FUN_0055c1b0 at 0055c392
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_005d7a27
;   TerminatedCString s_f_f_f_005d7a31
;   TerminatedCString s_f_f_005d7a3b
;   undefined4 DAT_005d7a42
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454ab0
        ;   Label: core_dcamera.cpp_loadCameraFog_FUN_00454ab0
    PUSH ESI                            ; 00454ab1
    SUB ESP,0x100                       ; 00454ab2
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00454ab8
    MOV ESI,dword ptr [ESP + 0x110]     ; 00454abf
    PUSH ESI                            ; 00454ac6
    PUSH 0xff                           ; 00454ac7
    LEA EAX,[ESP + 0x8]                 ; 00454acc
    PUSH EAX                            ; 00454ad0
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 00454ad1
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 00454ad6
    LEA EAX,[EBX + 0x8]                 ; 00454ad9
    PUSH EAX                            ; 00454adc
    LEA EAX,[EBX + 0x4]                 ; 00454add
    PUSH EAX                            ; 00454ae0
    PUSH EBX                            ; 00454ae1
    PUSH 0x5d7a27                       ; 00454ae2 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00454ae7
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00454ae8
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00454aed
    PUSH ESI                            ; 00454af0
    PUSH 0xff                           ; 00454af1
    LEA EAX,[ESP + 0x8]                 ; 00454af6
    PUSH EAX                            ; 00454afa
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 00454afb
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 00454b00
    LEA EAX,[EBX + 0x14]                ; 00454b03
    PUSH EAX                            ; 00454b06
    LEA EAX,[EBX + 0x10]                ; 00454b07
    PUSH EAX                            ; 00454b0a
    LEA EAX,[EBX + 0xc]                 ; 00454b0b
    PUSH EAX                            ; 00454b0e
    PUSH 0x5d7a31                       ; 00454b0f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00454b14
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00454b15
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00454b1a
    LEA EAX,[EBX + 0x1c]                ; 00454b1d
    PUSH EAX                            ; 00454b20
    LEA EAX,[EBX + 0x18]                ; 00454b21
    PUSH EAX                            ; 00454b24
    PUSH 0x5d7a3b                       ; 00454b25 | = "%f,%f\n"
    PUSH ESI                            ; 00454b2a
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00454b2b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x10                        ; 00454b30
    CMP dword ptr [ESP + 0x114],0x1a    ; 00454b33
    JGE 0x00454b4d                      ; 00454b3b
        ;   XREF to: 00454b4d (CONDITIONAL_JUMP)  ; LAB_00454b4d
    MOV dword ptr [EBX + 0x20],0x42480000 ; 00454b3d
    ADD ESP,0x100                       ; 00454b44
    POP ESI                             ; 00454b4a
    POP EBX                             ; 00454b4b
    RET                                 ; 00454b4c
    ADD EBX,0x20                        ; 00454b4d
        ;   Label: LAB_00454b4d
    PUSH EBX                            ; 00454b50
    PUSH 0x5d7a42                       ; 00454b51 | DAT_005d7a42
    PUSH ESI                            ; 00454b56
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00454b57
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00454b5c
    ADD ESP,0x100                       ; 00454b5f
    POP ESI                             ; 00454b65
    POP EBX                             ; 00454b66
    RET                                 ; 00454b67

