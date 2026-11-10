; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005afcd4(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005afd40 at 005afd40
;
; Referenced Globals:
;   undefined4 DAT_02d261f0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afcd4
        ;   Label: crt_unknown.c_FUN_005afcd4
    PUSH ESI                            ; 005afcd5
    MOV EBX,dword ptr [0x02d261f0]      ; 005afcd6 | DAT_02d261f0
    TEST EBX,EBX                        ; 005afcdc
    JZ 0x005afd04                       ; 005afcde
        ;   XREF to: 005afd04 (CONDITIONAL_JUMP)  ; LAB_005afd04
    MOV EDX,dword ptr [EBX + 0xc]       ; 005afce0
        ;   Label: LAB_005afce0
    MOV ESI,dword ptr [EBX]             ; 005afce3
    TEST EDX,EDX                        ; 005afce5
    JZ 0x005afcf5                       ; 005afce7
        ;   XREF to: 005afcf5 (CONDITIONAL_JUMP)  ; LAB_005afcf5
    MOV ECX,dword ptr [EBX + 0x8]       ; 005afce9
    PUSH ECX                            ; 005afcec
    CALL crt_unknown.c_FUN_005a3770     ; 005afced
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005afcf2
    PUSH EBX                            ; 005afcf5
        ;   Label: LAB_005afcf5
    CALL crt_unknown.c_FUN_005a3770     ; 005afcf6
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005afcfb
    MOV EBX,ESI                         ; 005afcfe
    TEST ESI,ESI                        ; 005afd00
    JNZ 0x005afce0                      ; 005afd02
        ;   XREF to: 005afce0 (CONDITIONAL_JUMP)  ; LAB_005afce0
    POP ESI                             ; 005afd04
        ;   Label: LAB_005afd04
    POP EBX                             ; 005afd05
    RET                                 ; 005afd06

