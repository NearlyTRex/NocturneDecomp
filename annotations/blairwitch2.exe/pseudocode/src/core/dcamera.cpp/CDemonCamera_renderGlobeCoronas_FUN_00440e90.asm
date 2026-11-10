; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90(CDemonCamera *this_ptr,CDemonGlobe *globe,int force_render)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
; int              Stack[0xc]:4   force_render
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
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
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f44c
;
; Referenced Globals:
;   undefined4 DAT_0060a008
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_0083c7d4
;   undefined4 DAT_0083c7d8
;   undefined4 DAT_0083c7dc
;   undefined4 DAT_0083c7e0
;   undefined4 DAT_0083d6d4
;   undefined4 DAT_0083d6d8
;   undefined4 DAT_0083d6dc
;   undefined4 DAT_0083d6e0
;   undefined4 DAT_0083e5d4
;   undefined4 DAT_0126e7a8
;   undefined4 DAT_01308800
;   undefined4 DAT_01510718
;   undefined4 DAT_0151071c
;   ... and 5 more
;
; Called Functions:
;   core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90
;   core_dcamera.cpp_FUN_0043cbe0
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440e90
        ;   Label: core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00440e90
    PUSH ESI                            ; 00440e91
    PUSH EDI                            ; 00440e92
    PUSH EBP                            ; 00440e93
    SUB ESP,0x84                        ; 00440e94
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00440e9a
    MOV EAX,[0x00616494]                ; 00440ea1 | g_CGamePtr
    CMP dword ptr [EAX + 0xc],0x0       ; 00440ea6 | g_CGameInstance.field3_0xc
    JNZ 0x00440ec5                      ; 00440eaa
        ;   XREF to: 00440ec5 (CONDITIONAL_JUMP)  ; LAB_00440ec5
    TEST EBX,EBX                        ; 00440eac
    JNZ 0x00441034                      ; 00440eae
        ;   XREF to: 00441034 (CONDITIONAL_JUMP)  ; LAB_00441034
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00440eb4
    CMP dword ptr [EAX + 0x20],0x0      ; 00440ebb
    JZ 0x00441034                       ; 00440ebf
        ;   XREF to: 00441034 (CONDITIONAL_JUMP)  ; LAB_00441034
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00440ec5
        ;   Label: LAB_00440ec5
    PUSH EAX                            ; 00440ecc
    MOV EDI,dword ptr [ESP + 0x9c]      ; 00440ecd
    PUSH EDI                            ; 00440ed4
    LEA ESI,[ESP + 0x8]                 ; 00440ed5
    MOV [0x01510718],EAX                ; 00440ed9 | DAT_01510718
    CALL core_dcamera.cpp_FUN_0043cbe0  ; 00440ede
        ;   XREF to: 0043cbe0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043cbe0()
    LEA ESI,[ESP + 0x8]                 ; 00440ee3
    ADD ESP,0x8                         ; 00440ee7
    MOV EDI,0x1510720                   ; 00440eea
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00440eef
    MOVSD ES:EDI,ESI                    ; 00440ef6 | DAT_01510720
    MOVSD ES:EDI,ESI                    ; 00440ef7 | DAT_01510724
    MOVSD ES:EDI,ESI                    ; 00440ef8 | DAT_01510728
    MOV EBP,dword ptr [EAX + 0x20]      ; 00440ef9
    TEST EBP,EBP                        ; 00440efc
    JZ 0x0044104c                       ; 00440efe
        ;   XREF to: 0044104c (CONDITIONAL_JUMP)  ; LAB_0044104c
    MOV EDX,dword ptr [0x01510720]      ; 00440f04 | DAT_01510720
    TEST EDX,EDX                        ; 00440f0a
    JZ 0x00441041                       ; 00440f0c
        ;   XREF to: 00441041 (CONDITIONAL_JUMP)  ; LAB_00441041
    MOV ESI,0x1                         ; 00440f12
    MOV EAX,[0x01308800]                ; 00440f17 | DAT_01308800
    MOV EBP,dword ptr [0x01510724]      ; 00440f1c | DAT_01510724
    ADD EAX,0x10                        ; 00440f22
    MOV EDI,EDX                         ; 00440f25
    MOV CL,AL                           ; 00440f27
    MOV dword ptr [0x0151071c],ESI      ; 00440f29 | DAT_0151071c
    SAR EDI,CL                          ; 00440f2f
    SAR EBP,CL                          ; 00440f31
    MOV dword ptr [0x01510720],EDI      ; 00440f33 | DAT_01510720
    MOV dword ptr [0x01510724],EBP      ; 00440f39 | DAT_01510724
    MOV EAX,dword ptr [ESP + 0x98]      ; 00440f3f
        ;   Label: LAB_00440f3f
    MOV ECX,dword ptr [EAX + 0x154]     ; 00440f46
    XOR EDX,EDX                         ; 00440f4c
    TEST ECX,ECX                        ; 00440f4e
    JLE 0x00440f90                      ; 00440f50
        ;   XREF to: 00440f90 (CONDITIONAL_JUMP)  ; LAB_00440f90
    XOR EAX,EAX                         ; 00440f52
    MOV ECX,dword ptr [ESP + 0x98]      ; 00440f54
        ;   Label: LAB_00440f54
    MOV ECX,dword ptr [ECX + 0x144]     ; 00440f5b
    XOR ESI,ESI                         ; 00440f61
    MOV dword ptr [EAX + 0x14c3550],ECX ; 00440f63
    MOV ECX,dword ptr [ESP + 0x98]      ; 00440f69
    MOV dword ptr [EAX + 0x14c3910],ESI ; 00440f70
    INC EDX                             ; 00440f76
    MOV EDI,dword ptr [ECX + 0x154]     ; 00440f77
    ADD EAX,0x4                         ; 00440f7d
    CMP EDX,EDI                         ; 00440f80
    JL 0x00440f54                       ; 00440f82
        ;   XREF to: 00440f54 (CONDITIONAL_JUMP)  ; LAB_00440f54
    LEA EAX,[EAX]                       ; 00440f84
    LEA EDX,[EDX]                       ; 00440f8a
    TEST EBX,EBX                        ; 00440f90
        ;   Label: LAB_00440f90
    JNZ 0x00441076                      ; 00440f92
        ;   XREF to: 00441076 (CONDITIONAL_JUMP)  ; LAB_00441076
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00440f98
    CMP dword ptr [EAX + 0x20],0x0      ; 00440f9f
    JZ 0x00441076                       ; 00440fa3
        ;   XREF to: 00441076 (CONDITIONAL_JUMP)  ; LAB_00441076
    MOV dword ptr [0x0060a008],0xffffffff ; 00440fa9 | DAT_0060a008
    MOV EAX,dword ptr [ESP + 0x9c]      ; 00440fb3
    CMP dword ptr [EAX + 0x20],0x2      ; 00440fba
    JNZ 0x00441076                      ; 00440fbe
        ;   XREF to: 00441076 (CONDITIONAL_JUMP)  ; LAB_00441076
    MOV ECX,dword ptr [0x0126e7a8]      ; 00440fc4 | DAT_0126e7a8
    TEST ECX,ECX                        ; 00440fca
    JBE 0x00441060                      ; 00440fcc
        ;   XREF to: 00441060 (CONDITIONAL_JUMP)  ; LAB_00441060
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00440fd2
    XOR EAX,EAX                         ; 00440fd9
    IMUL EDX,ECX,0x13384                ; 00440fdb
    CMP ESI,dword ptr [EAX + 0x126e7ac] ; 00440fe1
        ;   Label: LAB_00440fe1
    JNZ 0x00441057                      ; 00440fe7
        ;   XREF to: 00441057 (CONDITIONAL_JUMP)  ; LAB_00441057
    MOV EDI,0x126e7ac                   ; 00440fed
    ADD EDI,EAX                         ; 00440ff2
    MOV EAX,dword ptr [ESP + 0x98]      ; 00440ff4
    MOV EBP,dword ptr [EAX + 0x154]     ; 00440ffb
    XOR ESI,ESI                         ; 00441001
    TEST EBP,EBP                        ; 00441003
    JLE 0x00441034                      ; 00441005
        ;   XREF to: 00441034 (CONDITIONAL_JUMP)  ; LAB_00441034
    MOV EBX,EDI                         ; 00441007
    MOV EDX,dword ptr [ESP + 0x98]      ; 00441009
        ;   Label: LAB_00441009
    MOV EAX,dword ptr [EBX + 0x4]       ; 00441010
    CMP EAX,dword ptr [EDX + 0x144]     ; 00441013
    JNZ 0x0044112e                      ; 00441019
        ;   XREF to: 0044112e (CONDITIONAL_JUMP)  ; LAB_0044112e
    MOV EAX,dword ptr [ESP + 0x98]      ; 0044101f
        ;   Label: LAB_0044101f
    INC ESI                             ; 00441026
    MOV EDX,dword ptr [EAX + 0x154]     ; 00441027
    ADD EBX,0x4                         ; 0044102d
    CMP ESI,EDX                         ; 00441030
    JL 0x00441009                       ; 00441032
        ;   XREF to: 00441009 (CONDITIONAL_JUMP)  ; LAB_00441009
    ADD ESP,0x84                        ; 00441034
        ;   Label: LAB_00441034
    POP EBP                             ; 0044103a
    POP EDI                             ; 0044103b
    POP ESI                             ; 0044103c
    POP EBX                             ; 0044103d
    MOV EAX,EAX                         ; 0044103e
    RET                                 ; 00441040
    MOV dword ptr [0x0151071c],EDX      ; 00441041 | DAT_0151071c
        ;   Label: LAB_00441041
    JMP 0x00440f3f                      ; 00441047
        ;   XREF to: 00440f3f (UNCONDITIONAL_JUMP)  ; LAB_00440f3f
    MOV dword ptr [0x0151071c],EBP      ; 0044104c | DAT_0151071c
        ;   Label: LAB_0044104c
    JMP 0x00440f3f                      ; 00441052
        ;   XREF to: 00440f3f (UNCONDITIONAL_JUMP)  ; LAB_00440f3f
    ADD EAX,0x13384                     ; 00441057
        ;   Label: LAB_00441057
    CMP EAX,EDX                         ; 0044105c
    JL 0x00440fe1                       ; 0044105e
        ;   XREF to: 00440fe1 (CONDITIONAL_JUMP)  ; LAB_00440fe1
    MOV EAX,[0x0126e7a8]                ; 00441060 | DAT_0126e7a8
        ;   Label: LAB_00441060
    CMP EAX,0x8                         ; 00441065
    JC 0x00441145                       ; 00441068
        ;   XREF to: 00441145 (CONDITIONAL_JUMP)  ; LAB_00441145
    XOR EDX,EDX                         ; 0044106e
    MOV dword ptr [0x0151071c],EDX      ; 00441070 | DAT_0151071c
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00441076
        ;   Label: LAB_00441076
    PUSH ECX                            ; 0044107d
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 ; 0044107e
        ;   XREF to: 00448900 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00441083
    MOV EAX,dword ptr [ESP + 0x98]      ; 00441086
    XOR EBX,EBX                         ; 0044108d
    MOV ESI,dword ptr [EAX + 0x154]     ; 0044108f
    MOV dword ptr [ESP + 0x30],EBX      ; 00441095
    TEST ESI,ESI                        ; 00441099
    JLE 0x00441034                      ; 0044109b
        ;   XREF to: 00441034 (CONDITIONAL_JUMP)  ; LAB_00441034
    MOV EBP,0x14c3cd0                   ; 0044109d
    MOV EAX,0xaf5218                    ; 004410a2
    MOV EDX,0x83c7d4                    ; 004410a7 | DAT_0083c7d4
    MOV dword ptr [ESP + 0x3c],EBX      ; 004410ac
    MOV dword ptr [ESP + 0x1c],EBP      ; 004410b0
    MOV dword ptr [ESP + 0x18],EAX      ; 004410b4
    MOV dword ptr [ESP + 0x20],EDX      ; 004410b8 | DAT_0083c7d4
    MOV EDX,dword ptr [ESP + 0x98]      ; 004410bc
        ;   Label: LAB_004410bc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004410c3
    MOV ECX,dword ptr [EDX + 0x144]     ; 004410c7
    CMP ECX,dword ptr [EAX + 0x14c3550] ; 004410cd
    JNZ 0x00441576                      ; 004410d3
        ;   XREF to: 00441576 (CONDITIONAL_JUMP)  ; LAB_00441576
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004410d9
        ;   Label: LAB_004410d9
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004410dd
    MOV ESI,dword ptr [ESP + 0x18]      ; 004410e1
    MOV EDI,dword ptr [ESP + 0x20]      ; 004410e5
    MOV EBP,dword ptr [ESP + 0x30]      ; 004410e9
    MOV EDX,dword ptr [ESP + 0x98]      ; 004410ed
    ADD ECX,0x4                         ; 004410f4
    ADD EBX,0x500                       ; 004410f7
    ADD ESI,0x140                       ; 004410fd
    ADD EDI,0xf00                       ; 00441103
    INC EBP                             ; 00441109
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044110a
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044110e
    MOV dword ptr [ESP + 0x18],ESI      ; 00441112
    MOV dword ptr [ESP + 0x20],EDI      ; 00441116 | DAT_0083d6d4 | DAT_0083e5d4
    MOV ECX,dword ptr [EDX + 0x154]     ; 0044111a
    MOV dword ptr [ESP + 0x30],EBP      ; 00441120
    CMP EBP,ECX                         ; 00441124
    JGE 0x00441034                      ; 00441126
        ;   XREF to: 00441034 (CONDITIONAL_JUMP)  ; LAB_00441034
    JMP 0x004410bc                      ; 0044112c
        ;   XREF to: 004410bc (UNCONDITIONAL_JUMP)  ; LAB_004410bc
    PUSH EDI                            ; 0044112e
        ;   Label: LAB_0044112e
    MOV EBP,dword ptr [EBX + 0x3c4]     ; 0044112f
    PUSH EBP                            ; 00441135
    PUSH EAX                            ; 00441136
    PUSH ESI                            ; 00441137
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90 ; 00441138
        ;   XREF to: 00440d90 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90()
    ADD ESP,0x10                        ; 0044113d
    JMP 0x0044101f                      ; 00441140
        ;   XREF to: 0044101f (UNCONDITIONAL_JUMP)  ; LAB_0044101f
    IMUL EAX,EAX,0x13384                ; 00441145
        ;   Label: LAB_00441145
    MOV EDX,0x126e7ac                   ; 0044114b
    MOV ECX,dword ptr [ESP + 0x9c]      ; 00441150
    MOV EBX,dword ptr [0x0126e7a8]      ; 00441157 | DAT_0126e7a8
    PUSH ECX                            ; 0044115d
    INC EBX                             ; 0044115e
    ADD EDX,EAX                         ; 0044115f
    MOV dword ptr [0x0126e7a8],EBX      ; 00441161 | DAT_0126e7a8
    MOV dword ptr [ESP + 0x18],EDX      ; 00441167
    CALL core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 ; 0044116b
        ;   XREF to: 00448900 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900(CDemonGlobe * this_ptr)
    ADD ESP,0x4                         ; 00441170
    MOV EAX,dword ptr [ESP + 0x98]      ; 00441173
    XOR ESI,ESI                         ; 0044117a
    MOV EDI,dword ptr [EAX + 0x154]     ; 0044117c
    MOV dword ptr [ESP + 0x40],ESI      ; 00441182
    TEST EDI,EDI                        ; 00441186
    JLE 0x00441485                      ; 00441188
        ;   XREF to: 00441485 (CONDITIONAL_JUMP)  ; LAB_00441485
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044118e
    ADD EAX,0x784                       ; 00441192
    MOV dword ptr [ESP + 0x28],EAX      ; 00441197
    MOV EAX,0x83c7d4                    ; 0044119b | DAT_0083c7d4
    MOV EBP,0x14c3cd0                   ; 004411a0
    MOV dword ptr [ESP + 0x2c],EAX      ; 004411a5 | DAT_0083c7d4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004411a9
    MOV dword ptr [ESP + 0x24],EBP      ; 004411ad
    MOV dword ptr [ESP + 0x34],EAX      ; 004411b1
    MOV EAX,dword ptr [ESP + 0x40]      ; 004411b5
        ;   Label: LAB_004411b5
    MOV ECX,dword ptr [ESP + 0x98]      ; 004411b9
    SHL EAX,0x2                         ; 004411c0
    MOV EBX,dword ptr [ECX + 0x144]     ; 004411c3
    CMP EBX,dword ptr [EAX + 0x14c3550] ; 004411c9
    JZ 0x00441415                       ; 004411cf
        ;   XREF to: 00441415 (CONDITIONAL_JUMP)  ; LAB_00441415
    MOV EDX,dword ptr [ESP + 0x40]      ; 004411d5
    MOV dword ptr [ESP + 0x4c],EDX      ; 004411d9
    MOV EDX,dword ptr [EAX + 0x14c3550] ; 004411dd
    MOV EAX,dword ptr [EAX + 0x14c3910] ; 004411e3
    MOV dword ptr [ESP + 0xc],EDX       ; 004411e9
    MOV dword ptr [ESP + 0x44],EAX      ; 004411ed
    MOV EAX,dword ptr [ESP + 0x14]      ; 004411f1
    MOV ESI,EDX                         ; 004411f5
    MOV dword ptr [ESP + 0x38],EAX      ; 004411f7
    IMUL EAX,EDX,0xc                    ; 004411fb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004411fe
    ADD EDX,EAX                         ; 00441202
    MOV dword ptr [ESP + 0x74],EDX      ; 00441204
    MOV EAX,ESI                         ; 00441208
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044120a
    SHL EAX,0x2                         ; 0044120e
    MOV CL,byte ptr [0x01308800]        ; 00441211 | DAT_01308800
    ADD EDX,EAX                         ; 00441217
    MOV EAX,dword ptr [ESP + 0x40]      ; 00441219
    MOV dword ptr [ESP + 0x68],EDX      ; 0044121d
    MOV EDX,ESI                         ; 00441221
    SHL EAX,CL                          ; 00441223
    SHL EDX,CL                          ; 00441225
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 00441227 | DAT_01c2b64c
    SHL EDX,0x2                         ; 0044122e
    ADD EAX,EDX                         ; 00441231
    MOV EDI,ESI                         ; 00441233
    MOV dword ptr [ESP + 0x70],EAX      ; 00441235
    MOV EAX,dword ptr [ESP + 0x28]      ; 00441239
    ADD EAX,EDI                         ; 0044123d
    MOV EBP,dword ptr [ESP + 0x44]      ; 0044123f
    MOV dword ptr [ESP + 0x64],EAX      ; 00441243
    CMP ESI,EBP                         ; 00441247
    JGE 0x00441384                      ; 00441249
        ;   XREF to: 00441384 (CONDITIONAL_JUMP)  ; LAB_00441384
    XOR DL,DL                           ; 0044124f
        ;   Label: LAB_0044124f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00441251
    MOV byte ptr [ESP + 0x80],DL        ; 00441255
    MOV EDX,dword ptr [ESP + 0x68]      ; 0044125c
    MOV EAX,dword ptr [EAX]             ; 00441260
    CMP EAX,dword ptr [EDX]             ; 00441262
    JNC 0x0044132b                      ; 00441264
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044126a
    MOV EDX,dword ptr [0x01510718]      ; 0044126e | DAT_01510718
    MOV EAX,dword ptr [EAX]             ; 00441274 | DAT_0083c7d4 | DAT_0083c7e0
    SUB EAX,dword ptr [EDX]             ; 00441276
    CDQ                                 ; 00441278
    XOR EAX,EDX                         ; 00441279
    SUB EAX,EDX                         ; 0044127b
    MOV EDX,dword ptr [0x01510718]      ; 0044127d | DAT_01510718
    MOV ESI,dword ptr [EDX + 0xc]       ; 00441283
    MOV EBX,EAX                         ; 00441286
    CMP EAX,ESI                         ; 00441288
    JGE 0x0044132b                      ; 0044128a
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    MOV EAX,dword ptr [ESP + 0x74]      ; 00441290
    MOV EDI,dword ptr [EDX + 0x4]       ; 00441294
    MOV EAX,dword ptr [EAX + 0x4]       ; 00441297 | DAT_0083c7d8
    SUB EAX,EDI                         ; 0044129a
    CDQ                                 ; 0044129c
    XOR EAX,EDX                         ; 0044129d
    SUB EAX,EDX                         ; 0044129f
    MOV EDX,dword ptr [0x01510718]      ; 004412a1 | DAT_01510718
    MOV EBP,dword ptr [EDX + 0xc]       ; 004412a7
    MOV ECX,EAX                         ; 004412aa
    CMP EAX,EBP                         ; 004412ac
    JGE 0x0044132b                      ; 004412ae
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    MOV EAX,dword ptr [ESP + 0x74]      ; 004412b4
    MOV ESI,dword ptr [EDX + 0x8]       ; 004412b8
    MOV EAX,dword ptr [EAX + 0x8]       ; 004412bb | DAT_0083c7dc
    SUB EAX,ESI                         ; 004412be
    CDQ                                 ; 004412c0
    XOR EAX,EDX                         ; 004412c1
    SUB EAX,EDX                         ; 004412c3
    MOV EDX,dword ptr [0x01510718]      ; 004412c5 | DAT_01510718
    CMP EAX,dword ptr [EDX + 0xc]       ; 004412cb
    JGE 0x0044132b                      ; 004412ce
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    IMUL ECX,ECX                        ; 004412d0
    IMUL EBX,EBX                        ; 004412d3
    IMUL EAX,EAX                        ; 004412d6
    ADD ECX,EBX                         ; 004412d9
    ADD ECX,EAX                         ; 004412db
    MOV EBP,dword ptr [EDX + 0x10]      ; 004412dd
    MOV dword ptr [ESP + 0x58],ECX      ; 004412e0
    CMP ECX,EBP                         ; 004412e4
    JGE 0x0044132b                      ; 004412e6
        ;   XREF to: 0044132b (CONDITIONAL_JUMP)  ; LAB_0044132b
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004412e8
    MOV ESI,dword ptr [ESP + 0x70]      ; 004412ec
    MOV EBX,dword ptr [ESP + 0xc]       ; 004412f0
    MOV EAX,[0x0151071c]                ; 004412f4 | DAT_0151071c
    MOV ESI,dword ptr [ESI]             ; 004412f9
    TEST EAX,EAX                        ; 004412fb
    JNZ 0x0044149d                      ; 004412fd
        ;   XREF to: 0044149d (CONDITIONAL_JUMP)  ; LAB_0044149d
    MOV EAX,[0x01510718]                ; 00441303 | DAT_01510718
        ;   Label: LAB_00441303
    MOV ECX,dword ptr [ESP + 0x58]      ; 00441308
    MOV EDX,dword ptr [EAX + 0x10]      ; 0044130c
    SUB EDX,ECX                         ; 0044130f
    SAR EDX,0x10                        ; 00441311
    IMUL EDX,EDX,0x3f                   ; 00441314
    MOV ECX,dword ptr [EAX + 0x10]      ; 00441317
    SAR ECX,0x10                        ; 0044131a
    MOV EAX,EDX                         ; 0044131d
    SAR EDX,0x1f                        ; 0044131f
    IDIV ECX                            ; 00441322
    MOV byte ptr [ESP + 0x80],AL        ; 00441324
    MOV EDX,dword ptr [ESP + 0x64]      ; 0044132b
        ;   Label: LAB_0044132b
    MOV EDI,dword ptr [ESP + 0x68]      ; 0044132f
    MOV EBP,dword ptr [ESP + 0x74]      ; 00441333
    MOV AL,byte ptr [ESP + 0x80]        ; 00441337
    MOV ESI,dword ptr [ESP + 0x70]      ; 0044133e
    MOV CL,byte ptr [0x01308800]        ; 00441342 | DAT_01308800
    LEA EBX,[EDX + 0x1]                 ; 00441348
    ADD EDI,0x4                         ; 0044134b
    ADD EBP,0xc                         ; 0044134e
    MOV byte ptr [EDX],AL               ; 00441351
    MOV EAX,0x1                         ; 00441353
    MOV EDX,dword ptr [ESP + 0x44]      ; 00441358
    SHL EAX,CL                          ; 0044135c
    MOV dword ptr [ESP + 0x64],EBX      ; 0044135e
    SHL EAX,0x2                         ; 00441362
    MOV dword ptr [ESP + 0x68],EDI      ; 00441365
    ADD ESI,EAX                         ; 00441369
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044136b
    MOV dword ptr [ESP + 0x74],EBP      ; 0044136f
    INC EAX                             ; 00441373
    MOV dword ptr [ESP + 0x70],ESI      ; 00441374
    MOV dword ptr [ESP + 0xc],EAX       ; 00441378
    CMP EAX,EDX                         ; 0044137c
    JL 0x0044124f                       ; 0044137e
        ;   XREF to: 0044124f (CONDITIONAL_JUMP)  ; LAB_0044124f
    IMUL EBX,dword ptr [ESP + 0x4c],0x140 ; 00441384
        ;   Label: LAB_00441384
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0044138c
    MOV ECX,dword ptr [ESP + 0x38]      ; 00441390
    SHL EDX,0x2                         ; 00441394
    ADD EDX,ECX                         ; 00441397
    ADD ECX,0x784                       ; 00441399
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044139f
    ADD ECX,EBX                         ; 004413a2
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 004413a4
    ADD ECX,EAX                         ; 004413aa
    CMP EAX,EDX                         ; 004413ac
    JGE 0x004413b9                      ; 004413ae
        ;   XREF to: 004413b9 (CONDITIONAL_JUMP)  ; LAB_004413b9
    CMP byte ptr [ECX],0x0              ; 004413b0
        ;   Label: LAB_004413b0
    JZ 0x00441558                       ; 004413b3
        ;   XREF to: 00441558 (CONDITIONAL_JUMP)  ; LAB_00441558
    IMUL ECX,dword ptr [ESP + 0x4c],0x140 ; 004413b9
        ;   Label: LAB_004413b9
    MOV EBX,dword ptr [ESP + 0x38]      ; 004413c1
    ADD EBX,0x784                       ; 004413c5
    ADD ECX,EBX                         ; 004413cb
    ADD ECX,EDX                         ; 004413cd
    DEC ECX                             ; 004413cf
    CMP EDX,EAX                         ; 004413d0
    JLE 0x004413dd                      ; 004413d2
        ;   XREF to: 004413dd (CONDITIONAL_JUMP)  ; LAB_004413dd
    CMP byte ptr [ECX],0x0              ; 004413d4
        ;   Label: LAB_004413d4
    JZ 0x00441567                       ; 004413d7
        ;   XREF to: 00441567 (CONDITIONAL_JUMP)  ; LAB_00441567
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004413dd
        ;   Label: LAB_004413dd
    MOV EBP,dword ptr [ESP + 0x38]      ; 004413e1
    SHL ECX,0x2                         ; 004413e5
    ADD ECX,EBP                         ; 004413e8
    MOV dword ptr [ECX + 0x4],EAX       ; 004413ea
    MOV EAX,dword ptr [ESP + 0x14]      ; 004413ed
    PUSH EAX                            ; 004413f1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004413f2
    MOV dword ptr [ECX + 0x3c4],EDX     ; 004413f6
    MOV EDX,dword ptr [EAX*0x4 + 0x14c3910] ; 004413fc
    PUSH EDX                            ; 00441403
    MOV ECX,dword ptr [EAX*0x4 + 0x14c3550] ; 00441404
    PUSH ECX                            ; 0044140b
    PUSH EAX                            ; 0044140c
    CALL core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90 ; 0044140d
        ;   XREF to: 00440d90 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_blendCoronaTextureSpan_FUN_00440d90()
    ADD ESP,0x10                        ; 00441412
    MOV ESI,dword ptr [ESP + 0x28]      ; 00441415
        ;   Label: LAB_00441415
    MOV EDI,dword ptr [ESP + 0x24]      ; 00441419
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044141d
    MOV ECX,dword ptr [ESP + 0x34]      ; 00441421
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00441425
    ADD ESI,0x140                       ; 00441429
    ADD EDI,0x500                       ; 0044142f
    MOV EDX,dword ptr [EAX*0x4 + 0x14c3550] ; 00441435
    ADD EBP,0xf00                       ; 0044143c
    MOV dword ptr [ECX + 0x4],EDX       ; 00441442
    MOV EDX,dword ptr [ESP + 0x40]      ; 00441445
    MOV EAX,dword ptr [EAX*0x4 + 0x14c3910] ; 00441449
    INC EDX                             ; 00441450
    MOV dword ptr [ECX + 0x3c4],EAX     ; 00441451
    LEA EAX,[ECX + 0x4]                 ; 00441457
    MOV dword ptr [ESP + 0x40],EDX      ; 0044145a
    MOV dword ptr [ESP + 0x34],EAX      ; 0044145e
    MOV EAX,EDX                         ; 00441462
    MOV EDX,dword ptr [ESP + 0x98]      ; 00441464
    MOV dword ptr [ESP + 0x28],ESI      ; 0044146b
    MOV dword ptr [ESP + 0x24],EDI      ; 0044146f
    MOV ECX,dword ptr [EDX + 0x154]     ; 00441473
    MOV dword ptr [ESP + 0x2c],EBP      ; 00441479 | DAT_0083d6d4
    CMP EAX,ECX                         ; 0044147d
    JL 0x004411b5                       ; 0044147f
        ;   XREF to: 004411b5 (CONDITIONAL_JUMP)  ; LAB_004411b5
    MOV EAX,dword ptr [ESP + 0x14]      ; 00441485
        ;   Label: LAB_00441485
    MOV EDX,dword ptr [ESP + 0x9c]      ; 00441489
    MOV dword ptr [EAX],EDX             ; 00441490
    ADD ESP,0x84                        ; 00441492
    POP EBP                             ; 00441498
    POP EDI                             ; 00441499
    POP ESI                             ; 0044149a
    POP EBX                             ; 0044149b
    RET                                 ; 0044149c
    MOV EBP,dword ptr [0x01510720]      ; 0044149d | DAT_01510720
        ;   Label: LAB_0044149d
    MOV EDI,dword ptr [0x01510724]      ; 004414a3 | DAT_01510724
    MOV EAX,[0x01510728]                ; 004414a9 | DAT_01510728
    XOR EDX,EDX                         ; 004414ae
    MOV dword ptr [ESP + 0x50],EAX      ; 004414b0
    MOV dword ptr [ESP + 0x54],EDX      ; 004414b4
    TEST ESI,ESI                        ; 004414b8
    JZ 0x00441525                       ; 004414ba
        ;   XREF to: 00441525 (CONDITIONAL_JUMP)  ; LAB_00441525
    MOV EAX,0x7fffffff                  ; 004414bc
    MOV EDX,EAX                         ; 004414c1
    SAR EDX,0x1f                        ; 004414c3
    IDIV ESI                            ; 004414c6
    MOV ESI,EAX                         ; 004414c8
    MOV EDX,dword ptr [ESP + 0x50]      ; 004414ca
        ;   Label: LAB_004414ca
    SUB EDX,ESI                         ; 004414ce
    MOV EAX,EDX                         ; 004414d0
    SAR EDX,0x1f                        ; 004414d2
    SHL EDX,0x4                         ; 004414d5
    SBB EAX,EDX                         ; 004414d8
    SAR EAX,0x4                         ; 004414da
    SUB EBP,EBX                         ; 004414dd
    SUB EDI,ECX                         ; 004414df
    SHL EBP,0x4                         ; 004414e1
    SHL EDI,0x4                         ; 004414e4
    SHL EBX,0x8                         ; 004414e7
    SHL ECX,0x8                         ; 004414ea
    MOV dword ptr [ESP + 0x78],EBP      ; 004414ed
    MOV dword ptr [ESP + 0x7c],EDI      ; 004414f1
    MOV EBP,EAX                         ; 004414f5
    MOV EDX,ESI                         ; 004414f7
    MOV EAX,0x10                        ; 004414f9
    MOV ESI,ECX                         ; 004414fe
        ;   Label: LAB_004414fe
    SAR ESI,0x8                         ; 00441500
    IMUL ESI,ESI,0x500                  ; 00441503
    MOV EDI,EBX                         ; 00441509
    SAR EDI,0x8                         ; 0044150b
    MOV EDI,dword ptr [ESI + EDI*0x4 + 0xb1ac98] ; 0044150e
    LEA ESI,[EDX + -0x80]               ; 00441515
    CMP EDI,ESI                         ; 00441518
    JGE 0x0044152c                      ; 0044151a
        ;   XREF to: 0044152c (CONDITIONAL_JUMP)  ; LAB_0044152c
    TEST EAX,EAX                        ; 0044151c
    JNZ 0x00441548                      ; 0044151e
        ;   XREF to: 00441548 (CONDITIONAL_JUMP)  ; LAB_00441548
    JMP 0x00441303                      ; 00441520
        ;   XREF to: 00441303 (UNCONDITIONAL_JUMP)  ; LAB_00441303
    MOV ESI,0x7fffffff                  ; 00441525
        ;   Label: LAB_00441525
    JMP 0x004414ca                      ; 0044152a
        ;   XREF to: 004414ca (UNCONDITIONAL_JUMP)  ; LAB_004414ca
    MOV ESI,dword ptr [ESP + 0x78]      ; 0044152c
        ;   Label: LAB_0044152c
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00441530
    DEC EAX                             ; 00441534
    ADD EDX,EBP                         ; 00441535
    ADD EBX,ESI                         ; 00441537
    ADD ECX,EDI                         ; 00441539
    TEST EAX,EAX                        ; 0044153b
    JG 0x004414fe                       ; 0044153d
        ;   XREF to: 004414fe (CONDITIONAL_JUMP)  ; LAB_004414fe
    TEST EAX,EAX                        ; 0044153f
    JNZ 0x00441548                      ; 00441541
        ;   XREF to: 00441548 (CONDITIONAL_JUMP)  ; LAB_00441548
    JMP 0x00441303                      ; 00441543
        ;   XREF to: 00441303 (UNCONDITIONAL_JUMP)  ; LAB_00441303
    CMP dword ptr [ESP + 0x54],0x0      ; 00441548
        ;   Label: LAB_00441548
    JNZ 0x00441303                      ; 0044154d
        ;   XREF to: 00441303 (CONDITIONAL_JUMP)  ; LAB_00441303
    JMP 0x0044132b                      ; 00441553
        ;   XREF to: 0044132b (UNCONDITIONAL_JUMP)  ; LAB_0044132b
    INC EAX                             ; 00441558
        ;   Label: LAB_00441558
    INC ECX                             ; 00441559
    CMP EAX,EDX                         ; 0044155a
    JL 0x004413b0                       ; 0044155c
        ;   XREF to: 004413b0 (CONDITIONAL_JUMP)  ; LAB_004413b0
    JMP 0x004413b9                      ; 00441562
        ;   XREF to: 004413b9 (UNCONDITIONAL_JUMP)  ; LAB_004413b9
    DEC EDX                             ; 00441567
        ;   Label: LAB_00441567
    DEC ECX                             ; 00441568
    CMP EDX,EAX                         ; 00441569
    JG 0x004413d4                       ; 0044156b
        ;   XREF to: 004413d4 (CONDITIONAL_JUMP)  ; LAB_004413d4
    JMP 0x004413dd                      ; 00441571
        ;   XREF to: 004413dd (UNCONDITIONAL_JUMP)  ; LAB_004413dd
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00441576
        ;   Label: LAB_00441576
    MOV EAX,dword ptr [EAX + 0x14c3550] ; 0044157a
    MOV dword ptr [ESP + 0x6c],EAX      ; 00441580
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00441584
    IMUL EBX,ESI,0xc                    ; 00441588
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044158b
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044158f
    MOV EBP,dword ptr [ESP + 0x18]      ; 00441593
    MOV EAX,dword ptr [EAX + 0x14c3910] ; 00441597
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044159d
    MOV dword ptr [ESP + 0x48],EAX      ; 004415a1
    ADD EBP,ESI                         ; 004415a5
    LEA EAX,[ESI*0x4 + 0x0]             ; 004415a7
    MOV CL,byte ptr [0x01308800]        ; 004415ae | DAT_01308800
    ADD EDX,EAX                         ; 004415b4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004415b6
    MOV dword ptr [ESP + 0x60],EDX      ; 004415ba
    MOV EDX,ESI                         ; 004415be
    SHL EAX,CL                          ; 004415c0
    SHL EDX,CL                          ; 004415c2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 004415c4 | DAT_01c2b64c
    SHL EDX,0x2                         ; 004415cb
    ADD EBX,EDI                         ; 004415ce
    ADD EAX,EDX                         ; 004415d0
    MOV EDX,dword ptr [ESP + 0x48]      ; 004415d2
    MOV dword ptr [ESP + 0x5c],EAX      ; 004415d6
    CMP ESI,EDX                         ; 004415da
    JGE 0x004410d9                      ; 004415dc
        ;   XREF to: 004410d9 (CONDITIONAL_JUMP)  ; LAB_004410d9
        ;   Label: LAB_004415dc
    MOV EDX,dword ptr [ESP + 0x60]      ; 004415e2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004415e6
    MOV ECX,dword ptr [EDX]             ; 004415ea
    CMP ECX,dword ptr [EAX]             ; 004415ec
    JBE 0x00441673                      ; 004415ee
        ;   XREF to: 00441673 (CONDITIONAL_JUMP)  ; LAB_00441673
    MOV ESI,dword ptr [0x01510718]      ; 004415f4 | DAT_01510718
    MOV ECX,dword ptr [EBX]             ; 004415fa | DAT_0083d6d4 | DAT_0083d6e0
    MOV EDI,dword ptr [ESI]             ; 004415fc
    SUB ECX,EDI                         ; 004415fe
    MOV EAX,ECX                         ; 00441600
    CDQ                                 ; 00441602
    XOR EAX,EDX                         ; 00441603
    SUB EAX,EDX                         ; 00441605
    CMP EAX,dword ptr [ESI + 0xc]       ; 00441607
    JGE 0x00441673                      ; 0044160a
        ;   XREF to: 00441673 (CONDITIONAL_JUMP)  ; LAB_00441673
    MOV EDI,dword ptr [0x01510718]      ; 0044160c | DAT_01510718
    MOV ESI,dword ptr [EBX + 0x4]       ; 00441612 | DAT_0083d6d8
    MOV EAX,dword ptr [EDI + 0x4]       ; 00441615
    SUB ESI,EAX                         ; 00441618
    MOV EAX,ESI                         ; 0044161a
    CDQ                                 ; 0044161c
    XOR EAX,EDX                         ; 0044161d
    SUB EAX,EDX                         ; 0044161f
    CMP EAX,dword ptr [EDI + 0xc]       ; 00441621
    JGE 0x00441673                      ; 00441624
        ;   XREF to: 00441673 (CONDITIONAL_JUMP)  ; LAB_00441673
    MOV EAX,[0x01510718]                ; 00441626 | DAT_01510718
    MOV EDI,dword ptr [EBX + 0x8]       ; 0044162b | DAT_0083d6dc
    SUB EDI,dword ptr [EAX + 0x8]       ; 0044162e
    MOV dword ptr [ESP + 0x10],EAX      ; 00441631
    MOV EAX,EDI                         ; 00441635
    CDQ                                 ; 00441637
    XOR EAX,EDX                         ; 00441638
    SUB EAX,EDX                         ; 0044163a
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044163c
    CMP EAX,dword ptr [EDX + 0xc]       ; 00441640
    JGE 0x00441673                      ; 00441643
        ;   XREF to: 00441673 (CONDITIONAL_JUMP)  ; LAB_00441673
    IMUL ESI,ESI                        ; 00441645
    IMUL ECX,ECX                        ; 00441648
    MOV EDX,EDI                         ; 0044164b
    IMUL EDX,EDI                        ; 0044164d
    ADD ECX,ESI                         ; 00441650
    MOV EAX,[0x01510718]                ; 00441652 | DAT_01510718
    ADD EDX,ECX                         ; 00441657
    MOV ECX,dword ptr [EAX + 0x10]      ; 00441659
    CMP EDX,ECX                         ; 0044165c
    JGE 0x00441673                      ; 0044165e
        ;   XREF to: 00441673 (CONDITIONAL_JUMP)  ; LAB_00441673
    SUB ECX,EDX                         ; 00441660
    SAR ECX,0x10                        ; 00441662
    MOV EDX,dword ptr [EAX + 0x14]      ; 00441665
    MOV EAX,ECX                         ; 00441668
    IMUL EDX                            ; 0044166a
    SHRD EAX,EDX,0x10                   ; 0044166c
    ADD byte ptr [EBP],AL               ; 00441670
    MOV EAX,0x1                         ; 00441673
        ;   Label: LAB_00441673
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00441678
    MOV EDI,dword ptr [ESP + 0x60]      ; 0044167c
    MOV EDX,dword ptr [ESP + 0x48]      ; 00441680
    MOV CL,byte ptr [0x01308800]        ; 00441684 | DAT_01308800
    ADD EBX,0xc                         ; 0044168a
    SHL EAX,CL                          ; 0044168d
    INC EBP                             ; 0044168f
    SHL EAX,0x2                         ; 00441690
    ADD EDI,0x4                         ; 00441693
    ADD ESI,EAX                         ; 00441696
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00441698
    MOV dword ptr [ESP + 0x60],EDI      ; 0044169c
    INC EAX                             ; 004416a0
    MOV dword ptr [ESP + 0x5c],ESI      ; 004416a1
    MOV dword ptr [ESP + 0x6c],EAX      ; 004416a5
    CMP EAX,EDX                         ; 004416a9
    JMP 0x004415dc                      ; 004416ab
        ;   XREF to: 004415dc (UNCONDITIONAL_JUMP)  ; LAB_004415dc

