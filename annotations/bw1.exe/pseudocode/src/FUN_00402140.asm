; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402140(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_004ce580 at 004cee66
;
; Called Functions:
;   FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402140
        ;   Label: FUN_00402140
    MOV EDX,dword ptr [ESP + 0xc]       ; 00402141
    PUSH EDX                            ; 00402145
    MOV ECX,dword ptr [ESP + 0xc]       ; 00402146
    PUSH ECX                            ; 0040214a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040214b
    PUSH EBX                            ; 0040214f
    CALL FUN_00401fe0                   ; 00402150
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00402155
    POP EBX                             ; 00402158
    RET                                 ; 00402159

