; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a3ad4(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   crt_stdio.c_fclose_FUN_005a3a90 at 005a3ac7
;   crt_unknown.c_FUN_005acecc at 005acf1c
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3bc0
;   crt_unknown.c_FUN_005a9950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3ad4
        ;   Label: crt_unknown.c_FUN_005a3ad4
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a3ad5
    PUSH EDX                            ; 005a3ad9
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a3ada
    PUSH EBX                            ; 005a3ade
    CALL crt_stdio.c_fclose_FUN_005a3bc0 ; 005a3adf
        ;   XREF to: 005a3bc0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3bc0()
    ADD ESP,0x8                         ; 005a3ae4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a3ae7
    PUSH ECX                            ; 005a3aeb
    MOV EBX,EAX                         ; 005a3aec
    CALL crt_unknown.c_FUN_005a9950     ; 005a3aee
        ;   XREF to: 005a9950 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9950()
    ADD ESP,0x4                         ; 005a3af3
    MOV EAX,EBX                         ; 005a3af6
    POP EBX                             ; 005a3af8
    RET                                 ; 005a3af9

