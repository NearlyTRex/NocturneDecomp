; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a2910(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005efffc
;   TerminatedCString s_Animation_005f0002
;   undefined4 DAT_005f000f
;
; Called Functions:
;   FUN_005035c0
;   FUN_00551050
;   FUN_0059daa0
;   FUN_005b1890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2910
        ;   Label: FUN_005a2910
    PUSH ESI                            ; 005a2911
    PUSH EDI                            ; 005a2912
    SUB ESP,0x30                        ; 005a2913
    MOV EBX,dword ptr [ESP + 0x40]      ; 005a2916
    PUSH 0x5efffc                       ; 005a291a | = "Death"
    LEA ESI,[EBX + 0x10af8]             ; 005a291f
    PUSH ESI                            ; 005a2925
    CALL FUN_0059daa0                   ; 005a2926
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a292b
    TEST EAX,EAX                        ; 005a292e
    JNZ 0x005a2a05                      ; 005a2930
        ;   XREF to: 005a2a05 (CONDITIONAL_JUMP)  ; LAB_005a2a05
    PUSH EBX                            ; 005a2936
        ;   Label: LAB_005a2936
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a2937
    CALL dword ptr [EAX + 0x17c]        ; 005a293d
    ADD ESP,0x4                         ; 005a2943
    LEA ESI,[EBX + 0x2b4]               ; 005a2946
        ;   Label: LAB_005a2946
    PUSH ESI                            ; 005a294c
    CALL FUN_005035c0                   ; 005a294d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a2952
    ADD ESP,0x4                         ; 005a2955
    CMP EAX,0x1                         ; 005a2958
    JNZ 0x005a2a20                      ; 005a295b
        ;   XREF to: 005a2a20 (CONDITIONAL_JUMP)  ; LAB_005a2a20
    CMP byte ptr [EBX + 0x11741],0x0    ; 005a2961
        ;   Label: LAB_005a2961
    JZ 0x005a2a74                       ; 005a2968
        ;   XREF to: 005a2a74 (CONDITIONAL_JUMP)  ; LAB_005a2a74
    FLD float ptr [EBX + 0x11840]       ; 005a296e
    FSUB float ptr [ESP + 0x44]         ; 005a2974
    FST float ptr [EBX + 0x11840]       ; 005a2978
    FLDZ                                ; 005a297e
    FCOMPP                              ; 005a2980
    FNSTSW AX                           ; 005a2982
    SAHF                                ; 005a2984
    JNC 0x005a2a49                      ; 005a2985
        ;   XREF to: 005a2a49 (CONDITIONAL_JUMP)  ; LAB_005a2a49
    LEA EAX,[EBX + 0x11354]             ; 005a298b
        ;   Label: LAB_005a298b
    FLD float ptr [0x005f000f]          ; 005a2991 | DAT_005f000f
    FLD float ptr [EAX]                 ; 005a2997
    FMUL ST1                            ; 005a2999
    FLD float ptr [EAX + 0x4]           ; 005a299b
    FMUL ST2                            ; 005a299e
    FLD float ptr [EAX + 0x8]           ; 005a29a0
    FMULP ST3                           ; 005a29a3
    MOV EDI,ESP                         ; 005a29a5
    LEA ESI,[ESP + 0xc]                 ; 005a29a7
    FXCH                                ; 005a29ab
    FSTP float ptr [ESP + 0xc]          ; 005a29ad
    FSTP float ptr [ESP + 0x10]         ; 005a29b1
    FSTP float ptr [ESP + 0x14]         ; 005a29b5
    MOVSD ES:EDI,ESI                    ; 005a29b9
    MOVSD ES:EDI,ESI                    ; 005a29ba
    MOVSD ES:EDI,ESI                    ; 005a29bb
    FLD float ptr [ESP + 0x44]          ; 005a29bc
    FLD float ptr [ESP]                 ; 005a29c0
    FMUL ST1                            ; 005a29c3
    FLD float ptr [ESP + 0x4]           ; 005a29c5
    FMUL ST2                            ; 005a29c9
    LEA EAX,[ESP + 0x18]                ; 005a29cb
    ADD EBX,0x2d0c                      ; 005a29cf
    PUSH EAX                            ; 005a29d5
    FLD float ptr [ESP + 0xc]           ; 005a29d6
    FMULP ST3                           ; 005a29da
    PUSH EBX                            ; 005a29dc
    LEA EDI,[ESP + 0x20]                ; 005a29dd
    LEA ESI,[ESP + 0x2c]                ; 005a29e1
    FXCH                                ; 005a29e5
    FSTP float ptr [ESP + 0x2c]         ; 005a29e7
    FSTP float ptr [ESP + 0x30]         ; 005a29eb
    FSTP float ptr [ESP + 0x34]         ; 005a29ef
    MOVSD ES:EDI,ESI                    ; 005a29f3
    MOVSD ES:EDI,ESI                    ; 005a29f4
    MOVSD ES:EDI,ESI                    ; 005a29f5
    CALL FUN_005b1890                   ; 005a29f6
        ;   XREF to: 005b1890 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1890()
    ADD ESP,0x8                         ; 005a29fb
    ADD ESP,0x30                        ; 005a29fe
    POP EDI                             ; 005a2a01
    POP ESI                             ; 005a2a02
    POP EBX                             ; 005a2a03
    RET                                 ; 005a2a04
    PUSH 0x5f0002                       ; 005a2a05 | = "Animation"
        ;   Label: LAB_005a2a05
    PUSH ESI                            ; 005a2a0a
    CALL FUN_0059daa0                   ; 005a2a0b
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a2a10
    TEST EAX,EAX                        ; 005a2a13
    JNZ 0x005a2946                      ; 005a2a15
        ;   XREF to: 005a2946 (CONDITIONAL_JUMP)  ; LAB_005a2946
    JMP 0x005a2936                      ; 005a2a1b
        ;   XREF to: 005a2936 (UNCONDITIONAL_JUMP)  ; LAB_005a2936
    PUSH ESI                            ; 005a2a20
        ;   Label: LAB_005a2a20
    CALL FUN_005035c0                   ; 005a2a21
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a2a26
    ADD ESP,0x4                         ; 005a2a29
    CMP EAX,0x6                         ; 005a2a2c
    JZ 0x005a2961                       ; 005a2a2f
        ;   XREF to: 005a2961 (CONDITIONAL_JUMP)  ; LAB_005a2961
    MOV EDX,dword ptr [EBX + 0x11848]   ; 005a2a35
    PUSH EDX                            ; 005a2a3b
    CALL FUN_00551050                   ; 005a2a3c
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005a2a41
    JMP 0x005a298b                      ; 005a2a44
        ;   XREF to: 005a298b (UNCONDITIONAL_JUMP)  ; LAB_005a298b
    LEA ESI,[EBX + 0x11741]             ; 005a2a49
        ;   Label: LAB_005a2a49
    PUSH ESI                            ; 005a2a4f
    FLD float ptr [EBX + 0x11844]       ; 005a2a50
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a2a56
    PUSH EBX                            ; 005a2a5c
    FSTP float ptr [EBX + 0x11840]      ; 005a2a5d
    CALL dword ptr [EAX + 0x34]         ; 005a2a63
    ADD ESP,0x8                         ; 005a2a66
    MOV dword ptr [EBX + 0x11848],EAX   ; 005a2a69
    JMP 0x005a298b                      ; 005a2a6f
        ;   XREF to: 005a298b (UNCONDITIONAL_JUMP)  ; LAB_005a298b
    MOV ECX,dword ptr [EBX + 0x11848]   ; 005a2a74
        ;   Label: LAB_005a2a74
    PUSH ECX                            ; 005a2a7a
    CALL FUN_00551050                   ; 005a2a7b
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 005a2a80
    JMP 0x005a298b                      ; 005a2a83
        ;   XREF to: 005a298b (UNCONDITIONAL_JUMP)  ; LAB_005a298b

