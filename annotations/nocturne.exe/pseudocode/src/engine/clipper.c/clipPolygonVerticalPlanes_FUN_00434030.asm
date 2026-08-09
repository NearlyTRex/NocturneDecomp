; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonVerticalPlanes_FUN_00434030(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* PTR_caseD_1_0043401c = 004340e2
;   void* PTR_caseD_3_00434024 = 004340c2
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined1 DAT_00766c78
;   undefined4 DAT_00767b48
;   undefined4 DAT_00768d4c
;   undefined1 DAT_00768d50
;   undefined4 DAT_00768d54
;   undefined4 DAT_00768d80
;   undefined4 DAT_00768d84
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434030
        ;   Label: engine_clipper.c_clipPolygonVerticalPlanes_FUN_00434030
    PUSH ESI                            ; 00434031
    PUSH EDI                            ; 00434032
    PUSH EBP                            ; 00434033
    SUB ESP,0x4                         ; 00434034
    XOR EDX,EDX                         ; 00434037
    MOV ECX,dword ptr [0x00767b48]      ; 00434039 | DAT_00767b48
    MOV dword ptr [ESP],EDX             ; 0043403f
    TEST ECX,ECX                        ; 00434042
    JLE 0x004340da                      ; 00434044
        ;   XREF to: 004340da (CONDITIONAL_JUMP)  ; LAB_004340da
    MOV EBX,0x768d4c                    ; 0043404a | DAT_00768d4c
    MOV EAX,dword ptr [ESP]             ; 0043404f
        ;   Label: LAB_0043404f
    MOV EBP,dword ptr [0x00767b48]      ; 00434052 | DAT_00767b48
    INC EAX                             ; 00434058
    CMP EAX,EBP                         ; 00434059
    JNZ 0x0043405f                      ; 0043405b
        ;   XREF to: 0043405f (CONDITIONAL_JUMP)  ; LAB_0043405f
    XOR EAX,EBP                         ; 0043405d
    IMUL EAX,EAX,0x30                   ; 0043405f
        ;   Label: LAB_0043405f
    MOV EBP,0x768d4c                    ; 00434062 | DAT_00768d4c
    MOV EDX,EBX                         ; 00434067
    MOV EDI,dword ptr [EBX + 0x8]       ; 00434069 | DAT_00768d54 | DAT_00768d84
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043406c | DAT_00768d50 | DAT_00768d80
    NEG EDI                             ; 0043406f
    ADD EBP,EAX                         ; 00434071
    XOR EAX,EAX                         ; 00434073
    CMP EDI,ECX                         ; 00434075
    JL 0x0043407e                       ; 00434077
        ;   XREF to: 0043407e (CONDITIONAL_JUMP)  ; LAB_0043407e
    MOV EAX,0x1                         ; 00434079
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043407e | DAT_00768d54
        ;   Label: LAB_0043407e
    MOV ESI,dword ptr [EBP + 0x4]       ; 00434081 | DAT_00768d50
    NEG EDI                             ; 00434084
    CMP EDI,ESI                         ; 00434086
    JL 0x0043408c                       ; 00434088
        ;   XREF to: 0043408c (CONDITIONAL_JUMP)  ; LAB_0043408c
    OR AL,0x2                           ; 0043408a
    CMP EAX,0x3                         ; 0043408c
        ;   Label: LAB_0043408c
    JA 0x004340c2                       ; 0043408f
        ;   XREF to: 004340c2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x434018]  ; 00434091 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 00434098 | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043409f
    MOV ESI,EDX                         ; 004340a4
    ADD EDI,0x766c74                    ; 004340a6 | DAT_00766c74
    PUSH EDI                            ; 004340ac
    MOV EAX,ECX                         ; 004340ad
    SHR ECX,0x2                         ; 004340af
    MOVSD.REP ES:EDI,ESI                ; 004340b2 | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 004340b4
    AND CL,0x3                          ; 004340b6
    MOVSB.REP ES:EDI,ESI                ; 004340b9 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 004340bb
    INC dword ptr [0x00766c70]          ; 004340bc | DAT_00766c70
    MOV ESI,dword ptr [ESP]             ; 004340c2
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x00767b48]      ; 004340c5 | DAT_00767b48
    INC ESI                             ; 004340cb
    ADD EBX,0x30                        ; 004340cc
    MOV dword ptr [ESP],ESI             ; 004340cf
    CMP ESI,EDI                         ; 004340d2
    JL 0x0043404f                       ; 004340d4
        ;   XREF to: 0043404f (CONDITIONAL_JUMP)  ; LAB_0043404f
    ADD ESP,0x4                         ; 004340da
        ;   Label: LAB_004340da
    POP EBP                             ; 004340dd
    POP EDI                             ; 004340de
    POP ESI                             ; 004340df
    POP EBX                             ; 004340e0
    RET                                 ; 004340e1
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 004340e2 | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004340e9 | DAT_00766c74
    PUSH EAX                            ; 004340ee
    PUSH EDX                            ; 004340ef | DAT_00768d4c
    PUSH EBP                            ; 004340f0
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 004340f1
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00766c70]      ; 004340f6 | DAT_00766c70
    INC ESI                             ; 004340fc
    ADD ESP,0xc                         ; 004340fd
    MOV dword ptr [0x00766c70],ESI      ; 00434100 | DAT_00766c70
    JMP 0x004340c2                      ; 00434106
        ;   XREF to: 004340c2 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 00434108 | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043410f
    MOV ESI,EDX                         ; 00434114
    ADD EDI,0x766c74                    ; 00434116 | DAT_00766c74
    PUSH EDI                            ; 0043411c
    MOV EAX,ECX                         ; 0043411d
    SHR ECX,0x2                         ; 0043411f
    MOVSD.REP ES:EDI,ESI                ; 00434122 | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 00434124
    AND CL,0x3                          ; 00434126
    MOVSB.REP ES:EDI,ESI                ; 00434129 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 0043412b
    MOV ECX,dword ptr [0x00766c70]      ; 0043412c | DAT_00766c70
    INC ECX                             ; 00434132
    MOV dword ptr [0x00766c70],ECX      ; 00434133 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 00434139
    ADD EAX,0x766c74                    ; 0043413c | DAT_00766c74
    PUSH EAX                            ; 00434141
    PUSH EBP                            ; 00434142
    PUSH EDX                            ; 00434143 | DAT_00768d4c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 00434144
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00766c70]      ; 00434149 | DAT_00766c70
    INC EDI                             ; 0043414f
    ADD ESP,0xc                         ; 00434150
    MOV dword ptr [0x00766c70],EDI      ; 00434153 | DAT_00766c70
    JMP 0x004340c2                      ; 00434159
        ;   XREF to: 004340c2 (UNCONDITIONAL_JUMP)  ; caseD_3

