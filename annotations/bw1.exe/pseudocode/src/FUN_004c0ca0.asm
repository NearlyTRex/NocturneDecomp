; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c0ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_0045e000 at 0045e03e
;
; Called Functions:
;   FUN_004c1540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0ca0
        ;   Label: FUN_004c0ca0
    PUSH ESI                            ; 004c0ca1
    PUSH EDI                            ; 004c0ca2
    MOV EDX,dword ptr [ESP + 0x20]      ; 004c0ca3
    PUSH EDX                            ; 004c0ca7
    PUSH 0xff                           ; 004c0ca8
    PUSH 0x21                           ; 004c0cad
    MOV ECX,dword ptr [ESP + 0x28]      ; 004c0caf
    PUSH ECX                            ; 004c0cb3
    MOV EBX,dword ptr [ESP + 0x28]      ; 004c0cb4
    PUSH EBX                            ; 004c0cb8
    MOV ESI,dword ptr [ESP + 0x28]      ; 004c0cb9
    PUSH ESI                            ; 004c0cbd
    MOV EDI,dword ptr [ESP + 0x28]      ; 004c0cbe
    PUSH EDI                            ; 004c0cc2
    CALL FUN_004c1540                   ; 004c0cc3
        ;   XREF to: 004c1540 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1540()
    ADD ESP,0x1c                        ; 004c0cc8
    POP EDI                             ; 004c0ccb
    POP ESI                             ; 004c0ccc
    POP EBX                             ; 004c0ccd
    RET                                 ; 004c0cce

