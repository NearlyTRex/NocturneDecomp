; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_004207b0(CBoundingBox3D *param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x90]:1  local_90
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
; XREF[77]:
;   core_ammo.cpp_FUN_0040dc80 at 0040dcba
;   core_ammobox.cpp_FUN_0040e320 at 0040e358
;   core_anvil.cpp_FUN_0040e7b0 at 0040e819
;   core_backgnd.cpp_FUN_0040ef70 at 0040efba
;   core_baron.cpp_FUN_004101f0 at 00410317
;   core_bat.cpp_FUN_00410f70 at 00410faa
;   core_batman.cpp_FUN_00413970 at 00413a06
;   core_battery.cpp_FUN_00414500 at 00414559
;   core_biggs.cpp_FUN_00414e00 at 00414e4c
;   core_bodypart.cpp_FUN_00418fc0 at 00419038
;   ... and 67 more
;
; Referenced Globals:
;   undefined4 DAT_005d4bc0
;   undefined4 DAT_005fce08
;   undefined4 DAT_005fce10
;   undefined4 DAT_00612560
;   undefined4 DAT_00713a88
;   undefined4 DAT_00713a8c
;   undefined4 DAT_00713a90
;   undefined4 DAT_007c6120
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01c51cac
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0
;   core_box.cpp_FUN_00420990
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004207b0
        ;   Label: core_box.cpp_FUN_004207b0
    PUSH ESI                            ; 004207b1
    PUSH EDI                            ; 004207b2
    SUB ESP,0x84                        ; 004207b3
    MOV EBX,dword ptr [ESP + 0x94]      ; 004207b9
    PUSH EBX                            ; 004207c0
    CALL core_box.cpp_FUN_00420990      ; 004207c1
        ;   XREF to: 00420990 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420990()
    ADD ESP,0x4                         ; 004207c6
    CMP EAX,-0x1                        ; 004207c9
    JZ 0x004207dc                       ; 004207cc
        ;   XREF to: 004207dc (CONDITIONAL_JUMP)  ; LAB_004207dc
    TEST EAX,EAX                        ; 004207ce
    JNZ 0x004207e0                      ; 004207d0
        ;   XREF to: 004207e0 (CONDITIONAL_JUMP)  ; LAB_004207e0
    ADD ESP,0x84                        ; 004207d2
        ;   Label: LAB_004207d2
    POP EDI                             ; 004207d8
    POP ESI                             ; 004207d9
    POP EBX                             ; 004207da
    RET                                 ; 004207db
    XOR EAX,EAX                         ; 004207dc
        ;   Label: LAB_004207dc
    JMP 0x004207d2                      ; 004207de
        ;   XREF to: 004207d2 (UNCONDITIONAL_JUMP)  ; LAB_004207d2
    MOV EDX,dword ptr [0x00612560]      ; 004207e0 | DAT_00612560
        ;   Label: LAB_004207e0
    PUSH EDX                            ; 004207e6 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 004207e7
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004207ec
    TEST EAX,EAX                        ; 004207ef
    JNZ 0x00420966                      ; 004207f1
        ;   XREF to: 00420966 (CONDITIONAL_JUMP)  ; LAB_00420966
    FLD float ptr [EBX]                 ; 004207f7
    FLD float ptr [EBX + 0x4]           ; 004207f9
    FLD float ptr [EBX + 0x8]           ; 004207fc
    LEA EAX,[EBX + 0xc]                 ; 004207ff
    LEA EDI,[ESP + 0x78]                ; 00420802
    LEA ESI,[ESP + 0x3c]                ; 00420806
    FXCH ST2                            ; 0042080a
    FADD float ptr [EAX]                ; 0042080c
    FXCH                                ; 0042080e
    FADD float ptr [EAX + 0x4]          ; 00420810
    FXCH ST2                            ; 00420813
    FADD float ptr [EAX + 0x8]          ; 00420815
    FXCH                                ; 00420818
    FSTP float ptr [ESP + 0x3c]         ; 0042081a
    FXCH                                ; 0042081e
    FSTP float ptr [ESP + 0x40]         ; 00420820
    FSTP float ptr [ESP + 0x44]         ; 00420824
    MOVSD ES:EDI,ESI                    ; 00420828
    MOVSD ES:EDI,ESI                    ; 00420829
    MOVSD ES:EDI,ESI                    ; 0042082a
    FLD float ptr [0x005d4bc0]          ; 0042082b | DAT_005d4bc0
    FLD float ptr [ESP + 0x78]          ; 00420831
    FMUL ST1                            ; 00420835
    FLD float ptr [ESP + 0x7c]          ; 00420837
    FMUL ST2                            ; 0042083b
    FLD float ptr [ESP + 0x80]          ; 0042083d
    FMULP ST3                           ; 00420844
    LEA EBX,[ESP + 0x30]                ; 00420846
    LEA EAX,[ESP + 0x6c]                ; 0042084a
    LEA EDI,[ESP + 0x6c]                ; 0042084e
    LEA ESI,[ESP + 0x54]                ; 00420852
    FXCH                                ; 00420856
    FSTP float ptr [ESP + 0x54]         ; 00420858
    FSTP float ptr [ESP + 0x58]         ; 0042085c
    FSTP float ptr [ESP + 0x5c]         ; 00420860
    MOVSD ES:EDI,ESI                    ; 00420864
    MOVSD ES:EDI,ESI                    ; 00420865
    MOVSD ES:EDI,ESI                    ; 00420866
    CMP EBX,EAX                         ; 00420867
    JZ 0x00420883                       ; 00420869
        ;   XREF to: 00420883 (CONDITIONAL_JUMP)  ; LAB_00420883
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042086b
    MOV dword ptr [ESP + 0x30],EAX      ; 0042086f
    MOV EAX,dword ptr [ESP + 0x70]      ; 00420873
    MOV dword ptr [ESP + 0x34],EAX      ; 00420877
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042087b
    MOV dword ptr [ESP + 0x38],EAX      ; 0042087f
    MOV EAX,0x713a88                    ; 00420883 | DAT_00713a88
        ;   Label: LAB_00420883
    LEA EBX,[ESP + 0x60]                ; 00420888
    FILD dword ptr [EAX]                ; 0042088c | DAT_00713a88
    FMUL float ptr [0x005fce10]         ; 0042088e | DAT_005fce10
    FSTP float ptr [EBX]                ; 00420894
    FILD dword ptr [EAX + 0x4]          ; 00420896 | DAT_00713a8c
    FMUL float ptr [0x005fce10]         ; 00420899 | DAT_005fce10
    FSTP float ptr [EBX + 0x4]          ; 0042089f
    FILD dword ptr [EAX + 0x8]          ; 004208a2 | DAT_00713a90
    FMUL float ptr [0x005fce10]         ; 004208a5 | DAT_005fce10
    FSTP float ptr [EBX + 0x8]          ; 004208ab
    LEA EBX,[ESP + 0x48]                ; 004208ae
    LEA EAX,[ESP + 0x30]                ; 004208b2
    FLD float ptr [EAX]                 ; 004208b6
    FMUL float ptr [0x005fce08]         ; 004208b8 | DAT_005fce08
    FISTP dword ptr [EBX]               ; 004208be
    FLD float ptr [EAX + 0x4]           ; 004208c0
    FMUL float ptr [0x005fce08]         ; 004208c3 | DAT_005fce08
    FISTP dword ptr [EBX + 0x4]         ; 004208c9
    FLD float ptr [EAX + 0x8]           ; 004208cc
    FMUL float ptr [0x005fce08]         ; 004208cf | DAT_005fce08
    FISTP dword ptr [EBX + 0x8]         ; 004208d5
    LEA EAX,[ESP + 0x48]                ; 004208d8
    PUSH EAX                            ; 004208dc
    LEA EAX,[ESP + 0x4]                 ; 004208dd
    PUSH EAX                            ; 004208e1
    CALL engine_special.cpp_FUN_00580173 ; 004208e2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004208e7
    MOV EBX,dword ptr [0x007c6120]      ; 004208ea | DAT_007c6120
    FLD float ptr [ESP + 0x60]          ; 004208f0
    FLD float ptr [ESP + 0x64]          ; 004208f4
    FLD float ptr [ESP + 0x68]          ; 004208f8
    FXCH ST2                            ; 004208fc
    FADD float ptr [ESP + 0x30]         ; 004208fe
    FXCH                                ; 00420902
    FADD float ptr [ESP + 0x34]         ; 00420904
    FXCH ST2                            ; 00420908
    FADD float ptr [ESP + 0x38]         ; 0042090a
    FXCH                                ; 0042090e
    FSTP float ptr [ESP + 0x60]         ; 00420910
    FXCH                                ; 00420914
    FSTP float ptr [ESP + 0x64]         ; 00420916
    FSTP float ptr [ESP + 0x68]         ; 0042091a
    TEST EBX,EBX                        ; 0042091e
    JZ 0x00420951                       ; 00420920
        ;   XREF to: 00420951 (CONDITIONAL_JUMP)  ; LAB_00420951
    MOV EAX,ESP                         ; 00420922
    PUSH EAX                            ; 00420924
    LEA EAX,[ESP + 0x64]                ; 00420925
    PUSH EAX                            ; 00420929
    PUSH 0x1fe37ec                      ; 0042092a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430 ; 0042092f
        ;   XREF to: 00454430 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00454430(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDI,dword ptr [0x01c51cac]      ; 00420934 | DAT_01c51cac
    ADD ESP,0xc                         ; 0042093a
    CMP EDI,0xfde8                      ; 0042093d
    JLE 0x00420957                      ; 00420943
        ;   XREF to: 00420957 (CONDITIONAL_JUMP)  ; LAB_00420957
    XOR EAX,EAX                         ; 00420945
    ADD ESP,0x84                        ; 00420947
    POP EDI                             ; 0042094d
    POP ESI                             ; 0042094e
    POP EBX                             ; 0042094f
    RET                                 ; 00420950
    MOV dword ptr [0x01c51cac],EBX      ; 00420951 | DAT_01c51cac
        ;   Label: LAB_00420951
    MOV EAX,0x1                         ; 00420957
        ;   Label: LAB_00420957
    ADD ESP,0x84                        ; 0042095c
    POP EDI                             ; 00420962
    POP ESI                             ; 00420963
    POP EBX                             ; 00420964
    RET                                 ; 00420965
    CMP dword ptr [ESP + 0x98],0x0      ; 00420966
        ;   Label: LAB_00420966
    JNZ 0x00420957                      ; 0042096e
        ;   XREF to: 00420957 (CONDITIONAL_JUMP)  ; LAB_00420957
    PUSH EBX                            ; 00420970
    CALL core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0 ; 00420971
        ;   XREF to: 004205e0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_004205e0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00420976
    TEST EAX,EAX                        ; 00420979
    JNZ 0x00420957                      ; 0042097b
        ;   XREF to: 00420957 (CONDITIONAL_JUMP)  ; LAB_00420957
    ADD ESP,0x84                        ; 0042097d
    POP EDI                             ; 00420983
    POP ESI                             ; 00420984
    POP EBX                             ; 00420985
    RET                                 ; 00420986

