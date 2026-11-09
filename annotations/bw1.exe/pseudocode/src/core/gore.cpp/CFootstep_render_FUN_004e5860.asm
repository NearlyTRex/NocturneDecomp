; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_render_FUN_004e5860(CFootstep *this_ptr,int expire_flag)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   expire_flag
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_gore.cpp_CGore_renderDecals_FUN_004e5cd0 at 004e5da1
;
; Referenced Globals:
;   undefined4 DAT_006016a8
;   undefined4 DAT_00612560
;   undefined4 DAT_0061ee2c
;   undefined4 DAT_00629014
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629044
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   ... and 20 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5860
        ;   Label: core_gore.cpp_CFootstep_render_FUN_004e5860
    PUSH ESI                            ; 004e5861
    PUSH EDI                            ; 004e5862
    PUSH EBP                            ; 004e5863
    SUB ESP,0xc                         ; 004e5864
    MOV EDX,0x4                         ; 004e5867
    MOV EBX,0x1                         ; 004e586c
    MOV ESI,0x2                         ; 004e5871
    MOV EDI,0x3                         ; 004e5876
    MOV EBP,0x80000                     ; 004e587b
    XOR ECX,ECX                         ; 004e5880
    MOV dword ptr [0x01cd0e84],EDX      ; 004e5882 | DAT_01cd0e84
    MOV dword ptr [0x01cd0e98],ECX      ; 004e5888 | DAT_01cd0e98
    MOV dword ptr [0x01cd0e9c],EBX      ; 004e588e | DAT_01cd0e9c
    MOV dword ptr [0x01cd0ea0],ESI      ; 004e5894 | DAT_01cd0ea0
    MOV dword ptr [0x01cd0ea4],EDI      ; 004e589a | DAT_01cd0ea4
    MOV dword ptr [0x0062902c],EBP      ; 004e58a0 | DAT_0062902c
    MOV dword ptr [0x00629030],EBP      ; 004e58a6 | DAT_00629030
    MOV EDX,0xf80000                    ; 004e58ac
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e58b1
    MOV dword ptr [0x0062905c],EDX      ; 004e58b5 | DAT_0062905c
    MOV dword ptr [0x0062908c],EDX      ; 004e58bb | DAT_0062908c
    MOV dword ptr [0x00629090],EDX      ; 004e58c1 | DAT_00629090
    MOV EAX,dword ptr [EBX + 0x38]      ; 004e58c7
    MOV dword ptr [0x006290c0],EDX      ; 004e58ca | DAT_006290c0
    PUSH EAX                            ; 004e58d0
    MOV EDX,dword ptr [0x00612560]      ; 004e58d1 | DAT_00612560
    MOV dword ptr [0x00629060],EBP      ; 004e58d7 | DAT_00629060
    PUSH EDX                            ; 004e58dd | DAT_01bc120c
    MOV dword ptr [0x006290bc],EBP      ; 004e58de | DAT_006290bc
    MOV EDI,0x629014                    ; 004e58e4 | DAT_00629014
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004e58e9
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004e58ee
    MOV EBP,dword ptr [0x00612560]      ; 004e58f1 | DAT_00612560
    XOR ECX,ECX                         ; 004e58f7
    PUSH 0x61ee2c                       ; 004e58f9 | DAT_0061ee2c
    MOV dword ptr [0x01cd0e88],ECX      ; 004e58fe | DAT_01cd0e88
    MOV dword ptr [0x01cd0e8c],ECX      ; 004e5904 | DAT_01cd0e8c
    PUSH EBP                            ; 004e590a | DAT_01bc120c
    MOV dword ptr [0x01cd0e90],ECX      ; 004e590b | DAT_01cd0e90
    MOV dword ptr [0x01cd0e94],ECX      ; 004e5911 | DAT_01cd0e94
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004e5917
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    LEA EBP,[EBX + 0x8]                 ; 004e591c
    ADD ESP,0x8                         ; 004e591f
    MOV ESI,EBP                         ; 004e5922
    ADD EBP,0x30                        ; 004e5924
    MOV EBX,ESP                         ; 004e5927
        ;   Label: LAB_004e5927
    MOV EAX,ESI                         ; 004e5929
    FLD float ptr [EAX]                 ; 004e592b
    FMUL float ptr [0x006016a8]         ; 004e592d | DAT_006016a8
    FISTP dword ptr [EBX]               ; 004e5933
    FLD float ptr [EAX + 0x4]           ; 004e5935
    FMUL float ptr [0x006016a8]         ; 004e5938 | DAT_006016a8
    FISTP dword ptr [EBX + 0x4]         ; 004e593e
    FLD float ptr [EAX + 0x8]           ; 004e5941
    FMUL float ptr [0x006016a8]         ; 004e5944 | DAT_006016a8
    FISTP dword ptr [EBX + 0x8]         ; 004e594a
    MOV EBX,ESP                         ; 004e594d
    PUSH EBX                            ; 004e594f
    PUSH EDI                            ; 004e5950 | DAT_00629014 | DAT_00629044
    ADD ESI,0xc                         ; 004e5951
    CALL engine_special.cpp_FUN_0058043c ; 004e5954
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004e5959
    ADD EDI,0x30                        ; 004e595c
    CMP ESI,EBP                         ; 004e595f
    JNZ 0x004e5927                      ; 004e5961
        ;   XREF to: 004e5927 (CONDITIONAL_JUMP)  ; LAB_004e5927
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e5963
    CMP dword ptr [EBX + 0x3c],0x0      ; 004e5967
    JZ 0x004e5a5c                       ; 004e596b
        ;   XREF to: 004e5a5c (CONDITIONAL_JUMP)  ; LAB_004e5a5c
    MOV ESI,0x629034                    ; 004e5971 | DAT_00629034
    MOV EBP,0x629038                    ; 004e5976 | DAT_00629038
    MOV EBX,dword ptr [EBX + 0x4]       ; 004e597b
    MOV EDI,0x62903c                    ; 004e597e | DAT_0062903c
    CMP EBX,0x1                         ; 004e5983
    JNC 0x004e5ae2                      ; 004e5986
        ;   XREF to: 004e5ae2 (CONDITIONAL_JUMP)  ; LAB_004e5ae2
    MOV dword ptr [ESI],0x2000          ; 004e598c | DAT_00629034
        ;   Label: LAB_004e598c
    MOV dword ptr [EBP],0x0             ; 004e5992 | DAT_00629038
    MOV dword ptr [EDI],0x0             ; 004e5999 | DAT_0062903c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e599f
        ;   Label: LAB_004e599f
    MOV ESI,0x629064                    ; 004e59a3 | DAT_00629064
    MOV EBP,0x629068                    ; 004e59a8 | DAT_00629068
    MOV EBX,dword ptr [EBX + 0x4]       ; 004e59ad
    MOV EDI,0x62906c                    ; 004e59b0 | DAT_0062906c
    CMP EBX,0x1                         ; 004e59b5
    JNC 0x004e5b22                      ; 004e59b8
        ;   XREF to: 004e5b22 (CONDITIONAL_JUMP)  ; LAB_004e5b22
    MOV dword ptr [ESI],0x2000          ; 004e59be | DAT_00629064
        ;   Label: LAB_004e59be
    MOV dword ptr [EBP],0x0             ; 004e59c4 | DAT_00629068
    MOV dword ptr [EDI],0x0             ; 004e59cb | DAT_0062906c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e59d1
        ;   Label: LAB_004e59d1
    MOV EBP,0x629094                    ; 004e59d5 | DAT_00629094
    MOV ESI,0x629098                    ; 004e59da | DAT_00629098
    MOV EBX,dword ptr [EBX + 0x4]       ; 004e59df
    MOV EDI,0x62909c                    ; 004e59e2 | DAT_0062909c
    CMP EBX,0x1                         ; 004e59e7
    JNC 0x004e5b65                      ; 004e59ea
        ;   XREF to: 004e5b65 (CONDITIONAL_JUMP)  ; LAB_004e5b65
    MOV dword ptr [EBP],0x2000          ; 004e59f0 | DAT_00629094
        ;   Label: LAB_004e59f0
    MOV dword ptr [ESI],0x0             ; 004e59f7 | DAT_00629098
    MOV dword ptr [EDI],0x0             ; 004e59fd | DAT_0062909c
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e5a03
        ;   Label: LAB_004e5a03
    MOV EDI,0x6290c4                    ; 004e5a07 | DAT_006290c4
    MOV EBP,0x6290c8                    ; 004e5a0c | DAT_006290c8
    MOV EBX,dword ptr [EBX + 0x4]       ; 004e5a11
    MOV ESI,0x6290cc                    ; 004e5a14 | DAT_006290cc
    CMP EBX,0x1                         ; 004e5a19
    JNC 0x004e5ba8                      ; 004e5a1c
        ;   XREF to: 004e5ba8 (CONDITIONAL_JUMP)  ; LAB_004e5ba8
    MOV dword ptr [EDI],0x2000          ; 004e5a22 | DAT_006290c4
        ;   Label: LAB_004e5a22
    MOV dword ptr [EBP],0x0             ; 004e5a28 | DAT_006290c8
    MOV dword ptr [ESI],0x0             ; 004e5a2f | DAT_006290cc
    PUSH 0x1cd0e80                      ; 004e5a35
        ;   Label: LAB_004e5a35
    MOV ECX,dword ptr [0x00612560]      ; 004e5a3a | DAT_00612560
    PUSH ECX                            ; 004e5a40 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004e5a41
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004e5a46
    CMP dword ptr [ESP + 0x24],0x0      ; 004e5a49
    JNZ 0x004e5bb4                      ; 004e5a4e
        ;   XREF to: 004e5bb4 (CONDITIONAL_JUMP)  ; LAB_004e5bb4
    ADD ESP,0xc                         ; 004e5a54
    POP EBP                             ; 004e5a57
    POP EDI                             ; 004e5a58
    POP ESI                             ; 004e5a59
    POP EBX                             ; 004e5a5a
    RET                                 ; 004e5a5b
    MOV ESI,0x7ff                       ; 004e5a5c
        ;   Label: LAB_004e5a5c
    MOV dword ptr [0x00629038],ESI      ; 004e5a61 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004e5a67 | DAT_0062903c
    MOV dword ptr [0x00629064],ESI      ; 004e5a6d | DAT_00629064
    MOV dword ptr [0x00629068],ESI      ; 004e5a73 | DAT_00629068
    MOV dword ptr [0x0062906c],ESI      ; 004e5a79 | DAT_0062906c
    MOV dword ptr [0x00629094],ESI      ; 004e5a7f | DAT_00629094
    MOV dword ptr [0x00629098],ESI      ; 004e5a85 | DAT_00629098
    MOV dword ptr [0x0062909c],ESI      ; 004e5a8b | DAT_0062909c
    MOV dword ptr [0x006290c4],ESI      ; 004e5a91 | DAT_006290c4
    MOV dword ptr [0x006290c8],ESI      ; 004e5a97 | DAT_006290c8
    MOV dword ptr [0x006290cc],ESI      ; 004e5a9d | DAT_006290cc
    MOV dword ptr [0x00629034],ESI      ; 004e5aa3 | DAT_00629034
    JMP 0x004e5a35                      ; 004e5aa9
        ;   XREF to: 004e5a35 (UNCONDITIONAL_JUMP)  ; LAB_004e5a35
    MOV EDI,0x7f80                      ; 004e5aab
        ;   Label: LAB_004e5aab
    XOR ESI,ESI                         ; 004e5ab0
    MOV dword ptr [0x00629038],EDI      ; 004e5ab2 | DAT_00629038
    MOV dword ptr [0x0062903c],ESI      ; 004e5ab8 | DAT_0062903c
    MOV dword ptr [0x00629034],ESI      ; 004e5abe | DAT_00629034
    JMP 0x004e599f                      ; 004e5ac4
        ;   XREF to: 004e599f (UNCONDITIONAL_JUMP)  ; LAB_004e599f
    XOR EDX,EDX                         ; 004e5ac9
        ;   Label: LAB_004e5ac9
    MOV dword ptr [0x00629038],EDX      ; 004e5acb | DAT_00629038
    MOV dword ptr [0x0062903c],EDX      ; 004e5ad1 | DAT_0062903c
    MOV dword ptr [0x00629034],EDX      ; 004e5ad7 | DAT_00629034
    JMP 0x004e599f                      ; 004e5add
        ;   XREF to: 004e599f (UNCONDITIONAL_JUMP)  ; LAB_004e599f
    JBE 0x004e5aab                      ; 004e5ae2
        ;   XREF to: 004e5aab (CONDITIONAL_JUMP)  ; LAB_004e5aab
        ;   Label: LAB_004e5ae2
    CMP EBX,0x2                         ; 004e5ae4
    JZ 0x004e5ac9                       ; 004e5ae7
        ;   XREF to: 004e5ac9 (CONDITIONAL_JUMP)  ; LAB_004e5ac9
    JMP 0x004e598c                      ; 004e5ae9
        ;   XREF to: 004e598c (UNCONDITIONAL_JUMP)  ; LAB_004e598c
    MOV ESI,0x7f80                      ; 004e5aee
        ;   Label: LAB_004e5aee
    XOR EBX,EBX                         ; 004e5af3
    MOV dword ptr [0x00629068],ESI      ; 004e5af5 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004e5afb | DAT_0062906c
    MOV dword ptr [0x00629064],EBX      ; 004e5b01 | DAT_00629064
    JMP 0x004e59d1                      ; 004e5b07
        ;   XREF to: 004e59d1 (UNCONDITIONAL_JUMP)  ; LAB_004e59d1
    XOR EAX,EAX                         ; 004e5b0c
        ;   Label: LAB_004e5b0c
    MOV [0x00629068],EAX                ; 004e5b0e | DAT_00629068
    MOV [0x0062906c],EAX                ; 004e5b13 | DAT_0062906c
    MOV [0x00629064],EAX                ; 004e5b18 | DAT_00629064
    JMP 0x004e59d1                      ; 004e5b1d
        ;   XREF to: 004e59d1 (UNCONDITIONAL_JUMP)  ; LAB_004e59d1
    JBE 0x004e5aee                      ; 004e5b22
        ;   XREF to: 004e5aee (CONDITIONAL_JUMP)  ; LAB_004e5aee
        ;   Label: LAB_004e5b22
    CMP EBX,0x2                         ; 004e5b24
    JZ 0x004e5b0c                       ; 004e5b27
        ;   XREF to: 004e5b0c (CONDITIONAL_JUMP)  ; LAB_004e5b0c
    JMP 0x004e59be                      ; 004e5b29
        ;   XREF to: 004e59be (UNCONDITIONAL_JUMP)  ; LAB_004e59be
    MOV EBX,0x7f80                      ; 004e5b2e
        ;   Label: LAB_004e5b2e
    XOR ECX,ECX                         ; 004e5b33
    MOV dword ptr [0x00629098],EBX      ; 004e5b35 | DAT_00629098
    MOV dword ptr [0x0062909c],ECX      ; 004e5b3b | DAT_0062909c
    MOV dword ptr [0x00629094],ECX      ; 004e5b41 | DAT_00629094
    JMP 0x004e5a03                      ; 004e5b47
        ;   XREF to: 004e5a03 (UNCONDITIONAL_JUMP)  ; LAB_004e5a03
    XOR EBP,EBP                         ; 004e5b4c
        ;   Label: LAB_004e5b4c
    MOV dword ptr [0x00629098],EBP      ; 004e5b4e | DAT_00629098
    MOV dword ptr [0x0062909c],EBP      ; 004e5b54 | DAT_0062909c
    MOV dword ptr [0x00629094],EBP      ; 004e5b5a | DAT_00629094
    JMP 0x004e5a03                      ; 004e5b60
        ;   XREF to: 004e5a03 (UNCONDITIONAL_JUMP)  ; LAB_004e5a03
    JBE 0x004e5b2e                      ; 004e5b65
        ;   XREF to: 004e5b2e (CONDITIONAL_JUMP)  ; LAB_004e5b2e
        ;   Label: LAB_004e5b65
    CMP EBX,0x2                         ; 004e5b67
    JZ 0x004e5b4c                       ; 004e5b6a
        ;   XREF to: 004e5b4c (CONDITIONAL_JUMP)  ; LAB_004e5b4c
    JMP 0x004e59f0                      ; 004e5b6c
        ;   XREF to: 004e59f0 (UNCONDITIONAL_JUMP)  ; LAB_004e59f0
    MOV ECX,0x7f80                      ; 004e5b71
        ;   Label: LAB_004e5b71
    XOR EDX,EDX                         ; 004e5b76
    MOV dword ptr [0x006290c8],ECX      ; 004e5b78 | DAT_006290c8
    MOV dword ptr [0x006290cc],EDX      ; 004e5b7e | DAT_006290cc
    MOV dword ptr [0x006290c4],EDX      ; 004e5b84 | DAT_006290c4
    JMP 0x004e5a35                      ; 004e5b8a
        ;   XREF to: 004e5a35 (UNCONDITIONAL_JUMP)  ; LAB_004e5a35
    XOR EDI,EDI                         ; 004e5b8f
        ;   Label: LAB_004e5b8f
    MOV dword ptr [0x006290c8],EDI      ; 004e5b91 | DAT_006290c8
    MOV dword ptr [0x006290cc],EDI      ; 004e5b97 | DAT_006290cc
    MOV dword ptr [0x006290c4],EDI      ; 004e5b9d | DAT_006290c4
    JMP 0x004e5a35                      ; 004e5ba3
        ;   XREF to: 004e5a35 (UNCONDITIONAL_JUMP)  ; LAB_004e5a35
    JBE 0x004e5b71                      ; 004e5ba8
        ;   XREF to: 004e5b71 (CONDITIONAL_JUMP)  ; LAB_004e5b71
        ;   Label: LAB_004e5ba8
    CMP EBX,0x2                         ; 004e5baa
    JZ 0x004e5b8f                       ; 004e5bad
        ;   XREF to: 004e5b8f (CONDITIONAL_JUMP)  ; LAB_004e5b8f
    JMP 0x004e5a22                      ; 004e5baf
        ;   XREF to: 004e5a22 (UNCONDITIONAL_JUMP)  ; LAB_004e5a22
    MOV EBX,dword ptr [ESP + 0x20]      ; 004e5bb4
        ;   Label: LAB_004e5bb4
    MOV dword ptr [EBX],0x1             ; 004e5bb8
    ADD ESP,0xc                         ; 004e5bbe
    POP EBP                             ; 004e5bc1
    POP EDI                             ; 004e5bc2
    POP ESI                             ; 004e5bc3
    POP EBX                             ; 004e5bc4
    RET                                 ; 004e5bc5

