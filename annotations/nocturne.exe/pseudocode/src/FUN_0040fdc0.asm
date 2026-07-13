; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040fdc0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00599940
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040fdc0
        ;   Label: FUN_0040fdc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040fdc1
    TEST byte ptr [ESP + 0xc],0x4       ; 0040fdc5
    JNZ 0x0040fde6                      ; 0040fdca
        ;   XREF to: 0040fde6 (CONDITIONAL_JUMP)  ; LAB_0040fde6
    PUSH 0x1                            ; 0040fdcc
    PUSH EBX                            ; 0040fdce
    CALL FUN_00409ea0                   ; 0040fdcf
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0040fdd4
    MOV DL,byte ptr [ESP + 0xc]         ; 0040fdd7
    MOV EBX,EAX                         ; 0040fddb
    TEST DL,0x2                         ; 0040fddd
    JNZ 0x0040fe01                      ; 0040fde0
        ;   XREF to: 0040fe01 (CONDITIONAL_JUMP)  ; LAB_0040fe01
    MOV EAX,EBX                         ; 0040fde2
    POP EBX                             ; 0040fde4
    RET                                 ; 0040fde5
    PUSH 0x599940                       ; 0040fde6 | DAT_00599940
        ;   Label: LAB_0040fde6
    PUSH EBX                            ; 0040fdeb
    CALL FUN_0056445f                   ; 0040fdec
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0040fdf1
    PUSH EAX                            ; 0040fdf4
    CALL FUN_00564486                   ; 0040fdf5
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0040fdfa
    MOV EAX,EBX                         ; 0040fdfd
    POP EBX                             ; 0040fdff
    RET                                 ; 0040fe00
    PUSH EAX                            ; 0040fe01
        ;   Label: LAB_0040fe01
    CALL FUN_00564494                   ; 0040fe02
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0040fe07
    MOV EAX,EBX                         ; 0040fe0a
    POP EBX                             ; 0040fe0c
    RET                                 ; 0040fe0d

