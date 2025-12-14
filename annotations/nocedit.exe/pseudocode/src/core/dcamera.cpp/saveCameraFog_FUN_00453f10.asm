; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_saveCameraFog_FUN_00453f10(SFog * fog, FILE * file_handle)
;
; Parameters:
; SFog *           Stack[0x4]:4   fog
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[2]:
;   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 at 0057a35d
;   core_setutil.cpp_C3DSCamera_save_FUN_00585a40 at 00585c78
;
; Referenced Globals:
;   TerminatedCString s_fogR_fogG_fogB_0061a491
;   TerminatedCString s_d_d_d_0061a4a1
;   TerminatedCString s_fogVel_0061a4ab
;   TerminatedCString s_f_f_f_0061a4b3
;   TerminatedCString s_f_f_0061a4bd
;   TerminatedCString s_f_0061a4c4
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453f10
        ;   Label: core_dcamera.cpp_saveCameraFog_FUN_00453f10
    PUSH ESI                            ; 00453f11
    PUSH EDI                            ; 00453f12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00453f13
    MOV ESI,dword ptr [ESP + 0x14]      ; 00453f17
    PUSH 0x61a491                       ; 00453f1b | = "fogR,fogG,fogB\n"
    PUSH ESI                            ; 00453f20
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453f21
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00453f26
    MOV EDX,dword ptr [EBX + 0x8]       ; 00453f29
    PUSH EDX                            ; 00453f2c
    MOV ECX,dword ptr [EBX + 0x4]       ; 00453f2d
    PUSH ECX                            ; 00453f30
    MOV EDI,dword ptr [EBX]             ; 00453f31
    PUSH EDI                            ; 00453f33
    PUSH 0x61a4a1                       ; 00453f34 | = "%d,%d,%d\n"
    PUSH ESI                            ; 00453f39
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453f3a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00453f3f
    PUSH 0x61a4ab                       ; 00453f42 | = "fogVel\n"
    PUSH ESI                            ; 00453f47
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453f48
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x8                         ; 00453f4d
    SUB ESP,0x8                         ; 00453f50
    FLD float ptr [EBX + 0x14]          ; 00453f53
    FSTP double ptr [ESP]               ; 00453f56
    SUB ESP,0x8                         ; 00453f59
    FLD float ptr [EBX + 0x10]          ; 00453f5c
    FSTP double ptr [ESP]               ; 00453f5f
    SUB ESP,0x8                         ; 00453f62
    FLD float ptr [EBX + 0xc]           ; 00453f65
    FSTP double ptr [ESP]               ; 00453f68
    PUSH 0x61a4b3                       ; 00453f6b | = "%f,%f,%f\n"
    PUSH ESI                            ; 00453f70
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453f71
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x20                        ; 00453f76
    SUB ESP,0x8                         ; 00453f79
    FLD float ptr [EBX + 0x1c]          ; 00453f7c
    FSTP double ptr [ESP]               ; 00453f7f
    SUB ESP,0x8                         ; 00453f82
    FLD float ptr [EBX + 0x18]          ; 00453f85
    FSTP double ptr [ESP]               ; 00453f88
    PUSH 0x61a4bd                       ; 00453f8b | = "%f,%f\n"
    PUSH ESI                            ; 00453f90
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453f91
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x18                        ; 00453f96
    SUB ESP,0x8                         ; 00453f99
    FLD float ptr [EBX + 0x20]          ; 00453f9c
    FSTP double ptr [ESP]               ; 00453f9f
    PUSH 0x61a4c4                       ; 00453fa2 | = "%f\n"
    PUSH ESI                            ; 00453fa7
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00453fa8
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
    ADD ESP,0x10                        ; 00453fad
    POP EDI                             ; 00453fb0
    POP ESI                             ; 00453fb1
    POP EBX                             ; 00453fb2
    RET                                 ; 00453fb3

