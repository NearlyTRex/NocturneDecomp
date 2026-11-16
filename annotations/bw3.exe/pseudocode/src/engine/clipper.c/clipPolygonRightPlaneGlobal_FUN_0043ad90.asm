; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonRightPlaneGlobal_FUN_0043ad90(void)
;
;
; Referenced Globals:
;   string caseD_2
;   undefined4 DAT_007e4d54
;   undefined4 DAT_007e4d58
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ad90
        ;   Label: engine_clipper.c_clipPolygonRightPlaneGlobal_FUN_0043ad90
    PUSH ESI                            ; 0043ad91
    PUSH EDI                            ; 0043ad92
    PUSH EBP                            ; 0043ad93
    SUB ESP,0x4                         ; 0043ad94
    XOR EDX,EDX                         ; 0043ad97
    MOV ECX,dword ptr [0x007e4d54]      ; 0043ad99 | DAT_007e4d54
    MOV dword ptr [ESP],EDX             ; 0043ad9f
    TEST ECX,ECX                        ; 0043ada2
    JLE 0x0043ae2f                      ; 0043ada4
        ;   XREF to: 0043ae2f (CONDITIONAL_JUMP)  ; LAB_0043ae2f
    MOV EBX,0x7e5364                    ; 0043adaa
    MOV EAX,dword ptr [ESP]             ; 0043adaf
        ;   Label: LAB_0043adaf
    MOV EBP,dword ptr [0x007e4d54]      ; 0043adb2 | DAT_007e4d54
    INC EAX                             ; 0043adb8
    CMP EAX,EBP                         ; 0043adb9
    JNZ 0x0043adbf                      ; 0043adbb
        ;   XREF to: 0043adbf (CONDITIONAL_JUMP)  ; LAB_0043adbf
    XOR EAX,EBP                         ; 0043adbd
    IMUL EAX,EAX,0x30                   ; 0043adbf
        ;   Label: LAB_0043adbf
    MOV EBP,0x7e5364                    ; 0043adc2
    MOV EDX,EBX                         ; 0043adc7
    MOV EDI,dword ptr [EBX]             ; 0043adc9
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043adcb
    ADD EBP,EAX                         ; 0043adce
    XOR EAX,EAX                         ; 0043add0
    CMP EDI,ECX                         ; 0043add2
    JL 0x0043addb                       ; 0043add4
        ;   XREF to: 0043addb (CONDITIONAL_JUMP)  ; LAB_0043addb
    MOV EAX,0x1                         ; 0043add6
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043addb
        ;   Label: LAB_0043addb
    CMP ESI,dword ptr [EBP]             ; 0043adde
    JG 0x0043ade5                       ; 0043ade1
        ;   XREF to: 0043ade5 (CONDITIONAL_JUMP)  ; LAB_0043ade5
    OR AL,0x2                           ; 0043ade3
    CMP EAX,0x3                         ; 0043ade5
        ;   Label: LAB_0043ade5
    JA 0x0043ae1b                       ; 0043ade8
        ;   XREF to: 0043ae1b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43ad78]  ; 0043adea | caseD_0 | caseD_1 | = "k=XM~"
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e4d58],0x30 ; 0043adf1 | DAT_007e4d58
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043adf8
    MOV ESI,EDX                         ; 0043adfd
    ADD EDI,0x7e4d64                    ; 0043adff
    PUSH EDI                            ; 0043ae05
    MOV EAX,ECX                         ; 0043ae06
    SHR ECX,0x2                         ; 0043ae08
    MOVSD.REP ES:EDI,ESI                ; 0043ae0b
    MOV CL,AL                           ; 0043ae0d
    AND CL,0x3                          ; 0043ae0f
    MOVSB.REP ES:EDI,ESI                ; 0043ae12
    POP EDI                             ; 0043ae14
    INC dword ptr [0x007e4d58]          ; 0043ae15 | DAT_007e4d58
    MOV ESI,dword ptr [ESP]             ; 0043ae1b
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007e4d54]      ; 0043ae1e | DAT_007e4d54
    INC ESI                             ; 0043ae24
    ADD EBX,0x30                        ; 0043ae25
    MOV dword ptr [ESP],ESI             ; 0043ae28
    CMP ESI,EDI                         ; 0043ae2b
    JL 0x0043adaf                       ; 0043ae2d
        ;   XREF to: 0043adaf (CONDITIONAL_JUMP)  ; LAB_0043adaf
    ADD ESP,0x4                         ; 0043ae2f
        ;   Label: LAB_0043ae2f
    POP EBP                             ; 0043ae32
    POP EDI                             ; 0043ae33
    POP ESI                             ; 0043ae34
    POP EBX                             ; 0043ae35
    RET                                 ; 0043ae36
    IMUL EAX,dword ptr [0x007e4d58],0x30 ; 0043ae37 | DAT_007e4d58
        ;   Label: caseD_1
    ADD EAX,0x7e4d64                    ; 0043ae3e
    PUSH EAX                            ; 0043ae43
    PUSH EDX                            ; 0043ae44
    PUSH EBP                            ; 0043ae45
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0 ; 0043ae46
        ;   XREF to: 0043a8c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007e4d58]      ; 0043ae4b | DAT_007e4d58
    INC ESI                             ; 0043ae51
    ADD ESP,0xc                         ; 0043ae52
    MOV dword ptr [0x007e4d58],ESI      ; 0043ae55 | DAT_007e4d58
    JMP 0x0043ae1b                      ; 0043ae5b
        ;   XREF to: 0043ae1b (UNCONDITIONAL_JUMP)  ; caseD_3

