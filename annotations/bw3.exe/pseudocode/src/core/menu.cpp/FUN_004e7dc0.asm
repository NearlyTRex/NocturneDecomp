; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_menu_cpp_FUN_004e7dc0(void)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_menu.cpp_FUN_004e8f2e at 004e8f45
;   core_menu.cpp_FUN_004e8f80 at 004e94ad
;   core_menu.cpp_FUN_004eae80 at 004ebe19
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_005c724d
;   TerminatedCString s_Center_gamepad_press_ENT_005c7256
;   TerminatedCString s_Move_gamepad_in_all_dire_005c7272
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_00600284
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01549aa0
;   undefined4 DAT_01c6e250
;   undefined4 DAT_01c6e254
;   undefined4 DAT_01c6e260
;   undefined4 g_CGameInstance.field188_0xbc
;   undefined4 g_CGameInstance.field192_0xc0
;   undefined4 g_CGameInstance.field196_0xc4
;   undefined4 g_CGameInstance.field200_0xc8
;   undefined4 g_CGameInstance.field204_0xcc
;   ... and 6 more
;
; Called Functions:
;   core_game.cpp_CGame_resetKeyState_FUN_004b93e0
;   core_moon.cpp_FUN_004f9670
;   core_set.cpp_FUN_0053b100
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_font.cpp_FUN_004b0a20
;   engine_font.cpp_FUN_004b2a80
;   engine_font.cpp_FUN_004b30f0
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   wincore_wddvmem.cpp_FUN_0057a8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7dc0
        ;   Label: core_menu.cpp_FUN_004e7dc0
    PUSH ESI                            ; 004e7dc1
    PUSH EDI                            ; 004e7dc2
    PUSH EBP                            ; 004e7dc3
    SUB ESP,0x214                       ; 004e7dc4
    MOV EDI,0x7fffffff                  ; 004e7dca
    XOR EBP,EBP                         ; 004e7dcf
    MOV ESI,EDI                         ; 004e7dd1
    MOV dword ptr [ESP + 0x210],EBP     ; 004e7dd3
    PUSH 0x1d72cb0                      ; 004e7dda
        ;   Label: LAB_004e7dda
    CALL core_moon.cpp_FUN_004f9670     ; 004e7ddf
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_004f9670()
    ADD ESP,0x4                         ; 004e7de4
    PUSH 0x5c7256                       ; 004e7de7 | = "Center gamepad, press ENTER"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e7dec
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e7df1
    PUSH EAX                            ; 004e7df4
    MOV ECX,dword ptr [0x01549aa0]      ; 004e7df5 | DAT_01549aa0
    PUSH ECX                            ; 004e7dfb
    MOV EBX,EAX                         ; 004e7dfc
    CALL engine_font.cpp_FUN_004b2a80   ; 004e7dfe
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004e7e03
    SAR EDX,0x1f                        ; 004e7e05
    SUB EAX,EDX                         ; 004e7e08
    SAR EAX,0x1                         ; 004e7e0a
    ADD ESP,0x8                         ; 004e7e0c
    MOV EDX,0x140                       ; 004e7e0f
    PUSH 0x58                           ; 004e7e14
    SUB EDX,EAX                         ; 004e7e16
    MOV EAX,[0x01549aa0]                ; 004e7e18 | DAT_01549aa0
    PUSH EAX                            ; 004e7e1d
    MOV dword ptr [ESP + 0x208],EDX     ; 004e7e1e
    CALL engine_font.cpp_FUN_004b30f0   ; 004e7e25
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004e7e2a
    SAR EDX,0x1f                        ; 004e7e2c
    SUB EAX,EDX                         ; 004e7e2f
    SAR EAX,0x1                         ; 004e7e31
    ADD ESP,0x8                         ; 004e7e33
    PUSH 0x0                            ; 004e7e36
    MOV EDX,0xf0                        ; 004e7e38
    PUSH 0x7                            ; 004e7e3d
    SUB EDX,EAX                         ; 004e7e3f
    PUSH EDX                            ; 004e7e41
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004e7e42
    PUSH EDX                            ; 004e7e49
    PUSH EBX                            ; 004e7e4a
    MOV ECX,dword ptr [0x01549aa0]      ; 004e7e4b | DAT_01549aa0
    PUSH ECX                            ; 004e7e51
    CALL engine_font.cpp_FUN_004b0a20   ; 004e7e52
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e7e57
    MOV EBX,dword ptr [0x01c6e260]      ; 004e7e5a | DAT_01c6e260
    PUSH EBX                            ; 004e7e60
    MOV EAX,[0x01c6e254]                ; 004e7e61 | DAT_01c6e254
    PUSH EAX                            ; 004e7e66
    MOV EDX,dword ptr [0x01c6e250]      ; 004e7e67 | DAT_01c6e250
    PUSH EDX                            ; 004e7e6d
    PUSH 0x5c724d                       ; 004e7e6e | = "%d,%d,%x"
    LEA EAX,[ESP + 0x110]               ; 004e7e73
    PUSH EAX                            ; 004e7e7a
    CALL crt_unknown.c_FUN_005a28c0     ; 004e7e7b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 004e7e80
    PUSH 0x0                            ; 004e7e83
    PUSH 0x0                            ; 004e7e85
    LEA EAX,[ESP + 0x108]               ; 004e7e87
    PUSH EAX                            ; 004e7e8e
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004e7e8f
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e7e94
    MOV ECX,dword ptr [0x005fe9dc]      ; 004e7e97 | g_CGamePtr
    PUSH ECX                            ; 004e7e9d
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b93e0 ; 004e7e9e
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b93e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e7ea3
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 004e7ea6
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    PUSH 0x1c                           ; 004e7eab
    MOV EAX,[0x00600284]                ; 004e7ead | DAT_00600284
    PUSH EAX                            ; 004e7eb2 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7eb3 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7eb5
    ADD ESP,0x8                         ; 004e7eb8
    TEST EAX,EAX                        ; 004e7ebb
    JZ 0x004e8046                       ; 004e7ebd
        ;   XREF to: 004e8046 (CONDITIONAL_JUMP)  ; LAB_004e8046
    PUSH 0x10000                        ; 004e7ec3
        ;   Label: LAB_004e7ec3
    PUSH 0xc350                         ; 004e7ec8
    PUSH 0xc350                         ; 004e7ecd
    MOV EAX,[0x00603b28]                ; 004e7ed2 | g_CDemonSetPtr
    PUSH EAX                            ; 004e7ed7 | g_CDemonSetInstance
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004e7ed8 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL core_set.cpp_FUN_0053b100      ; 004e7ee2
        ;   XREF to: 0053b100 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_0053b100(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 004e7ee7
    MOV EAX,[0x00603b28]                ; 004e7eea | g_CDemonSetPtr
    PUSH 0x1d72cb0                      ; 004e7eef
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004e7ef4 | g_CDemonSetInstance.field1420948_0x15ae94
    CALL core_moon.cpp_FUN_004f9670     ; 004e7efe
        ;   XREF to: 004f9670 (UNCONDITIONAL_CALL)  ; undefined core_moon.cpp_FUN_004f9670()
    ADD ESP,0x4                         ; 004e7f03
    MOV EAX,[0x00603b28]                ; 004e7f06 | g_CDemonSetPtr
    PUSH 0x5c7272                       ; 004e7f0b | = "Move gamepad in all directions, press..."
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004e7f10 | g_CDemonSetInstance.field1420932_0x15ae84
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004e7f1a
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004e7f1f
    PUSH EAX                            ; 004e7f22
    MOV EBX,EAX                         ; 004e7f23
    MOV EAX,[0x01549aa0]                ; 004e7f25 | DAT_01549aa0
    PUSH EAX                            ; 004e7f2a
    CALL engine_font.cpp_FUN_004b2a80   ; 004e7f2b
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004e7f30
    SAR EDX,0x1f                        ; 004e7f32
    SUB EAX,EDX                         ; 004e7f35
    SAR EAX,0x1                         ; 004e7f37
    MOV EDX,0x140                       ; 004e7f39
    ADD ESP,0x8                         ; 004e7f3e
    SUB EDX,EAX                         ; 004e7f41
    PUSH 0x58                           ; 004e7f43
    MOV dword ptr [ESP + 0x208],EDX     ; 004e7f45
    MOV EDX,dword ptr [0x01549aa0]      ; 004e7f4c | DAT_01549aa0
    PUSH EDX                            ; 004e7f52
    CALL engine_font.cpp_FUN_004b30f0   ; 004e7f53
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004e7f58
    SAR EDX,0x1f                        ; 004e7f5a
    SUB EAX,EDX                         ; 004e7f5d
    SAR EAX,0x1                         ; 004e7f5f
    ADD ESP,0x8                         ; 004e7f61
    PUSH 0x0                            ; 004e7f64
    MOV EDX,0xf0                        ; 004e7f66
    PUSH 0x7                            ; 004e7f6b
    SUB EDX,EAX                         ; 004e7f6d
    PUSH EDX                            ; 004e7f6f
    MOV ECX,dword ptr [ESP + 0x210]     ; 004e7f70
    PUSH ECX                            ; 004e7f77
    PUSH EBX                            ; 004e7f78
    MOV EBX,dword ptr [0x01549aa0]      ; 004e7f79 | DAT_01549aa0
    PUSH EBX                            ; 004e7f7f
    CALL engine_font.cpp_FUN_004b0a20   ; 004e7f80
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b0a20()
    ADD ESP,0x18                        ; 004e7f85
    MOV EAX,[0x01c6e260]                ; 004e7f88 | DAT_01c6e260
    PUSH EAX                            ; 004e7f8d
    MOV EDX,dword ptr [0x01c6e254]      ; 004e7f8e | DAT_01c6e254
    PUSH EDX                            ; 004e7f94
    MOV ECX,dword ptr [0x01c6e250]      ; 004e7f95 | DAT_01c6e250
    PUSH ECX                            ; 004e7f9b
    PUSH 0x5c724d                       ; 004e7f9c | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 004e7fa1
    PUSH EAX                            ; 004e7fa5
    CALL crt_unknown.c_FUN_005a28c0     ; 004e7fa6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 004e7fab
    PUSH 0x0                            ; 004e7fae
    PUSH 0x0                            ; 004e7fb0
    LEA EAX,[ESP + 0x8]                 ; 004e7fb2
    PUSH EAX                            ; 004e7fb6
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 004e7fb7
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004e7fbc
    MOV EBX,dword ptr [0x005fe9dc]      ; 004e7fbf | g_CGamePtr
    PUSH EBX                            ; 004e7fc5
    CALL core_game.cpp_CGame_resetKeyState_FUN_004b93e0 ; 004e7fc6
        ;   XREF to: 004b93e0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetKeyState_FUN_004b93e0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004e7fcb
    CALL wincore_wddvmem.cpp_FUN_0057a8a0 ; 004e7fce
        ;   XREF to: 0057a8a0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_0057a8a0()
    PUSH 0x1c                           ; 004e7fd3
    MOV EAX,[0x00600284]                ; 004e7fd5 | DAT_00600284
    PUSH EAX                            ; 004e7fda | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7fdb | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7fdd
    ADD ESP,0x8                         ; 004e7fe0
    TEST EAX,EAX                        ; 004e7fe3
    JNZ 0x004e809d                      ; 004e7fe5
        ;   XREF to: 004e809d (CONDITIONAL_JUMP)  ; LAB_004e809d
    PUSH 0x1                            ; 004e7feb
    MOV EAX,[0x00600284]                ; 004e7fed | DAT_00600284
    PUSH EAX                            ; 004e7ff2 | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e7ff3 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e7ff5
    ADD ESP,0x8                         ; 004e7ff8
    TEST EAX,EAX                        ; 004e7ffb
    JNZ 0x004e8077                      ; 004e7ffd
        ;   XREF to: 004e8077 (CONDITIONAL_JUMP)  ; LAB_004e8077
    MOV EAX,[0x01c6e250]                ; 004e8003 | DAT_01c6e250
    CMP EDI,EAX                         ; 004e8008
    JLE 0x004e800e                      ; 004e800a
        ;   XREF to: 004e800e (CONDITIONAL_JUMP)  ; LAB_004e800e
    MOV EDI,EAX                         ; 004e800c
    MOV EDX,dword ptr [0x01c6e250]      ; 004e800e | DAT_01c6e250
        ;   Label: LAB_004e800e
    CMP EBP,EDX                         ; 004e8014
    JGE 0x004e801a                      ; 004e8016
        ;   XREF to: 004e801a (CONDITIONAL_JUMP)  ; LAB_004e801a
    MOV EBP,EDX                         ; 004e8018
    MOV ECX,dword ptr [0x01c6e254]      ; 004e801a | DAT_01c6e254
        ;   Label: LAB_004e801a
    CMP ESI,ECX                         ; 004e8020
    JLE 0x004e8026                      ; 004e8022
        ;   XREF to: 004e8026 (CONDITIONAL_JUMP)  ; LAB_004e8026
    MOV ESI,ECX                         ; 004e8024
    MOV EBX,dword ptr [ESP + 0x210]     ; 004e8026
        ;   Label: LAB_004e8026
    MOV EAX,[0x01c6e254]                ; 004e802d | DAT_01c6e254
    CMP EAX,EBX                         ; 004e8032
    JLE 0x004e7ec3                      ; 004e8034
        ;   XREF to: 004e7ec3 (CONDITIONAL_JUMP)  ; LAB_004e7ec3
    MOV dword ptr [ESP + 0x210],EAX     ; 004e803a
    JMP 0x004e7ec3                      ; 004e8041
        ;   XREF to: 004e7ec3 (UNCONDITIONAL_JUMP)  ; LAB_004e7ec3
    PUSH 0x1                            ; 004e8046
        ;   Label: LAB_004e8046
    MOV EAX,[0x00600284]                ; 004e8048 | DAT_00600284
    PUSH EAX                            ; 004e804d | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 004e804e | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 004e8050
    ADD ESP,0x8                         ; 004e8053
    TEST EAX,EAX                        ; 004e8056
    JNZ 0x004e8077                      ; 004e8058
        ;   XREF to: 004e8077 (CONDITIONAL_JUMP)  ; LAB_004e8077
    MOV EAX,[0x01c6e250]                ; 004e805a | DAT_01c6e250
    MOV dword ptr [ESP + 0x208],EAX     ; 004e805f
    MOV EAX,[0x01c6e254]                ; 004e8066 | DAT_01c6e254
    MOV dword ptr [ESP + 0x20c],EAX     ; 004e806b
    JMP 0x004e7dda                      ; 004e8072
        ;   XREF to: 004e7dda (UNCONDITIONAL_JUMP)  ; LAB_004e7dda
    MOV EAX,[0x005fe9dc]                ; 004e8077 | g_CGamePtr
        ;   Label: LAB_004e8077
    MOV dword ptr [EAX + 0xbc],0x0      ; 004e807c | g_CGameInstance.field188_0xbc
    MOV dword ptr [EAX + 0xd4],0x0      ; 004e8086 | g_CGameInstance.field212_0xd4
    XOR EAX,EAX                         ; 004e8090
    ADD ESP,0x214                       ; 004e8092
    POP EBP                             ; 004e8098
    POP EDI                             ; 004e8099
    POP ESI                             ; 004e809a
    POP EBX                             ; 004e809b
    RET                                 ; 004e809c
    MOV EAX,[0x005fe9dc]                ; 004e809d | g_CGamePtr
        ;   Label: LAB_004e809d
    MOV EDX,dword ptr [ESP + 0x208]     ; 004e80a2
    MOV dword ptr [EAX + 0xbc],EDX      ; 004e80a9 | g_CGameInstance.field188_0xbc
    MOV dword ptr [EAX + 0xc4],EDI      ; 004e80af | g_CGameInstance.field196_0xc4
    MOV dword ptr [EAX + 0xc8],EBP      ; 004e80b5 | g_CGameInstance.field200_0xc8
    MOV dword ptr [EAX + 0xcc],ESI      ; 004e80bb | g_CGameInstance.field204_0xcc
    MOV EDX,dword ptr [ESP + 0x20c]     ; 004e80c1
    MOV dword ptr [EAX + 0xc0],EDX      ; 004e80c8 | g_CGameInstance.field192_0xc0
    MOV EDX,dword ptr [ESP + 0x210]     ; 004e80ce
    MOV dword ptr [EAX + 0xd0],EDX      ; 004e80d5 | g_CGameInstance.field208_0xd0
    MOV EAX,0x1                         ; 004e80db
    ADD ESP,0x214                       ; 004e80e0
    POP EBP                             ; 004e80e6
    POP EDI                             ; 004e80e7
    POP ESI                             ; 004e80e8
    POP EBX                             ; 004e80e9
    RET                                 ; 004e80ea

