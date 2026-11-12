; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_setupDepthOnlyEdgeInterpolation_FUN_0047a320(SSoftwareEdge *vertex_a,SSoftwareEdge *vertex_b)
;
; Parameters:
; SSoftwareEdge *  Stack[0x4]:4   vertex_a
; SSoftwareEdge *  Stack[0x8]:4   vertex_b
;
; Referenced Globals:
;   undefined4 DAT_01bc0784
;   undefined4 DAT_01bc0c88
;   undefined4 DAT_01bc0c8c
;   undefined4 DAT_01bc0cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a320
        ;   Label: core_dpart.cpp_setupDepthOnlyEdgeInterpolation_FUN_0047a320
    PUSH EDI                            ; 0047a321
    PUSH EBP                            ; 0047a322
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047a323
    MOV EDI,dword ptr [ESP + 0x14]      ; 0047a327
    MOV EDX,dword ptr [EDI + 0x14]      ; 0047a32b
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047a32e
    SAR EDX,0x10                        ; 0047a331
    SAR EAX,0x10                        ; 0047a334
    CMP EAX,EDX                         ; 0047a337
    JZ 0x0047a41e                       ; 0047a339
        ;   XREF to: 0047a41e (CONDITIONAL_JUMP)  ; LAB_0047a41e
    PUSH ESI                            ; 0047a33f
    MOV ESI,dword ptr [EDI + 0x14]      ; 0047a340
    CMP ESI,dword ptr [EBX + 0x14]      ; 0047a343
    JGE 0x0047a354                      ; 0047a346
        ;   XREF to: 0047a354 (CONDITIONAL_JUMP)  ; LAB_0047a354
    MOV ECX,EBX                         ; 0047a348
    MOV EBX,EDI                         ; 0047a34a
    MOV EDI,ECX                         ; 0047a34c
    MOV ECX,EAX                         ; 0047a34e
    MOV EAX,EDX                         ; 0047a350
    MOV EDX,ECX                         ; 0047a352
    MOV ESI,dword ptr [0x01bc0784]      ; 0047a354 | DAT_01bc0784
        ;   Label: LAB_0047a354
    LEA ECX,[ESI*0x4 + 0x0]             ; 0047a35a
    ADD ECX,ESI                         ; 0047a361
    MOV ESI,0x1bc0788                   ; 0047a363
    SHL ECX,0x4                         ; 0047a368
    ADD ESI,ECX                         ; 0047a36b
    MOV dword ptr [ESI],EAX             ; 0047a36d
    MOV EBP,dword ptr [0x01bc0c88]      ; 0047a36f | DAT_01bc0c88
    MOV dword ptr [ESI + 0x4],EDX       ; 0047a375
    CMP EAX,EBP                         ; 0047a378
    JGE 0x0047a381                      ; 0047a37a
        ;   XREF to: 0047a381 (CONDITIONAL_JUMP)  ; LAB_0047a381
    MOV [0x01bc0c88],EAX                ; 0047a37c | DAT_01bc0c88
    CMP EDX,dword ptr [0x01bc0c8c]      ; 0047a381 | DAT_01bc0c8c
        ;   Label: LAB_0047a381
    JLE 0x0047a38f                      ; 0047a387
        ;   XREF to: 0047a38f (CONDITIONAL_JUMP)  ; LAB_0047a38f
    MOV dword ptr [0x01bc0c8c],EDX      ; 0047a389 | DAT_01bc0c8c
    MOV EDX,dword ptr [EBX + 0x14]      ; 0047a38f
        ;   Label: LAB_0047a38f
    MOV ECX,dword ptr [EDI + 0x14]      ; 0047a392
    SUB ECX,EDX                         ; 0047a395
    CMP ECX,0x10000                     ; 0047a397
    JNC 0x0047a422                      ; 0047a39d
        ;   XREF to: 0047a422 (CONDITIONAL_JUMP)  ; LAB_0047a422
    XOR ECX,ECX                         ; 0047a3a3
    MOV EDX,dword ptr [EDI + 0x10]      ; 0047a3a5
        ;   Label: LAB_0047a3a5
    MOV EBP,dword ptr [EBX + 0x10]      ; 0047a3a8
    MOV EAX,ECX                         ; 0047a3ab
    SUB EDX,EBP                         ; 0047a3ad
    IMUL EDX                            ; 0047a3af
    SHRD EAX,EDX,0x10                   ; 0047a3b1
    MOV dword ptr [ESI + 0xc],EAX       ; 0047a3b5
    MOV EAX,dword ptr [EDI + 0x8]       ; 0047a3b8
    MOV EDX,dword ptr [EBX + 0x8]       ; 0047a3bb
    SUB EAX,EDX                         ; 0047a3be
    MOV EDX,EAX                         ; 0047a3c0
    SHL EDX,0x8                         ; 0047a3c2
    MOV EAX,ECX                         ; 0047a3c5
    IMUL EDX                            ; 0047a3c7
    SHRD EAX,EDX,0x10                   ; 0047a3c9
    MOV dword ptr [ESI + 0x2c],EAX      ; 0047a3cd
    MOV ECX,dword ptr [EBX + 0x14]      ; 0047a3d0
    AND ECX,0xffff                      ; 0047a3d3
    XOR CX,0xffff                       ; 0047a3d9
    MOV EDX,dword ptr [ESI + 0xc]       ; 0047a3dd
    MOV EAX,ECX                         ; 0047a3e0
    IMUL EDX                            ; 0047a3e2
    SHRD EAX,EDX,0x10                   ; 0047a3e4
    MOV EDX,EAX                         ; 0047a3e8
    MOV EAX,dword ptr [EBX + 0x10]      ; 0047a3ea
    MOV EDI,dword ptr [0x01bc0cd0]      ; 0047a3ed | DAT_01bc0cd0
    ADD EAX,EDX                         ; 0047a3f3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0047a3f5
    MOV dword ptr [ESI + 0x8],EAX       ; 0047a3f8
    MOV EAX,ECX                         ; 0047a3fb
    MOV EBX,dword ptr [EBX + 0x8]       ; 0047a3fd
    IMUL EDX                            ; 0047a400
    SHRD EAX,EDX,0x10                   ; 0047a402
    SHL EBX,0x8                         ; 0047a406
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a409 | DAT_01bc0784
    SUB EBX,EDI                         ; 0047a40f
    INC EBP                             ; 0047a411
    ADD EBX,EAX                         ; 0047a412
    MOV dword ptr [0x01bc0784],EBP      ; 0047a414 | DAT_01bc0784
    MOV dword ptr [ESI + 0x28],EBX      ; 0047a41a
    POP ESI                             ; 0047a41d
    POP EBP                             ; 0047a41e
        ;   Label: LAB_0047a41e
    POP EDI                             ; 0047a41f
    POP EBX                             ; 0047a420
    RET                                 ; 0047a421
    MOV EAX,0xffffffff                  ; 0047a422
        ;   Label: LAB_0047a422
    XOR EDX,EDX                         ; 0047a427
    DIV ECX                             ; 0047a429
    MOV ECX,EAX                         ; 0047a42b
    JMP 0x0047a3a5                      ; 0047a42d
        ;   XREF to: 0047a3a5 (UNCONDITIONAL_JUMP)  ; LAB_0047a3a5

