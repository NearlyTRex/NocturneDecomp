; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d89f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004d8bb0 at 004d8bd6
;
; Called Functions:
;   FUN_004d8640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d89f0
        ;   Label: FUN_004d89f0
    PUSH ESI                            ; 004d89f1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004d89f2
    PUSH EDX                            ; 004d89f6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004d89f7
    PUSH ECX                            ; 004d89fb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004d89fc
    PUSH EBX                            ; 004d8a00
    MOV ESI,dword ptr [ESP + 0x18]      ; 004d8a01
    PUSH ESI                            ; 004d8a05
    PUSH 0x1d5bc78                      ; 004d8a06
    CALL FUN_004d8640                   ; 004d8a0b
        ;   XREF to: 004d8640 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8640()
    ADD ESP,0x14                        ; 004d8a10
    POP ESI                             ; 004d8a13
    POP EBX                             ; 004d8a14
    RET                                 ; 004d8a15

