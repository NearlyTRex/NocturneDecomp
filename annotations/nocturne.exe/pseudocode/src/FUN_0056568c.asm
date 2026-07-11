; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056568c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[14]:
;   FUN_0043ac60 at 0043acf7
;   FUN_00456a60 at 00456aba
;   FUN_004a3b90 at 004a3c6a
;   FUN_004a4170 at 004a4541
;   FUN_004a4b50 at 004a4bdf
;   FUN_004bd0a0 at 004bd0b9
;   FUN_004bd2b0 at 004bd2d8
;   FUN_004bd480 at 004bd4e1
;   FUN_004c85f0 at 004c8646
;   FUN_004f2620 at 004f2696
;   ... and 4 more
;
; Called Functions:
;   FUN_00565630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056568c
        ;   Label: FUN_0056568c
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

