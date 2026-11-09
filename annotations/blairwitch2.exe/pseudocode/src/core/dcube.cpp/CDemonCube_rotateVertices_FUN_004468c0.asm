; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_004468c0(CDemonCube *this_ptr,uint rendering_mode)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   rendering_mode
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 at 00474c8b
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280 at 004762ce
;
; Referenced Globals:
;   undefined1* PTR_LAB_004468a0 = 004469e4
;   TerminatedCString s_core_dcube_cpp_005ce9cb
;   TerminatedCString s_CDemonCube_rotateVertici_005ce9dd
;   undefined4 DAT_005cea36
;   undefined4 DAT_005f4e30
;   undefined4 DAT_0060b280
;   undefined4 DAT_0151083c
;   undefined4 DAT_01510840
;   undefined4 DAT_01510844
;   undefined4 DAT_01510848
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01ba5c68
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440
;   core_main.c_FUN_004e4500
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004468c0
        ;   Label: core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0
    PUSH ESI                            ; 004468c1
    PUSH EDI                            ; 004468c2
    PUSH EBP                            ; 004468c3
    MOV EBP,ESP                         ; 004468c4
    SUB ESP,0x38                        ; 004468c6
    PUSH 0x265370c                      ; 004468c9 | DAT_0265370c
    MOV EDX,dword ptr [0x0060b280]      ; 004468ce | DAT_0060b280
    PUSH EDX                            ; 004468d4 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 004468d5
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    MOV EAX,dword ptr [EBP + 0x14]      ; 004468da
    MOV ECX,dword ptr [EAX + 0x20]      ; 004468dd
    ADD ESP,0x8                         ; 004468e0
    CMP ECX,0x4e20                      ; 004468e3
    JG 0x00446ace                       ; 004468e9
        ;   XREF to: 00446ace (CONDITIONAL_JUMP)  ; LAB_00446ace
    PUSH 0x1                            ; 004468ef
        ;   Label: LAB_004468ef
    MOV EAX,[0x0060b280]                ; 004468f1 | DAT_0060b280
    PUSH EAX                            ; 004468f6 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 004468f7
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004468fc
    PUSH 0x1                            ; 004468ff
    MOV EDX,dword ptr [0x0060b280]      ; 00446901 | DAT_0060b280
    PUSH EDX                            ; 00446907 | DAT_01ba5c50
    MOV ESI,dword ptr [EBP + 0x14]      ; 00446908
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 0044690b
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446910
    MOV EDI,dword ptr [0x0060b280]      ; 00446913 | DAT_0060b280
    ADD ESP,0x8                         ; 00446919
    XOR ECX,ECX                         ; 0044691c
    MOV ESI,dword ptr [ESI + 0x24]      ; 0044691e
    MOV dword ptr [EBP + -0x10],ECX     ; 00446921
    MOV dword ptr [EBP + -0xc],ECX      ; 00446924
    MOV EDX,dword ptr [EAX + 0x20]      ; 00446927
    MOV EDI,dword ptr [EDI]             ; 0044692a | DAT_01ba5c50
    TEST EDX,EDX                        ; 0044692c
    JLE 0x00446986                      ; 0044692e
        ;   XREF to: 00446986 (CONDITIONAL_JUMP)  ; LAB_00446986
    LEA EBX,[EBP + -0x38]               ; 00446930
        ;   Label: LAB_00446930
    MOV EAX,ESI                         ; 00446933
    FLD float ptr [EAX]                 ; 00446935
    FMUL float ptr [0x005f4e30]         ; 00446937 | DAT_005f4e30
    FISTP dword ptr [EBX]               ; 0044693d
    FLD float ptr [EAX + 0x4]           ; 0044693f
    FMUL float ptr [0x005f4e30]         ; 00446942 | DAT_005f4e30
    FISTP dword ptr [EBX + 0x4]         ; 00446948
    FLD float ptr [EAX + 0x8]           ; 0044694b
    FMUL float ptr [0x005f4e30]         ; 0044694e | DAT_005f4e30
    FISTP dword ptr [EBX + 0x8]         ; 00446954
    LEA EAX,[EBP + -0x38]               ; 00446957
    PUSH EAX                            ; 0044695a
    PUSH EDI                            ; 0044695b
    CALL engine_special.cpp_FUN_0055d723 ; 0044695c
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV DH,byte ptr [EDI + 0x13]        ; 00446961
    ADD ESP,0x8                         ; 00446964
    TEST DH,0x80                        ; 00446967
    JNZ 0x0044696f                      ; 0044696a
        ;   XREF to: 0044696f (CONDITIONAL_JUMP)  ; LAB_0044696f
    INC dword ptr [EBP + -0x10]         ; 0044696c
    MOV ECX,dword ptr [EBP + -0xc]      ; 0044696f
        ;   Label: LAB_0044696f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446972
    ADD EDI,0x30                        ; 00446975
    ADD ESI,0xc                         ; 00446978
    INC ECX                             ; 0044697b
    MOV EBX,dword ptr [EDX + 0x20]      ; 0044697c
    MOV dword ptr [EBP + -0xc],ECX      ; 0044697f
    CMP ECX,EBX                         ; 00446982
    JL 0x00446930                       ; 00446984
        ;   XREF to: 00446930 (CONDITIONAL_JUMP)  ; LAB_00446930
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446986
        ;   Label: LAB_00446986
    MOV EAX,dword ptr [EBP + -0x10]     ; 00446989
    CMP EAX,dword ptr [EDX + 0x20]      ; 0044698c
    JNZ 0x004469a7                      ; 0044698f
        ;   XREF to: 004469a7 (CONDITIONAL_JUMP)  ; LAB_004469a7
    MOV EAX,[0x0060b280]                ; 00446991 | DAT_0060b280
    MOV EDX,dword ptr [EAX + 0x18]      ; 00446996 | DAT_01ba5c68
    TEST EDX,EDX                        ; 00446999
    JNZ 0x004469a7                      ; 0044699b
        ;   XREF to: 004469a7 (CONDITIONAL_JUMP)  ; LAB_004469a7
    PUSH EDX                            ; 0044699d
    PUSH EAX                            ; 0044699e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 0044699f
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004469a4
    MOV AH,byte ptr [0x01510848]        ; 004469a7 | DAT_01510848
        ;   Label: LAB_004469a7
    TEST AH,0x1                         ; 004469ad
    JZ 0x00446afc                       ; 004469b0
        ;   XREF to: 00446afc (CONDITIONAL_JUMP)  ; LAB_00446afc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004469b6
        ;   Label: LAB_004469b6
    XOR ECX,ECX                         ; 004469b9
    MOV EBX,dword ptr [EAX + 0x28]      ; 004469bb
    MOV dword ptr [EBP + -0x4],ECX      ; 004469be
    TEST EBX,EBX                        ; 004469c1
    JLE 0x00446aa6                      ; 004469c3
        ;   XREF to: 00446aa6 (CONDITIONAL_JUMP)  ; LAB_00446aa6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004469c9
    SHL EAX,0x2                         ; 004469cc
    MOV dword ptr [EBP + -0x8],ECX      ; 004469cf
    MOV dword ptr [EBP + -0x14],EAX     ; 004469d2
    CMP dword ptr [EBP + 0x18],0x4      ; 004469d5
        ;   Label: LAB_004469d5
    JA 0x004469e4                       ; 004469d9
        ;   XREF to: 004469e4 (CONDITIONAL_JUMP)  ; LAB_004469e4
    MOV EAX,dword ptr [EBP + -0x14]     ; 004469db
    JMP dword ptr [EAX + 0x4468a0]      ; 004469de | PTR_LAB_004468a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004469e4
        ;   Label: LAB_004469e4
    MOV ESI,dword ptr [EBP + -0x8]      ; 004469e7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004469ea
    ADD EAX,ESI                         ; 004469ed
    LEA EDX,[EAX + 0xc]                 ; 004469ef
    LEA EAX,[EBP + -0x2c]               ; 004469f2
    CMP EAX,EDX                         ; 004469f5
    JZ 0x00446a0a                       ; 004469f7
        ;   XREF to: 00446a0a (CONDITIONAL_JUMP)  ; LAB_00446a0a
    MOV EAX,dword ptr [EDX]             ; 004469f9
    MOV dword ptr [EBP + -0x2c],EAX     ; 004469fb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004469fe
    MOV dword ptr [EBP + -0x28],EAX     ; 00446a01
    MOV EAX,dword ptr [EDX + 0x8]       ; 00446a04
    MOV dword ptr [EBP + -0x24],EAX     ; 00446a07
    FLD float ptr [0x005cea36]          ; 00446a0a | DAT_005cea36
        ;   Label: LAB_00446a0a
    FLD float ptr [EBP + -0x2c]         ; 00446a10
    FMUL ST1                            ; 00446a13
    FSTP float ptr [EBP + -0x2c]        ; 00446a15
    FLD float ptr [EBP + -0x28]         ; 00446a18
    FMUL ST1                            ; 00446a1b
    FSTP float ptr [EBP + -0x28]        ; 00446a1d
    FMUL float ptr [EBP + -0x24]        ; 00446a20
    FSTP float ptr [EBP + -0x24]        ; 00446a23
    LEA EAX,[EBP + 0xffffffd4]          ; 00446a26
    FLD float ptr [EAX]                 ; 00446a2c
    FLD float ptr [EAX + 0x4]           ; 00446a2e
    FLD float ptr [EAX + 0x8]           ; 00446a31
    FISTP dword ptr [EBP + 0xffffffe8]  ; 00446a34
    FISTP dword ptr [EBP + 0xffffffe4]  ; 00446a3a
    FISTP dword ptr [EBP + 0xffffffe0]  ; 00446a40
    MOV EAX,dword ptr [EBP + -0x18]     ; 00446a46
    AND EAX,0xff                        ; 00446a49
    PUSH EAX                            ; 00446a4e
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00446a4f
    AND EAX,0xff                        ; 00446a52
    PUSH EAX                            ; 00446a57
    MOV EAX,dword ptr [EBP + -0x20]     ; 00446a58
    AND EAX,0xff                        ; 00446a5b
    PUSH EAX                            ; 00446a60
    MOV EDI,dword ptr [0x0060b280]      ; 00446a61 | DAT_0060b280
    PUSH EDI                            ; 00446a67 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0 ; 00446a68
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    ADD ESP,0x10                        ; 00446a6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446a70
        ;   Label: LAB_00446a70
    MOV ECX,dword ptr [EBP + -0x8]      ; 00446a73
    MOV EBX,dword ptr [EBP + -0x8]      ; 00446a76
    MOV EDX,dword ptr [EAX + 0x24]      ; 00446a79
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00446a7c
    PUSH EDX                            ; 00446a7f
    ADD EAX,ECX                         ; 00446a80
    MOV ESI,dword ptr [EBP + -0x4]      ; 00446a82
    PUSH EAX                            ; 00446a85
    ADD EBX,0x20                        ; 00446a86
    INC ESI                             ; 00446a89
    CALL core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440 ; 00446a8a
        ;   XREF to: 00446440 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_buildAndRenderTrianglePrimitive_FUN_00446440()
    MOV EDX,dword ptr [EBP + 0x14]      ; 00446a8f
    MOV dword ptr [EBP + -0x8],EBX      ; 00446a92
    MOV dword ptr [EBP + -0x4],ESI      ; 00446a95
    MOV EDI,dword ptr [EDX + 0x28]      ; 00446a98
    ADD ESP,0x8                         ; 00446a9b
    CMP ESI,EDI                         ; 00446a9e
    JL 0x004469d5                       ; 00446aa0
        ;   XREF to: 004469d5 (CONDITIONAL_JUMP)  ; LAB_004469d5
    PUSH 0x1                            ; 00446aa6
        ;   Label: LAB_00446aa6
    MOV EAX,[0x0060b280]                ; 00446aa8 | DAT_0060b280
    PUSH EAX                            ; 00446aad | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00446aae
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00446ab3
    PUSH 0x0                            ; 00446ab6
    MOV EDX,dword ptr [0x0060b280]      ; 00446ab8 | DAT_0060b280
    PUSH EDX                            ; 00446abe | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00446abf
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00446ac4
    MOV ESP,EBP                         ; 00446ac7
    POP EBP                             ; 00446ac9
    POP EDI                             ; 00446aca
    POP ESI                             ; 00446acb
    POP EBX                             ; 00446acc
    RET                                 ; 00446acd
    PUSH 0x4e20                         ; 00446ace
        ;   Label: LAB_00446ace
    PUSH ECX                            ; 00446ad3
    MOV EBX,0x5ce9cb                    ; 00446ad4 | = "..\\core\\dcube.cpp"
    MOV ESI,0x7bb                       ; 00446ad9
    PUSH 0x5ce9dd                       ; 00446ade | = "CDemonCube::rotateVerticies - tried t..."
    MOV dword ptr [0x01d046a0],EBX      ; 00446ae3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00446ae9 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00446aef
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 00446af4
    JMP 0x004468ef                      ; 00446af7
        ;   XREF to: 004468ef (UNCONDITIONAL_JUMP)  ; LAB_004468ef
    MOV EDI,0x3f13cd3a                  ; 00446afc
        ;   Label: LAB_00446afc
    MOV DL,AH                           ; 00446b01
    MOV EAX,0xbf13cd3a                  ; 00446b03
    OR DL,0x1                           ; 00446b08
    MOV dword ptr [0x0151083c],EDI      ; 00446b0b | DAT_0151083c
    MOV dword ptr [0x01510844],EDI      ; 00446b11 | DAT_01510844
    MOV [0x01510840],EAX                ; 00446b17 | DAT_01510840
    MOV byte ptr [0x01510848],DL        ; 00446b1c | DAT_01510848
    JMP 0x004469b6                      ; 00446b22
        ;   XREF to: 004469b6 (UNCONDITIONAL_JUMP)  ; LAB_004469b6

