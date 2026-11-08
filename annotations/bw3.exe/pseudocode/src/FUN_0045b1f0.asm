; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045b1f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0045b270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b1f0
        ;   Label: FUN_0045b1f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045b1f1
    PUSH EBX                            ; 0045b1f5
    CALL FUN_0045b270                   ; 0045b1f6
        ;   XREF to: 0045b270 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b270()
    ADD ESP,0x4                         ; 0045b1fb
    MOV EAX,EBX                         ; 0045b1fe
    POP EBX                             ; 0045b200
    RET                                 ; 0045b201

