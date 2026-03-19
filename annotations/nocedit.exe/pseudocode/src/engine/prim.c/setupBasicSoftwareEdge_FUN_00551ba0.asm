; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupBasicSoftwareEdge_FUN_00551ba0(SRenderVertex *start_vertex,SRenderVertex *end_vertex)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   start_vertex
; SRenderVertex *  Stack[0x8]:4   end_vertex
;
; Referenced Globals:
;   int g_SoftwareEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeBuffer
;   undefined4 g_SoftwareEdgeBuffer[0].base.y_max
;   undefined4 g_SoftwareEdgeBuffer[0].base.x_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.x_gradient
;   undefined4 g_SoftwareEdgeBuffer[0].base.z_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.z_gradient
;   undefined4 g_SoftwareEdgeBuffer[0].base.u_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.u_gradient
;   undefined4 g_SoftwareEdgeBuffer[0].base.v_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.v_gradient
;   undefined4 g_SoftwareEdgeBuffer[0].base.w_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.w_gradient
;   undefined4 g_SoftwareEdgeBuffer[0].base.fog_current
;   undefined4 g_SoftwareEdgeBuffer[0].base.fog_gradient
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551ba0
        ;   Label: engine_prim.c_setupBasicSoftwareEdge_FUN_00551ba0
    PUSH ESI                            ; 00551ba1
    PUSH EDI                            ; 00551ba2
    PUSH EBP                            ; 00551ba3
    SUB ESP,0x4                         ; 00551ba4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00551ba7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00551bab
    MOV EDI,dword ptr [EBP + 0x14]      ; 00551baf
    MOV EBX,dword ptr [ESI + 0x14]      ; 00551bb2
    SAR EDI,0x10                        ; 00551bb5
    SAR EBX,0x10                        ; 00551bb8
    CMP EBX,EDI                         ; 00551bbb
    JZ 0x00551d44                       ; 00551bbd
        ;   XREF to: 00551d44 (CONDITIONAL_JUMP)  ; LAB_00551d44
    MOV EDX,dword ptr [EBP + 0x14]      ; 00551bc3
    CMP EDX,dword ptr [ESI + 0x14]      ; 00551bc6
    JGE 0x00551bd7                      ; 00551bc9
        ;   XREF to: 00551bd7 (CONDITIONAL_JUMP)  ; LAB_00551bd7
    MOV EAX,ESI                         ; 00551bcb
    MOV ESI,EBP                         ; 00551bcd
    MOV EBP,EAX                         ; 00551bcf
    MOV EAX,EBX                         ; 00551bd1
    MOV EBX,EDI                         ; 00551bd3
    MOV EDI,EAX                         ; 00551bd5
    MOV EAX,[0x030e5228]                ; 00551bd7 | g_SoftwareEdgeCount
        ;   Label: LAB_00551bd7
    LEA ECX,[EAX*0x8 + 0x0]             ; 00551bdc
    ADD ECX,EAX                         ; 00551be3
    SHL ECX,0x3                         ; 00551be5
    ADD ECX,0x30e522c                   ; 00551be8 | g_SoftwareEdgeBuffer
    MOV dword ptr [ECX],EBX             ; 00551bee | g_SoftwareEdgeBuffer
    MOV EAX,[0x030e56ac]                ; 00551bf0 | g_SoftwareMinScanline
    MOV dword ptr [ECX + 0x4],EDI       ; 00551bf5 | g_SoftwareEdgeBuffer[0].base.y_max
    CMP EBX,EAX                         ; 00551bf8
    JGE 0x00551c02                      ; 00551bfa
        ;   XREF to: 00551c02 (CONDITIONAL_JUMP)  ; LAB_00551c02
    MOV dword ptr [0x030e56ac],EBX      ; 00551bfc | g_SoftwareMinScanline
    CMP EDI,dword ptr [0x030e56b0]      ; 00551c02 | g_SoftwareMaxScanline
        ;   Label: LAB_00551c02
    JLE 0x00551c10                      ; 00551c08
        ;   XREF to: 00551c10 (CONDITIONAL_JUMP)  ; LAB_00551c10
    MOV dword ptr [0x030e56b0],EDI      ; 00551c0a | g_SoftwareMaxScanline
    MOV EDI,dword ptr [ESI + 0x14]      ; 00551c10
        ;   Label: LAB_00551c10
    MOV EBX,dword ptr [EBP + 0x14]      ; 00551c13
    SUB EBX,EDI                         ; 00551c16
    CMP EBX,0x10000                     ; 00551c18
    JNC 0x00551d4c                      ; 00551c1e
        ;   XREF to: 00551d4c (CONDITIONAL_JUMP)  ; LAB_00551d4c
    XOR EBX,EBX                         ; 00551c24
    MOV EAX,dword ptr [EBP + 0x10]      ; 00551c26
        ;   Label: LAB_00551c26
    MOV EDX,dword ptr [ESI + 0x10]      ; 00551c29
    MOV EDI,dword ptr [ESI + 0x14]      ; 00551c2c
    SUB EAX,EDX                         ; 00551c2f
    AND EDI,0xffff                      ; 00551c31
    MOV EDX,EAX                         ; 00551c37
    MOV EAX,EBX                         ; 00551c39
    XOR DI,0xffff                       ; 00551c3b
    IMUL EDX                            ; 00551c3f
    SHRD EAX,EDX,0x10                   ; 00551c41
    MOV EDX,EAX                         ; 00551c45
    MOV dword ptr [ECX + 0xc],EAX       ; 00551c47 | g_SoftwareEdgeBuffer[0].base.x_gradient
    MOV EAX,EDI                         ; 00551c4a
    IMUL EDX                            ; 00551c4c
    SHRD EAX,EDX,0x10                   ; 00551c4e
    MOV dword ptr [ESP],EAX             ; 00551c52
    MOV EDX,dword ptr [ESP]             ; 00551c55
    MOV EAX,dword ptr [ESI + 0x10]      ; 00551c58
    ADD EAX,EDX                         ; 00551c5b
    MOV dword ptr [ECX + 0x8],EAX       ; 00551c5d | g_SoftwareEdgeBuffer[0].base.x_current
    MOV EAX,dword ptr [EBP + 0x18]      ; 00551c60
    MOV EDX,dword ptr [ESI + 0x18]      ; 00551c63
    SUB EAX,EDX                         ; 00551c66
    MOV EDX,EAX                         ; 00551c68
    MOV EAX,EBX                         ; 00551c6a
    IMUL EDX                            ; 00551c6c
    SHRD EAX,EDX,0x10                   ; 00551c6e
    MOV EDX,EAX                         ; 00551c72
    MOV dword ptr [ECX + 0x1c],EAX      ; 00551c74 | g_SoftwareEdgeBuffer[0].base.u_gradient
    MOV EAX,EDI                         ; 00551c77
    IMUL EDX                            ; 00551c79
    SHRD EAX,EDX,0x10                   ; 00551c7b
    MOV dword ptr [ESP],EAX             ; 00551c7f
    MOV EDX,dword ptr [ESP]             ; 00551c82
    MOV EAX,dword ptr [ESI + 0x18]      ; 00551c85
    ADD EAX,EDX                         ; 00551c88
    MOV dword ptr [ECX + 0x18],EAX      ; 00551c8a | g_SoftwareEdgeBuffer[0].base.u_current
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00551c8d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00551c90
    SUB EAX,EDX                         ; 00551c93
    MOV EDX,EAX                         ; 00551c95
    MOV EAX,EBX                         ; 00551c97
    IMUL EDX                            ; 00551c99
    SHRD EAX,EDX,0x10                   ; 00551c9b
    MOV EDX,EAX                         ; 00551c9f
    MOV dword ptr [ECX + 0x24],EAX      ; 00551ca1 | g_SoftwareEdgeBuffer[0].base.v_gradient
    MOV EAX,EDI                         ; 00551ca4
    IMUL EDX                            ; 00551ca6
    SHRD EAX,EDX,0x10                   ; 00551ca8
    MOV dword ptr [ESP],EAX             ; 00551cac
    MOV EDX,dword ptr [ESP]             ; 00551caf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00551cb2
    ADD EAX,EDX                         ; 00551cb5
    MOV dword ptr [ECX + 0x20],EAX      ; 00551cb7 | g_SoftwareEdgeBuffer[0].base.v_current
    MOV EAX,dword ptr [EBP + 0x20]      ; 00551cba
    MOV EDX,dword ptr [ESI + 0x20]      ; 00551cbd
    SUB EAX,EDX                         ; 00551cc0
    MOV EDX,EAX                         ; 00551cc2
    MOV EAX,EBX                         ; 00551cc4
    IMUL EDX                            ; 00551cc6
    SHRD EAX,EDX,0x10                   ; 00551cc8
    MOV EDX,EAX                         ; 00551ccc
    MOV dword ptr [ECX + 0x14],EAX      ; 00551cce | g_SoftwareEdgeBuffer[0].base.z_gradient
    MOV EAX,EDI                         ; 00551cd1
    IMUL EDX                            ; 00551cd3
    SHRD EAX,EDX,0x10                   ; 00551cd5
    MOV dword ptr [ESP],EAX             ; 00551cd9
    MOV EDX,dword ptr [ESP]             ; 00551cdc
    MOV EAX,dword ptr [ESI + 0x20]      ; 00551cdf
    ADD EAX,EDX                         ; 00551ce2
    MOV dword ptr [ECX + 0x10],EAX      ; 00551ce4 | g_SoftwareEdgeBuffer[0].base.z_current
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00551ce7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00551cea
    SUB EAX,EDX                         ; 00551ced
    MOV EDX,EAX                         ; 00551cef
    MOV EAX,EBX                         ; 00551cf1
    IMUL EDX                            ; 00551cf3
    SHRD EAX,EDX,0x10                   ; 00551cf5
    MOV EDX,EAX                         ; 00551cf9
    MOV dword ptr [ECX + 0x34],EAX      ; 00551cfb | g_SoftwareEdgeBuffer[0].base.fog_gradient
    MOV EAX,EDI                         ; 00551cfe
    IMUL EDX                            ; 00551d00
    SHRD EAX,EDX,0x10                   ; 00551d02
    MOV dword ptr [ESP],EAX             ; 00551d06
    MOV EDX,dword ptr [ESP]             ; 00551d09
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00551d0c
    ADD EAX,EDX                         ; 00551d0f
    MOV dword ptr [ECX + 0x30],EAX      ; 00551d11 | g_SoftwareEdgeBuffer[0].base.fog_current
    MOV EDX,dword ptr [EBP + 0x8]       ; 00551d14
    SUB EDX,dword ptr [ESI + 0x8]       ; 00551d17
    MOV EAX,EBX                         ; 00551d1a
    IMUL EDX                            ; 00551d1c
    SHRD EAX,EDX,0x10                   ; 00551d1e
    MOV EDX,EAX                         ; 00551d22
    MOV dword ptr [ECX + 0x2c],EAX      ; 00551d24 | g_SoftwareEdgeBuffer[0].base.w_gradient
    MOV EAX,EDI                         ; 00551d27
    IMUL EDX                            ; 00551d29
    SHRD EAX,EDX,0x10                   ; 00551d2b
    MOV EDX,dword ptr [0x030e5228]      ; 00551d2f | g_SoftwareEdgeCount
    MOV EBX,dword ptr [ESI + 0x8]       ; 00551d35
    INC EDX                             ; 00551d38
    ADD EBX,EAX                         ; 00551d39
    MOV dword ptr [0x030e5228],EDX      ; 00551d3b | g_SoftwareEdgeCount
    MOV dword ptr [ECX + 0x28],EBX      ; 00551d41 | g_SoftwareEdgeBuffer[0].base.w_current
    ADD ESP,0x4                         ; 00551d44
        ;   Label: LAB_00551d44
    POP EBP                             ; 00551d47
    POP EDI                             ; 00551d48
    POP ESI                             ; 00551d49
    POP EBX                             ; 00551d4a
    RET                                 ; 00551d4b
    MOV EAX,0xffffffff                  ; 00551d4c
        ;   Label: LAB_00551d4c
    XOR EDX,EDX                         ; 00551d51
    DIV EBX                             ; 00551d53
    MOV EBX,EAX                         ; 00551d55
    JMP 0x00551c26                      ; 00551d57
        ;   XREF to: 00551c26 (UNCONDITIONAL_JUMP)  ; LAB_00551c26

