; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00563cc0(undefined4 param_1)
;
;
; XREF[89]:
;   FUN_00403bd0 at 00403c3b
;   FUN_00410a80 at 00410b58
;   FUN_00416d40 at 004170ee
;   FUN_00417c90 at 00417d18
;   FUN_00418630 at 0041870f
;   FUN_00421040 at 004210af
;   FUN_004219f0 at 00421a15
;   FUN_00438210 at 00438226
;   FUN_00438320 at 0043836a
;   FUN_0043a470 at 0043a4b3
;   ... and 79 more
;
; Called Functions:
;   FUN_0056a0c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00563cc0
        ;   Label: FUN_00563cc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563cc4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00563cc8
    PUSH EAX                            ; 00563ccc
    MOV DH,DL                           ; 00563ccd
    SHL EDX,0x8                         ; 00563ccf
    MOV DL,DH                           ; 00563cd2
    SHL EDX,0x8                         ; 00563cd4
    MOV DL,DH                           ; 00563cd7
    CALL FUN_0056a0c0                   ; 00563cd9
        ;   XREF to: 0056a0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a0c0()
    POP EAX                             ; 00563cde
    RET                                 ; 00563cdf

