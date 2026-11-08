; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045de60(void)
;
;
; XREF[1]:
;   FUN_00539ee0 at 00539ee0
;
; Referenced Globals:
;   undefined4 DAT_005f2840
;   undefined4 DAT_005f2870
;   undefined4 DAT_005f28a0
;   undefined4 DAT_005f2a20
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de60
        ;   Label: FUN_0045de60
    PUSH ESI                            ; 0045de61
    PUSH 0x5f2840                       ; 0045de62 | DAT_005f2840
    MOV EDX,dword ptr [0x005f2afc]      ; 0045de67 | DAT_005f2afc
    PUSH EDX                            ; 0045de6d | DAT_01bdd7e4
    MOV EBX,0x5f2870                    ; 0045de6e | DAT_005f2870
    CALL FUN_0046e5e0                   ; 0045de73
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    LEA ESI,[EBX + 0x1b0]               ; 0045de78 | DAT_005f2a20
    ADD ESP,0x8                         ; 0045de7e
    PUSH EBX                            ; 0045de81 | DAT_005f2870 | DAT_005f28a0
        ;   Label: LAB_0045de81
    MOV ECX,dword ptr [0x005f2afc]      ; 0045de82 | DAT_005f2afc
    PUSH ECX                            ; 0045de88 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0045de89
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD EBX,0x30                        ; 0045de8e
    ADD ESP,0x8                         ; 0045de91
    CMP EBX,ESI                         ; 0045de94
    JNZ 0x0045de81                      ; 0045de96
        ;   XREF to: 0045de81 (CONDITIONAL_JUMP)  ; LAB_0045de81
    POP ESI                             ; 0045de98
    POP EBX                             ; 0045de99
    RET                                 ; 0045de9a

