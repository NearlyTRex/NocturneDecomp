; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410370(undefined4 param_1)
;
;
; XREF[62]:
;   FUN_004101f0 at 00410215
;   FUN_00410290 at 004102a5
;   FUN_0041a8c0 at 0041a8d5
;   FUN_0041a950 at 0041a965
;   FUN_0041a9e0 at 0041a9f5
;   FUN_0041aa70 at 0041aa85
;   FUN_0041ab00 at 0041ab15
;   FUN_0041aba0 at 0041abb5
;   FUN_00424330 at 00424345
;   FUN_004291f0 at 00429205
;   ... and 52 more
;
; Referenced Globals:
;   undefined4 DAT_005dbca0
;
; Called Functions:
;   FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbca0                       ; 00410370 | DAT_005dbca0
        ;   Label: FUN_00410370
    PUSH 0x32                           ; 00410375
    MOV EDX,dword ptr [ESP + 0xc]       ; 00410377
    PUSH EDX                            ; 0041037b
    CALL FUN_005a3de6                   ; 0041037c
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3de6()
    ADD ESP,0xc                         ; 00410381
    RET                                 ; 00410384

