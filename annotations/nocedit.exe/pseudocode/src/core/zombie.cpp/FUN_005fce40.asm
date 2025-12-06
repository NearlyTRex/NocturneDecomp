; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_zombie.cpp_FUN_005fce40()
;
;
; Referenced Globals:
;   int g_RasterizerEdgeCount
;   SEdgeData[16] g_RasterizerEdgeArray
;   undefined4 g_RasterizerEdgeArray[0].y_end
;   undefined4 g_RasterizerEdgeArray[0].x_current
;   undefined4 g_RasterizerEdgeArray[0].x_delta
;   undefined4 g_RasterizerEdgeArray[0].light_current
;   undefined4 g_RasterizerEdgeArray[0].light_delta
;   undefined4 g_RasterizerEdgeArray[0].z_current
;   undefined4 g_RasterizerEdgeArray[0].z_delta
;   int g_RasterizerMinY
;   int g_RasterizerMaxY
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fce40
        ;   Label: core_zombie.cpp_FUN_005fce40
    PUSH ESI                            ; 005fce41
    PUSH EDI                            ; 005fce42
    PUSH EBP                            ; 005fce43
    MOV ESI,dword ptr [ESP + 0x14]      ; 005fce44
    MOV EDI,dword ptr [ESP + 0x18]      ; 005fce48
    MOV EBX,dword ptr [EDI + 0x14]      ; 005fce4c
    MOV EAX,dword ptr [ESI + 0x14]      ; 005fce4f
    SAR EBX,0x10                        ; 005fce52
    SAR EAX,0x10                        ; 005fce55
    CMP EAX,EBX                         ; 005fce58
    JZ 0x005fcf63                       ; 005fce5a | LAB_005fcf63
        ;   XREF to: 005fcf63 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDI + 0x14]      ; 005fce60
    CMP ECX,dword ptr [ESI + 0x14]      ; 005fce63
    JGE 0x005fce74                      ; 005fce66 | LAB_005fce74
        ;   XREF to: 005fce74 (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 005fce68
    MOV ESI,EDI                         ; 005fce6a
    MOV EDI,EDX                         ; 005fce6c
    MOV EDX,EAX                         ; 005fce6e
    MOV EAX,EBX                         ; 005fce70
    MOV EBX,EDX                         ; 005fce72
    MOV EDX,dword ptr [0x03f9ad5c]      ; 005fce74 | int g_RasterizerEdgeCount
        ;   Label: LAB_005fce74
    LEA ECX,[EDX*0x8 + 0x0]             ; 005fce7a
    ADD ECX,EDX                         ; 005fce81
    SHL ECX,0x3                         ; 005fce83
    ADD ECX,0x3f9ad60                   ; 005fce86 | SEdgeData[16] g_RasterizerEdgeArray
    MOV dword ptr [ECX],EAX             ; 005fce8c | SEdgeData[16] g_RasterizerEdgeArray
    MOV EBP,dword ptr [0x03f9b1e0]      ; 005fce8e | int g_RasterizerMinY
    MOV dword ptr [ECX + 0x4],EBX       ; 005fce94 | g_RasterizerEdgeArray[0].y_end
    CMP EAX,EBP                         ; 005fce97
    JGE 0x005fcea0                      ; 005fce99 | LAB_005fcea0
        ;   XREF to: 005fcea0 (CONDITIONAL_JUMP)
    MOV [0x03f9b1e0],EAX                ; 005fce9b | int g_RasterizerMinY
    CMP EBX,dword ptr [0x03f9b1e4]      ; 005fcea0 | int g_RasterizerMaxY
        ;   Label: LAB_005fcea0
    JLE 0x005fceae                      ; 005fcea6 | LAB_005fceae
        ;   XREF to: 005fceae (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f9b1e4],EBX      ; 005fcea8 | int g_RasterizerMaxY
    MOV EAX,dword ptr [ESI + 0x10]      ; 005fceae
        ;   Label: LAB_005fceae
    MOV dword ptr [ECX + 0x8],EAX       ; 005fceb1 | g_RasterizerEdgeArray[0].x_current
    MOV EAX,dword ptr [ESI + 0x8]       ; 005fceb4
    SHL EAX,0x8                         ; 005fceb7
    MOV dword ptr [ECX + 0x28],EAX      ; 005fceba | g_RasterizerEdgeArray[0].z_current
    MOV EAX,dword ptr [ESI + 0x20]      ; 005fcebd
    MOV dword ptr [ECX + 0x10],EAX      ; 005fcec0 | g_RasterizerEdgeArray[0].light_current
    MOV EBX,dword ptr [EDI + 0x14]      ; 005fcec3
    SUB EBX,dword ptr [ESI + 0x14]      ; 005fcec6
    CMP EBX,0x10000                     ; 005fcec9
    JNC 0x005fcf68                      ; 005fcecf | LAB_005fcf68
        ;   XREF to: 005fcf68 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 005fced5
    MOV EDX,dword ptr [EDI + 0x10]      ; 005fced7
        ;   Label: LAB_005fced7
    MOV EBP,dword ptr [ESI + 0x10]      ; 005fceda
    MOV EAX,EBX                         ; 005fcedd
    SUB EDX,EBP                         ; 005fcedf
    IMUL EDX                            ; 005fcee1
    SHRD EAX,EDX,0x10                   ; 005fcee3
    MOV dword ptr [ECX + 0xc],EAX       ; 005fcee7 | g_RasterizerEdgeArray[0].x_delta
    MOV EAX,dword ptr [EDI + 0x8]       ; 005fceea
    MOV EDX,dword ptr [ESI + 0x8]       ; 005fceed
    SUB EAX,EDX                         ; 005fcef0
    MOV EDX,EAX                         ; 005fcef2
    SHL EDX,0x8                         ; 005fcef4
    MOV EAX,EBX                         ; 005fcef7
    IMUL EDX                            ; 005fcef9
    SHRD EAX,EDX,0x10                   ; 005fcefb
    MOV dword ptr [ECX + 0x2c],EAX      ; 005fceff | g_RasterizerEdgeArray[0].z_delta
    MOV EDX,dword ptr [EDI + 0x20]      ; 005fcf02
    MOV EDI,dword ptr [ESI + 0x20]      ; 005fcf05
    MOV EAX,EBX                         ; 005fcf08
    SUB EDX,EDI                         ; 005fcf0a
    IMUL EDX                            ; 005fcf0c
    SHRD EAX,EDX,0x10                   ; 005fcf0e
    MOV dword ptr [ECX + 0x14],EAX      ; 005fcf12 | g_RasterizerEdgeArray[0].light_delta
    MOV EBX,dword ptr [ESI + 0x14]      ; 005fcf15
    AND EBX,0xffff                      ; 005fcf18
    XOR BX,0xffff                       ; 005fcf1e
    MOV EDX,dword ptr [ECX + 0xc]       ; 005fcf22 | g_RasterizerEdgeArray[0].x_delta
    MOV EAX,EBX                         ; 005fcf25
    IMUL EDX                            ; 005fcf27
    SHRD EAX,EDX,0x10                   ; 005fcf29
    MOV EBP,dword ptr [ECX + 0x8]       ; 005fcf2d | g_RasterizerEdgeArray[0].x_current
    MOV EDX,dword ptr [ECX + 0x2c]      ; 005fcf30 | g_RasterizerEdgeArray[0].z_delta
    ADD EBP,EAX                         ; 005fcf33
    MOV EAX,EBX                         ; 005fcf35
    MOV dword ptr [ECX + 0x8],EBP       ; 005fcf37 | g_RasterizerEdgeArray[0].x_current
    IMUL EDX                            ; 005fcf3a
    SHRD EAX,EDX,0x10                   ; 005fcf3c
    ADD dword ptr [ECX + 0x28],EAX      ; 005fcf40 | g_RasterizerEdgeArray[0].z_current
    MOV EAX,EBX                         ; 005fcf43
    MOV EDX,dword ptr [ECX + 0x14]      ; 005fcf45 | g_RasterizerEdgeArray[0].light_delta
    IMUL EDX                            ; 005fcf48
    SHRD EAX,EDX,0x10                   ; 005fcf4a
    MOV ESI,dword ptr [0x03f9ad5c]      ; 005fcf4e | int g_RasterizerEdgeCount
    MOV EBX,dword ptr [ECX + 0x10]      ; 005fcf54 | g_RasterizerEdgeArray[0].light_current
    INC ESI                             ; 005fcf57
    ADD EBX,EAX                         ; 005fcf58
    MOV dword ptr [0x03f9ad5c],ESI      ; 005fcf5a | int g_RasterizerEdgeCount
    MOV dword ptr [ECX + 0x10],EBX      ; 005fcf60 | g_RasterizerEdgeArray[0].light_current
    POP EBP                             ; 005fcf63
        ;   Label: LAB_005fcf63
    POP EDI                             ; 005fcf64
    POP ESI                             ; 005fcf65
    POP EBX                             ; 005fcf66
    RET                                 ; 005fcf67
    MOV EAX,0xffffffff                  ; 005fcf68
        ;   Label: LAB_005fcf68
    XOR EDX,EDX                         ; 005fcf6d
    DIV EBX                             ; 005fcf6f
    MOV EBX,EAX                         ; 005fcf71
    JMP 0x005fced7                      ; 005fcf73 | LAB_005fced7
        ;   XREF to: 005fced7 (UNCONDITIONAL_JUMP)

