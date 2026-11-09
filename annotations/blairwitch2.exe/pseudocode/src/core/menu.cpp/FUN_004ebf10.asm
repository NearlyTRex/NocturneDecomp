; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_FUN_004ebf10(void)
;
; Local Variables:
; undefined8       Stack[-0x260]:8  local_260
; undefined        Stack[-0x258]:1  local_258
; undefined1       Stack[-0x257]:1  local_257
; undefined        Stack[-0x158]:1  local_158
; undefined1       Stack[-0x157]:1  local_157
; undefined        Stack[-0x58]:1  local_58
; undefined1       Stack[-0x57]:1  local_57
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_menu.cpp_FUN_004ee1a0 at 004ee312
;
; Referenced Globals:
;   void* switchdataD_004ebee0 = 004ec3f9
;   TerminatedCString s_s_4_2f_005dcb35
;   undefined1 DAT_005dcc8d
;   undefined1 DAT_005dcc8e
;   undefined1 DAT_005dcc8f
;   TerminatedCString s_dx7_dll_005dcc90
;   TerminatedCString s_Resolution_320x240_005dcc98
;   TerminatedCString s_Resolution_400x300_005dccad
;   TerminatedCString s_Resolution_512x384_005dccc2
;   TerminatedCString s_Resolution_640x480_005dccd7
;   TerminatedCString s_Resolution_800x600_005dccec
;   TerminatedCString s_Resolution_1024x768_005dcd01
;   TerminatedCString s_Resolution_1280x960_005dcd17
;   TerminatedCString s_Resolution_320x240_005dcd2d
;   TerminatedCString s_No_3D_Hardware_005dcd42
;   ... and 84 more
;
; Called Functions:
;   core_game.cpp_FUN_004b3000
;   core_game.cpp_FUN_004b3010
;   core_menu.cpp_FUN_004eb0e0
;   core_menu.cpp_showCalibrationTest_FUN_004ebe30
;   core_moon.cpp_FUN_005024a0
;   core_moon.cpp_FUN_00502510
;   core_set.cpp_FUN_005344c0
;   crt_string.c__stricmp_FUN_005b8130
;   crt_unknown.c_FUN_005b7790
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0
;   engine_font.cpp_FUN_004ab560
;   engine_special.cpp_FUN_0055e8c0
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebf10
        ;   Label: core_menu.cpp_FUN_004ebf10
    PUSH ESI                            ; 004ebf11
    PUSH EDI                            ; 004ebf12
    PUSH EBP                            ; 004ebf13
    MOV EBP,ESP                         ; 004ebf14
    SUB ESP,0x244                       ; 004ebf16
    AND ESP,0xfffffff8                  ; 004ebf1c
    MOV ECX,dword ptr [0x00616494]      ; 004ebf1f | g_CGamePtr
    XOR EDX,EDX                         ; 004ebf25
    PUSH ECX                            ; 004ebf27
    MOV dword ptr [ESP + 0x224],EDX     ; 004ebf28
    CALL core_game.cpp_FUN_004b3000     ; 004ebf2f
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3000(CGame * this_ptr)
    MOV EDX,0x1d06150                   ; 004ebf34
    ADD ESP,0x4                         ; 004ebf39
    XOR EAX,EAX                         ; 004ebf3c
    MOV dword ptr [EAX + 0x1d06a50],EDX ; 004ebf3e
        ;   Label: LAB_004ebf3e
    ADD EAX,0x4                         ; 004ebf44
    ADD EDX,0x100                       ; 004ebf47
    CMP EAX,0x24                        ; 004ebf4d
    JNZ 0x004ebf3e                      ; 004ebf50
        ;   XREF to: 004ebf3e (CONDITIONAL_JUMP)  ; LAB_004ebf3e
    PUSH 0x1d06b3c                      ; 004ebf52
    PUSH 0x1d06afc                      ; 004ebf57
    PUSH 0x1d06abc                      ; 004ebf5c
    PUSH 0x1d06a7c                      ; 004ebf61
    XOR EBX,EBX                         ; 004ebf66
    PUSH 0x1d06a78                      ; 004ebf68 | DAT_01d06a78
    MOV dword ptr [ESP + 0x250],EBX     ; 004ebf6d
    CALL engine_special.cpp_FUN_005600e0 ; 004ebf74
        ;   XREF to: 005600e0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005600e0()
    MOV EAX,[0x01d06a74]                ; 004ebf79 | DAT_01d06a74
    MOV ESI,dword ptr [0x01d06a78]      ; 004ebf7e | DAT_01d06a78
    ADD ESP,0x14                        ; 004ebf84
    CMP EAX,ESI                         ; 004ebf87
    JL 0x004ebf91                       ; 004ebf89
        ;   XREF to: 004ebf91 (CONDITIONAL_JUMP)  ; LAB_004ebf91
    MOV dword ptr [0x01d06a74],EBX      ; 004ebf8b | DAT_01d06a74
    XOR EAX,EAX                         ; 004ebf91
        ;   Label: LAB_004ebf91
    MOV dword ptr [ESP + 0x224],EAX     ; 004ebf93
    MOV dword ptr [ESP + 0x228],EAX     ; 004ebf9a
    MOV dword ptr [ESP + 0x22c],EAX     ; 004ebfa1
    LEA EAX,[ESP + 0x22c]               ; 004ebfa8
    PUSH EAX                            ; 004ebfaf
    LEA EAX,[ESP + 0x22c]               ; 004ebfb0
    PUSH EAX                            ; 004ebfb7
    LEA EAX,[ESP + 0x22c]               ; 004ebfb8
    PUSH EAX                            ; 004ebfbf
    CALL engine_special.cpp_FUN_00560090 ; 004ebfc0
        ;   XREF to: 00560090 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560090(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004ebfc5
    MOV EBX,dword ptr [0x00616494]      ; 004ebfc8 | g_CGamePtr
        ;   Label: LAB_004ebfc8
    PUSH EBX                            ; 004ebfce | g_CGameInstance
    CALL core_game.cpp_FUN_004b3010     ; 004ebfcf
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b3010(CGame * this_ptr)
    ADD ESP,0x4                         ; 004ebfd4
    PUSH 0x10000                        ; 004ebfd7
    PUSH 0xc350                         ; 004ebfdc
    PUSH 0xc350                         ; 004ebfe1
    MOV EAX,[0x0061b5a8]                ; 004ebfe6 | g_CDemonSetPtr
    PUSH EAX                            ; 004ebfeb
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ebfec | g_CDemonSetInstance.field1420932_0x15ae84
    CALL core_set.cpp_FUN_005344c0      ; 004ebff6
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    MOV EAX,[0x0061b5a8]                ; 004ebffb | g_CDemonSetPtr
    ADD ESP,0x10                        ; 004ec000
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ec003 | g_CDemonSetInstance.field1420948_0x15ae94
    MOV EAX,[0x00616494]                ; 004ec00d | g_CGamePtr
    SUB ESP,0x4                         ; 004ec012
    MOV EDX,dword ptr [EAX + 0x284]     ; 004ec015 | g_CGameInstance.field644_0x284
    MOV dword ptr [ESP],EDX             ; 004ec01b
    PUSH 0x1d05620                      ; 004ec01e
    CALL core_moon.cpp_FUN_005024a0     ; 004ec023
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_005024a0()
    ADD ESP,0x8                         ; 004ec028
    PUSH 0x1d05620                      ; 004ec02b
    MOV ESI,0x5dcc8d                    ; 004ec030 | DAT_005dcc8d
    CALL core_moon.cpp_FUN_00502510     ; 004ec035
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_00502510()
    MOV EAX,[0x0061b5a8]                ; 004ec03a | g_CDemonSetPtr
    ADD ESP,0x4                         ; 004ec03f
    MOV EDI,0x61e180                    ; 004ec042 | DAT_0061e180
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ec047 | g_CDemonSetInstance.field1420932_0x15ae84
    PUSH EDI                            ; 004ec051 | DAT_0061e180
    MOV AL,byte ptr [ESI]               ; 004ec052 | DAT_005dcc8d | DAT_005dcc8f
        ;   Label: LAB_004ec052
    MOV byte ptr [EDI],AL               ; 004ec054 | DAT_0061e180 | DAT_0061e182
    CMP AL,0x0                          ; 004ec056
    JZ 0x004ec06a                       ; 004ec058
        ;   XREF to: 004ec06a (CONDITIONAL_JUMP)  ; LAB_004ec06a
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec05a | DAT_005dcc8e | = "dx7.dll"
    ADD ESI,0x2                         ; 004ec05d
    MOV byte ptr [EDI + 0x1],AL         ; 004ec060 | DAT_0061e181 | = "d3d.dll"
    ADD EDI,0x2                         ; 004ec063
    CMP AL,0x0                          ; 004ec066
    JNZ 0x004ec052                      ; 004ec068
        ;   XREF to: 004ec052 (CONDITIONAL_JUMP)  ; LAB_004ec052
    POP EDI                             ; 004ec06a
        ;   Label: LAB_004ec06a
    CMP dword ptr [0x01d06a78],0x0      ; 004ec06b | DAT_01d06a78
    JLE 0x004ec160                      ; 004ec072
        ;   XREF to: 004ec160 (CONDITIONAL_JUMP)  ; LAB_004ec160
    CMP dword ptr [0x0264bba0],0x0      ; 004ec078 | DAT_0264bba0
    JZ 0x004ec160                       ; 004ec07f
        ;   XREF to: 004ec160 (CONDITIONAL_JUMP)  ; LAB_004ec160
    MOV EAX,[0x01d06a74]                ; 004ec085 | DAT_01d06a74
    SHL EAX,0x2                         ; 004ec08a
    CMP dword ptr [EAX + 0x1d06afc],0x121a ; 004ec08d
    JNZ 0x004ec0bb                      ; 004ec097
        ;   XREF to: 004ec0bb (CONDITIONAL_JUMP)  ; LAB_004ec0bb
    CMP dword ptr [EAX + 0x1d06b3c],0x5 ; 004ec099
    JG 0x004ec0bb                       ; 004ec0a0
        ;   XREF to: 004ec0bb (CONDITIONAL_JUMP)  ; LAB_004ec0bb
    MOV EAX,[0x00616494]                ; 004ec0a2 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004ec0a7 | g_CGameInstance.field8_0x8
    MOV dword ptr [EAX],0x280           ; 004ec0ae | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec0b4 | g_CGameInstance.field4_0x4
    MOV EAX,[0x01d06a74]                ; 004ec0bb | DAT_01d06a74
        ;   Label: LAB_004ec0bb
    SHL EAX,0x2                         ; 004ec0c0
    CMP dword ptr [EAX + 0x1d06afc],0x8086 ; 004ec0c3
    JNZ 0x004ec0f4                      ; 004ec0cd
        ;   XREF to: 004ec0f4 (CONDITIONAL_JUMP)  ; LAB_004ec0f4
    CMP dword ptr [EAX + 0x1d06b3c],0x7800 ; 004ec0cf
    JNZ 0x004ec0f4                      ; 004ec0d9
        ;   XREF to: 004ec0f4 (CONDITIONAL_JUMP)  ; LAB_004ec0f4
    MOV EAX,[0x00616494]                ; 004ec0db | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004ec0e0 | g_CGameInstance.field8_0x8
    MOV dword ptr [EAX],0x280           ; 004ec0e7 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec0ed | g_CGameInstance.field4_0x4
    MOV EAX,[0x01d06a74]                ; 004ec0f4 | DAT_01d06a74
        ;   Label: LAB_004ec0f4
    SHL EAX,0x2                         ; 004ec0f9
    CMP dword ptr [EAX + 0x1d06afc],0x12d2 ; 004ec0fc
    JNZ 0x004ec12a                      ; 004ec106
        ;   XREF to: 004ec12a (CONDITIONAL_JUMP)  ; LAB_004ec12a
    CMP dword ptr [EAX + 0x1d06b3c],0x18 ; 004ec108
    JNZ 0x004ec12a                      ; 004ec10f
        ;   XREF to: 004ec12a (CONDITIONAL_JUMP)  ; LAB_004ec12a
    MOV EAX,[0x00616494]                ; 004ec111 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004ec116 | g_CGameInstance.field8_0x8
    MOV dword ptr [EAX],0x280           ; 004ec11d | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec123 | g_CGameInstance.field4_0x4
    MOV EAX,[0x01d06a74]                ; 004ec12a | DAT_01d06a74
        ;   Label: LAB_004ec12a
    SHL EAX,0x2                         ; 004ec12f
    CMP dword ptr [EAX + 0x1d06afc],0x12d2 ; 004ec132
    JNZ 0x004ec160                      ; 004ec13c
        ;   XREF to: 004ec160 (CONDITIONAL_JUMP)  ; LAB_004ec160
    CMP dword ptr [EAX + 0x1d06b3c],0x19 ; 004ec13e
    JNZ 0x004ec160                      ; 004ec145
        ;   XREF to: 004ec160 (CONDITIONAL_JUMP)  ; LAB_004ec160
    MOV EAX,[0x00616494]                ; 004ec147 | g_CGamePtr
    MOV dword ptr [EAX + 0x8],0x10      ; 004ec14c | g_CGameInstance.field8_0x8
    MOV dword ptr [EAX],0x280           ; 004ec153 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec159 | g_CGameInstance.field4_0x4
    CMP dword ptr [0x0264bba0],0x0      ; 004ec160 | DAT_0264bba0
        ;   Label: LAB_004ec160
    JNZ 0x004ec184                      ; 004ec167
        ;   XREF to: 004ec184 (CONDITIONAL_JUMP)  ; LAB_004ec184
    MOV EAX,[0x00616494]                ; 004ec169 | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x1e0     ; 004ec16e | g_CGameInstance.field4_0x4
    JLE 0x004ec184                      ; 004ec175
        ;   XREF to: 004ec184 (CONDITIONAL_JUMP)  ; LAB_004ec184
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec177 | g_CGameInstance.field4_0x4
    MOV dword ptr [EAX],0x280           ; 004ec17e | g_CGameInstance
    MOV EAX,[0x00616494]                ; 004ec184 | g_CGamePtr
        ;   Label: LAB_004ec184
    MOV EDX,dword ptr [EAX + 0x4]       ; 004ec189 | g_CGameInstance.field4_0x4
    CMP EDX,0xf0                        ; 004ec18c
    JNZ 0x004ec48c                      ; 004ec192
        ;   XREF to: 004ec48c (CONDITIONAL_JUMP)  ; LAB_004ec48c
    PUSH 0x5dcc98                       ; 004ec198 | = "Resolution : 320x240"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec19d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ec19d
    ADD ESP,0x4                         ; 004ec1a2
    PUSH EAX                            ; 004ec1a5
    PUSH 0x1d06150                      ; 004ec1a6
    CALL crt_unknown.c_FUN_005b7790     ; 004ec1ab
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004ec1b0
    MOV EAX,[0x00616494]                ; 004ec1b3 | g_CGamePtr
    MOV EBX,dword ptr [ESP + 0x23c]     ; 004ec1b8
    MOV dword ptr [EAX + 0xc],0x0       ; 004ec1bf | g_CGameInstance.field12_0xc
    TEST EBX,EBX                        ; 004ec1c6
    JZ 0x004ec50c                       ; 004ec1c8
        ;   XREF to: 004ec50c (CONDITIONAL_JUMP)  ; LAB_004ec50c
    XOR EDI,EDI                         ; 004ec1ce
    MOV EAX,[0x01d06a78]                ; 004ec1d0 | DAT_01d06a78
    MOV dword ptr [0x0264bba0],EDI      ; 004ec1d5 | DAT_0264bba0
    TEST EAX,EAX                        ; 004ec1db
    JNZ 0x004ec502                      ; 004ec1dd
        ;   XREF to: 004ec502 (CONDITIONAL_JUMP)  ; LAB_004ec502
    PUSH 0x5dcd42                       ; 004ec1e3 | = "No 3D Hardware"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec1e8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ec1e8
    ADD ESP,0x4                         ; 004ec1ed
    PUSH EAX                            ; 004ec1f0
    PUSH 0x1d06250                      ; 004ec1f1
    CALL crt_unknown.c_FUN_005b7790     ; 004ec1f6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004ec1fb
    CMP byte ptr [0x0061e180],0x0       ; 004ec1fe | DAT_0061e180
    JNZ 0x004ec529                      ; 004ec205
        ;   XREF to: 004ec529 (CONDITIONAL_JUMP)  ; LAB_004ec529
    PUSH 0x5dcd98                       ; 004ec20b | = "3D API : None"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec210
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ec210
    ADD ESP,0x4                         ; 004ec215
    PUSH EAX                            ; 004ec218
    PUSH 0x1d06350                      ; 004ec219
    CALL crt_unknown.c_FUN_005b7790     ; 004ec21e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004ec223
    CMP dword ptr [0x01d06a78],0x0      ; 004ec226 | DAT_01d06a78
    JNZ 0x004ec5b3                      ; 004ec22d
        ;   XREF to: 004ec5b3 (CONDITIONAL_JUMP)  ; LAB_004ec5b3
    PUSH 0x5dce3b                       ; 004ec233 | = "No 3D Hardware detected"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec238
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec23d
    PUSH EAX                            ; 004ec240
    PUSH 0x1d06450                      ; 004ec241
    CALL crt_unknown.c_FUN_005b7790     ; 004ec246
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x8                         ; 004ec24b
    PUSH 0x5dce64                       ; 004ec24e | = "Bits per pixel : "
        ;   Label: LAB_004ec24e
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec253
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec258
    MOV EDI,0x1d06550                   ; 004ec25b
    MOV ESI,EAX                         ; 004ec260
    PUSH EDI                            ; 004ec262
    MOV AL,byte ptr [ESI]               ; 004ec263
        ;   Label: LAB_004ec263
    MOV byte ptr [EDI],AL               ; 004ec265 | DAT_01d06550 | DAT_01d06552
    CMP AL,0x0                          ; 004ec267
    JZ 0x004ec27b                       ; 004ec269
        ;   XREF to: 004ec27b (CONDITIONAL_JUMP)  ; LAB_004ec27b
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec26b
    ADD ESI,0x2                         ; 004ec26e
    MOV byte ptr [EDI + 0x1],AL         ; 004ec271 | DAT_01d06551 | DAT_01d06553
    ADD EDI,0x2                         ; 004ec274
    CMP AL,0x0                          ; 004ec277
    JNZ 0x004ec263                      ; 004ec279
        ;   XREF to: 004ec263 (CONDITIONAL_JUMP)  ; LAB_004ec263
    POP EDI                             ; 004ec27b
        ;   Label: LAB_004ec27b
    MOV EAX,[0x00616494]                ; 004ec27c | g_CGamePtr
    MOV EBX,dword ptr [EAX + 0x8]       ; 004ec281 | g_CGameInstance.field8_0x8
    PUSH EBX                            ; 004ec284
    PUSH 0x5dce76                       ; 004ec285 | DAT_005dce76
    LEA EAX,[ESP + 0x8]                 ; 004ec28a
    PUSH EAX                            ; 004ec28e
    CALL crt_unknown.c_FUN_005b7790     ; 004ec28f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ec294
    MOV ESI,ESP                         ; 004ec297
    PUSH EDI                            ; 004ec299 | DAT_01d06550
    SUB ECX,ECX                         ; 004ec29a
    DEC ECX                             ; 004ec29c
    MOV AL,0x0                          ; 004ec29d
    SCASB.REPNE ES:EDI                  ; 004ec29f | DAT_01d06550 | DAT_01d06551
    DEC EDI                             ; 004ec2a1
    MOV AL,byte ptr [ESI]               ; 004ec2a2
        ;   Label: LAB_004ec2a2
    MOV byte ptr [EDI],AL               ; 004ec2a4 | DAT_01d06550 | DAT_01d06552 | DAT_01d06551
    CMP AL,0x0                          ; 004ec2a6
    JZ 0x004ec2ba                       ; 004ec2a8
        ;   XREF to: 004ec2ba (CONDITIONAL_JUMP)  ; LAB_004ec2ba
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec2aa
    ADD ESI,0x2                         ; 004ec2ad
    MOV byte ptr [EDI + 0x1],AL         ; 004ec2b0 | DAT_01d06551 | DAT_01d06553 | DAT_01d06552
    ADD EDI,0x2                         ; 004ec2b3
    CMP AL,0x0                          ; 004ec2b6
    JNZ 0x004ec2a2                      ; 004ec2b8
        ;   XREF to: 004ec2a2 (CONDITIONAL_JUMP)  ; LAB_004ec2a2
    POP EDI                             ; 004ec2ba
        ;   Label: LAB_004ec2ba
    PUSH 0x5dce79                       ; 004ec2bb | = "Monitor calibration"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec2c0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec2c5
    PUSH EAX                            ; 004ec2c8
    PUSH 0x1d06650                      ; 004ec2c9
    CALL crt_unknown.c_FUN_005b7790     ; 004ec2ce
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,[0x00616494]                ; 004ec2d3 | g_CGamePtr
    MOV ESI,dword ptr [EAX + 0x10]      ; 004ec2d8 | g_CGameInstance.field16_0x10
    ADD ESP,0x8                         ; 004ec2db
    TEST ESI,ESI                        ; 004ec2de
    JZ 0x004ec65a                       ; 004ec2e0
        ;   XREF to: 004ec65a (CONDITIONAL_JUMP)  ; LAB_004ec65a
    PUSH 0x5dce8d                       ; 004ec2e6 | = "Subtitles : On"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec2eb
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
        ;   Label: LAB_004ec2eb
    ADD ESP,0x4                         ; 004ec2f0
    MOV EDI,0x1d06750                   ; 004ec2f3
    MOV ESI,EAX                         ; 004ec2f8
    PUSH EDI                            ; 004ec2fa | DAT_01d06750
    MOV AL,byte ptr [ESI]               ; 004ec2fb
        ;   Label: LAB_004ec2fb
    MOV byte ptr [EDI],AL               ; 004ec2fd | DAT_01d06750 | DAT_01d06752
    CMP AL,0x0                          ; 004ec2ff
    JZ 0x004ec313                       ; 004ec301
        ;   XREF to: 004ec313 (CONDITIONAL_JUMP)  ; LAB_004ec313
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec303
    ADD ESI,0x2                         ; 004ec306
    MOV byte ptr [EDI + 0x1],AL         ; 004ec309 | DAT_01d06751 | DAT_01d06753
    ADD EDI,0x2                         ; 004ec30c
    CMP AL,0x0                          ; 004ec30f
    JNZ 0x004ec2fb                      ; 004ec311
        ;   XREF to: 004ec2fb (CONDITIONAL_JUMP)  ; LAB_004ec2fb
    POP EDI                             ; 004ec313
        ;   Label: LAB_004ec313
    MOV EAX,[0x00616494]                ; 004ec314 | g_CGamePtr
    CMP dword ptr [EAX + 0x20],0x0      ; 004ec319 | g_CGameInstance.field32_0x20
    JZ 0x004ec664                       ; 004ec31d
        ;   XREF to: 004ec664 (CONDITIONAL_JUMP)  ; LAB_004ec664
    PUSH 0x5dcec8                       ; 004ec323 | = "Particle Density : "
        ;   Label: LAB_004ec323
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec328
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec32d
    MOV EDI,0x1d06950                   ; 004ec330
    MOV ESI,EAX                         ; 004ec335
    PUSH EDI                            ; 004ec337
    MOV AL,byte ptr [ESI]               ; 004ec338
        ;   Label: LAB_004ec338
    MOV byte ptr [EDI],AL               ; 004ec33a | DAT_01d06950 | DAT_01d06952
    CMP AL,0x0                          ; 004ec33c
    JZ 0x004ec350                       ; 004ec33e
        ;   XREF to: 004ec350 (CONDITIONAL_JUMP)  ; LAB_004ec350
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec340
    ADD ESI,0x2                         ; 004ec343
    MOV byte ptr [EDI + 0x1],AL         ; 004ec346 | DAT_01d06951 | DAT_01d06953
    ADD EDI,0x2                         ; 004ec349
    CMP AL,0x0                          ; 004ec34c
    JNZ 0x004ec338                      ; 004ec34e
        ;   XREF to: 004ec338 (CONDITIONAL_JUMP)  ; LAB_004ec338
    POP EDI                             ; 004ec350
        ;   Label: LAB_004ec350
    FILD dword ptr [0x0061ec60]         ; 004ec351 | DAT_0061ec60
    FMUL double ptr [0x005dcf0d]        ; 004ec357 | DAT_005dcf0d
    SUB ESP,0x8                         ; 004ec35d
    FSTP double ptr [ESP]               ; 004ec360
    PUSH 0x5dcedc                       ; 004ec363 | = "%5.2f"
    LEA EAX,[ESP + 0x10c]               ; 004ec368
    PUSH EAX                            ; 004ec36f
    CALL crt_unknown.c_FUN_005b7790     ; 004ec370
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 004ec375
    LEA ESI,[ESP + 0x100]               ; 004ec378
    PUSH EDI                            ; 004ec37f | DAT_01d06950
    SUB ECX,ECX                         ; 004ec380
    DEC ECX                             ; 004ec382
    MOV AL,0x0                          ; 004ec383
    SCASB.REPNE ES:EDI                  ; 004ec385 | DAT_01d06950 | DAT_01d06951
    DEC EDI                             ; 004ec387
    MOV AL,byte ptr [ESI]               ; 004ec388
        ;   Label: LAB_004ec388
    MOV byte ptr [EDI],AL               ; 004ec38a | DAT_01d06950 | DAT_01d06952 | DAT_01d06951
    CMP AL,0x0                          ; 004ec38c
    JZ 0x004ec3a0                       ; 004ec38e
        ;   XREF to: 004ec3a0 (CONDITIONAL_JUMP)  ; LAB_004ec3a0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec390
    ADD ESI,0x2                         ; 004ec393
    MOV byte ptr [EDI + 0x1],AL         ; 004ec396 | DAT_01d06951 | DAT_01d06953 | DAT_01d06952
    ADD EDI,0x2                         ; 004ec399
    CMP AL,0x0                          ; 004ec39c
    JNZ 0x004ec388                      ; 004ec39e
        ;   XREF to: 004ec388 (CONDITIONAL_JUMP)  ; LAB_004ec388
    POP EDI                             ; 004ec3a0
        ;   Label: LAB_004ec3a0
    MOV EAX,[0x00616494]                ; 004ec3a1 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0x20]      ; 004ec3a6 | g_CGameInstance.field32_0x20
    MOV EBX,0x9                         ; 004ec3a9
    TEST ECX,ECX                        ; 004ec3ae
    JZ 0x004ec3b7                       ; 004ec3b0
        ;   XREF to: 004ec3b7 (CONDITIONAL_JUMP)  ; LAB_004ec3b7
    MOV EBX,0x8                         ; 004ec3b2
    PUSH 0x5dcee2                       ; 004ec3b7 | = "Graphic Options"
        ;   Label: LAB_004ec3b7
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec3bc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec3c1
    PUSH EAX                            ; 004ec3c4
    PUSH 0x122                          ; 004ec3c5
    LEA EAX,[ESP + 0x228]               ; 004ec3ca
    PUSH EAX                            ; 004ec3d1
    PUSH EBX                            ; 004ec3d2
    PUSH 0x1d06a50                      ; 004ec3d3
    CALL core_menu.cpp_FUN_004eb0e0     ; 004ec3d8
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; undefined core_menu.cpp_FUN_004eb0e0()
    ADD ESP,0x14                        ; 004ec3dd
    MOV EBX,EAX                         ; 004ec3e0
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004ec3e2
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    XOR EDX,EDX                         ; 004ec3e7
    CMP EBX,0x8                         ; 004ec3e9
    JA 0x004ec46d                       ; 004ec3ec
        ;   XREF to: 004ec46d (CONDITIONAL_JUMP)  ; caseD_2
    JMP dword ptr [EBX*0x4 + 0x4ebee0]  ; 004ec3f2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CMP dword ptr [0x01d0612c],0x1      ; 004ec3f9 | DAT_01d0612c
        ;   Label: caseD_0
    JNZ 0x004ec76d                      ; 004ec400
        ;   XREF to: 004ec76d (CONDITIONAL_JUMP)  ; LAB_004ec76d
    MOV EAX,[0x00616494]                ; 004ec406 | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0xf0      ; 004ec40b | g_CGameInstance.field4_0x4
    JNZ 0x004ec429                      ; 004ec412
        ;   XREF to: 004ec429 (CONDITIONAL_JUMP)  ; LAB_004ec429
    CMP dword ptr [ESP + 0x224],0x16e3600 ; 004ec414
    JLE 0x004ec429                      ; 004ec41f
        ;   XREF to: 004ec429 (CONDITIONAL_JUMP)  ; LAB_004ec429
    TEST EDX,EDX                        ; 004ec421
    JZ 0x004ec6d0                       ; 004ec423
        ;   XREF to: 004ec6d0 (CONDITIONAL_JUMP)  ; LAB_004ec6d0
    MOV EAX,[0x00616494]                ; 004ec429 | g_CGamePtr
        ;   Label: LAB_004ec429
    CMP dword ptr [EAX + 0x4],0xf0      ; 004ec42e | g_CGameInstance.field4_0x4
    JNZ 0x004ec44c                      ; 004ec435
        ;   XREF to: 004ec44c (CONDITIONAL_JUMP)  ; LAB_004ec44c
    CMP dword ptr [ESP + 0x224],0xb71b00 ; 004ec437
    JLE 0x004ec44c                      ; 004ec442
        ;   XREF to: 004ec44c (CONDITIONAL_JUMP)  ; LAB_004ec44c
    TEST EDX,EDX                        ; 004ec444
    JZ 0x004ec6e7                       ; 004ec446
        ;   XREF to: 004ec6e7 (CONDITIONAL_JUMP)  ; LAB_004ec6e7
    MOV EAX,[0x00616494]                ; 004ec44c | g_CGamePtr
        ;   Label: LAB_004ec44c
    MOV ESI,dword ptr [EAX + 0x4]       ; 004ec451 | g_CGameInstance.field4_0x4
    CMP ESI,0xf0                        ; 004ec454
    JNZ 0x004ec6f9                      ; 004ec45a
        ;   XREF to: 004ec6f9 (CONDITIONAL_JUMP)  ; LAB_004ec6f9
    MOV dword ptr [EAX + 0x4],0x1e0     ; 004ec460 | g_CGameInstance.field4_0x4
        ;   Label: LAB_004ec460
    MOV dword ptr [EAX],0x280           ; 004ec467 | g_CGameInstance
    PUSH 0x1                            ; 004ec46d
        ;   Label: caseD_2
    MOV EAX,[0x00617dd4]                ; 004ec46f | DAT_00617dd4
    PUSH EAX                            ; 004ec474 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ec475 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ec477
    ADD ESP,0x8                         ; 004ec47a
    TEST EAX,EAX                        ; 004ec47d
    JZ 0x004ebfc8                       ; 004ec47f
        ;   XREF to: 004ebfc8 (CONDITIONAL_JUMP)  ; LAB_004ebfc8
    MOV ESP,EBP                         ; 004ec485
    POP EBP                             ; 004ec487
    POP EDI                             ; 004ec488
    POP ESI                             ; 004ec489
    POP EBX                             ; 004ec48a
    RET                                 ; 004ec48b
    CMP EDX,0x12c                       ; 004ec48c
        ;   Label: LAB_004ec48c
    JZ 0x004ec4c6                       ; 004ec492
        ;   XREF to: 004ec4c6 (CONDITIONAL_JUMP)  ; LAB_004ec4c6
    CMP EDX,0x180                       ; 004ec494
    JZ 0x004ec4d0                       ; 004ec49a
        ;   XREF to: 004ec4d0 (CONDITIONAL_JUMP)  ; LAB_004ec4d0
    CMP EDX,0x1e0                       ; 004ec49c
    JZ 0x004ec4da                       ; 004ec4a2
        ;   XREF to: 004ec4da (CONDITIONAL_JUMP)  ; LAB_004ec4da
    CMP EDX,0x258                       ; 004ec4a4
    JZ 0x004ec4e4                       ; 004ec4aa
        ;   XREF to: 004ec4e4 (CONDITIONAL_JUMP)  ; LAB_004ec4e4
    CMP EDX,0x300                       ; 004ec4ac
    JZ 0x004ec4ee                       ; 004ec4b2
        ;   XREF to: 004ec4ee (CONDITIONAL_JUMP)  ; LAB_004ec4ee
    CMP EDX,0x3c0                       ; 004ec4b4
    JNZ 0x004ec4f8                      ; 004ec4ba
        ;   XREF to: 004ec4f8 (CONDITIONAL_JUMP)  ; LAB_004ec4f8
    PUSH 0x5dcd17                       ; 004ec4bc | = "Resolution : 1280x960"
    JMP 0x004ec19d                      ; 004ec4c1
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dccad                       ; 004ec4c6 | = "Resolution : 400x300"
        ;   Label: LAB_004ec4c6
    JMP 0x004ec19d                      ; 004ec4cb
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dccc2                       ; 004ec4d0 | = "Resolution : 512x384"
        ;   Label: LAB_004ec4d0
    JMP 0x004ec19d                      ; 004ec4d5
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dccd7                       ; 004ec4da | = "Resolution : 640x480"
        ;   Label: LAB_004ec4da
    JMP 0x004ec19d                      ; 004ec4df
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dccec                       ; 004ec4e4 | = "Resolution : 800x600"
        ;   Label: LAB_004ec4e4
    JMP 0x004ec19d                      ; 004ec4e9
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dcd01                       ; 004ec4ee | = "Resolution : 1024x768"
        ;   Label: LAB_004ec4ee
    JMP 0x004ec19d                      ; 004ec4f3
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dcd2d                       ; 004ec4f8 | = "Resolution : 320x240"
        ;   Label: LAB_004ec4f8
    JMP 0x004ec19d                      ; 004ec4fd
        ;   XREF to: 004ec19d (UNCONDITIONAL_JUMP)  ; LAB_004ec19d
    PUSH 0x5dcd51                       ; 004ec502 | = "Not enough video memory for 3D card"
        ;   Label: LAB_004ec502
    JMP 0x004ec1e8                      ; 004ec507
        ;   XREF to: 004ec1e8 (UNCONDITIONAL_JUMP)  ; LAB_004ec1e8
    CMP dword ptr [0x0264bba0],0x0      ; 004ec50c | DAT_0264bba0
        ;   Label: LAB_004ec50c
    JZ 0x004ec51f                       ; 004ec513
        ;   XREF to: 004ec51f (CONDITIONAL_JUMP)  ; LAB_004ec51f
    PUSH 0x5dcd75                       ; 004ec515 | = "3D Hardware : On"
    JMP 0x004ec1e8                      ; 004ec51a
        ;   XREF to: 004ec1e8 (UNCONDITIONAL_JUMP)  ; LAB_004ec1e8
    PUSH 0x5dcd86                       ; 004ec51f | = "3D Hardware : Off"
        ;   Label: LAB_004ec51f
    JMP 0x004ec1e8                      ; 004ec524
        ;   XREF to: 004ec1e8 (UNCONDITIONAL_JUMP)  ; LAB_004ec1e8
    PUSH 0x5dcda6                       ; 004ec529 | = "trid3d.dll"
        ;   Label: LAB_004ec529
    PUSH 0x61e180                       ; 004ec52e | DAT_0061e180
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004ec533
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ec538
    TEST EAX,EAX                        ; 004ec53b
    JNZ 0x004ec549                      ; 004ec53d
        ;   XREF to: 004ec549 (CONDITIONAL_JUMP)  ; LAB_004ec549
    PUSH 0x5dcdb1                       ; 004ec53f | = "3D API : DirectX 5"
    JMP 0x004ec210                      ; 004ec544
        ;   XREF to: 004ec210 (UNCONDITIONAL_JUMP)  ; LAB_004ec210
    PUSH 0x5dcdc4                       ; 004ec549 | = "tridx6.dll"
        ;   Label: LAB_004ec549
    PUSH 0x61e180                       ; 004ec54e | DAT_0061e180
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004ec553
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ec558
    TEST EAX,EAX                        ; 004ec55b
    JNZ 0x004ec569                      ; 004ec55d
        ;   XREF to: 004ec569 (CONDITIONAL_JUMP)  ; LAB_004ec569
    PUSH 0x5dcdcf                       ; 004ec55f | = "3D API : DirectX 6"
    JMP 0x004ec210                      ; 004ec564
        ;   XREF to: 004ec210 (UNCONDITIONAL_JUMP)  ; LAB_004ec210
    PUSH 0x5dcde2                       ; 004ec569 | = "tridx7.dll"
        ;   Label: LAB_004ec569
    PUSH 0x61e180                       ; 004ec56e | DAT_0061e180
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004ec573
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ec578
    TEST EAX,EAX                        ; 004ec57b
    JNZ 0x004ec589                      ; 004ec57d
        ;   XREF to: 004ec589 (CONDITIONAL_JUMP)  ; LAB_004ec589
    PUSH 0x5dcded                       ; 004ec57f | = "3D API : DirectX 7"
    JMP 0x004ec210                      ; 004ec584
        ;   XREF to: 004ec210 (UNCONDITIONAL_JUMP)  ; LAB_004ec210
    PUSH 0x5dce00                       ; 004ec589 | = "tri3dfx.dll"
        ;   Label: LAB_004ec589
    PUSH 0x61e180                       ; 004ec58e | DAT_0061e180
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004ec593
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004ec598
    TEST EAX,EAX                        ; 004ec59b
    JNZ 0x004ec5a9                      ; 004ec59d
        ;   XREF to: 004ec5a9 (CONDITIONAL_JUMP)  ; LAB_004ec5a9
    PUSH 0x5dce0c                       ; 004ec59f | = "3D API : Voodoo Blit Emulation"
    JMP 0x004ec210                      ; 004ec5a4
        ;   XREF to: 004ec210 (UNCONDITIONAL_JUMP)  ; LAB_004ec210
    PUSH 0x5dce2b                       ; 004ec5a9 | = "3D API : Custom"
        ;   Label: LAB_004ec5a9
    JMP 0x004ec210                      ; 004ec5ae
        ;   XREF to: 004ec210 (UNCONDITIONAL_JUMP)  ; LAB_004ec210
    PUSH 0x5dce53                       ; 004ec5b3 | = "3D Card : "
        ;   Label: LAB_004ec5b3
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec5b8
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec5bd
    MOV EDI,0x1d06450                   ; 004ec5c0
    MOV ESI,EAX                         ; 004ec5c5
    PUSH EDI                            ; 004ec5c7
    MOV AL,byte ptr [ESI]               ; 004ec5c8
        ;   Label: LAB_004ec5c8
    MOV byte ptr [EDI],AL               ; 004ec5ca | DAT_01d06450 | DAT_01d06452
    CMP AL,0x0                          ; 004ec5cc
    JZ 0x004ec5e0                       ; 004ec5ce
        ;   XREF to: 004ec5e0 (CONDITIONAL_JUMP)  ; LAB_004ec5e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec5d0
    ADD ESI,0x2                         ; 004ec5d3
    MOV byte ptr [EDI + 0x1],AL         ; 004ec5d6 | DAT_01d06451 | DAT_01d06453
    ADD EDI,0x2                         ; 004ec5d9
    CMP AL,0x0                          ; 004ec5dc
    JNZ 0x004ec5c8                      ; 004ec5de
        ;   XREF to: 004ec5c8 (CONDITIONAL_JUMP)  ; LAB_004ec5c8
    POP EDI                             ; 004ec5e0
        ;   Label: LAB_004ec5e0
    MOV ESI,dword ptr [0x01d06a74]      ; 004ec5e1 | DAT_01d06a74
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06abc] ; 004ec5e7 | DAT_01d06abc
    PUSH EDI                            ; 004ec5ee | DAT_01d06450
    SUB ECX,ECX                         ; 004ec5ef
    DEC ECX                             ; 004ec5f1
    MOV AL,0x0                          ; 004ec5f2
    SCASB.REPNE ES:EDI                  ; 004ec5f4 | DAT_01d06450 | DAT_01d06451
    DEC EDI                             ; 004ec5f6
    MOV AL,byte ptr [ESI]               ; 004ec5f7
        ;   Label: LAB_004ec5f7
    MOV byte ptr [EDI],AL               ; 004ec5f9 | DAT_01d06450 | DAT_01d06452 | DAT_01d06451
    CMP AL,0x0                          ; 004ec5fb
    JZ 0x004ec60f                       ; 004ec5fd
        ;   XREF to: 004ec60f (CONDITIONAL_JUMP)  ; LAB_004ec60f
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec5ff
    ADD ESI,0x2                         ; 004ec602
    MOV byte ptr [EDI + 0x1],AL         ; 004ec605 | DAT_01d06451 | DAT_01d06453 | DAT_01d06452
    ADD EDI,0x2                         ; 004ec608
    CMP AL,0x0                          ; 004ec60b
    JNZ 0x004ec5f7                      ; 004ec60d
        ;   XREF to: 004ec5f7 (CONDITIONAL_JUMP)  ; LAB_004ec5f7
    POP EDI                             ; 004ec60f
        ;   Label: LAB_004ec60f
    MOV ECX,dword ptr [0x01d06a74]      ; 004ec610 | DAT_01d06a74
    PUSH ECX                            ; 004ec616
    PUSH 0x5dce5e                       ; 004ec617 | = " (%d)"
    LEA EAX,[ESP + 0x208]               ; 004ec61c
    PUSH EAX                            ; 004ec623
    CALL crt_unknown.c_FUN_005b7790     ; 004ec624
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004ec629
    LEA ESI,[ESP + 0x200]               ; 004ec62c
    PUSH EDI                            ; 004ec633 | DAT_01d06450
    SUB ECX,ECX                         ; 004ec634
    DEC ECX                             ; 004ec636
    MOV AL,0x0                          ; 004ec637
    SCASB.REPNE ES:EDI                  ; 004ec639 | DAT_01d06450 | DAT_01d06451
    DEC EDI                             ; 004ec63b
    MOV AL,byte ptr [ESI]               ; 004ec63c
        ;   Label: LAB_004ec63c
    MOV byte ptr [EDI],AL               ; 004ec63e | DAT_01d06450 | DAT_01d06452 | DAT_01d06451
    CMP AL,0x0                          ; 004ec640
    JZ 0x004ec654                       ; 004ec642
        ;   XREF to: 004ec654 (CONDITIONAL_JUMP)  ; LAB_004ec654
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec644
    ADD ESI,0x2                         ; 004ec647
    MOV byte ptr [EDI + 0x1],AL         ; 004ec64a | DAT_01d06451 | DAT_01d06453 | DAT_01d06452
    ADD EDI,0x2                         ; 004ec64d
    CMP AL,0x0                          ; 004ec650
    JNZ 0x004ec63c                      ; 004ec652
        ;   XREF to: 004ec63c (CONDITIONAL_JUMP)  ; LAB_004ec63c
    POP EDI                             ; 004ec654
        ;   Label: LAB_004ec654
    JMP 0x004ec24e                      ; 004ec655
        ;   XREF to: 004ec24e (UNCONDITIONAL_JUMP)  ; LAB_004ec24e
    PUSH 0x5dce9c                       ; 004ec65a | = "Subtitles : Off"
        ;   Label: LAB_004ec65a
    JMP 0x004ec2eb                      ; 004ec65f
        ;   XREF to: 004ec2eb (UNCONDITIONAL_JUMP)  ; LAB_004ec2eb
    CMP dword ptr [EAX + 0x18],0x0      ; 004ec664 | g_CGameInstance.field24_0x18
        ;   Label: LAB_004ec664
    JZ 0x004ec69d                       ; 004ec668
        ;   XREF to: 004ec69d (CONDITIONAL_JUMP)  ; LAB_004ec69d
    PUSH 0x5dceac                       ; 004ec66a | = "Rating: Mature"
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec66f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec674
    MOV EDI,0x1d06850                   ; 004ec677
    MOV ESI,EAX                         ; 004ec67c
    PUSH EDI                            ; 004ec67e
    MOV AL,byte ptr [ESI]               ; 004ec67f
        ;   Label: LAB_004ec67f
    MOV byte ptr [EDI],AL               ; 004ec681 | DAT_01d06850 | DAT_01d06852
    CMP AL,0x0                          ; 004ec683
    JZ 0x004ec697                       ; 004ec685
        ;   XREF to: 004ec697 (CONDITIONAL_JUMP)  ; LAB_004ec697
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec687
    ADD ESI,0x2                         ; 004ec68a
    MOV byte ptr [EDI + 0x1],AL         ; 004ec68d | DAT_01d06851 | DAT_01d06853
    ADD EDI,0x2                         ; 004ec690
    CMP AL,0x0                          ; 004ec693
    JNZ 0x004ec67f                      ; 004ec695
        ;   XREF to: 004ec67f (CONDITIONAL_JUMP)  ; LAB_004ec67f
    POP EDI                             ; 004ec697
        ;   Label: LAB_004ec697
    JMP 0x004ec323                      ; 004ec698
        ;   XREF to: 004ec323 (UNCONDITIONAL_JUMP)  ; LAB_004ec323
    PUSH 0x5dcebb                       ; 004ec69d | = "Rating: Teen"
        ;   Label: LAB_004ec69d
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec6a2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec6a7
    MOV EDI,0x1d06850                   ; 004ec6aa
    MOV ESI,EAX                         ; 004ec6af
    PUSH EDI                            ; 004ec6b1 | DAT_01d06850
    MOV AL,byte ptr [ESI]               ; 004ec6b2
        ;   Label: LAB_004ec6b2
    MOV byte ptr [EDI],AL               ; 004ec6b4 | DAT_01d06850 | DAT_01d06852
    CMP AL,0x0                          ; 004ec6b6
    JZ 0x004ec6ca                       ; 004ec6b8
        ;   XREF to: 004ec6ca (CONDITIONAL_JUMP)  ; LAB_004ec6ca
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec6ba
    ADD ESI,0x2                         ; 004ec6bd
    MOV byte ptr [EDI + 0x1],AL         ; 004ec6c0 | DAT_01d06851 | DAT_01d06853
    ADD EDI,0x2                         ; 004ec6c3
    CMP AL,0x0                          ; 004ec6c6
    JNZ 0x004ec6b2                      ; 004ec6c8
        ;   XREF to: 004ec6b2 (CONDITIONAL_JUMP)  ; LAB_004ec6b2
    POP EDI                             ; 004ec6ca
        ;   Label: LAB_004ec6ca
    JMP 0x004ec323                      ; 004ec6cb
        ;   XREF to: 004ec323 (UNCONDITIONAL_JUMP)  ; LAB_004ec323
    MOV EAX,[0x00616494]                ; 004ec6d0 | g_CGamePtr
        ;   Label: LAB_004ec6d0
    MOV dword ptr [EAX],0x500           ; 004ec6d5 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x3c0     ; 004ec6db | g_CGameInstance.field4_0x4
    JMP 0x004ec46d                      ; 004ec6e2
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV dword ptr [EAX + 0x4],0x300     ; 004ec6e7 | g_CGameInstance.field4_0x4
        ;   Label: LAB_004ec6e7
    MOV dword ptr [EAX],0x400           ; 004ec6ee | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec6f4
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x12c                       ; 004ec6f9
        ;   Label: LAB_004ec6f9
    JNZ 0x004ec713                      ; 004ec6ff
        ;   XREF to: 004ec713 (CONDITIONAL_JUMP)  ; LAB_004ec713
    MOV dword ptr [EAX + 0x4],0xf0      ; 004ec701 | g_CGameInstance.field4_0x4
    MOV dword ptr [EAX],0x140           ; 004ec708 | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec70e
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x180                       ; 004ec713
        ;   Label: LAB_004ec713
    JNZ 0x004ec72d                      ; 004ec719
        ;   XREF to: 004ec72d (CONDITIONAL_JUMP)  ; LAB_004ec72d
    MOV dword ptr [EAX + 0x4],0xf0      ; 004ec71b | g_CGameInstance.field4_0x4
        ;   Label: LAB_004ec71b
    MOV dword ptr [EAX],0x140           ; 004ec722 | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec728
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x1e0                       ; 004ec72d
        ;   Label: LAB_004ec72d
    JNZ 0x004ec747                      ; 004ec733
        ;   XREF to: 004ec747 (CONDITIONAL_JUMP)  ; LAB_004ec747
    MOV dword ptr [EAX + 0x4],0x180     ; 004ec735 | g_CGameInstance.field4_0x4
    MOV dword ptr [EAX],0x200           ; 004ec73c | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec742
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x258                       ; 004ec747
        ;   Label: LAB_004ec747
    JZ 0x004ec460                       ; 004ec74d
        ;   XREF to: 004ec460 (CONDITIONAL_JUMP)  ; LAB_004ec460
    CMP ESI,0x300                       ; 004ec753
    JNZ 0x004ec71b                      ; 004ec759
        ;   XREF to: 004ec71b (CONDITIONAL_JUMP)  ; LAB_004ec71b
    MOV dword ptr [EAX + 0x4],0x258     ; 004ec75b | g_CGameInstance.field4_0x4
        ;   Label: LAB_004ec75b
    MOV dword ptr [EAX],0x320           ; 004ec762 | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec768
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EAX,[0x00616494]                ; 004ec76d | g_CGamePtr
        ;   Label: LAB_004ec76d
    MOV ESI,dword ptr [EAX + 0x4]       ; 004ec772 | g_CGameInstance.field4_0x4
    CMP ESI,0xf0                        ; 004ec775
    JNZ 0x004ec78f                      ; 004ec77b
        ;   XREF to: 004ec78f (CONDITIONAL_JUMP)  ; LAB_004ec78f
    MOV dword ptr [EAX],0x200           ; 004ec77d | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x180     ; 004ec783 | g_CGameInstance.field4_0x4
    JMP 0x004ec46d                      ; 004ec78a
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x12c                       ; 004ec78f
        ;   Label: LAB_004ec78f
    JNZ 0x004ec7a9                      ; 004ec795
        ;   XREF to: 004ec7a9 (CONDITIONAL_JUMP)  ; LAB_004ec7a9
    MOV dword ptr [EAX],0x200           ; 004ec797 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0x180     ; 004ec79d | g_CGameInstance.field4_0x4
    JMP 0x004ec46d                      ; 004ec7a4
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0x180                       ; 004ec7a9
        ;   Label: LAB_004ec7a9
    JZ 0x004ec460                       ; 004ec7af
        ;   XREF to: 004ec460 (CONDITIONAL_JUMP)  ; LAB_004ec460
    CMP dword ptr [ESP + 0x224],0xb71b00 ; 004ec7b5
    JLE 0x004ec7ce                      ; 004ec7c0
        ;   XREF to: 004ec7ce (CONDITIONAL_JUMP)  ; LAB_004ec7ce
    CMP ESI,0x1e0                       ; 004ec7c2
    JNZ 0x004ec7ce                      ; 004ec7c8
        ;   XREF to: 004ec7ce (CONDITIONAL_JUMP)  ; LAB_004ec7ce
    TEST EDX,EDX                        ; 004ec7ca
    JZ 0x004ec75b                       ; 004ec7cc
        ;   XREF to: 004ec75b (CONDITIONAL_JUMP)  ; LAB_004ec75b
    CMP dword ptr [ESP + 0x224],0xb71b00 ; 004ec7ce
        ;   Label: LAB_004ec7ce
    JLE 0x004ec7f1                      ; 004ec7d9
        ;   XREF to: 004ec7f1 (CONDITIONAL_JUMP)  ; LAB_004ec7f1
    MOV EAX,[0x00616494]                ; 004ec7db | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x258     ; 004ec7e0 | g_CGameInstance.field4_0x4
    JNZ 0x004ec7f1                      ; 004ec7e7
        ;   XREF to: 004ec7f1 (CONDITIONAL_JUMP)  ; LAB_004ec7f1
    TEST EDX,EDX                        ; 004ec7e9
    JZ 0x004ec6e7                       ; 004ec7eb
        ;   XREF to: 004ec6e7 (CONDITIONAL_JUMP)  ; LAB_004ec6e7
    CMP dword ptr [ESP + 0x224],0x16e3600 ; 004ec7f1
        ;   Label: LAB_004ec7f1
    JLE 0x004ec810                      ; 004ec7fc
        ;   XREF to: 004ec810 (CONDITIONAL_JUMP)  ; LAB_004ec810
    MOV EAX,[0x00616494]                ; 004ec7fe | g_CGamePtr
    CMP dword ptr [EAX + 0x4],0x300     ; 004ec803 | g_CGameInstance.field4_0x4
    JNZ 0x004ec810                      ; 004ec80a
        ;   XREF to: 004ec810 (CONDITIONAL_JUMP)  ; LAB_004ec810
    TEST EDX,EDX                        ; 004ec80c
    JZ 0x004ec827                       ; 004ec80e
        ;   XREF to: 004ec827 (CONDITIONAL_JUMP)  ; LAB_004ec827
    MOV EAX,[0x00616494]                ; 004ec810 | g_CGamePtr
        ;   Label: LAB_004ec810
    MOV dword ptr [EAX],0x140           ; 004ec815 | g_CGameInstance
    MOV dword ptr [EAX + 0x4],0xf0      ; 004ec81b | g_CGameInstance.field4_0x4
    JMP 0x004ec46d                      ; 004ec822
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV dword ptr [EAX + 0x4],0x3c0     ; 004ec827 | g_CGameInstance.field4_0x4
        ;   Label: LAB_004ec827
    MOV dword ptr [EAX],0x500           ; 004ec82e | g_CGameInstance
    JMP 0x004ec46d                      ; 004ec834
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP dword ptr [0x0264bba0],0x0      ; 004ec839 | DAT_0264bba0
        ;   Label: caseD_1
    SETZ AL                             ; 004ec840
    AND EAX,0xff                        ; 004ec843
    MOV [0x0264bba0],EAX                ; 004ec848 | DAT_0264bba0
    JZ 0x004ec868                       ; 004ec84d
        ;   XREF to: 004ec868 (CONDITIONAL_JUMP)  ; LAB_004ec868
    CALL engine_special.cpp_kill_FUN_0055f4d0 ; 004ec84f
        ;   XREF to: 0055f4d0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_kill_FUN_0055f4d0()
    PUSH 0x0                            ; 004ec854
    CALL engine_special.cpp_FUN_0055e8c0 ; 004ec856
        ;   XREF to: 0055e8c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_0055e8c0(HWND window_handle)
    MOV EDX,dword ptr [0x0264bba0]      ; 004ec85b | DAT_0264bba0
    ADD ESP,0x4                         ; 004ec861
    TEST EDX,EDX                        ; 004ec864
    JNZ 0x004ec873                      ; 004ec866
        ;   XREF to: 004ec873 (CONDITIONAL_JUMP)  ; LAB_004ec873
    MOV dword ptr [0x01d06a78],EDX      ; 004ec868 | DAT_01d06a78
        ;   Label: LAB_004ec868
    JMP 0x004ec46d                      ; 004ec86e
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    PUSH 0x1d06b3c                      ; 004ec873
        ;   Label: LAB_004ec873
    PUSH 0x1d06afc                      ; 004ec878
    PUSH 0x1d06abc                      ; 004ec87d
    PUSH 0x1d06a7c                      ; 004ec882
    PUSH 0x1d06a78                      ; 004ec887 | DAT_01d06a78
    CALL engine_special.cpp_FUN_005600e0 ; 004ec88c
        ;   XREF to: 005600e0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_005600e0()
    ADD ESP,0x14                        ; 004ec891
    LEA EAX,[ESP + 0x22c]               ; 004ec894
    PUSH EAX                            ; 004ec89b
    LEA EAX,[ESP + 0x22c]               ; 004ec89c
    PUSH EAX                            ; 004ec8a3
    LEA EAX,[ESP + 0x22c]               ; 004ec8a4
    PUSH EAX                            ; 004ec8ab
    CALL engine_special.cpp_FUN_00560090 ; 004ec8ac
        ;   XREF to: 00560090 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_00560090(int * total_memory, int * available_memory, int * memory_type)
    ADD ESP,0xc                         ; 004ec8b1
    JMP 0x004ec46d                      ; 004ec8b4
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EDI,dword ptr [0x01d06a78]      ; 004ec8b9 | DAT_01d06a78
        ;   Label: caseD_3
    TEST EDI,EDI                        ; 004ec8bf
    JNZ 0x004ec8ce                      ; 004ec8c1
        ;   XREF to: 004ec8ce (CONDITIONAL_JUMP)  ; LAB_004ec8ce
    MOV dword ptr [0x01d06a74],EDX      ; 004ec8c3 | DAT_01d06a74
    JMP 0x004ec46d                      ; 004ec8c9
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EAX,[0x01d06a74]                ; 004ec8ce | DAT_01d06a74
        ;   Label: LAB_004ec8ce
    INC EAX                             ; 004ec8d3
    MOV [0x01d06a74],EAX                ; 004ec8d4 | DAT_01d06a74
    CMP EAX,EDI                         ; 004ec8d9
    JL 0x004ec8e3                       ; 004ec8db
        ;   XREF to: 004ec8e3 (CONDITIONAL_JUMP)  ; LAB_004ec8e3
    MOV dword ptr [0x01d06a74],EDX      ; 004ec8dd | DAT_01d06a74
    MOV EBX,dword ptr [0x01d06a74]      ; 004ec8e3 | DAT_01d06a74
        ;   Label: LAB_004ec8e3
    PUSH EBX                            ; 004ec8e9
    CALL engine_special.cpp_FUN_005600c0 ; 004ec8ea
        ;   XREF to: 005600c0 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_FUN_005600c0(int card_index)
    ADD ESP,0x4                         ; 004ec8ef
    JMP 0x004ec46d                      ; 004ec8f2
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EAX,[0x00616494]                ; 004ec8f7 | g_CGamePtr
        ;   Label: caseD_4
    CMP dword ptr [EAX + 0x8],0x10      ; 004ec8fc | g_CGameInstance.field8_0x8
    JNZ 0x004ec90e                      ; 004ec900
        ;   XREF to: 004ec90e (CONDITIONAL_JUMP)  ; LAB_004ec90e
    MOV dword ptr [EAX + 0x8],0x20      ; 004ec902 | g_CGameInstance.field8_0x8
    JMP 0x004ec46d                      ; 004ec909
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV dword ptr [EAX + 0x8],0x10      ; 004ec90e | g_CGameInstance.field8_0x8
        ;   Label: LAB_004ec90e
    JMP 0x004ec46d                      ; 004ec915
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CALL core_menu.cpp_showCalibrationTest_FUN_004ebe30 ; 004ec91a
        ;   XREF to: 004ebe30 (UNCONDITIONAL_CALL)  ; void core_menu.cpp_showCalibrationTest_FUN_004ebe30()
        ;   Label: caseD_5
    JMP 0x004ec46d                      ; 004ec91f
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EAX,[0x00616494]                ; 004ec924 | g_CGamePtr
        ;   Label: caseD_6
    CMP dword ptr [EAX + 0x10],0x0      ; 004ec929 | g_CGameInstance.field16_0x10
    SETZ DL                             ; 004ec92d
    AND EDX,0xff                        ; 004ec930
    MOV dword ptr [EAX + 0x10],EDX      ; 004ec936 | g_CGameInstance.field16_0x10
    JMP 0x004ec46d                      ; 004ec939
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    MOV EAX,[0x00616494]                ; 004ec93e | g_CGamePtr
        ;   Label: caseD_7
    CMP dword ptr [EAX + 0x18],0x0      ; 004ec943 | g_CGameInstance.field24_0x18
    SETZ DL                             ; 004ec947
    AND EDX,0xff                        ; 004ec94a
    MOV dword ptr [EAX + 0x18],EDX      ; 004ec950 | g_CGameInstance.field24_0x18
    MOV dword ptr [EAX + 0x14],EDX      ; 004ec953 | g_CGameInstance.field20_0x14
    MOV dword ptr [EAX + 0x1c],EDX      ; 004ec956 | g_CGameInstance.field28_0x1c
    JMP 0x004ec46d                      ; 004ec959
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    PUSH 0x5dcef2                       ; 004ec95e | = "Adjust Particle Density"
        ;   Label: caseD_8
    CALL support_newmsg.cpp_getLocalizedString_FUN_0050fe80 ; 004ec963
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_0050fe80(char * key)
    ADD ESP,0x4                         ; 004ec968
    MOV EDX,dword ptr [0x006141b8]      ; 004ec96b | DAT_006141b8
    PUSH 0x0                            ; 004ec971
    LEA EDX,[EDX + EDX*0x2]             ; 004ec973
    PUSH EAX                            ; 004ec976
    MOV EAX,EDX                         ; 004ec977
    SAR EDX,0x1f                        ; 004ec979
    SHL EDX,0x2                         ; 004ec97c
    SBB EAX,EDX                         ; 004ec97f
    SAR EAX,0x2                         ; 004ec981
    PUSH 0x2c                           ; 004ec984
    PUSH EAX                            ; 004ec986
    MOV EBX,dword ptr [0x006138e0]      ; 004ec987 | g_CEditorToolsPtr
    PUSH EBX                            ; 004ec98d
    CALL shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0 ; 004ec98e
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredModal_FUN_0047e1d0(CEditorTools * this_ptr, int min_width, int min_height, char * text_content, ...)
    MOV ESI,dword ptr [0x0061ec60]      ; 004ec993 | DAT_0061ec60
    ADD ESP,0x14                        ; 004ec999
    CMP ESI,0x3fff                      ; 004ec99c
    JGE 0x004ecb9a                      ; 004ec9a2
        ;   XREF to: 004ecb9a (CONDITIONAL_JUMP)  ; LAB_004ecb9a
    MOV dword ptr [0x0061ec60],0x3fff   ; 004ec9a8 | DAT_0061ec60
        ;   Label: LAB_004ec9a8
    MOV ESI,dword ptr [0x0061ec60]      ; 004ec9b2 | DAT_0061ec60
        ;   Label: LAB_004ec9b2
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 004ec9b8
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,[0x01c2a380]                ; 004ec9bd | DAT_01c2a380
    MOV EBX,0xc000                      ; 004ec9c2
    PUSH EAX                            ; 004ec9c7
    MOV EAX,[0x006141b8]                ; 004ec9c8 | DAT_006141b8
    LEA EDX,[ESI + 0xffffc001]          ; 004ec9cd
    DEC EAX                             ; 004ec9d3
    IMUL EDX                            ; 004ec9d4
    IDIV EBX                            ; 004ec9d6
    PUSH EAX                            ; 004ec9d8
    CALL wincore_winrun.cpp_setCursorPosition_FUN_0058ed10 ; 004ec9d9
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_setCursorPosition_FUN_0058ed10(int x, int y)
    ADD ESP,0x8                         ; 004ec9de
    XOR EDX,EDX                         ; 004ec9e1
    MOV dword ptr [ESP + 0x230],EDX     ; 004ec9e3
    MOV EDI,dword ptr [0x006138e0]      ; 004ec9ea | g_CEditorToolsPtr
        ;   Label: LAB_004ec9ea
    PUSH EDI                            ; 004ec9f0
    CALL shape_edittool.cpp_FUN_0047e870 ; 004ec9f1
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e870()
    ADD ESP,0x4                         ; 004ec9f6
    MOV EDX,dword ptr [0x01c2a37c]      ; 004ec9f9 | DAT_01c2a37c
    CMP EDX,dword ptr [ESP + 0x230]     ; 004ec9ff
    JZ 0x004eca2c                       ; 004eca06
        ;   XREF to: 004eca2c (CONDITIONAL_JUMP)  ; LAB_004eca2c
    MOV EBX,dword ptr [0x006141b8]      ; 004eca08 | DAT_006141b8
    MOV EAX,EDX                         ; 004eca0e
    MOV EDX,0xc000                      ; 004eca10
    DEC EBX                             ; 004eca15
    IMUL EDX                            ; 004eca16
    IDIV EBX                            ; 004eca18
    LEA ESI,[EAX + 0x3fff]              ; 004eca1a
    MOV EAX,[0x01c2a37c]                ; 004eca20 | DAT_01c2a37c
    MOV dword ptr [ESP + 0x230],EAX     ; 004eca25
    PUSH 0x4b                           ; 004eca2c
        ;   Label: LAB_004eca2c
    MOV EAX,[0x00617dd4]                ; 004eca2e | DAT_00617dd4
    PUSH EAX                            ; 004eca33 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eca34 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eca36
    ADD ESP,0x8                         ; 004eca39
    TEST EAX,EAX                        ; 004eca3c
    JZ 0x004eca46                       ; 004eca3e
        ;   XREF to: 004eca46 (CONDITIONAL_JUMP)  ; LAB_004eca46
    SUB ESI,0x2bc                       ; 004eca40
    PUSH 0x4d                           ; 004eca46
        ;   Label: LAB_004eca46
    MOV EAX,[0x00617dd4]                ; 004eca48 | DAT_00617dd4
    PUSH EAX                            ; 004eca4d | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eca4e | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eca50
    ADD ESP,0x8                         ; 004eca53
    TEST EAX,EAX                        ; 004eca56
    JZ 0x004eca60                       ; 004eca58
        ;   XREF to: 004eca60 (CONDITIONAL_JUMP)  ; LAB_004eca60
    ADD ESI,0x2bc                       ; 004eca5a
    CMP ESI,0x3fff                      ; 004eca60
        ;   Label: LAB_004eca60
    JGE 0x004ecbd8                      ; 004eca66
        ;   XREF to: 004ecbd8 (CONDITIONAL_JUMP)  ; LAB_004ecbd8
    MOV ESI,0x3fff                      ; 004eca6c
    MOV EAX,[0x01c35e4c]                ; 004eca71 | DAT_01c35e4c
        ;   Label: LAB_004eca71
    INC EAX                             ; 004eca76
    PUSH 0xff                           ; 004eca77
    MOV dword ptr [ESP + 0x238],EAX     ; 004eca7c
    MOV EAX,[0x01c35e54]                ; 004eca83 | DAT_01c35e54
    PUSH 0x0                            ; 004eca88
    DEC EAX                             ; 004eca8a
    MOV EBX,dword ptr [0x01c35e50]      ; 004eca8b | DAT_01c35e50
    PUSH EAX                            ; 004eca91
    DEC EBX                             ; 004eca92
    MOV dword ptr [ESP + 0x244],EAX     ; 004eca93
    PUSH EBX                            ; 004eca9a
    MOV EAX,dword ptr [ESP + 0x244]     ; 004eca9b
    MOV EDI,dword ptr [0x01c35e48]      ; 004ecaa2 | DAT_01c35e48
    PUSH EAX                            ; 004ecaa8
    INC EDI                             ; 004ecaa9
    PUSH EDI                            ; 004ecaaa
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 004ecaab
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 004ecab0
    LEA EDX,[ESI + 0xffffc001]          ; 004ecab3
    MOV EAX,EBX                         ; 004ecab9
    MOV EBX,0xc000                      ; 004ecabb
    SUB EAX,EDI                         ; 004ecac0
    IMUL EDX                            ; 004ecac2
    IDIV EBX                            ; 004ecac4
    PUSH 0x4                            ; 004ecac6
    MOV EDX,dword ptr [ESP + 0x23c]     ; 004ecac8
    PUSH EDX                            ; 004ecacf
    ADD EAX,EDI                         ; 004ecad0
    PUSH EAX                            ; 004ecad2
    MOV ECX,dword ptr [ESP + 0x240]     ; 004ecad3
    PUSH ECX                            ; 004ecada
    PUSH EDI                            ; 004ecadb
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004ecadc
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004ecae1
    MOV dword ptr [ESP + 0x240],ESI     ; 004ecae4
    FILD dword ptr [ESP + 0x240]        ; 004ecaeb
    FMUL double ptr [0x005dcf15]        ; 004ecaf2 | DAT_005dcf15
    SUB ESP,0x8                         ; 004ecaf8
    FSTP double ptr [ESP]               ; 004ecafb
    PUSH 0x5dcb35                       ; 004ecafe | = "%4.2f"
    PUSH 0x0                            ; 004ecb03
    PUSH 0xff                           ; 004ecb05
    MOV EDX,dword ptr [0x01c35e4c]      ; 004ecb0a | DAT_01c35e4c
    PUSH 0x41                           ; 004ecb10
    MOV EDI,dword ptr [0x01c25590]      ; 004ecb12 | DAT_01c25590
    MOV EBX,dword ptr [0x01c35e54]      ; 004ecb18 | DAT_01c35e54
    PUSH EDI                            ; 004ecb1e
    ADD EBX,EDX                         ; 004ecb1f
    CALL engine_font.cpp_FUN_004ab560   ; 004ecb21
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab560(CBitFont * this_ptr, int char_code)
    MOV EDX,EBX                         ; 004ecb26
    SUB EDX,EAX                         ; 004ecb28
    MOV EAX,EDX                         ; 004ecb2a
    SAR EDX,0x1f                        ; 004ecb2c
    SUB EAX,EDX                         ; 004ecb2f
    SAR EAX,0x1                         ; 004ecb31
    ADD ESP,0x8                         ; 004ecb33
    PUSH EAX                            ; 004ecb36
    MOV EAX,[0x01c35e50]                ; 004ecb37 | DAT_01c35e50
    PUSH EAX                            ; 004ecb3c
    MOV EDX,dword ptr [0x01c35e48]      ; 004ecb3d | DAT_01c35e48
    PUSH EDX                            ; 004ecb43
    MOV ECX,dword ptr [0x01c25590]      ; 004ecb44 | DAT_01c25590
    PUSH ECX                            ; 004ecb4a
    CALL engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0 ; 004ecb4b
        ;   XREF to: 004a93f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004a93f0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x24                        ; 004ecb50
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 004ecb53
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    PUSH 0x1                            ; 004ecb58
    MOV EAX,[0x00617dd4]                ; 004ecb5a | DAT_00617dd4
    PUSH EAX                            ; 004ecb5f | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ecb60 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ecb62
    ADD ESP,0x8                         ; 004ecb65
    TEST EAX,EAX                        ; 004ecb68
    JNZ 0x004ecb86                      ; 004ecb6a
        ;   XREF to: 004ecb86 (CONDITIONAL_JUMP)  ; LAB_004ecb86
    PUSH 0x1c                           ; 004ecb6c
    MOV EAX,[0x00617dd4]                ; 004ecb6e | DAT_00617dd4
    PUSH EAX                            ; 004ecb73 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ecb74 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ecb76
    ADD ESP,0x8                         ; 004ecb79
    TEST EAX,EAX                        ; 004ecb7c
    JZ 0x004ecbee                       ; 004ecb7e
        ;   XREF to: 004ecbee (CONDITIONAL_JUMP)  ; LAB_004ecbee
    MOV dword ptr [0x0061ec60],ESI      ; 004ecb80 | DAT_0061ec60
        ;   Label: LAB_004ecb80
    MOV EBX,dword ptr [0x006138e0]      ; 004ecb86 | g_CEditorToolsPtr
        ;   Label: LAB_004ecb86
    PUSH EBX                            ; 004ecb8c
    CALL shape_edittool.cpp_FUN_0047e760 ; 004ecb8d
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 004ecb92
    JMP 0x004ec46d                      ; 004ecb95
        ;   XREF to: 004ec46d (UNCONDITIONAL_JUMP)  ; caseD_2
    CMP ESI,0xffff                      ; 004ecb9a
        ;   Label: LAB_004ecb9a
    JLE 0x004ecbb1                      ; 004ecba0
        ;   XREF to: 004ecbb1 (CONDITIONAL_JUMP)  ; LAB_004ecbb1
    MOV dword ptr [0x0061ec60],0xffff   ; 004ecba2 | DAT_0061ec60
    JMP 0x004ec9b2                      ; 004ecbac
        ;   XREF to: 004ec9b2 (UNCONDITIONAL_JUMP)  ; LAB_004ec9b2
    CMP ESI,0x3fff                      ; 004ecbb1
        ;   Label: LAB_004ecbb1
    JL 0x004ec9a8                       ; 004ecbb7
        ;   XREF to: 004ec9a8 (CONDITIONAL_JUMP)  ; LAB_004ec9a8
    CMP ESI,0xffff                      ; 004ecbbd
    JLE 0x004ec9b2                      ; 004ecbc3
        ;   XREF to: 004ec9b2 (CONDITIONAL_JUMP)  ; LAB_004ec9b2
    MOV dword ptr [0x0061ec60],0xffff   ; 004ecbc9 | DAT_0061ec60
    JMP 0x004ec9b2                      ; 004ecbd3
        ;   XREF to: 004ec9b2 (UNCONDITIONAL_JUMP)  ; LAB_004ec9b2
    CMP ESI,0xffff                      ; 004ecbd8
        ;   Label: LAB_004ecbd8
    JLE 0x004eca71                      ; 004ecbde
        ;   XREF to: 004eca71 (CONDITIONAL_JUMP)  ; LAB_004eca71
    MOV ESI,0xffff                      ; 004ecbe4
    JMP 0x004eca71                      ; 004ecbe9
        ;   XREF to: 004eca71 (UNCONDITIONAL_JUMP)  ; LAB_004eca71
    PUSH 0x200                          ; 004ecbee
        ;   Label: LAB_004ecbee
    MOV EAX,[0x00617dd4]                ; 004ecbf3 | DAT_00617dd4
    PUSH EAX                            ; 004ecbf8 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004ecbf9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004ecbfb
    ADD ESP,0x8                         ; 004ecbfe
    TEST EAX,EAX                        ; 004ecc01
    JNZ 0x004ecb80                      ; 004ecc03
        ;   XREF to: 004ecb80 (CONDITIONAL_JUMP)  ; LAB_004ecb80
    JMP 0x004ec9ea                      ; 004ecc09
        ;   XREF to: 004ec9ea (UNCONDITIONAL_JUMP)  ; LAB_004ec9ea

