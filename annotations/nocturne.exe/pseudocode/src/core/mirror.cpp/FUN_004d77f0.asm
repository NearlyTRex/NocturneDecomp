; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_mirror_cpp_FUN_004d77f0(float *param_1)
;
; Local Variables:
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   float FLOAT_005a0880 = 256
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d77f0
        ;   Label: core_mirror.cpp_FUN_004d77f0
    PUSH ESI                            ; 004d77f1
    PUSH EDI                            ; 004d77f2
    SUB ESP,0x58                        ; 004d77f3
    MOV ESI,dword ptr [ESP + 0x68]      ; 004d77f6
    MOV EDX,dword ptr [0x005ae704]      ; 004d77fa | DAT_005ae704
    LEA EBX,[ESP + 0x40]                ; 004d7800
    MOV EAX,ESI                         ; 004d7804
    MOV EDX,dword ptr [EDX]             ; 004d7806 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004d7808
    FMUL float ptr [0x005a0880]         ; 004d780a | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d7810
    FLD float ptr [EAX + 0x4]           ; 004d7812
    FMUL float ptr [0x005a0880]         ; 004d7815 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d781b
    FLD float ptr [EAX + 0x8]           ; 004d781e
    FMUL float ptr [0x005a0880]         ; 004d7821 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7827
    LEA EAX,[ESP + 0x40]                ; 004d782a
    PUSH EAX                            ; 004d782e
    PUSH EDX                            ; 004d782f
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d7830
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformPoint_FUN_00530a25()
    MOV EAX,[0x005ae704]                ; 004d7835 | DAT_005ae704
    LEA EBX,[ESP + 0x3c]                ; 004d783a
    ADD ESP,0x8                         ; 004d783e
    MOV EDX,dword ptr [EAX]             ; 004d7841 | DAT_01b4d738
    LEA EAX,[ESI + 0xc]                 ; 004d7843
    FLD float ptr [EAX]                 ; 004d7846
    FMUL float ptr [0x005a0880]         ; 004d7848 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d784e
    FLD float ptr [EAX + 0x4]           ; 004d7850
    FMUL float ptr [0x005a0880]         ; 004d7853 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d7859
    FLD float ptr [EAX + 0x8]           ; 004d785c
    FMUL float ptr [0x005a0880]         ; 004d785f | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d7865
    LEA EAX,[ESP + 0x34]                ; 004d7868
    PUSH EAX                            ; 004d786c
    ADD EDX,0x30                        ; 004d786d
    PUSH EDX                            ; 004d7870
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d7871
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformPoint_FUN_00530a25()
    LEA EBX,[ESP + 0x30]                ; 004d7876
    MOV EDX,dword ptr [0x005ae704]      ; 004d787a | DAT_005ae704
    ADD ESP,0x8                         ; 004d7880
    LEA EAX,[ESI + 0x18]                ; 004d7883
    MOV EDX,dword ptr [EDX]             ; 004d7886 | DAT_01b4d738
    FLD float ptr [EAX]                 ; 004d7888
    FMUL float ptr [0x005a0880]         ; 004d788a | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d7890
    FLD float ptr [EAX + 0x4]           ; 004d7892
    FMUL float ptr [0x005a0880]         ; 004d7895 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d789b
    FLD float ptr [EAX + 0x8]           ; 004d789e
    FMUL float ptr [0x005a0880]         ; 004d78a1 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d78a7
    LEA EAX,[ESP + 0x28]                ; 004d78aa
    PUSH EAX                            ; 004d78ae
    ADD EDX,0x60                        ; 004d78af
    PUSH EDX                            ; 004d78b2
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d78b3
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformPoint_FUN_00530a25()
    MOV EAX,[0x005ae704]                ; 004d78b8 | DAT_005ae704
    MOV EAX,dword ptr [EAX]             ; 004d78bd | DAT_01b4d738
    ADD ESP,0x8                         ; 004d78bf
    LEA EDX,[EAX + 0x90]                ; 004d78c2
    LEA EBX,[ESP + 0x4c]                ; 004d78c8
    LEA EAX,[ESI + 0x24]                ; 004d78cc
    FLD float ptr [EAX]                 ; 004d78cf
    FMUL float ptr [0x005a0880]         ; 004d78d1 | FLOAT_005a0880
    FISTP dword ptr [EBX]               ; 004d78d7
    FLD float ptr [EAX + 0x4]           ; 004d78d9
    FMUL float ptr [0x005a0880]         ; 004d78dc | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x4]         ; 004d78e2
    FLD float ptr [EAX + 0x8]           ; 004d78e5
    FMUL float ptr [0x005a0880]         ; 004d78e8 | FLOAT_005a0880
    FISTP dword ptr [EBX + 0x8]         ; 004d78ee
    LEA EAX,[ESP + 0x4c]                ; 004d78f1
    PUSH EAX                            ; 004d78f5
    PUSH EDX                            ; 004d78f6
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 004d78f7
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformPoint_FUN_00530a25()
    ADD ESP,0x8                         ; 004d78fc
    PUSH 0x1                            ; 004d78ff
    MOV EDX,dword ptr [0x005ae704]      ; 004d7901 | DAT_005ae704
    PUSH EDX                            ; 004d7907 | DAT_01b4d738
    XOR EBX,EBX                         ; 004d7908
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004d790a
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    MOV ECX,0x4                         ; 004d790f
    MOV EDX,0x1                         ; 004d7914
    LEA EAX,[ESP + 0x8]                 ; 004d7919
    ADD ESP,0x8                         ; 004d791d
    MOV ESI,dword ptr [0x005ae704]      ; 004d7920 | DAT_005ae704
    MOV dword ptr [ESP + 0x4],ECX       ; 004d7926
    MOV dword ptr [ESP + 0x14],EBX      ; 004d792a
    MOV dword ptr [ESP + 0x10],EBX      ; 004d792e
    MOV dword ptr [ESP + 0xc],EBX       ; 004d7932
    MOV dword ptr [ESP + 0x8],EBX       ; 004d7936
    MOV dword ptr [ESP + 0x18],EBX      ; 004d793a
    MOV dword ptr [ESP + 0x1c],EDX      ; 004d793e
    PUSH EAX                            ; 004d7942
    MOV ECX,0x2                         ; 004d7943
    MOV EBX,0x3                         ; 004d7948
    PUSH ESI                            ; 004d794d | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],ECX      ; 004d794e
    MOV dword ptr [ESP + 0x2c],EBX      ; 004d7952
    CALL engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190 ; 004d7956
        ;   XREF to: 0045f190 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190()
    ADD ESP,0x8                         ; 004d795b
    PUSH 0x1                            ; 004d795e
    MOV EDI,dword ptr [0x005ae704]      ; 004d7960 | DAT_005ae704
    PUSH EDI                            ; 004d7966 | DAT_01b4d738
    MOV EBX,EAX                         ; 004d7967
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004d7969
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0()
    ADD ESP,0x8                         ; 004d796e
    MOV EAX,EBX                         ; 004d7971
    ADD ESP,0x58                        ; 004d7973
    POP EDI                             ; 004d7976
    POP ESI                             ; 004d7977
    POP EBX                             ; 004d7978
    RET                                 ; 004d7979

