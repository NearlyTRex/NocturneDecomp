; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_loadCameraFog_FUN_00447d10(int param_1,undefined4 param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[2]:
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507987
;   core_setutil.cpp_C3DSCamera_load_FUN_005144e0 at 005146c2
;
; Referenced Globals:
;   string s_%d,%d,%d_0057bb13
;   string s_%f,%f,%f_0057bb1d
;   string s_%f,%f_0057bb27
;   undefined4 DAT_0057bb2e
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447d10
        ;   Label: core_dcamera.cpp_loadCameraFog_FUN_00447d10
    PUSH ESI                            ; 00447d11
    SUB ESP,0x100                       ; 00447d12
    MOV EBX,dword ptr [ESP + 0x10c]     ; 00447d18
    MOV ESI,dword ptr [ESP + 0x110]     ; 00447d1f
    PUSH ESI                            ; 00447d26
    PUSH 0xff                           ; 00447d27
    LEA EAX,[ESP + 0x8]                 ; 00447d2c
    PUSH EAX                            ; 00447d30
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00447d31
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00447d36
    LEA EAX,[EBX + 0x8]                 ; 00447d39
    PUSH EAX                            ; 00447d3c
    LEA EAX,[EBX + 0x4]                 ; 00447d3d
    PUSH EAX                            ; 00447d40
    PUSH EBX                            ; 00447d41
    PUSH 0x57bb13                       ; 00447d42 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00447d47
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00447d48
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00447d4d
    PUSH ESI                            ; 00447d50
    PUSH 0xff                           ; 00447d51
    LEA EAX,[ESP + 0x8]                 ; 00447d56
    PUSH EAX                            ; 00447d5a
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 00447d5b
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 00447d60
    LEA EAX,[EBX + 0x14]                ; 00447d63
    PUSH EAX                            ; 00447d66
    LEA EAX,[EBX + 0x10]                ; 00447d67
    PUSH EAX                            ; 00447d6a
    LEA EAX,[EBX + 0xc]                 ; 00447d6b
    PUSH EAX                            ; 00447d6e
    PUSH 0x57bb1d                       ; 00447d6f | = "%f,%f,%f\n"
    PUSH ESI                            ; 00447d74
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00447d75
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 00447d7a
    LEA EAX,[EBX + 0x1c]                ; 00447d7d
    PUSH EAX                            ; 00447d80
    LEA EAX,[EBX + 0x18]                ; 00447d81
    PUSH EAX                            ; 00447d84
    PUSH 0x57bb27                       ; 00447d85 | = "%f,%f\n"
    PUSH ESI                            ; 00447d8a
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00447d8b
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 00447d90
    CMP dword ptr [ESP + 0x114],0x1a    ; 00447d93
    JGE 0x00447dad                      ; 00447d9b
        ;   XREF to: 00447dad (CONDITIONAL_JUMP)  ; LAB_00447dad
    MOV dword ptr [EBX + 0x20],0x42480000 ; 00447d9d
    ADD ESP,0x100                       ; 00447da4
    POP ESI                             ; 00447daa
    POP EBX                             ; 00447dab
    RET                                 ; 00447dac
    ADD EBX,0x20                        ; 00447dad
        ;   Label: LAB_00447dad
    PUSH EBX                            ; 00447db0
    PUSH 0x57bb2e                       ; 00447db1 | DAT_0057bb2e
    PUSH ESI                            ; 00447db6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 00447db7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 00447dbc
    ADD ESP,0x100                       ; 00447dbf
    POP ESI                             ; 00447dc5
    POP EBX                             ; 00447dc6
    RET                                 ; 00447dc7

