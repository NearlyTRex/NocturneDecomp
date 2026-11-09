; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList3_FUN_0055fbd0(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; STrianglePackedIndices * Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01e61b58
;   undefined4 DAT_0264bbf8
;   undefined4 DAT_0264bc04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055fbd0
        ;   Label: engine_special.cpp_drawPolyList3_FUN_0055fbd0
    PUSH ESI                            ; 0055fbd1
    PUSH EDI                            ; 0055fbd2
    PUSH EBP                            ; 0055fbd3
    SUB ESP,0xc                         ; 0055fbd4
    MOV EDI,dword ptr [ESP + 0x20]      ; 0055fbd7
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055fbdb
    MOV EBP,dword ptr [ESP + 0x28]      ; 0055fbdf
    CMP dword ptr [0x01c37788],0x0      ; 0055fbe3 | DAT_01c37788
    JZ 0x0055fc6d                       ; 0055fbea
        ;   XREF to: 0055fc6d (CONDITIONAL_JUMP)  ; LAB_0055fc6d
    MOV EAX,[0x01e61b58]                ; 0055fbf0 | DAT_01e61b58
    MOV ECX,dword ptr [0x0264bc04]      ; 0055fbf5 | DAT_0264bc04
    ADD EAX,EBP                         ; 0055fbfb
    TEST ECX,ECX                        ; 0055fbfd
    JNZ 0x0055fc77                      ; 0055fbff
        ;   XREF to: 0055fc77 (CONDITIONAL_JUMP)  ; LAB_0055fc77
    MOV [0x01e61b58],EAX                ; 0055fc05 | DAT_01e61b58
    XOR ESI,ESI                         ; 0055fc0a
    TEST EBP,EBP                        ; 0055fc0c
    JLE 0x0055fc60                      ; 0055fc0e
        ;   XREF to: 0055fc60 (CONDITIONAL_JUMP)  ; LAB_0055fc60
    XOR EAX,EAX                         ; 0055fc10
        ;   Label: LAB_0055fc10
    MOV AX,word ptr [EBX]               ; 0055fc12
    IMUL EAX,EAX,0x30                   ; 0055fc15
    LEA EDX,[EDI + EAX*0x1]             ; 0055fc18
    MOV dword ptr [ESP],EDX             ; 0055fc1b
    XOR EAX,EAX                         ; 0055fc1e
    MOV AX,word ptr [EBX + 0x2]         ; 0055fc20
    IMUL EAX,EAX,0x30                   ; 0055fc24
    LEA EDX,[EDI + EAX*0x1]             ; 0055fc27
    MOV dword ptr [ESP + 0x4],EDX       ; 0055fc2a
    XOR EAX,EAX                         ; 0055fc2e
    MOV AX,word ptr [EBX + 0x4]         ; 0055fc30
    IMUL EAX,EAX,0x30                   ; 0055fc34
    LEA EDX,[EDI + EAX*0x1]             ; 0055fc37
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0055fc3a
    PUSH EAX                            ; 0055fc3e
    PUSH 0x3                            ; 0055fc3f
    LEA EAX,[ESP + 0x8]                 ; 0055fc41
    ADD EBX,0x6                         ; 0055fc45
    PUSH EAX                            ; 0055fc48
    INC ESI                             ; 0055fc49
    MOV dword ptr [ESP + 0x14],EDX      ; 0055fc4a
    CALL dword ptr [0x0264bbf8]         ; 0055fc4e | DAT_0264bbf8
    ADD ESP,0xc                         ; 0055fc54
    CMP ESI,EBP                         ; 0055fc57
    JL 0x0055fc10                       ; 0055fc59
        ;   XREF to: 0055fc10 (CONDITIONAL_JUMP)  ; LAB_0055fc10
    LEA EAX,[EAX]                       ; 0055fc5b
    MOV ECX,ECX                         ; 0055fc5e
    MOV EAX,0x1                         ; 0055fc60
        ;   Label: LAB_0055fc60
    ADD ESP,0xc                         ; 0055fc65
    POP EBP                             ; 0055fc68
    POP EDI                             ; 0055fc69
    POP ESI                             ; 0055fc6a
    POP EBX                             ; 0055fc6b
    RET                                 ; 0055fc6c
    XOR EAX,EAX                         ; 0055fc6d
        ;   Label: LAB_0055fc6d
    ADD ESP,0xc                         ; 0055fc6f
    POP EBP                             ; 0055fc72
    POP EDI                             ; 0055fc73
    POP ESI                             ; 0055fc74
    POP EBX                             ; 0055fc75
    RET                                 ; 0055fc76
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0055fc77
        ;   Label: LAB_0055fc77
    PUSH ESI                            ; 0055fc7b
    PUSH EBP                            ; 0055fc7c
    PUSH EBX                            ; 0055fc7d
    PUSH EDI                            ; 0055fc7e
    MOV [0x01e61b58],EAX                ; 0055fc7f | DAT_01e61b58
    CALL dword ptr [0x0264bc04]         ; 0055fc84 | DAT_0264bc04
    ADD ESP,0x10                        ; 0055fc8a
    ADD ESP,0xc                         ; 0055fc8d
    POP EBP                             ; 0055fc90
    POP EDI                             ; 0055fc91
    POP ESI                             ; 0055fc92
    POP EBX                             ; 0055fc93
    RET                                 ; 0055fc94

