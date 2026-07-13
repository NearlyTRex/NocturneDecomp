; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005635b0(undefined4 param_1)
;
;
; XREF[37]:
;   FUN_00401010 at 004010fb
;   FUN_0040e3c0 at 0040e400
;   FUN_0042d240 at 0042d2c9
;   FUN_004303d0 at 004303ff
;   FUN_00440010 at 004400fa
;   FUN_0044acb0 at 0044ad40
;   FUN_0044bf20 at 0044bf35
;   FUN_0044c310 at 0044c3a7
;   FUN_0044e1e0 at 0044e208
;   FUN_00450170 at 00450175
;   ... and 27 more
;
; Called Functions:
;   FUN_005635c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005635b0
        ;   Label: FUN_005635b0
    PUSH EDX                            ; 005635b4
    CALL FUN_005635c0                   ; 005635b5
        ;   XREF to: 005635c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635c0()
    ADD ESP,0x4                         ; 005635ba
    RET                                 ; 005635bd

