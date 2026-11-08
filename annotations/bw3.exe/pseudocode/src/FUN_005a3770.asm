; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3770(undefined4 param_1)
;
;
; XREF[65]:
;   FUN_0040d400 at 0040d415
;   FUN_00437e10 at 00437eec
;   FUN_00440c10 at 00440c2b
;   FUN_00441b60 at 00441bde
;   FUN_00448f30 at 00448f80
;   FUN_00453ec0 at 00453eed
;   FUN_00459960 at 0045996f
;   FUN_00459ce0 at 00459cef
;   FUN_0045b270 at 0045b282
;   FUN_0045c380 at 0045c3a4
;   ... and 55 more
;
; Called Functions:
;   FUN_005a3780
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3770
        ;   Label: FUN_005a3770
    PUSH EDX                            ; 005a3774
    CALL FUN_005a3780                   ; 005a3775
        ;   XREF to: 005a3780 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3780()
    ADD ESP,0x4                         ; 005a377a
    RET                                 ; 005a377d

