; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00434270(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_004354f0 at 00435502
;   FUN_00435550 at 00435562
;   FUN_00441f50 at 00442502
;   FUN_004bb9b0 at 004bbd86
;   FUN_004bbf70 at 004bc32e
;
; Called Functions:
;   FUN_00434290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434270
        ;   Label: FUN_00434270
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434271
    PUSH EBX                            ; 00434275
    CALL FUN_00434290                   ; 00434276
        ;   XREF to: 00434290 (UNCONDITIONAL_CALL)  ; undefined FUN_00434290()
    ADD ESP,0x4                         ; 0043427b
    MOV EAX,EBX                         ; 0043427e
    POP EBX                             ; 00434280
    RET                                 ; 00434281

