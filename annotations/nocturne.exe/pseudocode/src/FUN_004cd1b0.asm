; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cd1b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd1b0
        ;   Label: FUN_004cd1b0
    PUSH ESI                            ; 004cd1b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cd1b2
    MOV EDX,dword ptr [0x01c039b8]      ; 004cd1b6 | DAT_01c039b8
    MOV EAX,dword ptr [EBX]             ; 004cd1bc
    SUB EAX,EDX                         ; 004cd1be
    MOV ECX,dword ptr [0x01c039bc]      ; 004cd1c0 | DAT_01c039bc
    MOV EDX,EAX                         ; 004cd1c6
    MOV EAX,dword ptr [EBX + 0x4]       ; 004cd1c8
    MOV ESI,dword ptr [EBX + 0x8]       ; 004cd1cb
    SUB EAX,ECX                         ; 004cd1ce
    MOV EBX,dword ptr [0x01c039c0]      ; 004cd1d0 | DAT_01c039c0
    MOV ECX,EAX                         ; 004cd1d6
    MOV EAX,[0x01c039f0]                ; 004cd1d8 | DAT_01c039f0
    SUB ESI,EBX                         ; 004cd1dd
    IMUL EDX                            ; 004cd1df
    SHRD EAX,EDX,0x10                   ; 004cd1e1
    MOV EBX,EAX                         ; 004cd1e5
    MOV EDX,ECX                         ; 004cd1e7
    MOV EAX,[0x01c039fc]                ; 004cd1e9 | DAT_01c039fc
    IMUL EDX                            ; 004cd1ee
    SHRD EAX,EDX,0x10                   ; 004cd1f0
    MOV EDX,ESI                         ; 004cd1f4
    ADD EBX,EAX                         ; 004cd1f6
    MOV EAX,[0x01c03a08]                ; 004cd1f8 | DAT_01c03a08
    IMUL EDX                            ; 004cd1fd
    SHRD EAX,EDX,0x10                   ; 004cd1ff
    ADD EAX,EBX                         ; 004cd203
    POP ESI                             ; 004cd205
    POP EBX                             ; 004cd206
    RET                                 ; 004cd207

