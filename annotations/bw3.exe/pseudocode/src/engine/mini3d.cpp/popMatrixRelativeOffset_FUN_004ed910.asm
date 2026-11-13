; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_popMatrixRelativeOffset_FUN_004ed910(void)
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

    PUSH EDI                            ; 004ed910
        ;   Label: engine_mini3d.cpp_popMatrixRelativeOffset_FUN_004ed910
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed911 | DAT_01d76d00
    DEC EDX                             ; 004ed917
    MOV dword ptr [0x01d76d00],EDX      ; 004ed918 | DAT_01d76d00
    TEST EDX,EDX                        ; 004ed91e
    JL 0x004ed94b                       ; 004ed920
        ;   XREF to: 004ed94b (CONDITIONAL_JUMP)  ; LAB_004ed94b
    MOV EAX,[0x01d76d00]                ; 004ed922 | DAT_01d76d00
        ;   Label: LAB_004ed922
    SHL EAX,0x2                         ; 004ed927
    MOV EDX,EAX                         ; 004ed92a
    SHL EAX,0x4                         ; 004ed92c
    SUB EAX,EDX                         ; 004ed92f
    MOV EDX,0x1d76d04                   ; 004ed931
    MOV EDI,0x1                         ; 004ed936
    ADD EDX,EAX                         ; 004ed93b
    MOV dword ptr [0x01d7977c],EDI      ; 004ed93d | DAT_01d7977c
    MOV dword ptr [0x01d76cfc],EDX      ; 004ed943 | DAT_01d76cfc
    POP EDI                             ; 004ed949
    RET                                 ; 004ed94a
    PUSH ESI                            ; 004ed94b
        ;   Label: LAB_004ed94b
    PUSH EBX                            ; 004ed94c
    MOV EBX,0x5c7f5e                    ; 004ed94d
    MOV ESI,0x505                       ; 004ed952
    PUSH 0x5c7f73                       ; 004ed957
    MOV dword ptr [0x01d71de0],EBX      ; 004ed95c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ed962 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed968
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed96d
    POP EBX                             ; 004ed970
    POP ESI                             ; 004ed971
    JMP 0x004ed922                      ; 004ed972
        ;   XREF to: 004ed922 (UNCONDITIONAL_JUMP)  ; LAB_004ed922

