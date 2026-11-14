; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_dmodel_cpp_FUN_004618a0(CKeyFramedModel *param_1,int param_2,CVector3f *param_3,CVector3f *param_4,float *param_5)
;
; Local Variables:
; undefined8       Stack[-0x138]:8  local_138
; undefined8       Stack[-0x130]:8  local_130
; undefined8       Stack[-0x128]:8  local_128
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
; XREF[2]:
;   core_actor.cpp_FUN_004091b0 at 004095b0
;   core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_005127f0 at 005129fd
;
; Referenced Globals:
;   undefined4 DAT_005de564
;
; Called Functions:
;   core_box.cpp_FUN_0041e220
;   core_dirmat.cpp_FUN_0045b800
;   core_dirmat.cpp_FUN_0045b870
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50
;   core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004618a0
        ;   Label: core_dmodel.cpp_FUN_004618a0
    PUSH ESI                            ; 004618a1
    PUSH EDI                            ; 004618a2
    PUSH EBP                            ; 004618a3
    MOV EBP,ESP                         ; 004618a4
    SUB ESP,0x124                       ; 004618a6
    AND ESP,0xfffffff8                  ; 004618ac
    MOV EBX,dword ptr [EBP + 0x18]      ; 004618af
    MOV EAX,dword ptr [EBP + 0x14]      ; 004618b2
    MOV EDX,dword ptr [EAX + 0x100]     ; 004618b5
    CMP EBX,EDX                         ; 004618bb
    JL 0x004618c2                       ; 004618bd
        ;   XREF to: 004618c2 (CONDITIONAL_JUMP)  ; LAB_004618c2
    LEA EBX,[EDX + -0x1]                ; 004618bf
    TEST EBX,EBX                        ; 004618c2
        ;   Label: LAB_004618c2
    JGE 0x004618c8                      ; 004618c4
        ;   XREF to: 004618c8 (CONDITIONAL_JUMP)  ; LAB_004618c8
    XOR EBX,EBX                         ; 004618c6
    PUSH 0x0                            ; 004618c8
        ;   Label: LAB_004618c8
    MOV ECX,dword ptr [EBP + 0x20]      ; 004618ca
    LEA EAX,[EBX*0x4 + 0x0]             ; 004618cd
    PUSH ECX                            ; 004618d4
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004618d5
    SUB EAX,EBX                         ; 004618d8
    PUSH ESI                            ; 004618da
    MOV ESI,dword ptr [EBP + 0x14]      ; 004618db
    SHL EAX,0x3                         ; 004618de
    MOV ESI,dword ptr [ESI + 0x350]     ; 004618e1
    ADD EAX,ESI                         ; 004618e7
    PUSH EAX                            ; 004618e9
    CALL core_box.cpp_FUN_0041e220      ; 004618ea
        ;   XREF to: 0041e220 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041e220()
    MOV dword ptr [ESP + 0x130],EAX     ; 004618ef
    FLD float ptr [ESP + 0x130]         ; 004618f6
    ADD ESP,0x10                        ; 004618fd
    FLDZ                                ; 00461900
    FXCH                                ; 00461902
    FSTP double ptr [ESP]               ; 00461904
    FCOMP double ptr [ESP]              ; 00461907
    FNSTSW AX                           ; 0046190a
    SAHF                                ; 0046190c
    JA 0x00461b75                       ; 0046190d
        ;   XREF to: 00461b75 (CONDITIONAL_JUMP)  ; LAB_00461b75
    FLD1                                ; 00461913
    FCOMP double ptr [ESP]              ; 00461915
    FNSTSW AX                           ; 00461918
    SAHF                                ; 0046191a
    JC 0x00461b75                       ; 0046191b
        ;   XREF to: 00461b75 (CONDITIONAL_JUMP)  ; LAB_00461b75
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461921
    MOV EDI,0x40000000                  ; 00461924
    MOV EDX,dword ptr [EAX + 0x358]     ; 00461929
    MOV dword ptr [ESP + 0xf4],EDI      ; 0046192f
    TEST EDX,EDX                        ; 00461936
    JNZ 0x00461c33                      ; 00461938
        ;   XREF to: 00461c33 (CONDITIONAL_JUMP)  ; LAB_00461c33
    PUSH EBX                            ; 0046193e
    PUSH EAX                            ; 0046193f
    MOV EDI,EAX                         ; 00461940
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60 ; 00461942
        ;   XREF to: 00460f60 (UNCONDITIONAL_CALL)  ; CVector3i * core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00460f60(CKeyFramedModel * this_ptr, int frame_index)
    ADD ESP,0x8                         ; 00461947
    MOV dword ptr [ESP + 0x110],EAX     ; 0046194a
    XOR EAX,EAX                         ; 00461951
    MOV dword ptr [ESP + 0x104],EAX     ; 00461953
    MOV EAX,EDI                         ; 0046195a
    CMP dword ptr [EAX + 0x110],0x0     ; 0046195c
    JLE 0x00461b59                      ; 00461963
        ;   XREF to: 00461b59 (CONDITIONAL_JUMP)  ; LAB_00461b59
    XOR EAX,EAX                         ; 00461969
    MOV dword ptr [ESP + 0x108],EAX     ; 0046196b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461972
        ;   Label: LAB_00461972
    MOV EBX,dword ptr [ESP + 0x108]     ; 00461975
    MOV EAX,dword ptr [EAX + 0x114]     ; 0046197c
    ADD EBX,EAX                         ; 00461982
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 00461984
    MOV ECX,dword ptr [ESP + 0x110]     ; 00461988
    MOV dword ptr [ESP + 0x114],EBX     ; 0046198f
    LEA EBX,[ESP + 0x88]                ; 00461996
    ADD EAX,ECX                         ; 0046199d
    FILD dword ptr [EAX]                ; 0046199f
    FMUL float ptr [0x005de564]         ; 004619a1 | DAT_005de564
    FSTP float ptr [EBX]                ; 004619a7
    FILD dword ptr [EAX + 0x4]          ; 004619a9
    FMUL float ptr [0x005de564]         ; 004619ac | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 004619b2
    FILD dword ptr [EAX + 0x8]          ; 004619b5
    FMUL float ptr [0x005de564]         ; 004619b8 | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 004619be
    MOV EAX,dword ptr [ESP + 0x114]     ; 004619c1
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 004619c8
    LEA EBX,[ESP + 0xb8]                ; 004619cc
    ADD EAX,ECX                         ; 004619d3
    FILD dword ptr [EAX]                ; 004619d5
    FMUL float ptr [0x005de564]         ; 004619d7 | DAT_005de564
    FSTP float ptr [EBX]                ; 004619dd
    FILD dword ptr [EAX + 0x4]          ; 004619df
    FMUL float ptr [0x005de564]         ; 004619e2 | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 004619e8
    FILD dword ptr [EAX + 0x8]          ; 004619eb
    FMUL float ptr [0x005de564]         ; 004619ee | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 004619f4
    MOV EAX,dword ptr [ESP + 0x114]     ; 004619f7
    MOV EDI,0x2                         ; 004619fe
    MOV EDX,dword ptr [EAX + 0x4]       ; 00461a03
    MOV dword ptr [ESP + 0x118],EDI     ; 00461a06
    CMP EDX,EDI                         ; 00461a0d
    JLE 0x00461b28                      ; 00461a0f
        ;   XREF to: 00461b28 (CONDITIONAL_JUMP)  ; LAB_00461b28
    ADD EAX,0x18                        ; 00461a15
    MOV dword ptr [ESP + 0x11c],EAX     ; 00461a18
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00461a1f
        ;   Label: LAB_00461a1f
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 00461a26
    MOV EDX,dword ptr [ESP + 0x110]     ; 00461a2a
    LEA EBX,[ESP + 0xd0]                ; 00461a31
    ADD EAX,EDX                         ; 00461a38
    FILD dword ptr [EAX]                ; 00461a3a
    FMUL float ptr [0x005de564]         ; 00461a3c | DAT_005de564
    FSTP float ptr [EBX]                ; 00461a42
    FILD dword ptr [EAX + 0x4]          ; 00461a44
    FMUL float ptr [0x005de564]         ; 00461a47 | DAT_005de564
    FSTP float ptr [EBX + 0x4]          ; 00461a4d
    FILD dword ptr [EAX + 0x8]          ; 00461a50
    FMUL float ptr [0x005de564]         ; 00461a53 | DAT_005de564
    FSTP float ptr [EBX + 0x8]          ; 00461a59
    LEA EAX,[ESP + 0xd0]                ; 00461a5c
    PUSH EAX                            ; 00461a63
    LEA EAX,[ESP + 0xbc]                ; 00461a64
    PUSH EAX                            ; 00461a6b
    LEA EAX,[ESP + 0x90]                ; 00461a6c
    PUSH EAX                            ; 00461a73
    LEA EAX,[ESP + 0x2c]                ; 00461a74
    PUSH EAX                            ; 00461a78
    LEA EBX,[ESP + 0xe0]                ; 00461a79
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50 ; 00461a80
        ;   XREF to: 00478a50 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_00478a50(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    LEA EAX,[ESP + 0xc8]                ; 00461a85
    ADD ESP,0x10                        ; 00461a8c
    CMP EAX,EBX                         ; 00461a8f
    JZ 0x00461abd                       ; 00461a91
        ;   XREF to: 00461abd (CONDITIONAL_JUMP)  ; LAB_00461abd
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00461a93
    MOV dword ptr [ESP + 0xb8],EAX      ; 00461a9a
    MOV EAX,dword ptr [ESP + 0xd4]      ; 00461aa1
    MOV dword ptr [ESP + 0xbc],EAX      ; 00461aa8
    MOV EAX,dword ptr [ESP + 0xd8]      ; 00461aaf
    MOV dword ptr [ESP + 0xc0],EAX      ; 00461ab6
    MOV ECX,dword ptr [EBP + 0x20]      ; 00461abd
        ;   Label: LAB_00461abd
    PUSH ECX                            ; 00461ac0
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00461ac1
    PUSH EBX                            ; 00461ac4
    LEA EAX,[ESP + 0x28]                ; 00461ac5
    PUSH EAX                            ; 00461ac9
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 00461aca
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00461acf
    FLD float ptr [ESP + 0x12c]         ; 00461ad6
    ADD ESP,0xc                         ; 00461add
    FST float ptr [ESP + 0x1c]          ; 00461ae0
    FCOMP float ptr [ESP + 0xf4]        ; 00461ae4
    FNSTSW AX                           ; 00461aeb
    SAHF                                ; 00461aed
    JBE 0x00461b8e                      ; 00461aee
        ;   XREF to: 00461b8e (CONDITIONAL_JUMP)  ; LAB_00461b8e
    MOV EBX,dword ptr [ESP + 0x118]     ; 00461af4
        ;   Label: LAB_00461af4
    INC EBX                             ; 00461afb
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00461afc
    MOV dword ptr [ESP + 0x118],EBX     ; 00461b03
    MOV EAX,EBX                         ; 00461b0a
    MOV EBX,dword ptr [ESP + 0x114]     ; 00461b0c
    ADD ECX,0xc                         ; 00461b13
    MOV ESI,dword ptr [EBX + 0x4]       ; 00461b16
    MOV dword ptr [ESP + 0x11c],ECX     ; 00461b19
    CMP EAX,ESI                         ; 00461b20
    JL 0x00461a1f                       ; 00461b22
        ;   XREF to: 00461a1f (CONDITIONAL_JUMP)  ; LAB_00461a1f
    MOV EBX,dword ptr [ESP + 0x108]     ; 00461b28
        ;   Label: LAB_00461b28
    ADD EBX,0x48                        ; 00461b2f
    MOV ESI,dword ptr [ESP + 0x104]     ; 00461b32
    MOV dword ptr [ESP + 0x108],EBX     ; 00461b39
    MOV EBX,dword ptr [EBP + 0x14]      ; 00461b40
    INC ESI                             ; 00461b43
    MOV EDI,dword ptr [EBX + 0x110]     ; 00461b44
    MOV dword ptr [ESP + 0x104],ESI     ; 00461b4a
    CMP ESI,EDI                         ; 00461b51
    JL 0x00461972                       ; 00461b53
        ;   XREF to: 00461972 (CONDITIONAL_JUMP)  ; LAB_00461972
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00461b59
        ;   Label: LAB_00461b59
    MOV dword ptr [ESP + 0xf8],EAX      ; 00461b60
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00461b67
    MOV ESP,EBP                         ; 00461b6e
    POP EBP                             ; 00461b70
    POP EDI                             ; 00461b71
    POP ESI                             ; 00461b72
    POP EBX                             ; 00461b73
    RET                                 ; 00461b74
    MOV dword ptr [ESP + 0xf8],0x40000000 ; 00461b75
        ;   Label: LAB_00461b75
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00461b80
    MOV ESP,EBP                         ; 00461b87
    POP EBP                             ; 00461b89
    POP EDI                             ; 00461b8a
    POP ESI                             ; 00461b8b
    POP EBX                             ; 00461b8c
    RET                                 ; 00461b8d
    FLD float ptr [ESP + 0x1c]          ; 00461b8e
        ;   Label: LAB_00461b8e
    FLDZ                                ; 00461b92
    FXCH                                ; 00461b94
    FSTP double ptr [ESP + 0x8]         ; 00461b96
    FCOMP double ptr [ESP + 0x8]        ; 00461b9a
    FNSTSW AX                           ; 00461b9e
    SAHF                                ; 00461ba0
    JA 0x00461af4                       ; 00461ba1
        ;   XREF to: 00461af4 (CONDITIONAL_JUMP)  ; LAB_00461af4
    FLD1                                ; 00461ba7
    FCOMP double ptr [ESP + 0x8]        ; 00461ba9
    FNSTSW AX                           ; 00461bad
    SAHF                                ; 00461baf
    JC 0x00461af4                       ; 00461bb0
        ;   XREF to: 00461af4 (CONDITIONAL_JUMP)  ; LAB_00461af4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00461bb6
    MOV ESI,dword ptr [EBP + 0x24]      ; 00461bba
    MOV dword ptr [ESP + 0xf4],EAX      ; 00461bbd
    TEST ESI,ESI                        ; 00461bc4
    JZ 0x00461af4                       ; 00461bc6
        ;   XREF to: 00461af4 (CONDITIONAL_JUMP)  ; LAB_00461af4
    FLD float ptr [ESP + 0x44]          ; 00461bcc
    FLD float ptr [ESP + 0x48]          ; 00461bd0
    FLD float ptr [ESP + 0x4c]          ; 00461bd4
    LEA EDI,[ESP + 0x58]                ; 00461bd8
    LEA ESI,[ESP + 0xc4]                ; 00461bdc
    FXCH ST2                            ; 00461be3
    FCHS                                ; 00461be5
    FXCH                                ; 00461be7
    FCHS                                ; 00461be9
    FXCH ST2                            ; 00461beb
    FCHS                                ; 00461bed
    FXCH ST2                            ; 00461bef
    FSTP float ptr [ESP + 0xc8]         ; 00461bf1
    FXCH                                ; 00461bf8
    FSTP float ptr [ESP + 0xcc]         ; 00461bfa
    FSTP float ptr [ESP + 0xc4]         ; 00461c01
    MOVSD ES:EDI,ESI                    ; 00461c08
    MOVSD ES:EDI,ESI                    ; 00461c09
    MOVSD ES:EDI,ESI                    ; 00461c0a
    LEA EAX,[ESP + 0x58]                ; 00461c0b
    MOV EDI,dword ptr [EBP + 0x24]      ; 00461c0f
    CMP EAX,EDI                         ; 00461c12
    JZ 0x00461af4                       ; 00461c14
        ;   XREF to: 00461af4 (CONDITIONAL_JUMP)  ; LAB_00461af4
    MOV EAX,dword ptr [ESP + 0x58]      ; 00461c1a
    MOV dword ptr [EDI],EAX             ; 00461c1e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00461c20
    MOV dword ptr [EDI + 0x4],EAX       ; 00461c24
    MOV EAX,dword ptr [ESP + 0x60]      ; 00461c27
    MOV dword ptr [EDI + 0x8],EAX       ; 00461c2b
    JMP 0x00461af4                      ; 00461c2e
        ;   XREF to: 00461af4 (UNCONDITIONAL_JUMP)  ; LAB_00461af4
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00461c33
        ;   Label: LAB_00461c33
    PUSH ECX                            ; 00461c36
    ADD EAX,0x370                       ; 00461c37
    LEA ESI,[ESP + 0xe0]                ; 00461c3c
    PUSH EAX                            ; 00461c43
    LEA EDI,[ESP + 0x6c]                ; 00461c44
    MOV dword ptr [ESP + 0x104],EAX     ; 00461c48
    CALL core_dirmat.cpp_FUN_0045b870   ; 00461c4f
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0xe4]                ; 00461c54
    ADD ESP,0x8                         ; 00461c5b
    MOVSD ES:EDI,ESI                    ; 00461c5e
    MOVSD ES:EDI,ESI                    ; 00461c5f
    MOVSD ES:EDI,ESI                    ; 00461c60
    MOV EDI,dword ptr [EBP + 0x20]      ; 00461c61
    PUSH EDI                            ; 00461c64
    MOV EAX,dword ptr [ESP + 0x100]     ; 00461c65
    PUSH EAX                            ; 00461c6c
    LEA ESI,[ESP + 0xa8]                ; 00461c6d
    LEA EDI,[ESP + 0x9c]                ; 00461c74
    CALL core_dirmat.cpp_FUN_0045b870   ; 00461c7b
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    ADD ESP,0x8                         ; 00461c80
    LEA ESI,[ESP + 0xa0]                ; 00461c83
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461c8a
    MOVSD ES:EDI,ESI                    ; 00461c8d
    MOVSD ES:EDI,ESI                    ; 00461c8e
    MOVSD ES:EDI,ESI                    ; 00461c8f
    MOV EDX,dword ptr [EAX + 0x354]     ; 00461c90
    MOV EAX,EBX                         ; 00461c96
    IMUL EAX,EDX                        ; 00461c98
    SHL EAX,0x3                         ; 00461c9b
    MOV EBX,EAX                         ; 00461c9e
    SHL EAX,0x3                         ; 00461ca0
    SUB EAX,EBX                         ; 00461ca3
    MOV EBX,EAX                         ; 00461ca5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461ca7
    MOV EAX,dword ptr [EAX + 0x358]     ; 00461caa
    ADD EBX,EAX                         ; 00461cb0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461cb2
    XOR ECX,ECX                         ; 00461cb5
    MOV ESI,dword ptr [EAX + 0x354]     ; 00461cb7
    MOV dword ptr [ESP + 0x10c],ECX     ; 00461cbd
    TEST ESI,ESI                        ; 00461cc4
    JLE 0x00461b59                      ; 00461cc6
        ;   XREF to: 00461b59 (CONDITIONAL_JUMP)  ; LAB_00461b59
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00461ccc
    MOV dword ptr [ESP + 0x100],EAX     ; 00461cd3
    LEA EAX,[ESP + 0x94]                ; 00461cda
        ;   Label: LAB_00461cda
    PUSH EAX                            ; 00461ce1
    LEA EAX,[ESP + 0x68]                ; 00461ce2
    PUSH EAX                            ; 00461ce6
    PUSH EBX                            ; 00461ce7
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 00461ce8
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; float core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0(CDemonTriangle * triangle, CVector3f * rayOrigin, CVector3f * rayDirection)
    MOV dword ptr [ESP + 0x12c],EAX     ; 00461ced
    FLD float ptr [ESP + 0x12c]         ; 00461cf4
    ADD ESP,0xc                         ; 00461cfb
    FST float ptr [ESP + 0x18]          ; 00461cfe
    FCOMP float ptr [ESP + 0xf4]        ; 00461d02
    FNSTSW AX                           ; 00461d09
    SAHF                                ; 00461d0b
    JBE 0x00461d35                      ; 00461d0c
        ;   XREF to: 00461d35 (CONDITIONAL_JUMP)  ; LAB_00461d35
    MOV ESI,dword ptr [ESP + 0x10c]     ; 00461d0e
        ;   Label: LAB_00461d0e
    INC ESI                             ; 00461d15
    MOV dword ptr [ESP + 0x10c],ESI     ; 00461d16
    MOV EAX,ESI                         ; 00461d1d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00461d1f
    MOV EDI,dword ptr [ESI + 0x354]     ; 00461d22
    ADD EBX,0x38                        ; 00461d28
    CMP EAX,EDI                         ; 00461d2b
    JGE 0x00461b59                      ; 00461d2d
        ;   XREF to: 00461b59 (CONDITIONAL_JUMP)  ; LAB_00461b59
    JMP 0x00461cda                      ; 00461d33
        ;   XREF to: 00461cda (UNCONDITIONAL_JUMP)  ; LAB_00461cda
    FLD float ptr [ESP + 0x18]          ; 00461d35
        ;   Label: LAB_00461d35
    FLDZ                                ; 00461d39
    FXCH                                ; 00461d3b
    FSTP double ptr [ESP + 0x10]        ; 00461d3d
    FCOMP double ptr [ESP + 0x10]       ; 00461d41
    FNSTSW AX                           ; 00461d45
    SAHF                                ; 00461d47
    JA 0x00461d0e                       ; 00461d48
        ;   XREF to: 00461d0e (CONDITIONAL_JUMP)  ; LAB_00461d0e
    FLD1                                ; 00461d4a
    FCOMP double ptr [ESP + 0x10]       ; 00461d4c
    FNSTSW AX                           ; 00461d50
    SAHF                                ; 00461d52
    JC 0x00461d0e                       ; 00461d53
        ;   XREF to: 00461d0e (CONDITIONAL_JUMP)  ; LAB_00461d0e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00461d55
    MOV dword ptr [ESP + 0xf4],EAX      ; 00461d59
    CMP dword ptr [EBP + 0x24],0x0      ; 00461d60
    JZ 0x00461d0e                       ; 00461d64
        ;   XREF to: 00461d0e (CONDITIONAL_JUMP)  ; LAB_00461d0e
    LEA EDI,[ESP + 0x70]                ; 00461d66
    LEA EAX,[EBX + 0x24]                ; 00461d6a
    LEA ESI,[ESP + 0xe8]                ; 00461d6d
    MOV EDX,dword ptr [ESP + 0x100]     ; 00461d74
    FLD float ptr [EAX]                 ; 00461d7b
    FLD float ptr [EAX + 0x4]           ; 00461d7d
    FLD float ptr [EAX + 0x8]           ; 00461d80
    FXCH ST2                            ; 00461d83
    FCHS                                ; 00461d85
    FXCH                                ; 00461d87
    FCHS                                ; 00461d89
    FXCH ST2                            ; 00461d8b
    FCHS                                ; 00461d8d
    LEA EAX,[ESP + 0x70]                ; 00461d8f
    FXCH                                ; 00461d93
    FSTP float ptr [ESP + 0xe8]         ; 00461d95
    FXCH                                ; 00461d9c
    FSTP float ptr [ESP + 0xec]         ; 00461d9e
    FSTP float ptr [ESP + 0xf0]         ; 00461da5
    PUSH EAX                            ; 00461dac
    MOVSD ES:EDI,ESI                    ; 00461dad
    MOVSD ES:EDI,ESI                    ; 00461dae
    MOVSD ES:EDI,ESI                    ; 00461daf
    PUSH EDX                            ; 00461db0
    LEA ESI,[ESP + 0xb4]                ; 00461db1
    LEA EDI,[ESP + 0x84]                ; 00461db8
    CALL core_dirmat.cpp_FUN_0045b800   ; 00461dbf
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0xb4]                ; 00461dc4
    ADD ESP,0x8                         ; 00461dcb
    LEA EAX,[ESP + 0x7c]                ; 00461dce
    MOV ECX,dword ptr [EBP + 0x24]      ; 00461dd2
    MOVSD ES:EDI,ESI                    ; 00461dd5
    MOVSD ES:EDI,ESI                    ; 00461dd6
    MOVSD ES:EDI,ESI                    ; 00461dd7
    CMP EAX,ECX                         ; 00461dd8
    JZ 0x00461d0e                       ; 00461dda
        ;   XREF to: 00461d0e (CONDITIONAL_JUMP)  ; LAB_00461d0e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00461de0
    MOV dword ptr [ECX],EAX             ; 00461de4
    MOV EAX,dword ptr [ESP + 0x80]      ; 00461de6
    MOV dword ptr [ECX + 0x4],EAX       ; 00461ded
    MOV EAX,dword ptr [ESP + 0x84]      ; 00461df0
    MOV dword ptr [ECX + 0x8],EAX       ; 00461df7
    JMP 0x00461d0e                      ; 00461dfa
        ;   XREF to: 00461d0e (UNCONDITIONAL_JUMP)  ; LAB_00461d0e

