; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_matrixPush_FUN_004ed790(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d76d00
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ed790
        ;   Label: engine_mini3d.cpp_matrixPush_FUN_004ed790
    PUSH EDI                            ; 004ed791
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed792 | DAT_01d76d00
    INC EDX                             ; 004ed798
    MOV dword ptr [0x01d76d00],EDX      ; 004ed799 | DAT_01d76d00
    CMP EDX,0x9                         ; 004ed79f
    JG 0x004ed7cf                       ; 004ed7a2
        ;   XREF to: 004ed7cf (CONDITIONAL_JUMP)  ; LAB_004ed7cf
    MOV EAX,[0x01d76d00]                ; 004ed7a4 | DAT_01d76d00
        ;   Label: LAB_004ed7a4
    SHL EAX,0x2                         ; 004ed7a9
    MOV EDX,EAX                         ; 004ed7ac
    SHL EAX,0x4                         ; 004ed7ae
    SUB EAX,EDX                         ; 004ed7b1
    MOV ECX,0xf                         ; 004ed7b3
    ADD EAX,0x1d76d04                   ; 004ed7b8
    MOV ESI,dword ptr [0x01d76cfc]      ; 004ed7bd | DAT_01d76cfc
    MOV EDI,EAX                         ; 004ed7c3
    MOV [0x01d76cfc],EAX                ; 004ed7c5 | DAT_01d76cfc
    MOVSD.REP ES:EDI,ESI                ; 004ed7ca
    POP EDI                             ; 004ed7cc
    POP ESI                             ; 004ed7cd
    RET                                 ; 004ed7ce
    PUSH EBX                            ; 004ed7cf
        ;   Label: LAB_004ed7cf
    MOV EBX,0x5c7eeb                    ; 004ed7d0
    MOV ESI,0x4b7                       ; 004ed7d5
    PUSH 0x5c7f00                       ; 004ed7da
    MOV dword ptr [0x01d71de0],EBX      ; 004ed7df | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ed7e5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed7eb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed7f0
    POP EBX                             ; 004ed7f3
    JMP 0x004ed7a4                      ; 004ed7f4
        ;   XREF to: 004ed7a4 (UNCONDITIONAL_JUMP)  ; LAB_004ed7a4

