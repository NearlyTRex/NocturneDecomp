; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6a10(undefined4 param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005b76a0 at 005b76dd
;
; Referenced Globals:
;   undefined4 DAT_005f1777
;
; Called Functions:
;   FUN_005b6a50
;   FUN_005b6c90
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 005b6a10
        ;   Label: FUN_005b6a10
    FCOMP double ptr [0x005f1777]       ; 005b6a14 | DAT_005f1777
    FNSTSW AX                           ; 005b6a1a
    SAHF                                ; 005b6a1c
    JNC 0x005b6a20                      ; 005b6a1d
        ;   XREF to: 005b6a20 (CONDITIONAL_JUMP)  ; LAB_005b6a20
    RET                                 ; 005b6a1f
    PUSH EBX                            ; 005b6a20
        ;   Label: LAB_005b6a20
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b6a21
    PUSH EDX                            ; 005b6a25
    MOV ECX,dword ptr [ESP + 0xc]       ; 005b6a26
    PUSH dword ptr [ESP + 0x10]         ; 005b6a2a
    PUSH ECX                            ; 005b6a2e
    CALL FUN_005b6a50                   ; 005b6a2f
        ;   XREF to: 005b6a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6a50()
    ADD ESP,0xc                         ; 005b6a34
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6a37
    PUSH dword ptr [ESP + 0xc]          ; 005b6a3b
    PUSH EBX                            ; 005b6a3f
    CALL FUN_005b6c90                   ; 005b6a40
        ;   XREF to: 005b6c90 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6c90()
    ADD ESP,0x8                         ; 005b6a45
    POP EBX                             ; 005b6a48
    RET                                 ; 005b6a49

