; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0043f900(undefined4 param_1)
;
;
; XREF[62]:
;   FUN_004101f0 at 00410225
;   FUN_00410290 at 004102b5
;   FUN_0041a8c0 at 0041a8e5
;   FUN_0041a950 at 0041a975
;   FUN_0041a9e0 at 0041aa05
;   FUN_0041aa70 at 0041aa95
;   FUN_0041ab00 at 0041ab25
;   FUN_0041aba0 at 0041abc5
;   FUN_00424330 at 00424355
;   FUN_004291f0 at 00429215
;   ... and 52 more
;
; Called Functions:
;   FUN_0043f9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f900
        ;   Label: FUN_0043f900
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f901
    PUSH EBX                            ; 0043f905
    CALL FUN_0043f9d0                   ; 0043f906
        ;   XREF to: 0043f9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f9d0()
    ADD ESP,0x4                         ; 0043f90b
    MOV EAX,EBX                         ; 0043f90e
    POP EBX                             ; 0043f910
    RET                                 ; 0043f911

