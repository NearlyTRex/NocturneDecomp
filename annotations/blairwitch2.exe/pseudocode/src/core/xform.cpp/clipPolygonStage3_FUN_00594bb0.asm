; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipPolygonStage3_FUN_00594bb0(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00594b94 = 00594c12
;   undefined1* PTR_caseD_3_00594ba0 = 00594c57
;   undefined4 DAT_02665a64
;   undefined4 DAT_02665a68
;   undefined4 DAT_02666670
;   undefined4 DAT_02666674
;   undefined4 DAT_02666c6c
;   undefined4 DAT_02666c70
;   undefined4 DAT_02666c78
;   undefined4 DAT_02666c7c
;
; Called Functions:
;   core_xform.cpp_clipInterpolateTopPlane_FUN_00594730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594bb0
        ;   Label: core_xform.cpp_clipPolygonStage3_FUN_00594bb0
    PUSH ESI                            ; 00594bb1
    PUSH EDI                            ; 00594bb2
    PUSH EBP                            ; 00594bb3
    SUB ESP,0x4                         ; 00594bb4
    XOR EDX,EDX                         ; 00594bb7
    MOV ECX,dword ptr [0x02665a64]      ; 00594bb9 | DAT_02665a64
    MOV dword ptr [ESP],EDX             ; 00594bbf
    TEST ECX,ECX                        ; 00594bc2
    JLE 0x00594c6f                      ; 00594bc4
        ;   XREF to: 00594c6f (CONDITIONAL_JUMP)  ; LAB_00594c6f
    MOV EBX,0x266666c                   ; 00594bca
    MOV EAX,dword ptr [ESP]             ; 00594bcf
        ;   Label: LAB_00594bcf
    MOV EBP,dword ptr [0x02665a64]      ; 00594bd2 | DAT_02665a64
    INC EAX                             ; 00594bd8
    CMP EAX,EBP                         ; 00594bd9
    JNZ 0x00594bdf                      ; 00594bdb
        ;   XREF to: 00594bdf (CONDITIONAL_JUMP)  ; LAB_00594bdf
    XOR EAX,EBP                         ; 00594bdd
    IMUL EAX,EAX,0x30                   ; 00594bdf
        ;   Label: LAB_00594bdf
    MOV EBP,0x266666c                   ; 00594be2
    MOV EDX,EBX                         ; 00594be7
    MOV EDI,dword ptr [EBX + 0x4]       ; 00594be9
    MOV ECX,dword ptr [EBX + 0x8]       ; 00594bec
    ADD EBP,EAX                         ; 00594bef
    XOR EAX,EAX                         ; 00594bf1
    CMP EDI,ECX                         ; 00594bf3
    JL 0x00594bfc                       ; 00594bf5
        ;   XREF to: 00594bfc (CONDITIONAL_JUMP)  ; LAB_00594bfc
    MOV EAX,0x1                         ; 00594bf7
    MOV ESI,dword ptr [EBP + 0x8]       ; 00594bfc | DAT_02666674
        ;   Label: LAB_00594bfc
    CMP ESI,dword ptr [EBP + 0x4]       ; 00594bff | DAT_02666670
    JG 0x00594c06                       ; 00594c02
        ;   XREF to: 00594c06 (CONDITIONAL_JUMP)  ; LAB_00594c06
    OR AL,0x2                           ; 00594c04
    CMP EAX,0x3                         ; 00594c06
        ;   Label: LAB_00594c06
    JA 0x00594c57                       ; 00594c09
        ;   XREF to: 00594c57 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x594b94]  ; 00594c0b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02665a68],0x30 ; 00594c12 | DAT_02665a68
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00594c19
    MOV ESI,EDX                         ; 00594c1e
    ADD EDI,0x2666c6c                   ; 00594c20
    TEST EDI,0x7                        ; 00594c26
    JZ 0x00594c34                       ; 00594c2c
        ;   XREF to: 00594c34 (CONDITIONAL_JUMP)  ; LAB_00594c34
    MOVSD ES:EDI,ESI                    ; 00594c2e | DAT_02666c6c
    SUB ECX,0x4                         ; 00594c2f
    JLE 0x00594c51                      ; 00594c32
        ;   XREF to: 00594c51 (CONDITIONAL_JUMP)  ; LAB_00594c51
    SUB ECX,0x8                         ; 00594c34
        ;   Label: LAB_00594c34
    JL 0x00594c45                       ; 00594c37
        ;   XREF to: 00594c45 (CONDITIONAL_JUMP)  ; LAB_00594c45
    FILD qword ptr [ESI]                ; 00594c39
    ADD ESI,0x8                         ; 00594c3b
    FISTP qword ptr [EDI]               ; 00594c3e | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD EDI,0x8                         ; 00594c40
    JMP 0x00594c34                      ; 00594c43
        ;   XREF to: 00594c34 (UNCONDITIONAL_JUMP)  ; LAB_00594c34
    ADD ECX,0x8                         ; 00594c45
        ;   Label: LAB_00594c45
    JLE 0x00594c51                      ; 00594c48
        ;   XREF to: 00594c51 (CONDITIONAL_JUMP)  ; LAB_00594c51
    MOVSD ES:EDI,ESI                    ; 00594c4a | DAT_02666c78
    SUB ECX,0x4                         ; 00594c4b
    JLE 0x00594c51                      ; 00594c4e
        ;   XREF to: 00594c51 (CONDITIONAL_JUMP)  ; LAB_00594c51
    MOVSD ES:EDI,ESI                    ; 00594c50 | DAT_02666c7c
    INC dword ptr [0x02665a68]          ; 00594c51 | DAT_02665a68
        ;   Label: LAB_00594c51
    MOV ESI,dword ptr [ESP]             ; 00594c57
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02665a64]      ; 00594c5a | DAT_02665a64
    INC ESI                             ; 00594c60
    ADD EBX,0x30                        ; 00594c61
    MOV dword ptr [ESP],ESI             ; 00594c64
    CMP ESI,EDI                         ; 00594c67
    JL 0x00594bcf                       ; 00594c69
        ;   XREF to: 00594bcf (CONDITIONAL_JUMP)  ; LAB_00594bcf
    ADD ESP,0x4                         ; 00594c6f
        ;   Label: LAB_00594c6f
    POP EBP                             ; 00594c72
    POP EDI                             ; 00594c73
    POP ESI                             ; 00594c74
    POP EBX                             ; 00594c75
    RET                                 ; 00594c76
    IMUL EAX,dword ptr [0x02665a68],0x30 ; 00594c77 | DAT_02665a68
        ;   Label: caseD_1
    ADD EAX,0x2666c6c                   ; 00594c7e
    PUSH EAX                            ; 00594c83
    PUSH EDX                            ; 00594c84
    PUSH EBP                            ; 00594c85
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_00594730 ; 00594c86
        ;   XREF to: 00594730 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_00594730()
    MOV ESI,dword ptr [0x02665a68]      ; 00594c8b | DAT_02665a68
    INC ESI                             ; 00594c91
    ADD ESP,0xc                         ; 00594c92
    MOV dword ptr [0x02665a68],ESI      ; 00594c95 | DAT_02665a68
    JMP 0x00594c57                      ; 00594c9b
        ;   XREF to: 00594c57 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02665a68],0x30 ; 00594c9d | DAT_02665a68
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00594ca4
    MOV ESI,EDX                         ; 00594ca9
    ADD EDI,0x2666c6c                   ; 00594cab
    TEST EDI,0x7                        ; 00594cb1
    JZ 0x00594cbf                       ; 00594cb7
        ;   XREF to: 00594cbf (CONDITIONAL_JUMP)  ; LAB_00594cbf
    MOVSD ES:EDI,ESI                    ; 00594cb9 | DAT_02666c6c
    SUB ECX,0x4                         ; 00594cba
    JLE 0x00594cdc                      ; 00594cbd
        ;   XREF to: 00594cdc (CONDITIONAL_JUMP)  ; LAB_00594cdc
    SUB ECX,0x8                         ; 00594cbf
        ;   Label: LAB_00594cbf
    JL 0x00594cd0                       ; 00594cc2
        ;   XREF to: 00594cd0 (CONDITIONAL_JUMP)  ; LAB_00594cd0
    FILD qword ptr [ESI]                ; 00594cc4
    ADD ESI,0x8                         ; 00594cc6
    FISTP qword ptr [EDI]               ; 00594cc9 | DAT_02666c70 | DAT_02666c78 | DAT_02666c6c
    ADD EDI,0x8                         ; 00594ccb
    JMP 0x00594cbf                      ; 00594cce
        ;   XREF to: 00594cbf (UNCONDITIONAL_JUMP)  ; LAB_00594cbf
    ADD ECX,0x8                         ; 00594cd0
        ;   Label: LAB_00594cd0
    JLE 0x00594cdc                      ; 00594cd3
        ;   XREF to: 00594cdc (CONDITIONAL_JUMP)  ; LAB_00594cdc
    MOVSD ES:EDI,ESI                    ; 00594cd5 | DAT_02666c78
    SUB ECX,0x4                         ; 00594cd6
    JLE 0x00594cdc                      ; 00594cd9
        ;   XREF to: 00594cdc (CONDITIONAL_JUMP)  ; LAB_00594cdc
    MOVSD ES:EDI,ESI                    ; 00594cdb | DAT_02666c7c
    MOV ECX,dword ptr [0x02665a68]      ; 00594cdc | DAT_02665a68
        ;   Label: LAB_00594cdc
    INC ECX                             ; 00594ce2
    MOV dword ptr [0x02665a68],ECX      ; 00594ce3 | DAT_02665a68
    IMUL EAX,ECX,0x30                   ; 00594ce9
    ADD EAX,0x2666c6c                   ; 00594cec
    PUSH EAX                            ; 00594cf1
    PUSH EBP                            ; 00594cf2
    PUSH EDX                            ; 00594cf3
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_00594730 ; 00594cf4
        ;   XREF to: 00594730 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_00594730()
    MOV EDI,dword ptr [0x02665a68]      ; 00594cf9 | DAT_02665a68
    INC EDI                             ; 00594cff
    ADD ESP,0xc                         ; 00594d00
    MOV dword ptr [0x02665a68],EDI      ; 00594d03 | DAT_02665a68
    JMP 0x00594c57                      ; 00594d09
        ;   XREF to: 00594c57 (UNCONDITIONAL_JUMP)  ; caseD_3

