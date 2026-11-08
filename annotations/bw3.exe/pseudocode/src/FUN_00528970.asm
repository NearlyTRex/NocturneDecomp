; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528970(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00529a70 at 0052b556
;
; Referenced Globals:
;   undefined4 DAT_005fba60
;   undefined4 DAT_01ed6808
;
; Called Functions:
;   FUN_00491b00
;   FUN_005288c0
;
; *****************************************************************************

section .text

    PUSH 0x64                           ; 00528970
        ;   Label: FUN_00528970
    MOV EDX,dword ptr [ESP + 0xc]       ; 00528972
    PUSH EDX                            ; 00528976
    MOV ECX,dword ptr [ESP + 0xc]       ; 00528977
    PUSH ECX                            ; 0052897b
    CALL FUN_005288c0                   ; 0052897c
        ;   XREF to: 005288c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005288c0()
    ADD ESP,0xc                         ; 00528981
    TEST EAX,EAX                        ; 00528984
    JNZ 0x00528991                      ; 00528986
        ;   XREF to: 00528991 (CONDITIONAL_JUMP)  ; LAB_00528991
    CMP dword ptr [0x01ed6808],0x0      ; 00528988 | DAT_01ed6808
    JNZ 0x00528992                      ; 0052898f
        ;   XREF to: 00528992 (CONDITIONAL_JUMP)  ; LAB_00528992
    RET                                 ; 00528991
        ;   Label: LAB_00528991
    PUSH EDI                            ; 00528992
        ;   Label: LAB_00528992
    PUSH ESI                            ; 00528993
    MOV ESI,dword ptr [ESP + 0x10]      ; 00528994
    PUSH ESI                            ; 00528998
    MOV EDI,dword ptr [0x005fba60]      ; 00528999 | DAT_005fba60
    PUSH EDI                            ; 0052899f
    CALL FUN_00491b00                   ; 005289a0
        ;   XREF to: 00491b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00491b00()
    ADD ESP,0x8                         ; 005289a5
    POP ESI                             ; 005289a8
    POP EDI                             ; 005289a9
    RET                                 ; 005289aa

