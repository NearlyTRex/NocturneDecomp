; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004e4fa0(CBloodSplat *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_gore.cpp_CGore_load_FUN_004e6680 at 004e6707
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005e4055
;   TerminatedCString s_d_d_d_005e405f
;   TerminatedCString s_f_f_f_005e4069
;   TerminatedCString s_d_d_d_d_d_d_d_005e4073
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4fa0
        ;   Label: core_gore.cpp_CBloodSplat_load_FUN_004e4fa0
    PUSH ESI                            ; 004e4fa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e4fa2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e4fa6
    LEA EAX,[EBX + 0xc]                 ; 004e4faa
    PUSH EAX                            ; 004e4fad
    LEA EAX,[EBX + 0x8]                 ; 004e4fae
    PUSH EAX                            ; 004e4fb1
    LEA EAX,[EBX + 0x4]                 ; 004e4fb2
    PUSH EAX                            ; 004e4fb5
    PUSH 0x5e4055                       ; 004e4fb6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e4fbb
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004e4fbc
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004e4fc1
    PUSH EBX                            ; 004e4fc4
    LEA EAX,[EBX + 0x14]                ; 004e4fc5
    PUSH EAX                            ; 004e4fc8
    LEA EAX,[EBX + 0x10]                ; 004e4fc9
    PUSH EAX                            ; 004e4fcc
    PUSH 0x5e405f                       ; 004e4fcd | = "%d,%d,%d\n"
    PUSH ESI                            ; 004e4fd2
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004e4fd3
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004e4fd8
    LEA EAX,[EBX + 0x1c]                ; 004e4fdb
    PUSH EAX                            ; 004e4fde
    LEA EAX,[EBX + 0x20]                ; 004e4fdf
    PUSH EAX                            ; 004e4fe2
    LEA EAX,[EBX + 0x18]                ; 004e4fe3
    PUSH EAX                            ; 004e4fe6
    PUSH 0x5e4069                       ; 004e4fe7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004e4fec
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004e4fed
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004e4ff2
    LEA EAX,[EBX + 0x40]                ; 004e4ff5
    PUSH EAX                            ; 004e4ff8
    LEA EAX,[EBX + 0x3c]                ; 004e4ff9
    PUSH EAX                            ; 004e4ffc
    LEA EAX,[EBX + 0x38]                ; 004e4ffd
    PUSH EAX                            ; 004e5000
    LEA EAX,[EBX + 0x34]                ; 004e5001
    PUSH EAX                            ; 004e5004
    LEA EAX,[EBX + 0x30]                ; 004e5005
    PUSH EAX                            ; 004e5008
    LEA EAX,[EBX + 0x2c]                ; 004e5009
    PUSH EAX                            ; 004e500c
    ADD EBX,0x28                        ; 004e500d
    PUSH EBX                            ; 004e5010
    PUSH 0x5e4073                       ; 004e5011 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004e5016
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004e5017
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005c04b0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 004e501c
    POP ESI                             ; 004e501f
    POP EBX                             ; 004e5020
    RET                                 ; 004e5021

