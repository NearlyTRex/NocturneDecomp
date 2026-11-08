; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004894f0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[25]:
;   FUN_0040cb60 at 0040cc05
;   FUN_00427fb0 at 0042814f
;   FUN_00436e80 at 004371c6
;   FUN_00447140 at 004472d7
;   FUN_0045efc0 at 0045efd1
;   FUN_0045f5a0 at 0045f66f
;   FUN_00488890 at 004888dc
;   FUN_004925c0 at 004925f7
;   FUN_00492d10 at 00492db0
;   FUN_004b82e0 at 004b8874
;   ... and 15 more
;
; Referenced Globals:
;   undefined4 DAT_01c3dd0c
;
; Called Functions:
;   FUN_00489510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004894f0
        ;   Label: FUN_004894f0
    MOV ECX,dword ptr [ESP + 0xc]       ; 004894f1
    PUSH ECX                            ; 004894f5
    MOV EBX,dword ptr [ESP + 0xc]       ; 004894f6
    XOR EDX,EDX                         ; 004894fa
    PUSH EBX                            ; 004894fc
    MOV dword ptr [0x01c3dd0c],EDX      ; 004894fd | DAT_01c3dd0c
    CALL FUN_00489510                   ; 00489503
        ;   XREF to: 00489510 (UNCONDITIONAL_CALL)  ; undefined FUN_00489510()
    ADD ESP,0x8                         ; 00489508
    POP EBX                             ; 0048950b
    RET                                 ; 0048950c

