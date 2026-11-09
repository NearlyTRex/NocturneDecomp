; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042d9f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042d8e0 at 0042d9dd
;
; Referenced Globals:
;   undefined4 s_s_7headlite_raw_005b82d1+1
;   undefined4 s_s_7headlite_raw_005b82d1+2
;   undefined4 s_s_7headlite_raw_005b82d1+3
;   undefined4 s_s_7headlite_raw_005b82d1+4
;   undefined4 DAT_005b82e6
;   undefined4 DAT_005b82ee
;   undefined4 DAT_005b82f2
;   undefined4 DAT_005dd210
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2ad0
;   undefined1 DAT_007e2ad8
;   undefined1 DAT_007e2ad9
;   undefined1 DAT_007e2ada
;   undefined1 DAT_007e2adb
;   undefined4 DAT_00800000
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408bf0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d9f0
        ;   Label: core_charactr.cpp_FUN_0042d9f0
    PUSH ESI                            ; 0042d9f1
    PUSH EDI                            ; 0042d9f2
    PUSH EBP                            ; 0042d9f3
    MOV EBP,ESP                         ; 0042d9f4
    SUB ESP,0x10c                       ; 0042d9f6
    AND ESP,0xfffffff8                  ; 0042d9fc
    MOV EDX,dword ptr [0x005f2afc]      ; 0042d9ff | DAT_005f2afc
    PUSH EDX                            ; 0042da05 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0042da06
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042da0b
    TEST EAX,EAX                        ; 0042da0e
    JZ 0x0042da19                       ; 0042da10
        ;   XREF to: 0042da19 (CONDITIONAL_JUMP)  ; LAB_0042da19
    MOV ESP,EBP                         ; 0042da12
    POP EBP                             ; 0042da14
    POP EDI                             ; 0042da15
    POP ESI                             ; 0042da16
    POP EBX                             ; 0042da17
    RET                                 ; 0042da18
    MOV ESI,0x5b82d2                    ; 0042da19 | s_s_7headlite_raw_005b82d1+1
        ;   Label: LAB_0042da19
    MOV EDI,0x7e2ad8                    ; 0042da1e | DAT_007e2ad8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042da23
    MOV dword ptr [ESP + 0x18],EAX      ; 0042da27
    MOV dword ptr [ESP + 0x14],EAX      ; 0042da2b
    MOV dword ptr [ESP + 0x10],EAX      ; 0042da2f
    PUSH EDI                            ; 0042da33 | DAT_007e2ad8
    MOV AL,byte ptr [ESI]               ; 0042da34 | s_s_7headlite_raw_005b82d1+1 | s_s_7headlite_raw_005b82d1+3
        ;   Label: LAB_0042da34
    MOV byte ptr [EDI],AL               ; 0042da36 | DAT_007e2ad8 | DAT_007e2ada
    CMP AL,0x0                          ; 0042da38
    JZ 0x0042da4c                       ; 0042da3a
        ;   XREF to: 0042da4c (CONDITIONAL_JUMP)  ; LAB_0042da4c
    MOV AL,byte ptr [ESI + 0x1]         ; 0042da3c | s_s_7headlite_raw_005b82d1+2 | s_s_7headlite_raw_005b82d1+4
    ADD ESI,0x2                         ; 0042da3f
    MOV byte ptr [EDI + 0x1],AL         ; 0042da42 | DAT_007e2ad9 | DAT_007e2adb
    ADD EDI,0x2                         ; 0042da45
    CMP AL,0x0                          ; 0042da48
    JNZ 0x0042da34                      ; 0042da4a
        ;   XREF to: 0042da34 (CONDITIONAL_JUMP)  ; LAB_0042da34
    POP EDI                             ; 0042da4c
        ;   Label: LAB_0042da4c
    PUSH 0x7e2ad0                       ; 0042da4d | DAT_007e2ad0
    MOV EAX,[0x005f2afc]                ; 0042da52 | DAT_005f2afc
    PUSH EAX                            ; 0042da57 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0042da58
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0042da5d
    XOR EAX,EAX                         ; 0042da60
    MOV ESI,0x800000                    ; 0042da62 | DAT_00800000
    MOV EDX,dword ptr [0x005f2afc]      ; 0042da67 | DAT_005f2afc
        ;   Label: LAB_0042da67
    MOV EBX,dword ptr [EDX]             ; 0042da6d | DAT_01bdd7e4
    MOV dword ptr [EBX + EAX*0x1 + 0x18],ESI ; 0042da6f | DAT_00800000
    ADD EAX,0x30                        ; 0042da73
    MOV EDX,dword ptr [EDX]             ; 0042da76 | DAT_01bdd7e4
    MOV dword ptr [EDX + EAX*0x1 + -0x14],ESI ; 0042da78 | DAT_00800000
    CMP EAX,0x12c0                      ; 0042da7c
    JNZ 0x0042da67                      ; 0042da81
        ;   XREF to: 0042da67 (CONDITIONAL_JUMP)  ; LAB_0042da67
    MOV EDX,0x267                       ; 0042da83
    MOV ECX,0x3                         ; 0042da88
    MOV ESI,0x1                         ; 0042da8d
    MOV EDI,0x2                         ; 0042da92
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042da97
    XOR EBX,EBX                         ; 0042da9a
    MOV dword ptr [ESP + 0xe0],EDX      ; 0042da9c
    MOV dword ptr [ESP + 0xc],ECX       ; 0042daa3
    MOV dword ptr [ESP + 0x20],EBX      ; 0042daa7
    MOV dword ptr [ESP + 0x24],ESI      ; 0042daab
    MOV dword ptr [ESP + 0x28],EDI      ; 0042daaf
    MOV dword ptr [ESP + 0x2c],ECX      ; 0042dab3
    ADD EAX,0x30d0                      ; 0042dab7
    MOV EDX,0x28000                     ; 0042dabc
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042dac1
    ADD EAX,0xb4                        ; 0042dac8
    MOV dword ptr [ESP + 0xe4],EDX      ; 0042dacd
    MOV dword ptr [ESP + 0xc8],EAX      ; 0042dad4
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0042dadb
        ;   Label: LAB_0042dadb
    MOV EDX,EAX                         ; 0042dae2
    MOV EBX,0x5                         ; 0042dae4
    SAR EDX,0x1f                        ; 0042dae9
    IDIV EBX                            ; 0042daec
    PUSH EAX                            ; 0042daee
    MOV ECX,dword ptr [0x005f2afc]      ; 0042daef | DAT_005f2afc
    PUSH ECX                            ; 0042daf5 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042daf6
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042dafb
    XOR EBX,EBX                         ; 0042dafe
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0042db00
    MOV dword ptr [ESP + 0x104],EBX     ; 0042db07
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042db0e
    MOV EAX,[0x005f2afc]                ; 0042db15 | DAT_005f2afc
        ;   Label: LAB_0042db15
    MOV ESI,dword ptr [ESP + 0x104]     ; 0042db1a
    MOV EBX,dword ptr [EAX]             ; 0042db21 | DAT_01bdd7e4
    ADD EBX,ESI                         ; 0042db23
    MOV dword ptr [EBX + 0x20],0x0      ; 0042db25
    MOV EBX,dword ptr [EAX]             ; 0042db2c | DAT_01bdd7e4
    ADD EBX,ESI                         ; 0042db2e
    MOV ECX,dword ptr [ESP + 0xf8]      ; 0042db30
    LEA EDI,[ESP + 0xa8]                ; 0042db37
    MOV dword ptr [EBX + 0x24],0xffff   ; 0042db3e
    PUSH ECX                            ; 0042db45
    MOV EAX,dword ptr [EAX]             ; 0042db46 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042db48
    ADD EAX,ESI                         ; 0042db4b
    PUSH EBX                            ; 0042db4d
    LEA ESI,[ESP + 0x38]                ; 0042db4e
    MOV dword ptr [EAX + 0x28],0x0      ; 0042db52
    LEA EBX,[ESP + 0xb0]                ; 0042db59
    CALL core_actor.cpp_FUN_00408bf0    ; 0042db60
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x38]                ; 0042db65
    ADD ESP,0x8                         ; 0042db69
    LEA EAX,[ESP + 0x60]                ; 0042db6c
    MOVSD ES:EDI,ESI                    ; 0042db70
    MOVSD ES:EDI,ESI                    ; 0042db71
    MOVSD ES:EDI,ESI                    ; 0042db72
    CMP EAX,EBX                         ; 0042db73
    JZ 0x0042db98                       ; 0042db75
        ;   XREF to: 0042db98 (CONDITIONAL_JUMP)  ; LAB_0042db98
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042db77
    MOV dword ptr [ESP + 0x60],EAX      ; 0042db7e
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042db82
    MOV dword ptr [ESP + 0x64],EAX      ; 0042db89
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042db8d
    MOV dword ptr [ESP + 0x68],EAX      ; 0042db94
    LEA EBX,[ESP + 0x78]                ; 0042db98
        ;   Label: LAB_0042db98
    LEA EAX,[ESP + 0x60]                ; 0042db9c
    MOV ESI,dword ptr [0x005f2afc]      ; 0042dba0 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0042dba6
    FMUL float ptr [0x005dd210]         ; 0042dba8 | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042dbae
    FLD float ptr [EAX + 0x4]           ; 0042dbb0
    FMUL float ptr [0x005dd210]         ; 0042dbb3 | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042dbb9
    FLD float ptr [EAX + 0x8]           ; 0042dbbc
    FMUL float ptr [0x005dd210]         ; 0042dbbf | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042dbc5
    LEA EAX,[ESP + 0x78]                ; 0042dbc8
    PUSH EAX                            ; 0042dbcc
    MOV EAX,dword ptr [ESI]             ; 0042dbcd | DAT_01bdd7e4
    MOV ESI,dword ptr [ESP + 0x108]     ; 0042dbcf
    ADD EAX,ESI                         ; 0042dbd6
    PUSH EAX                            ; 0042dbd8
    CALL engine_special.cpp_FUN_005632a3 ; 0042dbd9
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042dbde
    MOV EDI,dword ptr [ESP + 0xf8]      ; 0042dbe1
    LEA EAX,[ESI + 0x30]                ; 0042dbe8
    ADD EDI,0xc                         ; 0042dbeb
    MOV dword ptr [ESP + 0x104],EAX     ; 0042dbee
    MOV dword ptr [ESP + 0xf8],EDI      ; 0042dbf5
    CMP EAX,0x90                        ; 0042dbfc
    JNZ 0x0042db15                      ; 0042dc01
        ;   XREF to: 0042db15 (CONDITIONAL_JUMP)  ; LAB_0042db15
    PUSH 0x267                          ; 0042dc07
    LEA EAX,[ESP + 0xc]                 ; 0042dc0c
    PUSH EAX                            ; 0042dc10
    MOV ECX,dword ptr [0x005f2afc]      ; 0042dc11 | DAT_005f2afc
    PUSH ECX                            ; 0042dc17 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0042dc18
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0042dc1d
    MOV EBX,dword ptr [ESP + 0xe8]      ; 0042dc20
    MOV ESI,dword ptr [ESP + 0xe4]      ; 0042dc27
    MOV EDI,dword ptr [ESP + 0xc8]      ; 0042dc2e
    ADD EBX,0x24                        ; 0042dc35
    ADD ESI,0xffff8000                  ; 0042dc38
    MOV dword ptr [ESP + 0xe8],EBX      ; 0042dc3e
    MOV dword ptr [ESP + 0xe4],ESI      ; 0042dc45
    CMP EBX,EDI                         ; 0042dc4c
    JNZ 0x0042dadb                      ; 0042dc4e
        ;   XREF to: 0042dadb (CONDITIONAL_JUMP)  ; LAB_0042dadb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042dc54
    ADD EAX,0x3184                      ; 0042dc57
    MOV EDX,0x28000                     ; 0042dc5c
    MOV dword ptr [ESP + 0xec],EAX      ; 0042dc61
    ADD EAX,0xb4                        ; 0042dc68
    MOV dword ptr [ESP + 0xdc],EDX      ; 0042dc6d
    MOV dword ptr [ESP + 0xcc],EAX      ; 0042dc74
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0042dc7b
        ;   Label: LAB_0042dc7b
    MOV EDX,EAX                         ; 0042dc82
    MOV EBX,0x5                         ; 0042dc84
    SAR EDX,0x1f                        ; 0042dc89
    IDIV EBX                            ; 0042dc8c
    PUSH EAX                            ; 0042dc8e
    MOV ECX,dword ptr [0x005f2afc]      ; 0042dc8f | DAT_005f2afc
    PUSH ECX                            ; 0042dc95 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042dc96
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042dc9b
    XOR EBX,EBX                         ; 0042dc9e
    MOV EAX,dword ptr [ESP + 0xec]      ; 0042dca0
    MOV dword ptr [ESP + 0x100],EBX     ; 0042dca7
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042dcae
    MOV EAX,[0x005f2afc]                ; 0042dcb5 | DAT_005f2afc
        ;   Label: LAB_0042dcb5
    MOV ESI,dword ptr [ESP + 0x100]     ; 0042dcba
    MOV EBX,dword ptr [EAX]             ; 0042dcc1 | DAT_01bdd7e4
    ADD EBX,ESI                         ; 0042dcc3
    MOV dword ptr [EBX + 0x20],0x0      ; 0042dcc5
    MOV EBX,dword ptr [EAX]             ; 0042dccc | DAT_01bdd7e4
    ADD EBX,ESI                         ; 0042dcce
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0042dcd0
    LEA EDI,[ESP + 0x3c]                ; 0042dcd7
    MOV dword ptr [EBX + 0x24],0x0      ; 0042dcdb
    PUSH ECX                            ; 0042dce2
    MOV EAX,dword ptr [EAX]             ; 0042dce3 | DAT_01bdd7e4
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042dce5
    ADD EAX,ESI                         ; 0042dce8
    PUSH EBX                            ; 0042dcea
    LEA ESI,[ESP + 0xa4]                ; 0042dceb
    MOV dword ptr [EAX + 0x28],0xffff   ; 0042dcf2
    LEA EBX,[ESP + 0x68]                ; 0042dcf9
    CALL core_actor.cpp_FUN_00408bf0    ; 0042dcfd
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xa4]                ; 0042dd02
    ADD ESP,0x8                         ; 0042dd09
    LEA EAX,[ESP + 0x3c]                ; 0042dd0c
    MOVSD ES:EDI,ESI                    ; 0042dd10
    MOVSD ES:EDI,ESI                    ; 0042dd11
    MOVSD ES:EDI,ESI                    ; 0042dd12
    CMP EBX,EAX                         ; 0042dd13
    JZ 0x0042dd2f                       ; 0042dd15
        ;   XREF to: 0042dd2f (CONDITIONAL_JUMP)  ; LAB_0042dd2f
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042dd17
    MOV dword ptr [ESP + 0x60],EAX      ; 0042dd1b
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042dd1f
    MOV dword ptr [ESP + 0x64],EAX      ; 0042dd23
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042dd27
    MOV dword ptr [ESP + 0x68],EAX      ; 0042dd2b
    LEA EBX,[ESP + 0x54]                ; 0042dd2f
        ;   Label: LAB_0042dd2f
    LEA EAX,[ESP + 0x60]                ; 0042dd33
    MOV ESI,dword ptr [0x005f2afc]      ; 0042dd37 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0042dd3d
    FMUL float ptr [0x005dd210]         ; 0042dd3f | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042dd45
    FLD float ptr [EAX + 0x4]           ; 0042dd47
    FMUL float ptr [0x005dd210]         ; 0042dd4a | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042dd50
    FLD float ptr [EAX + 0x8]           ; 0042dd53
    FMUL float ptr [0x005dd210]         ; 0042dd56 | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042dd5c
    LEA EAX,[ESP + 0x54]                ; 0042dd5f
    PUSH EAX                            ; 0042dd63
    MOV EAX,dword ptr [ESI]             ; 0042dd64 | DAT_01bdd7e4
    MOV ESI,dword ptr [ESP + 0x104]     ; 0042dd66
    ADD EAX,ESI                         ; 0042dd6d
    PUSH EAX                            ; 0042dd6f
    CALL engine_special.cpp_FUN_005632a3 ; 0042dd70
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0042dd75
    MOV EDI,dword ptr [ESP + 0xfc]      ; 0042dd78
    LEA EAX,[ESI + 0x30]                ; 0042dd7f
    ADD EDI,0xc                         ; 0042dd82
    MOV dword ptr [ESP + 0x100],EAX     ; 0042dd85
    MOV dword ptr [ESP + 0xfc],EDI      ; 0042dd8c
    CMP EAX,0x90                        ; 0042dd93
    JNZ 0x0042dcb5                      ; 0042dd98
        ;   XREF to: 0042dcb5 (CONDITIONAL_JUMP)  ; LAB_0042dcb5
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0042dd9e
    PUSH ECX                            ; 0042dda5
    LEA EAX,[ESP + 0xc]                 ; 0042dda6
    PUSH EAX                            ; 0042ddaa
    MOV EBX,dword ptr [0x005f2afc]      ; 0042ddab | DAT_005f2afc
    PUSH EBX                            ; 0042ddb1 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0042ddb2
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0042ddb7
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042ddba
    MOV EDI,dword ptr [ESP + 0xdc]      ; 0042ddc1
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0042ddc8
    ADD ESI,0x24                        ; 0042ddcf
    ADD EDI,0xffff8000                  ; 0042ddd2
    MOV dword ptr [ESP + 0xec],ESI      ; 0042ddd8
    MOV dword ptr [ESP + 0xdc],EDI      ; 0042dddf
    CMP ESI,EDX                         ; 0042dde6
    JNZ 0x0042dc7b                      ; 0042dde8
        ;   XREF to: 0042dc7b (CONDITIONAL_JUMP)  ; LAB_0042dc7b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ddee
    FLD float ptr [EAX + 0x3280]        ; 0042ddf1
    FMUL float ptr [EAX + 0x27b8]       ; 0042ddf7
    FLD float ptr [EAX + 0x327c]        ; 0042ddfd
    FMUL float ptr [EAX + 0x27b8]       ; 0042de03
    FXCH                                ; 0042de09
    FSTP float ptr [ESP + 0xd0]         ; 0042de0b
    FCOMP float ptr [ESP + 0xd0]        ; 0042de12
    FNSTSW AX                           ; 0042de19
    SAHF                                ; 0042de1b
    JBE 0x0042de2e                      ; 0042de1c
        ;   XREF to: 0042de2e (CONDITIONAL_JUMP)  ; LAB_0042de2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042de1e
    MOV EAX,dword ptr [EAX + 0x2490]    ; 0042de21
    MOV dword ptr [ESP + 0xd0],EAX      ; 0042de27
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042de2e
        ;   Label: LAB_0042de2e
    FLD float ptr [EAX + 0x327c]        ; 0042de31
    FMUL float ptr [EAX + 0x27b8]       ; 0042de37
    FLD float ptr [ESP + 0xd0]          ; 0042de3d
    FXCH                                ; 0042de44
    FSTP float ptr [ESP + 0x4]          ; 0042de46
    FCOMP float ptr [ESP + 0x4]         ; 0042de4a
    FNSTSW AX                           ; 0042de4e
    SAHF                                ; 0042de50
    JC 0x0042e1fe                       ; 0042de51
        ;   XREF to: 0042e1fe (CONDITIONAL_JUMP)  ; LAB_0042e1fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042de57
        ;   Label: LAB_0042de57
    FLD float ptr [EAX + 0x327c]        ; 0042de5a
    FMUL float ptr [EAX + 0x27b8]       ; 0042de60
    FLD float ptr [EAX + 0x3270]        ; 0042de66
    FMUL float ptr [EAX + 0x27b8]       ; 0042de6c
    MOV EDI,0x30                        ; 0042de72
    XOR ECX,ECX                         ; 0042de77
    XOR ESI,ESI                         ; 0042de79
    MOV dword ptr [ESP + 0xf0],ECX      ; 0042de7b
    FSTP float ptr [ESP]                ; 0042de82
    FSTP float ptr [ESP + 0xc4]         ; 0042de85
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0042de8c
        ;   Label: LAB_0042de8c
    ADD EAX,EAX                         ; 0042de93
    MOV dword ptr [ESP + 0x108],EAX     ; 0042de95
    FILD dword ptr [ESP + 0x108]        ; 0042de9c
    FMUL float ptr [0x005b82ee]         ; 0042dea3 | DAT_005b82ee
    FMUL float ptr [0x005b82f2]         ; 0042dea9 | DAT_005b82f2
    MOV dword ptr [ESP + 0xf4],EAX      ; 0042deaf
    FLD ST0                             ; 0042deb6
    FSIN                                ; 0042deb8
    FXCH                                ; 0042deba
    FCOS                                ; 0042debc
    FLD float ptr [ESP]                 ; 0042debe
    FXCH ST2                            ; 0042dec1
    FMUL ST2                            ; 0042dec3
    FXCH                                ; 0042dec5
    FMULP ST2                           ; 0042dec7
    LEA EBX,[ESP + 0x6c]                ; 0042dec9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0042decd
    MOV EDX,dword ptr [0x005f2afc]      ; 0042ded4 | DAT_005f2afc
    MOV dword ptr [ESP + 0x64],EAX      ; 0042deda
    LEA EAX,[ESP + 0x60]                ; 0042dede
    FSTP float ptr [ESP + 0x60]         ; 0042dee2
    FSTP float ptr [ESP + 0x68]         ; 0042dee6
    FLD float ptr [EAX]                 ; 0042deea
    FMUL float ptr [0x005dd210]         ; 0042deec | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042def2
    FLD float ptr [EAX + 0x4]           ; 0042def4
    FMUL float ptr [0x005dd210]         ; 0042def7 | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042defd
    FLD float ptr [EAX + 0x8]           ; 0042df00
    FMUL float ptr [0x005dd210]         ; 0042df03 | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042df09
    LEA EAX,[ESP + 0x6c]                ; 0042df0c
    PUSH EAX                            ; 0042df10
    MOV EAX,dword ptr [EDX]             ; 0042df11 | DAT_01bdd7e4
    ADD EAX,ESI                         ; 0042df13
    PUSH EAX                            ; 0042df15
    CALL engine_special.cpp_FUN_005632a3 ; 0042df16
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EDX,dword ptr [0x005f2afc]      ; 0042df1b | DAT_005f2afc
    MOV EAX,dword ptr [EDX]             ; 0042df21 | DAT_01bdd7e4
    MOV dword ptr [ESI + EAX*0x1 + 0x20],0xffff ; 0042df23
    MOV EAX,dword ptr [EDX]             ; 0042df2b | DAT_01bdd7e4
    MOV dword ptr [ESI + EAX*0x1 + 0x24],0x0 ; 0042df2d
    MOV EAX,dword ptr [EDX]             ; 0042df35 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0042df37
    MOV dword ptr [ESI + EAX*0x1 + 0x28],0x0 ; 0042df3a
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042df42
    MOV dword ptr [ESP + 0x64],EAX      ; 0042df49
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0042df4d
    INC EAX                             ; 0042df54
    LEA EBX,[ESP + 0x84]                ; 0042df55
    MOV dword ptr [ESP + 0xd4],EAX      ; 0042df5c
    LEA EAX,[ESP + 0x60]                ; 0042df63
    FLD float ptr [EAX]                 ; 0042df67
    FMUL float ptr [0x005dd210]         ; 0042df69 | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042df6f
    FLD float ptr [EAX + 0x4]           ; 0042df71
    FMUL float ptr [0x005dd210]         ; 0042df74 | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042df7a
    FLD float ptr [EAX + 0x8]           ; 0042df7d
    FMUL float ptr [0x005dd210]         ; 0042df80 | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042df86
    LEA EAX,[ESP + 0x84]                ; 0042df89
    PUSH EAX                            ; 0042df90
    MOV EAX,dword ptr [EDX]             ; 0042df91 | DAT_01bdd7e4
    ADD EAX,EDI                         ; 0042df93
    PUSH EAX                            ; 0042df95
    CALL engine_special.cpp_FUN_005632a3 ; 0042df96
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0042df9b | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0042dfa0 | DAT_01bdd7e4
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 0042dfa2
    MOV EDX,dword ptr [EAX]             ; 0042dfaa | DAT_01bdd7e4
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 0042dfac
    ADD ESP,0x8                         ; 0042dfb4
    MOV EDX,dword ptr [EAX]             ; 0042dfb7 | DAT_01bdd7e4
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0042dfb9
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 0042dfc0
    TEST EBX,EBX                        ; 0042dfc8
    JLE 0x0042e02e                      ; 0042dfca
        ;   XREF to: 0042e02e (CONDITIONAL_JUMP)  ; LAB_0042e02e
    MOV dword ptr [ESP + 0xc],0x4       ; 0042dfcc
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0042dfd4
    SUB EDX,0x2                         ; 0042dfdb
    MOV dword ptr [ESP + 0x20],EDX      ; 0042dfde
    MOV EDX,dword ptr [ESP + 0xf4]      ; 0042dfe2
    DEC EDX                             ; 0042dfe9
    MOV dword ptr [ESP + 0x24],EDX      ; 0042dfea
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0042dfee
    PUSH 0x4000                         ; 0042dff5
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042dffa
    MOV EDX,dword ptr [ESP + 0xf8]      ; 0042dffe
    PUSH EAX                            ; 0042e005 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x34],EDX      ; 0042e006
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042e00a
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042e00f
    MOV ECX,dword ptr [ESP + 0xe0]      ; 0042e012
    PUSH ECX                            ; 0042e019
    LEA EAX,[ESP + 0xc]                 ; 0042e01a
    PUSH EAX                            ; 0042e01e
    MOV EBX,dword ptr [0x005f2afc]      ; 0042e01f | DAT_005f2afc
    PUSH EBX                            ; 0042e025 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0042e026
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0042e02b
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0042e02e
        ;   Label: LAB_0042e02e
    ADD ESI,0x60                        ; 0042e035
    INC EAX                             ; 0042e038
    ADD EDI,0x60                        ; 0042e039
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042e03c
    CMP EAX,0x18                        ; 0042e043
    JLE 0x0042de8c                      ; 0042e046
        ;   XREF to: 0042de8c (CONDITIONAL_JUMP)  ; LAB_0042de8c
    LEA EBX,[ESP + 0x90]                ; 0042e04c
    MOV EAX,0x2cfd900                   ; 0042e053
    MOV EDX,dword ptr [0x005f2afc]      ; 0042e058 | DAT_005f2afc
    FLD float ptr [EAX]                 ; 0042e05e | DAT_02cfd900
    FMUL float ptr [0x005dd210]         ; 0042e060 | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042e066
    FLD float ptr [EAX + 0x4]           ; 0042e068 | DAT_02cfd904
    FMUL float ptr [0x005dd210]         ; 0042e06b | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042e071
    FLD float ptr [EAX + 0x8]           ; 0042e074 | DAT_02cfd908
    FMUL float ptr [0x005dd210]         ; 0042e077 | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042e07d
    LEA EAX,[ESP + 0x90]                ; 0042e080
    PUSH EAX                            ; 0042e087
    MOV EAX,dword ptr [EDX]             ; 0042e088 | DAT_01bdd7e4
    PUSH EAX                            ; 0042e08a
    CALL engine_special.cpp_FUN_005632a3 ; 0042e08b
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0042e090 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0042e095 | DAT_01bdd7e4
    MOV dword ptr [EDX + 0x20],0xffff   ; 0042e097
    MOV EDX,dword ptr [EAX]             ; 0042e09e | DAT_01bdd7e4
    XOR ESI,ESI                         ; 0042e0a0
    MOV dword ptr [EDX + 0x24],0x0      ; 0042e0a2
    ADD ESP,0x8                         ; 0042e0a9
    MOV EAX,dword ptr [EAX]             ; 0042e0ac | DAT_01bdd7e4
    MOV EDI,0x30                        ; 0042e0ae
    MOV dword ptr [ESP + 0xd8],ESI      ; 0042e0b3
    MOV dword ptr [EAX + 0x28],0x0      ; 0042e0ba
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042e0c1
        ;   Label: LAB_0042e0c1
    MOV dword ptr [ESP + 0x108],EAX     ; 0042e0c8
    FILD dword ptr [ESP + 0x108]        ; 0042e0cf
    FMUL float ptr [0x005b82ee]         ; 0042e0d6 | DAT_005b82ee
    FMUL float ptr [0x005b82f2]         ; 0042e0dc | DAT_005b82f2
    FLD ST0                             ; 0042e0e2
    FSIN                                ; 0042e0e4
    FXCH                                ; 0042e0e6
    FCOS                                ; 0042e0e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042e0ea
    FLD float ptr [EAX + 0x326c]        ; 0042e0ed
    FMULP ST2                           ; 0042e0f3
    FLD float ptr [EAX + 0x27b8]        ; 0042e0f5
    FMULP ST2                           ; 0042e0fb
    FXCH                                ; 0042e0fd
    FSTP float ptr [ESP + 0x60]         ; 0042e0ff
    FMUL float ptr [EAX + 0x326c]       ; 0042e103
    FMUL float ptr [EAX + 0x27b8]       ; 0042e109
    MOV EDX,dword ptr [0x005f2afc]      ; 0042e10f | DAT_005f2afc
    XOR EBX,EBX                         ; 0042e115
    LEA EAX,[ESP + 0x60]                ; 0042e117
    MOV dword ptr [ESP + 0x64],EBX      ; 0042e11b
    LEA EBX,[ESP + 0x48]                ; 0042e11f
    FSTP float ptr [ESP + 0x68]         ; 0042e123
    FLD float ptr [EAX]                 ; 0042e127
    FMUL float ptr [0x005dd210]         ; 0042e129 | DAT_005dd210
    FISTP dword ptr [EBX]               ; 0042e12f
    FLD float ptr [EAX + 0x4]           ; 0042e131
    FMUL float ptr [0x005dd210]         ; 0042e134 | DAT_005dd210
    FISTP dword ptr [EBX + 0x4]         ; 0042e13a
    FLD float ptr [EAX + 0x8]           ; 0042e13d
    FMUL float ptr [0x005dd210]         ; 0042e140 | DAT_005dd210
    FISTP dword ptr [EBX + 0x8]         ; 0042e146
    LEA EAX,[ESP + 0x48]                ; 0042e149
    PUSH EAX                            ; 0042e14d
    MOV EAX,dword ptr [EDX]             ; 0042e14e | DAT_01bdd7e4
    ADD EAX,EDI                         ; 0042e150
    PUSH EAX                            ; 0042e152
    CALL engine_special.cpp_FUN_005632a3 ; 0042e153
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x005f2afc]                ; 0042e158 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0042e15d | DAT_01bdd7e4
    MOV dword ptr [EDX + EDI*0x1 + 0x20],0xffff ; 0042e15f
    MOV EDX,dword ptr [EAX]             ; 0042e167 | DAT_01bdd7e4
    MOV dword ptr [EDX + EDI*0x1 + 0x24],0x0 ; 0042e169
    MOV EDX,dword ptr [EAX]             ; 0042e171 | DAT_01bdd7e4
    ADD ESP,0x8                         ; 0042e173
    MOV dword ptr [EDX + EDI*0x1 + 0x28],0x0 ; 0042e176
    TEST ESI,ESI                        ; 0042e17e
    JLE 0x0042e1c5                      ; 0042e180
        ;   XREF to: 0042e1c5 (CONDITIONAL_JUMP)  ; LAB_0042e1c5
    MOV EDX,0x3                         ; 0042e182
    PUSH 0x4000                         ; 0042e187
    XOR ECX,ECX                         ; 0042e18c
    MOV dword ptr [ESP + 0x10],EDX      ; 0042e18e
    MOV dword ptr [ESP + 0x24],ECX      ; 0042e192
    LEA EDX,[ESI + -0x1]                ; 0042e196
    PUSH EAX                            ; 0042e199 | DAT_01bdd7e4
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042e19a
    MOV dword ptr [ESP + 0x30],ESI      ; 0042e19e
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042e1a2
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042e1a7
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0042e1aa
    PUSH EBX                            ; 0042e1b1
    LEA EAX,[ESP + 0xc]                 ; 0042e1b2
    PUSH EAX                            ; 0042e1b6
    MOV EAX,[0x005f2afc]                ; 0042e1b7 | DAT_005f2afc
    PUSH EAX                            ; 0042e1bc | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850 ; 0042e1bd
        ;   XREF to: 0046b850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedDirect_FUN_0046b850(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, int render_flags)
    ADD ESP,0xc                         ; 0042e1c2
    MOV EDX,dword ptr [ESP + 0xd8]      ; 0042e1c5
        ;   Label: LAB_0042e1c5
    INC ESI                             ; 0042e1cc
    ADD EDX,0x2                         ; 0042e1cd
    ADD EDI,0x30                        ; 0042e1d0
    MOV dword ptr [ESP + 0xd8],EDX      ; 0042e1d3
    CMP ESI,0x18                        ; 0042e1da
    JLE 0x0042e0c1                      ; 0042e1dd
        ;   XREF to: 0042e0c1 (CONDITIONAL_JUMP)  ; LAB_0042e0c1
    PUSH 0xffff                         ; 0042e1e3
    MOV ECX,dword ptr [0x005f2afc]      ; 0042e1e8 | DAT_005f2afc
    PUSH ECX                            ; 0042e1ee | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0 ; 0042e1ef
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 0042e1f4
    MOV ESP,EBP                         ; 0042e1f7
    POP EBP                             ; 0042e1f9
    POP EDI                             ; 0042e1fa
    POP ESI                             ; 0042e1fb
    POP EBX                             ; 0042e1fc
    RET                                 ; 0042e1fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042e1fe
        ;   Label: LAB_0042e1fe
    FLD float ptr [ESP + 0x4]           ; 0042e201
    FLD float ptr [EAX + 0x27b8]        ; 0042e205
    FMUL double ptr [0x005b82e6]        ; 0042e20b | DAT_005b82e6
    FADDP                               ; 0042e211
    FSTP float ptr [ESP + 0xd0]         ; 0042e213
    JMP 0x0042de57                      ; 0042e21a
        ;   XREF to: 0042de57 (UNCONDITIONAL_JUMP)  ; LAB_0042de57

