; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0055fc40(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_0055e7a0 at 0055e7a5
;
; Called Functions:
;   FUN_00556d70
;   FUN_00557f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fc40
        ;   Label: FUN_0055fc40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055fc41
    PUSH 0x3                            ; 0055fc45
    MOV dword ptr [EBX],0x1400          ; 0055fc47
    CALL FUN_00556d70                   ; 0055fc4d
        ;   XREF to: 00556d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00556d70()
    ADD ESP,0x4                         ; 0055fc52
    CALL FUN_00557f60                   ; 0055fc55
        ;   XREF to: 00557f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00557f60()
    MOV EAX,EBX                         ; 0055fc5a
    POP EBX                             ; 0055fc5c
    RET                                 ; 0055fc5d

