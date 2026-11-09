; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flies_cpp_drawFlyPixel_FUN_004a6fe0(int screen_x,int screen_y,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   screen_x
; int              Stack[0x8]:4   screen_y
; int              Stack[0xc]:4   z_depth
;
; XREF[2]:
;   core_flies.cpp_FUN_004a70b0 at 004a74d1
;   core_flies.cpp_drawFlyPixelClipped_FUN_004a7070 at 004a7099
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01caf62c
;   undefined4 DAT_01caf630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6fe0
        ;   Label: core_flies.cpp_drawFlyPixel_FUN_004a6fe0
    PUSH ESI                            ; 004a6fe1
    PUSH EDI                            ; 004a6fe2
    PUSH EBP                            ; 004a6fe3
    MOV EBP,ESP                         ; 004a6fe4
    SUB ESP,0x4                         ; 004a6fe6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004a6fe9
    SHL EAX,0x2                         ; 004a6fec
    MOV EDX,dword ptr [EBP + 0x14]      ; 004a6fef
    MOV ECX,dword ptr [EAX + 0x1c2b64c] ; 004a6ff2
    SHL EDX,0x2                         ; 004a6ff8
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004a6ffb
    CMP EBX,dword ptr [ECX + EDX*0x1]   ; 004a6ffe
    JBE 0x004a700c                      ; 004a7001
        ;   XREF to: 004a700c (CONDITIONAL_JUMP)  ; LAB_004a700c
    CMP dword ptr [0x006141c0],0x20     ; 004a7003 | DAT_006141c0
    JZ 0x004a7013                       ; 004a700a
        ;   XREF to: 004a7013 (CONDITIONAL_JUMP)  ; LAB_004a7013
    MOV ESP,EBP                         ; 004a700c
        ;   Label: LAB_004a700c
    POP EBP                             ; 004a700e
    POP EDI                             ; 004a700f
    POP ESI                             ; 004a7010
    POP EBX                             ; 004a7011
    RET                                 ; 004a7012
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 004a7013
        ;   Label: LAB_004a7013
    ADD EAX,EDX                         ; 004a7019
    MOV dword ptr [EBP + -0x4],EAX      ; 004a701b
    MOV EDI,dword ptr [EBP + 0xfffffffc] ; 004a701e
    MOVD MM0,dword ptr [0x01c35e60]     ; 004a7024 | DAT_01c35e60
    PXOR MM7,MM7                        ; 004a702b
    MOVD MM1,dword ptr [EDI]            ; 004a702e
    MOVD MM2,dword ptr [0x01caf62c]     ; 004a7031 | DAT_01caf62c
    MOVD MM3,dword ptr [0x01caf630]     ; 004a7038 | DAT_01caf630
    PUNPCKLBW MM0,MM7                   ; 004a703f
    PUNPCKLBW MM1,MM7                   ; 004a7042
    PUNPCKLBW MM2,MM7                   ; 004a7045
    PUNPCKLBW MM3,MM7                   ; 004a7048
    PMULLW MM0,MM3                      ; 004a704b
    PMULLW MM1,MM2                      ; 004a704e
    PADDW MM0,MM1                       ; 004a7051
    PSRLW MM0,0x8                       ; 004a7054
    PACKUSWB MM0,MM7                    ; 004a7058
    MOVD dword ptr [EDI],MM0            ; 004a705b
    EMMS                                ; 004a705e
    MOV ESP,EBP                         ; 004a7060
    POP EBP                             ; 004a7062
    POP EDI                             ; 004a7063
    POP ESI                             ; 004a7064
    POP EBX                             ; 004a7065
    RET                                 ; 004a7066

