; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055de20(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined1* switchdataD_0055de10 = 0055de88
;   undefined1* PTR_caseD_1_0055de14 = 0055deed
;   undefined1* PTR_caseD_3_0055de1c = 0055decd
;   undefined4 DAT_00766c70
;   undefined4 DAT_02de313c
;   undefined4 DAT_02de4344
;   undefined4 DAT_02de4348
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055de20
        ;   Label: core_xform.cpp_FUN_0055de20
    PUSH ESI                            ; 0055de21
    PUSH EDI                            ; 0055de22
    PUSH EBP                            ; 0055de23
    SUB ESP,0x4                         ; 0055de24
    XOR EDX,EDX                         ; 0055de27
    MOV ECX,dword ptr [0x02de313c]      ; 0055de29 | DAT_02de313c
    MOV dword ptr [ESP],EDX             ; 0055de2f
    TEST ECX,ECX                        ; 0055de32
    JLE 0x0055dee5                      ; 0055de34
        ;   XREF to: 0055dee5 (CONDITIONAL_JUMP)  ; LAB_0055dee5
    MOV EBX,0x2de4340                   ; 0055de3a
    MOV EAX,dword ptr [ESP]             ; 0055de3f
        ;   Label: LAB_0055de3f
    MOV EBP,dword ptr [0x02de313c]      ; 0055de42 | DAT_02de313c
    INC EAX                             ; 0055de48
    CMP EAX,EBP                         ; 0055de49
    JNZ 0x0055de4f                      ; 0055de4b
        ;   XREF to: 0055de4f (CONDITIONAL_JUMP)  ; LAB_0055de4f
    XOR EAX,EBP                         ; 0055de4d
    IMUL EAX,EAX,0x30                   ; 0055de4f
        ;   Label: LAB_0055de4f
    MOV EBP,0x2de4340                   ; 0055de52
    MOV EDX,EBX                         ; 0055de57
    MOV EDI,dword ptr [EBX + 0x8]       ; 0055de59
    MOV ECX,dword ptr [EBX + 0x4]       ; 0055de5c
    NEG EDI                             ; 0055de5f
    ADD EBP,EAX                         ; 0055de61
    XOR EAX,EAX                         ; 0055de63
    CMP EDI,ECX                         ; 0055de65
    JL 0x0055de6e                       ; 0055de67
        ;   XREF to: 0055de6e (CONDITIONAL_JUMP)  ; LAB_0055de6e
    MOV EAX,0x1                         ; 0055de69
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055de6e | DAT_02de4348
        ;   Label: LAB_0055de6e
    MOV ESI,dword ptr [EBP + 0x4]       ; 0055de71 | DAT_02de4344
    NEG EDI                             ; 0055de74
    CMP EDI,ESI                         ; 0055de76
    JL 0x0055de7c                       ; 0055de78
        ;   XREF to: 0055de7c (CONDITIONAL_JUMP)  ; LAB_0055de7c
    OR AL,0x2                           ; 0055de7a
    CMP EAX,0x3                         ; 0055de7c
        ;   Label: LAB_0055de7c
    JA 0x0055decd                       ; 0055de7f
        ;   XREF to: 0055decd (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x55de10]  ; 0055de81 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 0055de88 | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0055de8f
    MOV ESI,EDX                         ; 0055de94
    ADD EDI,0x766c74                    ; 0055de96
    TEST EDI,0x7                        ; 0055de9c
    JZ 0x0055deaa                       ; 0055dea2
        ;   XREF to: 0055deaa (CONDITIONAL_JUMP)  ; LAB_0055deaa
    MOVSD ES:EDI,ESI                    ; 0055dea4
    SUB ECX,0x4                         ; 0055dea5
    JLE 0x0055dec7                      ; 0055dea8
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    SUB ECX,0x8                         ; 0055deaa
        ;   Label: LAB_0055deaa
    JL 0x0055debb                       ; 0055dead
        ;   XREF to: 0055debb (CONDITIONAL_JUMP)  ; LAB_0055debb
    FILD qword ptr [ESI]                ; 0055deaf
    ADD ESI,0x8                         ; 0055deb1
    FISTP qword ptr [EDI]               ; 0055deb4
    ADD EDI,0x8                         ; 0055deb6
    JMP 0x0055deaa                      ; 0055deb9
        ;   XREF to: 0055deaa (UNCONDITIONAL_JUMP)  ; LAB_0055deaa
    ADD ECX,0x8                         ; 0055debb
        ;   Label: LAB_0055debb
    JLE 0x0055dec7                      ; 0055debe
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    MOVSD ES:EDI,ESI                    ; 0055dec0
    SUB ECX,0x4                         ; 0055dec1
    JLE 0x0055dec7                      ; 0055dec4
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    MOVSD ES:EDI,ESI                    ; 0055dec6
    INC dword ptr [0x00766c70]          ; 0055dec7 | DAT_00766c70
        ;   Label: LAB_0055dec7
    MOV ESI,dword ptr [ESP]             ; 0055decd
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de313c]      ; 0055ded0 | DAT_02de313c
    INC ESI                             ; 0055ded6
    ADD EBX,0x30                        ; 0055ded7
    MOV dword ptr [ESP],ESI             ; 0055deda
    CMP ESI,EDI                         ; 0055dedd
    JL 0x0055de3f                       ; 0055dedf
        ;   XREF to: 0055de3f (CONDITIONAL_JUMP)  ; LAB_0055de3f
    ADD ESP,0x4                         ; 0055dee5
        ;   Label: LAB_0055dee5
    POP EBP                             ; 0055dee8
    POP EDI                             ; 0055dee9
    POP ESI                             ; 0055deea
    POP EBX                             ; 0055deeb
    RET                                 ; 0055deec
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0055deed | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 0055def4
    PUSH EAX                            ; 0055def9
    PUSH EDX                            ; 0055defa
    PUSH EBP                            ; 0055defb
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055defc
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV ESI,dword ptr [0x00766c70]      ; 0055df01 | DAT_00766c70
    INC ESI                             ; 0055df07
    ADD ESP,0xc                         ; 0055df08
    MOV dword ptr [0x00766c70],ESI      ; 0055df0b | DAT_00766c70
    JMP 0x0055decd                      ; 0055df11
        ;   XREF to: 0055decd (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 0055df13 | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0055df1a
    MOV ESI,EDX                         ; 0055df1f
    ADD EDI,0x766c74                    ; 0055df21
    TEST EDI,0x7                        ; 0055df27
    JZ 0x0055df35                       ; 0055df2d
        ;   XREF to: 0055df35 (CONDITIONAL_JUMP)  ; LAB_0055df35
    MOVSD ES:EDI,ESI                    ; 0055df2f
    SUB ECX,0x4                         ; 0055df30
    JLE 0x0055df52                      ; 0055df33
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    SUB ECX,0x8                         ; 0055df35
        ;   Label: LAB_0055df35
    JL 0x0055df46                       ; 0055df38
        ;   XREF to: 0055df46 (CONDITIONAL_JUMP)  ; LAB_0055df46
    FILD qword ptr [ESI]                ; 0055df3a
    ADD ESI,0x8                         ; 0055df3c
    FISTP qword ptr [EDI]               ; 0055df3f
    ADD EDI,0x8                         ; 0055df41
    JMP 0x0055df35                      ; 0055df44
        ;   XREF to: 0055df35 (UNCONDITIONAL_JUMP)  ; LAB_0055df35
    ADD ECX,0x8                         ; 0055df46
        ;   Label: LAB_0055df46
    JLE 0x0055df52                      ; 0055df49
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    MOVSD ES:EDI,ESI                    ; 0055df4b
    SUB ECX,0x4                         ; 0055df4c
    JLE 0x0055df52                      ; 0055df4f
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    MOVSD ES:EDI,ESI                    ; 0055df51
    MOV ECX,dword ptr [0x00766c70]      ; 0055df52 | DAT_00766c70
        ;   Label: LAB_0055df52
    INC ECX                             ; 0055df58
    MOV dword ptr [0x00766c70],ECX      ; 0055df59 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 0055df5f
    ADD EAX,0x766c74                    ; 0055df62
    PUSH EAX                            ; 0055df67
    PUSH EBP                            ; 0055df68
    PUSH EDX                            ; 0055df69
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055df6a
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
    MOV EDI,dword ptr [0x00766c70]      ; 0055df6f | DAT_00766c70
    INC EDI                             ; 0055df75
    ADD ESP,0xc                         ; 0055df76
    MOV dword ptr [0x00766c70],EDI      ; 0055df79 | DAT_00766c70
    JMP 0x0055decd                      ; 0055df7f
        ;   XREF to: 0055decd (UNCONDITIONAL_JUMP)  ; caseD_3

