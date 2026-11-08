; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c90f0(undefined4 param_1,char *param_2)
;
;
; XREF[4]:
;   FUN_005c232c at 005c23cd
;   FUN_005cdb10 at 005cdb20
;   FUN_005cdf00 at 005cdf2e
;   FUN_005ce990 at 005ce99d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c90f0
        ;   Label: FUN_005c90f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c90f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c90f5
    TEST DH,0xff                        ; 005c90f9
    JZ 0x005c910a                       ; 005c90fc
        ;   XREF to: 005c910a (CONDITIONAL_JUMP)  ; LAB_005c910a
    MOV EBX,EDX                         ; 005c90fe
    MOV byte ptr [EAX + 0x1],DL         ; 005c9100
    SHR EBX,0x8                         ; 005c9103
    MOV byte ptr [EAX],BL               ; 005c9106
    POP EBX                             ; 005c9108
    RET                                 ; 005c9109
    MOV byte ptr [EAX],DL               ; 005c910a
        ;   Label: LAB_005c910a
    POP EBX                             ; 005c910c
    RET                                 ; 005c910d

