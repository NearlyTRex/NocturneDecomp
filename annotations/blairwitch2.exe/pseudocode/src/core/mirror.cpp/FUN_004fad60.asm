; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_mirror_cpp_FUN_004fad60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa1b0
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fad60
        ;   Label: core_mirror.cpp_FUN_004fad60
    PUSH ESI                            ; 004fad61
    PUSH EDI                            ; 004fad62
    SUB ESP,0x58                        ; 004fad63
    MOV ESI,dword ptr [ESP + 0x68]      ; 004fad66
    MOV EDX,dword ptr [0x0060b280]      ; 004fad6a | DAT_0060b280
    LEA EBX,[ESP + 0x40]                ; 004fad70
    MOV EAX,ESI                         ; 004fad74
    MOV EDX,dword ptr [EDX]             ; 004fad76
    FLD float ptr [EAX]                 ; 004fad78
    FMUL float ptr [0x005fa1b0]         ; 004fad7a | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fad80
    FLD float ptr [EAX + 0x4]           ; 004fad82
    FMUL float ptr [0x005fa1b0]         ; 004fad85 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fad8b
    FLD float ptr [EAX + 0x8]           ; 004fad8e
    FMUL float ptr [0x005fa1b0]         ; 004fad91 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fad97
    LEA EAX,[ESP + 0x40]                ; 004fad9a
    PUSH EAX                            ; 004fad9e
    PUSH EDX                            ; 004fad9f
    CALL engine_special.cpp_FUN_0055d9ec ; 004fada0
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 004fada5 | DAT_0060b280
    LEA EBX,[ESP + 0x3c]                ; 004fadaa
    ADD ESP,0x8                         ; 004fadae
    MOV EDX,dword ptr [EAX]             ; 004fadb1
    LEA EAX,[ESI + 0xc]                 ; 004fadb3
    FLD float ptr [EAX]                 ; 004fadb6
    FMUL float ptr [0x005fa1b0]         ; 004fadb8 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fadbe
    FLD float ptr [EAX + 0x4]           ; 004fadc0
    FMUL float ptr [0x005fa1b0]         ; 004fadc3 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fadc9
    FLD float ptr [EAX + 0x8]           ; 004fadcc
    FMUL float ptr [0x005fa1b0]         ; 004fadcf | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fadd5
    LEA EAX,[ESP + 0x34]                ; 004fadd8
    PUSH EAX                            ; 004faddc
    ADD EDX,0x30                        ; 004faddd
    PUSH EDX                            ; 004fade0
    CALL engine_special.cpp_FUN_0055d9ec ; 004fade1
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x30]                ; 004fade6
    MOV EDX,dword ptr [0x0060b280]      ; 004fadea | DAT_0060b280
    ADD ESP,0x8                         ; 004fadf0
    LEA EAX,[ESI + 0x18]                ; 004fadf3
    MOV EDX,dword ptr [EDX]             ; 004fadf6
    FLD float ptr [EAX]                 ; 004fadf8
    FMUL float ptr [0x005fa1b0]         ; 004fadfa | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fae00
    FLD float ptr [EAX + 0x4]           ; 004fae02
    FMUL float ptr [0x005fa1b0]         ; 004fae05 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fae0b
    FLD float ptr [EAX + 0x8]           ; 004fae0e
    FMUL float ptr [0x005fa1b0]         ; 004fae11 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fae17
    LEA EAX,[ESP + 0x28]                ; 004fae1a
    PUSH EAX                            ; 004fae1e
    ADD EDX,0x60                        ; 004fae1f
    PUSH EDX                            ; 004fae22
    CALL engine_special.cpp_FUN_0055d9ec ; 004fae23
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 004fae28 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 004fae2d
    ADD ESP,0x8                         ; 004fae2f
    LEA EDX,[EAX + 0x90]                ; 004fae32
    LEA EBX,[ESP + 0x4c]                ; 004fae38
    LEA EAX,[ESI + 0x24]                ; 004fae3c
    FLD float ptr [EAX]                 ; 004fae3f
    FMUL float ptr [0x005fa1b0]         ; 004fae41 | DAT_005fa1b0
    FISTP dword ptr [EBX]               ; 004fae47
    FLD float ptr [EAX + 0x4]           ; 004fae49
    FMUL float ptr [0x005fa1b0]         ; 004fae4c | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x4]         ; 004fae52
    FLD float ptr [EAX + 0x8]           ; 004fae55
    FMUL float ptr [0x005fa1b0]         ; 004fae58 | DAT_005fa1b0
    FISTP dword ptr [EBX + 0x8]         ; 004fae5e
    LEA EAX,[ESP + 0x4c]                ; 004fae61
    PUSH EAX                            ; 004fae65
    PUSH EDX                            ; 004fae66
    CALL engine_special.cpp_FUN_0055d9ec ; 004fae67
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004fae6c
    PUSH 0x1                            ; 004fae6f
    MOV EDX,dword ptr [0x0060b280]      ; 004fae71 | DAT_0060b280
    PUSH EDX                            ; 004fae77
    XOR EBX,EBX                         ; 004fae78
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 004fae7a
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    MOV ECX,0x4                         ; 004fae7f
    MOV EDX,0x1                         ; 004fae84
    LEA EAX,[ESP + 0x8]                 ; 004fae89
    ADD ESP,0x8                         ; 004fae8d
    MOV ESI,dword ptr [0x0060b280]      ; 004fae90 | DAT_0060b280
    MOV dword ptr [ESP + 0x4],ECX       ; 004fae96
    MOV dword ptr [ESP + 0x14],EBX      ; 004fae9a
    MOV dword ptr [ESP + 0x10],EBX      ; 004fae9e
    MOV dword ptr [ESP + 0xc],EBX       ; 004faea2
    MOV dword ptr [ESP + 0x8],EBX       ; 004faea6
    MOV dword ptr [ESP + 0x18],EBX      ; 004faeaa
    MOV dword ptr [ESP + 0x1c],EDX      ; 004faeae
    PUSH EAX                            ; 004faeb2
    MOV ECX,0x2                         ; 004faeb3
    MOV EBX,0x3                         ; 004faeb8
    PUSH ESI                            ; 004faebd
    MOV dword ptr [ESP + 0x28],ECX      ; 004faebe
    MOV dword ptr [ESP + 0x2c],EBX      ; 004faec2
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 ; 004faec6
        ;   XREF to: 004699a0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004faecb
    PUSH 0x1                            ; 004faece
    MOV EDI,dword ptr [0x0060b280]      ; 004faed0 | DAT_0060b280
    PUSH EDI                            ; 004faed6
    MOV EBX,EAX                         ; 004faed7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 004faed9
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004faede
    MOV EAX,EBX                         ; 004faee1
    ADD ESP,0x58                        ; 004faee3
    POP EDI                             ; 004faee6
    POP ESI                             ; 004faee7
    POP EBX                             ; 004faee8
    RET                                 ; 004faee9

