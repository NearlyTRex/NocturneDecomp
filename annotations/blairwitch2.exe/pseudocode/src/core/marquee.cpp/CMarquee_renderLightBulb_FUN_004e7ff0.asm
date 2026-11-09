; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(CMarquee *this_ptr,CVector3f *position)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[1]:
;   core_marquee.cpp_FUN_004e8180 at 004e828f
;
; Referenced Globals:
;   undefined4 DAT_005f9b50
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7ff0
        ;   Label: core_marquee.cpp_CMarquee_renderLightBulb_FUN_004e7ff0
    PUSH ESI                            ; 004e7ff1
    PUSH EDI                            ; 004e7ff2
    PUSH EBP                            ; 004e7ff3
    SUB ESP,0x34                        ; 004e7ff4
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004e7ff7
    MOV ESI,dword ptr [0x0060b280]      ; 004e7ffb | DAT_0060b280
    LEA EBX,[ESP + 0x28]                ; 004e8001
    MOV ESI,dword ptr [ESI]             ; 004e8005
    FLD float ptr [EAX]                 ; 004e8007
    FMUL float ptr [0x005f9b50]         ; 004e8009 | DAT_005f9b50
    FISTP dword ptr [EBX]               ; 004e800f
    FLD float ptr [EAX + 0x4]           ; 004e8011
    FMUL float ptr [0x005f9b50]         ; 004e8014 | DAT_005f9b50
    FISTP dword ptr [EBX + 0x4]         ; 004e801a
    FLD float ptr [EAX + 0x8]           ; 004e801d
    FMUL float ptr [0x005f9b50]         ; 004e8020 | DAT_005f9b50
    FISTP dword ptr [EBX + 0x8]         ; 004e8026
    LEA EAX,[ESP + 0x28]                ; 004e8029
    PUSH EAX                            ; 004e802d
    PUSH ESI                            ; 004e802e
    CALL engine_special.cpp_FUN_0055d9ec ; 004e802f
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 004e8034 | DAT_0060b280
    MOV ESI,dword ptr [EAX]             ; 004e8039
    MOV ECX,0xc                         ; 004e803b
    LEA EDI,[ESI + 0x30]                ; 004e8040
    MOVSD.REP ES:EDI,ESI                ; 004e8043
    MOV ESI,dword ptr [EAX]             ; 004e8045
    MOV ECX,0xc                         ; 004e8047
    LEA EDI,[ESI + 0x60]                ; 004e804c
    MOVSD.REP ES:EDI,ESI                ; 004e804f
    MOV ESI,dword ptr [EAX]             ; 004e8051
    MOV ECX,0xc                         ; 004e8053
    LEA EDI,[ESI + 0x90]                ; 004e8058
    MOVSD.REP ES:EDI,ESI                ; 004e805e
    MOV ESI,dword ptr [EAX]             ; 004e8060
    ADD dword ptr [ESI],0x80            ; 004e8062
    MOV ESI,dword ptr [EAX]             ; 004e8068
    ADD dword ptr [ESI + 0x4],0x80      ; 004e806a
    MOV EBX,dword ptr [EAX]             ; 004e8071
    SUB dword ptr [EBX + 0x30],0x80     ; 004e8073
    MOV ESI,dword ptr [EAX]             ; 004e807a
    ADD dword ptr [ESI + 0x34],0x80     ; 004e807c
    MOV ESI,dword ptr [EAX]             ; 004e8083
    SUB dword ptr [ESI + 0x60],0x80     ; 004e8085
    MOV ESI,dword ptr [EAX]             ; 004e808c
    SUB dword ptr [ESI + 0x64],0x80     ; 004e808e
    MOV EBX,dword ptr [EAX]             ; 004e8095
    ADD dword ptr [EBX + 0x90],0x80     ; 004e8097
    MOV EBX,dword ptr [EAX]             ; 004e80a1
    SUB dword ptr [EBX + 0x94],0x80     ; 004e80a3
    MOV EBX,dword ptr [EAX]             ; 004e80ad
    MOV dword ptr [EBX + 0x10],0x80000000 ; 004e80af
    MOV EBX,dword ptr [EAX]             ; 004e80b6
    MOV dword ptr [EBX + 0x40],0x80000000 ; 004e80b8
    MOV EBX,dword ptr [EAX]             ; 004e80bf
    MOV dword ptr [EBX + 0x70],0x80000000 ; 004e80c1
    MOV EBX,dword ptr [EAX]             ; 004e80c8
    MOV dword ptr [EBX + 0xa0],0x80000000 ; 004e80ca
    MOV EBX,dword ptr [EAX]             ; 004e80d4
    MOV dword ptr [EBX + 0x18],0x80000  ; 004e80d6
    MOV EBX,dword ptr [EAX]             ; 004e80dd
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 004e80df
    MOV EBX,dword ptr [EAX]             ; 004e80e6
    MOV dword ptr [EBX + 0x48],0xf80000 ; 004e80e8
    MOV EBX,dword ptr [EAX]             ; 004e80ef
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 004e80f1
    MOV EBX,dword ptr [EAX]             ; 004e80f8
    MOV dword ptr [EBX + 0x78],0xf80000 ; 004e80fa
    MOV EBX,dword ptr [EAX]             ; 004e8101
    MOV dword ptr [EBX + 0x7c],0x80000  ; 004e8103
    ADD ESP,0x8                         ; 004e810a
    MOV EBX,dword ptr [EAX]             ; 004e810d
    PUSH 0x63                           ; 004e810f
    MOV dword ptr [EBX + 0xa8],0x80000  ; 004e8111
    MOV EDI,0x4                         ; 004e811b
    MOV EBX,dword ptr [EAX]             ; 004e8120
    XOR EBP,EBP                         ; 004e8122
    MOV EDX,0x3                         ; 004e8124
    MOV dword ptr [EBX + 0xac],0x80000  ; 004e8129
    LEA EBX,[ESP + 0x4]                 ; 004e8133
    MOV dword ptr [ESP + 0x8],EDI       ; 004e8137
    MOV dword ptr [ESP + 0x18],EBP      ; 004e813b
    MOV dword ptr [ESP + 0x14],EBP      ; 004e813f
    MOV dword ptr [ESP + 0x10],EBP      ; 004e8143
    MOV dword ptr [ESP + 0xc],EBP       ; 004e8147
    MOV dword ptr [ESP + 0x1c],EBP      ; 004e814b
    MOV dword ptr [ESP + 0x28],EDX      ; 004e814f
    PUSH EBX                            ; 004e8153
    MOV EDI,0x1                         ; 004e8154
    MOV EBP,0x2                         ; 004e8159
    PUSH EAX                            ; 004e815e
    MOV dword ptr [ESP + 0x28],EDI      ; 004e815f
    MOV dword ptr [ESP + 0x2c],EBP      ; 004e8163
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60 ; 004e8167
        ;   XREF to: 00469c60 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_00469c60(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 004e816c
    ADD ESP,0x34                        ; 004e816f
    POP EBP                             ; 004e8172
    POP EDI                             ; 004e8173
    POP ESI                             ; 004e8174
    POP EBX                             ; 004e8175
    RET                                 ; 004e8176

