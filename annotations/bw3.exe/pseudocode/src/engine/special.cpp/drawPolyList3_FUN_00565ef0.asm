; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_drawPolyList3_FUN_00565ef0(SRenderVertex *vertex_buffer,STrianglePackedIndices *polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; STrianglePackedIndices * Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01ed3198
;   undefined4 DAT_02cf6024
;   undefined4 DAT_02cf6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565ef0
        ;   Label: engine_special.cpp_drawPolyList3_FUN_00565ef0
    PUSH ESI                            ; 00565ef1
    PUSH EDI                            ; 00565ef2
    PUSH EBP                            ; 00565ef3
    SUB ESP,0xc                         ; 00565ef4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565ef7
    MOV EBX,dword ptr [ESP + 0x24]      ; 00565efb
    MOV EBP,dword ptr [ESP + 0x28]      ; 00565eff
    CMP dword ptr [0x01c6cee8],0x0      ; 00565f03 | DAT_01c6cee8
    JZ 0x00565f8d                       ; 00565f0a
        ;   XREF to: 00565f8d (CONDITIONAL_JUMP)  ; LAB_00565f8d
    MOV EAX,[0x01ed3198]                ; 00565f10 | DAT_01ed3198
    MOV ECX,dword ptr [0x02cf6030]      ; 00565f15 | DAT_02cf6030
    ADD EAX,EBP                         ; 00565f1b
    TEST ECX,ECX                        ; 00565f1d
    JNZ 0x00565f97                      ; 00565f1f
        ;   XREF to: 00565f97 (CONDITIONAL_JUMP)  ; LAB_00565f97
    MOV [0x01ed3198],EAX                ; 00565f25 | DAT_01ed3198
    XOR ESI,ESI                         ; 00565f2a
    TEST EBP,EBP                        ; 00565f2c
    JLE 0x00565f80                      ; 00565f2e
        ;   XREF to: 00565f80 (CONDITIONAL_JUMP)  ; LAB_00565f80
    XOR EAX,EAX                         ; 00565f30
        ;   Label: LAB_00565f30
    MOV AX,word ptr [EBX]               ; 00565f32
    IMUL EAX,EAX,0x30                   ; 00565f35
    LEA EDX,[EDI + EAX*0x1]             ; 00565f38
    MOV dword ptr [ESP],EDX             ; 00565f3b
    XOR EAX,EAX                         ; 00565f3e
    MOV AX,word ptr [EBX + 0x2]         ; 00565f40
    IMUL EAX,EAX,0x30                   ; 00565f44
    LEA EDX,[EDI + EAX*0x1]             ; 00565f47
    MOV dword ptr [ESP + 0x4],EDX       ; 00565f4a
    XOR EAX,EAX                         ; 00565f4e
    MOV AX,word ptr [EBX + 0x4]         ; 00565f50
    IMUL EAX,EAX,0x30                   ; 00565f54
    LEA EDX,[EDI + EAX*0x1]             ; 00565f57
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00565f5a
    PUSH EAX                            ; 00565f5e
    PUSH 0x3                            ; 00565f5f
    LEA EAX,[ESP + 0x8]                 ; 00565f61
    ADD EBX,0x6                         ; 00565f65
    PUSH EAX                            ; 00565f68
    INC ESI                             ; 00565f69
    MOV dword ptr [ESP + 0x14],EDX      ; 00565f6a
    CALL dword ptr [0x02cf6024]         ; 00565f6e | DAT_02cf6024
    ADD ESP,0xc                         ; 00565f74
    CMP ESI,EBP                         ; 00565f77
    JL 0x00565f30                       ; 00565f79
        ;   XREF to: 00565f30 (CONDITIONAL_JUMP)  ; LAB_00565f30
    LEA EAX,[EAX]                       ; 00565f7b
    MOV ECX,ECX                         ; 00565f7e
    MOV EAX,0x1                         ; 00565f80
        ;   Label: LAB_00565f80
    ADD ESP,0xc                         ; 00565f85
    POP EBP                             ; 00565f88
    POP EDI                             ; 00565f89
    POP ESI                             ; 00565f8a
    POP EBX                             ; 00565f8b
    RET                                 ; 00565f8c
    XOR EAX,EAX                         ; 00565f8d
        ;   Label: LAB_00565f8d
    ADD ESP,0xc                         ; 00565f8f
    POP EBP                             ; 00565f92
    POP EDI                             ; 00565f93
    POP ESI                             ; 00565f94
    POP EBX                             ; 00565f95
    RET                                 ; 00565f96
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00565f97
        ;   Label: LAB_00565f97
    PUSH ESI                            ; 00565f9b
    PUSH EBP                            ; 00565f9c
    PUSH EBX                            ; 00565f9d
    PUSH EDI                            ; 00565f9e
    MOV [0x01ed3198],EAX                ; 00565f9f | DAT_01ed3198
    CALL dword ptr [0x02cf6030]         ; 00565fa4 | DAT_02cf6030
    ADD ESP,0x10                        ; 00565faa
    ADD ESP,0xc                         ; 00565fad
    POP EBP                             ; 00565fb0
    POP EDI                             ; 00565fb1
    POP ESI                             ; 00565fb2
    POP EBX                             ; 00565fb3
    RET                                 ; 00565fb4

