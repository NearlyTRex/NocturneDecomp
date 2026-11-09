; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_render_FUN_00491bf0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x3b4]:8  local_3b4
; undefined        Stack[-0x3a8]:1  local_3a8
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined        Stack[-0x218]:1  local_218
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7843
;
; Referenced Globals:
;   TerminatedCString s_Game_Flag_s_005bf4db
;   TerminatedCString s_Persistent_s_005bf4e9
;   TerminatedCString s_Timer_5_2f_s_005bf4f8
;   TerminatedCString s_s_d_005bf508
;   TerminatedCString s_s_s_005bf50e
;   TerminatedCString s_s_s_1f_005bf514
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00495280
;   crt_unknown.c_FUN_005a28c0
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491bf0
        ;   Label: core_event.cpp_CEventList_render_FUN_00491bf0
    PUSH ESI                            ; 00491bf1
    PUSH EDI                            ; 00491bf2
    PUSH EBP                            ; 00491bf3
    SUB ESP,0x398                       ; 00491bf4
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 00491bfa
    MOV EBX,0x2c                        ; 00491c01
    MOV EDX,dword ptr [ESI + 0x1908]    ; 00491c06
    XOR EDI,EDI                         ; 00491c0c
    TEST EDX,EDX                        ; 00491c0e
    JLE 0x00491c60                      ; 00491c10
        ;   XREF to: 00491c60 (CONDITIONAL_JUMP)  ; LAB_00491c60
    LEA EBP,[ESI + 0x190c]              ; 00491c12
    PUSH EBP                            ; 00491c18
        ;   Label: LAB_00491c18
    PUSH 0x5bf4db                       ; 00491c19 | = "Game Flag: %s"
    LEA EAX,[ESP + 0x198]               ; 00491c1e
    PUSH EAX                            ; 00491c25
    CALL crt_unknown.c_FUN_005a28c0     ; 00491c26
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00491c2b
    PUSH EBX                            ; 00491c2e
    PUSH 0x0                            ; 00491c2f
    LEA EAX,[ESP + 0x198]               ; 00491c31
    INC EDI                             ; 00491c38
    PUSH EAX                            ; 00491c39
    ADD EBP,0x20                        ; 00491c3a
    ADD EBX,0xb                         ; 00491c3d
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491c40
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV ECX,dword ptr [ESI + 0x1908]    ; 00491c45
    ADD ESP,0xc                         ; 00491c4b
    CMP EDI,ECX                         ; 00491c4e
    JL 0x00491c18                       ; 00491c50
        ;   XREF to: 00491c18 (CONDITIONAL_JUMP)  ; LAB_00491c18
    LEA EAX,[EAX]                       ; 00491c52
    LEA EDX,[EDX]                       ; 00491c58
    MOV EAX,EAX                         ; 00491c5e
    MOV EDI,dword ptr [ESI + 0x258c]    ; 00491c60
        ;   Label: LAB_00491c60
    XOR EBP,EBP                         ; 00491c66
    TEST EDI,EDI                        ; 00491c68
    JLE 0x00491cb0                      ; 00491c6a
        ;   XREF to: 00491cb0 (CONDITIONAL_JUMP)  ; LAB_00491cb0
    LEA EDI,[ESI + 0x2590]              ; 00491c6c
    PUSH EDI                            ; 00491c72
        ;   Label: LAB_00491c72
    PUSH 0x5bf4e9                       ; 00491c73 | = "Persistent: %s"
    LEA EAX,[ESP + 0x8]                 ; 00491c78
    PUSH EAX                            ; 00491c7c
    CALL crt_unknown.c_FUN_005a28c0     ; 00491c7d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00491c82
    PUSH EBX                            ; 00491c85
    PUSH 0x0                            ; 00491c86
    LEA EAX,[ESP + 0x8]                 ; 00491c88
    INC EBP                             ; 00491c8c
    PUSH EAX                            ; 00491c8d
    ADD EDI,0x20                        ; 00491c8e
    ADD EBX,0xb                         ; 00491c91
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491c94
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [ESI + 0x258c]    ; 00491c99
    ADD ESP,0xc                         ; 00491c9f
    CMP EBP,EAX                         ; 00491ca2
    JL 0x00491c72                       ; 00491ca4
        ;   XREF to: 00491c72 (CONDITIONAL_JUMP)  ; LAB_00491c72
    LEA EAX,[EAX]                       ; 00491ca6
    LEA EDX,[EDX]                       ; 00491cac
    MOV EDX,dword ptr [ESI + 0x3210]    ; 00491cb0
        ;   Label: LAB_00491cb0
    XOR EDI,EDI                         ; 00491cb6
    TEST EDX,EDX                        ; 00491cb8
    JLE 0x00491d30                      ; 00491cba
        ;   XREF to: 00491d30 (CONDITIONAL_JUMP)  ; LAB_00491d30
    LEA EBP,[ESI + 0x3214]              ; 00491cc0
    MOV dword ptr [ESP + 0x384],ESI     ; 00491cc6
    PUSH EBP                            ; 00491ccd
        ;   Label: LAB_00491ccd
    MOV EAX,dword ptr [ESP + 0x388]     ; 00491cce
    SUB ESP,0x8                         ; 00491cd5
    FLD float ptr [EAX + 0x3354]        ; 00491cd8
    FSTP double ptr [ESP]               ; 00491cde
    PUSH 0x5bf4f8                       ; 00491ce1 | = "Timer: %5.2f %s"
    LEA EAX,[ESP + 0xd8]                ; 00491ce6
    PUSH EAX                            ; 00491ced
    CALL crt_unknown.c_FUN_005a28c0     ; 00491cee
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x14                        ; 00491cf3
    PUSH EBX                            ; 00491cf6
    PUSH 0x0                            ; 00491cf7
    LEA EAX,[ESP + 0xd0]                ; 00491cf9
    PUSH EAX                            ; 00491d00
    INC EDI                             ; 00491d01
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491d02
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00491d07
    ADD EBP,0x20                        ; 00491d0a
    MOV ECX,dword ptr [ESP + 0x384]     ; 00491d0d
    ADD EBX,0xb                         ; 00491d14
    ADD ECX,0x4                         ; 00491d17
    MOV EAX,dword ptr [ESI + 0x3210]    ; 00491d1a
    MOV dword ptr [ESP + 0x384],ECX     ; 00491d20
    CMP EDI,EAX                         ; 00491d27
    JL 0x00491ccd                       ; 00491d29
        ;   XREF to: 00491ccd (CONDITIONAL_JUMP)  ; LAB_00491ccd
    LEA EAX,[EAX]                       ; 00491d2b
    MOV ECX,ECX                         ; 00491d2e
    MOV EDX,dword ptr [ESI + 0xc84]     ; 00491d30
        ;   Label: LAB_00491d30
    XOR EBP,EBP                         ; 00491d36
    TEST EDX,EDX                        ; 00491d38
    JLE 0x00491d60                      ; 00491d3a
        ;   XREF to: 00491d60 (CONDITIONAL_JUMP)  ; LAB_00491d60
    LEA EDI,[ESI + 0xc88]               ; 00491d3c
    PUSH EBX                            ; 00491d42
        ;   Label: LAB_00491d42
    PUSH 0x0                            ; 00491d43
    PUSH EDI                            ; 00491d45
    INC EBP                             ; 00491d46
    ADD EBX,0xb                         ; 00491d47
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491d4a
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00491d4f
    MOV ECX,dword ptr [ESI + 0xc84]     ; 00491d52
    ADD EDI,0x20                        ; 00491d58
    CMP EBP,ECX                         ; 00491d5b
    JL 0x00491d42                       ; 00491d5d
        ;   XREF to: 00491d42 (CONDITIONAL_JUMP)  ; LAB_00491d42
    NOP                                 ; 00491d5f
    MOV EDI,dword ptr [ESI + 0x337c]    ; 00491d60
        ;   Label: LAB_00491d60
    XOR EBP,EBP                         ; 00491d66
    TEST EDI,EDI                        ; 00491d68
    JLE 0x00491de0                      ; 00491d6a
        ;   XREF to: 00491de0 (CONDITIONAL_JUMP)  ; LAB_00491de0
    LEA EAX,[ESI + 0x3380]              ; 00491d6c
    MOV dword ptr [ESP + 0x38c],EAX     ; 00491d72
    MOV EDI,ESI                         ; 00491d79
    MOV EAX,dword ptr [EDI + 0x34c0]    ; 00491d7b
        ;   Label: LAB_00491d7b
    PUSH EAX                            ; 00491d81
    MOV EDX,dword ptr [ESP + 0x390]     ; 00491d82
    PUSH EDX                            ; 00491d89
    PUSH 0x5bf508                       ; 00491d8a | = "%s=%d"
    LEA EAX,[ESP + 0x32c]               ; 00491d8f
    PUSH EAX                            ; 00491d96
    CALL crt_unknown.c_FUN_005a28c0     ; 00491d97
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00491d9c
    PUSH EBX                            ; 00491d9f
    PUSH 0x0                            ; 00491da0
    LEA EAX,[ESP + 0x328]               ; 00491da2
    PUSH EAX                            ; 00491da9
    ADD EDI,0x4                         ; 00491daa
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491dad
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00491db2
    INC EBP                             ; 00491db5
    MOV ECX,dword ptr [ESP + 0x38c]     ; 00491db6
    ADD EBX,0xb                         ; 00491dbd
    ADD ECX,0x20                        ; 00491dc0
    MOV EAX,dword ptr [ESI + 0x337c]    ; 00491dc3
    MOV dword ptr [ESP + 0x38c],ECX     ; 00491dc9
    CMP EBP,EAX                         ; 00491dd0
    JL 0x00491d7b                       ; 00491dd2
        ;   XREF to: 00491d7b (CONDITIONAL_JUMP)  ; LAB_00491d7b
    LEA EAX,[EAX]                       ; 00491dd4
    LEA EDX,[EDX]                       ; 00491dda
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 00491de0
        ;   Label: LAB_00491de0
    XOR EBP,EBP                         ; 00491de6
    TEST EDX,EDX                        ; 00491de8
    JLE 0x00491e60                      ; 00491dea
        ;   XREF to: 00491e60 (CONDITIONAL_JUMP)  ; LAB_00491e60
    LEA EDI,[ESI + 0x37da]              ; 00491dec
    LEA EAX,[ESI + 0x34ec]              ; 00491df2
    MOV dword ptr [ESP + 0x390],EAX     ; 00491df8
    PUSH EDI                            ; 00491dff
        ;   Label: LAB_00491dff
    MOV ECX,dword ptr [ESP + 0x394]     ; 00491e00
    PUSH ECX                            ; 00491e07
    PUSH 0x5bf50e                       ; 00491e08 | = "%s=%s"
    LEA EAX,[ESP + 0x2c8]               ; 00491e0d
    PUSH EAX                            ; 00491e14
    CALL crt_unknown.c_FUN_005a28c0     ; 00491e15
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x10                        ; 00491e1a
    PUSH EBX                            ; 00491e1d
    PUSH 0x0                            ; 00491e1e
    LEA EAX,[ESP + 0x2c4]               ; 00491e20
    PUSH EAX                            ; 00491e27
    INC EBP                             ; 00491e28
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491e29
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00491e2e
    ADD EDI,0x1e                        ; 00491e31
    MOV EAX,dword ptr [ESP + 0x390]     ; 00491e34
    ADD EBX,0xb                         ; 00491e3b
    ADD EAX,0x1e                        ; 00491e3e
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 00491e41
    MOV dword ptr [ESP + 0x390],EAX     ; 00491e47
    CMP EBP,EDX                         ; 00491e4e
    JL 0x00491dff                       ; 00491e50
        ;   XREF to: 00491dff (CONDITIONAL_JUMP)  ; LAB_00491dff
    LEA EAX,[EAX]                       ; 00491e52
    LEA EDX,[EDX]                       ; 00491e58
    MOV EAX,EAX                         ; 00491e5e
    PUSH ESI                            ; 00491e60
        ;   Label: LAB_00491e60
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00495280 ; 00491e61
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00495280(CEventList * this_ptr)
    ADD ESP,0x4                         ; 00491e66
    XOR ECX,ECX                         ; 00491e69
    MOV EDI,dword ptr [ESI + 0x3ac8]    ; 00491e6b
    MOV dword ptr [ESP + 0x394],ECX     ; 00491e71
    TEST EDI,EDI                        ; 00491e78
    JLE 0x00491f10                      ; 00491e7a
        ;   XREF to: 00491f10 (CONDITIONAL_JUMP)  ; LAB_00491f10
    LEA EAX,[ESI + 0x3ad0]              ; 00491e80
    LEA EBP,[ESI + 0x3ae4]              ; 00491e86
    MOV dword ptr [ESP + 0x388],EAX     ; 00491e8c
    MOV EDI,ESI                         ; 00491e93
    MOV EAX,dword ptr [EDI + 0x3be8]    ; 00491e95
        ;   Label: LAB_00491e95
    PUSH EAX                            ; 00491e9b
    MOV EDX,dword ptr [EDI + 0x3be4]    ; 00491e9c
    PUSH EDX                            ; 00491ea2
    PUSH EBP                            ; 00491ea3
    MOV ECX,dword ptr [ESP + 0x394]     ; 00491ea4
    PUSH ECX                            ; 00491eab
    PUSH 0x5bf514                       ; 00491eac | = "%s=%s %.1f"
    LEA EAX,[ESP + 0x26c]               ; 00491eb1
    PUSH EAX                            ; 00491eb8
    CALL crt_unknown.c_FUN_005a28c0     ; 00491eb9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x18                        ; 00491ebe
    PUSH EBX                            ; 00491ec1
    PUSH 0x0                            ; 00491ec2
    LEA EAX,[ESP + 0x260]               ; 00491ec4
    ADD EDI,0x120                       ; 00491ecb
    PUSH EAX                            ; 00491ed1
    ADD EBP,0x120                       ; 00491ed2
    ADD EBX,0xb                         ; 00491ed8
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00491edb
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00491ee0
    MOV ECX,dword ptr [ESI + 0x3ac8]    ; 00491ee3
    MOV EAX,dword ptr [ESP + 0x388]     ; 00491ee9
    MOV EDX,dword ptr [ESP + 0x394]     ; 00491ef0
    ADD EAX,0x120                       ; 00491ef7
    INC EDX                             ; 00491efc
    MOV dword ptr [ESP + 0x388],EAX     ; 00491efd
    MOV dword ptr [ESP + 0x394],EDX     ; 00491f04
    CMP EDX,ECX                         ; 00491f0b
    JL 0x00491e95                       ; 00491f0d
        ;   XREF to: 00491e95 (CONDITIONAL_JUMP)  ; LAB_00491e95
    NOP                                 ; 00491f0f
    ADD ESP,0x398                       ; 00491f10
        ;   Label: LAB_00491f10
    POP EBP                             ; 00491f16
    POP EDI                             ; 00491f17
    POP ESI                             ; 00491f18
    POP EBX                             ; 00491f19
    RET                                 ; 00491f1a

