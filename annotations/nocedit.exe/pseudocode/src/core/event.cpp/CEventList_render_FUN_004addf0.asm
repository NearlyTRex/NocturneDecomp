; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_render_FUN_004addf0(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; char[200]        Stack[-0x3a8]:200  local_3a8
; char[200]        Stack[-0x2e0]:200  local_2e0
; char[200]        Stack[-0x218]:200  local_218
; char[100]        Stack[-0x150]:100  local_150
; char[100]        Stack[-0xec]:100  local_ec
; char[100]        Stack[-0x88]:100  local_88
; CEventList *     Stack[-0x24]:4  local_24
; char *           Stack[-0x20]:4  local_20
; char[32] *       Stack[-0x1c]:4  local_1c
; char[30] *       Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da997
;
; Referenced Globals:
;   TerminatedCString s_Game_Flag_s_006252c4
;   TerminatedCString s_Persistent_s_006252d2
;   TerminatedCString s_Timer_5_2f_s_006252e1
;   TerminatedCString s_s_d_006252f1
;   TerminatedCString s_s_s_006252f7
;   TerminatedCString s_s_s_1f_006252fd
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004addf0
        ;   Label: core_event.cpp_CEventList_render_FUN_004addf0
    PUSH ESI                            ; 004addf1
    PUSH EDI                            ; 004addf2
    PUSH EBP                            ; 004addf3
    SUB ESP,0x398                       ; 004addf4
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 004addfa
    MOV EBX,0x2c                        ; 004ade01
    MOV EDX,dword ptr [ESI + 0x1908]    ; 004ade06
    XOR EDI,EDI                         ; 004ade0c
    TEST EDX,EDX                        ; 004ade0e
    JLE 0x004ade60                      ; 004ade10
        ;   XREF to: 004ade60 (CONDITIONAL_JUMP)  ; LAB_004ade60
    LEA EBP,[ESI + 0x190c]              ; 004ade12
    PUSH EBP                            ; 004ade18
        ;   Label: LAB_004ade18
    PUSH 0x6252c4                       ; 004ade19 | = "Game Flag: %s"
    LEA EAX,[ESP + 0x198]               ; 004ade1e
    PUSH EAX                            ; 004ade25
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004ade26
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ade2b
    PUSH EBX                            ; 004ade2e
    PUSH 0x0                            ; 004ade2f
    LEA EAX,[ESP + 0x198]               ; 004ade31
    INC EDI                             ; 004ade38
    PUSH EAX                            ; 004ade39
    ADD EBP,0x20                        ; 004ade3a
    ADD EBX,0xb                         ; 004ade3d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004ade40
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [ESI + 0x1908]    ; 004ade45
    ADD ESP,0xc                         ; 004ade4b
    CMP EDI,ECX                         ; 004ade4e
    JL 0x004ade18                       ; 004ade50
        ;   XREF to: 004ade18 (CONDITIONAL_JUMP)  ; LAB_004ade18
    LEA EAX,[EAX]                       ; 004ade52
    LEA EDX,[EDX]                       ; 004ade58
    MOV EAX,EAX                         ; 004ade5e
    MOV EDI,dword ptr [ESI + 0x258c]    ; 004ade60
        ;   Label: LAB_004ade60
    XOR EBP,EBP                         ; 004ade66
    TEST EDI,EDI                        ; 004ade68
    JLE 0x004adeb0                      ; 004ade6a
        ;   XREF to: 004adeb0 (CONDITIONAL_JUMP)  ; LAB_004adeb0
    LEA EDI,[ESI + 0x2590]              ; 004ade6c
    PUSH EDI                            ; 004ade72
        ;   Label: LAB_004ade72
    PUSH 0x6252d2                       ; 004ade73 | = "Persistent: %s"
    LEA EAX,[ESP + 0x8]                 ; 004ade78
    PUSH EAX                            ; 004ade7c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004ade7d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004ade82
    PUSH EBX                            ; 004ade85
    PUSH 0x0                            ; 004ade86
    LEA EAX,[ESP + 0x8]                 ; 004ade88
    INC EBP                             ; 004ade8c
    PUSH EAX                            ; 004ade8d
    ADD EDI,0x20                        ; 004ade8e
    ADD EBX,0xb                         ; 004ade91
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004ade94
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,dword ptr [ESI + 0x258c]    ; 004ade99
    ADD ESP,0xc                         ; 004ade9f
    CMP EBP,EAX                         ; 004adea2
    JL 0x004ade72                       ; 004adea4
        ;   XREF to: 004ade72 (CONDITIONAL_JUMP)  ; LAB_004ade72
    LEA EAX,[EAX]                       ; 004adea6
    LEA EDX,[EDX]                       ; 004adeac
    MOV EDX,dword ptr [ESI + 0x3210]    ; 004adeb0
        ;   Label: LAB_004adeb0
    XOR EDI,EDI                         ; 004adeb6
    TEST EDX,EDX                        ; 004adeb8
    JLE 0x004adf30                      ; 004adeba
        ;   XREF to: 004adf30 (CONDITIONAL_JUMP)  ; LAB_004adf30
    LEA EBP,[ESI + 0x3214]              ; 004adec0
    MOV dword ptr [ESP + 0x384],ESI     ; 004adec6
    PUSH EBP                            ; 004adecd
        ;   Label: LAB_004adecd
    MOV EAX,dword ptr [ESP + 0x388]     ; 004adece
    SUB ESP,0x8                         ; 004aded5
    FLD float ptr [EAX + 0x3354]        ; 004aded8
    FSTP double ptr [ESP]               ; 004adede
    PUSH 0x6252e1                       ; 004adee1 | = "Timer: %5.2f %s"
    LEA EAX,[ESP + 0xd8]                ; 004adee6
    PUSH EAX                            ; 004adeed
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004adeee
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 004adef3
    PUSH EBX                            ; 004adef6
    PUSH 0x0                            ; 004adef7
    LEA EAX,[ESP + 0xd0]                ; 004adef9
    PUSH EAX                            ; 004adf00
    INC EDI                             ; 004adf01
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004adf02
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004adf07
    ADD EBP,0x20                        ; 004adf0a
    MOV ECX,dword ptr [ESP + 0x384]     ; 004adf0d
    ADD EBX,0xb                         ; 004adf14
    ADD ECX,0x4                         ; 004adf17
    MOV EAX,dword ptr [ESI + 0x3210]    ; 004adf1a
    MOV dword ptr [ESP + 0x384],ECX     ; 004adf20
    CMP EDI,EAX                         ; 004adf27
    JL 0x004adecd                       ; 004adf29
        ;   XREF to: 004adecd (CONDITIONAL_JUMP)  ; LAB_004adecd
    LEA EAX,[EAX]                       ; 004adf2b
    MOV ECX,ECX                         ; 004adf2e
    MOV EDX,dword ptr [ESI + 0xc84]     ; 004adf30
        ;   Label: LAB_004adf30
    XOR EBP,EBP                         ; 004adf36
    TEST EDX,EDX                        ; 004adf38
    JLE 0x004adf60                      ; 004adf3a
        ;   XREF to: 004adf60 (CONDITIONAL_JUMP)  ; LAB_004adf60
    LEA EDI,[ESI + 0xc88]               ; 004adf3c
    PUSH EBX                            ; 004adf42
        ;   Label: LAB_004adf42
    PUSH 0x0                            ; 004adf43
    PUSH EDI                            ; 004adf45
    INC EBP                             ; 004adf46
    ADD EBX,0xb                         ; 004adf47
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004adf4a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004adf4f
    MOV ECX,dword ptr [ESI + 0xc84]     ; 004adf52
    ADD EDI,0x20                        ; 004adf58
    CMP EBP,ECX                         ; 004adf5b
    JL 0x004adf42                       ; 004adf5d
        ;   XREF to: 004adf42 (CONDITIONAL_JUMP)  ; LAB_004adf42
    NOP                                 ; 004adf5f
    MOV EDI,dword ptr [ESI + 0x337c]    ; 004adf60
        ;   Label: LAB_004adf60
    XOR EBP,EBP                         ; 004adf66
    TEST EDI,EDI                        ; 004adf68
    JLE 0x004adfe0                      ; 004adf6a
        ;   XREF to: 004adfe0 (CONDITIONAL_JUMP)  ; LAB_004adfe0
    LEA EAX,[ESI + 0x3380]              ; 004adf6c
    MOV dword ptr [ESP + 0x38c],EAX     ; 004adf72
    MOV EDI,ESI                         ; 004adf79
    MOV EAX,dword ptr [EDI + 0x34c0]    ; 004adf7b
        ;   Label: LAB_004adf7b
    PUSH EAX                            ; 004adf81
    MOV EDX,dword ptr [ESP + 0x390]     ; 004adf82
    PUSH EDX                            ; 004adf89
    PUSH 0x6252f1                       ; 004adf8a | = "%s=%d"
    LEA EAX,[ESP + 0x32c]               ; 004adf8f
    PUSH EAX                            ; 004adf96
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004adf97
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004adf9c
    PUSH EBX                            ; 004adf9f
    PUSH 0x0                            ; 004adfa0
    LEA EAX,[ESP + 0x328]               ; 004adfa2
    PUSH EAX                            ; 004adfa9
    ADD EDI,0x4                         ; 004adfaa
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004adfad
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004adfb2
    INC EBP                             ; 004adfb5
    MOV ECX,dword ptr [ESP + 0x38c]     ; 004adfb6
    ADD EBX,0xb                         ; 004adfbd
    ADD ECX,0x20                        ; 004adfc0
    MOV EAX,dword ptr [ESI + 0x337c]    ; 004adfc3
    MOV dword ptr [ESP + 0x38c],ECX     ; 004adfc9
    CMP EBP,EAX                         ; 004adfd0
    JL 0x004adf7b                       ; 004adfd2
        ;   XREF to: 004adf7b (CONDITIONAL_JUMP)  ; LAB_004adf7b
    LEA EAX,[EAX]                       ; 004adfd4
    LEA EDX,[EDX]                       ; 004adfda
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 004adfe0
        ;   Label: LAB_004adfe0
    XOR EBP,EBP                         ; 004adfe6
    TEST EDX,EDX                        ; 004adfe8
    JLE 0x004ae060                      ; 004adfea
        ;   XREF to: 004ae060 (CONDITIONAL_JUMP)  ; LAB_004ae060
    LEA EDI,[ESI + 0x37da]              ; 004adfec
    LEA EAX,[ESI + 0x34ec]              ; 004adff2
    MOV dword ptr [ESP + 0x390],EAX     ; 004adff8
    PUSH EDI                            ; 004adfff
        ;   Label: LAB_004adfff
    MOV ECX,dword ptr [ESP + 0x394]     ; 004ae000
    PUSH ECX                            ; 004ae007
    PUSH 0x6252f7                       ; 004ae008 | = "%s=%s"
    LEA EAX,[ESP + 0x2c8]               ; 004ae00d
    PUSH EAX                            ; 004ae014
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004ae015
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ae01a
    PUSH EBX                            ; 004ae01d
    PUSH 0x0                            ; 004ae01e
    LEA EAX,[ESP + 0x2c4]               ; 004ae020
    PUSH EAX                            ; 004ae027
    INC EBP                             ; 004ae028
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004ae029
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004ae02e
    ADD EDI,0x1e                        ; 004ae031
    MOV EAX,dword ptr [ESP + 0x390]     ; 004ae034
    ADD EBX,0xb                         ; 004ae03b
    ADD EAX,0x1e                        ; 004ae03e
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 004ae041
    MOV dword ptr [ESP + 0x390],EAX     ; 004ae047
    CMP EBP,EDX                         ; 004ae04e
    JL 0x004adfff                       ; 004ae050
        ;   XREF to: 004adfff (CONDITIONAL_JUMP)  ; LAB_004adfff
    LEA EAX,[EAX]                       ; 004ae052
    LEA EDX,[EDX]                       ; 004ae058
    MOV EAX,EAX                         ; 004ae05e
    PUSH ESI                            ; 004ae060
        ;   Label: LAB_004ae060
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004ae061
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004ae066
    XOR ECX,ECX                         ; 004ae069
    MOV EDI,dword ptr [ESI + 0x3ac8]    ; 004ae06b
    MOV dword ptr [ESP + 0x394],ECX     ; 004ae071
    TEST EDI,EDI                        ; 004ae078
    JLE 0x004ae110                      ; 004ae07a
        ;   XREF to: 004ae110 (CONDITIONAL_JUMP)  ; LAB_004ae110
    LEA EAX,[ESI + 0x3ad0]              ; 004ae080
    LEA EBP,[ESI + 0x3ae4]              ; 004ae086
    MOV dword ptr [ESP + 0x388],EAX     ; 004ae08c
    MOV EDI,ESI                         ; 004ae093
    MOV EAX,dword ptr [EDI + 0x3be8]    ; 004ae095
        ;   Label: LAB_004ae095
    PUSH EAX                            ; 004ae09b
    MOV EDX,dword ptr [EDI + 0x3be4]    ; 004ae09c
    PUSH EDX                            ; 004ae0a2
    PUSH EBP                            ; 004ae0a3
    MOV ECX,dword ptr [ESP + 0x394]     ; 004ae0a4
    PUSH ECX                            ; 004ae0ab
    PUSH 0x6252fd                       ; 004ae0ac | = "%s=%s %.1f"
    LEA EAX,[ESP + 0x26c]               ; 004ae0b1
    PUSH EAX                            ; 004ae0b8
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004ae0b9
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 004ae0be
    PUSH EBX                            ; 004ae0c1
    PUSH 0x0                            ; 004ae0c2
    LEA EAX,[ESP + 0x260]               ; 004ae0c4
    ADD EDI,0x120                       ; 004ae0cb
    PUSH EAX                            ; 004ae0d1
    ADD EBP,0x120                       ; 004ae0d2
    ADD EBX,0xb                         ; 004ae0d8
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004ae0db
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 004ae0e0
    MOV ECX,dword ptr [ESI + 0x3ac8]    ; 004ae0e3
    MOV EAX,dword ptr [ESP + 0x388]     ; 004ae0e9
    MOV EDX,dword ptr [ESP + 0x394]     ; 004ae0f0
    ADD EAX,0x120                       ; 004ae0f7
    INC EDX                             ; 004ae0fc
    MOV dword ptr [ESP + 0x388],EAX     ; 004ae0fd
    MOV dword ptr [ESP + 0x394],EDX     ; 004ae104
    CMP EDX,ECX                         ; 004ae10b
    JL 0x004ae095                       ; 004ae10d
        ;   XREF to: 004ae095 (CONDITIONAL_JUMP)  ; LAB_004ae095
    NOP                                 ; 004ae10f
    ADD ESP,0x398                       ; 004ae110
        ;   Label: LAB_004ae110
    POP EBP                             ; 004ae116
    POP EDI                             ; 004ae117
    POP ESI                             ; 004ae118
    POP EBX                             ; 004ae119
    RET                                 ; 004ae11a

