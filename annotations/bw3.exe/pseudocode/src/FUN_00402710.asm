; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00402710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0045ce40 at 0045d059
;
; Called Functions:
;   FUN_004026d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402710
        ;   Label: FUN_00402710
    PUSH ESI                            ; 00402711
    MOV EDX,dword ptr [ESP + 0x14]      ; 00402712
    PUSH EDX                            ; 00402716
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402717
    PUSH ECX                            ; 0040271b
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040271c
    PUSH EBX                            ; 00402720
    MOV ESI,dword ptr [ESP + 0x24]      ; 00402721
    PUSH ESI                            ; 00402725
    CALL FUN_004026d0                   ; 00402726
        ;   XREF to: 004026d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004026d0()
    ADD ESP,0x10                        ; 0040272b
    POP ESI                             ; 0040272e
    POP EBX                             ; 0040272f
    RET                                 ; 00402730

