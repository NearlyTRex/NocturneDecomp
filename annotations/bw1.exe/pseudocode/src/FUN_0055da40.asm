; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055da40(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0269cb98
;   undefined4 DAT_0269cb9c
;   undefined4 DAT_0269cba0
;   undefined4 DAT_0269cba4
;   undefined4 DAT_0269cba8
;   undefined4 DAT_0269cbac
;
; Called Functions:
;   FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055da40
        ;   Label: FUN_0055da40
    PUSH ESI                            ; 0055da41
    PUSH 0x1c3f668                      ; 0055da42
    PUSH 0x2                            ; 0055da47
    MOV EDX,0xbe8f5c29                  ; 0055da49
    MOV ECX,0x3ed70a3d                  ; 0055da4e
    PUSH 0x6231a4                       ; 0055da53
    MOV EBX,0x3f19999a                  ; 0055da58
    MOV ESI,0x3eb33333                  ; 0055da5d
    PUSH 0x55daa0                       ; 0055da62
    MOV dword ptr [0x0269cb98],EDX      ; 0055da67 | DAT_0269cb98
    MOV dword ptr [0x0269cb9c],ECX      ; 0055da6d | DAT_0269cb9c
    PUSH 0x5f14cd                       ; 0055da73
    MOV dword ptr [0x0269cba0],EBX      ; 0055da78 | DAT_0269cba0
    MOV dword ptr [0x0269cba4],ESI      ; 0055da7e | DAT_0269cba4
    PUSH 0x269cbf0                      ; 0055da84
    MOV dword ptr [0x0269cba8],ECX      ; 0055da89 | DAT_0269cba8
    MOV dword ptr [0x0269cbac],EBX      ; 0055da8f | DAT_0269cbac
    CALL FUN_0040c160                   ; 0055da95
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c160()
    ADD ESP,0x18                        ; 0055da9a
    POP ESI                             ; 0055da9d
    POP EBX                             ; 0055da9e
    RET                                 ; 0055da9f

