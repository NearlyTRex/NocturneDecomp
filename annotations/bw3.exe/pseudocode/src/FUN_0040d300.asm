; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040d300(undefined4 param_1)
;
;
; XREF[13]:
;   FUN_00411bb0 at 00411bd6
;   FUN_00413240 at 00413266
;   FUN_00414470 at 00414477
;   FUN_00414490 at 00414497
;   FUN_004a8710 at 004a8732
;   FUN_004a9e70 at 004a9e87
;   FUN_004b7ee0 at 004b7f6f
;   FUN_004bfb50 at 004bfecb
;   FUN_004bfee0 at 004c027e
;   FUN_004c02a0 at 004c05fa
;   ... and 3 more
;
; Called Functions:
;   FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d300
        ;   Label: FUN_0040d300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040d301
    PUSH EBX                            ; 0040d305
    CALL FUN_0040d400                   ; 0040d306
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 0040d30b
    MOV EAX,EBX                         ; 0040d30e
    POP EBX                             ; 0040d310
    RET                                 ; 0040d311

