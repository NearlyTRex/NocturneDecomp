; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040d0c0(undefined4 param_1)
;
;
; XREF[13]:
;   FUN_00415df0 at 00415e16
;   FUN_00417630 at 00417656
;   FUN_00418860 at 00418867
;   FUN_00418880 at 00418887
;   FUN_004baad0 at 004baaf2
;   FUN_004bc210 at 004bc227
;   FUN_004cf530 at 004cf5bf
;   FUN_004d8700 at 004d8a7b
;   FUN_004d8a90 at 004d8e2e
;   FUN_004d8e50 at 004d911e
;   ... and 3 more
;
; Called Functions:
;   FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d0c0
        ;   Label: FUN_0040d0c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d0c1
    PUSH EBX                            ; 0040d0c5
    CALL FUN_0040d1c0                   ; 0040d0c6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d1c0()
    ADD ESP,0x4                         ; 0040d0cb
    MOV EAX,EBX                         ; 0040d0ce
    POP EBX                             ; 0040d0d0
    RET                                 ; 0040d0d1

