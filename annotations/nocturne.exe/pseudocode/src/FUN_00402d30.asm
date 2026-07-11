; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0044ed80 at 0044ef9b
;
; Called Functions:
;   FUN_00402cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402d30
        ;   Label: FUN_00402d30
    PUSH ESI                            ; 00402d31
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402d32
    PUSH EDX                            ; 00402d36
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402d37
    PUSH ECX                            ; 00402d3b
    MOV EBX,dword ptr [ESP + 0x14]      ; 00402d3c
    PUSH EBX                            ; 00402d40
    MOV ESI,dword ptr [ESP + 0x24]      ; 00402d41
    PUSH ESI                            ; 00402d45
    CALL FUN_00402cf0                   ; 00402d46
        ;   XREF to: 00402cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00402cf0()
    ADD ESP,0x10                        ; 00402d4b
    POP ESI                             ; 00402d4e
    POP EBX                             ; 00402d4f
    RET                                 ; 00402d50

