; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_fopen_FUN_0056568c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[22]:
;   FUN_004a3b90 at 004a3c6a
;   FUN_004a4170 at 004a4541
;   FUN_004a4b50 at 004a4bdf
;   FUN_004c85f0 at 004c8646
;   FUN_004f2990 at 004f2a65
;   FUN_004f4b30 at 004f4b3f
;   FUN_004f7980 at 004f79a5
;   FUN_004f7ae0 at 004f7b60
;   FUN_004f8240 at 004f82a2
;   FUN_004f8570 at 004f85c1
;   ... and 12 more
;
; Called Functions:
;   FUN_00565630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056568c
        ;   Label: crt_stdio.c_fopen_FUN_0056568c
    PUSH 0x0                            ; 0056568d
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056568f
    PUSH EDX                            ; 00565693
    MOV EBX,dword ptr [ESP + 0x10]      ; 00565694
    PUSH EBX                            ; 00565698
    CALL FUN_00565630                   ; 00565699
        ;   XREF to: 00565630 (UNCONDITIONAL_CALL)  ; undefined FUN_00565630()
    ADD ESP,0xc                         ; 0056569e
    POP EBX                             ; 005656a1
    RET                                 ; 005656a2

