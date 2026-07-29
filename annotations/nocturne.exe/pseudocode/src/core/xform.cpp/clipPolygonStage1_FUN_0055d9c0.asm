; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage1_FUN_0055d9c0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_0055d9ac = 0055da21
;   undefined1* PTR_caseD_3_0055d9b8 = 0055da66
;   undefined4 DAT_02de3130
;   undefined4 DAT_02de3134
;   undefined4 DAT_02de3140
;   undefined4 DAT_02de3144
;   undefined4 DAT_02de314c
;   undefined4 DAT_02de3740
;   undefined4 DAT_02de3748
;   undefined4 DAT_02de3770
;   undefined4 DAT_02de3774
;   undefined4 DAT_02de3778
;   undefined4 DAT_02de377c
;   undefined4 DAT_02de3780
;
; Called Functions:
;   core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d9c0
        ;   Label: core_xform.cpp_clipPolygonStage1_FUN_0055d9c0
    PUSH ESI                            ; 0055d9c1
    PUSH EDI                            ; 0055d9c2
    PUSH EBP                            ; 0055d9c3
    SUB ESP,0x4                         ; 0055d9c4
    XOR EDX,EDX                         ; 0055d9c7
    MOV ECX,dword ptr [0x02de3130]      ; 0055d9c9 | DAT_02de3130
    MOV dword ptr [ESP],EDX             ; 0055d9cf
    TEST ECX,ECX                        ; 0055d9d2
    JLE 0x0055da7e                      ; 0055d9d4
        ;   XREF to: 0055da7e (CONDITIONAL_JUMP)  ; LAB_0055da7e
    MOV EBX,0x2de3740                   ; 0055d9da
    MOV EAX,dword ptr [ESP]             ; 0055d9df
        ;   Label: LAB_0055d9df
    MOV EBP,dword ptr [0x02de3130]      ; 0055d9e2 | DAT_02de3130
    INC EAX                             ; 0055d9e8
    CMP EAX,EBP                         ; 0055d9e9
    JNZ 0x0055d9ef                      ; 0055d9eb
        ;   XREF to: 0055d9ef (CONDITIONAL_JUMP)  ; LAB_0055d9ef
    XOR EAX,EBP                         ; 0055d9ed
    IMUL EAX,EAX,0x30                   ; 0055d9ef
        ;   Label: LAB_0055d9ef
    MOV EBP,0x2de3740                   ; 0055d9f2
    MOV EDX,EBX                         ; 0055d9f7
    MOV EDI,dword ptr [EBX]             ; 0055d9f9 | DAT_02de3740 | DAT_02de3770
    MOV ECX,dword ptr [EBX + 0x8]       ; 0055d9fb | DAT_02de3748 | DAT_02de3778
    ADD EBP,EAX                         ; 0055d9fe
    XOR EAX,EAX                         ; 0055da00
    CMP EDI,ECX                         ; 0055da02
    JL 0x0055da0b                       ; 0055da04
        ;   XREF to: 0055da0b (CONDITIONAL_JUMP)  ; LAB_0055da0b
    MOV EAX,0x1                         ; 0055da06
    MOV ESI,dword ptr [EBP + 0x8]       ; 0055da0b | DAT_02de3748
        ;   Label: LAB_0055da0b
    CMP ESI,dword ptr [EBP]             ; 0055da0e | DAT_02de3740
    JG 0x0055da15                       ; 0055da11
        ;   XREF to: 0055da15 (CONDITIONAL_JUMP)  ; LAB_0055da15
    OR AL,0x2                           ; 0055da13
    CMP EAX,0x3                         ; 0055da15
        ;   Label: LAB_0055da15
    JA 0x0055da66                       ; 0055da18
        ;   XREF to: 0055da66 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55d9ac]  ; 0055da1a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02de3134],0x30 ; 0055da21 | DAT_02de3134
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055da28
    MOV ESI,EDX                         ; 0055da2d
    ADD EDI,0x2de3140                   ; 0055da2f
    TEST EDI,0x7                        ; 0055da35
    JZ 0x0055da43                       ; 0055da3b
        ;   XREF to: 0055da43 (CONDITIONAL_JUMP)  ; LAB_0055da43
    MOVSD ES:EDI,ESI                    ; 0055da3d | DAT_02de3140 | DAT_02de3770
    SUB ECX,0x4                         ; 0055da3e
    JLE 0x0055da60                      ; 0055da41
        ;   XREF to: 0055da60 (CONDITIONAL_JUMP)  ; LAB_0055da60
    SUB ECX,0x8                         ; 0055da43
        ;   Label: LAB_0055da43
    JL 0x0055da54                       ; 0055da46
        ;   XREF to: 0055da54 (CONDITIONAL_JUMP)  ; LAB_0055da54
    FILD qword ptr [ESI]                ; 0055da48 | DAT_02de3774 | DAT_02de377c | DAT_02de3770
    ADD ESI,0x8                         ; 0055da4a
    FISTP qword ptr [EDI]               ; 0055da4d | DAT_02de3144 | DAT_02de314c | DAT_02de3140
    ADD EDI,0x8                         ; 0055da4f
    JMP 0x0055da43                      ; 0055da52
        ;   XREF to: 0055da43 (UNCONDITIONAL_JUMP)  ; LAB_0055da43
    ADD ECX,0x8                         ; 0055da54
        ;   Label: LAB_0055da54
    JLE 0x0055da60                      ; 0055da57
        ;   XREF to: 0055da60 (CONDITIONAL_JUMP)  ; LAB_0055da60
    MOVSD ES:EDI,ESI                    ; 0055da59 | DAT_02de314c | DAT_02de377c
    SUB ECX,0x4                         ; 0055da5a
    JLE 0x0055da60                      ; 0055da5d
        ;   XREF to: 0055da60 (CONDITIONAL_JUMP)  ; LAB_0055da60
    MOVSD ES:EDI,ESI                    ; 0055da5f | DAT_02de3780
    INC dword ptr [0x02de3134]          ; 0055da60 | DAT_02de3134
        ;   Label: LAB_0055da60
    MOV ESI,dword ptr [ESP]             ; 0055da66
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de3130]      ; 0055da69 | DAT_02de3130
    INC ESI                             ; 0055da6f
    ADD EBX,0x30                        ; 0055da70
    MOV dword ptr [ESP],ESI             ; 0055da73
    CMP ESI,EDI                         ; 0055da76
    JL 0x0055d9df                       ; 0055da78
        ;   XREF to: 0055d9df (CONDITIONAL_JUMP)  ; LAB_0055d9df
    ADD ESP,0x4                         ; 0055da7e
        ;   Label: LAB_0055da7e
    POP EBP                             ; 0055da81
    POP EDI                             ; 0055da82
    POP ESI                             ; 0055da83
    POP EBX                             ; 0055da84
    RET                                 ; 0055da85
    IMUL EAX,dword ptr [0x02de3134],0x30 ; 0055da86 | DAT_02de3134
        ;   Label: caseD_1
    ADD EAX,0x2de3140                   ; 0055da8d
    PUSH EAX                            ; 0055da92
    PUSH EDX                            ; 0055da93 | DAT_02de3770
    PUSH EBP                            ; 0055da94
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0 ; 0055da95
        ;   XREF to: 0055d6b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x02de3134]      ; 0055da9a | DAT_02de3134
    INC ESI                             ; 0055daa0
    ADD ESP,0xc                         ; 0055daa1
    MOV dword ptr [0x02de3134],ESI      ; 0055daa4 | DAT_02de3134
    JMP 0x0055da66                      ; 0055daaa
        ;   XREF to: 0055da66 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02de3134],0x30 ; 0055daac | DAT_02de3134
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055dab3
    MOV ESI,EDX                         ; 0055dab8
    ADD EDI,0x2de3140                   ; 0055daba
    TEST EDI,0x7                        ; 0055dac0
    JZ 0x0055dace                       ; 0055dac6
        ;   XREF to: 0055dace (CONDITIONAL_JUMP)  ; LAB_0055dace
    MOVSD ES:EDI,ESI                    ; 0055dac8 | DAT_02de3140 | DAT_02de3770
    SUB ECX,0x4                         ; 0055dac9
    JLE 0x0055daeb                      ; 0055dacc
        ;   XREF to: 0055daeb (CONDITIONAL_JUMP)  ; LAB_0055daeb
    SUB ECX,0x8                         ; 0055dace
        ;   Label: LAB_0055dace
    JL 0x0055dadf                       ; 0055dad1
        ;   XREF to: 0055dadf (CONDITIONAL_JUMP)  ; LAB_0055dadf
    FILD qword ptr [ESI]                ; 0055dad3 | DAT_02de3774 | DAT_02de377c | DAT_02de3770
    ADD ESI,0x8                         ; 0055dad5
    FISTP qword ptr [EDI]               ; 0055dad8 | DAT_02de3144 | DAT_02de314c | DAT_02de3140
    ADD EDI,0x8                         ; 0055dada
    JMP 0x0055dace                      ; 0055dadd
        ;   XREF to: 0055dace (UNCONDITIONAL_JUMP)  ; LAB_0055dace
    ADD ECX,0x8                         ; 0055dadf
        ;   Label: LAB_0055dadf
    JLE 0x0055daeb                      ; 0055dae2
        ;   XREF to: 0055daeb (CONDITIONAL_JUMP)  ; LAB_0055daeb
    MOVSD ES:EDI,ESI                    ; 0055dae4 | DAT_02de314c | DAT_02de377c
    SUB ECX,0x4                         ; 0055dae5
    JLE 0x0055daeb                      ; 0055dae8
        ;   XREF to: 0055daeb (CONDITIONAL_JUMP)  ; LAB_0055daeb
    MOVSD ES:EDI,ESI                    ; 0055daea | DAT_02de3780
    MOV ECX,dword ptr [0x02de3134]      ; 0055daeb | DAT_02de3134
        ;   Label: LAB_0055daeb
    INC ECX                             ; 0055daf1
    MOV dword ptr [0x02de3134],ECX      ; 0055daf2 | DAT_02de3134
    IMUL EAX,ECX,0x30                   ; 0055daf8
    ADD EAX,0x2de3140                   ; 0055dafb
    PUSH EAX                            ; 0055db00
    PUSH EBP                            ; 0055db01
    PUSH EDX                            ; 0055db02 | DAT_02de3770
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0 ; 0055db03
        ;   XREF to: 0055d6b0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x02de3134]      ; 0055db08 | DAT_02de3134
    INC EDI                             ; 0055db0e
    ADD ESP,0xc                         ; 0055db0f
    MOV dword ptr [0x02de3134],EDI      ; 0055db12 | DAT_02de3134
    JMP 0x0055da66                      ; 0055db18
        ;   XREF to: 0055da66 (UNCONDITIONAL_JUMP)  ; caseD_3

