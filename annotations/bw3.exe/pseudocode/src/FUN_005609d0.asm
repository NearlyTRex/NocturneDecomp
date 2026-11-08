; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005609d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; XREF[27]:
;   FUN_00408c60 at 00408c76
;   FUN_0040cab0 at 0040cbfc
;   FUN_0040f840 at 0040f880
;   FUN_00410490 at 00411065
;   FUN_00421300 at 004214ac
;   FUN_00424550 at 00424c50
;   FUN_0042cd70 at 0042cffb
;   FUN_0045c040 at 0045c080
;   FUN_00486d40 at 004870dd
;   FUN_0048a420 at 0048ae9a
;   ... and 17 more
;
; Called Functions:
;   FUN_0055f020
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 005609d0
        ;   Label: FUN_005609d0
    PUSH 0x0                            ; 005609d4
    PUSH 0x0                            ; 005609d6
    PUSH dword ptr [EAX + 0x8]          ; 005609d8
    PUSH dword ptr [EAX + 0x4]          ; 005609db
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005609de
    PUSH dword ptr [EAX]                ; 005609e2
    PUSH EDX                            ; 005609e4
    MOV ECX,dword ptr [ESP + 0x20]      ; 005609e5
    PUSH ECX                            ; 005609e9
    CALL FUN_0055f020                   ; 005609ea
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f020()
    ADD ESP,0x1c                        ; 005609ef
    RET                                 ; 005609f2

