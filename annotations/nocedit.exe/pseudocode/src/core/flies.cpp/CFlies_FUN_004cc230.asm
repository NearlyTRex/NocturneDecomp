; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_CFlies_FUN_004cc230(CFlies *this_ptr)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flies.cpp_CFlies_FUN_004cc2c0 at 004cc2e9
;   core_flies.cpp_CFlies_renderOpaque_FUN_004cc300 at 004cc6e6
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ActiveRenderColor
;   undefined4 DAT_02d7a800
;   undefined4 DAT_02d7a804
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc230
        ;   Label: core_flies.cpp_CFlies_FUN_004cc230
    PUSH ESI                            ; 004cc231
    PUSH EDI                            ; 004cc232
    PUSH EBP                            ; 004cc233
    MOV EBP,ESP                         ; 004cc234
    SUB ESP,0x4                         ; 004cc236
    MOV EAX,dword ptr [EBP + 0x18]      ; 004cc239
    SHL EAX,0x2                         ; 004cc23c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004cc23f
    MOV ECX,dword ptr [EAX + 0x2cf7d5c] ; 004cc242 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 004cc248
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004cc24b
    CMP EBX,dword ptr [ECX + EDX*0x1]   ; 004cc24e
    JBE 0x004cc25c                      ; 004cc251
        ;   XREF to: 004cc25c (CONDITIONAL_JUMP)  ; LAB_004cc25c
    CMP dword ptr [0x0067939c],0x20     ; 004cc253 | g_BitsPerPixel
    JZ 0x004cc263                       ; 004cc25a
        ;   XREF to: 004cc263 (CONDITIONAL_JUMP)  ; LAB_004cc263
    MOV ESP,EBP                         ; 004cc25c
        ;   Label: LAB_004cc25c
    POP EBP                             ; 004cc25e
    POP EDI                             ; 004cc25f
    POP ESI                             ; 004cc260
    POP EBX                             ; 004cc261
    RET                                 ; 004cc262
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 004cc263 | g_ScreenBufferArray
        ;   Label: LAB_004cc263
    ADD EAX,EDX                         ; 004cc269
    MOV dword ptr [EBP + -0x4],EAX      ; 004cc26b
    MOV EDI,dword ptr [EBP + 0xfffffffc] ; 004cc26e
    MOVD MM0,dword ptr [0x02d02570]     ; 004cc274 | g_ActiveRenderColor
    PXOR MM7,MM7                        ; 004cc27b
    MOVD MM1,dword ptr [EDI]            ; 004cc27e
    MOVD MM2,dword ptr [0x02d7a800]     ; 004cc281 | DAT_02d7a800
    MOVD MM3,dword ptr [0x02d7a804]     ; 004cc288 | DAT_02d7a804
    PUNPCKLBW MM0,MM7                   ; 004cc28f
    PUNPCKLBW MM1,MM7                   ; 004cc292
    PUNPCKLBW MM2,MM7                   ; 004cc295
    PUNPCKLBW MM3,MM7                   ; 004cc298
    PMULLW MM0,MM3                      ; 004cc29b
    PMULLW MM1,MM2                      ; 004cc29e
    PADDW MM0,MM1                       ; 004cc2a1
    PSRLW MM0,0x8                       ; 004cc2a4
    PACKUSWB MM0,MM7                    ; 004cc2a8
    MOVD dword ptr [EDI],MM0            ; 004cc2ab
    EMMS                                ; 004cc2ae
    MOV ESP,EBP                         ; 004cc2b0
    POP EBP                             ; 004cc2b2
    POP EDI                             ; 004cc2b3
    POP ESI                             ; 004cc2b4
    POP EBX                             ; 004cc2b5
    RET                                 ; 004cc2b6

