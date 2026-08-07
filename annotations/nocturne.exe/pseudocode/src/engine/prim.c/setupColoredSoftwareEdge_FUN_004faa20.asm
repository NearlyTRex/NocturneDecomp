; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setupColoredSoftwareEdge_FUN_004faa20(SRenderVertex *vertex0,SRenderVertex *vertex1)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex0
; SRenderVertex *  Stack[0x8]:4   vertex1
;
; Referenced Globals:
;   undefined4 DAT_01c0399c
;   int g_VertexPreprocessMode
;   undefined4 DAT_01e52efc
;   undefined4 DAT_01e53380
;   undefined4 DAT_01e53384
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004faa20
        ;   Label: engine_prim.c_setupColoredSoftwareEdge_FUN_004faa20
    PUSH ESI                            ; 004faa21
    PUSH EDI                            ; 004faa22
    PUSH EBP                            ; 004faa23
    SUB ESP,0x8                         ; 004faa24
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004faa27
    MOV EBP,dword ptr [ESP + 0x20]      ; 004faa2b
    MOV EDI,dword ptr [EBP + 0x14]      ; 004faa2f
    MOV EBX,dword ptr [ESI + 0x14]      ; 004faa32
    SAR EDI,0x10                        ; 004faa35
    SAR EBX,0x10                        ; 004faa38
    CMP EBX,EDI                         ; 004faa3b
    JZ 0x004fac43                       ; 004faa3d
        ;   XREF to: 004fac43 (CONDITIONAL_JUMP)  ; LAB_004fac43
    MOV EDX,dword ptr [EBP + 0x14]      ; 004faa43
    CMP EDX,dword ptr [ESI + 0x14]      ; 004faa46
    JGE 0x004faa57                      ; 004faa49
        ;   XREF to: 004faa57 (CONDITIONAL_JUMP)  ; LAB_004faa57
    MOV EAX,ESI                         ; 004faa4b
    MOV ESI,EBP                         ; 004faa4d
    MOV EBP,EAX                         ; 004faa4f
    MOV EAX,EBX                         ; 004faa51
    MOV EBX,EDI                         ; 004faa53
    MOV EDI,EAX                         ; 004faa55
    MOV EAX,[0x01e52efc]                ; 004faa57 | DAT_01e52efc
        ;   Label: LAB_004faa57
    LEA ECX,[EAX*0x8 + 0x0]             ; 004faa5c
    ADD ECX,EAX                         ; 004faa63
    SHL ECX,0x3                         ; 004faa65
    ADD ECX,0x1e52f00                   ; 004faa68
    MOV dword ptr [ECX],EBX             ; 004faa6e
    MOV EAX,[0x01e53380]                ; 004faa70 | DAT_01e53380
    MOV dword ptr [ECX + 0x4],EDI       ; 004faa75
    CMP EBX,EAX                         ; 004faa78
    JGE 0x004faa82                      ; 004faa7a
        ;   XREF to: 004faa82 (CONDITIONAL_JUMP)  ; LAB_004faa82
    MOV dword ptr [0x01e53380],EBX      ; 004faa7c | DAT_01e53380
    CMP EDI,dword ptr [0x01e53384]      ; 004faa82 | DAT_01e53384
        ;   Label: LAB_004faa82
    JLE 0x004faa90                      ; 004faa88
        ;   XREF to: 004faa90 (CONDITIONAL_JUMP)  ; LAB_004faa90
    MOV dword ptr [0x01e53384],EDI      ; 004faa8a | DAT_01e53384
    MOV EDI,dword ptr [ESI + 0x14]      ; 004faa90
        ;   Label: LAB_004faa90
    MOV EBX,dword ptr [EBP + 0x14]      ; 004faa93
    SUB EBX,EDI                         ; 004faa96
    CMP EBX,0x10000                     ; 004faa98
    JNC 0x004fac4b                      ; 004faa9e
        ;   XREF to: 004fac4b (CONDITIONAL_JUMP)  ; LAB_004fac4b
    XOR EBX,EBX                         ; 004faaa4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004faaa6
        ;   Label: LAB_004faaa6
    MOV EDX,dword ptr [ESI + 0x10]      ; 004faaa9
    MOV EDI,dword ptr [ESI + 0x14]      ; 004faaac
    SUB EAX,EDX                         ; 004faaaf
    AND EDI,0xffff                      ; 004faab1
    MOV EDX,EAX                         ; 004faab7
    MOV EAX,EBX                         ; 004faab9
    XOR DI,0xffff                       ; 004faabb
    IMUL EDX                            ; 004faabf
    SHRD EAX,EDX,0x10                   ; 004faac1
    MOV EDX,EAX                         ; 004faac5
    MOV dword ptr [ECX + 0xc],EAX       ; 004faac7
    MOV EAX,EDI                         ; 004faaca
    IMUL EDX                            ; 004faacc
    SHRD EAX,EDX,0x10                   ; 004faace
    MOV dword ptr [ESP],EAX             ; 004faad2
    MOV EDX,dword ptr [ESP]             ; 004faad5
    MOV EAX,dword ptr [ESI + 0x10]      ; 004faad8
    ADD EAX,EDX                         ; 004faadb
    MOV dword ptr [ECX + 0x8],EAX       ; 004faadd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004faae0
    MOV EDX,dword ptr [ESI + 0x18]      ; 004faae3
    SUB EAX,EDX                         ; 004faae6
    MOV EDX,EAX                         ; 004faae8
    MOV EAX,EBX                         ; 004faaea
    IMUL EDX                            ; 004faaec
    SHRD EAX,EDX,0x10                   ; 004faaee
    MOV EDX,EAX                         ; 004faaf2
    MOV dword ptr [ECX + 0x1c],EAX      ; 004faaf4
    MOV EAX,EDI                         ; 004faaf7
    IMUL EDX                            ; 004faaf9
    SHRD EAX,EDX,0x10                   ; 004faafb
    MOV dword ptr [ESP],EAX             ; 004faaff
    MOV EDX,dword ptr [ESP]             ; 004fab02
    MOV EAX,dword ptr [ESI + 0x18]      ; 004fab05
    ADD EAX,EDX                         ; 004fab08
    MOV dword ptr [ECX + 0x18],EAX      ; 004fab0a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fab0d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004fab10
    SUB EAX,EDX                         ; 004fab13
    MOV EDX,EAX                         ; 004fab15
    MOV EAX,EBX                         ; 004fab17
    IMUL EDX                            ; 004fab19
    SHRD EAX,EDX,0x10                   ; 004fab1b
    MOV EDX,EAX                         ; 004fab1f
    MOV dword ptr [ECX + 0x24],EAX      ; 004fab21
    MOV EAX,EDI                         ; 004fab24
    IMUL EDX                            ; 004fab26
    SHRD EAX,EDX,0x10                   ; 004fab28
    MOV dword ptr [ESP],EAX             ; 004fab2c
    MOV EDX,dword ptr [ESP]             ; 004fab2f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004fab32
    ADD EAX,EDX                         ; 004fab35
    MOV dword ptr [ECX + 0x20],EAX      ; 004fab37
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fab3a
    MOV EDX,dword ptr [ESI + 0x20]      ; 004fab3d
    SUB EAX,EDX                         ; 004fab40
    MOV EDX,EAX                         ; 004fab42
    MOV EAX,EBX                         ; 004fab44
    IMUL EDX                            ; 004fab46
    SHRD EAX,EDX,0x10                   ; 004fab48
    MOV EDX,EAX                         ; 004fab4c
    MOV dword ptr [ECX + 0x14],EAX      ; 004fab4e
    MOV EAX,EDI                         ; 004fab51
    IMUL EDX                            ; 004fab53
    SHRD EAX,EDX,0x10                   ; 004fab55
    MOV dword ptr [ESP],EAX             ; 004fab59
    MOV EDX,dword ptr [ESP]             ; 004fab5c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004fab5f
    ADD EAX,EDX                         ; 004fab62
    MOV dword ptr [ECX + 0x10],EAX      ; 004fab64
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fab67
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004fab6a
    SUB EAX,EDX                         ; 004fab6d
    MOV EDX,EAX                         ; 004fab6f
    MOV EAX,EBX                         ; 004fab71
    IMUL EDX                            ; 004fab73
    SHRD EAX,EDX,0x10                   ; 004fab75
    MOV EDX,EAX                         ; 004fab79
    MOV dword ptr [ECX + 0x34],EAX      ; 004fab7b
    MOV EAX,EDI                         ; 004fab7e
    IMUL EDX                            ; 004fab80
    SHRD EAX,EDX,0x10                   ; 004fab82
    MOV dword ptr [ESP],EAX             ; 004fab86
    MOV EDX,dword ptr [ESP]             ; 004fab89
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004fab8c
    ADD EAX,EDX                         ; 004fab8f
    MOV dword ptr [ECX + 0x30],EAX      ; 004fab91
    CMP dword ptr [0x01c039a4],0x1      ; 004fab94 | g_VertexPreprocessMode
    JNZ 0x004fac6a                      ; 004fab9b
        ;   XREF to: 004fac6a (CONDITIONAL_JUMP)  ; LAB_004fac6a
    CMP dword ptr [0x01c0399c],0x0      ; 004faba1 | DAT_01c0399c
    JZ 0x004fac5b                       ; 004faba8
        ;   XREF to: 004fac5b (CONDITIONAL_JUMP)  ; LAB_004fac5b
    MOV EAX,0x7fffffff                  ; 004fabae
    SUB EAX,dword ptr [ESI + 0x8]       ; 004fabb3
    MOV EDX,0x7fffffff                  ; 004fabb6
    MOV dword ptr [ESP + 0x4],EAX       ; 004fabbb
    SUB EDX,dword ptr [EBP + 0x8]       ; 004fabbf
    SUB EDX,dword ptr [ESP + 0x4]       ; 004fabc2
        ;   Label: LAB_004fabc2
    MOV EAX,EBX                         ; 004fabc6
    IMUL EDX                            ; 004fabc8
    SHRD EAX,EDX,0x10                   ; 004fabca
    MOV EDX,EAX                         ; 004fabce
    MOV dword ptr [ECX + 0x2c],EAX      ; 004fabd0
    MOV EAX,EDI                         ; 004fabd3
    IMUL EDX                            ; 004fabd5
    SHRD EAX,EDX,0x10                   ; 004fabd7
    MOV EDX,dword ptr [ESP + 0x4]       ; 004fabdb
    ADD EDX,EAX                         ; 004fabdf
    MOV dword ptr [ECX + 0x28],EDX      ; 004fabe1
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fabe4
        ;   Label: LAB_004fabe4
    MOV EDX,dword ptr [ESI + 0x24]      ; 004fabe7
    SUB EAX,EDX                         ; 004fabea
    MOV EDX,EAX                         ; 004fabec
    MOV EAX,EBX                         ; 004fabee
    IMUL EDX                            ; 004fabf0
    SHRD EAX,EDX,0x10                   ; 004fabf2
    MOV EDX,EAX                         ; 004fabf6
    MOV dword ptr [ECX + 0x3c],EAX      ; 004fabf8
    MOV EAX,EDI                         ; 004fabfb
    IMUL EDX                            ; 004fabfd
    SHRD EAX,EDX,0x10                   ; 004fabff
    MOV dword ptr [ESP],EAX             ; 004fac03
    MOV EDX,dword ptr [ESP]             ; 004fac06
    MOV EAX,dword ptr [ESI + 0x24]      ; 004fac09
    ADD EAX,EDX                         ; 004fac0c
    MOV dword ptr [ECX + 0x38],EAX      ; 004fac0e
    MOV EDX,dword ptr [EBP + 0x28]      ; 004fac11
    SUB EDX,dword ptr [ESI + 0x28]      ; 004fac14
    MOV EAX,EBX                         ; 004fac17
    IMUL EDX                            ; 004fac19
    SHRD EAX,EDX,0x10                   ; 004fac1b
    MOV EDX,EAX                         ; 004fac1f
    MOV dword ptr [ECX + 0x44],EAX      ; 004fac21
    MOV EAX,EDI                         ; 004fac24
    IMUL EDX                            ; 004fac26
    SHRD EAX,EDX,0x10                   ; 004fac28
    MOV EDX,EAX                         ; 004fac2c
    MOV EAX,dword ptr [ESI + 0x28]      ; 004fac2e
    ADD EAX,EDX                         ; 004fac31
    MOV EDX,dword ptr [0x01e52efc]      ; 004fac33 | DAT_01e52efc
    INC EDX                             ; 004fac39
    MOV dword ptr [ECX + 0x40],EAX      ; 004fac3a
    MOV dword ptr [0x01e52efc],EDX      ; 004fac3d | DAT_01e52efc
    ADD ESP,0x8                         ; 004fac43
        ;   Label: LAB_004fac43
    POP EBP                             ; 004fac46
    POP EDI                             ; 004fac47
    POP ESI                             ; 004fac48
    POP EBX                             ; 004fac49
    RET                                 ; 004fac4a
    MOV EAX,0xffffffff                  ; 004fac4b
        ;   Label: LAB_004fac4b
    XOR EDX,EDX                         ; 004fac50
    DIV EBX                             ; 004fac52
    MOV EBX,EAX                         ; 004fac54
    JMP 0x004faaa6                      ; 004fac56
        ;   XREF to: 004faaa6 (UNCONDITIONAL_JUMP)  ; LAB_004faaa6
    MOV EAX,dword ptr [ESI + 0xc]       ; 004fac5b
        ;   Label: LAB_004fac5b
    MOV EDX,dword ptr [EBP + 0xc]       ; 004fac5e
    MOV dword ptr [ESP + 0x4],EAX       ; 004fac61
    JMP 0x004fabc2                      ; 004fac65
        ;   XREF to: 004fabc2 (UNCONDITIONAL_JUMP)  ; LAB_004fabc2
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fac6a
        ;   Label: LAB_004fac6a
    MOV EDX,dword ptr [ESI + 0x8]       ; 004fac6d
    SUB EAX,EDX                         ; 004fac70
    MOV EDX,EAX                         ; 004fac72
    MOV EAX,EBX                         ; 004fac74
    IMUL EDX                            ; 004fac76
    SHRD EAX,EDX,0x10                   ; 004fac78
    MOV EDX,EAX                         ; 004fac7c
    MOV dword ptr [ECX + 0x2c],EAX      ; 004fac7e
    MOV EAX,EDI                         ; 004fac81
    IMUL EDX                            ; 004fac83
    SHRD EAX,EDX,0x10                   ; 004fac85
    MOV dword ptr [ESP],EAX             ; 004fac89
    MOV EDX,dword ptr [ESP]             ; 004fac8c
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fac8f
    ADD EAX,EDX                         ; 004fac92
    MOV dword ptr [ECX + 0x28],EAX      ; 004fac94
    JMP 0x004fabe4                      ; 004fac97
        ;   XREF to: 004fabe4 (UNCONDITIONAL_JUMP)  ; LAB_004fabe4

