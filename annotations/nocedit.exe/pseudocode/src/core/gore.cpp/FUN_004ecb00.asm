; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004ecb00()
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004ee1e0 at 004ee267
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0062e322
;   TerminatedCString s_d_d_d_0062e32c
;   TerminatedCString s_f_f_f_0062e336
;   TerminatedCString s_d_d_d_d_d_d_d_0062e340
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecb00
        ;   Label: core_gore.cpp_FUN_004ecb00
    PUSH ESI                            ; 004ecb01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ecb02
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ecb06
    LEA EAX,[EBX + 0xc]                 ; 004ecb0a
    PUSH EAX                            ; 004ecb0d
    LEA EAX,[EBX + 0x8]                 ; 004ecb0e
    PUSH EAX                            ; 004ecb11
    LEA EAX,[EBX + 0x4]                 ; 004ecb12
    PUSH EAX                            ; 004ecb15
    PUSH 0x62e322                       ; 004ecb16 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ecb1b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ecb1c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004ecb21
    PUSH EBX                            ; 004ecb24
    LEA EAX,[EBX + 0x14]                ; 004ecb25
    PUSH EAX                            ; 004ecb28
    LEA EAX,[EBX + 0x10]                ; 004ecb29
    PUSH EAX                            ; 004ecb2c
    PUSH 0x62e32c                       ; 004ecb2d | = "%d,%d,%d\n"
    PUSH ESI                            ; 004ecb32
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ecb33
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004ecb38
    LEA EAX,[EBX + 0x1c]                ; 004ecb3b
    PUSH EAX                            ; 004ecb3e
    LEA EAX,[EBX + 0x20]                ; 004ecb3f
    PUSH EAX                            ; 004ecb42
    LEA EAX,[EBX + 0x18]                ; 004ecb43
    PUSH EAX                            ; 004ecb46
    PUSH 0x62e336                       ; 004ecb47 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ecb4c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ecb4d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004ecb52
    LEA EAX,[EBX + 0x40]                ; 004ecb55
    PUSH EAX                            ; 004ecb58
    LEA EAX,[EBX + 0x3c]                ; 004ecb59
    PUSH EAX                            ; 004ecb5c
    LEA EAX,[EBX + 0x38]                ; 004ecb5d
    PUSH EAX                            ; 004ecb60
    LEA EAX,[EBX + 0x34]                ; 004ecb61
    PUSH EAX                            ; 004ecb64
    LEA EAX,[EBX + 0x30]                ; 004ecb65
    PUSH EAX                            ; 004ecb68
    LEA EAX,[EBX + 0x2c]                ; 004ecb69
    PUSH EAX                            ; 004ecb6c
    ADD EBX,0x28                        ; 004ecb6d
    PUSH EBX                            ; 004ecb70
    PUSH 0x62e340                       ; 004ecb71 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004ecb76
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ecb77
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x24                        ; 004ecb7c
    POP ESI                             ; 004ecb7f
    POP EBX                             ; 004ecb80
    RET                                 ; 004ecb81

