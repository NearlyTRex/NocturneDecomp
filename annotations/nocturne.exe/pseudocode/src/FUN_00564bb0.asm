; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564bb0(undefined4 param_1)
;
;
; XREF[29]:
;   FUN_0041e260 at 0041e29c
;   FUN_0043abb0 at 0043abca
;   FUN_0043f9c0 at 0043f9f0
;   FUN_0044bc20 at 0044bc39
;   FUN_00452530 at 0045254c
;   FUN_00458580 at 00458603
;   FUN_0046ef80 at 0046ef92
;   FUN_004823b0 at 0048245c
;   FUN_0049a1e0 at 0049a1fc
;   FUN_004adf90 at 004adfa2
;   ... and 19 more
;
; Called Functions:
;   FUN_0056b215
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564bb0
        ;   Label: FUN_00564bb0
    PUSH EDX                            ; 00564bb4
    CALL FUN_0056b215                   ; 00564bb5
        ;   XREF to: 0056b215 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b215()
    ADD ESP,0x4                         ; 00564bba
    RET                                 ; 00564bbd

