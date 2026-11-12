; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_dcamera.cpp_CDemonCamera_precomputeLight_FUN_0043d220 at 0043d675
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90 at 00440ede
;   core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00440000 at 00440256
;   core_dcamera.cpp_renderCoronaProjectedTextureScanline_FUN_0043fce0 at 0043fdd0
;   core_game.cpp_FUN_004bb240 at 004bb197
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01468540
;   undefined4 DAT_01468544
;   undefined4 DAT_01468548
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cbe0
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0043cbe0
    PUSH EDI                            ; 0043cbe1
    PUSH EBP                            ; 0043cbe2
    SUB ESP,0x24                        ; 0043cbe3
    MOV EDI,dword ptr [ESP + 0x38]      ; 0043cbe6
    MOV EBP,ESI                         ; 0043cbea
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043cbec
    MOV EDX,dword ptr [0x0060b280]      ; 0043cbf0 | DAT_0060b280
    PUSH EDX                            ; 0043cbf6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 0043cbf7
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    MOV ECX,EAX                         ; 0043cbfc
    ADD ESP,0x4                         ; 0043cbfe
    TEST EAX,EAX                        ; 0043cc01
    JNZ 0x0043cd24                      ; 0043cc03
        ;   XREF to: 0043cd24 (CONDITIONAL_JUMP)  ; LAB_0043cd24
    MOV EAX,dword ptr [EDI]             ; 0043cc09
    SUB EAX,dword ptr [ESI + 0x16c]     ; 0043cc0b
    MOV EDX,dword ptr [ESI + 0x170]     ; 0043cc11
    MOV dword ptr [ESP + 0xc],EAX       ; 0043cc17
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043cc1b
    SUB EAX,EDX                         ; 0043cc1e
    MOV ECX,dword ptr [ESI + 0x174]     ; 0043cc20
    MOV dword ptr [ESP + 0x10],EAX      ; 0043cc26
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043cc2a
    SUB EAX,ECX                         ; 0043cc2d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cc2f
    MOV dword ptr [ESP + 0x14],EAX      ; 0043cc33
    MOV EAX,dword ptr [ESI + 0x180]     ; 0043cc37
    IMUL EDX                            ; 0043cc3d
    SHRD EAX,EDX,0x10                   ; 0043cc3f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043cc43
    MOV ECX,EAX                         ; 0043cc47
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0043cc49
    IMUL EDX                            ; 0043cc4f
    SHRD EAX,EDX,0x10                   ; 0043cc51
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043cc55
    ADD ECX,EAX                         ; 0043cc59
    MOV EAX,dword ptr [ESI + 0x198]     ; 0043cc5b
    IMUL EDX                            ; 0043cc61
    SHRD EAX,EDX,0x10                   ; 0043cc63
    ADD ECX,EAX                         ; 0043cc67
    MOV dword ptr [ESP + 0x20],ECX      ; 0043cc69
    TEST ECX,ECX                        ; 0043cc6d
    JG 0x0043cc8b                       ; 0043cc6f
        ;   XREF to: 0043cc8b (CONDITIONAL_JUMP)  ; LAB_0043cc8b
    MOV EDI,ESP                         ; 0043cc71
        ;   Label: LAB_0043cc71
    MOV ESI,0x1468540                   ; 0043cc73
    MOVSD ES:EDI,ESI                    ; 0043cc78 | DAT_01468540
    MOVSD ES:EDI,ESI                    ; 0043cc79 | DAT_01468544
    MOVSD ES:EDI,ESI                    ; 0043cc7a | DAT_01468548
    MOV ESI,ESP                         ; 0043cc7b
    MOV EDI,EBP                         ; 0043cc7d
    MOVSD ES:EDI,ESI                    ; 0043cc7f
    MOVSD ES:EDI,ESI                    ; 0043cc80
    MOVSD ES:EDI,ESI                    ; 0043cc81
    MOV EAX,EBP                         ; 0043cc82
    ADD ESP,0x24                        ; 0043cc84
    POP EBP                             ; 0043cc87
    POP EDI                             ; 0043cc88
    POP EBX                             ; 0043cc89
    RET                                 ; 0043cc8a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cc8b
        ;   Label: LAB_0043cc8b
    MOV EAX,dword ptr [ESI + 0x178]     ; 0043cc8f
    IMUL EDX                            ; 0043cc95
    SHRD EAX,EDX,0x10                   ; 0043cc97
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043cc9b
    MOV ECX,EAX                         ; 0043cc9f
    MOV EAX,dword ptr [ESI + 0x184]     ; 0043cca1
    IMUL EDX                            ; 0043cca7
    SHRD EAX,EDX,0x10                   ; 0043cca9
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043ccad
    ADD ECX,EAX                         ; 0043ccb1
    MOV EAX,dword ptr [ESI + 0x190]     ; 0043ccb3
    IMUL EDX                            ; 0043ccb9
    SHRD EAX,EDX,0x10                   ; 0043ccbb
    ADD ECX,EAX                         ; 0043ccbf
    MOV EDI,dword ptr [ESP + 0x20]      ; 0043ccc1
    MOV dword ptr [ESP + 0x18],ECX      ; 0043ccc5
    CMP ECX,EDI                         ; 0043ccc9
    JGE 0x0043cc71                      ; 0043cccb
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EBX,EDI                         ; 0043cccd
    NEG EBX                             ; 0043cccf
    CMP EBX,ECX                         ; 0043ccd1
    JGE 0x0043cc71                      ; 0043ccd3
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043ccd5
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0043ccd9
    IMUL EDX                            ; 0043ccdf
    SHRD EAX,EDX,0x10                   ; 0043cce1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043cce5
    MOV ECX,EAX                         ; 0043cce9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0043cceb
    IMUL EDX                            ; 0043ccf1
    SHRD EAX,EDX,0x10                   ; 0043ccf3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043ccf7
    ADD ECX,EAX                         ; 0043ccfb
    MOV EAX,dword ptr [ESI + 0x194]     ; 0043ccfd
    IMUL EDX                            ; 0043cd03
    SHRD EAX,EDX,0x10                   ; 0043cd05
    ADD ECX,EAX                         ; 0043cd09
    MOV dword ptr [ESP + 0x1c],ECX      ; 0043cd0b
    CMP ECX,EDI                         ; 0043cd0f
    JGE 0x0043cc71                      ; 0043cd11
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    CMP EBX,ECX                         ; 0043cd17
    JL 0x0043ce42                       ; 0043cd19
        ;   XREF to: 0043ce42 (CONDITIONAL_JUMP)  ; LAB_0043ce42
    JMP 0x0043cc71                      ; 0043cd1f
        ;   XREF to: 0043cc71 (UNCONDITIONAL_JUMP)  ; LAB_0043cc71
    SHL EAX,0x2                         ; 0043cd24
        ;   Label: LAB_0043cd24
    SUB EAX,ECX                         ; 0043cd27
    SHL EAX,0x2                         ; 0043cd29
    LEA EDX,[ESI + EAX*0x1]             ; 0043cd2c
    MOV EAX,dword ptr [EDI]             ; 0043cd2f
    MOV EBX,dword ptr [EDX + 0x11ec]    ; 0043cd31
    SUB EAX,EBX                         ; 0043cd37
    MOV dword ptr [ESP + 0xc],EAX       ; 0043cd39
    MOV EBX,dword ptr [EDX + 0x11f0]    ; 0043cd3d
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043cd43
    SUB EAX,EBX                         ; 0043cd46
    SHL ECX,0x2                         ; 0043cd48
    MOV dword ptr [ESP + 0x10],EAX      ; 0043cd4b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043cd4f
    MOV EDI,dword ptr [EDX + 0x11f4]    ; 0043cd52
    ADD ECX,ESI                         ; 0043cd58
    SUB EAX,EDI                         ; 0043cd5a
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cd5c
    MOV dword ptr [ESP + 0x14],EAX      ; 0043cd60
    MOV EAX,dword ptr [ECX + 0x128c]    ; 0043cd64
    IMUL EDX                            ; 0043cd6a
    SHRD EAX,EDX,0x10                   ; 0043cd6c
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043cd70
    MOV EDI,EAX                         ; 0043cd74
    MOV EAX,dword ptr [ECX + 0x12ec]    ; 0043cd76
    IMUL EDX                            ; 0043cd7c
    SHRD EAX,EDX,0x10                   ; 0043cd7e
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043cd82
    ADD EDI,EAX                         ; 0043cd86
    MOV EAX,dword ptr [ECX + 0x134c]    ; 0043cd88
    IMUL EDX                            ; 0043cd8e
    SHRD EAX,EDX,0x10                   ; 0043cd90
    ADD EDI,EAX                         ; 0043cd94
    MOV dword ptr [ESP + 0x20],EDI      ; 0043cd96
    TEST EDI,EDI                        ; 0043cd9a
    JLE 0x0043cc71                      ; 0043cd9c
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cda2
    MOV EAX,dword ptr [ECX + 0x124c]    ; 0043cda6
    IMUL EDX                            ; 0043cdac
    SHRD EAX,EDX,0x10                   ; 0043cdae
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043cdb2
    MOV EDI,EAX                         ; 0043cdb6
    MOV EAX,dword ptr [ECX + 0x12ac]    ; 0043cdb8
    IMUL EDX                            ; 0043cdbe
    SHRD EAX,EDX,0x10                   ; 0043cdc0
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043cdc4
    ADD EDI,EAX                         ; 0043cdc8
    MOV EAX,dword ptr [ECX + 0x130c]    ; 0043cdca
    IMUL EDX                            ; 0043cdd0
    SHRD EAX,EDX,0x10                   ; 0043cdd2
    ADD EDI,EAX                         ; 0043cdd6
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043cdd8
    MOV dword ptr [ESP + 0x18],EDI      ; 0043cddc
    CMP EDI,EDX                         ; 0043cde0
    JGE 0x0043cc71                      ; 0043cde2
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EBX,EDX                         ; 0043cde8
    NEG EBX                             ; 0043cdea
    CMP EBX,EDI                         ; 0043cdec
    JGE 0x0043cc71                      ; 0043cdee
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043cdf4
    MOV EAX,dword ptr [ECX + 0x126c]    ; 0043cdf8
    IMUL EDX                            ; 0043cdfe
    SHRD EAX,EDX,0x10                   ; 0043ce00
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043ce04
    MOV EDI,EAX                         ; 0043ce08
    MOV EAX,dword ptr [ECX + 0x12cc]    ; 0043ce0a
    IMUL EDX                            ; 0043ce10
    SHRD EAX,EDX,0x10                   ; 0043ce12
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043ce16
    ADD EDI,EAX                         ; 0043ce1a
    MOV EAX,dword ptr [ECX + 0x132c]    ; 0043ce1c
    IMUL EDX                            ; 0043ce22
    SHRD EAX,EDX,0x10                   ; 0043ce24
    ADD EDI,EAX                         ; 0043ce28
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043ce2a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0043ce2e
    CMP EDI,EDX                         ; 0043ce32
    JGE 0x0043cc71                      ; 0043ce34
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    CMP EBX,EDI                         ; 0043ce3a
    JGE 0x0043cc71                      ; 0043ce3c
        ;   XREF to: 0043cc71 (CONDITIONAL_JUMP)  ; LAB_0043cc71
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043ce42
        ;   Label: LAB_0043ce42
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043ce46
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0043ce4a
    IMUL EDX                            ; 0043ce50
    IDIV EBX                            ; 0043ce52
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0043ce54
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043ce5a
    ADD EDX,EAX                         ; 0043ce5e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043ce60
    MOV dword ptr [ESP + 0x18],EDX      ; 0043ce64
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0043ce68
    IMUL EDX                            ; 0043ce6e
    IDIV EBX                            ; 0043ce70
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0043ce72
    MOV EDI,ESP                         ; 0043ce78
    ADD EDX,EAX                         ; 0043ce7a
    LEA ESI,[ESP + 0x18]                ; 0043ce7c
    MOV dword ptr [ESP + 0x1c],EDX      ; 0043ce80
    MOVSD ES:EDI,ESI                    ; 0043ce84
    MOVSD ES:EDI,ESI                    ; 0043ce85
    MOVSD ES:EDI,ESI                    ; 0043ce86
    MOV ESI,ESP                         ; 0043ce87
    MOV EDI,EBP                         ; 0043ce89
    MOVSD ES:EDI,ESI                    ; 0043ce8b
    MOVSD ES:EDI,ESI                    ; 0043ce8c
    MOVSD ES:EDI,ESI                    ; 0043ce8d
    MOV EAX,EBP                         ; 0043ce8e
    ADD ESP,0x24                        ; 0043ce90
    POP EBP                             ; 0043ce93
    POP EDI                             ; 0043ce94
    POP EBX                             ; 0043ce95
    RET                                 ; 0043ce96

