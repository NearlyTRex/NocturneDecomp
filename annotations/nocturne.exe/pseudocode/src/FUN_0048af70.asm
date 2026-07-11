; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048af70(void)
;
;
; XREF[1]:
;   FUN_004a3660 at 004a3677
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b84b4
;   undefined4 DAT_005b84cc
;   undefined4 DAT_005b84e4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;   FUN_00483290
;   FUN_00483ff0
;   FUN_00484cb0
;   FUN_004850b0
;   FUN_00486da0
;   FUN_004876a0
;   FUN_00488220
;   FUN_00488ad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048af70
        ;   Label: FUN_0048af70
    PUSH 0x5b84b4                       ; 0048af71 | DAT_005b84b4
    MOV EDX,dword ptr [0x005ae704]      ; 0048af76 | DAT_005ae704
    PUSH EDX                            ; 0048af7c | DAT_01b4d738
    CALL FUN_00461eb0                   ; 0048af7d
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 0048af82
    PUSH 0x5b84cc                       ; 0048af85 | DAT_005b84cc
    MOV ECX,dword ptr [0x005ae704]      ; 0048af8a | DAT_005ae704
    PUSH ECX                            ; 0048af90 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 0048af91
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 0048af96
    PUSH 0x5b84e4                       ; 0048af99 | DAT_005b84e4
    MOV EBX,dword ptr [0x005ae704]      ; 0048af9e | DAT_005ae704
    PUSH EBX                            ; 0048afa4 | DAT_01b4d738
    CALL FUN_00461eb0                   ; 0048afa5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 0048afaa
    CALL FUN_00483290                   ; 0048afad
        ;   XREF to: 00483290 (UNCONDITIONAL_CALL)  ; undefined FUN_00483290()
    CALL FUN_00483ff0                   ; 0048afb2
        ;   XREF to: 00483ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483ff0()
    CALL FUN_00484cb0                   ; 0048afb7
        ;   XREF to: 00484cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484cb0()
    CALL FUN_004876a0                   ; 0048afbc
        ;   XREF to: 004876a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004876a0()
    CALL FUN_00488220                   ; 0048afc1
        ;   XREF to: 00488220 (UNCONDITIONAL_CALL)  ; undefined FUN_00488220()
    CALL FUN_004850b0                   ; 0048afc6
        ;   XREF to: 004850b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004850b0()
    CALL FUN_00488ad0                   ; 0048afcb
        ;   XREF to: 00488ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00488ad0()
    CALL FUN_00486da0                   ; 0048afd0
        ;   XREF to: 00486da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00486da0()
    POP EBX                             ; 0048afd5
    RET                                 ; 0048afd6

