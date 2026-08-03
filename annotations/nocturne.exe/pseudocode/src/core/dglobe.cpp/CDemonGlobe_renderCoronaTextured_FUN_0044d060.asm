; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060(CDemonGlobe *this_ptr)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; Referenced Globals:
;   undefined4 DAT_0057c391
;   undefined4 DAT_0059bff0
;   undefined4 DAT_005ad57c
;   undefined4 DAT_005ad594
;   undefined4 DAT_005ad598
;   undefined4 DAT_005ad59c
;   undefined4 DAT_005ad5a0
;   undefined4 DAT_005ad5a4
;   undefined4 DAT_005ad5a8
;   undefined4 DAT_005ad87c
;   undefined4 DAT_005ad880
;   undefined4 DAT_005ad884
;   undefined4 DAT_005ad888
;   undefined4 DAT_005ad88c
;   undefined4 DAT_005ad890
;   ... and 14 more
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d060
        ;   Label: core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0044d060
    PUSH ESI                            ; 0044d061
    PUSH EDI                            ; 0044d062
    PUSH EBP                            ; 0044d063
    SUB ESP,0x40                        ; 0044d064
    MOV EBP,dword ptr [ESP + 0x54]      ; 0044d067
    LEA EAX,[EBP + 0x24]                ; 0044d06b
    PUSH EAX                            ; 0044d06e
    MOV EDX,dword ptr [0x005ae700]      ; 0044d06f | PTR_DAT_005ae700
    PUSH EDX                            ; 0044d075 | DAT_01b4d738
    XOR ESI,ESI                         ; 0044d076
    XOR EDI,EDI                         ; 0044d078
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 0044d07a
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044d07f
    FILD dword ptr [EDI + 0x5ad594]     ; 0044d082 | DAT_005ad594 | DAT_005ad5a0
        ;   Label: LAB_0044d082
    FMUL double ptr [0x0057c391]        ; 0044d088 | DAT_0057c391
    FMUL float ptr [EBP + 0x30]         ; 0044d08e
    FILD dword ptr [EDI + 0x5ad598]     ; 0044d091 | DAT_005ad598 | DAT_005ad5a4
    FMUL double ptr [0x0057c391]        ; 0044d097 | DAT_0057c391
    FXCH                                ; 0044d09d
    FSTP float ptr [ESP + 0x28]         ; 0044d09f
    FMUL float ptr [EBP + 0x30]         ; 0044d0a3
    FILD dword ptr [EDI + 0x5ad59c]     ; 0044d0a6 | DAT_005ad59c | DAT_005ad5a8
    FMUL double ptr [0x0057c391]        ; 0044d0ac | DAT_0057c391
    FXCH                                ; 0044d0b2
    FSTP float ptr [ESP + 0x2c]         ; 0044d0b4
    FMUL float ptr [EBP + 0x30]         ; 0044d0b8
    LEA EBX,[ESP + 0x34]                ; 0044d0bb
    LEA EAX,[ESP + 0x28]                ; 0044d0bf
    MOV EDX,dword ptr [0x005ae700]      ; 0044d0c3 | PTR_DAT_005ae700
    FSTP float ptr [ESP + 0x30]         ; 0044d0c9
    FLD float ptr [EAX]                 ; 0044d0cd
    FMUL float ptr [0x0059bff0]         ; 0044d0cf | DAT_0059bff0
    FISTP dword ptr [EBX]               ; 0044d0d5
    FLD float ptr [EAX + 0x4]           ; 0044d0d7
    FMUL float ptr [0x0059bff0]         ; 0044d0da | DAT_0059bff0
    FISTP dword ptr [EBX + 0x4]         ; 0044d0e0
    FLD float ptr [EAX + 0x8]           ; 0044d0e3
    FMUL float ptr [0x0059bff0]         ; 0044d0e6 | DAT_0059bff0
    FISTP dword ptr [EBX + 0x8]         ; 0044d0ec
    LEA EAX,[ESP + 0x34]                ; 0044d0ef
    PUSH EAX                            ; 0044d0f3
    MOV EAX,dword ptr [EDX]             ; 0044d0f4 | DAT_01b4d738
    ADD EAX,ESI                         ; 0044d0f6
    PUSH EAX                            ; 0044d0f8
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 0044d0f9
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005ae700]                ; 0044d0fe | PTR_DAT_005ae700
    MOV EBX,dword ptr [EAX]             ; 0044d103 | DAT_01b4d738
    MOV dword ptr [ESI + EBX*0x1 + 0x18],0x800000 ; 0044d105
    MOV EBX,dword ptr [EAX]             ; 0044d10d | DAT_01b4d738
    MOV dword ptr [ESI + EBX*0x1 + 0x1c],0x800000 ; 0044d10f
    MOV EBX,dword ptr [EAX]             ; 0044d117 | DAT_01b4d738
    MOV dword ptr [ESI + EBX*0x1 + 0x2c],0x8000 ; 0044d119
    MOV EDX,dword ptr [EAX]             ; 0044d121 | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x20],0xffff ; 0044d123
    MOV EDX,dword ptr [EAX]             ; 0044d12b | DAT_01b4d738
    MOV dword ptr [EDX + ESI*0x1 + 0x24],0xffff ; 0044d12d
    ADD ESI,0x30                        ; 0044d135
    MOV EAX,dword ptr [EAX]             ; 0044d138 | DAT_01b4d738
    ADD EDI,0xc                         ; 0044d13a
    ADD ESP,0x8                         ; 0044d13d
    MOV dword ptr [ESI + EAX*0x1 + -0x8],0xffff ; 0044d140
    CMP EDI,0x2e8                       ; 0044d148
    JNZ 0x0044d082                      ; 0044d14e
        ;   XREF to: 0044d082 (CONDITIONAL_JUMP)  ; LAB_0044d082
    PUSH 0x5ad57c                       ; 0044d154 | DAT_005ad57c
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 0044d159
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    XOR EBX,EBX                         ; 0044d15e
    ADD ESP,0x4                         ; 0044d160
    MOV EAX,dword ptr [EBX + 0x5ad87c]  ; 0044d163 | DAT_005ad87c | DAT_005ad8a0
        ;   Label: LAB_0044d163
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d169
    MOV EAX,dword ptr [EBX + 0x5ad880]  ; 0044d16d | DAT_005ad880 | DAT_005ad8a4
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d173
    MOV EAX,dword ptr [EBX + 0x5ad884]  ; 0044d177 | DAT_005ad884 | DAT_005ad8a8
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d17d
    MOV EAX,dword ptr [EBX + 0x5ad888]  ; 0044d181 | DAT_005ad888 | DAT_005ad8ac
    FILD dword ptr [EBX + 0x5ad88c]     ; 0044d187 | DAT_005ad88c | DAT_005ad8b0
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d18d
    MOV EAX,dword ptr [EBX + 0x5ad890]  ; 0044d191 | DAT_005ad890 | DAT_005ad8b4
    FMUL float ptr [EBP + 0x30]         ; 0044d197
    MOV dword ptr [ESP + 0x18],EAX      ; 0044d19a
    MOV EAX,dword ptr [EBX + 0x5ad894]  ; 0044d19e | DAT_005ad894 | DAT_005ad8b8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044d1a4
    MOV EAX,dword ptr [EBX + 0x5ad898]  ; 0044d1a8 | DAT_005ad898 | DAT_005ad8bc
    MOV dword ptr [ESP + 0x20],EAX      ; 0044d1ae
    MOV EAX,dword ptr [EBX + 0x5ad89c]  ; 0044d1b2 | DAT_005ad89c | DAT_005ad8c0
    MOV ECX,dword ptr [0x005ae700]      ; 0044d1b8 | PTR_DAT_005ae700
    MOV dword ptr [ESP + 0x24],EAX      ; 0044d1be
    MOV EAX,ESP                         ; 0044d1c2
    ADD EBX,0x24                        ; 0044d1c4
    PUSH EAX                            ; 0044d1c7
    CALL crt_math.c_round_FUN_00563a30  ; 0044d1c8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH ECX                            ; 0044d1cd | DAT_01b4d738
    FISTP dword ptr [ESP + 0x1c]        ; 0044d1ce
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080 ; 0044d1d2
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0044d1d7
    CMP EBX,0xbd0                       ; 0044d1da
    JNZ 0x0044d163                      ; 0044d1e0
        ;   XREF to: 0044d163 (CONDITIONAL_JUMP)  ; LAB_0044d163
    ADD ESP,0x40                        ; 0044d1e2
    POP EBP                             ; 0044d1e5
    POP EDI                             ; 0044d1e6
    POP ESI                             ; 0044d1e7
    POP EBX                             ; 0044d1e8
    RET                                 ; 0044d1e9

