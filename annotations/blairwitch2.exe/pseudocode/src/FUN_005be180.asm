; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005be180(undefined4 param_1)
;
;
; XREF[25]:
;   FUN_005b8180 at 005b81c1
;   FUN_005b87c0 at 005b87e6
;   FUN_005b8e60 at 005b8eb4
;   FUN_005b9124 at 005b9191
;   FUN_005b929c at 005b92e2
;   FUN_005b9690 at 005b96b6
;   FUN_005ba120 at 005ba14d
;   FUN_005bab40 at 005bab8a
;   FUN_005be190 at 005be192
;   FUN_005be19c at 005be19e
;   ... and 15 more
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;
; Called Functions:
;   FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005be180 | PTR_FUN_0061f2a4
        ;   Label: FUN_005be180
    MOV EDX,dword ptr [ESP + 0x4]       ; 005be186
    MOV dword ptr [EAX + 0x4],EDX       ; 005be18a
    RET                                 ; 005be18d

