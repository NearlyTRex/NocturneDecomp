; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c6450(undefined4 param_1)
;
;
; XREF[25]:
;   FUN_005c0530 at 005c0571
;   FUN_005c0b10 at 005c0b36
;   FUN_005c12d0 at 005c1324
;   FUN_005c1594 at 005c1601
;   FUN_005c170c at 005c1752
;   FUN_005c1a70 at 005c1a96
;   FUN_005c2500 at 005c252d
;   FUN_005c2f00 at 005c2f4a
;   FUN_005c6460 at 005c6462
;   FUN_005c646c at 005c646e
;   ... and 15 more
;
; Referenced Globals:
;   void* PTR_FUN_006265fc = 005c50cc
;
; Called Functions:
;   FUN_005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005c6450 | PTR_FUN_006265fc
        ;   Label: FUN_005c6450
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c6456
    MOV dword ptr [EAX + 0x4],EDX       ; 005c645a
    RET                                 ; 005c645d

