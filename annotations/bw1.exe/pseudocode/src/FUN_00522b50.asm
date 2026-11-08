; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522b50(undefined4 param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005237e0 at 0052381d
;
; Referenced Globals:
;   undefined4 DAT_005ea892
;
; Called Functions:
;   FUN_00522b90
;   FUN_00522dd0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 00522b50
        ;   Label: FUN_00522b50
    FCOMP double ptr [0x005ea892]       ; 00522b54 | DAT_005ea892
    FNSTSW AX                           ; 00522b5a
    SAHF                                ; 00522b5c
    JNC 0x00522b60                      ; 00522b5d
        ;   XREF to: 00522b60 (CONDITIONAL_JUMP)  ; LAB_00522b60
    RET                                 ; 00522b5f
    PUSH EBX                            ; 00522b60
        ;   Label: LAB_00522b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00522b61
    PUSH EDX                            ; 00522b65
    MOV ECX,dword ptr [ESP + 0xc]       ; 00522b66
    PUSH dword ptr [ESP + 0x10]         ; 00522b6a
    PUSH ECX                            ; 00522b6e
    CALL FUN_00522b90                   ; 00522b6f
        ;   XREF to: 00522b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00522b90()
    ADD ESP,0xc                         ; 00522b74
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522b77
    PUSH dword ptr [ESP + 0xc]          ; 00522b7b
    PUSH EBX                            ; 00522b7f
    CALL FUN_00522dd0                   ; 00522b80
        ;   XREF to: 00522dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522dd0()
    ADD ESP,0x8                         ; 00522b85
    POP EBX                             ; 00522b88
    RET                                 ; 00522b89

