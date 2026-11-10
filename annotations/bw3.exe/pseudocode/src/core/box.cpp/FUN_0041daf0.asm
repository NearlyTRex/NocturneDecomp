; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_FUN_0041daf0(CBoundingBox3D *param_1,int param_2)
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
; XREF[75]:
;   core_ammo.cpp_CAmmo_renderOpaque_FUN_0040df20 at 0040df5a
;   core_ammobox.cpp_CAmmoBox_renderOpaque_FUN_0040e810 at 0040e848
;   core_asgaya.cpp_CAsgaya_renderOpaque_FUN_005a1760 at 005a17aa
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a18ab
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597a1b
;   core_bat.cpp_CBat_renderOpaque_FUN_0040f200 at 0040f23a
;   core_battery.cpp_CBattery_renderOpaque_FUN_0040f590 at 0040f5e9
;   core_bodypart.cpp_CBodyPart_renderBackground_FUN_00414d40 at 00414dec
;   core_bodypart.cpp_CBodyPart_renderOpaque_FUN_00414bd0 at 00414c48
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 00418fdc
;   ... and 65 more
;
; Referenced Globals:
;   undefined4 DAT_005b74a9
;   undefined4 DAT_005dc948
;   undefined4 DAT_005dc950
;   undefined4 DAT_005f2afc
;   undefined4 DAT_00730408
;   undefined4 DAT_0073040c
;   undefined4 DAT_00730410
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c6e24c
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920
;   core_box.cpp_FUN_0041dcd0
;   core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_special.cpp_FUN_005632a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041daf0
        ;   Label: core_box.cpp_FUN_0041daf0
    PUSH ESI                            ; 0041daf1
    PUSH EDI                            ; 0041daf2
    SUB ESP,0x84                        ; 0041daf3
    MOV EBX,dword ptr [ESP + 0x94]      ; 0041daf9
    PUSH EBX                            ; 0041db00
    CALL core_box.cpp_FUN_0041dcd0      ; 0041db01
        ;   XREF to: 0041dcd0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041dcd0()
    ADD ESP,0x4                         ; 0041db06
    CMP EAX,-0x1                        ; 0041db09
    JZ 0x0041db1c                       ; 0041db0c
        ;   XREF to: 0041db1c (CONDITIONAL_JUMP)  ; LAB_0041db1c
    TEST EAX,EAX                        ; 0041db0e
    JNZ 0x0041db20                      ; 0041db10
        ;   XREF to: 0041db20 (CONDITIONAL_JUMP)  ; LAB_0041db20
    ADD ESP,0x84                        ; 0041db12
        ;   Label: LAB_0041db12
    POP EDI                             ; 0041db18
    POP ESI                             ; 0041db19
    POP EBX                             ; 0041db1a
    RET                                 ; 0041db1b
    XOR EAX,EAX                         ; 0041db1c
        ;   Label: LAB_0041db1c
    JMP 0x0041db12                      ; 0041db1e
        ;   XREF to: 0041db12 (UNCONDITIONAL_JUMP)  ; LAB_0041db12
    MOV EDX,dword ptr [0x005f2afc]      ; 0041db20 | DAT_005f2afc
        ;   Label: LAB_0041db20
    PUSH EDX                            ; 0041db26 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0041db27
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041db2c
    TEST EAX,EAX                        ; 0041db2f
    JNZ 0x0041dca6                      ; 0041db31
        ;   XREF to: 0041dca6 (CONDITIONAL_JUMP)  ; LAB_0041dca6
    FLD float ptr [EBX]                 ; 0041db37
    FLD float ptr [EBX + 0x4]           ; 0041db39
    FLD float ptr [EBX + 0x8]           ; 0041db3c
    LEA EAX,[EBX + 0xc]                 ; 0041db3f
    LEA EDI,[ESP + 0x78]                ; 0041db42
    LEA ESI,[ESP + 0x3c]                ; 0041db46
    FXCH ST2                            ; 0041db4a
    FADD float ptr [EAX]                ; 0041db4c
    FXCH                                ; 0041db4e
    FADD float ptr [EAX + 0x4]          ; 0041db50
    FXCH ST2                            ; 0041db53
    FADD float ptr [EAX + 0x8]          ; 0041db55
    FXCH                                ; 0041db58
    FSTP float ptr [ESP + 0x3c]         ; 0041db5a
    FXCH                                ; 0041db5e
    FSTP float ptr [ESP + 0x40]         ; 0041db60
    FSTP float ptr [ESP + 0x44]         ; 0041db64
    MOVSD ES:EDI,ESI                    ; 0041db68
    MOVSD ES:EDI,ESI                    ; 0041db69
    MOVSD ES:EDI,ESI                    ; 0041db6a
    FLD float ptr [0x005b74a9]          ; 0041db6b | DAT_005b74a9
    FLD float ptr [ESP + 0x78]          ; 0041db71
    FMUL ST1                            ; 0041db75
    FLD float ptr [ESP + 0x7c]          ; 0041db77
    FMUL ST2                            ; 0041db7b
    FLD float ptr [ESP + 0x80]          ; 0041db7d
    FMULP ST3                           ; 0041db84
    LEA EBX,[ESP + 0x30]                ; 0041db86
    LEA EAX,[ESP + 0x6c]                ; 0041db8a
    LEA EDI,[ESP + 0x6c]                ; 0041db8e
    LEA ESI,[ESP + 0x54]                ; 0041db92
    FXCH                                ; 0041db96
    FSTP float ptr [ESP + 0x54]         ; 0041db98
    FSTP float ptr [ESP + 0x58]         ; 0041db9c
    FSTP float ptr [ESP + 0x5c]         ; 0041dba0
    MOVSD ES:EDI,ESI                    ; 0041dba4
    MOVSD ES:EDI,ESI                    ; 0041dba5
    MOVSD ES:EDI,ESI                    ; 0041dba6
    CMP EBX,EAX                         ; 0041dba7
    JZ 0x0041dbc3                       ; 0041dba9
        ;   XREF to: 0041dbc3 (CONDITIONAL_JUMP)  ; LAB_0041dbc3
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041dbab
    MOV dword ptr [ESP + 0x30],EAX      ; 0041dbaf
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041dbb3
    MOV dword ptr [ESP + 0x34],EAX      ; 0041dbb7
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041dbbb
    MOV dword ptr [ESP + 0x38],EAX      ; 0041dbbf
    MOV EAX,0x730408                    ; 0041dbc3 | DAT_00730408
        ;   Label: LAB_0041dbc3
    LEA EBX,[ESP + 0x60]                ; 0041dbc8
    FILD dword ptr [EAX]                ; 0041dbcc | DAT_00730408
    FMUL float ptr [0x005dc950]         ; 0041dbce | DAT_005dc950
    FSTP float ptr [EBX]                ; 0041dbd4
    FILD dword ptr [EAX + 0x4]          ; 0041dbd6 | DAT_0073040c
    FMUL float ptr [0x005dc950]         ; 0041dbd9 | DAT_005dc950
    FSTP float ptr [EBX + 0x4]          ; 0041dbdf
    FILD dword ptr [EAX + 0x8]          ; 0041dbe2 | DAT_00730410
    FMUL float ptr [0x005dc950]         ; 0041dbe5 | DAT_005dc950
    FSTP float ptr [EBX + 0x8]          ; 0041dbeb
    LEA EBX,[ESP + 0x48]                ; 0041dbee
    LEA EAX,[ESP + 0x30]                ; 0041dbf2
    FLD float ptr [EAX]                 ; 0041dbf6
    FMUL float ptr [0x005dc948]         ; 0041dbf8 | DAT_005dc948
    FISTP dword ptr [EBX]               ; 0041dbfe
    FLD float ptr [EAX + 0x4]           ; 0041dc00
    FMUL float ptr [0x005dc948]         ; 0041dc03 | DAT_005dc948
    FISTP dword ptr [EBX + 0x4]         ; 0041dc09
    FLD float ptr [EAX + 0x8]           ; 0041dc0c
    FMUL float ptr [0x005dc948]         ; 0041dc0f | DAT_005dc948
    FISTP dword ptr [EBX + 0x8]         ; 0041dc15
    LEA EAX,[ESP + 0x48]                ; 0041dc18
    PUSH EAX                            ; 0041dc1c
    LEA EAX,[ESP + 0x4]                 ; 0041dc1d
    PUSH EAX                            ; 0041dc21
    CALL engine_special.cpp_FUN_005632a3 ; 0041dc22
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_005632a3(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0041dc27
    MOV EBX,dword ptr [0x007e2a54]      ; 0041dc2a | DAT_007e2a54
    FLD float ptr [ESP + 0x60]          ; 0041dc30
    FLD float ptr [ESP + 0x64]          ; 0041dc34
    FLD float ptr [ESP + 0x68]          ; 0041dc38
    FXCH ST2                            ; 0041dc3c
    FADD float ptr [ESP + 0x30]         ; 0041dc3e
    FXCH                                ; 0041dc42
    FADD float ptr [ESP + 0x34]         ; 0041dc44
    FXCH ST2                            ; 0041dc48
    FADD float ptr [ESP + 0x38]         ; 0041dc4a
    FXCH                                ; 0041dc4e
    FSTP float ptr [ESP + 0x60]         ; 0041dc50
    FXCH                                ; 0041dc54
    FSTP float ptr [ESP + 0x64]         ; 0041dc56
    FSTP float ptr [ESP + 0x68]         ; 0041dc5a
    TEST EBX,EBX                        ; 0041dc5e
    JZ 0x0041dc91                       ; 0041dc60
        ;   XREF to: 0041dc91 (CONDITIONAL_JUMP)  ; LAB_0041dc91
    MOV EAX,ESP                         ; 0041dc62
    PUSH EAX                            ; 0041dc64
    LEA EAX,[ESP + 0x64]                ; 0041dc65
    PUSH EAX                            ; 0041dc69
    PUSH 0x2038f4c                      ; 0041dc6a
    CALL core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580 ; 0041dc6f
        ;   XREF to: 00450580 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setupPerspectiveAndFog_FUN_00450580(CDemonCamera * this_ptr, CVector3f * position, SProjectedVertex * projected_vertex)
    MOV EDI,dword ptr [0x01c6e24c]      ; 0041dc74 | DAT_01c6e24c
    ADD ESP,0xc                         ; 0041dc7a
    CMP EDI,0xfde8                      ; 0041dc7d
    JLE 0x0041dc97                      ; 0041dc83
        ;   XREF to: 0041dc97 (CONDITIONAL_JUMP)  ; LAB_0041dc97
    XOR EAX,EAX                         ; 0041dc85
    ADD ESP,0x84                        ; 0041dc87
    POP EDI                             ; 0041dc8d
    POP ESI                             ; 0041dc8e
    POP EBX                             ; 0041dc8f
    RET                                 ; 0041dc90
    MOV dword ptr [0x01c6e24c],EBX      ; 0041dc91 | DAT_01c6e24c
        ;   Label: LAB_0041dc91
    MOV EAX,0x1                         ; 0041dc97
        ;   Label: LAB_0041dc97
    ADD ESP,0x84                        ; 0041dc9c
    POP EDI                             ; 0041dca2
    POP ESI                             ; 0041dca3
    POP EBX                             ; 0041dca4
    RET                                 ; 0041dca5
    CMP dword ptr [ESP + 0x98],0x0      ; 0041dca6
        ;   Label: LAB_0041dca6
    JNZ 0x0041dc97                      ; 0041dcae
        ;   XREF to: 0041dc97 (CONDITIONAL_JUMP)  ; LAB_0041dc97
    PUSH EBX                            ; 0041dcb0
    CALL core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920 ; 0041dcb1
        ;   XREF to: 0041d920 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041d920(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041dcb6
    TEST EAX,EAX                        ; 0041dcb9
    JNZ 0x0041dc97                      ; 0041dcbb
        ;   XREF to: 0041dc97 (CONDITIONAL_JUMP)  ; LAB_0041dc97
    ADD ESP,0x84                        ; 0041dcbd
    POP EDI                             ; 0041dcc3
    POP ESI                             ; 0041dcc4
    POP EBX                             ; 0041dcc5
    RET                                 ; 0041dcc6

