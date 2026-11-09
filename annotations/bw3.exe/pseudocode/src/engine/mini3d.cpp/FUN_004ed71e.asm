; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed71e(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;   undefined4 DAT_01d7977c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004ed71e
        ;   Label: engine_mini3d.cpp_FUN_004ed71e
    PUSH ESI                            ; 004ed720
    PUSH EDI                            ; 004ed721
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed722 | DAT_01d76d00
    INC EDX                             ; 004ed728
    MOV dword ptr [0x01d76d00],EDX      ; 004ed729 | DAT_01d76d00
    CMP EDX,0x9                         ; 004ed72f
    JG 0x004ed768                       ; 004ed732
        ;   XREF to: 004ed768 (CONDITIONAL_JUMP)  ; LAB_004ed768
    MOV EAX,[0x01d76d00]                ; 004ed734 | DAT_01d76d00
        ;   Label: LAB_004ed734
    SHL EAX,0x2                         ; 004ed739
    MOV EDX,EAX                         ; 004ed73c
    SHL EAX,0x4                         ; 004ed73e
    SUB EAX,EDX                         ; 004ed741
    MOV ECX,0xf                         ; 004ed743
    ADD EAX,0x1d76d04                   ; 004ed748
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ed74d
    MOV EDI,EAX                         ; 004ed751
    MOVSD.REP ES:EDI,ESI                ; 004ed753
    MOV EDI,0x1                         ; 004ed755
    MOV [0x01d76cfc],EAX                ; 004ed75a | DAT_01d76cfc
    MOV dword ptr [0x01d7977c],EDI      ; 004ed75f | DAT_01d7977c
    POP EDI                             ; 004ed765
    POP ESI                             ; 004ed766
    RET                                 ; 004ed767
    PUSH EBX                            ; 004ed768
        ;   Label: LAB_004ed768
    MOV EBX,0x5c7ec5                    ; 004ed769
    MOV ESI,0x498                       ; 004ed76e
    PUSH 0x5c7eda                       ; 004ed773
    MOV dword ptr [0x01d71de0],EBX      ; 004ed778 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ed77e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed784
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed789
    POP EBX                             ; 004ed78c
    JMP 0x004ed734                      ; 004ed78d
        ;   XREF to: 004ed734 (UNCONDITIONAL_JUMP)  ; LAB_004ed734

