; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CLeaf_process_FUN_0049a1c0(CLeaf *this_ptr)
;
; Parameters:
; CLeaf *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005c05b8
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_01c5fad0
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_particle.cpp_FUN_00509f30
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a1c0
        ;   Label: core_fire.cpp_CLeaf_process_FUN_0049a1c0
    PUSH ESI                            ; 0049a1c1
    PUSH EBP                            ; 0049a1c2
    MOV EBP,ESP                         ; 0049a1c3
    SUB ESP,0x1c                        ; 0049a1c5
    AND ESP,0xfffffff8                  ; 0049a1c8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0049a1cb
    PUSH EBX                            ; 0049a1ce
    CALL core_particle.cpp_FUN_00509f30 ; 0049a1cf
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined core_particle.cpp_FUN_00509f30()
    LEA ECX,[EBX + 0xc]                 ; 0049a1d4
    FLD float ptr [ECX + 0x4]           ; 0049a1d7
    FMUL ST0                            ; 0049a1da
    FLD float ptr [ECX]                 ; 0049a1dc
    FMUL ST0                            ; 0049a1de
    FADDP                               ; 0049a1e0
    FLD float ptr [ECX + 0x8]           ; 0049a1e2
    FMUL ST0                            ; 0049a1e5
    FADDP                               ; 0049a1e7
    ADD ESP,0x4                         ; 0049a1e9
    FSQRT                               ; 0049a1ec
    MOV EAX,[0x01c5fad0]                ; 0049a1ee | DAT_01c5fad0
    MOV EDX,EAX                         ; 0049a1f3
    SAR EDX,0x1f                        ; 0049a1f5
    SHL EDX,0x2                         ; 0049a1f8
    SBB EAX,EDX                         ; 0049a1fb
    SAR EAX,0x2                         ; 0049a1fd
    FST float ptr [ESP + 0x4]           ; 0049a200
    FST double ptr [ESP + 0x8]          ; 0049a204
    FMUL double ptr [0x005c05b8]        ; 0049a208 | DAT_005c05b8
    CALL crt_math.c_round_FUN_005a3120  ; 0049a20e
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 0049a213
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a217
    IMUL EDX                            ; 0049a21b
    SHRD EAX,EDX,0x10                   ; 0049a21d
    MOV EDX,dword ptr [EBX + 0x44]      ; 0049a221
    ADD EDX,EAX                         ; 0049a224
    MOV EAX,[0x01c5fad0]                ; 0049a226 | DAT_01c5fad0
    MOV dword ptr [EBX + 0x44],EDX      ; 0049a22b
    MOV EDX,EAX                         ; 0049a22e
    SAR EDX,0x1f                        ; 0049a230
    SUB EAX,EDX                         ; 0049a233
    SAR EAX,0x1                         ; 0049a235
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049a237
    IMUL EDX                            ; 0049a23b
    SHRD EAX,EDX,0x10                   ; 0049a23d
    MOV ESI,dword ptr [EBX + 0x48]      ; 0049a241
    ADD ESI,EAX                         ; 0049a244
    FLDZ                                ; 0049a246
    MOV dword ptr [EBX + 0x48],ESI      ; 0049a248
    FCOMP double ptr [ESP + 0x8]        ; 0049a24b
    FNSTSW AX                           ; 0049a24f
    SAHF                                ; 0049a251
    JNC 0x0049a288                      ; 0049a252
        ;   XREF to: 0049a288 (CONDITIONAL_JUMP)  ; LAB_0049a288
    FLD float ptr [ESP + 0x4]           ; 0049a254
    FLD ST0                             ; 0049a258
    MOV EAX,[0x005fe9dc]                ; 0049a25a | g_CGamePtr
    FMUL float ptr [EBX + 0x40]         ; 0049a25f
    FMUL float ptr [EAX + 0x314]        ; 0049a262 | g_CGameInstance.delta_time_float
    FSUBP                               ; 0049a268
    FST float ptr [ESP]                 ; 0049a26a
    FLDZ                                ; 0049a26d
    FCOMPP                              ; 0049a26f
    FNSTSW AX                           ; 0049a271
    SAHF                                ; 0049a273
    JC 0x0049a28e                       ; 0049a274
        ;   XREF to: 0049a28e (CONDITIONAL_JUMP)  ; LAB_0049a28e
    MOV dword ptr [ECX + 0x8],0x0       ; 0049a276
    MOV EAX,dword ptr [ECX + 0x8]       ; 0049a27d
    MOV dword ptr [ECX + 0x4],EAX       ; 0049a280
    MOV EAX,dword ptr [ECX + 0x4]       ; 0049a283
    MOV dword ptr [ECX],EAX             ; 0049a286
    MOV ESP,EBP                         ; 0049a288
        ;   Label: LAB_0049a288
    POP EBP                             ; 0049a28a
    POP ESI                             ; 0049a28b
    POP EBX                             ; 0049a28c
    RET                                 ; 0049a28d
    FLD float ptr [ESP]                 ; 0049a28e
        ;   Label: LAB_0049a28e
    FDIV float ptr [ESP + 0x4]          ; 0049a291
    FLD float ptr [ECX]                 ; 0049a295
    FXCH                                ; 0049a297
    FSTP float ptr [ESP + 0x18]         ; 0049a299
    FMUL float ptr [ESP + 0x18]         ; 0049a29d
    FLD float ptr [ECX + 0x4]           ; 0049a2a1
    FMUL float ptr [ESP + 0x18]         ; 0049a2a4
    FLD float ptr [ECX + 0x8]           ; 0049a2a8
    FMUL float ptr [ESP + 0x18]         ; 0049a2ab
    FXCH ST2                            ; 0049a2af
    FSTP float ptr [ECX]                ; 0049a2b1
    FSTP float ptr [ECX + 0x4]          ; 0049a2b3
    FSTP float ptr [ECX + 0x8]          ; 0049a2b6
    MOV ESP,EBP                         ; 0049a2b9
    POP EBP                             ; 0049a2bb
    POP ESI                             ; 0049a2bc
    POP EBX                             ; 0049a2bd
    RET                                 ; 0049a2be

