; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_transformAndClipGeometry_FUN_00587cd0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 at 0046b203
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330 at 0046d38e
;   engine_drender.cpp_FUN_0046de6e at 0046df33
;
; Referenced Globals:
;   void* switchdataD_00587c8c = 00587e5c
;   void* PTR_caseD_3_00587c98 = 00587ea1
;   void* PTR_caseD_1_00587ca0 = 005881f6
;   void* PTR_caseD_3_00587ca8 = 00587f6b
;   void* switchdataD_00587cac = 00587feb
;   void* PTR_caseD_3_00587cb8 = 00588030
;   void* PTR_caseD_1_00587cc0 = 0058832a
;   void* PTR_caseD_3_00587cc8 = 005880fb
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b018
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b020
;   undefined4 DAT_0060b024
;   undefined4 DAT_007e3e88
;   undefined4 DAT_007e3e8c
;   ... and 37 more
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580
;   core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400
;   core_xform.cpp_clipInterpolateRightPlane_FUN_00587340
;   core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587cd0
        ;   Label: core_xform.cpp_transformAndClipGeometry_FUN_00587cd0
    PUSH ESI                            ; 00587cd1
    PUSH EDI                            ; 00587cd2
    PUSH EBP                            ; 00587cd3
    SUB ESP,0x18                        ; 00587cd4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00587cd7
    MOV EDI,dword ptr [ESP + 0x30]      ; 00587cdb
    XOR EAX,EAX                         ; 00587cdf
    XOR EBX,EBX                         ; 00587ce1
    TEST EBP,EBP                        ; 00587ce3
    JLE 0x00587d03                      ; 00587ce5
        ;   XREF to: 00587d03 (CONDITIONAL_JUMP)  ; LAB_00587d03
    MOV EDX,EDI                         ; 00587ce7
    IMUL ESI,dword ptr [EDX],0x30       ; 00587ce9
        ;   Label: LAB_00587ce9
    MOV ESI,dword ptr [ESI + 0x60b024]  ; 00587cec | DAT_0060b024
    TEST ESI,0x80000000                 ; 00587cf2
    JZ 0x00587cfb                       ; 00587cf8
        ;   XREF to: 00587cfb (CONDITIONAL_JUMP)  ; LAB_00587cfb
    INC EBX                             ; 00587cfa
    INC EAX                             ; 00587cfb
        ;   Label: LAB_00587cfb
    ADD EDX,0x4                         ; 00587cfc
    CMP EAX,EBP                         ; 00587cff
    JL 0x00587ce9                       ; 00587d01
        ;   XREF to: 00587ce9 (CONDITIONAL_JUMP)  ; LAB_00587ce9
    TEST EBX,EBX                        ; 00587d03
        ;   Label: LAB_00587d03
    JNZ 0x00587d78                      ; 00587d05
        ;   XREF to: 00587d78 (CONDITIONAL_JUMP)  ; LAB_00587d78
    MOV dword ptr [ESP + 0x4],EBX       ; 00587d0b
    MOV dword ptr [0x007e3e88],EBP      ; 00587d0f | DAT_007e3e88
    TEST EBP,EBP                        ; 00587d15
    JLE 0x00587d70                      ; 00587d17
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    MOV EDX,0x7e3e8c                    ; 00587d19 | DAT_007e3e8c
    MOV EBX,EDI                         ; 00587d1e
    IMUL ESI,dword ptr [EBX],0x30       ; 00587d20
        ;   Label: LAB_00587d20
    MOV ECX,0x30                        ; 00587d23
    ADD ESI,0x60b014                    ; 00587d28 | DAT_0060b014
    MOV EDI,EDX                         ; 00587d2e
    TEST EDI,0x7                        ; 00587d30
    JZ 0x00587d3e                       ; 00587d36
        ;   XREF to: 00587d3e (CONDITIONAL_JUMP)  ; LAB_00587d3e
    MOVSD ES:EDI,ESI                    ; 00587d38 | DAT_0060b014 | DAT_007e3e8c | DAT_007e3ebc
    SUB ECX,0x4                         ; 00587d39
    JLE 0x00587d5b                      ; 00587d3c
        ;   XREF to: 00587d5b (CONDITIONAL_JUMP)  ; LAB_00587d5b
    SUB ECX,0x8                         ; 00587d3e
        ;   Label: LAB_00587d3e
    JL 0x00587d4f                       ; 00587d41
        ;   XREF to: 00587d4f (CONDITIONAL_JUMP)  ; LAB_00587d4f
    FILD qword ptr [ESI]                ; 00587d43 | DAT_0060b018 | DAT_0060b020 | DAT_0060b014
    ADD ESI,0x8                         ; 00587d45
    FISTP qword ptr [EDI]               ; 00587d48 | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3ec0
    ADD EDI,0x8                         ; 00587d4a
    JMP 0x00587d3e                      ; 00587d4d
        ;   XREF to: 00587d3e (UNCONDITIONAL_JUMP)  ; LAB_00587d3e
    ADD ECX,0x8                         ; 00587d4f
        ;   Label: LAB_00587d4f
    JLE 0x00587d5b                      ; 00587d52
        ;   XREF to: 00587d5b (CONDITIONAL_JUMP)  ; LAB_00587d5b
    MOVSD ES:EDI,ESI                    ; 00587d54 | DAT_0060b020 | DAT_007e3e98
    SUB ECX,0x4                         ; 00587d55
    JLE 0x00587d5b                      ; 00587d58
        ;   XREF to: 00587d5b (CONDITIONAL_JUMP)  ; LAB_00587d5b
    MOVSD ES:EDI,ESI                    ; 00587d5a | DAT_0060b024 | DAT_007e3e9c
    MOV EAX,dword ptr [ESP + 0x4]       ; 00587d5b
        ;   Label: LAB_00587d5b
    ADD EBX,0x4                         ; 00587d5f
    INC EAX                             ; 00587d62
    ADD EDX,0x30                        ; 00587d63
    MOV dword ptr [ESP + 0x4],EAX       ; 00587d66
    CMP EBP,EAX                         ; 00587d6a
    JG 0x00587d20                       ; 00587d6c
        ;   XREF to: 00587d20 (CONDITIONAL_JUMP)  ; LAB_00587d20
    MOV EAX,EAX                         ; 00587d6e
    ADD ESP,0x18                        ; 00587d70
        ;   Label: LAB_00587d70
    POP EBP                             ; 00587d73
    POP EDI                             ; 00587d74
    POP ESI                             ; 00587d75
    POP EBX                             ; 00587d76
    RET                                 ; 00587d77
    MOV dword ptr [0x02d22ff8],EBP      ; 00587d78 | DAT_02d22ff8
        ;   Label: LAB_00587d78
    XOR EDX,EDX                         ; 00587d7e
    XOR EBX,EBX                         ; 00587d80
    MOV dword ptr [0x02d22ffc],EDX      ; 00587d82 | DAT_02d22ffc
    MOV dword ptr [0x02d23000],EDX      ; 00587d88 | DAT_02d23000
    MOV dword ptr [0x02d23004],EDX      ; 00587d8e | DAT_02d23004
    MOV dword ptr [0x007e3e88],EDX      ; 00587d94 | DAT_007e3e88
    TEST EBP,EBP                        ; 00587d9a
    JLE 0x00587e00                      ; 00587d9c
        ;   XREF to: 00587e00 (CONDITIONAL_JUMP)  ; LAB_00587e00
    MOV EDX,0x2d23608                   ; 00587d9e
    MOV dword ptr [ESP],EDI             ; 00587da3
    MOV EAX,dword ptr [ESP]             ; 00587da6
        ;   Label: LAB_00587da6
    IMUL ESI,dword ptr [EAX],0x30       ; 00587da9
    MOV ECX,0x30                        ; 00587dac
    ADD ESI,0x60b014                    ; 00587db1 | DAT_0060b014
    MOV EDI,EDX                         ; 00587db7
    TEST EDI,0x7                        ; 00587db9
    JZ 0x00587dc7                       ; 00587dbf
        ;   XREF to: 00587dc7 (CONDITIONAL_JUMP)  ; LAB_00587dc7
    MOVSD ES:EDI,ESI                    ; 00587dc1 | DAT_0060b014 | DAT_02d23638
    SUB ECX,0x4                         ; 00587dc2
    JLE 0x00587de4                      ; 00587dc5
        ;   XREF to: 00587de4 (CONDITIONAL_JUMP)  ; LAB_00587de4
    SUB ECX,0x8                         ; 00587dc7
        ;   Label: LAB_00587dc7
    JL 0x00587dd8                       ; 00587dca
        ;   XREF to: 00587dd8 (CONDITIONAL_JUMP)  ; LAB_00587dd8
    FILD qword ptr [ESI]                ; 00587dcc | DAT_0060b014 | DAT_0060b01c | DAT_0060b018
    ADD ESI,0x8                         ; 00587dce
    FISTP qword ptr [EDI]               ; 00587dd1 | DAT_02d23608 | DAT_02d23610 | DAT_02d2363c
    ADD EDI,0x8                         ; 00587dd3
    JMP 0x00587dc7                      ; 00587dd6
        ;   XREF to: 00587dc7 (UNCONDITIONAL_JUMP)  ; LAB_00587dc7
    ADD ECX,0x8                         ; 00587dd8
        ;   Label: LAB_00587dd8
    JLE 0x00587de4                      ; 00587ddb
        ;   XREF to: 00587de4 (CONDITIONAL_JUMP)  ; LAB_00587de4
    MOVSD ES:EDI,ESI                    ; 00587ddd | DAT_0060b01c | DAT_02d23610
    SUB ECX,0x4                         ; 00587dde
    JLE 0x00587de4                      ; 00587de1
        ;   XREF to: 00587de4 (CONDITIONAL_JUMP)  ; LAB_00587de4
    MOVSD ES:EDI,ESI                    ; 00587de3 | DAT_0060b020 | DAT_02d23614
    MOV EAX,dword ptr [ESP]             ; 00587de4
        ;   Label: LAB_00587de4
    INC EBX                             ; 00587de7
    ADD EAX,0x4                         ; 00587de8
    ADD EDX,0x30                        ; 00587deb
    MOV dword ptr [ESP],EAX             ; 00587dee
    CMP EBX,EBP                         ; 00587df1
    JL 0x00587da6                       ; 00587df3
        ;   XREF to: 00587da6 (CONDITIONAL_JUMP)  ; LAB_00587da6
    LEA EAX,[EAX]                       ; 00587df5
    LEA EDX,[EDX]                       ; 00587dfb
    MOV EBX,EBX                         ; 00587dfe
    XOR EDX,EDX                         ; 00587e00
        ;   Label: LAB_00587e00
    MOV ECX,dword ptr [0x02d22ff8]      ; 00587e02 | DAT_02d22ff8
    MOV dword ptr [ESP + 0x8],EDX       ; 00587e08
    TEST ECX,ECX                        ; 00587e0c
    JLE 0x00587ebb                      ; 00587e0e
        ;   XREF to: 00587ebb (CONDITIONAL_JUMP)  ; LAB_00587ebb
    MOV EBX,0x2d23608                   ; 00587e14
    MOV EAX,dword ptr [ESP + 0x8]       ; 00587e19
        ;   Label: LAB_00587e19
    MOV ECX,dword ptr [0x02d22ff8]      ; 00587e1d | DAT_02d22ff8
    INC EAX                             ; 00587e23
    CMP EAX,ECX                         ; 00587e24
    JNZ 0x00587e2a                      ; 00587e26
        ;   XREF to: 00587e2a (CONDITIONAL_JUMP)  ; LAB_00587e2a
    XOR EAX,ECX                         ; 00587e28
    IMUL EAX,EAX,0x30                   ; 00587e2a
        ;   Label: LAB_00587e2a
    MOV EBP,0x2d23608                   ; 00587e2d
    MOV EDX,EBX                         ; 00587e32
    MOV ESI,dword ptr [EBX]             ; 00587e34 | DAT_02d23608 | DAT_02d23638
    MOV EDI,dword ptr [EBX + 0x8]       ; 00587e36 | DAT_02d23610 | DAT_02d23640
    ADD EBP,EAX                         ; 00587e39
    XOR EAX,EAX                         ; 00587e3b
    CMP ESI,EDI                         ; 00587e3d
    JL 0x00587e46                       ; 00587e3f
        ;   XREF to: 00587e46 (CONDITIONAL_JUMP)  ; LAB_00587e46
    MOV EAX,0x1                         ; 00587e41
    MOV ECX,dword ptr [EBP + 0x8]       ; 00587e46 | DAT_02d23610
        ;   Label: LAB_00587e46
    CMP ECX,dword ptr [EBP]             ; 00587e49 | DAT_02d23608
    JG 0x00587e50                       ; 00587e4c
        ;   XREF to: 00587e50 (CONDITIONAL_JUMP)  ; LAB_00587e50
    OR AL,0x2                           ; 00587e4e
    CMP EAX,0x3                         ; 00587e50
        ;   Label: LAB_00587e50
    JA 0x00587ea1                       ; 00587e53
        ;   XREF to: 00587ea1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587c8c]  ; 00587e55 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02d22ffc],0x30 ; 00587e5c | DAT_02d22ffc
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00587e63
    MOV ESI,EDX                         ; 00587e68
    ADD EDI,0x2d23008                   ; 00587e6a
    TEST EDI,0x7                        ; 00587e70
    JZ 0x00587e7e                       ; 00587e76
        ;   XREF to: 00587e7e (CONDITIONAL_JUMP)  ; LAB_00587e7e
    MOVSD ES:EDI,ESI                    ; 00587e78 | DAT_02d23638 | DAT_02d23008
    SUB ECX,0x4                         ; 00587e79
    JLE 0x00587e9b                      ; 00587e7c
        ;   XREF to: 00587e9b (CONDITIONAL_JUMP)  ; LAB_00587e9b
    SUB ECX,0x8                         ; 00587e7e
        ;   Label: LAB_00587e7e
    JL 0x00587e8f                       ; 00587e81
        ;   XREF to: 00587e8f (CONDITIONAL_JUMP)  ; LAB_00587e8f
    FILD qword ptr [ESI]                ; 00587e83 | DAT_02d23638 | DAT_02d23640 | DAT_02d2363c
    ADD ESI,0x8                         ; 00587e85
    FISTP qword ptr [EDI]               ; 00587e88 | DAT_02d23008 | DAT_02d23010 | DAT_02d2300c
    ADD EDI,0x8                         ; 00587e8a
    JMP 0x00587e7e                      ; 00587e8d
        ;   XREF to: 00587e7e (UNCONDITIONAL_JUMP)  ; LAB_00587e7e
    ADD ECX,0x8                         ; 00587e8f
        ;   Label: LAB_00587e8f
    JLE 0x00587e9b                      ; 00587e92
        ;   XREF to: 00587e9b (CONDITIONAL_JUMP)  ; LAB_00587e9b
    MOVSD ES:EDI,ESI                    ; 00587e94 | DAT_02d23640 | DAT_02d23010
    SUB ECX,0x4                         ; 00587e95
    JLE 0x00587e9b                      ; 00587e98
        ;   XREF to: 00587e9b (CONDITIONAL_JUMP)  ; LAB_00587e9b
    MOVSD ES:EDI,ESI                    ; 00587e9a | DAT_02d23644 | DAT_02d23014
    INC dword ptr [0x02d22ffc]          ; 00587e9b | DAT_02d22ffc
        ;   Label: LAB_00587e9b
    MOV ESI,dword ptr [ESP + 0x8]       ; 00587ea1
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02d22ff8]      ; 00587ea5 | DAT_02d22ff8
    INC ESI                             ; 00587eab
    ADD EBX,0x30                        ; 00587eac
    MOV dword ptr [ESP + 0x8],ESI       ; 00587eaf
    CMP ESI,EDI                         ; 00587eb3
    JL 0x00587e19                       ; 00587eb5
        ;   XREF to: 00587e19 (CONDITIONAL_JUMP)  ; LAB_00587e19
    MOV EBP,dword ptr [0x02d22ffc]      ; 00587ebb | DAT_02d22ffc
        ;   Label: LAB_00587ebb
    CMP EBP,0x3                         ; 00587ec1
    JL 0x00587d70                       ; 00587ec4
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    XOR EAX,EAX                         ; 00587eca
    MOV dword ptr [ESP + 0x10],EAX      ; 00587ecc
    TEST EBP,EBP                        ; 00587ed0
    JLE 0x00587f85                      ; 00587ed2
        ;   XREF to: 00587f85 (CONDITIONAL_JUMP)  ; LAB_00587f85
    MOV EBX,0x2d23008                   ; 00587ed8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00587edd
        ;   Label: LAB_00587edd
    MOV EDX,dword ptr [0x02d22ffc]      ; 00587ee1 | DAT_02d22ffc
    INC EAX                             ; 00587ee7
    CMP EAX,EDX                         ; 00587ee8
    JNZ 0x00587eee                      ; 00587eea
        ;   XREF to: 00587eee (CONDITIONAL_JUMP)  ; LAB_00587eee
    XOR EAX,EDX                         ; 00587eec
    IMUL EAX,EAX,0x30                   ; 00587eee
        ;   Label: LAB_00587eee
    MOV EBP,0x2d23008                   ; 00587ef1
    MOV EDX,EBX                         ; 00587ef6
    MOV ESI,dword ptr [EBX + 0x8]       ; 00587ef8 | DAT_02d23010 | DAT_02d23040
    MOV ECX,dword ptr [EBX]             ; 00587efb | DAT_02d23008 | DAT_02d23038
    NEG ESI                             ; 00587efd
    ADD EBP,EAX                         ; 00587eff
    XOR EAX,EAX                         ; 00587f01
    CMP ESI,ECX                         ; 00587f03
    JL 0x00587f0c                       ; 00587f05
        ;   XREF to: 00587f0c (CONDITIONAL_JUMP)  ; LAB_00587f0c
    MOV EAX,0x1                         ; 00587f07
    MOV ESI,dword ptr [EBP + 0x8]       ; 00587f0c | DAT_02d23010
        ;   Label: LAB_00587f0c
    MOV EDI,dword ptr [EBP]             ; 00587f0f | DAT_02d23008
    NEG ESI                             ; 00587f12
    CMP ESI,EDI                         ; 00587f14
    JL 0x00587f1a                       ; 00587f16
        ;   XREF to: 00587f1a (CONDITIONAL_JUMP)  ; LAB_00587f1a
    OR AL,0x2                           ; 00587f18
    CMP EAX,0x3                         ; 00587f1a
        ;   Label: LAB_00587f1a
    JA 0x00587f6b                       ; 00587f1d
        ;   XREF to: 00587f6b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587c9c]  ; 00587f1f | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02d23000],0x30 ; 00587f26 | DAT_02d23000
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00587f2d
    MOV ESI,EDX                         ; 00587f32
    ADD EDI,0x2d23c08                   ; 00587f34
    TEST EDI,0x7                        ; 00587f3a
    JZ 0x00587f48                       ; 00587f40
        ;   XREF to: 00587f48 (CONDITIONAL_JUMP)  ; LAB_00587f48
    MOVSD ES:EDI,ESI                    ; 00587f42 | DAT_02d23008
    SUB ECX,0x4                         ; 00587f43
    JLE 0x00587f65                      ; 00587f46
        ;   XREF to: 00587f65 (CONDITIONAL_JUMP)  ; LAB_00587f65
    SUB ECX,0x8                         ; 00587f48
        ;   Label: LAB_00587f48
    JL 0x00587f59                       ; 00587f4b
        ;   XREF to: 00587f59 (CONDITIONAL_JUMP)  ; LAB_00587f59
    FILD qword ptr [ESI]                ; 00587f4d | DAT_02d23008 | DAT_02d23010 | DAT_02d2300c
    ADD ESI,0x8                         ; 00587f4f
    FISTP qword ptr [EDI]               ; 00587f52 | DAT_02d23c10 | DAT_02d23c0c
    ADD EDI,0x8                         ; 00587f54
    JMP 0x00587f48                      ; 00587f57
        ;   XREF to: 00587f48 (UNCONDITIONAL_JUMP)  ; LAB_00587f48
    ADD ECX,0x8                         ; 00587f59
        ;   Label: LAB_00587f59
    JLE 0x00587f65                      ; 00587f5c
        ;   XREF to: 00587f65 (CONDITIONAL_JUMP)  ; LAB_00587f65
    MOVSD ES:EDI,ESI                    ; 00587f5e | DAT_02d23010 | DAT_02d23c10
    SUB ECX,0x4                         ; 00587f5f
    JLE 0x00587f65                      ; 00587f62
        ;   XREF to: 00587f65 (CONDITIONAL_JUMP)  ; LAB_00587f65
    MOVSD ES:EDI,ESI                    ; 00587f64 | DAT_02d23014
    INC dword ptr [0x02d23000]          ; 00587f65 | DAT_02d23000
        ;   Label: LAB_00587f65
    MOV ECX,dword ptr [ESP + 0x10]      ; 00587f6b
        ;   Label: caseD_3
    MOV ESI,dword ptr [0x02d22ffc]      ; 00587f6f | DAT_02d22ffc
    INC ECX                             ; 00587f75
    ADD EBX,0x30                        ; 00587f76
    MOV dword ptr [ESP + 0x10],ECX      ; 00587f79
    CMP ECX,ESI                         ; 00587f7d
    JL 0x00587edd                       ; 00587f7f
        ;   XREF to: 00587edd (CONDITIONAL_JUMP)  ; LAB_00587edd
    MOV EDI,dword ptr [0x02d23000]      ; 00587f85 | DAT_02d23000
        ;   Label: LAB_00587f85
    CMP EDI,0x3                         ; 00587f8b
    JL 0x00587d70                       ; 00587f8e
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    XOR EBP,EBP                         ; 00587f94
    MOV dword ptr [ESP + 0x14],EBP      ; 00587f96
    TEST EDI,EDI                        ; 00587f9a
    JLE 0x0058804a                      ; 00587f9c
        ;   XREF to: 0058804a (CONDITIONAL_JUMP)  ; LAB_0058804a
    MOV EBX,0x2d23c08                   ; 00587fa2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00587fa7
        ;   Label: LAB_00587fa7
    MOV EBP,dword ptr [0x02d23000]      ; 00587fab | DAT_02d23000
    INC EAX                             ; 00587fb1
    CMP EAX,EBP                         ; 00587fb2
    JNZ 0x00587fb8                      ; 00587fb4
        ;   XREF to: 00587fb8 (CONDITIONAL_JUMP)  ; LAB_00587fb8
    XOR EAX,EBP                         ; 00587fb6
    IMUL EAX,EAX,0x30                   ; 00587fb8
        ;   Label: LAB_00587fb8
    MOV EBP,0x2d23c08                   ; 00587fbb
    MOV EDX,EBX                         ; 00587fc0
    MOV ESI,dword ptr [EBX + 0x4]       ; 00587fc2 | DAT_02d23c0c | DAT_02d23c3c
    MOV ECX,dword ptr [EBX + 0x8]       ; 00587fc5 | DAT_02d23c10 | DAT_02d23c40
    ADD EBP,EAX                         ; 00587fc8
    XOR EAX,EAX                         ; 00587fca
    CMP ESI,ECX                         ; 00587fcc
    JL 0x00587fd5                       ; 00587fce
        ;   XREF to: 00587fd5 (CONDITIONAL_JUMP)  ; LAB_00587fd5
    MOV EAX,0x1                         ; 00587fd0
    MOV EDI,dword ptr [EBP + 0x8]       ; 00587fd5 | DAT_02d23c10
        ;   Label: LAB_00587fd5
    CMP EDI,dword ptr [EBP + 0x4]       ; 00587fd8 | DAT_02d23c0c
    JG 0x00587fdf                       ; 00587fdb
        ;   XREF to: 00587fdf (CONDITIONAL_JUMP)  ; LAB_00587fdf
    OR AL,0x2                           ; 00587fdd
    CMP EAX,0x3                         ; 00587fdf
        ;   Label: LAB_00587fdf
    JA 0x00588030                       ; 00587fe2
        ;   XREF to: 00588030 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587cac]  ; 00587fe4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x02d23004],0x30 ; 00587feb | DAT_02d23004
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00587ff2
    MOV ESI,EDX                         ; 00587ff7
    ADD EDI,0x2d24208                   ; 00587ff9
    TEST EDI,0x7                        ; 00587fff
    JZ 0x0058800d                       ; 00588005
        ;   XREF to: 0058800d (CONDITIONAL_JUMP)  ; LAB_0058800d
    MOVSD ES:EDI,ESI                    ; 00588007 | DAT_02d23c38 | DAT_02d24208
    SUB ECX,0x4                         ; 00588008
    JLE 0x0058802a                      ; 0058800b
        ;   XREF to: 0058802a (CONDITIONAL_JUMP)  ; LAB_0058802a
    SUB ECX,0x8                         ; 0058800d
        ;   Label: LAB_0058800d
    JL 0x0058801e                       ; 00588010
        ;   XREF to: 0058801e (CONDITIONAL_JUMP)  ; LAB_0058801e
    FILD qword ptr [ESI]                ; 00588012 | DAT_02d23c38 | DAT_02d23c40 | DAT_02d23c3c
    ADD ESI,0x8                         ; 00588014
    FISTP qword ptr [EDI]               ; 00588017 | DAT_02d24208 | DAT_02d24210 | DAT_02d2420c
    ADD EDI,0x8                         ; 00588019
    JMP 0x0058800d                      ; 0058801c
        ;   XREF to: 0058800d (UNCONDITIONAL_JUMP)  ; LAB_0058800d
    ADD ECX,0x8                         ; 0058801e
        ;   Label: LAB_0058801e
    JLE 0x0058802a                      ; 00588021
        ;   XREF to: 0058802a (CONDITIONAL_JUMP)  ; LAB_0058802a
    MOVSD ES:EDI,ESI                    ; 00588023 | DAT_02d23c40 | DAT_02d24210
    SUB ECX,0x4                         ; 00588024
    JLE 0x0058802a                      ; 00588027
        ;   XREF to: 0058802a (CONDITIONAL_JUMP)  ; LAB_0058802a
    MOVSD ES:EDI,ESI                    ; 00588029 | DAT_02d23c44 | DAT_02d24214
    INC dword ptr [0x02d23004]          ; 0058802a | DAT_02d23004
        ;   Label: LAB_0058802a
    MOV EDX,dword ptr [ESP + 0x14]      ; 00588030
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02d23000]      ; 00588034 | DAT_02d23000
    INC EDX                             ; 0058803a
    ADD EBX,0x30                        ; 0058803b
    MOV dword ptr [ESP + 0x14],EDX      ; 0058803e
    CMP EDX,ECX                         ; 00588042
    JL 0x00587fa7                       ; 00588044
        ;   XREF to: 00587fa7 (CONDITIONAL_JUMP)  ; LAB_00587fa7
    MOV EBX,dword ptr [0x02d23004]      ; 0058804a | DAT_02d23004
        ;   Label: LAB_0058804a
    CMP EBX,0x3                         ; 00588050
    JL 0x00587d70                       ; 00588053
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    XOR ESI,ESI                         ; 00588059
    MOV dword ptr [ESP + 0xc],ESI       ; 0058805b
    TEST EBX,EBX                        ; 0058805f
    JLE 0x00588115                      ; 00588061
        ;   XREF to: 00588115 (CONDITIONAL_JUMP)  ; LAB_00588115
    MOV EBX,0x2d24208                   ; 00588067
    MOV EAX,dword ptr [ESP + 0xc]       ; 0058806c
        ;   Label: LAB_0058806c
    MOV EDI,dword ptr [0x02d23004]      ; 00588070 | DAT_02d23004
    INC EAX                             ; 00588076
    CMP EAX,EDI                         ; 00588077
    JNZ 0x0058807d                      ; 00588079
        ;   XREF to: 0058807d (CONDITIONAL_JUMP)  ; LAB_0058807d
    XOR EAX,EDI                         ; 0058807b
    IMUL EAX,EAX,0x30                   ; 0058807d
        ;   Label: LAB_0058807d
    MOV EBP,0x2d24208                   ; 00588080
    MOV EDX,EBX                         ; 00588085
    MOV ESI,dword ptr [EBX + 0x8]       ; 00588087 | DAT_02d24210 | DAT_02d24240
    MOV ECX,dword ptr [EBX + 0x4]       ; 0058808a | DAT_02d2420c | DAT_02d2423c
    NEG ESI                             ; 0058808d
    ADD EBP,EAX                         ; 0058808f
    XOR EAX,EAX                         ; 00588091
    CMP ESI,ECX                         ; 00588093
    JL 0x0058809c                       ; 00588095
        ;   XREF to: 0058809c (CONDITIONAL_JUMP)  ; LAB_0058809c
    MOV EAX,0x1                         ; 00588097
    MOV ESI,dword ptr [EBP + 0x8]       ; 0058809c | DAT_02d24210
        ;   Label: LAB_0058809c
    MOV EDI,dword ptr [EBP + 0x4]       ; 0058809f | DAT_02d2420c
    NEG ESI                             ; 005880a2
    CMP ESI,EDI                         ; 005880a4
    JL 0x005880aa                       ; 005880a6
        ;   XREF to: 005880aa (CONDITIONAL_JUMP)  ; LAB_005880aa
    OR AL,0x2                           ; 005880a8
    CMP EAX,0x3                         ; 005880aa
        ;   Label: LAB_005880aa
    JA 0x005880fb                       ; 005880ad
        ;   XREF to: 005880fb (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x587cbc]  ; 005880af | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 005880b6 | DAT_007e3e88
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005880bd
    MOV ESI,EDX                         ; 005880c2
    ADD EDI,0x7e3e8c                    ; 005880c4 | DAT_007e3e8c
    TEST EDI,0x7                        ; 005880ca
    JZ 0x005880d8                       ; 005880d0
        ;   XREF to: 005880d8 (CONDITIONAL_JUMP)  ; LAB_005880d8
    MOVSD ES:EDI,ESI                    ; 005880d2 | DAT_02d24208 | DAT_007e3e8c
    SUB ECX,0x4                         ; 005880d3
    JLE 0x005880f5                      ; 005880d6
        ;   XREF to: 005880f5 (CONDITIONAL_JUMP)  ; LAB_005880f5
    SUB ECX,0x8                         ; 005880d8
        ;   Label: LAB_005880d8
    JL 0x005880e9                       ; 005880db
        ;   XREF to: 005880e9 (CONDITIONAL_JUMP)  ; LAB_005880e9
    FILD qword ptr [ESI]                ; 005880dd | DAT_02d2420c | DAT_02d24214 | DAT_02d24208
    ADD ESI,0x8                         ; 005880df
    FISTP qword ptr [EDI]               ; 005880e2 | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3e8c
    ADD EDI,0x8                         ; 005880e4
    JMP 0x005880d8                      ; 005880e7
        ;   XREF to: 005880d8 (UNCONDITIONAL_JUMP)  ; LAB_005880d8
    ADD ECX,0x8                         ; 005880e9
        ;   Label: LAB_005880e9
    JLE 0x005880f5                      ; 005880ec
        ;   XREF to: 005880f5 (CONDITIONAL_JUMP)  ; LAB_005880f5
    MOVSD ES:EDI,ESI                    ; 005880ee | DAT_02d24214 | DAT_007e3e98
    SUB ECX,0x4                         ; 005880ef
    JLE 0x005880f5                      ; 005880f2
        ;   XREF to: 005880f5 (CONDITIONAL_JUMP)  ; LAB_005880f5
    MOVSD ES:EDI,ESI                    ; 005880f4 | DAT_02d24218 | DAT_007e3e9c
    INC dword ptr [0x007e3e88]          ; 005880f5 | DAT_007e3e88
        ;   Label: LAB_005880f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005880fb
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x02d23004]      ; 005880ff | DAT_02d23004
    INC EDX                             ; 00588105
    ADD EBX,0x30                        ; 00588106
    MOV dword ptr [ESP + 0xc],EDX       ; 00588109
    CMP EDX,ECX                         ; 0058810d
    JL 0x0058806c                       ; 0058810f
        ;   XREF to: 0058806c (CONDITIONAL_JUMP)  ; LAB_0058806c
    MOV EBX,dword ptr [0x007e3e88]      ; 00588115 | DAT_007e3e88
        ;   Label: LAB_00588115
    CMP EBX,0x3                         ; 0058811b
    JL 0x00587d70                       ; 0058811e
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    MOV EAX,0x7e3e8c                    ; 00588124 | DAT_007e3e8c
    XOR EBP,EBP                         ; 00588129
    TEST EBX,EBX                        ; 0058812b
    JLE 0x00587d70                      ; 0058812d
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    MOV ECX,dword ptr [EAX + 0x8]       ; 00588133 | DAT_007e3e94 | DAT_007e3ec4
        ;   Label: LAB_00588133
    TEST ECX,ECX                        ; 00588136
    JZ 0x005883c4                       ; 00588138
        ;   XREF to: 005883c4 (CONDITIONAL_JUMP)  ; LAB_005883c4
    CMP ECX,dword ptr [EAX]             ; 0058813e | DAT_007e3e8c | DAT_007e3ebc
    JGE 0x005883d5                      ; 00588140
        ;   XREF to: 005883d5 (CONDITIONAL_JUMP)  ; LAB_005883d5
    MOV dword ptr [EAX],ECX             ; 00588146 | DAT_007e3e8c | DAT_007e3ebc
    MOV EDX,dword ptr [0x007e3e88]      ; 00588148 | DAT_007e3e88
        ;   Label: LAB_00588148
    INC EBP                             ; 0058814e
    ADD EAX,0x30                        ; 0058814f | DAT_007e3ebc
    CMP EBP,EDX                         ; 00588152
    JGE 0x00587d70                      ; 00588154
        ;   XREF to: 00587d70 (CONDITIONAL_JUMP)  ; LAB_00587d70
    JMP 0x00588133                      ; 0058815a
        ;   XREF to: 00588133 (UNCONDITIONAL_JUMP)  ; LAB_00588133
    IMUL EAX,dword ptr [0x02d22ffc],0x30 ; 0058815c | DAT_02d22ffc
        ;   Label: caseD_1
    ADD EAX,0x2d23008                   ; 00588163
    PUSH EAX                            ; 00588168 | DAT_02d23008
    PUSH EDX                            ; 00588169 | DAT_02d23638
    PUSH EBP                            ; 0058816a
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_00587340 ; 0058816b
        ;   XREF to: 00587340 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateRightPlane_FUN_00587340()
    MOV EBP,dword ptr [0x02d22ffc]      ; 00588170 | DAT_02d22ffc
    INC EBP                             ; 00588176
    ADD ESP,0xc                         ; 00588177
    MOV dword ptr [0x02d22ffc],EBP      ; 0058817a | DAT_02d22ffc
    JMP 0x00587ea1                      ; 00588180
        ;   XREF to: 00587ea1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02d22ffc],0x30 ; 00588185 | DAT_02d22ffc
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0058818c
    ADD EDI,0x2d23008                   ; 00588191
    MOV ESI,EDX                         ; 00588197
    TEST EDI,0x7                        ; 00588199
    JZ 0x005881a7                       ; 0058819f
        ;   XREF to: 005881a7 (CONDITIONAL_JUMP)  ; LAB_005881a7
    MOVSD ES:EDI,ESI                    ; 005881a1 | DAT_02d23638 | DAT_02d23008
    SUB ECX,0x4                         ; 005881a2
    JLE 0x005881c4                      ; 005881a5
        ;   XREF to: 005881c4 (CONDITIONAL_JUMP)  ; LAB_005881c4
    SUB ECX,0x8                         ; 005881a7
        ;   Label: LAB_005881a7
    JL 0x005881b8                       ; 005881aa
        ;   XREF to: 005881b8 (CONDITIONAL_JUMP)  ; LAB_005881b8
    FILD qword ptr [ESI]                ; 005881ac | DAT_02d23638 | DAT_02d23640 | DAT_02d2363c
    ADD ESI,0x8                         ; 005881ae
    FISTP qword ptr [EDI]               ; 005881b1 | DAT_02d23008 | DAT_02d23010 | DAT_02d2300c
    ADD EDI,0x8                         ; 005881b3
    JMP 0x005881a7                      ; 005881b6
        ;   XREF to: 005881a7 (UNCONDITIONAL_JUMP)  ; LAB_005881a7
    ADD ECX,0x8                         ; 005881b8
        ;   Label: LAB_005881b8
    JLE 0x005881c4                      ; 005881bb
        ;   XREF to: 005881c4 (CONDITIONAL_JUMP)  ; LAB_005881c4
    MOVSD ES:EDI,ESI                    ; 005881bd | DAT_02d23640 | DAT_02d23010
    SUB ECX,0x4                         ; 005881be
    JLE 0x005881c4                      ; 005881c1
        ;   XREF to: 005881c4 (CONDITIONAL_JUMP)  ; LAB_005881c4
    MOVSD ES:EDI,ESI                    ; 005881c3 | DAT_02d23644 | DAT_02d23014
    MOV EDI,dword ptr [0x02d22ffc]      ; 005881c4 | DAT_02d22ffc
        ;   Label: LAB_005881c4
    INC EDI                             ; 005881ca
    MOV dword ptr [0x02d22ffc],EDI      ; 005881cb | DAT_02d22ffc
    IMUL EAX,EDI,0x30                   ; 005881d1
    ADD EAX,0x2d23008                   ; 005881d4
    PUSH EAX                            ; 005881d9 | DAT_02d23038
    PUSH EBP                            ; 005881da
    PUSH EDX                            ; 005881db | DAT_02d23638
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_00587340 ; 005881dc
        ;   XREF to: 00587340 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateRightPlane_FUN_00587340()
    MOV ESI,dword ptr [0x02d22ffc]      ; 005881e1 | DAT_02d22ffc
    INC ESI                             ; 005881e7
    ADD ESP,0xc                         ; 005881e8
    MOV dword ptr [0x02d22ffc],ESI      ; 005881eb | DAT_02d22ffc
    JMP 0x00587ea1                      ; 005881f1
        ;   XREF to: 00587ea1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02d23000],0x30 ; 005881f6 | DAT_02d23000
        ;   Label: caseD_1
    ADD EAX,0x2d23c08                   ; 005881fd
    PUSH EAX                            ; 00588202
    PUSH EDX                            ; 00588203 | DAT_02d23008
    PUSH EBP                            ; 00588204
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400 ; 00588205
        ;   XREF to: 00587400 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400()
    MOV ESI,dword ptr [0x02d23000]      ; 0058820a | DAT_02d23000
    INC ESI                             ; 00588210
    ADD ESP,0xc                         ; 00588211
    MOV dword ptr [0x02d23000],ESI      ; 00588214 | DAT_02d23000
    JMP 0x00587f6b                      ; 0058821a
        ;   XREF to: 00587f6b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02d23000],0x30 ; 0058821f | DAT_02d23000
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 00588226
    MOV ESI,EDX                         ; 0058822b
    ADD EDI,0x2d23c08                   ; 0058822d
    TEST EDI,0x7                        ; 00588233
    JZ 0x00588241                       ; 00588239
        ;   XREF to: 00588241 (CONDITIONAL_JUMP)  ; LAB_00588241
    MOVSD ES:EDI,ESI                    ; 0058823b | DAT_02d23008
    SUB ECX,0x4                         ; 0058823c
    JLE 0x0058825e                      ; 0058823f
        ;   XREF to: 0058825e (CONDITIONAL_JUMP)  ; LAB_0058825e
    SUB ECX,0x8                         ; 00588241
        ;   Label: LAB_00588241
    JL 0x00588252                       ; 00588244
        ;   XREF to: 00588252 (CONDITIONAL_JUMP)  ; LAB_00588252
    FILD qword ptr [ESI]                ; 00588246 | DAT_02d23008 | DAT_02d23010 | DAT_02d2300c
    ADD ESI,0x8                         ; 00588248
    FISTP qword ptr [EDI]               ; 0058824b | DAT_02d23c10 | DAT_02d23c0c
    ADD EDI,0x8                         ; 0058824d
    JMP 0x00588241                      ; 00588250
        ;   XREF to: 00588241 (UNCONDITIONAL_JUMP)  ; LAB_00588241
    ADD ECX,0x8                         ; 00588252
        ;   Label: LAB_00588252
    JLE 0x0058825e                      ; 00588255
        ;   XREF to: 0058825e (CONDITIONAL_JUMP)  ; LAB_0058825e
    MOVSD ES:EDI,ESI                    ; 00588257 | DAT_02d23010 | DAT_02d23c10
    SUB ECX,0x4                         ; 00588258
    JLE 0x0058825e                      ; 0058825b
        ;   XREF to: 0058825e (CONDITIONAL_JUMP)  ; LAB_0058825e
    MOVSD ES:EDI,ESI                    ; 0058825d | DAT_02d23014
    MOV ECX,dword ptr [0x02d23000]      ; 0058825e | DAT_02d23000
        ;   Label: LAB_0058825e
    INC ECX                             ; 00588264
    MOV dword ptr [0x02d23000],ECX      ; 00588265 | DAT_02d23000
    IMUL EAX,ECX,0x30                   ; 0058826b
    ADD EAX,0x2d23c08                   ; 0058826e
    PUSH EAX                            ; 00588273 | DAT_02d23c38
    PUSH EBP                            ; 00588274
    PUSH EDX                            ; 00588275 | DAT_02d23008
    CALL core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400 ; 00588276
        ;   XREF to: 00587400 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateLeftPlane_FUN_00587400()
    MOV EDI,dword ptr [0x02d23000]      ; 0058827b | DAT_02d23000
    INC EDI                             ; 00588281
    ADD ESP,0xc                         ; 00588282
    MOV dword ptr [0x02d23000],EDI      ; 00588285 | DAT_02d23000
    JMP 0x00587f6b                      ; 0058828b
        ;   XREF to: 00587f6b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x02d23004],0x30 ; 00588290 | DAT_02d23004
        ;   Label: caseD_1
    ADD EAX,0x2d24208                   ; 00588297
    PUSH EAX                            ; 0058829c | DAT_02d24208
    PUSH EDX                            ; 0058829d | DAT_02d23c38
    PUSH EBP                            ; 0058829e
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0 ; 0058829f
        ;   XREF to: 005874c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0()
    MOV ESI,dword ptr [0x02d23004]      ; 005882a4 | DAT_02d23004
    INC ESI                             ; 005882aa
    ADD ESP,0xc                         ; 005882ab
    MOV dword ptr [0x02d23004],ESI      ; 005882ae | DAT_02d23004
    JMP 0x00588030                      ; 005882b4
        ;   XREF to: 00588030 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x02d23004],0x30 ; 005882b9 | DAT_02d23004
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005882c0
    MOV ESI,EDX                         ; 005882c5
    ADD EDI,0x2d24208                   ; 005882c7
    TEST EDI,0x7                        ; 005882cd
    JZ 0x005882db                       ; 005882d3
        ;   XREF to: 005882db (CONDITIONAL_JUMP)  ; LAB_005882db
    MOVSD ES:EDI,ESI                    ; 005882d5 | DAT_02d23c38 | DAT_02d24208
    SUB ECX,0x4                         ; 005882d6
    JLE 0x005882f8                      ; 005882d9
        ;   XREF to: 005882f8 (CONDITIONAL_JUMP)  ; LAB_005882f8
    SUB ECX,0x8                         ; 005882db
        ;   Label: LAB_005882db
    JL 0x005882ec                       ; 005882de
        ;   XREF to: 005882ec (CONDITIONAL_JUMP)  ; LAB_005882ec
    FILD qword ptr [ESI]                ; 005882e0 | DAT_02d23c38 | DAT_02d23c40 | DAT_02d23c3c
    ADD ESI,0x8                         ; 005882e2
    FISTP qword ptr [EDI]               ; 005882e5 | DAT_02d24208 | DAT_02d24210 | DAT_02d2420c
    ADD EDI,0x8                         ; 005882e7
    JMP 0x005882db                      ; 005882ea
        ;   XREF to: 005882db (UNCONDITIONAL_JUMP)  ; LAB_005882db
    ADD ECX,0x8                         ; 005882ec
        ;   Label: LAB_005882ec
    JLE 0x005882f8                      ; 005882ef
        ;   XREF to: 005882f8 (CONDITIONAL_JUMP)  ; LAB_005882f8
    MOVSD ES:EDI,ESI                    ; 005882f1 | DAT_02d23c40 | DAT_02d24210
    SUB ECX,0x4                         ; 005882f2
    JLE 0x005882f8                      ; 005882f5
        ;   XREF to: 005882f8 (CONDITIONAL_JUMP)  ; LAB_005882f8
    MOVSD ES:EDI,ESI                    ; 005882f7 | DAT_02d23c44 | DAT_02d24214
    MOV ECX,dword ptr [0x02d23004]      ; 005882f8 | DAT_02d23004
        ;   Label: LAB_005882f8
    INC ECX                             ; 005882fe
    MOV dword ptr [0x02d23004],ECX      ; 005882ff | DAT_02d23004
    IMUL EAX,ECX,0x30                   ; 00588305
    ADD EAX,0x2d24208                   ; 00588308
    PUSH EAX                            ; 0058830d
    PUSH EBP                            ; 0058830e
    PUSH EDX                            ; 0058830f | DAT_02d23c38
    CALL core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0 ; 00588310
        ;   XREF to: 005874c0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateTopPlane_FUN_005874c0()
    MOV EDI,dword ptr [0x02d23004]      ; 00588315 | DAT_02d23004
    INC EDI                             ; 0058831b
    ADD ESP,0xc                         ; 0058831c
    MOV dword ptr [0x02d23004],EDI      ; 0058831f | DAT_02d23004
    JMP 0x00588030                      ; 00588325
        ;   XREF to: 00588030 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007e3e88],0x30 ; 0058832a | DAT_007e3e88
        ;   Label: caseD_1
    ADD EAX,0x7e3e8c                    ; 00588331 | DAT_007e3e8c
    PUSH EAX                            ; 00588336 | DAT_007e3e8c
    PUSH EDX                            ; 00588337 | DAT_02d24208
    PUSH EBP                            ; 00588338
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580 ; 00588339
        ;   XREF to: 00587580 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580()
    MOV ESI,dword ptr [0x007e3e88]      ; 0058833e | DAT_007e3e88
    INC ESI                             ; 00588344
    ADD ESP,0xc                         ; 00588345
    MOV dword ptr [0x007e3e88],ESI      ; 00588348 | DAT_007e3e88
    JMP 0x005880fb                      ; 0058834e
        ;   XREF to: 005880fb (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007e3e88],0x30 ; 00588353 | DAT_007e3e88
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0058835a
    MOV ESI,EDX                         ; 0058835f
    ADD EDI,0x7e3e8c                    ; 00588361 | DAT_007e3e8c
    TEST EDI,0x7                        ; 00588367
    JZ 0x00588375                       ; 0058836d
        ;   XREF to: 00588375 (CONDITIONAL_JUMP)  ; LAB_00588375
    MOVSD ES:EDI,ESI                    ; 0058836f | DAT_02d24208 | DAT_007e3e8c
    SUB ECX,0x4                         ; 00588370
    JLE 0x00588392                      ; 00588373
        ;   XREF to: 00588392 (CONDITIONAL_JUMP)  ; LAB_00588392
    SUB ECX,0x8                         ; 00588375
        ;   Label: LAB_00588375
    JL 0x00588386                       ; 00588378
        ;   XREF to: 00588386 (CONDITIONAL_JUMP)  ; LAB_00588386
    FILD qword ptr [ESI]                ; 0058837a | DAT_02d2420c | DAT_02d24214 | DAT_02d24208
    ADD ESI,0x8                         ; 0058837c
    FISTP qword ptr [EDI]               ; 0058837f | DAT_007e3e90 | DAT_007e3e98 | DAT_007e3e8c
    ADD EDI,0x8                         ; 00588381
    JMP 0x00588375                      ; 00588384
        ;   XREF to: 00588375 (UNCONDITIONAL_JUMP)  ; LAB_00588375
    ADD ECX,0x8                         ; 00588386
        ;   Label: LAB_00588386
    JLE 0x00588392                      ; 00588389
        ;   XREF to: 00588392 (CONDITIONAL_JUMP)  ; LAB_00588392
    MOVSD ES:EDI,ESI                    ; 0058838b | DAT_02d24214 | DAT_007e3e98
    SUB ECX,0x4                         ; 0058838c
    JLE 0x00588392                      ; 0058838f
        ;   XREF to: 00588392 (CONDITIONAL_JUMP)  ; LAB_00588392
    MOVSD ES:EDI,ESI                    ; 00588391 | DAT_02d24218 | DAT_007e3e9c
    MOV ECX,dword ptr [0x007e3e88]      ; 00588392 | DAT_007e3e88
        ;   Label: LAB_00588392
    INC ECX                             ; 00588398
    MOV dword ptr [0x007e3e88],ECX      ; 00588399 | DAT_007e3e88
    IMUL EAX,ECX,0x30                   ; 0058839f
    ADD EAX,0x7e3e8c                    ; 005883a2 | DAT_007e3e8c
    PUSH EAX                            ; 005883a7 | DAT_007e3ebc
    PUSH EBP                            ; 005883a8
    PUSH EDX                            ; 005883a9 | DAT_02d24208
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580 ; 005883aa
        ;   XREF to: 00587580 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580()
    MOV EDI,dword ptr [0x007e3e88]      ; 005883af | DAT_007e3e88
    INC EDI                             ; 005883b5
    ADD ESP,0xc                         ; 005883b6
    MOV dword ptr [0x007e3e88],EDI      ; 005883b9 | DAT_007e3e88
    JMP 0x005880fb                      ; 005883bf
        ;   XREF to: 005880fb (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EAX + 0x8],0x1       ; 005883c4 | DAT_007e3ec4
        ;   Label: LAB_005883c4
    MOV dword ptr [EAX],ECX             ; 005883cb | DAT_007e3ebc
    MOV dword ptr [EAX + 0x4],ECX       ; 005883cd | DAT_007e3ec0
    JMP 0x00588148                      ; 005883d0
        ;   XREF to: 00588148 (UNCONDITIONAL_JUMP)  ; LAB_00588148
    MOV EDX,ECX                         ; 005883d5
        ;   Label: LAB_005883d5
    MOV ESI,dword ptr [EAX]             ; 005883d7 | DAT_007e3ebc
    NEG EDX                             ; 005883d9
    CMP EDX,ESI                         ; 005883db
    JLE 0x005883e6                      ; 005883dd
        ;   XREF to: 005883e6 (CONDITIONAL_JUMP)  ; LAB_005883e6
    MOV dword ptr [EAX],EDX             ; 005883df | DAT_007e3ebc
    JMP 0x00588148                      ; 005883e1
        ;   XREF to: 00588148 (UNCONDITIONAL_JUMP)  ; LAB_00588148
    MOV EBX,dword ptr [EAX + 0x4]       ; 005883e6 | DAT_007e3ec0
        ;   Label: LAB_005883e6
    CMP EBX,ECX                         ; 005883e9
    JLE 0x005883f5                      ; 005883eb
        ;   XREF to: 005883f5 (CONDITIONAL_JUMP)  ; LAB_005883f5
    MOV dword ptr [EAX + 0x4],ECX       ; 005883ed | DAT_007e3ec0
    JMP 0x00588148                      ; 005883f0
        ;   XREF to: 00588148 (UNCONDITIONAL_JUMP)  ; LAB_00588148
    CMP EDX,EBX                         ; 005883f5
        ;   Label: LAB_005883f5
    JLE 0x00588148                      ; 005883f7
        ;   XREF to: 00588148 (CONDITIONAL_JUMP)  ; LAB_00588148
    MOV dword ptr [EAX + 0x4],EDX       ; 005883fd | DAT_007e3ec0
    JMP 0x00588148                      ; 00588400
        ;   XREF to: 00588148 (UNCONDITIONAL_JUMP)  ; LAB_00588148

