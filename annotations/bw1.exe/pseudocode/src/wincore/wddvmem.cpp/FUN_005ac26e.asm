; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005ac26e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00629010
;   undefined4 DAT_0071362c
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005ac26e
        ;   Label: wincore_wddvmem.cpp_FUN_005ac26e
    PUSH EBP                            ; 005ac270
    SUB ESP,0x4                         ; 005ac271
    MOV EDX,dword ptr [0x0061b49c]      ; 005ac274 | DAT_0061b49c
    XOR ECX,ECX                         ; 005ac27a
    TEST EDX,EDX                        ; 005ac27c
    JLE 0x005ac2ed                      ; 005ac27e
        ;   XREF to: 005ac2ed (CONDITIONAL_JUMP)  ; LAB_005ac2ed
    PUSH EDI                            ; 005ac280
    PUSH ESI                            ; 005ac281
    PUSH EBX                            ; 005ac282
    MOV EAX,[0x0061b4a0]                ; 005ac283 | DAT_0061b4a0
    MOV EDX,EAX                         ; 005ac288
    SAR EDX,0x1f                        ; 005ac28a
    SHL EDX,0x3                         ; 005ac28d
    SBB EAX,EDX                         ; 005ac290
    SAR EAX,0x3                         ; 005ac292
    MOV EDI,EAX                         ; 005ac295
    MOV EAX,[0x0061b498]                ; 005ac297 | DAT_0061b498
    SHL EAX,0x2                         ; 005ac29c
    MOV EBP,dword ptr [0x0061b498]      ; 005ac29f | DAT_0061b498
    MOV dword ptr [ESP + 0xc],EAX       ; 005ac2a5
    XOR EAX,EAX                         ; 005ac2a9
    IMUL EDX,EBP,0x0                    ; 005ac2ab
    MOV EBX,dword ptr [0x0061b498]      ; 005ac2ae | DAT_0061b498
        ;   Label: LAB_005ac2ae
    IMUL EBX,ECX                        ; 005ac2b4
    IMUL EBX,EDI                        ; 005ac2b7
    MOV ESI,dword ptr [0x00629010]      ; 005ac2ba | DAT_00629010
    ADD EBX,ESI                         ; 005ac2c0
    MOV dword ptr [EAX + 0x1c4354c],EBX ; 005ac2c2
    MOV EBX,dword ptr [0x0071362c]      ; 005ac2c8 | DAT_0071362c
    ADD EAX,0x4                         ; 005ac2ce
    ADD EBX,EDX                         ; 005ac2d1
    INC ECX                             ; 005ac2d3
    MOV dword ptr [EAX + 0x1c44808],EBX ; 005ac2d4
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ac2da
    MOV ESI,dword ptr [0x0061b49c]      ; 005ac2de | DAT_0061b49c
    ADD EDX,EBX                         ; 005ac2e4
    CMP ECX,ESI                         ; 005ac2e6
    JL 0x005ac2ae                       ; 005ac2e8
        ;   XREF to: 005ac2ae (CONDITIONAL_JUMP)  ; LAB_005ac2ae
    POP EBX                             ; 005ac2ea
    POP ESI                             ; 005ac2eb
    POP EDI                             ; 005ac2ec
    ADD ESP,0x4                         ; 005ac2ed
        ;   Label: LAB_005ac2ed
    POP EBP                             ; 005ac2f0
    RET                                 ; 005ac2f1

