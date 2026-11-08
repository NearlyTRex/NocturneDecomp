; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571fa0(int param_1)
;
;
; XREF[2]:
;   FUN_00570460 at 00570514
;   FUN_00573660 at 00573690
;
; Referenced Globals:
;   TerminatedCString s_Error_polling_hw_playbac_005f3ac3
;   undefined4 DAT_02c80650
;
; Called Functions:
;   FUN_00572030
;   FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571fa0
        ;   Label: FUN_00571fa0
    PUSH EDI                            ; 00571fa1
    PUSH EBP                            ; 00571fa2
    MOV EBP,ESP                         ; 00571fa3
    SUB ESP,0x10                        ; 00571fa5
    AND ESP,0xfffffff8                  ; 00571fa8
    MOV EBX,dword ptr [EBP + 0x10]      ; 00571fab
    CMP dword ptr [EBX + 0x60],0x0      ; 00571fae
    JZ 0x00571fc4                       ; 00571fb2
        ;   XREF to: 00571fc4 (CONDITIONAL_JUMP)  ; LAB_00571fc4
    MOV ECX,dword ptr [0x02c80650]      ; 00571fb4 | DAT_02c80650
    TEST ECX,ECX                        ; 00571fba
    JZ 0x00571fc4                       ; 00571fbc
        ;   XREF to: 00571fc4 (CONDITIONAL_JUMP)  ; LAB_00571fc4
    CMP dword ptr [EBX + 0x68],0x0      ; 00571fbe
    JNZ 0x00571fcc                      ; 00571fc2
        ;   XREF to: 00571fcc (CONDITIONAL_JUMP)  ; LAB_00571fcc
    XOR EAX,EAX                         ; 00571fc4
        ;   Label: LAB_00571fc4
    MOV ESP,EBP                         ; 00571fc6
    POP EBP                             ; 00571fc8
    POP EDI                             ; 00571fc9
    POP EBX                             ; 00571fca
    RET                                 ; 00571fcb
    PUSH EBX                            ; 00571fcc
        ;   Label: LAB_00571fcc
    MOV EDX,dword ptr [ECX]             ; 00571fcd
    PUSH ECX                            ; 00571fcf
    CALL dword ptr [EDX + 0x48]         ; 00571fd0
    MOV dword ptr [ESP + 0x10],EAX      ; 00571fd3
    MOV dword ptr [ESP + 0x14],EDX      ; 00571fd7
    FLD double ptr [ESP + 0x10]         ; 00571fdb
    ADD ESP,0x8                         ; 00571fdf
    FLDZ                                ; 00571fe2
    FXCH                                ; 00571fe4
    FSTP double ptr [ESP]               ; 00571fe6
    FCOMP double ptr [ESP]              ; 00571fe9
    FNSTSW AX                           ; 00571fec
    SAHF                                ; 00571fee
    JBE 0x0057200a                      ; 00571fef
        ;   XREF to: 0057200a (CONDITIONAL_JUMP)  ; LAB_0057200a
    MOV EDX,dword ptr [EBX + 0x68]      ; 00571ff1
    PUSH EDX                            ; 00571ff4
    PUSH 0x5f3ac3                       ; 00571ff5 | = "Error polling hw playback pos %s\n"
    CALL FUN_005773f0                   ; 00571ffa
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005773f0()
    ADD ESP,0x8                         ; 00571fff
    XOR EAX,EAX                         ; 00572002
    MOV ESP,EBP                         ; 00572004
    POP EBP                             ; 00572006
    POP EDI                             ; 00572007
    POP EBX                             ; 00572008
    RET                                 ; 00572009
    MOV EDI,dword ptr [ESP + 0x4]       ; 0057200a
        ;   Label: LAB_0057200a
    PUSH EDI                            ; 0057200e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0057200f
    PUSH EAX                            ; 00572013
    PUSH EBX                            ; 00572014
    CALL FUN_00572030                   ; 00572015
        ;   XREF to: 00572030 (UNCONDITIONAL_CALL)  ; undefined FUN_00572030()
    MOV EAX,0x1                         ; 0057201a
    ADD ESP,0xc                         ; 0057201f
    MOV ESP,EBP                         ; 00572022
    POP EBP                             ; 00572024
    POP EDI                             ; 00572025
    POP EBX                             ; 00572026
    RET                                 ; 00572027

