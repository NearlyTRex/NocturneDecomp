; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ed7fc(void)
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

    LEA EDX,[EDX]                       ; 004ed7fc
        ;   Label: engine_mini3d.cpp_FUN_004ed7fc
    PUSH EDI                            ; 004ed800
    MOV EDX,dword ptr [0x01d76d00]      ; 004ed801 | DAT_01d76d00
    DEC EDX                             ; 004ed807
    MOV dword ptr [0x01d76d00],EDX      ; 004ed808 | DAT_01d76d00
    TEST EDX,EDX                        ; 004ed80e
    JL 0x004ed83b                       ; 004ed810
        ;   XREF to: 004ed83b (CONDITIONAL_JUMP)  ; LAB_004ed83b
    MOV EAX,[0x01d76d00]                ; 004ed812 | DAT_01d76d00
        ;   Label: LAB_004ed812
    SHL EAX,0x2                         ; 004ed817
    MOV EDX,EAX                         ; 004ed81a
    SHL EAX,0x4                         ; 004ed81c
    SUB EAX,EDX                         ; 004ed81f
    MOV EDX,0x1d76d04                   ; 004ed821
    MOV EDI,0x1                         ; 004ed826
    ADD EDX,EAX                         ; 004ed82b
    MOV dword ptr [0x01d7977c],EDI      ; 004ed82d | DAT_01d7977c
    MOV dword ptr [0x01d76cfc],EDX      ; 004ed833 | DAT_01d76cfc
    POP EDI                             ; 004ed839
    RET                                 ; 004ed83a
    PUSH ESI                            ; 004ed83b
        ;   Label: LAB_004ed83b
    PUSH EBX                            ; 004ed83c
    MOV EBX,0x5c7f11                    ; 004ed83d
    MOV ESI,0x4cf                       ; 004ed842
    PUSH 0x5c7f26                       ; 004ed847
    MOV dword ptr [0x01d71de0],EBX      ; 004ed84c | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004ed852 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004ed858
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004ed85d
    POP EBX                             ; 004ed860
    POP ESI                             ; 004ed861
    JMP 0x004ed812                      ; 004ed862
        ;   XREF to: 004ed812 (UNCONDITIONAL_JUMP)  ; LAB_004ed812

