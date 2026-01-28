; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void shape_design_c_createPolygonFromVertexList_FUN_0045cc80(void)
;
; Local Variables:
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_point_list_goin_0061b391
;   TerminatedCString s_d_d_d_d_d_d_d_d_d_d_d_d__0061b3b8
;   int g_EditorColorIndex
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e9914
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e9a88
;   undefined4 DAT_016e9a8c
;   undefined4 DAT_016e9a90
;   int g_CurrentPartIndex
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_calculatePolygonNormal_FUN_0045caa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cc80
        ;   Label: shape_design.c_createPolygonFromVertexList_FUN_0045cc80
    PUSH ESI                            ; 0045cc81
    PUSH EDI                            ; 0045cc82
    PUSH EBP                            ; 0045cc83
    MOV EBP,ESP                         ; 0045cc84
    SUB ESP,0x98                        ; 0045cc86
    PUSH 0x0                            ; 0045cc8c
    PUSH 0x0                            ; 0045cc8e
    MOV EAX,0x61b391                    ; 0045cc90 | = "Enter in point list going CW, ie 1,2,3"
    PUSH EAX                            ; 0045cc95 | = "Enter in point list going CW, ie 1,2,3"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045cc96
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0045cc9b
    PUSH 0x0                            ; 0045cc9e
    PUSH 0xb                            ; 0045cca0
    PUSH 0x0                            ; 0045cca2
    PUSH 0x3c                           ; 0045cca4
    LEA EAX,[EBP + 0xffffff68]          ; 0045cca6
    PUSH EAX                            ; 0045ccac
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045ccad
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045ccb2
    LEA EAX,[EBP + -0xc]                ; 0045ccb5
    PUSH EAX                            ; 0045ccb8
    LEA EAX,[EBP + -0x10]               ; 0045ccb9
    PUSH EAX                            ; 0045ccbc
    LEA EAX,[EBP + -0x14]               ; 0045ccbd
    PUSH EAX                            ; 0045ccc0
    LEA EAX,[EBP + -0x18]               ; 0045ccc1
    PUSH EAX                            ; 0045ccc4
    LEA EAX,[EBP + -0x1c]               ; 0045ccc5
    PUSH EAX                            ; 0045ccc8
    LEA EAX,[EBP + -0x20]               ; 0045ccc9
    PUSH EAX                            ; 0045cccc
    LEA EAX,[EBP + -0x24]               ; 0045cccd
    PUSH EAX                            ; 0045ccd0
    LEA EAX,[EBP + -0x28]               ; 0045ccd1
    PUSH EAX                            ; 0045ccd4
    LEA EAX,[EBP + -0x2c]               ; 0045ccd5
    PUSH EAX                            ; 0045ccd8
    LEA EAX,[EBP + -0x30]               ; 0045ccd9
    PUSH EAX                            ; 0045ccdc
    LEA EAX,[EBP + -0x34]               ; 0045ccdd
    PUSH EAX                            ; 0045cce0
    LEA EAX,[EBP + -0x38]               ; 0045cce1
    PUSH EAX                            ; 0045cce4
    LEA EAX,[EBP + -0x3c]               ; 0045cce5
    PUSH EAX                            ; 0045cce8
    LEA EAX,[EBP + -0x40]               ; 0045cce9
    PUSH EAX                            ; 0045ccec
    LEA EAX,[EBP + -0x44]               ; 0045cced
    PUSH EAX                            ; 0045ccf0
    LEA EAX,[EBP + -0x48]               ; 0045ccf1
    PUSH EAX                            ; 0045ccf4
    MOV EAX,0x61b3b8                    ; 0045ccf5 | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%..."
    PUSH EAX                            ; 0045ccfa | = "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%..."
    LEA EAX,[EBP + 0xffffff68]          ; 0045ccfb
    PUSH EAX                            ; 0045cd01
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 0045cd02
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x48                        ; 0045cd07
    MOV dword ptr [EBP + -0x8],EAX      ; 0045cd0a
    CMP dword ptr [EBP + -0x8],0x2      ; 0045cd0d
    JLE 0x0045cd19                      ; 0045cd11
        ;   XREF to: 0045cd19 (CONDITIONAL_JUMP)  ; LAB_0045cd19
    CMP dword ptr [EBP + -0x8],0x10     ; 0045cd13
    JL 0x0045cd1e                       ; 0045cd17
        ;   XREF to: 0045cd1e (CONDITIONAL_JUMP)  ; LAB_0045cd1e
    JMP 0x0045cdf0                      ; 0045cd19
        ;   XREF to: 0045cdf0 (UNCONDITIONAL_JUMP)  ; LAB_0045cdf0
        ;   Label: LAB_0045cd19
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045cd1e | g_PolygonCount
        ;   Label: LAB_0045cd1e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045cd28
    MOV dword ptr [EDX + 0x16e99b4],EAX ; 0045cd2b | DAT_016e99b4
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045cd31 | g_PolygonCount
    MOV dword ptr [EAX + 0x16e9910],0x1 ; 0045cd3b | g_ModelPolygonData
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045cd45 | g_PolygonCount
    MOV byte ptr [EAX + 0x16e9914],0x0  ; 0045cd4f | DAT_016e9914
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045cd56 | g_PolygonCount
    MOV EAX,[0x01e6614c]                ; 0045cd60 | g_CurrentPartIndex
    MOV dword ptr [EDX + 0x16e9a88],EAX ; 0045cd65 | DAT_016e9a88
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045cd6b | g_PolygonCount
    MOV EAX,[0x01626368]                ; 0045cd75 | g_EditorColorIndex
    MOV dword ptr [EDX + 0x16e9a8c],EAX ; 0045cd7a | DAT_016e9a8c
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045cd80 | g_PolygonCount
    MOV EAX,[0x01626368]                ; 0045cd8a | g_EditorColorIndex
    MOV dword ptr [EDX + 0x16e9a90],EAX ; 0045cd8f | DAT_016e9a90
    MOV dword ptr [EBP + -0x4],0x0      ; 0045cd95
    JMP 0x0045cda4                      ; 0045cd9c
        ;   XREF to: 0045cda4 (UNCONDITIONAL_JUMP)  ; LAB_0045cda4
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045cd9e
        ;   Label: LAB_0045cd9e
    INC dword ptr [EBP + -0x4]          ; 0045cda1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045cda4
        ;   Label: LAB_0045cda4
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045cda7
    JGE 0x0045cdd0                      ; 0045cdaa
        ;   XREF to: 0045cdd0 (CONDITIONAL_JUMP)  ; LAB_0045cdd0
    MOV ECX,dword ptr [EBP + -0x4]      ; 0045cdac
    SHL ECX,0x2                         ; 0045cdaf
    IMUL EDX,dword ptr [0x016e990c],0x184 ; 0045cdb2 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045cdbc
    SHL EAX,0x2                         ; 0045cdbf
    ADD EDX,EAX                         ; 0045cdc2
    MOV EAX,dword ptr [ECX + EBP*0x1 + -0x48] ; 0045cdc4
    MOV dword ptr [EDX + 0x16e99c8],EAX ; 0045cdc8 | DAT_016e99c8
    JMP 0x0045cd9e                      ; 0045cdce
        ;   XREF to: 0045cd9e (UNCONDITIONAL_JUMP)  ; LAB_0045cd9e
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0045cdd0 | g_PolygonCount
        ;   Label: LAB_0045cdd0
    MOV EDX,0x16e9910                   ; 0045cdda | g_ModelPolygonData
    ADD EAX,EDX                         ; 0045cddf
    PUSH EAX                            ; 0045cde1
    CALL shape_design.c_calculatePolygonNormal_FUN_0045caa0 ; 0045cde2
        ;   XREF to: 0045caa0 (UNCONDITIONAL_CALL)  ; void shape_design.c_calculatePolygonNormal_FUN_0045caa0(SShapeEditorPolygon * polygon)
    ADD ESP,0x4                         ; 0045cde7
    INC dword ptr [0x016e990c]          ; 0045cdea | g_PolygonCount
    MOV ESP,EBP                         ; 0045cdf0
        ;   Label: LAB_0045cdf0
    POP EBP                             ; 0045cdf2
    POP EDI                             ; 0045cdf3
    POP ESI                             ; 0045cdf4
    POP EBX                             ; 0045cdf5
    RET                                 ; 0045cdf6

