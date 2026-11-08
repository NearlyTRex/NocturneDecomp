; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d8d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[5]:
;   FUN_00408c40 at 00408c56
;   FUN_00435c70 at 00436554
;   FUN_00536a20 at 00536f51
;   FUN_0057ce10 at 0057d3fa
;   FUN_005a89c0 at 005a89f4
;
; Called Functions:
;   FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d8d0
        ;   Label: FUN_0057d8d0
    PUSH 0x0                            ; 0057d8d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057d8d3
    PUSH EDX                            ; 0057d8d7
    PUSH 0x0                            ; 0057d8d8
    PUSH 0x0                            ; 0057d8da
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d8dc
    PUSH 0x0                            ; 0057d8e0
    PUSH ECX                            ; 0057d8e2
    MOV EBX,dword ptr [ESP + 0x24]      ; 0057d8e3
    PUSH EBX                            ; 0057d8e7
    CALL FUN_0057bef0                   ; 0057d8e8
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bef0()
    ADD ESP,0x1c                        ; 0057d8ed
    POP EBX                             ; 0057d8f0
    RET                                 ; 0057d8f1

