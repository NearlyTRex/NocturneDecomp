; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00438250(undefined4 param_1)
;
;
; XREF[36]:
;   FUN_0040fcf0 at 0040fd49
;   FUN_004132c0 at 00413319
;   FUN_00414c60 at 00414cb9
;   FUN_00415250 at 004152a9
;   FUN_00415a30 at 00415a99
;   FUN_0041a400 at 0041a469
;   FUN_00420f20 at 00420f79
;   FUN_00423d90 at 00423df9
;   FUN_0042b5d0 at 0042b629
;   FUN_0043c6f0 at 0043c749
;   ... and 26 more
;
; Called Functions:
;   FUN_00438320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438250
        ;   Label: FUN_00438250
    MOV EBX,dword ptr [ESP + 0x8]       ; 00438251
    PUSH EBX                            ; 00438255
    CALL FUN_00438320                   ; 00438256
        ;   XREF to: 00438320 (UNCONDITIONAL_CALL)  ; undefined FUN_00438320()
    ADD ESP,0x4                         ; 0043825b
    MOV EAX,EBX                         ; 0043825e
    POP EBX                             ; 00438260
    RET                                 ; 00438261

