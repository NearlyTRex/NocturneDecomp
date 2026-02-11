; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_gore_cpp_CBloodSplat_FUN_004ecb90(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_FUN_004ee290 at 004ee318
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_0062e356
;   TerminatedCString s_d_d_d_0062e360
;   TerminatedCString s_f_f_f_0062e36a
;   TerminatedCString s_d_d_d_d_d_d_d_0062e374
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecb90
        ;   Label: core_gore.cpp_CBloodSplat_FUN_004ecb90
    PUSH ESI                            ; 004ecb91
    PUSH EDI                            ; 004ecb92
    PUSH EBP                            ; 004ecb93
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ecb94
    MOV ESI,dword ptr [ESP + 0x18]      ; 004ecb98
    SUB ESP,0x8                         ; 004ecb9c
    FLD float ptr [EBX + 0xc]           ; 004ecb9f
    FSTP double ptr [ESP]               ; 004ecba2
    SUB ESP,0x8                         ; 004ecba5
    FLD float ptr [EBX + 0x8]           ; 004ecba8
    FSTP double ptr [ESP]               ; 004ecbab
    SUB ESP,0x8                         ; 004ecbae
    FLD float ptr [EBX + 0x4]           ; 004ecbb1
    FSTP double ptr [ESP]               ; 004ecbb4
    PUSH 0x62e356                       ; 004ecbb7 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ecbbc
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ecbbd
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004ecbc2
    MOV EDX,dword ptr [EBX]             ; 004ecbc5
    PUSH EDX                            ; 004ecbc7
    MOV ECX,dword ptr [EBX + 0x14]      ; 004ecbc8
    PUSH ECX                            ; 004ecbcb
    MOV EDI,dword ptr [EBX + 0x10]      ; 004ecbcc
    PUSH EDI                            ; 004ecbcf
    PUSH 0x62e360                       ; 004ecbd0 | = "%d,%d,%d\n"
    PUSH ESI                            ; 004ecbd5
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ecbd6
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 004ecbdb
    SUB ESP,0x8                         ; 004ecbde
    FLD float ptr [EBX + 0x1c]          ; 004ecbe1
    FSTP double ptr [ESP]               ; 004ecbe4
    SUB ESP,0x8                         ; 004ecbe7
    FLD float ptr [EBX + 0x20]          ; 004ecbea
    FSTP double ptr [ESP]               ; 004ecbed
    SUB ESP,0x8                         ; 004ecbf0
    FLD float ptr [EBX + 0x18]          ; 004ecbf3
    FSTP double ptr [ESP]               ; 004ecbf6
    PUSH 0x62e36a                       ; 004ecbf9 | = "%f,%f,%f\n"
    PUSH ESI                            ; 004ecbfe
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ecbff
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 004ecc04
    MOV EBP,dword ptr [EBX + 0x40]      ; 004ecc07
    PUSH EBP                            ; 004ecc0a
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004ecc0b
    PUSH EAX                            ; 004ecc0e
    MOV EDX,dword ptr [EBX + 0x38]      ; 004ecc0f
    PUSH EDX                            ; 004ecc12
    MOV ECX,dword ptr [EBX + 0x34]      ; 004ecc13
    PUSH ECX                            ; 004ecc16
    MOV EDI,dword ptr [EBX + 0x30]      ; 004ecc17
    PUSH EDI                            ; 004ecc1a
    MOV EBP,dword ptr [EBX + 0x2c]      ; 004ecc1b
    PUSH EBP                            ; 004ecc1e
    MOV EAX,dword ptr [EBX + 0x28]      ; 004ecc1f
    PUSH EAX                            ; 004ecc22
    PUSH 0x62e374                       ; 004ecc23 | = "%d,%d,%d,%d,%d,%d,%d\n"
    PUSH ESI                            ; 004ecc28
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004ecc29
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x24                        ; 004ecc2e
    POP EBP                             ; 004ecc31
    POP EDI                             ; 004ecc32
    POP ESI                             ; 004ecc33
    POP EBX                             ; 004ecc34
    RET                                 ; 004ecc35

