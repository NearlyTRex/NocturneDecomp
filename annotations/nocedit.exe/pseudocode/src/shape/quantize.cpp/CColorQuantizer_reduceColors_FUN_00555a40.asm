; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_reduceColors_FUN_00555a40(CColorQuantizer *this_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; Local Variables:
; float            Stack[-0x60]:4  local_60
; float            Stack[-0x50]:4  local_50
; int              Stack[-0x4c]:4  local_4c
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 at 00554cda
;
; Referenced Globals:
;   TerminatedCString s_Phase_2_00640d7b
;
; Called Functions:
;   shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090
;   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555a40
        ;   Label: shape_quantize.cpp_CColorQuantizer_reduceColors_FUN_00555a40
    PUSH ESI                            ; 00555a41
    PUSH EDI                            ; 00555a42
    PUSH EBP                            ; 00555a43
    MOV EBP,ESP                         ; 00555a44
    SUB ESP,0x4c                        ; 00555a46
    AND ESP,0xfffffff8                  ; 00555a49
    MOV EBX,dword ptr [EBP + 0x14]      ; 00555a4c
    XOR EDX,EDX                         ; 00555a4f
    MOV dword ptr [ESP + 0x18],EDX      ; 00555a51
    MOV EAX,dword ptr [EBX + 0x4b40]    ; 00555a55
        ;   Label: LAB_00555a55
    MOV ECX,dword ptr [ESP + 0x18]      ; 00555a5b
    DEC EAX                             ; 00555a5f
    CMP EAX,ECX                         ; 00555a60
    JLE 0x00555fd9                      ; 00555a62
        ;   XREF to: 00555fd9 (CONDITIONAL_JUMP)  ; LAB_00555fd9
    CMP dword ptr [EBX],0x0             ; 00555a68
    JNZ 0x00555b38                      ; 00555a6b
        ;   XREF to: 00555b38 (CONDITIONAL_JUMP)  ; LAB_00555b38
    XOR EAX,EAX                         ; 00555a71
        ;   Label: LAB_00555a71
    MOV dword ptr [ESP + 0x14],EAX      ; 00555a73
    MOV EAX,dword ptr [EBX + 0x2038]    ; 00555a77
    MOV ECX,0x1                         ; 00555a7d
    MOV dword ptr [ESP],EAX             ; 00555a82
    MOV EAX,dword ptr [EBX + 0x204c]    ; 00555a85
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555a8b
    MOV dword ptr [ESP + 0x10],EAX      ; 00555a8f
    CMP EDX,ECX                         ; 00555a93
    JL 0x00555acb                       ; 00555a95
        ;   XREF to: 00555acb (CONDITIONAL_JUMP)  ; LAB_00555acb
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555a97
    LEA EDX,[EBX + 0x28]                ; 00555a9b
    FLD float ptr [EDX + 0x2038]        ; 00555a9e
        ;   Label: LAB_00555a9e
    FCOMP float ptr [ESP]               ; 00555aa4
    FNSTSW AX                           ; 00555aa7
    SAHF                                ; 00555aa9
    JBE 0x00555ac3                      ; 00555aaa
        ;   XREF to: 00555ac3 (CONDITIONAL_JUMP)  ; LAB_00555ac3
    MOV EAX,dword ptr [EDX + 0x2038]    ; 00555aac
    MOV dword ptr [ESP],EAX             ; 00555ab2
    MOV EAX,dword ptr [EDX + 0x204c]    ; 00555ab5
    MOV dword ptr [ESP + 0x14],ECX      ; 00555abb
    MOV dword ptr [ESP + 0x10],EAX      ; 00555abf
    INC ECX                             ; 00555ac3
        ;   Label: LAB_00555ac3
    ADD EDX,0x28                        ; 00555ac4
    CMP ECX,ESI                         ; 00555ac7
    JLE 0x00555a9e                      ; 00555ac9
        ;   XREF to: 00555a9e (CONDITIONAL_JUMP)  ; LAB_00555a9e
    FLD float ptr [ESP]                 ; 00555acb
        ;   Label: LAB_00555acb
    FLDZ                                ; 00555ace
    FCOMPP                              ; 00555ad0
    FNSTSW AX                           ; 00555ad2
    SAHF                                ; 00555ad4
    JNC 0x00555fd9                      ; 00555ad5
        ;   XREF to: 00555fd9 (CONDITIONAL_JUMP)  ; LAB_00555fd9
    IMUL ECX,dword ptr [ESP + 0x14],0x28 ; 00555adb
    MOV EAX,dword ptr [ESP + 0x18]      ; 00555ae0
    INC EAX                             ; 00555ae4
    ADD ECX,EBX                         ; 00555ae5
    FLD float ptr [ESP + 0x10]          ; 00555ae7
    MOV dword ptr [ESP + 0x18],EAX      ; 00555aeb
    FCOMP float ptr [ECX + 0x203c]      ; 00555aef
    FNSTSW AX                           ; 00555af5
    SAHF                                ; 00555af7
    JZ 0x00555b55                       ; 00555af8
        ;   XREF to: 00555b55 (CONDITIONAL_JUMP)  ; LAB_00555b55
    FLD float ptr [ESP + 0x10]          ; 00555afa
    FCOMP float ptr [ECX + 0x2040]      ; 00555afe
    FNSTSW AX                           ; 00555b04
    SAHF                                ; 00555b06
    JZ 0x00555c75                       ; 00555b07
        ;   XREF to: 00555c75 (CONDITIONAL_JUMP)  ; LAB_00555c75
    FLD float ptr [ESP + 0x10]          ; 00555b0d
    FCOMP float ptr [ECX + 0x2044]      ; 00555b11
    FNSTSW AX                           ; 00555b17
    SAHF                                ; 00555b19
    JZ 0x00555d98                       ; 00555b1a
        ;   XREF to: 00555d98 (CONDITIONAL_JUMP)  ; LAB_00555d98
    FLD float ptr [ESP + 0x10]          ; 00555b20
    FCOMP float ptr [ECX + 0x2048]      ; 00555b24
    FNSTSW AX                           ; 00555b2a
    SAHF                                ; 00555b2c
    JZ 0x00555eba                       ; 00555b2d
        ;   XREF to: 00555eba (CONDITIONAL_JUMP)  ; LAB_00555eba
    JMP 0x00555a55                      ; 00555b33
        ;   XREF to: 00555a55 (UNCONDITIONAL_JUMP)  ; LAB_00555a55
    PUSH ECX                            ; 00555b38
        ;   Label: LAB_00555b38
    PUSH EAX                            ; 00555b39
    PUSH 0x640d7b                       ; 00555b3a | = "Phase 2"
    CALL dword ptr [EBX]                ; 00555b3f
    ADD ESP,0xc                         ; 00555b41
    TEST EAX,EAX                        ; 00555b44
    JZ 0x00555a71                       ; 00555b46
        ;   XREF to: 00555a71 (CONDITIONAL_JUMP)  ; LAB_00555a71
    XOR EAX,EAX                         ; 00555b4c
    MOV ESP,EBP                         ; 00555b4e
    POP EBP                             ; 00555b50
    POP EDI                             ; 00555b51
    POP ESI                             ; 00555b52
    POP EBX                             ; 00555b53
    RET                                 ; 00555b54
    MOV EAX,dword ptr [ECX + 0x2050]    ; 00555b55
        ;   Label: LAB_00555b55
    MOV EDX,EAX                         ; 00555b5b
    MOV dword ptr [ESP + 0x30],EAX      ; 00555b5d
    ADD EDX,dword ptr [ECX + 0x2054]    ; 00555b61
    MOV EAX,dword ptr [ECX + 0x202e]    ; 00555b67
    DEC EDX                             ; 00555b6d
    SAR EAX,0x10                        ; 00555b6e
    MOV ECX,dword ptr [ESP + 0x30]      ; 00555b71
    MOV dword ptr [ESP + 0x40],EAX      ; 00555b75
    CMP EDX,ECX                         ; 00555b79
    JLE 0x00555bfe                      ; 00555b7b
        ;   XREF to: 00555bfe (CONDITIONAL_JUMP)  ; LAB_00555bfe
    LEA EAX,[ECX*0x4 + 0x0]             ; 00555b81
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555b88
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00555b8c
        ;   Label: LAB_00555b8c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555b90
    ADD EAX,EDI                         ; 00555b93
    MOV AL,byte ptr [EAX]               ; 00555b95
    MOV ECX,dword ptr [ESP + 0x40]      ; 00555b97
    AND EAX,0xff                        ; 00555b9b
    CMP EAX,ECX                         ; 00555ba0
    JLE 0x00555be6                      ; 00555ba2
        ;   XREF to: 00555be6 (CONDITIONAL_JUMP)  ; LAB_00555be6
    MOV ESI,dword ptr [ESP + 0x30]      ; 00555ba4
    MOV EDI,dword ptr [ESP + 0x40]      ; 00555ba8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555bac
    SHL ESI,0x2                         ; 00555bb3
    CMP ESI,EAX                         ; 00555bb6
        ;   Label: LAB_00555bb6
    JGE 0x00555bd0                      ; 00555bb8
        ;   XREF to: 00555bd0 (CONDITIONAL_JUMP)  ; LAB_00555bd0
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555bba
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 00555bbd
    AND ECX,0xff                        ; 00555bc0
    CMP ECX,EDI                         ; 00555bc6
    JLE 0x00555bd0                      ; 00555bc8
        ;   XREF to: 00555bd0 (CONDITIONAL_JUMP)  ; LAB_00555bd0
    DEC EDX                             ; 00555bca
    SUB EAX,0x4                         ; 00555bcb
    JMP 0x00555bb6                      ; 00555bce
        ;   XREF to: 00555bb6 (UNCONDITIONAL_JUMP)  ; LAB_00555bb6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00555bd0
        ;   Label: LAB_00555bd0
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555bd4
    ADD EAX,ECX                         ; 00555bd7
    MOV ECX,dword ptr [ECX + EDX*0x4]   ; 00555bd9
    MOV ESI,dword ptr [EAX]             ; 00555bdc
    MOV dword ptr [EAX],ECX             ; 00555bde
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555be0
    MOV dword ptr [EAX + EDX*0x4],ESI   ; 00555be3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00555be6
        ;   Label: LAB_00555be6
    MOV ECX,dword ptr [ESP + 0x30]      ; 00555bea
    ADD EAX,0x4                         ; 00555bee
    INC ECX                             ; 00555bf1
    MOV dword ptr [ESP + 0x1c],EAX      ; 00555bf2
    MOV dword ptr [ESP + 0x30],ECX      ; 00555bf6
    CMP EDX,ECX                         ; 00555bfa
    JG 0x00555b8c                       ; 00555bfc
        ;   XREF to: 00555b8c (CONDITIONAL_JUMP)  ; LAB_00555b8c
    IMUL ESI,dword ptr [ESP + 0x14],0x28 ; 00555bfe
        ;   Label: LAB_00555bfe
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555c03
    MOV ECX,EDX                         ; 00555c0a
    MOV dword ptr [ESP + 0x4],EAX       ; 00555c0c
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2050] ; 00555c10
    MOV EDI,dword ptr [ESP + 0x18]      ; 00555c17
    SUB ECX,EAX                         ; 00555c1b
    IMUL EAX,EDI,0x28                   ; 00555c1d
    MOV dword ptr [EBX + EAX*0x1 + 0x2050],EDX ; 00555c20
    MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555c27
    SUB EDX,ECX                         ; 00555c2e
    MOV dword ptr [EBX + EAX*0x1 + 0x2054],EDX ; 00555c30
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555c37
    PUSH EAX                            ; 00555c3b
    PUSH EBX                            ; 00555c3c
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],ECX ; 00555c3d
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555c44
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555c49
    PUSH EDI                            ; 00555c4c
    PUSH EBX                            ; 00555c4d
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555c4e
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555c53
    MOV EAX,dword ptr [ESP + 0x4]       ; 00555c56
    PUSH EDI                            ; 00555c5a
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX ; 00555c5b
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555c62
    PUSH ESI                            ; 00555c66
    PUSH EBX                            ; 00555c67
    CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 ; 00555c68
        ;   XREF to: 00554e70 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
    ADD ESP,0xc                         ; 00555c6d
    JMP 0x00555a55                      ; 00555c70
        ;   XREF to: 00555a55 (UNCONDITIONAL_JUMP)  ; LAB_00555a55
    MOV EAX,dword ptr [ECX + 0x2050]    ; 00555c75
        ;   Label: LAB_00555c75
    MOV ESI,dword ptr [ECX + 0x2054]    ; 00555c7b
    MOV dword ptr [ESP + 0x34],EAX      ; 00555c81
    LEA EDX,[EAX + ESI*0x1]             ; 00555c85
    MOV EAX,dword ptr [ECX + 0x2030]    ; 00555c88
    MOV EDI,dword ptr [ESP + 0x34]      ; 00555c8e
    SAR EAX,0x10                        ; 00555c92
    DEC EDX                             ; 00555c95
    MOV dword ptr [ESP + 0x48],EAX      ; 00555c96
    CMP EDX,EDI                         ; 00555c9a
    JLE 0x00555d21                      ; 00555c9c
        ;   XREF to: 00555d21 (CONDITIONAL_JUMP)  ; LAB_00555d21
    LEA EAX,[EDI*0x4 + 0x0]             ; 00555ca2
    MOV dword ptr [ESP + 0x28],EAX      ; 00555ca9
    MOV EDI,dword ptr [ESP + 0x28]      ; 00555cad
        ;   Label: LAB_00555cad
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555cb1
    ADD EAX,EDI                         ; 00555cb4
    MOV AL,byte ptr [EAX + 0x1]         ; 00555cb6
    MOV ECX,dword ptr [ESP + 0x48]      ; 00555cb9
    AND EAX,0xff                        ; 00555cbd
    CMP EAX,ECX                         ; 00555cc2
    JLE 0x00555d09                      ; 00555cc4
        ;   XREF to: 00555d09 (CONDITIONAL_JUMP)  ; LAB_00555d09
    MOV ESI,dword ptr [ESP + 0x34]      ; 00555cc6
    MOV EDI,dword ptr [ESP + 0x48]      ; 00555cca
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555cce
    SHL ESI,0x2                         ; 00555cd5
    CMP ESI,EAX                         ; 00555cd8
        ;   Label: LAB_00555cd8
    JGE 0x00555cf3                      ; 00555cda
        ;   XREF to: 00555cf3 (CONDITIONAL_JUMP)  ; LAB_00555cf3
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555cdc
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x1] ; 00555cdf
    AND ECX,0xff                        ; 00555ce3
    CMP ECX,EDI                         ; 00555ce9
    JLE 0x00555cf3                      ; 00555ceb
        ;   XREF to: 00555cf3 (CONDITIONAL_JUMP)  ; LAB_00555cf3
    DEC EDX                             ; 00555ced
    SUB EAX,0x4                         ; 00555cee
    JMP 0x00555cd8                      ; 00555cf1
        ;   XREF to: 00555cd8 (UNCONDITIONAL_JUMP)  ; LAB_00555cd8
    MOV ECX,dword ptr [ESP + 0x28]      ; 00555cf3
        ;   Label: LAB_00555cf3
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555cf7
    ADD ECX,EAX                         ; 00555cfa
    MOV EAX,dword ptr [EAX + EDX*0x4]   ; 00555cfc
    MOV EDI,dword ptr [ECX]             ; 00555cff
    MOV dword ptr [ECX],EAX             ; 00555d01
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555d03
    MOV dword ptr [EAX + EDX*0x4],EDI   ; 00555d06
    MOV EAX,dword ptr [ESP + 0x28]      ; 00555d09
        ;   Label: LAB_00555d09
    MOV ECX,dword ptr [ESP + 0x34]      ; 00555d0d
    ADD EAX,0x4                         ; 00555d11
    INC ECX                             ; 00555d14
    MOV dword ptr [ESP + 0x28],EAX      ; 00555d15
    MOV dword ptr [ESP + 0x34],ECX      ; 00555d19
    CMP EDX,ECX                         ; 00555d1d
    JG 0x00555cad                       ; 00555d1f
        ;   XREF to: 00555cad (CONDITIONAL_JUMP)  ; LAB_00555cad
    IMUL ESI,dword ptr [ESP + 0x14],0x28 ; 00555d21
        ;   Label: LAB_00555d21
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555d26
    MOV ECX,EDX                         ; 00555d2d
    MOV dword ptr [ESP + 0x8],EAX       ; 00555d2f
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2050] ; 00555d33
    MOV EDI,dword ptr [ESP + 0x18]      ; 00555d3a
    SUB ECX,EAX                         ; 00555d3e
    IMUL EAX,EDI,0x28                   ; 00555d40
    MOV dword ptr [EBX + EAX*0x1 + 0x2050],EDX ; 00555d43
    MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555d4a
    SUB EDX,ECX                         ; 00555d51
    MOV dword ptr [EBX + EAX*0x1 + 0x2054],EDX ; 00555d53
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555d5a
    PUSH EAX                            ; 00555d5e
    PUSH EBX                            ; 00555d5f
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],ECX ; 00555d60
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555d67
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555d6c
    PUSH EDI                            ; 00555d6f
    PUSH EBX                            ; 00555d70
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555d71
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555d76
    MOV EAX,dword ptr [ESP + 0x8]       ; 00555d79
    PUSH EDI                            ; 00555d7d
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX ; 00555d7e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555d85
    PUSH ESI                            ; 00555d89
    PUSH EBX                            ; 00555d8a
    CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 ; 00555d8b
        ;   XREF to: 00554e70 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
    ADD ESP,0xc                         ; 00555d90
    JMP 0x00555a55                      ; 00555d93
        ;   XREF to: 00555a55 (UNCONDITIONAL_JUMP)  ; LAB_00555a55
    MOV EAX,dword ptr [ECX + 0x2050]    ; 00555d98
        ;   Label: LAB_00555d98
    MOV EDX,EAX                         ; 00555d9e
    MOV dword ptr [ESP + 0x2c],EAX      ; 00555da0
    ADD EDX,dword ptr [ECX + 0x2054]    ; 00555da4
    MOV EAX,dword ptr [ECX + 0x2032]    ; 00555daa
    DEC EDX                             ; 00555db0
    SAR EAX,0x10                        ; 00555db1
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00555db4
    MOV dword ptr [ESP + 0x3c],EAX      ; 00555db8
    CMP EDX,ECX                         ; 00555dbc
    JLE 0x00555e43                      ; 00555dbe
        ;   XREF to: 00555e43 (CONDITIONAL_JUMP)  ; LAB_00555e43
    LEA EAX,[ECX*0x4 + 0x0]             ; 00555dc4
    MOV dword ptr [ESP + 0x20],EAX      ; 00555dcb
    MOV EDI,dword ptr [ESP + 0x20]      ; 00555dcf
        ;   Label: LAB_00555dcf
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555dd3
    ADD EAX,EDI                         ; 00555dd6
    MOV AL,byte ptr [EAX + 0x2]         ; 00555dd8
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00555ddb
    AND EAX,0xff                        ; 00555ddf
    CMP EAX,ECX                         ; 00555de4
    JLE 0x00555e2b                      ; 00555de6
        ;   XREF to: 00555e2b (CONDITIONAL_JUMP)  ; LAB_00555e2b
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00555de8
    MOV EDI,dword ptr [ESP + 0x3c]      ; 00555dec
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555df0
    SHL ESI,0x2                         ; 00555df7
    CMP ESI,EAX                         ; 00555dfa
        ;   Label: LAB_00555dfa
    JGE 0x00555e15                      ; 00555dfc
        ;   XREF to: 00555e15 (CONDITIONAL_JUMP)  ; LAB_00555e15
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555dfe
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x2] ; 00555e01
    AND ECX,0xff                        ; 00555e05
    CMP ECX,EDI                         ; 00555e0b
    JLE 0x00555e15                      ; 00555e0d
        ;   XREF to: 00555e15 (CONDITIONAL_JUMP)  ; LAB_00555e15
    DEC EDX                             ; 00555e0f
    SUB EAX,0x4                         ; 00555e10
    JMP 0x00555dfa                      ; 00555e13
        ;   XREF to: 00555dfa (UNCONDITIONAL_JUMP)  ; LAB_00555dfa
    MOV EAX,dword ptr [ESP + 0x20]      ; 00555e15
        ;   Label: LAB_00555e15
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555e19
    ADD EAX,ECX                         ; 00555e1c
    MOV ECX,dword ptr [ECX + EDX*0x4]   ; 00555e1e
    MOV EDI,dword ptr [EAX]             ; 00555e21
    MOV dword ptr [EAX],ECX             ; 00555e23
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555e25
    MOV dword ptr [EAX + EDX*0x4],EDI   ; 00555e28
    MOV EAX,dword ptr [ESP + 0x20]      ; 00555e2b
        ;   Label: LAB_00555e2b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00555e2f
    ADD EAX,0x4                         ; 00555e33
    INC ECX                             ; 00555e36
    MOV dword ptr [ESP + 0x20],EAX      ; 00555e37
    MOV dword ptr [ESP + 0x2c],ECX      ; 00555e3b
    CMP EDX,ECX                         ; 00555e3f
    JG 0x00555dcf                       ; 00555e41
        ;   XREF to: 00555dcf (CONDITIONAL_JUMP)  ; LAB_00555dcf
    IMUL ESI,dword ptr [ESP + 0x14],0x28 ; 00555e43
        ;   Label: LAB_00555e43
    MOV EAX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555e48
    MOV ECX,dword ptr [ESI + EBX*0x1 + 0x2050] ; 00555e4f
    MOV dword ptr [ESP + 0xc],EAX       ; 00555e56
    MOV EAX,EDX                         ; 00555e5a
    MOV EDI,dword ptr [ESP + 0x18]      ; 00555e5c
    SUB EAX,ECX                         ; 00555e60
    IMUL ECX,EDI,0x28                   ; 00555e62
    MOV dword ptr [ECX + EBX*0x1 + 0x2050],EDX ; 00555e65
    MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555e6c
    SUB EDX,EAX                         ; 00555e73
    MOV dword ptr [ECX + EBX*0x1 + 0x2054],EDX ; 00555e75
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX ; 00555e7c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555e83
    PUSH EAX                            ; 00555e87
    PUSH EBX                            ; 00555e88
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555e89
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555e8e
    PUSH EDI                            ; 00555e91
    PUSH EBX                            ; 00555e92
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555e93
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555e98
    MOV EAX,dword ptr [ESP + 0xc]       ; 00555e9b
    PUSH EDI                            ; 00555e9f
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX ; 00555ea0
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555ea7
    PUSH ESI                            ; 00555eab
    PUSH EBX                            ; 00555eac
    CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 ; 00555ead
        ;   XREF to: 00554e70 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
    ADD ESP,0xc                         ; 00555eb2
    JMP 0x00555a55                      ; 00555eb5
        ;   XREF to: 00555a55 (UNCONDITIONAL_JUMP)  ; LAB_00555a55
    MOV EAX,dword ptr [ECX + 0x2050]    ; 00555eba
        ;   Label: LAB_00555eba
    MOV ESI,dword ptr [ECX + 0x2054]    ; 00555ec0
    MOV dword ptr [ESP + 0x38],EAX      ; 00555ec6
    LEA EDX,[EAX + ESI*0x1]             ; 00555eca
    MOV EAX,dword ptr [ECX + 0x2034]    ; 00555ecd
    MOV EDI,dword ptr [ESP + 0x38]      ; 00555ed3
    SAR EAX,0x10                        ; 00555ed7
    DEC EDX                             ; 00555eda
    MOV dword ptr [ESP + 0x44],EAX      ; 00555edb
    CMP EDX,EDI                         ; 00555edf
    JLE 0x00555f66                      ; 00555ee1
        ;   XREF to: 00555f66 (CONDITIONAL_JUMP)  ; LAB_00555f66
    LEA EAX,[EDI*0x4 + 0x0]             ; 00555ee7
    MOV dword ptr [ESP + 0x24],EAX      ; 00555eee
    MOV EDI,dword ptr [ESP + 0x24]      ; 00555ef2
        ;   Label: LAB_00555ef2
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555ef6
    ADD EAX,EDI                         ; 00555ef9
    MOV AL,byte ptr [EAX + 0x3]         ; 00555efb
    MOV ECX,dword ptr [ESP + 0x44]      ; 00555efe
    AND EAX,0xff                        ; 00555f02
    CMP EAX,ECX                         ; 00555f07
    JLE 0x00555f4e                      ; 00555f09
        ;   XREF to: 00555f4e (CONDITIONAL_JUMP)  ; LAB_00555f4e
    MOV ESI,dword ptr [ESP + 0x38]      ; 00555f0b
    MOV EDI,dword ptr [ESP + 0x44]      ; 00555f0f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555f13
    SHL ESI,0x2                         ; 00555f1a
    CMP ESI,EAX                         ; 00555f1d
        ;   Label: LAB_00555f1d
    JGE 0x00555f38                      ; 00555f1f
        ;   XREF to: 00555f38 (CONDITIONAL_JUMP)  ; LAB_00555f38
    MOV ECX,dword ptr [EBX + 0x4]       ; 00555f21
    MOV CL,byte ptr [ECX + EAX*0x1 + 0x3] ; 00555f24
    AND ECX,0xff                        ; 00555f28
    CMP ECX,EDI                         ; 00555f2e
    JLE 0x00555f38                      ; 00555f30
        ;   XREF to: 00555f38 (CONDITIONAL_JUMP)  ; LAB_00555f38
    DEC EDX                             ; 00555f32
    SUB EAX,0x4                         ; 00555f33
    JMP 0x00555f1d                      ; 00555f36
        ;   XREF to: 00555f1d (UNCONDITIONAL_JUMP)  ; LAB_00555f1d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00555f38
        ;   Label: LAB_00555f38
    MOV ESI,dword ptr [EBX + 0x4]       ; 00555f3c
    ADD EAX,ESI                         ; 00555f3f
    MOV ESI,dword ptr [ESI + EDX*0x4]   ; 00555f41
    MOV EDI,dword ptr [EAX]             ; 00555f44
    MOV dword ptr [EAX],ESI             ; 00555f46
    MOV EAX,dword ptr [EBX + 0x4]       ; 00555f48
    MOV dword ptr [EAX + EDX*0x4],EDI   ; 00555f4b
    MOV ESI,dword ptr [ESP + 0x24]      ; 00555f4e
        ;   Label: LAB_00555f4e
    MOV EDI,dword ptr [ESP + 0x38]      ; 00555f52
    ADD ESI,0x4                         ; 00555f56
    INC EDI                             ; 00555f59
    MOV dword ptr [ESP + 0x24],ESI      ; 00555f5a
    MOV dword ptr [ESP + 0x38],EDI      ; 00555f5e
    CMP EDX,EDI                         ; 00555f62
    JG 0x00555ef2                       ; 00555f64
        ;   XREF to: 00555ef2 (CONDITIONAL_JUMP)  ; LAB_00555ef2
    IMUL ESI,dword ptr [ESP + 0x14],0x28 ; 00555f66
        ;   Label: LAB_00555f66
    MOV EAX,EDX                         ; 00555f6b
    SUB EAX,dword ptr [ESI + EBX*0x1 + 0x2050] ; 00555f6d
    IMUL ECX,dword ptr [ESP + 0x18],0x28 ; 00555f74
    MOV EDI,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555f79
    MOV dword ptr [ECX + EBX*0x1 + 0x2050],EDX ; 00555f80
    MOV EDX,dword ptr [ESI + EBX*0x1 + 0x2054] ; 00555f87
    SUB EDX,EAX                         ; 00555f8e
    MOV dword ptr [ECX + EBX*0x1 + 0x2054],EDX ; 00555f90
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EAX ; 00555f97
    MOV EAX,dword ptr [ESP + 0x14]      ; 00555f9e
    PUSH EAX                            ; 00555fa2
    PUSH EBX                            ; 00555fa3
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555fa4
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555fa9
    MOV EDX,dword ptr [ESP + 0x18]      ; 00555fac
    PUSH EDX                            ; 00555fb0
    PUSH EBX                            ; 00555fb1
    CALL shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090 ; 00555fb2
        ;   XREF to: 00555090 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_computeBoxStatistics_FUN_00555090(CColorQuantizer * this_ptr, int box_index)
    ADD ESP,0x8                         ; 00555fb7
    MOV ECX,dword ptr [ESP + 0x18]      ; 00555fba
    PUSH ECX                            ; 00555fbe
    MOV dword ptr [ESI + EBX*0x1 + 0x2054],EDI ; 00555fbf
    MOV ESI,dword ptr [ESP + 0x18]      ; 00555fc6
    PUSH ESI                            ; 00555fca
    PUSH EBX                            ; 00555fcb
    CALL shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 ; 00555fcc
        ;   XREF to: 00554e70 (UNCONDITIONAL_CALL)  ; void shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70(CColorQuantizer * this_ptr, int source_box_index, int dest_box_index)
    ADD ESP,0xc                         ; 00555fd1
    JMP 0x00555a55                      ; 00555fd4
        ;   XREF to: 00555a55 (UNCONDITIONAL_JUMP)  ; LAB_00555a55
    MOV EAX,0x1                         ; 00555fd9
        ;   Label: LAB_00555fd9
    MOV ESP,EBP                         ; 00555fde
    POP EBP                             ; 00555fe0
    POP EDI                             ; 00555fe1
    POP ESI                             ; 00555fe2
    POP EBX                             ; 00555fe3
    RET                                 ; 00555fe4

