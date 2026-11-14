; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004c86c0(CBloodSplat *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_gore.cpp_CGore_load_FUN_004c9e70 at 004c9ef7
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_005d9472
;   TerminatedCString s_d_d_d_005d947c
;   TerminatedCString s_f_f_f_005d9486
;   TerminatedCString s_d_d_d_d_d_d_d_005d9490
;
; Called Functions:
;   crt_stdio.c_fscanf_FUN_005b8100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c86c0
        ;   Label: core_gore.cpp_CBloodSplat_load_FUN_004c86c0
    PUSH ESI                            ; 004c86c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c86c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c86c6
    LEA EAX,[EBX + 0xc]                 ; 004c86ca
    PUSH EAX                            ; 004c86cd
    LEA EAX,[EBX + 0x8]                 ; 004c86ce
    PUSH EAX                            ; 004c86d1
    LEA EAX,[EBX + 0x4]                 ; 004c86d2
    PUSH EAX                            ; 004c86d5
    PUSH 0x5d9472                       ; 004c86d6 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c86db
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004c86dc
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004c86e1
    PUSH EBX                            ; 004c86e4
    LEA EAX,[EBX + 0x14]                ; 004c86e5
    PUSH EAX                            ; 004c86e8
    LEA EAX,[EBX + 0x10]                ; 004c86e9
    PUSH EAX                            ; 004c86ec
    PUSH 0x5d947c                       ; 004c86ed | = "%d,%d,%d\n"
    PUSH ESI                            ; 004c86f2
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004c86f3
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004c86f8
    LEA EAX,[EBX + 0x1c]                ; 004c86fb
    PUSH EAX                            ; 004c86fe
    LEA EAX,[EBX + 0x20]                ; 004c86ff
    PUSH EAX                            ; 004c8702
    LEA EAX,[EBX + 0x18]                ; 004c8703
    PUSH EAX                            ; 004c8706
    PUSH 0x5d9486                       ; 004c8707 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c870c
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004c870d
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004c8712
    LEA EAX,[EBX + 0x40]                ; 004c8715
    PUSH EAX                            ; 004c8718
    LEA EAX,[EBX + 0x3c]                ; 004c8719
    PUSH EAX                            ; 004c871c
    LEA EAX,[EBX + 0x38]                ; 004c871d
    PUSH EAX                            ; 004c8720
    LEA EAX,[EBX + 0x34]                ; 004c8721
    PUSH EAX                            ; 004c8724
    LEA EAX,[EBX + 0x30]                ; 004c8725
    PUSH EAX                            ; 004c8728
    LEA EAX,[EBX + 0x2c]                ; 004c8729
    PUSH EAX                            ; 004c872c
    ADD EBX,0x28                        ; 004c872d
    PUSH EBX                            ; 004c8730
    PUSH 0x5d9490                       ; 004c8731 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004c8736
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 004c8737
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x24                        ; 004c873c
    POP ESI                             ; 004c873f
    POP EBX                             ; 004c8740
    RET                                 ; 004c8741

