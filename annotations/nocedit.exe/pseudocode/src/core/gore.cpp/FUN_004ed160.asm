; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_gore_cpp_FUN_004ed160(void)
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004ee1e0 at 004ee22b
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0062e39e
;   TerminatedCString s_d_d_0062e3a8
;   TerminatedCString s_d_f_d_d_d_0062e3af
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ed160
        ;   Label: core_gore.cpp_FUN_004ed160
    PUSH ESI                            ; 004ed161
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ed162
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ed166
    LEA EAX,[EBX + 0xc]                 ; 004ed16a
    PUSH EAX                            ; 004ed16d
    LEA EAX,[EBX + 0x8]                 ; 004ed16e
    PUSH EAX                            ; 004ed171
    LEA EAX,[EBX + 0x4]                 ; 004ed172
    PUSH EAX                            ; 004ed175
    PUSH 0x62e39e                       ; 004ed176 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ed17b
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ed17c
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 004ed181
    LEA EAX,[EBX + 0x10]                ; 004ed184
    PUSH EAX                            ; 004ed187
    PUSH EBX                            ; 004ed188
    PUSH 0x62e3a8                       ; 004ed189 | = "%d,%d\n"
    PUSH ESI                            ; 004ed18e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ed18f
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x10                        ; 004ed194
    LEA EAX,[EBX + 0x24]                ; 004ed197
    PUSH EAX                            ; 004ed19a
    LEA EAX,[EBX + 0x20]                ; 004ed19b
    PUSH EAX                            ; 004ed19e
    LEA EAX,[EBX + 0x1c]                ; 004ed19f
    PUSH EAX                            ; 004ed1a2
    LEA EAX,[EBX + 0x18]                ; 004ed1a3
    PUSH EAX                            ; 004ed1a6
    ADD EBX,0x14                        ; 004ed1a7
    PUSH EBX                            ; 004ed1aa
    PUSH 0x62e3af                       ; 004ed1ab | = "%d,%f,%d,%d,%d\n"
    PUSH ESI                            ; 004ed1b0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004ed1b1
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x1c                        ; 004ed1b6
    POP ESI                             ; 004ed1b9
    POP EBX                             ; 004ed1ba
    RET                                 ; 004ed1bb

