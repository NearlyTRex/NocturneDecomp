; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_004516c0(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 0055069c
;
; Referenced Globals:
;   undefined4 DAT_005d7887
;   undefined4 DAT_005d788f
;   undefined4 DAT_00a1c9e4
;   undefined4 DAT_00a1c9e8
;   undefined4 DAT_00a1c9ec
;   undefined4 DAT_00b81c9c
;   undefined4 DAT_00b81ca0
;   undefined4 DAT_013238cc
;   undefined4 DAT_01323cd4
;   undefined4 DAT_01323cd8
;   undefined4 DAT_01323cdc
;   undefined4 DAT_01323ce0
;   undefined4 DAT_01323cec
;   undefined4 DAT_01323cf8
;   undefined4 DAT_01323d00
;   ... and 1 more
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460
;   crt_math.c_round_FUN_005c03a0
;   crt_stdlib.c_rand_FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004516c0
        ;   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_004516c0
    PUSH ESI                            ; 004516c1
    PUSH EDI                            ; 004516c2
    PUSH EBP                            ; 004516c3
    MOV EBP,ESP                         ; 004516c4
    SUB ESP,0x50                        ; 004516c6
    AND ESP,0xfffffff8                  ; 004516c9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004516cc
    MOV ESI,EAX                         ; 004516cf
    MOV ECX,0xa                         ; 004516d1
    MOV EDI,0x1323cd8                   ; 004516d6
    LEA ESI,[ESI + 0x10]                ; 004516db
    XOR EBX,EBX                         ; 004516de
    MOV [0x01323cd4],EAX                ; 004516e0 | DAT_01323cd4
    MOVSD.REP ES:EDI,ESI                ; 004516e5 | DAT_01323cd8 | DAT_01323cdc
    ADD EBX,0x4                         ; 004516e7
        ;   Label: LAB_004516e7
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004516ea
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    AND EAX,0xff                        ; 004516ef
    MOV dword ptr [EBX + 0x13238d0],EAX ; 004516f4
    CMP EBX,0x400                       ; 004516fa
    JNZ 0x004516e7                      ; 00451700
        ;   XREF to: 004516e7 (CONDITIONAL_JUMP)  ; LAB_004516e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00451702
    MOV ECX,dword ptr [EAX + 0x154]     ; 00451705
    XOR EDX,EDX                         ; 0045170b
    TEST ECX,ECX                        ; 0045170d
    JLE 0x00451740                      ; 0045170f
        ;   XREF to: 00451740 (CONDITIONAL_JUMP)  ; LAB_00451740
    XOR EAX,EAX                         ; 00451711
    MOV ECX,dword ptr [EBP + 0x14]      ; 00451713
        ;   Label: LAB_00451713
    MOV ECX,dword ptr [ECX + 0x150]     ; 00451716
    XOR EBX,EBX                         ; 0045171c
    MOV dword ptr [EAX + 0x14dea50],ECX ; 0045171e
    MOV ECX,dword ptr [EBP + 0x14]      ; 00451724
    MOV dword ptr [EAX + 0x14dee10],EBX ; 00451727
    INC EDX                             ; 0045172d
    MOV ESI,dword ptr [ECX + 0x154]     ; 0045172e
    ADD EAX,0x4                         ; 00451734
    CMP EDX,ESI                         ; 00451737
    JL 0x00451713                       ; 00451739
        ;   XREF to: 00451713 (CONDITIONAL_JUMP)  ; LAB_00451713
    LEA EAX,[EAX]                       ; 0045173b
    MOV ECX,ECX                         ; 0045173e
    MOV EDI,dword ptr [EBP + 0x18]      ; 00451740
        ;   Label: LAB_00451740
    PUSH EDI                            ; 00451743
    CALL core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460 ; 00451744
        ;   XREF to: 00463460 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_00463460(CDemonLight * this_ptr)
    FLD float ptr [EDI + 0x140]         ; 00451749
    FMUL double ptr [0x005d7887]        ; 0045174f | DAT_005d7887
    ADD ESP,0x4                         ; 00451755
    FLD ST0                             ; 00451758
    FLDLG2                              ; 0045175a
    FXCH                                ; 0045175c
    FYL2X                               ; 0045175e
    FMUL double ptr [0x005d788f]        ; 00451760 | DAT_005d788f
    FXCH                                ; 00451766
    CALL crt_math.c_round_FUN_005c03a0  ; 00451768
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    XOR EAX,EAX                         ; 0045176d
    FXCH                                ; 0045176f
    CALL crt_math.c_round_FUN_005c03a0  ; 00451771
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV dword ptr [ESP + 0x30],EAX      ; 00451776
    FISTP dword ptr [0x00b81ca0]        ; 0045177a | DAT_00b81ca0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00451780
    MOV EDX,dword ptr [0x00b81ca0]      ; 00451783 | DAT_00b81ca0
    FISTP dword ptr [0x00b81c9c]        ; 00451789 | DAT_00b81c9c
    DEC EDX                             ; 0045178f
    MOV ECX,dword ptr [EAX + 0x154]     ; 00451790
    MOV dword ptr [0x00b81ca0],EDX      ; 00451796 | DAT_00b81ca0
    TEST ECX,ECX                        ; 0045179c
    JLE 0x0045183b                      ; 0045179e
        ;   XREF to: 0045183b (CONDITIONAL_JUMP)  ; LAB_0045183b
    MOV EDI,0xa1bad8                    ; 004517a4
    MOV EAX,0x14df1d0                   ; 004517a9
    MOV EDX,0xb10718                    ; 004517ae
    XOR ESI,ESI                         ; 004517b3
    MOV ECX,0x939bd8                    ; 004517b5
    MOV dword ptr [ESP + 0x34],ESI      ; 004517ba
    MOV dword ptr [ESP + 0x28],EDI      ; 004517be
    MOV dword ptr [ESP + 0x24],EAX      ; 004517c2
    MOV dword ptr [ESP + 0x20],EDX      ; 004517c6
    MOV dword ptr [ESP + 0x2c],ECX      ; 004517ca
    MOV EDX,dword ptr [EBP + 0x14]      ; 004517ce
        ;   Label: LAB_004517ce
    MOV EAX,dword ptr [ESP + 0x34]      ; 004517d1
    MOV EBX,dword ptr [EDX + 0x150]     ; 004517d5
    CMP EBX,dword ptr [EAX + 0x14dea50] ; 004517db
    JNZ 0x0045184c                      ; 004517e1
        ;   XREF to: 0045184c (CONDITIONAL_JUMP)  ; LAB_0045184c
    MOV EBX,dword ptr [ESP + 0x34]      ; 004517e3
        ;   Label: LAB_004517e3
    MOV ESI,dword ptr [ESP + 0x28]      ; 004517e7
    MOV EDI,dword ptr [ESP + 0x24]      ; 004517eb
    MOV EAX,dword ptr [ESP + 0x20]      ; 004517ef
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004517f3
    MOV ECX,dword ptr [ESP + 0x30]      ; 004517f7
    ADD EBX,0x4                         ; 004517fb
    ADD ESI,0xf00                       ; 004517fe
    ADD EDI,0x500                       ; 00451804
    ADD EAX,0x140                       ; 0045180a
    ADD EDX,0xf00                       ; 0045180f
    INC ECX                             ; 00451815
    MOV dword ptr [ESP + 0x34],EBX      ; 00451816
    MOV dword ptr [ESP + 0x28],ESI      ; 0045181a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0045181e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00451822
    MOV dword ptr [ESP + 0x24],EDI      ; 00451825
    MOV dword ptr [ESP + 0x20],EAX      ; 00451829
    MOV EBX,dword ptr [EDX + 0x154]     ; 0045182d
    MOV dword ptr [ESP + 0x30],ECX      ; 00451833
    CMP ECX,EBX                         ; 00451837
    JL 0x004517ce                       ; 00451839
        ;   XREF to: 004517ce (CONDITIONAL_JUMP)  ; LAB_004517ce
    MOV dword ptr [0x013238cc],0x1      ; 0045183b | DAT_013238cc
        ;   Label: LAB_0045183b
    MOV ESP,EBP                         ; 00451845
    POP EBP                             ; 00451847
    POP EDI                             ; 00451848
    POP ESI                             ; 00451849
    POP EBX                             ; 0045184a
    RET                                 ; 0045184b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0045184c
        ;   Label: LAB_0045184c
    MOV EAX,dword ptr [EAX + 0x14dea50] ; 00451850
    MOV dword ptr [ESP + 0x48],EAX      ; 00451856
    MOV ESI,dword ptr [ESP + 0x48]      ; 0045185a
    IMUL EBX,ESI,0xc                    ; 0045185e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00451861
    MOV EAX,dword ptr [EAX + 0x14dee10] ; 00451865
    MOV dword ptr [ESP + 0x38],EAX      ; 0045186b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0045186f
    ADD EAX,EBX                         ; 00451873
    MOV dword ptr [ESP + 0x44],EAX      ; 00451875
    MOV EAX,dword ptr [ESP + 0x20]      ; 00451879
    ADD EAX,ESI                         ; 0045187d
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045187f
    MOV dword ptr [ESP + 0x4c],EAX      ; 00451883
    LEA EAX,[ESI*0x4 + 0x0]             ; 00451887
    MOV CL,byte ptr [0x01323d00]        ; 0045188e | DAT_01323d00
    ADD EDX,EAX                         ; 00451894
    MOV EAX,dword ptr [ESP + 0x30]      ; 00451896
    MOV dword ptr [ESP + 0x3c],EDX      ; 0045189a
    MOV EDX,ESI                         ; 0045189e
    SHL EAX,CL                          ; 004518a0
    SHL EDX,CL                          ; 004518a2
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 004518a4 | DAT_01c4480c
    SHL EDX,0x2                         ; 004518ab
    ADD EAX,EDX                         ; 004518ae
    MOV dword ptr [ESP + 0x40],EAX      ; 004518b0
    MOV EAX,dword ptr [ESP + 0x28]      ; 004518b4
    MOV EDX,dword ptr [ESP + 0x38]      ; 004518b8
    ADD EBX,EAX                         ; 004518bc
    CMP ESI,EDX                         ; 004518be
    JGE 0x004517e3                      ; 004518c0
        ;   XREF to: 004517e3 (CONDITIONAL_JUMP)  ; LAB_004517e3
        ;   Label: LAB_004518c0
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004518c6
    MOV EAX,dword ptr [ESP + 0x40]      ; 004518ca
    MOV ESI,dword ptr [EDX]             ; 004518ce
    CMP ESI,dword ptr [EAX]             ; 004518d0
    JBE 0x004519d8                      ; 004518d2
        ;   XREF to: 004519d8 (CONDITIONAL_JUMP)  ; LAB_004519d8
    FLD float ptr [EBX + 0x4]           ; 004518d8 | DAT_00a1c9e8
    FMUL float ptr [0x01323cec]         ; 004518db | DAT_01323cec
    FLD float ptr [EBX]                 ; 004518e1 | DAT_00a1c9e4
    FMUL float ptr [0x01323ce0]         ; 004518e3 | DAT_01323ce0
    FADDP                               ; 004518e9
    FLD float ptr [EBX + 0x8]           ; 004518eb | DAT_00a1c9ec
    FMUL float ptr [0x01323cf8]         ; 004518ee | DAT_01323cf8
    FADDP                               ; 004518f4
    FLDZ                                ; 004518f6
    FCOMPP                              ; 004518f8
    FNSTSW AX                           ; 004518fa
    SAHF                                ; 004518fc
    JA 0x004519d8                       ; 004518fd
        ;   XREF to: 004519d8 (CONDITIONAL_JUMP)  ; LAB_004519d8
    MOV EDI,dword ptr [ESP + 0x44]      ; 00451903
    PUSH EDI                            ; 00451907
    MOV EAX,[0x01323cd4]                ; 00451908 | DAT_01323cd4
    PUSH EAX                            ; 0045190d
    LEA ESI,[ESP + 0x8]                 ; 0045190e
    LEA EDI,[ESP + 0x14]                ; 00451912
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0 ; 00451916
        ;   XREF to: 0044e2a0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044e2a0(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8]                 ; 0045191b
    ADD ESP,0x8                         ; 0045191f
    MOVSD ES:EDI,ESI                    ; 00451922
    MOVSD ES:EDI,ESI                    ; 00451923
    MOVSD ES:EDI,ESI                    ; 00451924
    CMP dword ptr [ESP + 0x14],0x0      ; 00451925
    JLE 0x004519d8                      ; 0045192a
        ;   XREF to: 004519d8 (CONDITIONAL_JUMP)  ; LAB_004519d8
    MOV EDX,dword ptr [ESP + 0x10]      ; 00451930
    MOV EAX,[0x01323cd4]                ; 00451934 | DAT_01323cd4
    SAR EDX,0x10                        ; 00451939
    IMUL EDX,dword ptr [EAX + 0x1cc0]   ; 0045193c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00451943
    SAR ECX,0x10                        ; 00451947
    ADD EDX,ECX                         ; 0045194a
    LEA ESI,[EDX + EDX*0x1]             ; 0045194c
    MOV EDX,dword ptr [EAX + 0x2f94]    ; 0045194f
    MOV DX,word ptr [EDX + ESI*0x1]     ; 00451955
    MOV ESI,dword ptr [0x00b81c9c]      ; 00451959 | DAT_00b81c9c
    AND EDX,0xffff                      ; 0045195f
    CMP EDX,ESI                         ; 00451965
    JGE 0x004519d8                      ; 00451967
        ;   XREF to: 004519d8 (CONDITIONAL_JUMP)  ; LAB_004519d8
    MOV EDI,dword ptr [ESP + 0x14]      ; 00451969
    LEA ECX,[EDX + 0x80]                ; 0045196d
    CMP ECX,EDI                         ; 00451973
    JLE 0x004519d8                      ; 00451975
        ;   XREF to: 004519d8 (CONDITIONAL_JUMP)  ; LAB_004519d8
    MOV ESI,dword ptr [ESP + 0xc]       ; 00451977
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 0045197b
    SAR ESI,CL                          ; 00451981
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 00451983
    MOV EDI,dword ptr [ESP + 0x10]      ; 00451989
    AND ESI,ECX                         ; 0045198d
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 0045198f
    SAR EDI,CL                          ; 00451995
    MOV ECX,EDI                         ; 00451997
    MOV EDI,dword ptr [EAX + 0x1c68]    ; 00451999
    AND EDI,ECX                         ; 0045199f
    MOV CL,byte ptr [EAX + 0x1c60]      ; 004519a1
    SHL EDI,CL                          ; 004519a7
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 004519a9
    LEA ECX,[EDI + ESI*0x1]             ; 004519af
    ADD EAX,ECX                         ; 004519b2
    XOR ECX,ECX                         ; 004519b4
    MOV CL,byte ptr [EAX]               ; 004519b6
    MOV EAX,[0x00b81c9c]                ; 004519b8 | DAT_00b81c9c
    SUB EAX,EDX                         ; 004519bd
    MOV EDX,EAX                         ; 004519bf
    IMUL EDX,ECX                        ; 004519c1
    MOV CL,byte ptr [0x00b81ca0]        ; 004519c4 | DAT_00b81ca0
    SAR EDX,CL                          ; 004519ca
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004519cc
    XOR EAX,EAX                         ; 004519d0
    MOV AL,byte ptr [ECX]               ; 004519d2
    ADD EAX,EDX                         ; 004519d4
    MOV byte ptr [ECX],AL               ; 004519d6
    MOV EAX,0x1                         ; 004519d8
        ;   Label: LAB_004519d8
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004519dd
    MOV EDI,dword ptr [ESP + 0x44]      ; 004519e1
    MOV EDX,dword ptr [ESP + 0x48]      ; 004519e5
    MOV CL,byte ptr [0x01323d00]        ; 004519e9 | DAT_01323d00
    ADD EBX,0xc                         ; 004519ef
    ADD ESI,0x4                         ; 004519f2
    ADD EDI,0xc                         ; 004519f5
    INC EDX                             ; 004519f8
    SHL EAX,CL                          ; 004519f9
    MOV ECX,dword ptr [ESP + 0x40]      ; 004519fb
    SHL EAX,0x2                         ; 004519ff
    MOV dword ptr [ESP + 0x3c],ESI      ; 00451a02
    MOV dword ptr [ESP + 0x44],EDI      ; 00451a06
    MOV dword ptr [ESP + 0x48],EDX      ; 00451a0a
    ADD ECX,EAX                         ; 00451a0e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00451a10
    MOV dword ptr [ESP + 0x40],ECX      ; 00451a14
    INC EAX                             ; 00451a18
    MOV ECX,dword ptr [ESP + 0x38]      ; 00451a19
    MOV dword ptr [ESP + 0x4c],EAX      ; 00451a1d
    CMP EDX,ECX                         ; 00451a21
    JMP 0x004518c0                      ; 00451a23
        ;   XREF to: 004518c0 (UNCONDITIONAL_JUMP)  ; LAB_004518c0

