; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_renderTriangleTextured_FUN_00457a00(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 at 0045edea
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_004614b0 at 0046165c
;   engine_drender.cpp_FUN_00461720 at 004618e9
;
; Referenced Globals:
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c501c
;   undefined4 DAT_005c5020
;   undefined4 DAT_005c5024
;   undefined4 DAT_005c5028
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_005c5034
;   undefined4 DAT_005c5038
;   undefined4 DAT_005c503c
;   undefined4 DAT_005c5040
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   undefined4 DAT_01b4cd30
;   undefined4 DAT_01b4cd34
;   ... and 8 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_special.cpp_drawPolygon2_FUN_00532650
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457a00
        ;   Label: engine_drender.cpp_renderTriangleTextured_FUN_00457a00
    PUSH ESI                            ; 00457a01
    PUSH EDI                            ; 00457a02
    PUSH EBP                            ; 00457a03
    SUB ESP,0x5c                        ; 00457a04
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457a07 | DAT_01b4cd30
    CMP dword ptr [0x006b0280],0x0      ; 00457a0d | DAT_006b0280
    JNZ 0x00457a97                      ; 00457a14
        ;   XREF to: 00457a97 (CONDITIONAL_JUMP)  ; LAB_00457a97
    MOV ECX,dword ptr [0x01e52ef8]      ; 00457a1a | g_RenderedTriangleCount
        ;   Label: LAB_00457a1a
    MOV EBX,dword ptr [0x01c02594]      ; 00457a20 | g_UseExternalRenderer
    INC ECX                             ; 00457a26
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457a27 | DAT_01b4cd30
    MOV dword ptr [0x01e52ef8],ECX      ; 00457a2d | g_RenderedTriangleCount
    TEST EBX,EBX                        ; 00457a33
    JZ 0x00457aff                       ; 00457a35
        ;   XREF to: 00457aff (CONDITIONAL_JUMP)  ; LAB_00457aff
    CMP dword ptr [0x006b0278],0x0      ; 00457a3b | DAT_006b0278
    JNZ 0x00457aff                      ; 00457a42
        ;   XREF to: 00457aff (CONDITIONAL_JUMP)  ; LAB_00457aff
    MOV ECX,dword ptr [ESP + 0x74]      ; 00457a48
    XOR EBX,EBX                         ; 00457a4c
    TEST ECX,ECX                        ; 00457a4e
    JLE 0x00457a70                      ; 00457a50
        ;   XREF to: 00457a70 (CONDITIONAL_JUMP)  ; LAB_00457a70
    MOV EAX,dword ptr [ESP + 0x70]      ; 00457a52
    IMUL EDX,dword ptr [EAX],0x30       ; 00457a56
        ;   Label: LAB_00457a56
    INC EBX                             ; 00457a59
    ADD EDX,0x5c5014                    ; 00457a5a | DAT_005c5014
    MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX ; 00457a60
    MOV EDX,dword ptr [ESP + 0x74]      ; 00457a64
    ADD EAX,0x4                         ; 00457a68
    CMP EBX,EDX                         ; 00457a6b
    JL 0x00457a56                       ; 00457a6d
        ;   XREF to: 00457a56 (CONDITIONAL_JUMP)  ; LAB_00457a56
    NOP                                 ; 00457a6f
    MOV ECX,dword ptr [0x01c039a0]      ; 00457a70 | g_RenderStateFlags
        ;   Label: LAB_00457a70
    PUSH ECX                            ; 00457a76
    MOV EBX,dword ptr [ESP + 0x78]      ; 00457a77
    PUSH EBX                            ; 00457a7b
    LEA EAX,[ESP + 0x8]                 ; 00457a7c
    PUSH EAX                            ; 00457a80
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 00457a81
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 00457a86
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457a89 | DAT_01b4cd30
        ;   Label: LAB_00457a89
    ADD ESP,0x5c                        ; 00457a8f
    POP EBP                             ; 00457a92
    POP EDI                             ; 00457a93
    POP ESI                             ; 00457a94
    POP EBX                             ; 00457a95
    RET                                 ; 00457a96
    MOV EDX,dword ptr [ESP + 0x70]      ; 00457a97
        ;   Label: LAB_00457a97
    MOV EDX,dword ptr [EDX + 0x8]       ; 00457a9b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00457a9e
    SUB EAX,EDX                         ; 00457aa5
    SHL EAX,0x4                         ; 00457aa7
    MOV EDX,dword ptr [ESP + 0x70]      ; 00457aaa
    ADD EAX,0x5c5014                    ; 00457aae | DAT_005c5014
    MOV EDX,dword ptr [EDX + 0x4]       ; 00457ab3
    PUSH EAX                            ; 00457ab6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00457ab7
    SUB EAX,EDX                         ; 00457abe
    SHL EAX,0x4                         ; 00457ac0
    MOV EDX,dword ptr [ESP + 0x74]      ; 00457ac3
    ADD EAX,0x5c5014                    ; 00457ac7 | DAT_005c5014
    MOV EDX,dword ptr [EDX]             ; 00457acc
    PUSH EAX                            ; 00457ace
    LEA EAX,[EDX*0x4 + 0x0]             ; 00457acf
    SUB EAX,EDX                         ; 00457ad6
    SHL EAX,0x4                         ; 00457ad8
    ADD EAX,0x5c5014                    ; 00457adb | DAT_005c5014
    PUSH EAX                            ; 00457ae0
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00457ae1
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 00457ae6
    TEST EAX,EAX                        ; 00457ae9
    JNZ 0x00457a1a                      ; 00457aeb
        ;   XREF to: 00457a1a (CONDITIONAL_JUMP)  ; LAB_00457a1a
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457af1 | DAT_01b4cd30
    ADD ESP,0x5c                        ; 00457af7
    POP EBP                             ; 00457afa
    POP EDI                             ; 00457afb
    POP ESI                             ; 00457afc
    POP EBX                             ; 00457afd
    RET                                 ; 00457afe
    MOV EDI,0x4b0                       ; 00457aff
        ;   Label: LAB_00457aff
    XOR EBP,EBP                         ; 00457b04
    MOV EDX,dword ptr [ESP + 0x74]      ; 00457b06
    MOV dword ptr [0x01b4d1b8],EBP      ; 00457b0a | DAT_01b4d1b8
    MOV dword ptr [ESP + 0x48],EBP      ; 00457b10
    MOV dword ptr [0x01b4d1b4],EDI      ; 00457b14 | DAT_01b4d1b4
    TEST EDX,EDX                        ; 00457b1a
    JLE 0x00457b8a                      ; 00457b1c
        ;   XREF to: 00457b8a (CONDITIONAL_JUMP)  ; LAB_00457b8a
    MOV EAX,dword ptr [ESP + 0x70]      ; 00457b1e
    MOV dword ptr [ESP + 0x44],EAX      ; 00457b22
    MOV EAX,dword ptr [ESP + 0x48]      ; 00457b26
        ;   Label: LAB_00457b26
    MOV EDX,dword ptr [ESP + 0x74]      ; 00457b2a
    INC EAX                             ; 00457b2e
    CMP EAX,EDX                         ; 00457b2f
    JL 0x00457b35                       ; 00457b31
        ;   XREF to: 00457b35 (CONDITIONAL_JUMP)  ; LAB_00457b35
    XOR EAX,EAX                         ; 00457b33
    MOV ECX,dword ptr [ESP + 0x70]      ; 00457b35
        ;   Label: LAB_00457b35
    SHL EAX,0x2                         ; 00457b39
    ADD EAX,ECX                         ; 00457b3c
    IMUL ECX,dword ptr [EAX],0x30       ; 00457b3e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00457b41
    IMUL EBX,dword ptr [EAX],0x30       ; 00457b45
    ADD ECX,0x5c5014                    ; 00457b48 | DAT_005c5014
    ADD EBX,0x5c5014                    ; 00457b4e | DAT_005c5014
    MOV dword ptr [ESP + 0x50],ECX      ; 00457b54
    MOV EDX,dword ptr [ECX + 0x14]      ; 00457b58 | DAT_005c5028
    MOV EAX,dword ptr [EBX + 0x14]      ; 00457b5b | DAT_005c5028
    SAR EDX,0x10                        ; 00457b5e
    SAR EAX,0x10                        ; 00457b61
    MOV ESI,EBX                         ; 00457b64
    CMP EAX,EDX                         ; 00457b66
    JNZ 0x00457d78                      ; 00457b68
        ;   XREF to: 00457d78 (CONDITIONAL_JUMP)  ; LAB_00457d78
    MOV EBX,dword ptr [ESP + 0x44]      ; 00457b6e
        ;   Label: LAB_00457b6e
    MOV ESI,dword ptr [ESP + 0x48]      ; 00457b72
    MOV EDI,dword ptr [ESP + 0x74]      ; 00457b76
    ADD EBX,0x4                         ; 00457b7a
    INC ESI                             ; 00457b7d
    MOV dword ptr [ESP + 0x44],EBX      ; 00457b7e
    MOV dword ptr [ESP + 0x48],ESI      ; 00457b82
    CMP ESI,EDI                         ; 00457b86
    JL 0x00457b26                       ; 00457b88
        ;   XREF to: 00457b26 (CONDITIONAL_JUMP)  ; LAB_00457b26
    MOV EBX,0x1b4cd34                   ; 00457b8a
        ;   Label: LAB_00457b8a
    XOR EAX,EAX                         ; 00457b8f
    MOV ESI,dword ptr [0x01b4d1b4]      ; 00457b91 | DAT_01b4d1b4
    MOV [0x01b4d768],EAX                ; 00457b97 | DAT_01b4d768
    TEST EBP,EBP                        ; 00457b9c
    JLE 0x00457fed                      ; 00457b9e
        ;   XREF to: 00457fed (CONDITIONAL_JUMP)  ; LAB_00457fed
    CMP ESI,dword ptr [EBX]             ; 00457ba4 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457ba4
    JNZ 0x00457fe1                      ; 00457ba6
        ;   XREF to: 00457fe1 (CONDITIONAL_JUMP)  ; LAB_00457fe1
    TEST EBX,EBX                        ; 00457bac
    JZ 0x00457fe1                       ; 00457bae
        ;   XREF to: 00457fe1 (CONDITIONAL_JUMP)  ; LAB_00457fe1
    MOV dword ptr [ESP + 0x54],EBX      ; 00457bb4 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457bb4
    MOV dword ptr [0x01b4cd30],EBP      ; 00457bb8 | DAT_01b4cd30
    TEST EBX,EBX                        ; 00457bbe
    JZ 0x00457a89                       ; 00457bc0
        ;   XREF to: 00457a89 (CONDITIONAL_JUMP)  ; LAB_00457a89
    MOV EAX,0x1b4cd34                   ; 00457bc6
    MOV ECX,dword ptr [0x01b4d1b4]      ; 00457bcb | DAT_01b4d1b4
    XOR EDX,EDX                         ; 00457bd1
    TEST EBP,EBP                        ; 00457bd3
    JLE 0x00458000                      ; 00457bd5
        ;   XREF to: 00458000 (CONDITIONAL_JUMP)  ; LAB_00458000
    CMP ECX,dword ptr [EAX]             ; 00457bdb | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457bdb
    JNZ 0x00457ff4                      ; 00457bdd
        ;   XREF to: 00457ff4 (CONDITIONAL_JUMP)  ; LAB_00457ff4
    CMP EAX,EBX                         ; 00457be3
    JZ 0x00457ff4                       ; 00457be5
        ;   XREF to: 00457ff4 (CONDITIONAL_JUMP)  ; LAB_00457ff4
    MOV dword ptr [ESP + 0x58],EAX      ; 00457beb | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457beb
    MOV dword ptr [0x01b4cd30],EBP      ; 00457bef | DAT_01b4cd30
    TEST EAX,EAX                        ; 00457bf5
    JZ 0x00457a89                       ; 00457bf7
        ;   XREF to: 00457a89 (CONDITIONAL_JUMP)  ; LAB_00457a89
    MOV EAX,[0x01b4d1b4]                ; 00457bfd | DAT_01b4d1b4
    MOV dword ptr [ESP + 0x4c],EAX      ; 00457c02
    MOV EDX,dword ptr [ESP + 0x54]      ; 00457c06
        ;   Label: LAB_00457c06
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00457c0a
    MOV ESI,dword ptr [EDX + 0x4]       ; 00457c0e
    MOV dword ptr [0x01b4cd30],EBP      ; 00457c11 | DAT_01b4cd30
    CMP EAX,ESI                         ; 00457c17
    JL 0x00457c58                       ; 00457c19
        ;   XREF to: 00457c58 (CONDITIONAL_JUMP)  ; LAB_00457c58
    MOV ECX,dword ptr [ESP + 0x58]      ; 00457c1b
    MOV EBX,EAX                         ; 00457c1f
    MOV dword ptr [EDX],0xffffffff      ; 00457c21
    MOV EAX,0x1b4cd34                   ; 00457c27
    XOR EDX,EDX                         ; 00457c2c
    TEST EBP,EBP                        ; 00457c2e
    JLE 0x00458013                      ; 00457c30
        ;   XREF to: 00458013 (CONDITIONAL_JUMP)  ; LAB_00458013
    CMP EBX,dword ptr [EAX]             ; 00457c36 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457c36
    JNZ 0x00458007                      ; 00457c38
        ;   XREF to: 00458007 (CONDITIONAL_JUMP)  ; LAB_00458007
    CMP EAX,ECX                         ; 00457c3e
    JZ 0x00458007                       ; 00457c40
        ;   XREF to: 00458007 (CONDITIONAL_JUMP)  ; LAB_00458007
    MOV dword ptr [ESP + 0x54],EAX      ; 00457c46 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457c46
    MOV dword ptr [0x01b4cd30],EBP      ; 00457c4a | DAT_01b4cd30
    TEST EAX,EAX                        ; 00457c50
    JZ 0x00457a89                       ; 00457c52
        ;   XREF to: 00457a89 (CONDITIONAL_JUMP)  ; LAB_00457a89
    MOV EDX,dword ptr [ESP + 0x58]      ; 00457c58
        ;   Label: LAB_00457c58
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00457c5c
    CMP EAX,dword ptr [EDX + 0x4]       ; 00457c60
    JL 0x00457ca8                       ; 00457c63
        ;   XREF to: 00457ca8 (CONDITIONAL_JUMP)  ; LAB_00457ca8
    MOV ECX,dword ptr [ESP + 0x54]      ; 00457c65
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457c69 | DAT_01b4cd30
    MOV EBX,EAX                         ; 00457c6f
    MOV dword ptr [EDX],0xffffffff      ; 00457c71
    MOV EAX,0x1b4cd34                   ; 00457c77
    XOR EDX,EDX                         ; 00457c7c
    TEST EBP,EBP                        ; 00457c7e
    JLE 0x00458026                      ; 00457c80
        ;   XREF to: 00458026 (CONDITIONAL_JUMP)  ; LAB_00458026
    CMP EBX,dword ptr [EAX]             ; 00457c86 | DAT_01b4cd34 | DAT_01b4cd7c
        ;   Label: LAB_00457c86
    JNZ 0x0045801a                      ; 00457c88
        ;   XREF to: 0045801a (CONDITIONAL_JUMP)  ; LAB_0045801a
    CMP EAX,ECX                         ; 00457c8e
    JZ 0x0045801a                       ; 00457c90
        ;   XREF to: 0045801a (CONDITIONAL_JUMP)  ; LAB_0045801a
    MOV dword ptr [ESP + 0x58],EAX      ; 00457c96 | DAT_01b4cd7c | DAT_01b4cd34
        ;   Label: LAB_00457c96
    MOV dword ptr [0x01b4cd30],EBP      ; 00457c9a | DAT_01b4cd30
    TEST EAX,EAX                        ; 00457ca0
    JZ 0x00457a89                       ; 00457ca2
        ;   XREF to: 00457a89 (CONDITIONAL_JUMP)  ; LAB_00457a89
    MOV EDI,dword ptr [ESP + 0x58]      ; 00457ca8
        ;   Label: LAB_00457ca8
    MOV ESI,dword ptr [ESP + 0x54]      ; 00457cac
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00457cb0
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 00457cb4
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderScanline_FUN_00530710(SSoftwareEdge * left, SSoftwareEdge * right, int scanline_y)
    CMP dword ptr [0x01b4d768],0x0      ; 00457cb9 | DAT_01b4d768
    JNZ 0x00457a89                      ; 00457cc0
        ;   XREF to: 00457a89 (CONDITIONAL_JUMP)  ; LAB_00457a89
    MOV EDX,dword ptr [ESP + 0x54]      ; 00457cc6
    MOV EAX,dword ptr [ESP + 0x54]      ; 00457cca
    MOV ECX,dword ptr [EDX + 0x8]       ; 00457cce
    MOV EAX,dword ptr [EAX + 0xc]       ; 00457cd1
    MOV EBX,dword ptr [EDX + 0x18]      ; 00457cd4
    ADD ECX,EAX                         ; 00457cd7
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00457cd9
    MOV dword ptr [EDX + 0x8],ECX       ; 00457cdc
    ADD EBX,EAX                         ; 00457cdf
    MOV dword ptr [EDX + 0x18],EBX      ; 00457ce1
    MOV ESI,dword ptr [EDX + 0x20]      ; 00457ce4
    MOV EDI,dword ptr [EDX + 0x10]      ; 00457ce7
    MOV ECX,dword ptr [EDX + 0x28]      ; 00457cea
    MOV EAX,dword ptr [EDX + 0x24]      ; 00457ced
    MOV EBX,dword ptr [EDX + 0x30]      ; 00457cf0
    ADD ESI,EAX                         ; 00457cf3
    MOV EAX,dword ptr [EDX + 0x14]      ; 00457cf5
    MOV dword ptr [EDX + 0x20],ESI      ; 00457cf8
    ADD EDI,EAX                         ; 00457cfb
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00457cfd
    MOV dword ptr [EDX + 0x10],EDI      ; 00457d00
    ADD ECX,EAX                         ; 00457d03
    MOV EAX,dword ptr [EDX + 0x34]      ; 00457d05
    MOV dword ptr [EDX + 0x28],ECX      ; 00457d08
    ADD EBX,EAX                         ; 00457d0b
    MOV EAX,dword ptr [ESP + 0x58]      ; 00457d0d
    MOV dword ptr [EDX + 0x30],EBX      ; 00457d11
    MOV EDX,dword ptr [ESP + 0x58]      ; 00457d14
    MOV EAX,dword ptr [EAX + 0xc]       ; 00457d18
    MOV ESI,dword ptr [EDX + 0x8]       ; 00457d1b
    MOV EDI,dword ptr [EDX + 0x18]      ; 00457d1e
    ADD ESI,EAX                         ; 00457d21
    MOV EAX,dword ptr [EDX + 0x1c]      ; 00457d23
    MOV dword ptr [EDX + 0x8],ESI       ; 00457d26
    ADD EDI,EAX                         ; 00457d29
    MOV dword ptr [EDX + 0x18],EDI      ; 00457d2b
    MOV ECX,dword ptr [EDX + 0x20]      ; 00457d2e
    MOV EBX,dword ptr [EDX + 0x10]      ; 00457d31
    MOV ESI,dword ptr [EDX + 0x28]      ; 00457d34
    MOV EAX,dword ptr [EDX + 0x24]      ; 00457d37
    MOV EDI,dword ptr [EDX + 0x30]      ; 00457d3a
    ADD ECX,EAX                         ; 00457d3d
    MOV EAX,dword ptr [EDX + 0x14]      ; 00457d3f
    MOV dword ptr [EDX + 0x20],ECX      ; 00457d42
    ADD EBX,EAX                         ; 00457d45
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00457d47
    MOV dword ptr [EDX + 0x10],EBX      ; 00457d4a
    ADD ESI,EAX                         ; 00457d4d
    MOV EAX,dword ptr [EDX + 0x34]      ; 00457d4f
    MOV dword ptr [EDX + 0x28],ESI      ; 00457d52
    ADD EDI,EAX                         ; 00457d55
    MOV dword ptr [EDX + 0x30],EDI      ; 00457d57
    MOV DL,byte ptr [0x01c039a1]        ; 00457d5a | g_RenderStateFlags+1
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457d60 | DAT_01b4cd30
    TEST DL,0x2                         ; 00457d66
    JNZ 0x0045802d                      ; 00457d69
        ;   XREF to: 0045802d (CONDITIONAL_JUMP)  ; LAB_0045802d
    INC dword ptr [ESP + 0x4c]          ; 00457d6f
    JMP 0x00457c06                      ; 00457d73
        ;   XREF to: 00457c06 (UNCONDITIONAL_JUMP)  ; LAB_00457c06
    MOV EDI,dword ptr [EBX + 0x14]      ; 00457d78 | DAT_005c5028
        ;   Label: LAB_00457d78
    CMP EDI,dword ptr [ECX + 0x14]      ; 00457d7b | DAT_005c5028
    JLE 0x00457d8c                      ; 00457d7e
        ;   XREF to: 00457d8c (CONDITIONAL_JUMP)  ; LAB_00457d8c
    MOV ESI,ECX                         ; 00457d80
    MOV dword ptr [ESP + 0x50],EBX      ; 00457d82
    MOV ECX,EAX                         ; 00457d86
    MOV EAX,EDX                         ; 00457d88
    MOV EDX,ECX                         ; 00457d8a
    IMUL ECX,EBP,0x48                   ; 00457d8c
        ;   Label: LAB_00457d8c
    ADD ECX,0x1b4cd34                   ; 00457d8f
    MOV dword ptr [ECX],EAX             ; 00457d95 | DAT_01b4cd34
    MOV EDI,dword ptr [0x01b4d1b4]      ; 00457d97 | DAT_01b4d1b4
    MOV dword ptr [ECX + 0x4],EDX       ; 00457d9d
    CMP EAX,EDI                         ; 00457da0
    JGE 0x00457da9                      ; 00457da2
        ;   XREF to: 00457da9 (CONDITIONAL_JUMP)  ; LAB_00457da9
    MOV [0x01b4d1b4],EAX                ; 00457da4 | DAT_01b4d1b4
    CMP EDX,dword ptr [0x01b4d1b8]      ; 00457da9 | DAT_01b4d1b8
        ;   Label: LAB_00457da9
    JLE 0x00457db7                      ; 00457daf
        ;   XREF to: 00457db7 (CONDITIONAL_JUMP)  ; LAB_00457db7
    MOV dword ptr [0x01b4d1b8],EDX      ; 00457db1 | DAT_01b4d1b8
    MOV EBX,dword ptr [ESP + 0x50]      ; 00457db7
        ;   Label: LAB_00457db7
    MOV EDX,dword ptr [ESI + 0x14]      ; 00457dbb | DAT_005c5028
    MOV EBX,dword ptr [EBX + 0x14]      ; 00457dbe | DAT_005c5028
    SUB EBX,EDX                         ; 00457dc1
    CMP EBX,0x10000                     ; 00457dc3
    JNC 0x00457f98                      ; 00457dc9
        ;   XREF to: 00457f98 (CONDITIONAL_JUMP)  ; LAB_00457f98
    MOV dword ptr [0x01b4cd30],EBP      ; 00457dcf | DAT_01b4cd30
    XOR EBX,EBX                         ; 00457dd5
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457dd7
        ;   Label: LAB_00457dd7
    MOV EDX,dword ptr [ESI + 0x10]      ; 00457ddb | DAT_005c5024
    MOV EAX,dword ptr [EAX + 0x10]      ; 00457dde | DAT_005c5024
    MOV EDI,dword ptr [ESI + 0x14]      ; 00457de1 | DAT_005c5028
    SUB EAX,EDX                         ; 00457de4
    AND EDI,0xffff                      ; 00457de6
    MOV EDX,EAX                         ; 00457dec
    MOV EAX,EBX                         ; 00457dee
    XOR DI,0xffff                       ; 00457df0
    IMUL EDX                            ; 00457df4
    SHRD EAX,EDX,0x10                   ; 00457df6
    MOV EDX,EAX                         ; 00457dfa
    MOV dword ptr [ECX + 0xc],EAX       ; 00457dfc
    MOV EAX,EDI                         ; 00457dff
    IMUL EDX                            ; 00457e01
    SHRD EAX,EDX,0x10                   ; 00457e03
    MOV dword ptr [ESP + 0x40],EAX      ; 00457e07
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457e0b
    MOV EAX,dword ptr [ESI + 0x10]      ; 00457e0f | DAT_005c5024
    ADD EAX,EDX                         ; 00457e12
    MOV dword ptr [ECX + 0x8],EAX       ; 00457e14
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457e17
    MOV EDX,dword ptr [ESI + 0x18]      ; 00457e1b | DAT_005c502c
    MOV EAX,dword ptr [EAX + 0x18]      ; 00457e1e | DAT_005c502c
    SUB EAX,EDX                         ; 00457e21
    MOV EDX,EAX                         ; 00457e23
    MOV EAX,EBX                         ; 00457e25
    IMUL EDX                            ; 00457e27
    SHRD EAX,EDX,0x10                   ; 00457e29
    MOV EDX,EAX                         ; 00457e2d
    MOV dword ptr [ECX + 0x1c],EAX      ; 00457e2f
    MOV EAX,EDI                         ; 00457e32
    IMUL EDX                            ; 00457e34
    SHRD EAX,EDX,0x10                   ; 00457e36
    MOV dword ptr [ESP + 0x40],EAX      ; 00457e3a
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457e3e
    MOV EAX,dword ptr [ESI + 0x18]      ; 00457e42 | DAT_005c502c
    ADD EAX,EDX                         ; 00457e45
    MOV dword ptr [ECX + 0x18],EAX      ; 00457e47
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457e4a
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00457e4e | DAT_005c5030
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00457e51 | DAT_005c5030
    SUB EAX,EDX                         ; 00457e54
    MOV EDX,EAX                         ; 00457e56
    MOV EAX,EBX                         ; 00457e58
    IMUL EDX                            ; 00457e5a
    SHRD EAX,EDX,0x10                   ; 00457e5c
    MOV EDX,EAX                         ; 00457e60
    MOV dword ptr [ECX + 0x24],EAX      ; 00457e62
    MOV EAX,EDI                         ; 00457e65
    IMUL EDX                            ; 00457e67
    SHRD EAX,EDX,0x10                   ; 00457e69
    MOV dword ptr [ESP + 0x40],EAX      ; 00457e6d
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457e71
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00457e75 | DAT_005c5030
    ADD EAX,EDX                         ; 00457e78
    MOV dword ptr [ECX + 0x20],EAX      ; 00457e7a
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457e7d
    MOV EDX,dword ptr [ESI + 0x20]      ; 00457e81 | DAT_005c5034
    MOV EAX,dword ptr [EAX + 0x20]      ; 00457e84 | DAT_005c5034
    SUB EAX,EDX                         ; 00457e87
    MOV EDX,EAX                         ; 00457e89
    MOV EAX,EBX                         ; 00457e8b
    IMUL EDX                            ; 00457e8d
    SHRD EAX,EDX,0x10                   ; 00457e8f
    MOV EDX,EAX                         ; 00457e93
    MOV dword ptr [ECX + 0x14],EAX      ; 00457e95
    MOV EAX,EDI                         ; 00457e98
    IMUL EDX                            ; 00457e9a
    SHRD EAX,EDX,0x10                   ; 00457e9c
    MOV dword ptr [ESP + 0x40],EAX      ; 00457ea0
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457ea4
    MOV EAX,dword ptr [ESI + 0x20]      ; 00457ea8 | DAT_005c5034
    ADD EAX,EDX                         ; 00457eab
    MOV dword ptr [ECX + 0x10],EAX      ; 00457ead
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457eb0
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00457eb4 | DAT_005c5040
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00457eb7 | DAT_005c5040
    SUB EAX,EDX                         ; 00457eba
    MOV EDX,EAX                         ; 00457ebc
    MOV EAX,EBX                         ; 00457ebe
    IMUL EDX                            ; 00457ec0
    SHRD EAX,EDX,0x10                   ; 00457ec2
    MOV EDX,EAX                         ; 00457ec6
    MOV dword ptr [ECX + 0x34],EAX      ; 00457ec8
    MOV EAX,EDI                         ; 00457ecb
    IMUL EDX                            ; 00457ecd
    SHRD EAX,EDX,0x10                   ; 00457ecf
    MOV dword ptr [ESP + 0x40],EAX      ; 00457ed3
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457ed7
    MOV EAX,dword ptr [ESI + 0x2c]      ; 00457edb | DAT_005c5040
    ADD EAX,EDX                         ; 00457ede
    MOV dword ptr [ECX + 0x30],EAX      ; 00457ee0
    CMP dword ptr [0x006b0278],0x0      ; 00457ee3 | DAT_006b0278
    JZ 0x00457fae                       ; 00457eea
        ;   XREF to: 00457fae (CONDITIONAL_JUMP)  ; LAB_00457fae
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457ef0
    MOV EDX,dword ptr [ESI + 0x8]       ; 00457ef4 | DAT_005c501c
    MOV EAX,dword ptr [EAX + 0x8]       ; 00457ef7 | DAT_005c501c
    SUB EAX,EDX                         ; 00457efa
    MOV EDX,EAX                         ; 00457efc
    MOV EAX,EBX                         ; 00457efe
    IMUL EDX                            ; 00457f00
    SHRD EAX,EDX,0x10                   ; 00457f02
    MOV EDX,EAX                         ; 00457f06
    MOV dword ptr [ECX + 0x2c],EAX      ; 00457f08
    MOV EAX,EDI                         ; 00457f0b
    IMUL EDX                            ; 00457f0d
    SHRD EAX,EDX,0x10                   ; 00457f0f
    MOV dword ptr [ESP + 0x40],EAX      ; 00457f13
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457f17
    MOV EAX,dword ptr [ESI + 0x8]       ; 00457f1b | DAT_005c501c
    ADD EAX,EDX                         ; 00457f1e
        ;   Label: LAB_00457f1e
    MOV dword ptr [ECX + 0x28],EAX      ; 00457f20
    TEST byte ptr [0x01c039a1],0x2      ; 00457f23 | g_RenderStateFlags+1
    JZ 0x00457f8c                       ; 00457f2a
        ;   XREF to: 00457f8c (CONDITIONAL_JUMP)  ; LAB_00457f8c
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457f2c
    MOV EDX,dword ptr [ESI + 0x24]      ; 00457f30 | DAT_005c5038
    MOV EAX,dword ptr [EAX + 0x24]      ; 00457f33 | DAT_005c5038
    SUB EAX,EDX                         ; 00457f36
    MOV EDX,EAX                         ; 00457f38
    MOV EAX,EBX                         ; 00457f3a
    IMUL EDX                            ; 00457f3c
    SHRD EAX,EDX,0x10                   ; 00457f3e
    MOV EDX,EAX                         ; 00457f42
    MOV dword ptr [ECX + 0x3c],EAX      ; 00457f44
    MOV EAX,EDI                         ; 00457f47
    IMUL EDX                            ; 00457f49
    SHRD EAX,EDX,0x10                   ; 00457f4b
    MOV dword ptr [ESP + 0x40],EAX      ; 00457f4f
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457f53
    MOV EAX,dword ptr [ESI + 0x24]      ; 00457f57 | DAT_005c5038
    ADD EAX,EDX                         ; 00457f5a
    MOV dword ptr [ECX + 0x38],EAX      ; 00457f5c
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457f5f
    MOV EDX,dword ptr [ESI + 0x28]      ; 00457f63 | DAT_005c503c
    MOV EAX,dword ptr [EAX + 0x28]      ; 00457f66 | DAT_005c503c
    SUB EAX,EDX                         ; 00457f69
    MOV EDX,EAX                         ; 00457f6b
    MOV EAX,EBX                         ; 00457f6d
    IMUL EDX                            ; 00457f6f
    SHRD EAX,EDX,0x10                   ; 00457f71
    MOV EDX,EAX                         ; 00457f75
    MOV dword ptr [ECX + 0x44],EAX      ; 00457f77
    MOV EAX,EDI                         ; 00457f7a
    IMUL EDX                            ; 00457f7c
    SHRD EAX,EDX,0x10                   ; 00457f7e
    MOV EDX,EAX                         ; 00457f82
    MOV EAX,dword ptr [ESI + 0x28]      ; 00457f84 | DAT_005c503c
    ADD EAX,EDX                         ; 00457f87
    MOV dword ptr [ECX + 0x40],EAX      ; 00457f89
    MOV EBP,dword ptr [0x01b4cd30]      ; 00457f8c | DAT_01b4cd30
        ;   Label: LAB_00457f8c
    INC EBP                             ; 00457f92
    JMP 0x00457b6e                      ; 00457f93
        ;   XREF to: 00457b6e (UNCONDITIONAL_JUMP)  ; LAB_00457b6e
    MOV EAX,0xffffffff                  ; 00457f98
        ;   Label: LAB_00457f98
    XOR EDX,EDX                         ; 00457f9d
    DIV EBX                             ; 00457f9f
    MOV dword ptr [0x01b4cd30],EBP      ; 00457fa1 | DAT_01b4cd30
    MOV EBX,EAX                         ; 00457fa7
    JMP 0x00457dd7                      ; 00457fa9
        ;   XREF to: 00457dd7 (UNCONDITIONAL_JUMP)  ; LAB_00457dd7
    MOV EAX,dword ptr [ESP + 0x50]      ; 00457fae
        ;   Label: LAB_00457fae
    MOV EDX,dword ptr [ESI + 0xc]       ; 00457fb2 | DAT_005c5020
    MOV EAX,dword ptr [EAX + 0xc]       ; 00457fb5 | DAT_005c5020
    SUB EAX,EDX                         ; 00457fb8
    MOV EDX,EAX                         ; 00457fba
    MOV EAX,EBX                         ; 00457fbc
    IMUL EDX                            ; 00457fbe
    SHRD EAX,EDX,0x10                   ; 00457fc0
    MOV EDX,EAX                         ; 00457fc4
    MOV dword ptr [ECX + 0x2c],EAX      ; 00457fc6
    MOV EAX,EDI                         ; 00457fc9
    IMUL EDX                            ; 00457fcb
    SHRD EAX,EDX,0x10                   ; 00457fcd
    MOV dword ptr [ESP + 0x40],EAX      ; 00457fd1
    MOV EDX,dword ptr [ESP + 0x40]      ; 00457fd5
    MOV EAX,dword ptr [ESI + 0xc]       ; 00457fd9 | DAT_005c5020
    JMP 0x00457f1e                      ; 00457fdc
        ;   XREF to: 00457f1e (UNCONDITIONAL_JUMP)  ; LAB_00457f1e
    INC EAX                             ; 00457fe1
        ;   Label: LAB_00457fe1
    ADD EBX,0x48                        ; 00457fe2
    CMP EAX,EBP                         ; 00457fe5
    JL 0x00457ba4                       ; 00457fe7
        ;   XREF to: 00457ba4 (CONDITIONAL_JUMP)  ; LAB_00457ba4
    XOR EBX,EBX                         ; 00457fed
        ;   Label: LAB_00457fed
    JMP 0x00457bb4                      ; 00457fef
        ;   XREF to: 00457bb4 (UNCONDITIONAL_JUMP)  ; LAB_00457bb4
    INC EDX                             ; 00457ff4
        ;   Label: LAB_00457ff4
    ADD EAX,0x48                        ; 00457ff5
    CMP EDX,EBP                         ; 00457ff8
    JL 0x00457bdb                       ; 00457ffa
        ;   XREF to: 00457bdb (CONDITIONAL_JUMP)  ; LAB_00457bdb
    XOR EAX,EAX                         ; 00458000
        ;   Label: LAB_00458000
    JMP 0x00457beb                      ; 00458002
        ;   XREF to: 00457beb (UNCONDITIONAL_JUMP)  ; LAB_00457beb
    INC EDX                             ; 00458007
        ;   Label: LAB_00458007
    ADD EAX,0x48                        ; 00458008
    CMP EDX,EBP                         ; 0045800b
    JL 0x00457c36                       ; 0045800d
        ;   XREF to: 00457c36 (CONDITIONAL_JUMP)  ; LAB_00457c36
    XOR EAX,EAX                         ; 00458013
        ;   Label: LAB_00458013
    JMP 0x00457c46                      ; 00458015
        ;   XREF to: 00457c46 (UNCONDITIONAL_JUMP)  ; LAB_00457c46
    INC EDX                             ; 0045801a
        ;   Label: LAB_0045801a
    ADD EAX,0x48                        ; 0045801b
    CMP EDX,EBP                         ; 0045801e
    JL 0x00457c86                       ; 00458020
        ;   XREF to: 00457c86 (CONDITIONAL_JUMP)  ; LAB_00457c86
    XOR EAX,EAX                         ; 00458026
        ;   Label: LAB_00458026
    JMP 0x00457c96                      ; 00458028
        ;   XREF to: 00457c96 (UNCONDITIONAL_JUMP)  ; LAB_00457c96
    MOV EDX,dword ptr [ESP + 0x54]      ; 0045802d
        ;   Label: LAB_0045802d
    MOV EAX,dword ptr [ESP + 0x54]      ; 00458031
    MOV ECX,dword ptr [EDX + 0x38]      ; 00458035
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00458038
    MOV EBX,dword ptr [EDX + 0x40]      ; 0045803b
    ADD ECX,EAX                         ; 0045803e
    MOV EAX,dword ptr [EDX + 0x44]      ; 00458040
    MOV dword ptr [EDX + 0x38],ECX      ; 00458043
    ADD EBX,EAX                         ; 00458046
    MOV EAX,dword ptr [ESP + 0x58]      ; 00458048
    MOV dword ptr [EDX + 0x40],EBX      ; 0045804c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0045804f
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00458053
    MOV ESI,dword ptr [EDX + 0x38]      ; 00458056
    MOV EDI,dword ptr [EDX + 0x40]      ; 00458059
    ADD ESI,EAX                         ; 0045805c
    MOV EAX,dword ptr [EDX + 0x44]      ; 0045805e
    MOV dword ptr [EDX + 0x38],ESI      ; 00458061
    ADD EDI,EAX                         ; 00458064
    MOV dword ptr [EDX + 0x40],EDI      ; 00458066
    INC dword ptr [ESP + 0x4c]          ; 00458069
    JMP 0x00457c06                      ; 0045806d
        ;   XREF to: 00457c06 (UNCONDITIONAL_JUMP)  ; LAB_00457c06

