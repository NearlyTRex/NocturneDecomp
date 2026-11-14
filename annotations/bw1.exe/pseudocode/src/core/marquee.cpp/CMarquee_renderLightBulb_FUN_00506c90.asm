; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_00506c90(CMarquee *this_ptr,CVector3f *position)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[1]:
;   core_marquee.cpp_CMarquee_renderTransparent_FUN_00506e20 at 00506f2f
;
; Referenced Globals:
;   undefined4 DAT_006036b0
;   undefined4 DAT_00612560
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506c90
        ;   Label: core_marquee.cpp_CMarquee_renderLightBulb_FUN_00506c90
    PUSH ESI                            ; 00506c91
    PUSH EDI                            ; 00506c92
    PUSH EBP                            ; 00506c93
    SUB ESP,0x34                        ; 00506c94
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00506c97
    MOV ESI,dword ptr [0x00612560]      ; 00506c9b | DAT_00612560
    LEA EBX,[ESP + 0x28]                ; 00506ca1
    MOV ESI,dword ptr [ESI]             ; 00506ca5
    FLD float ptr [EAX]                 ; 00506ca7
    FMUL float ptr [0x006036b0]         ; 00506ca9 | DAT_006036b0
    FISTP dword ptr [EBX]               ; 00506caf
    FLD float ptr [EAX + 0x4]           ; 00506cb1
    FMUL float ptr [0x006036b0]         ; 00506cb4 | DAT_006036b0
    FISTP dword ptr [EBX + 0x4]         ; 00506cba
    FLD float ptr [EAX + 0x8]           ; 00506cbd
    FMUL float ptr [0x006036b0]         ; 00506cc0 | DAT_006036b0
    FISTP dword ptr [EBX + 0x8]         ; 00506cc6
    LEA EAX,[ESP + 0x28]                ; 00506cc9
    PUSH EAX                            ; 00506ccd
    PUSH ESI                            ; 00506cce
    CALL engine_special.cpp_FUN_0058043c ; 00506ccf
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 00506cd4 | DAT_00612560
    MOV ESI,dword ptr [EAX]             ; 00506cd9
    MOV ECX,0xc                         ; 00506cdb
    LEA EDI,[ESI + 0x30]                ; 00506ce0
    MOVSD.REP ES:EDI,ESI                ; 00506ce3
    MOV ESI,dword ptr [EAX]             ; 00506ce5
    MOV ECX,0xc                         ; 00506ce7
    LEA EDI,[ESI + 0x60]                ; 00506cec
    MOVSD.REP ES:EDI,ESI                ; 00506cef
    MOV ESI,dword ptr [EAX]             ; 00506cf1
    MOV ECX,0xc                         ; 00506cf3
    LEA EDI,[ESI + 0x90]                ; 00506cf8
    MOVSD.REP ES:EDI,ESI                ; 00506cfe
    MOV ESI,dword ptr [EAX]             ; 00506d00
    ADD dword ptr [ESI],0x80            ; 00506d02
    MOV ESI,dword ptr [EAX]             ; 00506d08
    ADD dword ptr [ESI + 0x4],0x80      ; 00506d0a
    MOV EBX,dword ptr [EAX]             ; 00506d11
    SUB dword ptr [EBX + 0x30],0x80     ; 00506d13
    MOV ESI,dword ptr [EAX]             ; 00506d1a
    ADD dword ptr [ESI + 0x34],0x80     ; 00506d1c
    MOV ESI,dword ptr [EAX]             ; 00506d23
    SUB dword ptr [ESI + 0x60],0x80     ; 00506d25
    MOV ESI,dword ptr [EAX]             ; 00506d2c
    SUB dword ptr [ESI + 0x64],0x80     ; 00506d2e
    MOV EBX,dword ptr [EAX]             ; 00506d35
    ADD dword ptr [EBX + 0x90],0x80     ; 00506d37
    MOV EBX,dword ptr [EAX]             ; 00506d41
    SUB dword ptr [EBX + 0x94],0x80     ; 00506d43
    MOV EBX,dword ptr [EAX]             ; 00506d4d
    MOV dword ptr [EBX + 0x10],0x80000000 ; 00506d4f
    MOV EBX,dword ptr [EAX]             ; 00506d56
    MOV dword ptr [EBX + 0x40],0x80000000 ; 00506d58
    MOV EBX,dword ptr [EAX]             ; 00506d5f
    MOV dword ptr [EBX + 0x70],0x80000000 ; 00506d61
    MOV EBX,dword ptr [EAX]             ; 00506d68
    MOV dword ptr [EBX + 0xa0],0x80000000 ; 00506d6a
    MOV EBX,dword ptr [EAX]             ; 00506d74
    MOV dword ptr [EBX + 0x18],0x80000  ; 00506d76
    MOV EBX,dword ptr [EAX]             ; 00506d7d
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 00506d7f
    MOV EBX,dword ptr [EAX]             ; 00506d86
    MOV dword ptr [EBX + 0x48],0xf80000 ; 00506d88
    MOV EBX,dword ptr [EAX]             ; 00506d8f
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 00506d91
    MOV EBX,dword ptr [EAX]             ; 00506d98
    MOV dword ptr [EBX + 0x78],0xf80000 ; 00506d9a
    MOV EBX,dword ptr [EAX]             ; 00506da1
    MOV dword ptr [EBX + 0x7c],0x80000  ; 00506da3
    ADD ESP,0x8                         ; 00506daa
    MOV EBX,dword ptr [EAX]             ; 00506dad
    PUSH 0x63                           ; 00506daf
    MOV dword ptr [EBX + 0xa8],0x80000  ; 00506db1
    MOV EDI,0x4                         ; 00506dbb
    MOV EBX,dword ptr [EAX]             ; 00506dc0
    XOR EBP,EBP                         ; 00506dc2
    MOV EDX,0x3                         ; 00506dc4
    MOV dword ptr [EBX + 0xac],0x80000  ; 00506dc9
    LEA EBX,[ESP + 0x4]                 ; 00506dd3
    MOV dword ptr [ESP + 0x8],EDI       ; 00506dd7
    MOV dword ptr [ESP + 0x18],EBP      ; 00506ddb
    MOV dword ptr [ESP + 0x14],EBP      ; 00506ddf
    MOV dword ptr [ESP + 0x10],EBP      ; 00506de3
    MOV dword ptr [ESP + 0xc],EBP       ; 00506de7
    MOV dword ptr [ESP + 0x1c],EBP      ; 00506deb
    MOV dword ptr [ESP + 0x28],EDX      ; 00506def
    PUSH EBX                            ; 00506df3
    MOV EDI,0x1                         ; 00506df4
    MOV EBP,0x2                         ; 00506df9
    PUSH EAX                            ; 00506dfe
    MOV dword ptr [ESP + 0x28],EDI      ; 00506dff
    MOV dword ptr [ESP + 0x2c],EBP      ; 00506e03
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170 ; 00506e07
        ;   XREF to: 00482170 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 00506e0c
    ADD ESP,0x34                        ; 00506e0f
    POP EBP                             ; 00506e12
    POP EDI                             ; 00506e13
    POP ESI                             ; 00506e14
    POP EBX                             ; 00506e15
    RET                                 ; 00506e16

