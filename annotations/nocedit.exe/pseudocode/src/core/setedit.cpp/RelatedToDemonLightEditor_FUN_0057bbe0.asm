; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0()
;
; Local Variables:
; undefined8       Stack[-0x8b0]:8  local_8b0
; undefined4       Stack[-0x8a8]:4  local_8a8
; undefined1       Stack[-0x8a4]:1  local_8a4
; undefined1       Stack[-0x4fc]:1  local_4fc
; undefined1       Stack[-0x154]:1  local_154
; undefined8       Stack[-0x54]:8  local_54
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
; XREF[1]:
;   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 at 0057cc1f
;
; Referenced Globals:
;   void* switchdataD_0057bbb0 = 0057c03b
;   TerminatedCString s_Current_light_s_0064786a
;   TerminatedCString s_A_On_time_f_0064787d
;   TerminatedCString s_B_Total_time_f_0064788e
;   TerminatedCString s_C_Add_filter_006478a2
;   TerminatedCString s_D_Delete_filter_006478b1
;   TerminatedCString s_E_Edit_filter_006478c3
;   TerminatedCString s_F_Blend_filter_Yes_006478d3
;   TerminatedCString s_F_Blend_filter_No_006478ea
;   TerminatedCString s_G_Move_filter_Yes_00647900
;   TerminatedCString s_G_Move_filter_No_00647915
;   TerminatedCString s_H_Velocity_X_f_00647929
;   TerminatedCString s_I_Velocity_Y_f_0064793c
;   TerminatedCString s_J_Aspect_Y_X_f_0064794f
;   TerminatedCString s_K_Intensity_f_00647964
;   ... and 25 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_0056d2d0
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
;   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
;   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
;   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057bbe0
        ;   Label: core_setedit.cpp_RelatedToDemonLightEditor_FUN_0057bbe0
    PUSH ESI                            ; 0057bbe1
    PUSH EDI                            ; 0057bbe2
    PUSH EBP                            ; 0057bbe3
    MOV EBP,ESP                         ; 0057bbe4
    SUB ESP,0x894                       ; 0057bbe6
    AND ESP,0xfffffff8                  ; 0057bbec
    IMUL EAX,dword ptr [EBP + 0x18],0x1898 ; 0057bbef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057bbf6
    ADD EDX,0x19a30                     ; 0057bbf9
    ADD EDX,EAX                         ; 0057bbff
    MOV dword ptr [ESP + 0x890],EDX     ; 0057bc01
    LEA EAX,[EDX + 0x11f4]              ; 0057bc08
    MOV dword ptr [ESP + 0x880],EAX     ; 0057bc0e
    MOV dword ptr [ESP + 0x85c],EAX     ; 0057bc15
    LEA EAX,[EDX + 0x16f4]              ; 0057bc1c
    MOV dword ptr [ESP + 0x87c],EAX     ; 0057bc22
    MOV EAX,dword ptr [ESP + 0x880]     ; 0057bc29
    MOV dword ptr [ESP + 0x874],EAX     ; 0057bc30
    LEA EAX,[EDX + 0x11e0]              ; 0057bc37
    MOV dword ptr [ESP + 0x864],EAX     ; 0057bc3d
    LEA EAX,[EDX + 0x11e4]              ; 0057bc44
    MOV dword ptr [ESP + 0x86c],EAX     ; 0057bc4a
    LEA EAX,[EDX + 0x120]               ; 0057bc51
    MOV dword ptr [ESP + 0x860],EAX     ; 0057bc57
    LEA EAX,[EDX + 0x124]               ; 0057bc5e
    MOV dword ptr [ESP + 0x868],EAX     ; 0057bc64
    LEA EAX,[EDX + 0x4]                 ; 0057bc6b
    MOV dword ptr [ESP + 0x870],EAX     ; 0057bc6e
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0057bc75
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_0057bc75
    MOV ECX,dword ptr [ESP + 0x870]     ; 0057bc7a
    PUSH ECX                            ; 0057bc81
    PUSH 0x64786a                       ; 0057bc82 | = "Current light : %s"
    LEA EAX,[ESP + 0x75c]               ; 0057bc87
    PUSH EAX                            ; 0057bc8e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bc8f
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057bc94
    PUSH 0x0                            ; 0057bc97
    PUSH 0x0                            ; 0057bc99
    LEA EAX,[ESP + 0x75c]               ; 0057bc9b
    PUSH EAX                            ; 0057bca2
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bca3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bca8
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bcab
    SUB ESP,0x8                         ; 0057bcb2
    FLD float ptr [EAX + 0x11e0]        ; 0057bcb5
    FSTP double ptr [ESP]               ; 0057bcbb
    PUSH 0x64787d                       ; 0057bcbe | = "A.  On time : %f"
    LEA EAX,[ESP + 0x760]               ; 0057bcc3
    PUSH EAX                            ; 0057bcca
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bccb
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057bcd0
    PUSH 0x16                           ; 0057bcd3
    PUSH 0x0                            ; 0057bcd5
    LEA EAX,[ESP + 0x75c]               ; 0057bcd7
    PUSH EAX                            ; 0057bcde
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bcdf
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bce4
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bce7
    SUB ESP,0x8                         ; 0057bcee
    FLD float ptr [EAX + 0x11e4]        ; 0057bcf1
    FSTP double ptr [ESP]               ; 0057bcf7
    PUSH 0x64788e                       ; 0057bcfa | = "B.  Total time : %f"
    LEA EAX,[ESP + 0x760]               ; 0057bcff
    PUSH EAX                            ; 0057bd06
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bd07
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057bd0c
    PUSH 0x21                           ; 0057bd0f
    PUSH 0x0                            ; 0057bd11
    LEA EAX,[ESP + 0x75c]               ; 0057bd13
    PUSH EAX                            ; 0057bd1a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bd1b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bd20
    PUSH 0x2c                           ; 0057bd23
    PUSH 0x0                            ; 0057bd25
    PUSH 0x6478a2                       ; 0057bd27 | = "C.  Add filter"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bd2c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bd31
    PUSH 0x37                           ; 0057bd34
    PUSH 0x0                            ; 0057bd36
    PUSH 0x6478b1                       ; 0057bd38 | = "D.  Delete filter"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bd3d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bd42
    PUSH 0x42                           ; 0057bd45
    PUSH 0x0                            ; 0057bd47
    PUSH 0x6478c3                       ; 0057bd49 | = "E.  Edit filter"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bd4e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bd53
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bd56
    CMP dword ptr [EAX + 0x11f0],0x0    ; 0057bd5d
    JNZ 0x0057c08b                      ; 0057bd64
        ;   XREF to: 0057c08b (CONDITIONAL_JUMP)  ; LAB_0057c08b
    PUSH 0x6478ea                       ; 0057bd6a | = "F.  Blend filter : No"
    LEA EAX,[ESP + 0x758]               ; 0057bd6f
        ;   Label: LAB_0057bd6f
    PUSH EAX                            ; 0057bd76
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bd77
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057bd7c
    PUSH 0x58                           ; 0057bd7f
    PUSH 0x0                            ; 0057bd81
    LEA EAX,[ESP + 0x75c]               ; 0057bd83
    PUSH EAX                            ; 0057bd8a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bd8b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bd90
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bd93
    CMP dword ptr [EAX + 0x17f4],0x0    ; 0057bd9a
    JZ 0x0057c095                       ; 0057bda1
        ;   XREF to: 0057c095 (CONDITIONAL_JUMP)  ; LAB_0057c095
    PUSH 0x647900                       ; 0057bda7 | = "G. Move filter : Yes"
    LEA EAX,[ESP + 0x758]               ; 0057bdac
        ;   Label: LAB_0057bdac
    PUSH EAX                            ; 0057bdb3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bdb4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0057bdb9
    MOV EAX,[0x00679394]                ; 0057bdbc | g_WindowWidth
    MOV EDX,EAX                         ; 0057bdc1
    MOV ECX,0x3                         ; 0057bdc3
    SAR EDX,0x1f                        ; 0057bdc8
    IDIV ECX                            ; 0057bdcb
    PUSH 0x16                           ; 0057bdcd
    PUSH EAX                            ; 0057bdcf
    LEA EAX,[ESP + 0x75c]               ; 0057bdd0
    PUSH EAX                            ; 0057bdd7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bdd8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bddd
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bde0
    FILD dword ptr [EAX + 0x17f8]       ; 0057bde7
    FMUL double ptr [0x00647af5]        ; 0057bded | DOUBLE_00647af5
    SUB ESP,0x8                         ; 0057bdf3
    FSTP double ptr [ESP]               ; 0057bdf6
    PUSH 0x647929                       ; 0057bdf9 | = "H. Velocity X : %f"
    LEA EAX,[ESP + 0x760]               ; 0057bdfe
    PUSH EAX                            ; 0057be05
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057be06
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 0057be0b | g_WindowWidth
    MOV EDX,EAX                         ; 0057be10
    MOV ECX,0x3                         ; 0057be12
    SAR EDX,0x1f                        ; 0057be17
    IDIV ECX                            ; 0057be1a
    ADD ESP,0x10                        ; 0057be1c
    PUSH 0x21                           ; 0057be1f
    PUSH EAX                            ; 0057be21
    LEA EAX,[ESP + 0x75c]               ; 0057be22
    PUSH EAX                            ; 0057be29
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057be2a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057be2f
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057be32
    FILD dword ptr [EAX + 0x17fc]       ; 0057be39
    FMUL double ptr [0x00647af5]        ; 0057be3f | DOUBLE_00647af5
    SUB ESP,0x8                         ; 0057be45
    FSTP double ptr [ESP]               ; 0057be48
    PUSH 0x64793c                       ; 0057be4b | = "I. Velocity Y : %f"
    LEA EAX,[ESP + 0x760]               ; 0057be50
    PUSH EAX                            ; 0057be57
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057be58
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 0057be5d | g_WindowWidth
    MOV EDX,EAX                         ; 0057be62
    MOV ECX,0x3                         ; 0057be64
    SAR EDX,0x1f                        ; 0057be69
    IDIV ECX                            ; 0057be6c
    ADD ESP,0x10                        ; 0057be6e
    PUSH 0x2c                           ; 0057be71
    PUSH EAX                            ; 0057be73
    LEA EAX,[ESP + 0x75c]               ; 0057be74
    PUSH EAX                            ; 0057be7b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057be7c
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057be81
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057be84
    SUB ESP,0x8                         ; 0057be8b
    FLD float ptr [EAX + 0x120]         ; 0057be8e
    FSTP double ptr [ESP]               ; 0057be94
    PUSH 0x64794f                       ; 0057be97 | = "J. Aspect (Y/X) : %f"
    LEA EAX,[ESP + 0x760]               ; 0057be9c
    PUSH EAX                            ; 0057bea3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bea4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 0057bea9 | g_WindowWidth
    MOV EDX,EAX                         ; 0057beae
    MOV ECX,0x3                         ; 0057beb0
    SAR EDX,0x1f                        ; 0057beb5
    IDIV ECX                            ; 0057beb8
    ADD ESP,0x10                        ; 0057beba
    PUSH 0x37                           ; 0057bebd
    PUSH EAX                            ; 0057bebf
    LEA EAX,[ESP + 0x75c]               ; 0057bec0
    PUSH EAX                            ; 0057bec7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bec8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057becd
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bed0
    SUB ESP,0x8                         ; 0057bed7
    FLD float ptr [EAX + 0x124]         ; 0057beda
    FSTP double ptr [ESP]               ; 0057bee0
    PUSH 0x647964                       ; 0057bee3 | = "K. Intensity : %f"
    LEA EAX,[ESP + 0x760]               ; 0057bee8
    PUSH EAX                            ; 0057beef
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bef0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,[0x00679394]                ; 0057bef5 | g_WindowWidth
    MOV EDX,EAX                         ; 0057befa
    MOV ECX,0x3                         ; 0057befc
    SAR EDX,0x1f                        ; 0057bf01
    IDIV ECX                            ; 0057bf04
    ADD ESP,0x10                        ; 0057bf06
    PUSH 0x37                           ; 0057bf09
    PUSH EAX                            ; 0057bf0b
    LEA EAX,[ESP + 0x75c]               ; 0057bf0c
    PUSH EAX                            ; 0057bf13
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bf14
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bf19
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bf1c
    MOV EDI,dword ptr [EAX + 0x11ec]    ; 0057bf23
    PUSH EDI                            ; 0057bf29
    PUSH 0x647976                       ; 0057bf2a | = "Filter count = %d"
    LEA EAX,[ESP + 0x75c]               ; 0057bf2f
    PUSH EAX                            ; 0057bf36
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bf37
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0057bf3c
    PUSH 0x63                           ; 0057bf3f
    PUSH 0x0                            ; 0057bf41
    LEA EAX,[ESP + 0x75c]               ; 0057bf43
    PUSH EAX                            ; 0057bf4a
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bf4b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bf50
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bf53
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 0057bf5a
    XOR EDI,EDI                         ; 0057bf60
    TEST EDX,EDX                        ; 0057bf62
    JLE 0x0057c00c                      ; 0057bf64
        ;   XREF to: 0057c00c (CONDITIONAL_JUMP)  ; LAB_0057c00c
    MOV EAX,dword ptr [ESP + 0x874]     ; 0057bf6a
    MOV EDX,0x6e                        ; 0057bf71
    MOV ESI,0x41                        ; 0057bf76
    MOV EBX,dword ptr [ESP + 0x890]     ; 0057bf7b
    MOV dword ptr [ESP + 0x888],EAX     ; 0057bf82
    MOV dword ptr [ESP + 0x884],EDX     ; 0057bf89
    SUB ESP,0x8                         ; 0057bf90
        ;   Label: LAB_0057bf90
    FLD float ptr [EBX + 0x16f4]        ; 0057bf93
    MOV ECX,dword ptr [ESP + 0x890]     ; 0057bf99
    FSTP double ptr [ESP]               ; 0057bfa0
    PUSH ECX                            ; 0057bfa3
    PUSH ESI                            ; 0057bfa4
    PUSH 0x647988                       ; 0057bfa5 | = "%c.  %s for %1.3f seconds"
    LEA EDX,[ESP + 0x768]               ; 0057bfaa
    PUSH EDX                            ; 0057bfb1
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0057bfb2
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x18                        ; 0057bfb7
    MOV EAX,dword ptr [ESP + 0x884]     ; 0057bfba
    PUSH EAX                            ; 0057bfc1
    PUSH 0x0                            ; 0057bfc2
    LEA EDX,[ESP + 0x75c]               ; 0057bfc4
    PUSH EDX                            ; 0057bfcb
    ADD EBX,0x4                         ; 0057bfcc
    INC EDI                             ; 0057bfcf
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0057bfd0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0057bfd5
    INC ESI                             ; 0057bfd8
    MOV EDX,dword ptr [ESP + 0x884]     ; 0057bfd9
    MOV ECX,dword ptr [ESP + 0x888]     ; 0057bfe0
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057bfe7
    ADD EDX,0xb                         ; 0057bfee
    ADD ECX,0x28                        ; 0057bff1
    MOV dword ptr [ESP + 0x884],EDX     ; 0057bff4
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 0057bffb
    MOV dword ptr [ESP + 0x888],ECX     ; 0057c001
    CMP EDI,EDX                         ; 0057c008
    JL 0x0057bf90                       ; 0057c00a
        ;   XREF to: 0057bf90 (CONDITIONAL_JUMP)  ; LAB_0057bf90
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0057c00c
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0057c00c
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0057c011
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV ECX,dword ptr [0x0067cf44]      ; 0057c016 | g_CKeysInstance | g_CKeysPtr
    PUSH ECX                            ; 0057c01c | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 0057c01d
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)
    ADD ESP,0x4                         ; 0057c022
    MOV dword ptr [ESP + 0x878],EAX     ; 0057c025
    SUB EAX,0x41                        ; 0057c02c
    CMP EAX,0xa                         ; 0057c02f
    JA 0x0057c05e                       ; 0057c032
        ;   XREF to: 0057c05e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x57bbb0]  ; 0057c034 | caseD_41 | caseD_42 | caseD_43
        ;   Label: switchD
    PUSH 0x1                            ; 0057c03b
        ;   Label: caseD_41
    PUSH 0x0                            ; 0057c03d
    PUSH 0x0                            ; 0057c03f
    PUSH 0x0                            ; 0057c041
    MOV EDI,dword ptr [ESP + 0x874]     ; 0057c043
    PUSH EDI                            ; 0057c04a
    PUSH 0x6479a2                       ; 0057c04b | = "Enter on time"
    MOV EAX,[0x00678a60]                ; 0057c050 | g_CEditorToolsPtr
        ;   Label: LAB_0057c050
    PUSH EAX                            ; 0057c055 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057c056
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
        ;   Label: LAB_0057c056
    ADD ESP,0x1c                        ; 0057c05b
    CMP dword ptr [ESP + 0x878],0x1b    ; 0057c05e
        ;   Label: default
    JNZ 0x0057bc75                      ; 0057c066
        ;   XREF to: 0057bc75 (CONDITIONAL_JUMP)  ; LAB_0057bc75
    MOV ECX,dword ptr [EBP + 0x14]      ; 0057c06c
    PUSH ECX                            ; 0057c06f
    CALL core_set.cpp_CDemonSet_FUN_0056d2d0 ; 0057c070
        ;   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057c075
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057c078
    PUSH EBX                            ; 0057c07b
    CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10 ; 0057c07c
        ;   XREF to: 0056aa10 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initScene_FUN_0056aa10(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0057c081
    MOV ESP,EBP                         ; 0057c084
    POP EBP                             ; 0057c086
    POP EDI                             ; 0057c087
    POP ESI                             ; 0057c088
    POP EBX                             ; 0057c089
    RET                                 ; 0057c08a
    PUSH 0x6478d3                       ; 0057c08b | = "F.  Blend filter : Yes"
        ;   Label: LAB_0057c08b
    JMP 0x0057bd6f                      ; 0057c090
        ;   XREF to: 0057bd6f (UNCONDITIONAL_JUMP)  ; LAB_0057bd6f
    PUSH 0x647915                       ; 0057c095 | = "G. Move filter : No"
        ;   Label: LAB_0057c095
    JMP 0x0057bdac                      ; 0057c09a
        ;   XREF to: 0057bdac (UNCONDITIONAL_JUMP)  ; LAB_0057bdac
    PUSH 0x1                            ; 0057c09f
        ;   Label: caseD_42
    PUSH 0x0                            ; 0057c0a1
    PUSH 0x0                            ; 0057c0a3
    PUSH 0x0                            ; 0057c0a5
    MOV EBX,dword ptr [ESP + 0x87c]     ; 0057c0a7
    PUSH EBX                            ; 0057c0ae
    PUSH 0x6479b0                       ; 0057c0af | = "Enter total time"
    MOV ESI,dword ptr [0x00678a60]      ; 0057c0b4 | g_CEditorToolsPtr
    PUSH ESI                            ; 0057c0ba | g_CEditorToolsPtr
    JMP 0x0057c056                      ; 0057c0bb
        ;   XREF to: 0057c056 (UNCONDITIONAL_JUMP)  ; LAB_0057c056
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c0bd
        ;   Label: caseD_43
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 0057c0c4
    CMP EDX,0x20                        ; 0057c0ca
    JL 0x0057c0e8                       ; 0057c0cd
        ;   XREF to: 0057c0e8 (CONDITIONAL_JUMP)  ; LAB_0057c0e8
    PUSH 0x6479c1                       ; 0057c0cf | = "Already max filters for this light."
    MOV ECX,dword ptr [0x00678a60]      ; 0057c0d4 | g_CEditorToolsPtr
    PUSH ECX                            ; 0057c0da | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057c0db
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057c0e0
    JMP 0x0057c05e                      ; 0057c0e3
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    IMUL EAX,EDX,0x28                   ; 0057c0e8
        ;   Label: LAB_0057c0e8
    PUSH 0x0                            ; 0057c0eb
    MOV EBX,dword ptr [ESP + 0x884]     ; 0057c0ed
    PUSH 0x28                           ; 0057c0f4
    ADD EAX,EBX                         ; 0057c0f6
    PUSH EAX                            ; 0057c0f8
    PUSH 0x6479e5                       ; 0057c0f9 | = "Enter new filter name"
    MOV ESI,dword ptr [0x00678a60]      ; 0057c0fe | g_CEditorToolsPtr
    PUSH ESI                            ; 0057c104 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057c105
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057c10a
    TEST EAX,EAX                        ; 0057c10d
    JZ 0x0057c05e                       ; 0057c10f
        ;   XREF to: 0057c05e (CONDITIONAL_JUMP)  ; default
    PUSH 0x0                            ; 0057c115
    MOV EAX,dword ptr [ESP + 0x894]     ; 0057c117
    MOV EDI,dword ptr [ESP + 0x880]     ; 0057c11e
    PUSH 0x0                            ; 0057c125
    MOV EAX,dword ptr [EAX + 0x11ec]    ; 0057c127
    PUSH 0x0                            ; 0057c12d
    SHL EAX,0x2                         ; 0057c12f
    PUSH 0x0                            ; 0057c132
    ADD EAX,EDI                         ; 0057c134
    PUSH EAX                            ; 0057c136
    PUSH 0x6479fb                       ; 0057c137 | = "Enter new filter time"
    MOV EAX,[0x00678a60]                ; 0057c13c | g_CEditorToolsPtr
    PUSH EAX                            ; 0057c141 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057c142
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057c147
    TEST EAX,EAX                        ; 0057c14a
    JZ 0x0057c05e                       ; 0057c14c
        ;   XREF to: 0057c05e (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c152
    INC dword ptr [EAX + 0x11ec]        ; 0057c159
    JMP 0x0057c05e                      ; 0057c15f
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c164
        ;   Label: caseD_44
    CMP dword ptr [EAX + 0x11ec],0x1    ; 0057c16b
    JL 0x0057c273                       ; 0057c172
        ;   XREF to: 0057c273 (CONDITIONAL_JUMP)  ; LAB_0057c273
    LEA EAX,[ESP + 0x3ac]               ; 0057c178
    PUSH EAX                            ; 0057c17f
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057c180
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057c185
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c188
    MOV EDI,dword ptr [EAX + 0x11ec]    ; 0057c18f
    XOR ESI,ESI                         ; 0057c195
    TEST EDI,EDI                        ; 0057c197
    JLE 0x0057c1c8                      ; 0057c199
        ;   XREF to: 0057c1c8 (CONDITIONAL_JUMP)  ; LAB_0057c1c8
    MOV EBX,dword ptr [ESP + 0x85c]     ; 0057c19b
    PUSH EBX                            ; 0057c1a2
        ;   Label: LAB_0057c1a2
    LEA EDX,[ESP + 0x3b0]               ; 0057c1a3
    PUSH EDX                            ; 0057c1aa
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057c1ab
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057c1b0
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c1b3
    INC ESI                             ; 0057c1ba
    MOV EDI,dword ptr [EAX + 0x11ec]    ; 0057c1bb
    ADD EBX,0x28                        ; 0057c1c1
    CMP ESI,EDI                         ; 0057c1c4
    JL 0x0057c1a2                       ; 0057c1c6
        ;   XREF to: 0057c1a2 (CONDITIONAL_JUMP)  ; LAB_0057c1a2
    PUSH 0x0                            ; 0057c1c8
        ;   Label: LAB_0057c1c8
    PUSH -0x1                           ; 0057c1ca
    PUSH 0x647a27                       ; 0057c1cc | = "Select filter to delete"
    LEA EAX,[ESP + 0x3b8]               ; 0057c1d1
    PUSH EAX                            ; 0057c1d8
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057c1d9
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    ADD ESP,0x10                        ; 0057c1de
    TEST EAX,EAX                        ; 0057c1e1
    JL 0x0057c291                       ; 0057c1e3
        ;   XREF to: 0057c291 (CONDITIONAL_JUMP)  ; LAB_0057c291
    MOV dword ptr [ESP + 0x88c],EAX     ; 0057c1e9
    LEA EBX,[EAX*0x4 + 0x0]             ; 0057c1f0
    IMUL EAX,EAX,0x28                   ; 0057c1f7
    ADD EBX,dword ptr [ESP + 0x890]     ; 0057c1fa
    MOV EDX,dword ptr [ESP + 0x880]     ; 0057c201
    MOV ESI,dword ptr [ESP + 0x880]     ; 0057c208
    ADD EDX,EAX                         ; 0057c20f
    LEA ECX,[EAX + 0x28]                ; 0057c211
    ADD ECX,ESI                         ; 0057c214
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c216
        ;   Label: LAB_0057c216
    MOV ESI,dword ptr [EAX + 0x11ec]    ; 0057c21d
    MOV EDI,dword ptr [ESP + 0x88c]     ; 0057c223
    DEC ESI                             ; 0057c22a
    CMP ESI,EDI                         ; 0057c22b
    JLE 0x0057c28b                      ; 0057c22d
        ;   XREF to: 0057c28b (CONDITIONAL_JUMP)  ; LAB_0057c28b
    MOV ESI,ECX                         ; 0057c22f
    MOV EDI,EDX                         ; 0057c231
    ADD EBX,0x4                         ; 0057c233
    PUSH EDI                            ; 0057c236
    MOV AL,byte ptr [ESI]               ; 0057c237
        ;   Label: LAB_0057c237
    MOV byte ptr [EDI],AL               ; 0057c239
    CMP AL,0x0                          ; 0057c23b
    JZ 0x0057c24f                       ; 0057c23d
        ;   XREF to: 0057c24f (CONDITIONAL_JUMP)  ; LAB_0057c24f
    MOV AL,byte ptr [ESI + 0x1]         ; 0057c23f
    ADD ESI,0x2                         ; 0057c242
    MOV byte ptr [EDI + 0x1],AL         ; 0057c245
    ADD EDI,0x2                         ; 0057c248
    CMP AL,0x0                          ; 0057c24b
    JNZ 0x0057c237                      ; 0057c24d
        ;   XREF to: 0057c237 (CONDITIONAL_JUMP)  ; LAB_0057c237
    POP EDI                             ; 0057c24f
        ;   Label: LAB_0057c24f
    FLD float ptr [EBX + 0x16f4]        ; 0057c250
    MOV EAX,dword ptr [ESP + 0x88c]     ; 0057c256
    ADD EDX,0x28                        ; 0057c25d
    ADD ECX,0x28                        ; 0057c260
    INC EAX                             ; 0057c263
    FSTP float ptr [EBX + 0x16f0]       ; 0057c264
    MOV dword ptr [ESP + 0x88c],EAX     ; 0057c26a
    JMP 0x0057c216                      ; 0057c271
        ;   XREF to: 0057c216 (UNCONDITIONAL_JUMP)  ; LAB_0057c216
    PUSH 0x647a11                       ; 0057c273 | = "No filters to delete!"
        ;   Label: LAB_0057c273
    MOV EAX,[0x00678a60]                ; 0057c278 | g_CEditorToolsPtr
    PUSH EAX                            ; 0057c27d | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057c27e
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057c283
    JMP 0x0057c05e                      ; 0057c286
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x11ec],ESI    ; 0057c28b
        ;   Label: LAB_0057c28b
    PUSH 0x0                            ; 0057c291
        ;   Label: LAB_0057c291
    LEA EAX,[ESP + 0x3b0]               ; 0057c293
    PUSH EAX                            ; 0057c29a
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057c29b
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0057c2a0
    JMP 0x0057c05e                      ; 0057c2a3
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c2a8
        ;   Label: caseD_45
    CMP dword ptr [EAX + 0x11ec],0x1    ; 0057c2af
    JL 0x0057c38c                       ; 0057c2b6
        ;   XREF to: 0057c38c (CONDITIONAL_JUMP)  ; LAB_0057c38c
    LEA EAX,[ESP + 0x4]                 ; 0057c2bc
    PUSH EAX                            ; 0057c2c0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90 ; 0057c2c1
        ;   XREF to: 004a3b90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_004a3b90(CPickList * this_ptr)
    ADD ESP,0x4                         ; 0057c2c6
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c2c9
    XOR EBX,EBX                         ; 0057c2d0
    MOV EDX,dword ptr [EAX + 0x11ec]    ; 0057c2d2
    MOV ESI,dword ptr [ESP + 0x880]     ; 0057c2d8
    TEST EDX,EDX                        ; 0057c2df
    JLE 0x0057c306                      ; 0057c2e1
        ;   XREF to: 0057c306 (CONDITIONAL_JUMP)  ; LAB_0057c306
    PUSH ESI                            ; 0057c2e3
        ;   Label: LAB_0057c2e3
    LEA EDX,[ESP + 0x8]                 ; 0057c2e4
    PUSH EDX                            ; 0057c2e8
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 0057c2e9
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0057c2ee
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c2f1
    INC EBX                             ; 0057c2f8
    MOV ECX,dword ptr [EAX + 0x11ec]    ; 0057c2f9
    ADD ESI,0x28                        ; 0057c2ff
    CMP EBX,ECX                         ; 0057c302
    JL 0x0057c2e3                       ; 0057c304
        ;   XREF to: 0057c2e3 (CONDITIONAL_JUMP)  ; LAB_0057c2e3
    PUSH 0x0                            ; 0057c306
        ;   Label: LAB_0057c306
    PUSH -0x1                           ; 0057c308
    PUSH 0x647a53                       ; 0057c30a | = "Select filter to edit"
    LEA EAX,[ESP + 0x10]                ; 0057c30f
    PUSH EAX                            ; 0057c313
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20 ; 0057c314
        ;   XREF to: 004a3e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(CPickList * this_ptr, char * dialog_title, int config_param1, int config_param2)
    MOV EBX,EAX                         ; 0057c319
    ADD ESP,0x10                        ; 0057c31b
    TEST EAX,EAX                        ; 0057c31e
    JL 0x0057c378                       ; 0057c320
        ;   XREF to: 0057c378 (CONDITIONAL_JUMP)  ; LAB_0057c378
    IMUL EAX,EAX,0x28                   ; 0057c322
    PUSH 0x0                            ; 0057c325
    MOV ESI,dword ptr [ESP + 0x884]     ; 0057c327
    PUSH 0x28                           ; 0057c32e
    ADD EAX,ESI                         ; 0057c330
    PUSH EAX                            ; 0057c332
    PUSH 0x647a69                       ; 0057c333 | = "Edit filter name"
    MOV EDI,dword ptr [0x00678a60]      ; 0057c338 | g_CEditorToolsPtr
    PUSH EDI                            ; 0057c33e | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0 ; 0057c33f
        ;   XREF to: 004a03d0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0(CEditorTools * this_ptr, char * prompt_text, char * input_buffer, int buffer_size, ...)
    ADD ESP,0x14                        ; 0057c344
    TEST EAX,EAX                        ; 0057c347
    JZ 0x0057c378                       ; 0057c349
        ;   XREF to: 0057c378 (CONDITIONAL_JUMP)  ; LAB_0057c378
    PUSH 0x1                            ; 0057c34b
    PUSH 0x0                            ; 0057c34d
    MOV EDX,dword ptr [ESP + 0x884]     ; 0057c34f
    PUSH 0x0                            ; 0057c356
    LEA EAX,[EBX*0x4 + 0x0]             ; 0057c358
    PUSH 0x0                            ; 0057c35f
    ADD EAX,EDX                         ; 0057c361
    PUSH EAX                            ; 0057c363
    PUSH 0x647a7a                       ; 0057c364 | = "Edit filter time"
    MOV ECX,dword ptr [0x00678a60]      ; 0057c369 | g_CEditorToolsPtr
    PUSH ECX                            ; 0057c36f | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057c370
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057c375
    PUSH 0x0                            ; 0057c378
        ;   Label: LAB_0057c378
    LEA EAX,[ESP + 0x8]                 ; 0057c37a
    PUSH EAX                            ; 0057c37e
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80 ; 0057c37f
        ;   XREF to: 004a3c80 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004a3c80(CPickList * this_ptr, uint d1, uint d2, uint d3, ...)
    ADD ESP,0x8                         ; 0057c384
    JMP 0x0057c05e                      ; 0057c387
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x647a3f                       ; 0057c38c | = "No filters to edit!"
        ;   Label: LAB_0057c38c
    MOV ECX,dword ptr [0x00678a60]      ; 0057c391 | g_CEditorToolsPtr
    PUSH ECX                            ; 0057c397 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 ; 0057c398
        ;   XREF to: 0049e740 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showError_FUN_0049e740(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 0057c39d
    JMP 0x0057c05e                      ; 0057c3a0
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c3a5
        ;   Label: caseD_46
    CMP dword ptr [EAX + 0x11f0],0x0    ; 0057c3ac
    SETZ AL                             ; 0057c3b3
    MOV EDX,dword ptr [ESP + 0x890]     ; 0057c3b6
    AND EAX,0xff                        ; 0057c3bd
    MOV dword ptr [EDX + 0x11f0],EAX    ; 0057c3c2
    JMP 0x0057c05e                      ; 0057c3c8
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c3cd
        ;   Label: caseD_47
    CMP dword ptr [EAX + 0x17f4],0x0    ; 0057c3d4
    SETZ AL                             ; 0057c3db
    MOV EDX,dword ptr [ESP + 0x890]     ; 0057c3de
    AND EAX,0xff                        ; 0057c3e5
    MOV dword ptr [EDX + 0x17f4],EAX    ; 0057c3ea
    JMP 0x0057c05e                      ; 0057c3f0
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0057c3f5
        ;   Label: caseD_48
    PUSH 0x0                            ; 0057c3f7
    MOV EAX,dword ptr [ESP + 0x898]     ; 0057c3f9
    PUSH 0x0                            ; 0057c400
    PUSH 0x0                            ; 0057c402
    FILD dword ptr [EAX + 0x17f8]       ; 0057c404
    LEA EAX,[ESP + 0x10]                ; 0057c40a
    PUSH EAX                            ; 0057c40e
    MOV ECX,dword ptr [0x00678a60]      ; 0057c40f | g_CEditorToolsPtr
    PUSH 0x647a8b                       ; 0057c415 | = "Enter light X velocity"
    FMUL double ptr [0x00647af5]        ; 0057c41a | DOUBLE_00647af5
    PUSH ECX                            ; 0057c420 | g_CEditorToolsPtr
    FSTP float ptr [ESP + 0x1c]         ; 0057c421
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057c425
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057c42a
    TEST EAX,EAX                        ; 0057c42d
    JZ 0x0057c05e                       ; 0057c42f
        ;   XREF to: 0057c05e (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP]                 ; 0057c435
    FMUL double ptr [0x00647afd]        ; 0057c438 | DOUBLE_00647afd
    FADD double ptr [0x00647b05]        ; 0057c43e | DOUBLE_00647b05
    SUB ESP,0x8                         ; 0057c444
    FSTP double ptr [ESP]               ; 0057c447
    CALL crt_math.c_floor_FUN_005feb90  ; 0057c44a
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x85c],EAX     ; 0057c44f
    MOV dword ptr [ESP + 0x860],EDX     ; 0057c456
    FLD double ptr [ESP + 0x85c]        ; 0057c45d
    ADD ESP,0x8                         ; 0057c464
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c467
    CALL crt_math.c_round_FUN_005fe6b0  ; 0057c46e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x17f8]      ; 0057c473
    JMP 0x0057c05e                      ; 0057c479
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0057c47e
        ;   Label: caseD_49
    PUSH 0x0                            ; 0057c480
    MOV EAX,dword ptr [ESP + 0x898]     ; 0057c482
    PUSH 0x0                            ; 0057c489
    PUSH 0x0                            ; 0057c48b
    FILD dword ptr [EAX + 0x17fc]       ; 0057c48d
    LEA EAX,[ESP + 0x10]                ; 0057c493
    PUSH EAX                            ; 0057c497
    MOV EDX,dword ptr [0x00678a60]      ; 0057c498 | g_CEditorToolsPtr
    PUSH 0x647aa2                       ; 0057c49e | = "Enter light Y velocity"
    FMUL double ptr [0x00647af5]        ; 0057c4a3 | DOUBLE_00647af5
    PUSH EDX                            ; 0057c4a9 | g_CEditorToolsPtr
    FSTP float ptr [ESP + 0x1c]         ; 0057c4aa
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 0057c4ae
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, bool enable_range_check, ...)
    ADD ESP,0x1c                        ; 0057c4b3
    TEST EAX,EAX                        ; 0057c4b6
    JZ 0x0057c05e                       ; 0057c4b8
        ;   XREF to: 0057c05e (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP]                 ; 0057c4be
    FMUL double ptr [0x00647afd]        ; 0057c4c1 | DOUBLE_00647afd
    FADD double ptr [0x00647b05]        ; 0057c4c7 | DOUBLE_00647b05
    SUB ESP,0x8                         ; 0057c4cd
    FSTP double ptr [ESP]               ; 0057c4d0
    CALL crt_math.c_floor_FUN_005feb90  ; 0057c4d3
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x85c],EAX     ; 0057c4d8
    MOV dword ptr [ESP + 0x860],EDX     ; 0057c4df | g_CEditorToolsPtr
    FLD double ptr [ESP + 0x85c]        ; 0057c4e6
    ADD ESP,0x8                         ; 0057c4ed
    MOV EAX,dword ptr [ESP + 0x890]     ; 0057c4f0
    CALL crt_math.c_round_FUN_005fe6b0  ; 0057c4f7
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX + 0x17fc]      ; 0057c4fc
    JMP 0x0057c05e                      ; 0057c502
        ;   XREF to: 0057c05e (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1                            ; 0057c507
        ;   Label: caseD_4a
    PUSH 0x0                            ; 0057c509
    PUSH 0x0                            ; 0057c50b
    PUSH 0x0                            ; 0057c50d
    MOV EDI,dword ptr [ESP + 0x870]     ; 0057c50f
    PUSH EDI                            ; 0057c516
    PUSH 0x647ab9                       ; 0057c517 | = "Enter light aspect ratio (Y/X)"
    JMP 0x0057c050                      ; 0057c51c
        ;   XREF to: 0057c050 (UNCONDITIONAL_JUMP)  ; LAB_0057c050
    PUSH 0x1                            ; 0057c521
        ;   Label: caseD_4b
    PUSH 0x3f800000                     ; 0057c523
    PUSH 0x0                            ; 0057c528
    PUSH 0x1                            ; 0057c52a
    MOV EBX,dword ptr [ESP + 0x878]     ; 0057c52c
    PUSH EBX                            ; 0057c533
    PUSH 0x647ad8                       ; 0057c534 | = "Enter light intensity (0..1)"
    MOV ESI,dword ptr [0x00678a60]      ; 0057c539 | g_CEditorToolsPtr
    PUSH ESI                            ; 0057c53f | g_CEditorToolsPtr
    JMP 0x0057c056                      ; 0057c540
        ;   XREF to: 0057c056 (UNCONDITIONAL_JUMP)  ; LAB_0057c056

