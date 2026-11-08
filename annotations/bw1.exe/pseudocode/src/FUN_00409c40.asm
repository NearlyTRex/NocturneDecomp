; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00409c40(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00433c60 at 00433c6d
;
; Called Functions:
;   FUN_0040cf40
;   FUN_0040cf60
;   FUN_0040cf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409c40
        ;   Label: FUN_00409c40
    PUSH ESI                            ; 00409c41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00409c42
    MOV ESI,dword ptr [ESP + 0x10]      ; 00409c46
    PUSH EBX                            ; 00409c4a
    PUSH ESI                            ; 00409c4b
    CALL FUN_0040cf80                   ; 00409c4c
        ;   XREF to: 0040cf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf80()
    ADD ESP,0x8                         ; 00409c51
    LEA EAX,[EBX + 0x20]                ; 00409c54
    PUSH EAX                            ; 00409c57
    PUSH ESI                            ; 00409c58
    CALL FUN_0040cf60                   ; 00409c59
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 00409c5e
    LEA EAX,[EBX + 0x30]                ; 00409c61
    PUSH EAX                            ; 00409c64
    PUSH ESI                            ; 00409c65
    CALL FUN_0040cf60                   ; 00409c66
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 00409c6b
    MOV EDX,dword ptr [EBX + 0x70]      ; 00409c6e
    PUSH EDX                            ; 00409c71
    PUSH ESI                            ; 00409c72
    CALL FUN_0040cf40                   ; 00409c73
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x8                         ; 00409c78
    POP ESI                             ; 00409c7b
    POP EBX                             ; 00409c7c
    RET                                 ; 00409c7d

