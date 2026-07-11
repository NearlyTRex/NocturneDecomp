; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00474080(int param_1,int param_2)
;
;
; XREF[12]:
;   FUN_00473c00 at 00473c35
;   FUN_00474090 at 004740af
;   FUN_00474140 at 00474156
;   FUN_00474380 at 00474397
;   FUN_00474460 at 004744d6
;   FUN_004748b0 at 00474a1c
;   FUN_00475470 at 004754db
;   FUN_004759d0 at 00475c19
;   FUN_004d9c20 at 004d9cb4
;   FUN_004fe9d0 at 004feb27
;   ... and 2 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00474080
        ;   Label: FUN_00474080
    MOV EDX,dword ptr [ESP + 0x8]       ; 00474084
    MOV EAX,dword ptr [EAX + 0x8]       ; 00474088
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 0047408b
    RET                                 ; 0047408e

