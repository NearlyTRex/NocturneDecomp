; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053b210(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_0053c650 at 0053c68c
;   FUN_0053c8f0 at 0053c926
;   FUN_0053d490 at 0053d4d3
;
; Called Functions:
;   FUN_0053be30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b210
        ;   Label: FUN_0053b210
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053b211
    PUSH EBX                            ; 0053b215
    CALL FUN_0053be30                   ; 0053b216
        ;   XREF to: 0053be30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053be30()
    ADD ESP,0x4                         ; 0053b21b
    MOV EAX,EBX                         ; 0053b21e
    POP EBX                             ; 0053b220
    RET                                 ; 0053b221

