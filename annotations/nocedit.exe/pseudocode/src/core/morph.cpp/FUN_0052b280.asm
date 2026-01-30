; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_morph_cpp_FUN_0052b280(void)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_morph.cpp_CMorph_getReady_FUN_0052b680 at 0052ba10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b280
        ;   Label: core_morph.cpp_FUN_0052b280
    PUSH ESI                            ; 0052b281
    PUSH EDI                            ; 0052b282
    PUSH EBP                            ; 0052b283
    SUB ESP,0x14                        ; 0052b284
    MOV ESI,dword ptr [ESP + 0x28]      ; 0052b287
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0052b28b
    MOV EDX,0x7149f2ca                  ; 0052b28f
    MOV ECX,dword ptr [ESI + 0x54]      ; 0052b294
    XOR EDI,EDI                         ; 0052b297
    MOV dword ptr [ESP + 0xc],EDX       ; 0052b299
    XOR EDX,EDX                         ; 0052b29d
    TEST ECX,ECX                        ; 0052b29f
    JLE 0x0052b2f2                      ; 0052b2a1
        ;   XREF to: 0052b2f2 (CONDITIONAL_JUMP)  ; LAB_0052b2f2
    XOR ECX,ECX                         ; 0052b2a3
    MOV EAX,dword ptr [ESI + 0x58]      ; 0052b2a5
        ;   Label: LAB_0052b2a5
    FLD float ptr [EBX]                 ; 0052b2a8
    FSUB float ptr [ECX + EAX*0x1 + 0x4] ; 0052b2aa
    FSTP float ptr [ESP]                ; 0052b2ae
    FLD float ptr [EBX + 0x4]           ; 0052b2b1
    FSUB float ptr [ECX + EAX*0x1 + 0x8] ; 0052b2b4
    FST float ptr [ESP + 0x4]           ; 0052b2b8
    FMUL float ptr [ESP + 0x4]          ; 0052b2bc
    FLD float ptr [ESP]                 ; 0052b2c0
    FMUL ST0                            ; 0052b2c3
    FLD float ptr [EBX + 0x8]           ; 0052b2c5
    FSUB float ptr [ECX + EAX*0x1 + 0xc] ; 0052b2c8
    FXCH                                ; 0052b2cc
    FADDP ST2,ST0                       ; 0052b2ce
    FST float ptr [ESP + 0x8]           ; 0052b2d0
    FMUL float ptr [ESP + 0x8]          ; 0052b2d4
    FADDP                               ; 0052b2d8
    FST float ptr [ESP + 0x10]          ; 0052b2da
    FCOMP float ptr [ESP + 0xc]         ; 0052b2de
    FNSTSW AX                           ; 0052b2e2
    SAHF                                ; 0052b2e4
    JC 0x0052b301                       ; 0052b2e5
        ;   XREF to: 0052b301 (CONDITIONAL_JUMP)  ; LAB_0052b301
    INC EDX                             ; 0052b2e7
        ;   Label: LAB_0052b2e7
    MOV EBP,dword ptr [ESI + 0x54]      ; 0052b2e8
    ADD ECX,0x10                        ; 0052b2eb
    CMP EDX,EBP                         ; 0052b2ee
    JL 0x0052b2a5                       ; 0052b2f0
        ;   XREF to: 0052b2a5 (CONDITIONAL_JUMP)  ; LAB_0052b2a5
    MOV EAX,EDI                         ; 0052b2f2
        ;   Label: LAB_0052b2f2
    ADD ESP,0x14                        ; 0052b2f4
    POP EBP                             ; 0052b2f7
    POP EDI                             ; 0052b2f8
    POP ESI                             ; 0052b2f9
    POP EBX                             ; 0052b2fa
    LEA EAX,[EAX]                       ; 0052b2fb
    MOV ECX,ECX                         ; 0052b2fe
    RET                                 ; 0052b300
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052b301
        ;   Label: LAB_0052b301
    MOV EDI,EDX                         ; 0052b305
    MOV dword ptr [ESP + 0xc],EAX       ; 0052b307
    JMP 0x0052b2e7                      ; 0052b30b
        ;   XREF to: 0052b2e7 (UNCONDITIONAL_JUMP)  ; LAB_0052b2e7

