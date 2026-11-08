; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004f4c90 at 004f4cb6
;
; Called Functions:
;   FUN_004f4720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4ad0
        ;   Label: FUN_004f4ad0
    PUSH ESI                            ; 004f4ad1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f4ad2
    PUSH EDX                            ; 004f4ad6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f4ad7
    PUSH ECX                            ; 004f4adb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f4adc
    PUSH EBX                            ; 004f4ae0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f4ae1
    PUSH ESI                            ; 004f4ae5
    PUSH 0x1d06d64                      ; 004f4ae6
    CALL FUN_004f4720                   ; 004f4aeb
        ;   XREF to: 004f4720 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4720()
    ADD ESP,0x14                        ; 004f4af0
    POP ESI                             ; 004f4af3
    POP EBX                             ; 004f4af4
    RET                                 ; 004f4af5

