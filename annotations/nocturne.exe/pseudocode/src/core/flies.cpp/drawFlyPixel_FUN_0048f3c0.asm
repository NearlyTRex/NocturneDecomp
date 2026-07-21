; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_drawFlyPixel_FUN_0048f3c0(int param_1,int param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0048f490 at 0048f878
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00c70
;   undefined4 DAT_01c70754
;   undefined4 DAT_01c70758
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f3c0
        ;   Label: core_flies.cpp_drawFlyPixel_FUN_0048f3c0
    PUSH ESI                            ; 0048f3c1
    PUSH EDI                            ; 0048f3c2
    PUSH EBP                            ; 0048f3c3
    MOV EBP,ESP                         ; 0048f3c4
    SUB ESP,0x4                         ; 0048f3c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f3c9
    SHL EAX,0x2                         ; 0048f3cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f3cf
    MOV ECX,dword ptr [EAX + 0x1bd4260] ; 0048f3d2 | DAT_01bd4260
    SHL EDX,0x2                         ; 0048f3d8
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0048f3db
    CMP EBX,dword ptr [ECX + EDX*0x1]   ; 0048f3de
    JBE 0x0048f3ec                      ; 0048f3e1
        ;   XREF to: 0048f3ec (CONDITIONAL_JUMP)  ; LAB_0048f3ec
    CMP dword ptr [0x005b7624],0x20     ; 0048f3e3 | DAT_005b7624
    JZ 0x0048f3f3                       ; 0048f3ea
        ;   XREF to: 0048f3f3 (CONDITIONAL_JUMP)  ; LAB_0048f3f3
    MOV ESP,EBP                         ; 0048f3ec
        ;   Label: LAB_0048f3ec
    POP EBP                             ; 0048f3ee
    POP EDI                             ; 0048f3ef
    POP ESI                             ; 0048f3f0
    POP EBX                             ; 0048f3f1
    RET                                 ; 0048f3f2
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0048f3f3 | DAT_01bd2fa0
        ;   Label: LAB_0048f3f3
    ADD EAX,EDX                         ; 0048f3f9
    MOV dword ptr [EBP + -0x4],EAX      ; 0048f3fb
    MOV EDI,dword ptr [EBP + 0xfffffffc] ; 0048f3fe
    MOVD MM0,dword ptr [0x01c00c70]     ; 0048f404 | DAT_01c00c70
    PXOR MM7,MM7                        ; 0048f40b
    MOVD MM1,dword ptr [EDI]            ; 0048f40e
    MOVD MM2,dword ptr [0x01c70754]     ; 0048f411 | DAT_01c70754
    MOVD MM3,dword ptr [0x01c70758]     ; 0048f418 | DAT_01c70758
    PUNPCKLBW MM0,MM7                   ; 0048f41f
    PUNPCKLBW MM1,MM7                   ; 0048f422
    PUNPCKLBW MM2,MM7                   ; 0048f425
    PUNPCKLBW MM3,MM7                   ; 0048f428
    PMULLW MM0,MM3                      ; 0048f42b
    PMULLW MM1,MM2                      ; 0048f42e
    PADDW MM0,MM1                       ; 0048f431
    PSRLW MM0,0x8                       ; 0048f434
    PACKUSWB MM0,MM7                    ; 0048f438
    MOVD dword ptr [EDI],MM0            ; 0048f43b
    EMMS                                ; 0048f43e
    MOV ESP,EBP                         ; 0048f440
    POP EBP                             ; 0048f442
    POP EDI                             ; 0048f443
    POP ESI                             ; 0048f444
    POP EBX                             ; 0048f445
    RET                                 ; 0048f446

