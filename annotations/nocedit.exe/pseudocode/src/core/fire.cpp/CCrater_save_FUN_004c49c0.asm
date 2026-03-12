; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_save_FUN_004c9380 at 004c93b0
;
; Referenced Globals:
;   TerminatedCString s_d_d_f_f_00629e98
;   TerminatedCString s_f_f_f_00629ea5
;   TerminatedCString s_f_f_f_00629eaf
;   TerminatedCString s_f_f_f_00629eb9
;   TerminatedCString s_f_f_f_00629ec3
;   TerminatedCString s_f_f_f_00629ecd
;   TerminatedCString s_f_f_f_00629ed7
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c49c0
        ;   Label: core_fire.cpp_CCrater_save_FUN_004c49c0
    PUSH ESI                            ; 004c49c1
    PUSH EDI                            ; 004c49c2
    PUSH EBP                            ; 004c49c3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004c49c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c49c8
    SUB ESP,0x8                         ; 004c49cc
    FLD float ptr [EBP + 0x18]          ; 004c49cf
    FSTP double ptr [ESP]               ; 004c49d2
    SUB ESP,0x8                         ; 004c49d5
    FLD float ptr [EBP + 0x8]           ; 004c49d8
    FSTP double ptr [ESP]               ; 004c49db
    MOV EDX,dword ptr [EBP + 0x4]       ; 004c49de
    PUSH EDX                            ; 004c49e1
    MOV ECX,dword ptr [EBP]             ; 004c49e2
    PUSH ECX                            ; 004c49e5
    PUSH 0x629e98                       ; 004c49e6 | = "%d,%d,%f,%f\n"
    PUSH ESI                            ; 004c49eb
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c49ec
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c49f1
    SUB ESP,0x8                         ; 004c49f4
    FLD float ptr [EBP + 0x14]          ; 004c49f7
    FSTP double ptr [ESP]               ; 004c49fa
    SUB ESP,0x8                         ; 004c49fd
    FLD float ptr [EBP + 0x10]          ; 004c4a00
    FSTP double ptr [ESP]               ; 004c4a03
    SUB ESP,0x8                         ; 004c4a06
    FLD float ptr [EBP + 0xc]           ; 004c4a09
    FSTP double ptr [ESP]               ; 004c4a0c
    PUSH 0x629ea5                       ; 004c4a0f | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4a14
    MOV EBX,EBP                         ; 004c4a15
    LEA EDI,[EBP + 0x24]                ; 004c4a17
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4a1a
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4a1f
    SUB ESP,0x8                         ; 004c4a22
        ;   Label: LAB_004c4a22
    FLD float ptr [EBX + 0x24]          ; 004c4a25
    FSTP double ptr [ESP]               ; 004c4a28
    SUB ESP,0x8                         ; 004c4a2b
    FLD float ptr [EBX + 0x20]          ; 004c4a2e
    FSTP double ptr [ESP]               ; 004c4a31
    SUB ESP,0x8                         ; 004c4a34
    FLD float ptr [EBX + 0x1c]          ; 004c4a37
    FSTP double ptr [ESP]               ; 004c4a3a
    PUSH 0x629eaf                       ; 004c4a3d | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4a42
    ADD EBX,0xc                         ; 004c4a43
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4a46
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4a4b
    CMP EBX,EDI                         ; 004c4a4e
    JNZ 0x004c4a22                      ; 004c4a50
        ;   XREF to: 004c4a22 (CONDITIONAL_JUMP)  ; LAB_004c4a22
    SUB ESP,0x8                         ; 004c4a52
    FLD float ptr [EBP + 0x48]          ; 004c4a55
    FSTP double ptr [ESP]               ; 004c4a58
    SUB ESP,0x8                         ; 004c4a5b
    FLD float ptr [EBP + 0x44]          ; 004c4a5e
    FSTP double ptr [ESP]               ; 004c4a61
    SUB ESP,0x8                         ; 004c4a64
    FLD float ptr [EBP + 0x40]          ; 004c4a67
    FSTP double ptr [ESP]               ; 004c4a6a
    PUSH 0x629eb9                       ; 004c4a6d | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4a72
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4a73
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4a78
    SUB ESP,0x8                         ; 004c4a7b
    FLD float ptr [EBP + 0x54]          ; 004c4a7e
    FSTP double ptr [ESP]               ; 004c4a81
    SUB ESP,0x8                         ; 004c4a84
    FLD float ptr [EBP + 0x50]          ; 004c4a87
    FSTP double ptr [ESP]               ; 004c4a8a
    SUB ESP,0x8                         ; 004c4a8d
    FLD float ptr [EBP + 0x4c]          ; 004c4a90
    FSTP double ptr [ESP]               ; 004c4a93
    PUSH 0x629ec3                       ; 004c4a96 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4a9b
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4a9c
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4aa1
    SUB ESP,0x8                         ; 004c4aa4
    FLD float ptr [EBP + 0x60]          ; 004c4aa7
    FSTP double ptr [ESP]               ; 004c4aaa
    SUB ESP,0x8                         ; 004c4aad
    FLD float ptr [EBP + 0x5c]          ; 004c4ab0
    FSTP double ptr [ESP]               ; 004c4ab3
    SUB ESP,0x8                         ; 004c4ab6
    FLD float ptr [EBP + 0x58]          ; 004c4ab9
    FSTP double ptr [ESP]               ; 004c4abc
    PUSH 0x629ecd                       ; 004c4abf | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4ac4
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4ac5
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4aca
    SUB ESP,0x8                         ; 004c4acd
    FLD float ptr [EBP + 0x6c]          ; 004c4ad0
    FSTP double ptr [ESP]               ; 004c4ad3
    SUB ESP,0x8                         ; 004c4ad6
    FLD float ptr [EBP + 0x68]          ; 004c4ad9
    FSTP double ptr [ESP]               ; 004c4adc
    SUB ESP,0x8                         ; 004c4adf
    FLD float ptr [EBP + 0x64]          ; 004c4ae2
    FSTP double ptr [ESP]               ; 004c4ae5
    PUSH 0x629ed7                       ; 004c4ae8 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004c4aed
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004c4aee
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004c4af3
    POP EBP                             ; 004c4af6
    POP EDI                             ; 004c4af7
    POP ESI                             ; 004c4af8
    POP EBX                             ; 004c4af9
    RET                                 ; 004c4afa

