; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_FUN_0047ab00(CVector3i *vertex_indices,int vertex_count)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481ad6
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 004846d2
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 at 0048432d
;   engine_drender.cpp_FUN_0048478e at 004848c4
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01bc0784
;   undefined4 DAT_01bc0788
;   undefined4 DAT_01bc07d8
;   undefined4 DAT_01bc0c88
;   undefined4 DAT_01bc0c8c
;   undefined4 DAT_01bc0cd0
;   undefined4 DAT_01bc123c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   ... and 2 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_prepareDepthBuffer_FUN_0053dbc0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;   engine_special.cpp_drawPolygon2_FUN_00582370
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab00
        ;   Label: core_dpart.cpp_FUN_0047ab00
    PUSH ESI                            ; 0047ab01
    PUSH EDI                            ; 0047ab02
    PUSH EBP                            ; 0047ab03
    SUB ESP,0x64                        ; 0047ab04
    MOV EBP,dword ptr [0x01bc0784]      ; 0047ab07 | DAT_01bc0784
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0047ab0d
    CMP dword ptr [0x00713a7c],0x0      ; 0047ab11 | DAT_00713a7c
    JNZ 0x0047ab93                      ; 0047ab18
        ;   XREF to: 0047ab93 (CONDITIONAL_JUMP)  ; LAB_0047ab93
    MOV ECX,dword ptr [0x01e7dac8]      ; 0047ab1e | DAT_01e7dac8
        ;   Label: LAB_0047ab1e
    MOV EBX,dword ptr [0x01c50948]      ; 0047ab24 | DAT_01c50948
    INC ECX                             ; 0047ab2a
    MOV EBP,dword ptr [0x01bc0784]      ; 0047ab2b | DAT_01bc0784
    MOV dword ptr [0x01e7dac8],ECX      ; 0047ab31 | DAT_01e7dac8
    TEST EBX,EBX                        ; 0047ab37
    JZ 0x0047ae88                       ; 0047ab39
        ;   XREF to: 0047ae88 (CONDITIONAL_JUMP)  ; LAB_0047ae88
    MOV ESI,dword ptr [0x00713a74]      ; 0047ab3f | DAT_00713a74
    TEST ESI,ESI                        ; 0047ab45
    JNZ 0x0047ae88                      ; 0047ab47
        ;   XREF to: 0047ae88 (CONDITIONAL_JUMP)  ; LAB_0047ae88
    TEST EDI,EDI                        ; 0047ab4d
    JLE 0x0047ab70                      ; 0047ab4f
        ;   XREF to: 0047ab70 (CONDITIONAL_JUMP)  ; LAB_0047ab70
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047ab51
    IMUL EDX,dword ptr [EAX],0x30       ; 0047ab55
        ;   Label: LAB_0047ab55
    INC ESI                             ; 0047ab58
    ADD EDX,0x629014                    ; 0047ab59 | DAT_00629014
    ADD EAX,0x4                         ; 0047ab5f
    MOV dword ptr [ESP + ESI*0x4 + -0x4],EDX ; 0047ab62
    CMP ESI,EDI                         ; 0047ab66
    JL 0x0047ab55                       ; 0047ab68
        ;   XREF to: 0047ab55 (CONDITIONAL_JUMP)  ; LAB_0047ab55
    LEA EAX,[EAX]                       ; 0047ab6a
    MOV EBX,dword ptr [0x01c51d14]      ; 0047ab70 | DAT_01c51d14
        ;   Label: LAB_0047ab70
    PUSH EBX                            ; 0047ab76
    PUSH EDI                            ; 0047ab77
    LEA EAX,[ESP + 0x8]                 ; 0047ab78
    PUSH EAX                            ; 0047ab7c
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0047ab7d
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_00582370()
    ADD ESP,0xc                         ; 0047ab82
    MOV EBP,dword ptr [0x01bc0784]      ; 0047ab85 | DAT_01bc0784
        ;   Label: LAB_0047ab85
    ADD ESP,0x64                        ; 0047ab8b
    POP EBP                             ; 0047ab8e
    POP EDI                             ; 0047ab8f
    POP ESI                             ; 0047ab90
    POP EBX                             ; 0047ab91
    RET                                 ; 0047ab92
    MOV EDX,dword ptr [ESP + 0x78]      ; 0047ab93
        ;   Label: LAB_0047ab93
    MOV EDX,dword ptr [EDX + 0x8]       ; 0047ab97
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047ab9a
    SUB EAX,EDX                         ; 0047aba1
    SHL EAX,0x4                         ; 0047aba3
    MOV EDX,dword ptr [ESP + 0x78]      ; 0047aba6
    ADD EAX,0x629014                    ; 0047abaa | DAT_00629014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0047abaf
    PUSH EAX                            ; 0047abb2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047abb3
    SUB EAX,EDX                         ; 0047abba
    SHL EAX,0x4                         ; 0047abbc
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0047abbf
    ADD EAX,0x629014                    ; 0047abc3 | DAT_00629014
    MOV EDX,dword ptr [EDX]             ; 0047abc8
    PUSH EAX                            ; 0047abca
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047abcb
    SUB EAX,EDX                         ; 0047abd2
    SHL EAX,0x4                         ; 0047abd4
    ADD EAX,0x629014                    ; 0047abd7 | DAT_00629014
    PUSH EAX                            ; 0047abdc
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0047abdd
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0047abe2
    TEST EAX,EAX                        ; 0047abe5
    JNZ 0x0047ab1e                      ; 0047abe7
        ;   XREF to: 0047ab1e (CONDITIONAL_JUMP)  ; LAB_0047ab1e
    MOV EBP,dword ptr [0x01bc0784]      ; 0047abed | DAT_01bc0784
    ADD ESP,0x64                        ; 0047abf3
    POP EBP                             ; 0047abf6
    POP EDI                             ; 0047abf7
    POP ESI                             ; 0047abf8
    POP EBX                             ; 0047abf9
    RET                                 ; 0047abfa
    XOR ESI,ESI                         ; 0047abfb
        ;   Label: LAB_0047abfb
    TEST EDI,EDI                        ; 0047abfd
    JLE 0x0047ac30                      ; 0047abff
        ;   XREF to: 0047ac30 (CONDITIONAL_JUMP)  ; LAB_0047ac30
    MOV EBX,dword ptr [ESP + 0x78]      ; 0047ac01
    MOV dword ptr [0x01bc0784],EBP      ; 0047ac05 | DAT_01bc0784
    IMUL EAX,dword ptr [EBX],0x30       ; 0047ac0b
        ;   Label: LAB_0047ac0b
    PUSH 0x1                            ; 0047ac0e
    ADD EAX,0x629014                    ; 0047ac10 | DAT_00629014
    PUSH EAX                            ; 0047ac15
    ADD EBX,0x4                         ; 0047ac16
    INC ESI                             ; 0047ac19
    CALL engine_prim.c_prepareDepthBuffer_FUN_0053dbc0 ; 0047ac1a
        ;   XREF to: 0053dbc0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_0053dbc0()
    ADD ESP,0x8                         ; 0047ac1f
    CMP ESI,EDI                         ; 0047ac22
    JL 0x0047ac0b                       ; 0047ac24
        ;   XREF to: 0047ac0b (CONDITIONAL_JUMP)  ; LAB_0047ac0b
    LEA EAX,[EAX]                       ; 0047ac26
    LEA EDX,[EDX]                       ; 0047ac2c
    MOV EBX,0x4b0                       ; 0047ac30
        ;   Label: LAB_0047ac30
    XOR ESI,ESI                         ; 0047ac35
    XOR EBP,EBP                         ; 0047ac37
    MOV dword ptr [0x01bc0c8c],ESI      ; 0047ac39 | DAT_01bc0c8c
    MOV dword ptr [ESP + 0x48],ESI      ; 0047ac3f
    MOV dword ptr [0x01bc0c88],EBX      ; 0047ac43 | DAT_01bc0c88
    TEST EDI,EDI                        ; 0047ac49
    JLE 0x0047acc7                      ; 0047ac4b
        ;   XREF to: 0047acc7 (CONDITIONAL_JUMP)  ; LAB_0047acc7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0047ac51
    MOV dword ptr [ESP + 0x44],EAX      ; 0047ac55
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047ac59
        ;   Label: LAB_0047ac59
    INC EAX                             ; 0047ac5d
    CMP EAX,EDI                         ; 0047ac5e
    JL 0x0047ac64                       ; 0047ac60
        ;   XREF to: 0047ac64 (CONDITIONAL_JUMP)  ; LAB_0047ac64
    XOR EAX,EAX                         ; 0047ac62
    MOV EDX,dword ptr [ESP + 0x78]      ; 0047ac64
        ;   Label: LAB_0047ac64
    SHL EAX,0x2                         ; 0047ac68
    ADD EAX,EDX                         ; 0047ac6b
    IMUL EAX,dword ptr [EAX],0x30       ; 0047ac6d
    MOV EDX,0x629014                    ; 0047ac70 | DAT_00629014
    ADD EDX,EAX                         ; 0047ac75
    MOV EAX,dword ptr [ESP + 0x44]      ; 0047ac77
    IMUL EAX,dword ptr [EAX],0x30       ; 0047ac7b
    MOV dword ptr [ESP + 0x54],EDX      ; 0047ac7e
    MOV EDX,0x629014                    ; 0047ac82 | DAT_00629014
    ADD EDX,EAX                         ; 0047ac87
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047ac89
    MOV dword ptr [ESP + 0x50],EDX      ; 0047ac8d
    MOV ESI,EDX                         ; 0047ac91
    MOV dword ptr [ESP + 0x4c],EAX      ; 0047ac93
    MOV EAX,dword ptr [EDX + 0x14]      ; 0047ac97 | DAT_00629028
    MOV EDX,dword ptr [ESP + 0x54]      ; 0047ac9a
    MOV EDX,dword ptr [EDX + 0x14]      ; 0047ac9e | DAT_00629028
    SAR EAX,0x10                        ; 0047aca1
    SAR EDX,0x10                        ; 0047aca4
    CMP EAX,EDX                         ; 0047aca7
    JNZ 0x0047aea6                      ; 0047aca9
        ;   XREF to: 0047aea6 (CONDITIONAL_JUMP)  ; LAB_0047aea6
    MOV EDX,dword ptr [ESP + 0x44]      ; 0047acaf
        ;   Label: LAB_0047acaf
    MOV ECX,dword ptr [ESP + 0x48]      ; 0047acb3
    ADD EDX,0x4                         ; 0047acb7
    INC ECX                             ; 0047acba
    MOV dword ptr [ESP + 0x44],EDX      ; 0047acbb
    MOV dword ptr [ESP + 0x48],ECX      ; 0047acbf
    CMP EDI,ECX                         ; 0047acc3
    JG 0x0047ac59                       ; 0047acc5
        ;   XREF to: 0047ac59 (CONDITIONAL_JUMP)  ; LAB_0047ac59
    MOV EDI,dword ptr [0x01bc0c88]      ; 0047acc7 | DAT_01bc0c88
        ;   Label: LAB_0047acc7
    XOR ESI,ESI                         ; 0047accd
    XOR EAX,EAX                         ; 0047accf
    MOV dword ptr [0x01bc123c],ESI      ; 0047acd1 | DAT_01bc123c
    MOV ESI,0x1bc0788                   ; 0047acd7
    TEST EBP,EBP                        ; 0047acdc
    JLE 0x0047afb1                      ; 0047acde
        ;   XREF to: 0047afb1 (CONDITIONAL_JUMP)  ; LAB_0047afb1
    CMP EDI,dword ptr [ESI]             ; 0047ace4 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047ace4
    JNZ 0x0047afa5                      ; 0047ace6
        ;   XREF to: 0047afa5 (CONDITIONAL_JUMP)  ; LAB_0047afa5
    TEST ESI,ESI                        ; 0047acec
    JZ 0x0047afa5                       ; 0047acee
        ;   XREF to: 0047afa5 (CONDITIONAL_JUMP)  ; LAB_0047afa5
    MOV dword ptr [ESP + 0x60],ESI      ; 0047acf4 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047acf4
    MOV dword ptr [0x01bc0784],EBP      ; 0047acf8 | DAT_01bc0784
    TEST ESI,ESI                        ; 0047acfe
    JZ 0x0047ab85                       ; 0047ad00
        ;   XREF to: 0047ab85 (CONDITIONAL_JUMP)  ; LAB_0047ab85
    MOV EAX,0x1bc0788                   ; 0047ad06
    MOV EBX,dword ptr [0x01bc0c88]      ; 0047ad0b | DAT_01bc0c88
    MOV ECX,ESI                         ; 0047ad11
    XOR EDX,EDX                         ; 0047ad13
    TEST EBP,EBP                        ; 0047ad15
    JLE 0x0047afc4                      ; 0047ad17
        ;   XREF to: 0047afc4 (CONDITIONAL_JUMP)  ; LAB_0047afc4
    CMP EBX,dword ptr [EAX]             ; 0047ad1d | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047ad1d
    JNZ 0x0047afb8                      ; 0047ad1f
        ;   XREF to: 0047afb8 (CONDITIONAL_JUMP)  ; LAB_0047afb8
    CMP EAX,ECX                         ; 0047ad25
    JZ 0x0047afb8                       ; 0047ad27
        ;   XREF to: 0047afb8 (CONDITIONAL_JUMP)  ; LAB_0047afb8
    MOV dword ptr [ESP + 0x5c],EAX      ; 0047ad2d | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047ad2d
    MOV dword ptr [0x01bc0784],EBP      ; 0047ad31 | DAT_01bc0784
    TEST EAX,EAX                        ; 0047ad37
    JZ 0x0047ab85                       ; 0047ad39
        ;   XREF to: 0047ab85 (CONDITIONAL_JUMP)  ; LAB_0047ab85
    MOV EAX,[0x01bc0c88]                ; 0047ad3f | DAT_01bc0c88
    MOV dword ptr [ESP + 0x58],EAX      ; 0047ad44
        ;   Label: LAB_0047ad44
    MOV EDX,dword ptr [ESP + 0x60]      ; 0047ad48
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047ad4c
    MOV ESI,dword ptr [EDX + 0x4]       ; 0047ad50
    MOV dword ptr [0x01bc0784],EBP      ; 0047ad53 | DAT_01bc0784
    CMP EAX,ESI                         ; 0047ad59
    JL 0x0047ad9a                       ; 0047ad5b
        ;   XREF to: 0047ad9a (CONDITIONAL_JUMP)  ; LAB_0047ad9a
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0047ad5d
    MOV EBX,EAX                         ; 0047ad61
    MOV dword ptr [EDX],0xffffffff      ; 0047ad63
    MOV EAX,0x1bc0788                   ; 0047ad69
    XOR EDX,EDX                         ; 0047ad6e
    TEST EBP,EBP                        ; 0047ad70
    JLE 0x0047afd7                      ; 0047ad72
        ;   XREF to: 0047afd7 (CONDITIONAL_JUMP)  ; LAB_0047afd7
    CMP EBX,dword ptr [EAX]             ; 0047ad78 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047ad78
    JNZ 0x0047afcb                      ; 0047ad7a
        ;   XREF to: 0047afcb (CONDITIONAL_JUMP)  ; LAB_0047afcb
    CMP EAX,ECX                         ; 0047ad80
    JZ 0x0047afcb                       ; 0047ad82
        ;   XREF to: 0047afcb (CONDITIONAL_JUMP)  ; LAB_0047afcb
    MOV dword ptr [ESP + 0x60],EAX      ; 0047ad88 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047ad88
    MOV dword ptr [0x01bc0784],EBP      ; 0047ad8c | DAT_01bc0784
    TEST EAX,EAX                        ; 0047ad92
    JZ 0x0047ab85                       ; 0047ad94
        ;   XREF to: 0047ab85 (CONDITIONAL_JUMP)  ; LAB_0047ab85
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0047ad9a
        ;   Label: LAB_0047ad9a
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047ad9e
    CMP EAX,dword ptr [EDX + 0x4]       ; 0047ada2
    JL 0x0047adea                       ; 0047ada5
        ;   XREF to: 0047adea (CONDITIONAL_JUMP)  ; LAB_0047adea
    MOV EBX,dword ptr [ESP + 0x60]      ; 0047ada7
    MOV EBP,dword ptr [0x01bc0784]      ; 0047adab | DAT_01bc0784
    MOV ECX,EAX                         ; 0047adb1
    MOV dword ptr [EDX],0xffffffff      ; 0047adb3
    MOV EAX,0x1bc0788                   ; 0047adb9
    XOR EDX,EDX                         ; 0047adbe
    TEST EBP,EBP                        ; 0047adc0
    JLE 0x0047afea                      ; 0047adc2
        ;   XREF to: 0047afea (CONDITIONAL_JUMP)  ; LAB_0047afea
    CMP ECX,dword ptr [EAX]             ; 0047adc8 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047adc8
    JNZ 0x0047afde                      ; 0047adca
        ;   XREF to: 0047afde (CONDITIONAL_JUMP)  ; LAB_0047afde
    CMP EAX,EBX                         ; 0047add0
    JZ 0x0047afde                       ; 0047add2
        ;   XREF to: 0047afde (CONDITIONAL_JUMP)  ; LAB_0047afde
    MOV dword ptr [ESP + 0x5c],EAX      ; 0047add8 | DAT_01bc07d8 | DAT_01bc0788
        ;   Label: LAB_0047add8
    MOV dword ptr [0x01bc0784],EBP      ; 0047addc | DAT_01bc0784
    TEST EAX,EAX                        ; 0047ade2
    JZ 0x0047ab85                       ; 0047ade4
        ;   XREF to: 0047ab85 (CONDITIONAL_JUMP)  ; LAB_0047ab85
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0047adea
        ;   Label: LAB_0047adea
    MOV ESI,dword ptr [ESP + 0x60]      ; 0047adee
    MOV EBX,dword ptr [ESP + 0x58]      ; 0047adf2
    CALL engine_special.cpp_FUN_00580127 ; 0047adf6
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    CMP dword ptr [0x01bc123c],0x0      ; 0047adfb | DAT_01bc123c
    JNZ 0x0047ab85                      ; 0047ae02
        ;   XREF to: 0047ab85 (CONDITIONAL_JUMP)  ; LAB_0047ab85
    MOV EDX,dword ptr [ESP + 0x60]      ; 0047ae08
    MOV EAX,dword ptr [ESP + 0x60]      ; 0047ae0c
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047ae10
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047ae13
    MOV EBX,dword ptr [EDX + 0x28]      ; 0047ae16
    ADD ECX,EAX                         ; 0047ae19
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0047ae1b
    MOV dword ptr [EDX + 0x8],ECX       ; 0047ae1e
    ADD EBX,EAX                         ; 0047ae21
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0047ae23
    MOV dword ptr [EDX + 0x28],EBX      ; 0047ae27
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0047ae2a
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047ae2e
    MOV ESI,dword ptr [EDX + 0x8]       ; 0047ae31
    MOV EDI,dword ptr [EDX + 0x28]      ; 0047ae34
    ADD ESI,EAX                         ; 0047ae37
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0047ae39
    MOV EBP,dword ptr [0x01bc0784]      ; 0047ae3c | DAT_01bc0784
    ADD EDI,EAX                         ; 0047ae42
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047ae44
    MOV dword ptr [EDX + 0x8],ESI       ; 0047ae48
    INC EAX                             ; 0047ae4b
    MOV dword ptr [EDX + 0x28],EDI      ; 0047ae4c
    JMP 0x0047ad44                      ; 0047ae4f
        ;   XREF to: 0047ad44 (UNCONDITIONAL_JUMP)  ; LAB_0047ad44
    XOR ESI,ESI                         ; 0047ae54
        ;   Label: LAB_0047ae54
    TEST EDI,EDI                        ; 0047ae56
    JLE 0x0047ac30                      ; 0047ae58
        ;   XREF to: 0047ac30 (CONDITIONAL_JUMP)  ; LAB_0047ac30
    MOV EBX,dword ptr [ESP + 0x78]      ; 0047ae5e
    MOV dword ptr [0x01bc0784],EBP      ; 0047ae62 | DAT_01bc0784
    IMUL EAX,dword ptr [EBX],0x30       ; 0047ae68
        ;   Label: LAB_0047ae68
    PUSH 0x1                            ; 0047ae6b
    ADD EAX,0x629014                    ; 0047ae6d | DAT_00629014
    PUSH EAX                            ; 0047ae72
    ADD EBX,0x4                         ; 0047ae73
    INC ESI                             ; 0047ae76
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 0047ae77
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0053dd20()
    ADD ESP,0x8                         ; 0047ae7c
    CMP ESI,EDI                         ; 0047ae7f
    JL 0x0047ae68                       ; 0047ae81
        ;   XREF to: 0047ae68 (CONDITIONAL_JUMP)  ; LAB_0047ae68
    JMP 0x0047ac30                      ; 0047ae83
        ;   XREF to: 0047ac30 (UNCONDITIONAL_JUMP)  ; LAB_0047ac30
    MOV EAX,[0x01c51d18]                ; 0047ae88 | DAT_01c51d18
        ;   Label: LAB_0047ae88
    CMP EAX,0x1                         ; 0047ae8d
    JC 0x0047ac30                       ; 0047ae90
        ;   XREF to: 0047ac30 (CONDITIONAL_JUMP)  ; LAB_0047ac30
    JBE 0x0047abfb                      ; 0047ae96
        ;   XREF to: 0047abfb (CONDITIONAL_JUMP)  ; LAB_0047abfb
    CMP EAX,0x6                         ; 0047ae9c
    JZ 0x0047ae54                       ; 0047ae9f
        ;   XREF to: 0047ae54 (CONDITIONAL_JUMP)  ; LAB_0047ae54
    JMP 0x0047ac30                      ; 0047aea1
        ;   XREF to: 0047ac30 (UNCONDITIONAL_JUMP)  ; LAB_0047ac30
    MOV ECX,ESI                         ; 0047aea6
        ;   Label: LAB_0047aea6
    MOV ECX,dword ptr [ECX + 0x14]      ; 0047aea8 | DAT_00629028
    MOV EBX,dword ptr [ESP + 0x54]      ; 0047aeab
    CMP ECX,dword ptr [EBX + 0x14]      ; 0047aeaf | DAT_00629028
    JLE 0x0047aec4                      ; 0047aeb2
        ;   XREF to: 0047aec4 (CONDITIONAL_JUMP)  ; LAB_0047aec4
    MOV ECX,dword ptr [ESP + 0x50]      ; 0047aeb4
    MOV ESI,EBX                         ; 0047aeb8
    MOV dword ptr [ESP + 0x4c],ECX      ; 0047aeba
    MOV ECX,EAX                         ; 0047aebe
    MOV EAX,EDX                         ; 0047aec0
    MOV EDX,ECX                         ; 0047aec2
    IMUL EBX,EBP,0x50                   ; 0047aec4
        ;   Label: LAB_0047aec4
    ADD EBX,0x1bc0788                   ; 0047aec7
    MOV dword ptr [EBX],EAX             ; 0047aecd | DAT_01bc0788
    MOV ECX,dword ptr [0x01bc0c88]      ; 0047aecf | DAT_01bc0c88
    MOV dword ptr [EBX + 0x4],EDX       ; 0047aed5
    CMP EAX,ECX                         ; 0047aed8
    JGE 0x0047aee1                      ; 0047aeda
        ;   XREF to: 0047aee1 (CONDITIONAL_JUMP)  ; LAB_0047aee1
    MOV [0x01bc0c88],EAX                ; 0047aedc | DAT_01bc0c88
    CMP EDX,dword ptr [0x01bc0c8c]      ; 0047aee1 | DAT_01bc0c8c
        ;   Label: LAB_0047aee1
    JLE 0x0047aeef                      ; 0047aee7
        ;   XREF to: 0047aeef (CONDITIONAL_JUMP)  ; LAB_0047aeef
    MOV dword ptr [0x01bc0c8c],EDX      ; 0047aee9 | DAT_01bc0c8c
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0047aeef
        ;   Label: LAB_0047aeef
    MOV EDX,dword ptr [ESI + 0x14]      ; 0047aef3 | DAT_00629028
    MOV ECX,dword ptr [ECX + 0x14]      ; 0047aef6 | DAT_00629028
    SUB ECX,EDX                         ; 0047aef9
    CMP ECX,0x10000                     ; 0047aefb
    JNC 0x0047af95                      ; 0047af01
        ;   XREF to: 0047af95 (CONDITIONAL_JUMP)  ; LAB_0047af95
    XOR ECX,ECX                         ; 0047af07
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047af09
        ;   Label: LAB_0047af09
    MOV EDX,dword ptr [ESI + 0x10]      ; 0047af0d | DAT_00629024
    MOV EAX,dword ptr [EAX + 0x10]      ; 0047af10 | DAT_00629024
    SUB EAX,EDX                         ; 0047af13
    MOV EDX,EAX                         ; 0047af15
    MOV EAX,ECX                         ; 0047af17
    MOV dword ptr [0x01bc0784],EBP      ; 0047af19 | DAT_01bc0784
    IMUL EDX                            ; 0047af1f
    SHRD EAX,EDX,0x10                   ; 0047af21
    MOV dword ptr [EBX + 0xc],EAX       ; 0047af25
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047af28
    MOV EDX,dword ptr [ESI + 0x8]       ; 0047af2c | DAT_0062901c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0047af2f | DAT_0062901c
    SUB EAX,EDX                         ; 0047af32
    MOV EDX,EAX                         ; 0047af34
    SHL EDX,0x8                         ; 0047af36
    MOV EAX,ECX                         ; 0047af39
    IMUL EDX                            ; 0047af3b
    SHRD EAX,EDX,0x10                   ; 0047af3d
    MOV dword ptr [EBX + 0x2c],EAX      ; 0047af41
    MOV ECX,dword ptr [ESI + 0x14]      ; 0047af44 | DAT_00629028
    AND ECX,0xffff                      ; 0047af47
    XOR CX,0xffff                       ; 0047af4d
    MOV EDX,dword ptr [EBX + 0xc]       ; 0047af51
    MOV EAX,ECX                         ; 0047af54
    IMUL EDX                            ; 0047af56
    SHRD EAX,EDX,0x10                   ; 0047af58
    MOV dword ptr [ESP + 0x40],EAX      ; 0047af5c
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047af60
    MOV EAX,dword ptr [ESI + 0x10]      ; 0047af64 | DAT_00629024
    ADD EAX,EDX                         ; 0047af67
    MOV dword ptr [EBX + 0x8],EAX       ; 0047af69
    MOV ESI,dword ptr [ESI + 0x8]       ; 0047af6c | DAT_0062901c
    MOV EAX,[0x01bc0cd0]                ; 0047af6f | DAT_01bc0cd0
    SHL ESI,0x8                         ; 0047af74
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0047af77
    SUB ESI,EAX                         ; 0047af7a
    MOV EAX,ECX                         ; 0047af7c
    IMUL EDX                            ; 0047af7e
    SHRD EAX,EDX,0x10                   ; 0047af80
    MOV EBP,dword ptr [0x01bc0784]      ; 0047af84 | DAT_01bc0784
    ADD ESI,EAX                         ; 0047af8a
    INC EBP                             ; 0047af8c
    MOV dword ptr [EBX + 0x28],ESI      ; 0047af8d
    JMP 0x0047acaf                      ; 0047af90
        ;   XREF to: 0047acaf (UNCONDITIONAL_JUMP)  ; LAB_0047acaf
    MOV EAX,0xffffffff                  ; 0047af95
        ;   Label: LAB_0047af95
    XOR EDX,EDX                         ; 0047af9a
    DIV ECX                             ; 0047af9c
    MOV ECX,EAX                         ; 0047af9e
    JMP 0x0047af09                      ; 0047afa0
        ;   XREF to: 0047af09 (UNCONDITIONAL_JUMP)  ; LAB_0047af09
    INC EAX                             ; 0047afa5
        ;   Label: LAB_0047afa5
    ADD ESI,0x50                        ; 0047afa6
    CMP EAX,EBP                         ; 0047afa9
    JL 0x0047ace4                       ; 0047afab
        ;   XREF to: 0047ace4 (CONDITIONAL_JUMP)  ; LAB_0047ace4
    XOR ESI,ESI                         ; 0047afb1
        ;   Label: LAB_0047afb1
    JMP 0x0047acf4                      ; 0047afb3
        ;   XREF to: 0047acf4 (UNCONDITIONAL_JUMP)  ; LAB_0047acf4
    INC EDX                             ; 0047afb8
        ;   Label: LAB_0047afb8
    ADD EAX,0x50                        ; 0047afb9
    CMP EDX,EBP                         ; 0047afbc
    JL 0x0047ad1d                       ; 0047afbe
        ;   XREF to: 0047ad1d (CONDITIONAL_JUMP)  ; LAB_0047ad1d
    XOR EAX,EAX                         ; 0047afc4
        ;   Label: LAB_0047afc4
    JMP 0x0047ad2d                      ; 0047afc6
        ;   XREF to: 0047ad2d (UNCONDITIONAL_JUMP)  ; LAB_0047ad2d
    INC EDX                             ; 0047afcb
        ;   Label: LAB_0047afcb
    ADD EAX,0x50                        ; 0047afcc
    CMP EDX,EBP                         ; 0047afcf
    JL 0x0047ad78                       ; 0047afd1
        ;   XREF to: 0047ad78 (CONDITIONAL_JUMP)  ; LAB_0047ad78
    XOR EAX,EAX                         ; 0047afd7
        ;   Label: LAB_0047afd7
    JMP 0x0047ad88                      ; 0047afd9
        ;   XREF to: 0047ad88 (UNCONDITIONAL_JUMP)  ; LAB_0047ad88
    INC EDX                             ; 0047afde
        ;   Label: LAB_0047afde
    ADD EAX,0x50                        ; 0047afdf
    CMP EDX,EBP                         ; 0047afe2
    JL 0x0047adc8                       ; 0047afe4
        ;   XREF to: 0047adc8 (CONDITIONAL_JUMP)  ; LAB_0047adc8
    XOR EAX,EAX                         ; 0047afea
        ;   Label: LAB_0047afea
    JMP 0x0047add8                      ; 0047afec
        ;   XREF to: 0047add8 (UNCONDITIONAL_JUMP)  ; LAB_0047add8

