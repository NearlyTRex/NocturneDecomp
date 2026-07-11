; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b490(int param_1,undefined4 param_2)
;
;
; XREF[9]:
;   FUN_00412de0 at 00412ffe
;   FUN_004145f0 at 0041478b
;   FUN_00420a10 at 00420b35
;   FUN_0043c360 at 0043c4e3
;   FUN_004ab190 at 004ab326
;   FUN_004bca20 at 004bcbbb
;   FUN_004dc2d0 at 004dc4d6
;   FUN_00520b60 at 00520d15
;   FUN_00561cf0 at 00561e86
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b490
        ;   Label: FUN_0042b490
    FLD float ptr [EDX + 0x2dd0]        ; 0042b494
    FLDZ                                ; 0042b49a
    FCOMPP                              ; 0042b49c
    FNSTSW AX                           ; 0042b49e
    SAHF                                ; 0042b4a0
    JNC 0x0042b4a4                      ; 0042b4a1
        ;   XREF to: 0042b4a4 (CONDITIONAL_JUMP)  ; LAB_0042b4a4
    RET                                 ; 0042b4a3
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042b4a4
        ;   Label: LAB_0042b4a4
    PUSH ECX                            ; 0042b4a8
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0042b4a9
    PUSH EDX                            ; 0042b4af
    MOV dword ptr [EDX + 0x2dd0],0x3dcccccd ; 0042b4b0
    CALL dword ptr [EAX + 0x24]         ; 0042b4ba
    ADD ESP,0x8                         ; 0042b4bd
    RET                                 ; 0042b4c0

