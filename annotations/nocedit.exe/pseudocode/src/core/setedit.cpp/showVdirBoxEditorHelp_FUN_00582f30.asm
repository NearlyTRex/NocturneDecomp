; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setedit_cpp_showVdirBoxEditorHelp_FUN_00582f30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Show_this_help_screen_00648c4d
;   TerminatedCString s_F1_00648c63
;   TerminatedCString s_Next_box_00648c66
;   TerminatedCString s_TAB_00648c6f
;   TerminatedCString s_Previous_box_00648c73
;   TerminatedCString s_SHIFT_TAB_00648c80
;   TerminatedCString s_Insert_box_00648c8a
;   TerminatedCString s_I_00648c95
;   TerminatedCString s_Delete_box_00648c97
;   TerminatedCString s_D_00648ca2
;   TerminatedCString s_Deselect_box_00648ca4
;   TerminatedCString s_N_00648cb1
;   TerminatedCString s_Replicate_box_00648cb3
;   TerminatedCString s_R_00648cc1
;   TerminatedCString s_To_position_the_selected_00648cc3
;   ... and 4 more
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   engine_special.cpp_clearScreen_FUN_005b3e70
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582f30
        ;   Label: core_setedit.cpp_showVdirBoxEditorHelp_FUN_00582f30
    PUSH ESI                            ; 00582f31
    PUSH EDI                            ; 00582f32
    PUSH EBP                            ; 00582f33
    CALL engine_special.cpp_clearScreen_FUN_005b3e70 ; 00582f34
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [0x00679394]      ; 00582f39 | g_WindowWidth
    IMUL EDX,ECX,0x0                    ; 00582f3f
    MOV EAX,EDX                         ; 00582f42
    SAR EDX,0x1f                        ; 00582f44
    SUB EAX,EDX                         ; 00582f47
    SAR EAX,0x1                         ; 00582f49
    PUSH 0x0                            ; 00582f4b
    PUSH EAX                            ; 00582f4d
    PUSH 0x648c63                       ; 00582f4e | = "F1"
    MOV EBX,EAX                         ; 00582f53
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582f55
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582f5a | g_WindowWidth
    MOV EDX,EAX                         ; 00582f5f
    MOV ECX,0xa                         ; 00582f61
    SAR EDX,0x1f                        ; 00582f66
    IDIV ECX                            ; 00582f69
    ADD ESP,0xc                         ; 00582f6b
    PUSH 0x0                            ; 00582f6e
    ADD EAX,EBX                         ; 00582f70
    PUSH EAX                            ; 00582f72
    PUSH 0x648c4d                       ; 00582f73 | = "Show this help screen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582f78
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBX,dword ptr [0x00679394]      ; 00582f7d | g_WindowWidth
    IMUL EDX,EBX,0x0                    ; 00582f83
    MOV EAX,EDX                         ; 00582f86
    SAR EDX,0x1f                        ; 00582f88
    SUB EAX,EDX                         ; 00582f8b
    SAR EAX,0x1                         ; 00582f8d
    ADD ESP,0xc                         ; 00582f8f
    PUSH 0xb                            ; 00582f92
    PUSH EAX                            ; 00582f94
    PUSH 0x648c6f                       ; 00582f95 | = "TAB"
    MOV EBX,EAX                         ; 00582f9a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582f9c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582fa1 | g_WindowWidth
    MOV EDX,EAX                         ; 00582fa6
    MOV ECX,0xa                         ; 00582fa8
    SAR EDX,0x1f                        ; 00582fad
    IDIV ECX                            ; 00582fb0
    ADD ESP,0xc                         ; 00582fb2
    PUSH 0xb                            ; 00582fb5
    ADD EAX,EBX                         ; 00582fb7
    PUSH EAX                            ; 00582fb9
    PUSH 0x648c66                       ; 00582fba | = "Next box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582fbf
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ESI,dword ptr [0x00679394]      ; 00582fc4 | g_WindowWidth
    IMUL EDX,ESI,0x0                    ; 00582fca
    MOV EAX,EDX                         ; 00582fcd
    SAR EDX,0x1f                        ; 00582fcf
    SUB EAX,EDX                         ; 00582fd2
    SAR EAX,0x1                         ; 00582fd4
    ADD ESP,0xc                         ; 00582fd6
    PUSH 0x16                           ; 00582fd9
    PUSH EAX                            ; 00582fdb
    PUSH 0x648c80                       ; 00582fdc | = "SHIFT+TAB"
    MOV EBX,EAX                         ; 00582fe1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00582fe3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00582fe8 | g_WindowWidth
    MOV EDX,EAX                         ; 00582fed
    MOV ECX,0xa                         ; 00582fef
    SAR EDX,0x1f                        ; 00582ff4
    IDIV ECX                            ; 00582ff7
    ADD ESP,0xc                         ; 00582ff9
    PUSH 0x16                           ; 00582ffc
    ADD EAX,EBX                         ; 00582ffe
    PUSH EAX                            ; 00583000
    PUSH 0x648c73                       ; 00583001 | = "Previous box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583006
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058300b
    MOV EDI,dword ptr [0x00679394]      ; 0058300e | g_WindowWidth
    IMUL EDX,EDI,0x0                    ; 00583014
    MOV EAX,EDX                         ; 00583017
    SAR EDX,0x1f                        ; 00583019
    SUB EAX,EDX                         ; 0058301c
    SAR EAX,0x1                         ; 0058301e
    PUSH 0x21                           ; 00583020
    PUSH EAX                            ; 00583022
    PUSH 0x648c95                       ; 00583023 | = "I"
    MOV EBX,EAX                         ; 00583028
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058302a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0058302f | g_WindowWidth
    MOV EDX,EAX                         ; 00583034
    MOV ECX,0xa                         ; 00583036
    SAR EDX,0x1f                        ; 0058303b
    IDIV ECX                            ; 0058303e
    ADD ESP,0xc                         ; 00583040
    PUSH 0x21                           ; 00583043
    ADD EAX,EBX                         ; 00583045
    PUSH EAX                            ; 00583047
    PUSH 0x648c8a                       ; 00583048 | = "Insert box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058304d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [0x00679394]      ; 00583052 | g_WindowWidth
    IMUL EDX,EBP,0x0                    ; 00583058
    MOV EAX,EDX                         ; 0058305b
    SAR EDX,0x1f                        ; 0058305d
    SUB EAX,EDX                         ; 00583060
    SAR EAX,0x1                         ; 00583062
    ADD ESP,0xc                         ; 00583064
    PUSH 0x2c                           ; 00583067
    PUSH EAX                            ; 00583069
    PUSH 0x648ca2                       ; 0058306a | = "D"
    MOV EBX,EAX                         ; 0058306f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583071
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00583076 | g_WindowWidth
    MOV EDX,EAX                         ; 0058307b
    MOV ECX,0xa                         ; 0058307d
    SAR EDX,0x1f                        ; 00583082
    IDIV ECX                            ; 00583085
    ADD ESP,0xc                         ; 00583087
    PUSH 0x2c                           ; 0058308a
    ADD EAX,EBX                         ; 0058308c
    PUSH EAX                            ; 0058308e
    PUSH 0x648c97                       ; 0058308f | = "Delete box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583094
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00583099 | g_WindowWidth
    IMUL EDX,EAX,0x0                    ; 0058309e
    MOV EAX,EDX                         ; 005830a1
    SAR EDX,0x1f                        ; 005830a3
    SUB EAX,EDX                         ; 005830a6
    SAR EAX,0x1                         ; 005830a8
    ADD ESP,0xc                         ; 005830aa
    PUSH 0x37                           ; 005830ad
    PUSH EAX                            ; 005830af
    PUSH 0x648cb1                       ; 005830b0 | = "N"
    MOV EBX,EAX                         ; 005830b5
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005830b7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005830bc | g_WindowWidth
    MOV EDX,EAX                         ; 005830c1
    MOV ECX,0xa                         ; 005830c3
    SAR EDX,0x1f                        ; 005830c8
    IDIV ECX                            ; 005830cb
    ADD ESP,0xc                         ; 005830cd
    PUSH 0x37                           ; 005830d0
    ADD EAX,EBX                         ; 005830d2
    PUSH EAX                            ; 005830d4
    PUSH 0x648ca4                       ; 005830d5 | = "Deselect box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005830da
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [0x00679394]      ; 005830df | g_WindowWidth
    IMUL EDX,ECX,0x0                    ; 005830e5
    MOV EAX,EDX                         ; 005830e8
    SAR EDX,0x1f                        ; 005830ea
    SUB EAX,EDX                         ; 005830ed
    SAR EAX,0x1                         ; 005830ef
    ADD ESP,0xc                         ; 005830f1
    PUSH 0x42                           ; 005830f4
    PUSH EAX                            ; 005830f6
    PUSH 0x648cc1                       ; 005830f7 | = "R"
    MOV EBX,EAX                         ; 005830fc
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005830fe
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00583103 | g_WindowWidth
    MOV EDX,EAX                         ; 00583108
    MOV ECX,0xa                         ; 0058310a
    SAR EDX,0x1f                        ; 0058310f
    IDIV ECX                            ; 00583112
    ADD ESP,0xc                         ; 00583114
    PUSH 0x42                           ; 00583117
    ADD EAX,EBX                         ; 00583119
    PUSH EAX                            ; 0058311b
    PUSH 0x648cb3                       ; 0058311c | = "Replicate box"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583121
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00583126
    PUSH 0x63                           ; 00583129
    PUSH 0x0                            ; 0058312b
    PUSH 0x648cc3                       ; 0058312d | = "To position the selected box, use the..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583132
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00583137
    PUSH 0x6e                           ; 0058313a
    PUSH 0x0                            ; 0058313c
    PUSH 0x648cfb                       ; 0058313e | = "To size the selected box, use arrow k..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00583143
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00583148
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0058314b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00583150
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067cf44]      ; 00583155 | g_CKeysPtr
    PUSH EBX                            ; 0058315b | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 0058315c
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 00583161
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00583164
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    POP EBP                             ; 00583169
    POP EDI                             ; 0058316a
    POP ESI                             ; 0058316b
    POP EBX                             ; 0058316c
    RET                                 ; 0058316d

