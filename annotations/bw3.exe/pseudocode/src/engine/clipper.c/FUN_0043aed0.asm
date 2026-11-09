; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_0043aed0(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0043aeb4 = 0043af37
;   undefined1* PTR_caseD_1_0043aeb8 = 0043af81
;   undefined1* PTR_caseD_3_0043aec0 = 0043af61
;   string caseD_0
;   string caseD_2
;   undefined4 DAT_007e4d58
;   undefined4 DAT_007e4d5c
;   undefined4 DAT_007e4d64
;   undefined4 DAT_007e4d6c
;   undefined4 DAT_007e5964
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043aed0
        ;   Label: engine_clipper.c_FUN_0043aed0
    PUSH ESI                            ; 0043aed1
    PUSH EDI                            ; 0043aed2
    PUSH EBP                            ; 0043aed3
    SUB ESP,0x4                         ; 0043aed4
    XOR EDX,EDX                         ; 0043aed7
    MOV ECX,dword ptr [0x007e4d58]      ; 0043aed9 | DAT_007e4d58
    MOV dword ptr [ESP],EDX             ; 0043aedf
    TEST ECX,ECX                        ; 0043aee2
    JLE 0x0043af79                      ; 0043aee4
        ;   XREF to: 0043af79 (CONDITIONAL_JUMP)  ; LAB_0043af79
    MOV EBX,0x7e4d64                    ; 0043aeea
    MOV EAX,dword ptr [ESP]             ; 0043aeef
        ;   Label: LAB_0043aeef
    MOV EBP,dword ptr [0x007e4d58]      ; 0043aef2 | DAT_007e4d58
    INC EAX                             ; 0043aef8
    CMP EAX,EBP                         ; 0043aef9
    JNZ 0x0043aeff                      ; 0043aefb
        ;   XREF to: 0043aeff (CONDITIONAL_JUMP)  ; LAB_0043aeff
    XOR EAX,EBP                         ; 0043aefd
    IMUL EAX,EAX,0x30                   ; 0043aeff
        ;   Label: LAB_0043aeff
    MOV EBP,0x7e4d64                    ; 0043af02 | DAT_007e4d64
    MOV EDX,EBX                         ; 0043af07
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043af09
    MOV ECX,dword ptr [EBX]             ; 0043af0c
    NEG EDI                             ; 0043af0e
    ADD EBP,EAX                         ; 0043af10
    XOR EAX,EAX                         ; 0043af12
    CMP EDI,ECX                         ; 0043af14
    JL 0x0043af1d                       ; 0043af16
        ;   XREF to: 0043af1d (CONDITIONAL_JUMP)  ; LAB_0043af1d
    MOV EAX,0x1                         ; 0043af18
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043af1d | DAT_007e4d6c
        ;   Label: LAB_0043af1d
    MOV ESI,dword ptr [EBP]             ; 0043af20 | DAT_007e4d64
    NEG EDI                             ; 0043af23
    CMP EDI,ESI                         ; 0043af25
    JL 0x0043af2b                       ; 0043af27
        ;   XREF to: 0043af2b (CONDITIONAL_JUMP)  ; LAB_0043af2b
    OR AL,0x2                           ; 0043af29
    CMP EAX,0x3                         ; 0043af2b
        ;   Label: LAB_0043af2b
    JA 0x0043af61                       ; 0043af2e
        ;   XREF to: 0043af61 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43aeb4]  ; 0043af30 | = "k=\\M~" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,dword ptr [ESP]             ; 0043af61
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007e4d58]      ; 0043af64 | DAT_007e4d58
    INC ESI                             ; 0043af6a
    ADD EBX,0x30                        ; 0043af6b
    MOV dword ptr [ESP],ESI             ; 0043af6e
    CMP ESI,EDI                         ; 0043af71
    JL 0x0043aeef                       ; 0043af73
        ;   XREF to: 0043aeef (CONDITIONAL_JUMP)  ; LAB_0043aeef
    ADD ESP,0x4                         ; 0043af79
        ;   Label: LAB_0043af79
    POP EBP                             ; 0043af7c
    POP EDI                             ; 0043af7d
    POP ESI                             ; 0043af7e
    POP EBX                             ; 0043af7f
    RET                                 ; 0043af80
    IMUL EAX,dword ptr [0x007e4d5c],0x30 ; 0043af81 | DAT_007e4d5c
        ;   Label: caseD_1
    ADD EAX,0x7e5964                    ; 0043af88 | DAT_007e5964
    PUSH EAX                            ; 0043af8d
    PUSH EDX                            ; 0043af8e
    PUSH EBP                            ; 0043af8f
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0 ; 0043af90
        ;   XREF to: 0043a9f0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043a9f0()
    MOV ESI,dword ptr [0x007e4d5c]      ; 0043af95 | DAT_007e4d5c
    INC ESI                             ; 0043af9b
    ADD ESP,0xc                         ; 0043af9c
    MOV dword ptr [0x007e4d5c],ESI      ; 0043af9f | DAT_007e4d5c
    JMP 0x0043af61                      ; 0043afa5
        ;   XREF to: 0043af61 (UNCONDITIONAL_JUMP)  ; caseD_3

