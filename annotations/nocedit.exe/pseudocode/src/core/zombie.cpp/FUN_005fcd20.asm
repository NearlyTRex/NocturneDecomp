; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_zombie_cpp_FUN_005fcd20(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   int g_RasterizerDepthBias
;   int g_RasterizerEdgeCount
;   SSoftwareEdge[16] g_RasterizerEdgeArray
;   undefined4 g_RasterizerEdgeArray[0].base.y_max
;   undefined4 g_RasterizerEdgeArray[0].base.x_current
;   undefined4 g_RasterizerEdgeArray[0].base.x_gradient
;   undefined4 g_RasterizerEdgeArray[0].base.w_current
;   undefined4 g_RasterizerEdgeArray[0].base.w_gradient
;   int g_RasterizerMinY
;   int g_RasterizerMaxY
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fcd20
        ;   Label: core_zombie.cpp_FUN_005fcd20
    PUSH EDI                            ; 005fcd21
    PUSH EBP                            ; 005fcd22
    SUB ESP,0x4                         ; 005fcd23
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fcd26
    MOV EDI,dword ptr [ESP + 0x18]      ; 005fcd2a
    MOV EDX,dword ptr [EDI + 0x14]      ; 005fcd2e
    MOV EAX,dword ptr [EBX + 0x14]      ; 005fcd31
    SAR EDX,0x10                        ; 005fcd34
    SAR EAX,0x10                        ; 005fcd37
    CMP EAX,EDX                         ; 005fcd3a
    JZ 0x005fce25                       ; 005fcd3c
        ;   XREF to: 005fce25 (CONDITIONAL_JUMP)  ; LAB_005fce25
    PUSH ESI                            ; 005fcd42
    MOV ESI,dword ptr [EDI + 0x14]      ; 005fcd43
    CMP ESI,dword ptr [EBX + 0x14]      ; 005fcd46
    JGE 0x005fcd57                      ; 005fcd49
        ;   XREF to: 005fcd57 (CONDITIONAL_JUMP)  ; LAB_005fcd57
    MOV ECX,EBX                         ; 005fcd4b
    MOV EBX,EDI                         ; 005fcd4d
    MOV EDI,ECX                         ; 005fcd4f
    MOV ECX,EAX                         ; 005fcd51
    MOV EAX,EDX                         ; 005fcd53
    MOV EDX,ECX                         ; 005fcd55
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fcd57 | g_RasterizerEdgeCount
        ;   Label: LAB_005fcd57
    LEA ECX,[ESI*0x8 + 0x0]             ; 005fcd5d
    ADD ECX,ESI                         ; 005fcd64
    MOV ESI,0x3f9ad60                   ; 005fcd66 | g_RasterizerEdgeArray
    SHL ECX,0x3                         ; 005fcd6b
    ADD ESI,ECX                         ; 005fcd6e
    MOV dword ptr [ESI],EAX             ; 005fcd70 | g_RasterizerEdgeArray
    MOV EBP,dword ptr [0x03f9b1e0]      ; 005fcd72 | g_RasterizerMinY
    MOV dword ptr [ESI + 0x4],EDX       ; 005fcd78 | g_RasterizerEdgeArray[0].base.y_max
    CMP EAX,EBP                         ; 005fcd7b
    JGE 0x005fcd84                      ; 005fcd7d
        ;   XREF to: 005fcd84 (CONDITIONAL_JUMP)  ; LAB_005fcd84
    MOV [0x03f9b1e0],EAX                ; 005fcd7f | g_RasterizerMinY
    CMP EDX,dword ptr [0x03f9b1e4]      ; 005fcd84 | g_RasterizerMaxY
        ;   Label: LAB_005fcd84
    JLE 0x005fcd92                      ; 005fcd8a
        ;   XREF to: 005fcd92 (CONDITIONAL_JUMP)  ; LAB_005fcd92
    MOV dword ptr [0x03f9b1e4],EDX      ; 005fcd8c | g_RasterizerMaxY
    MOV EDX,dword ptr [EBX + 0x14]      ; 005fcd92
        ;   Label: LAB_005fcd92
    MOV ECX,dword ptr [EDI + 0x14]      ; 005fcd95
    SUB ECX,EDX                         ; 005fcd98
    CMP ECX,0x10000                     ; 005fcd9a
    JNC 0x005fce2c                      ; 005fcda0
        ;   XREF to: 005fce2c (CONDITIONAL_JUMP)  ; LAB_005fce2c
    XOR ECX,ECX                         ; 005fcda6
    MOV EAX,dword ptr [EDI + 0x10]      ; 005fcda8
        ;   Label: LAB_005fcda8
    MOV EDX,dword ptr [EBX + 0x10]      ; 005fcdab
    MOV EBP,dword ptr [EBX + 0x14]      ; 005fcdae
    SUB EAX,EDX                         ; 005fcdb1
    AND EBP,0xffff                      ; 005fcdb3
    MOV EDX,EAX                         ; 005fcdb9
    MOV EAX,ECX                         ; 005fcdbb
    XOR EBP,0xffff                      ; 005fcdbd
    IMUL EDX                            ; 005fcdc3
    SHRD EAX,EDX,0x10                   ; 005fcdc5
    MOV EDX,EAX                         ; 005fcdc9
    MOV dword ptr [ESI + 0xc],EAX       ; 005fcdcb | g_RasterizerEdgeArray[0].base.x_gradient
    MOV EAX,EBP                         ; 005fcdce
    IMUL EDX                            ; 005fcdd0
    SHRD EAX,EDX,0x10                   ; 005fcdd2
    MOV dword ptr [ESP + 0x4],EAX       ; 005fcdd6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005fcdda
    MOV EAX,dword ptr [EBX + 0x10]      ; 005fcdde
    ADD EAX,EDX                         ; 005fcde1
    MOV dword ptr [ESI + 0x8],EAX       ; 005fcde3 | g_RasterizerEdgeArray[0].base.x_current
    MOV EDX,dword ptr [EDI + 0x8]       ; 005fcde6
    SUB EDX,dword ptr [EBX + 0x8]       ; 005fcde9
    MOV EAX,ECX                         ; 005fcdec
    SHL EDX,0x8                         ; 005fcdee
    IMUL EDX                            ; 005fcdf1
    SHRD EAX,EDX,0x10                   ; 005fcdf3
    MOV dword ptr [ESI + 0x2c],EAX      ; 005fcdf7 | g_RasterizerEdgeArray[0].base.w_gradient
    MOV ECX,dword ptr [EBX + 0x8]       ; 005fcdfa
    MOV EAX,[0x02c6d03c]                ; 005fcdfd | g_RasterizerDepthBias
    SHL ECX,0x8                         ; 005fce02
    MOV EDX,dword ptr [ESI + 0x2c]      ; 005fce05 | g_RasterizerEdgeArray[0].base.w_gradient
    SUB ECX,EAX                         ; 005fce08
    MOV EAX,EBP                         ; 005fce0a
    IMUL EDX                            ; 005fce0c
    SHRD EAX,EDX,0x10                   ; 005fce0e
    MOV EDX,dword ptr [0x03f9ad5c]      ; 005fce12 | g_RasterizerEdgeCount
    ADD ECX,EAX                         ; 005fce18
    INC EDX                             ; 005fce1a
    MOV dword ptr [ESI + 0x28],ECX      ; 005fce1b | g_RasterizerEdgeArray[0].base.w_current
    MOV dword ptr [0x03f9ad5c],EDX      ; 005fce1e | g_RasterizerEdgeCount
    POP ESI                             ; 005fce24
    ADD ESP,0x4                         ; 005fce25
        ;   Label: LAB_005fce25
    POP EBP                             ; 005fce28
    POP EDI                             ; 005fce29
    POP EBX                             ; 005fce2a
    RET                                 ; 005fce2b
    MOV EAX,0xffffffff                  ; 005fce2c
        ;   Label: LAB_005fce2c
    XOR EDX,EDX                         ; 005fce31
    DIV ECX                             ; 005fce33
    MOV ECX,EAX                         ; 005fce35
    JMP 0x005fcda8                      ; 005fce37
        ;   XREF to: 005fcda8 (UNCONDITIONAL_JUMP)  ; LAB_005fcda8

