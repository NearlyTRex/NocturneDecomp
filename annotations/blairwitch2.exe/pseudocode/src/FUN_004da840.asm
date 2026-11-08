; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004da840(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004ce3d0 at 004ce3fe
;
; Called Functions:
;   FUN_004da860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da840
        ;   Label: FUN_004da840
    MOV EBX,dword ptr [ESP + 0x8]       ; 004da841
    PUSH EBX                            ; 004da845
    CALL FUN_004da860                   ; 004da846
        ;   XREF to: 004da860 (UNCONDITIONAL_CALL)  ; undefined FUN_004da860()
    ADD ESP,0x4                         ; 004da84b
    MOV EAX,EBX                         ; 004da84e
    POP EBX                             ; 004da850
    RET                                 ; 004da851

