; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f49d8(void)
;
;
; XREF[1]:
;   FUN_004f47b0 at 004f484d
;
; Called Functions:
;   FUN_00564a70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f49d8
        ;   Label: FUN_004f49d8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f49d9
    PUSH EAX                            ; 004f49dc
    CALL FUN_00564a70                   ; 004f49dd
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    ADD ESP,0x8                         ; 004f49e2
    MOV dword ptr [EBP + 0x14],EAX      ; 004f49e5
    ADD ESP,0x144                       ; 004f49e8
    POP EBP                             ; 004f49ee
    POP EDI                             ; 004f49ef
    POP ESI                             ; 004f49f0
    POP EBX                             ; 004f49f1
    RET                                 ; 004f49f2

