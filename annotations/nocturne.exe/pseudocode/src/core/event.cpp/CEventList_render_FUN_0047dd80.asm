; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(CEventList *this_ptr)
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
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d433
;
; Referenced Globals:
;   TerminatedCString s_Game_Flag_s_00580242
;   TerminatedCString s_Persistent_s_00580250
;   TerminatedCString s_Timer_5_2f_s_0058025f
;   TerminatedCString s_s_d_0058026f
;   TerminatedCString s_s_s_00580275
;   TerminatedCString s_s_s_1f_0058027b
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047dd80
        ;   Label: core_event.cpp_CEventList_render_FUN_0047dd80
    PUSH ESI                            ; 0047dd81
    PUSH EDI                            ; 0047dd82
    PUSH EBP                            ; 0047dd83
    SUB ESP,0x398                       ; 0047dd84
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 0047dd8a
    MOV EBX,0x2c                        ; 0047dd91
    MOV EDX,dword ptr [ESI + 0x1908]    ; 0047dd96
    XOR EDI,EDI                         ; 0047dd9c
    TEST EDX,EDX                        ; 0047dd9e
    JLE 0x0047ddf0                      ; 0047dda0
        ;   XREF to: 0047ddf0 (CONDITIONAL_JUMP)  ; LAB_0047ddf0
    LEA EBP,[ESI + 0x190c]              ; 0047dda2
    PUSH EBP                            ; 0047dda8
        ;   Label: LAB_0047dda8
    PUSH 0x580242                       ; 0047dda9 | = "Game Flag: %s"
    LEA EAX,[ESP + 0x198]               ; 0047ddae
    PUSH EAX                            ; 0047ddb5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047ddb6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0047ddbb
    PUSH EBX                            ; 0047ddbe
    PUSH 0x0                            ; 0047ddbf
    LEA EAX,[ESP + 0x198]               ; 0047ddc1
    INC EDI                             ; 0047ddc8
    PUSH EAX                            ; 0047ddc9
    ADD EBP,0x20                        ; 0047ddca
    ADD EBX,0xb                         ; 0047ddcd
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047ddd0
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV ECX,dword ptr [ESI + 0x1908]    ; 0047ddd5
    ADD ESP,0xc                         ; 0047dddb
    CMP EDI,ECX                         ; 0047ddde
    JL 0x0047dda8                       ; 0047dde0
        ;   XREF to: 0047dda8 (CONDITIONAL_JUMP)  ; LAB_0047dda8
    LEA EAX,[EAX]                       ; 0047dde2
    LEA EDX,[EDX]                       ; 0047dde8
    MOV EAX,EAX                         ; 0047ddee
    MOV EDI,dword ptr [ESI + 0x258c]    ; 0047ddf0
        ;   Label: LAB_0047ddf0
    XOR EBP,EBP                         ; 0047ddf6
    TEST EDI,EDI                        ; 0047ddf8
    JLE 0x0047de40                      ; 0047ddfa
        ;   XREF to: 0047de40 (CONDITIONAL_JUMP)  ; LAB_0047de40
    LEA EDI,[ESI + 0x2590]              ; 0047ddfc
    PUSH EDI                            ; 0047de02
        ;   Label: LAB_0047de02
    PUSH 0x580250                       ; 0047de03 | = "Persistent: %s"
    LEA EAX,[ESP + 0x8]                 ; 0047de08
    PUSH EAX                            ; 0047de0c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047de0d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0047de12
    PUSH EBX                            ; 0047de15
    PUSH 0x0                            ; 0047de16
    LEA EAX,[ESP + 0x8]                 ; 0047de18
    INC EBP                             ; 0047de1c
    PUSH EAX                            ; 0047de1d
    ADD EDI,0x20                        ; 0047de1e
    ADD EBX,0xb                         ; 0047de21
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047de24
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    MOV EAX,dword ptr [ESI + 0x258c]    ; 0047de29
    ADD ESP,0xc                         ; 0047de2f
    CMP EBP,EAX                         ; 0047de32
    JL 0x0047de02                       ; 0047de34
        ;   XREF to: 0047de02 (CONDITIONAL_JUMP)  ; LAB_0047de02
    LEA EAX,[EAX]                       ; 0047de36
    LEA EDX,[EDX]                       ; 0047de3c
    MOV EDX,dword ptr [ESI + 0x3210]    ; 0047de40
        ;   Label: LAB_0047de40
    XOR EDI,EDI                         ; 0047de46
    TEST EDX,EDX                        ; 0047de48
    JLE 0x0047dec0                      ; 0047de4a
        ;   XREF to: 0047dec0 (CONDITIONAL_JUMP)  ; LAB_0047dec0
    LEA EBP,[ESI + 0x3214]              ; 0047de50
    MOV dword ptr [ESP + 0x384],ESI     ; 0047de56
    PUSH EBP                            ; 0047de5d
        ;   Label: LAB_0047de5d
    MOV EAX,dword ptr [ESP + 0x388]     ; 0047de5e
    SUB ESP,0x8                         ; 0047de65
    FLD float ptr [EAX + 0x3354]        ; 0047de68
    FSTP double ptr [ESP]               ; 0047de6e
    PUSH 0x58025f                       ; 0047de71 | = "Timer: %5.2f %s"
    LEA EAX,[ESP + 0xd8]                ; 0047de76
    PUSH EAX                            ; 0047de7d
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047de7e
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x14                        ; 0047de83
    PUSH EBX                            ; 0047de86
    PUSH 0x0                            ; 0047de87
    LEA EAX,[ESP + 0xd0]                ; 0047de89
    PUSH EAX                            ; 0047de90
    INC EDI                             ; 0047de91
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047de92
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047de97
    ADD EBP,0x20                        ; 0047de9a
    MOV ECX,dword ptr [ESP + 0x384]     ; 0047de9d
    ADD EBX,0xb                         ; 0047dea4
    ADD ECX,0x4                         ; 0047dea7
    MOV EAX,dword ptr [ESI + 0x3210]    ; 0047deaa
    MOV dword ptr [ESP + 0x384],ECX     ; 0047deb0
    CMP EDI,EAX                         ; 0047deb7
    JL 0x0047de5d                       ; 0047deb9
        ;   XREF to: 0047de5d (CONDITIONAL_JUMP)  ; LAB_0047de5d
    LEA EAX,[EAX]                       ; 0047debb
    MOV ECX,ECX                         ; 0047debe
    MOV EDX,dword ptr [ESI + 0xc84]     ; 0047dec0
        ;   Label: LAB_0047dec0
    XOR EBP,EBP                         ; 0047dec6
    TEST EDX,EDX                        ; 0047dec8
    JLE 0x0047def0                      ; 0047deca
        ;   XREF to: 0047def0 (CONDITIONAL_JUMP)  ; LAB_0047def0
    LEA EDI,[ESI + 0xc88]               ; 0047decc
    PUSH EBX                            ; 0047ded2
        ;   Label: LAB_0047ded2
    PUSH 0x0                            ; 0047ded3
    PUSH EDI                            ; 0047ded5
    INC EBP                             ; 0047ded6
    ADD EBX,0xb                         ; 0047ded7
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047deda
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047dedf
    MOV ECX,dword ptr [ESI + 0xc84]     ; 0047dee2
    ADD EDI,0x20                        ; 0047dee8
    CMP EBP,ECX                         ; 0047deeb
    JL 0x0047ded2                       ; 0047deed
        ;   XREF to: 0047ded2 (CONDITIONAL_JUMP)  ; LAB_0047ded2
    NOP                                 ; 0047deef
    MOV EDI,dword ptr [ESI + 0x337c]    ; 0047def0
        ;   Label: LAB_0047def0
    XOR EBP,EBP                         ; 0047def6
    TEST EDI,EDI                        ; 0047def8
    JLE 0x0047df70                      ; 0047defa
        ;   XREF to: 0047df70 (CONDITIONAL_JUMP)  ; LAB_0047df70
    LEA EAX,[ESI + 0x3380]              ; 0047defc
    MOV dword ptr [ESP + 0x38c],EAX     ; 0047df02
    MOV EDI,ESI                         ; 0047df09
    MOV EAX,dword ptr [EDI + 0x34c0]    ; 0047df0b
        ;   Label: LAB_0047df0b
    PUSH EAX                            ; 0047df11
    MOV EDX,dword ptr [ESP + 0x390]     ; 0047df12
    PUSH EDX                            ; 0047df19
    PUSH 0x58026f                       ; 0047df1a | = "%s=%d"
    LEA EAX,[ESP + 0x32c]               ; 0047df1f
    PUSH EAX                            ; 0047df26
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047df27
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0047df2c
    PUSH EBX                            ; 0047df2f
    PUSH 0x0                            ; 0047df30
    LEA EAX,[ESP + 0x328]               ; 0047df32
    PUSH EAX                            ; 0047df39
    ADD EDI,0x4                         ; 0047df3a
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047df3d
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047df42
    INC EBP                             ; 0047df45
    MOV ECX,dword ptr [ESP + 0x38c]     ; 0047df46
    ADD EBX,0xb                         ; 0047df4d
    ADD ECX,0x20                        ; 0047df50
    MOV EAX,dword ptr [ESI + 0x337c]    ; 0047df53
    MOV dword ptr [ESP + 0x38c],ECX     ; 0047df59
    CMP EBP,EAX                         ; 0047df60
    JL 0x0047df0b                       ; 0047df62
        ;   XREF to: 0047df0b (CONDITIONAL_JUMP)  ; LAB_0047df0b
    LEA EAX,[EAX]                       ; 0047df64
    LEA EDX,[EDX]                       ; 0047df6a
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 0047df70
        ;   Label: LAB_0047df70
    XOR EBP,EBP                         ; 0047df76
    TEST EDX,EDX                        ; 0047df78
    JLE 0x0047dff0                      ; 0047df7a
        ;   XREF to: 0047dff0 (CONDITIONAL_JUMP)  ; LAB_0047dff0
    LEA EDI,[ESI + 0x37da]              ; 0047df7c
    LEA EAX,[ESI + 0x34ec]              ; 0047df82
    MOV dword ptr [ESP + 0x390],EAX     ; 0047df88
    PUSH EDI                            ; 0047df8f
        ;   Label: LAB_0047df8f
    MOV ECX,dword ptr [ESP + 0x394]     ; 0047df90
    PUSH ECX                            ; 0047df97
    PUSH 0x580275                       ; 0047df98 | = "%s=%s"
    LEA EAX,[ESP + 0x2c8]               ; 0047df9d
    PUSH EAX                            ; 0047dfa4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047dfa5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0047dfaa
    PUSH EBX                            ; 0047dfad
    PUSH 0x0                            ; 0047dfae
    LEA EAX,[ESP + 0x2c4]               ; 0047dfb0
    PUSH EAX                            ; 0047dfb7
    INC EBP                             ; 0047dfb8
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047dfb9
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047dfbe
    ADD EDI,0x1e                        ; 0047dfc1
    MOV EAX,dword ptr [ESP + 0x390]     ; 0047dfc4
    ADD EBX,0xb                         ; 0047dfcb
    ADD EAX,0x1e                        ; 0047dfce
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 0047dfd1
    MOV dword ptr [ESP + 0x390],EAX     ; 0047dfd7
    CMP EBP,EDX                         ; 0047dfde
    JL 0x0047df8f                       ; 0047dfe0
        ;   XREF to: 0047df8f (CONDITIONAL_JUMP)  ; LAB_0047df8f
    LEA EAX,[EAX]                       ; 0047dfe2
    LEA EDX,[EDX]                       ; 0047dfe8
    MOV EAX,EAX                         ; 0047dfee
    PUSH ESI                            ; 0047dff0
        ;   Label: LAB_0047dff0
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 ; 0047dff1
        ;   XREF to: 00480d60 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0047dff6
    XOR ECX,ECX                         ; 0047dff9
    MOV EDI,dword ptr [ESI + 0x3ac8]    ; 0047dffb
    MOV dword ptr [ESP + 0x394],ECX     ; 0047e001
    TEST EDI,EDI                        ; 0047e008
    JLE 0x0047e0a0                      ; 0047e00a
        ;   XREF to: 0047e0a0 (CONDITIONAL_JUMP)  ; LAB_0047e0a0
    LEA EAX,[ESI + 0x3ad0]              ; 0047e010
    LEA EBP,[ESI + 0x3ae4]              ; 0047e016
    MOV dword ptr [ESP + 0x388],EAX     ; 0047e01c
    MOV EDI,ESI                         ; 0047e023
    MOV EAX,dword ptr [EDI + 0x3be8]    ; 0047e025
        ;   Label: LAB_0047e025
    PUSH EAX                            ; 0047e02b
    MOV EDX,dword ptr [EDI + 0x3be4]    ; 0047e02c
    PUSH EDX                            ; 0047e032
    PUSH EBP                            ; 0047e033
    MOV ECX,dword ptr [ESP + 0x394]     ; 0047e034
    PUSH ECX                            ; 0047e03b
    PUSH 0x58027b                       ; 0047e03c | = "%s=%s %.1f"
    LEA EAX,[ESP + 0x26c]               ; 0047e041
    PUSH EAX                            ; 0047e048
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047e049
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x18                        ; 0047e04e
    PUSH EBX                            ; 0047e051
    PUSH 0x0                            ; 0047e052
    LEA EAX,[ESP + 0x260]               ; 0047e054
    ADD EDI,0x120                       ; 0047e05b
    PUSH EAX                            ; 0047e061
    ADD EBP,0x120                       ; 0047e062
    ADD EBX,0xb                         ; 0047e068
    CALL engine_2d.c_drawText_FUN_00402600 ; 0047e06b
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0047e070
    MOV ECX,dword ptr [ESI + 0x3ac8]    ; 0047e073
    MOV EAX,dword ptr [ESP + 0x388]     ; 0047e079
    MOV EDX,dword ptr [ESP + 0x394]     ; 0047e080
    ADD EAX,0x120                       ; 0047e087
    INC EDX                             ; 0047e08c
    MOV dword ptr [ESP + 0x388],EAX     ; 0047e08d
    MOV dword ptr [ESP + 0x394],EDX     ; 0047e094
    CMP EDX,ECX                         ; 0047e09b
    JL 0x0047e025                       ; 0047e09d
        ;   XREF to: 0047e025 (CONDITIONAL_JUMP)  ; LAB_0047e025
    NOP                                 ; 0047e09f
    ADD ESP,0x398                       ; 0047e0a0
        ;   Label: LAB_0047e0a0
    POP EBP                             ; 0047e0a6
    POP EDI                             ; 0047e0a7
    POP ESI                             ; 0047e0a8
    POP EBX                             ; 0047e0a9
    RET                                 ; 0047e0aa

