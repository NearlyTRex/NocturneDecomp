; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046d4b0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[36]:
;   FUN_0042a280 at 0042a38e
;   FUN_0042d8e0 at 0042d917
;   FUN_0042f310 at 0042f32a
;   FUN_0045d530 at 0045da56
;   FUN_0045dea0 at 0045e1e8
;   FUN_0045f5a0 at 0045f614
;   FUN_004980b0 at 004981f0
;   FUN_00498b40 at 00498c6b
;   FUN_00499690 at 00499a3b
;   FUN_0049a480 at 0049a517
;   ... and 26 more
;
; Called Functions:
;   FUN_00406c40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0046d4b0
        ;   Label: FUN_0046d4b0
    PUSH EDX                            ; 0046d4b4
    CALL FUN_00406c40                   ; 0046d4b5
        ;   XREF to: 00406c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00406c40()
    ADD ESP,0x4                         ; 0046d4ba
    RET                                 ; 0046d4bd

