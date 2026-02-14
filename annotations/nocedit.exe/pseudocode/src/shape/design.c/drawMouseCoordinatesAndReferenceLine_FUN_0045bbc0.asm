; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c86e
;
; Referenced Globals:
;   double g_MouseAspectRatioMultiplier = 3
;   double g_AspectRatioCorrection = 0.25
;   double g_MouseViewportCenterOffset = 0.5
;   float g_MouseWorldScaleFactor = 0.00390625
;   TerminatedCString s_f_f_f_0061b2e2
;   int g_MouseReferenceY = 0x64
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_ZoomLevel
;   int g_StoredWorldYCoordinate
;   int g_MouseX
;   int g_MouseY
;   _BIT_INTEGER g_MouseButtonFlags
;   int g_ActiveRenderColor
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bbc0
        ;   Label: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
    PUSH ESI                            ; 0045bbc1
    PUSH EDI                            ; 0045bbc2
    PUSH EBP                            ; 0045bbc3
    MOV EBP,ESP                         ; 0045bbc4
    SUB ESP,0x60                        ; 0045bbc6
    FILD dword ptr [0x00679394]         ; 0045bbcc | g_WindowWidth
    FMUL double ptr [0x0061b2c6]        ; 0045bbd2 | g_MouseAspectRatioMultiplier
    FILD dword ptr [0x00679398]         ; 0045bbd8 | g_WindowHeight
    FDIVP                               ; 0045bbde
    FMUL double ptr [0x0061b2ce]        ; 0045bbe0 | g_AspectRatioCorrection
    FSTP float ptr [EBP + -0x8]         ; 0045bbe6
    FILD dword ptr [0x00679394]         ; 0045bbe9 | g_WindowWidth
    FMUL double ptr [0x0061b2d6]        ; 0045bbef | g_MouseViewportCenterOffset
    FILD dword ptr [0x02cf6a8c]         ; 0045bbf5 | g_MouseX
    FSUBRP                              ; 0045bbfb
    FILD dword ptr [0x00679394]         ; 0045bbfd | g_WindowWidth
    FMUL double ptr [0x0061b2d6]        ; 0045bc03 | g_MouseViewportCenterOffset
    FDIVP                               ; 0045bc09
    FSTP float ptr [EBP + -0x4]         ; 0045bc0b
    FILD dword ptr [0x00679398]         ; 0045bc0e | g_WindowHeight
    FMUL double ptr [0x0061b2d6]        ; 0045bc14 | g_MouseViewportCenterOffset
    FILD dword ptr [0x02cf6a90]         ; 0045bc1a | g_MouseY
    FSUBRP                              ; 0045bc20
    FCHS                                ; 0045bc22
    FILD dword ptr [0x00679398]         ; 0045bc24 | g_WindowHeight
    FMUL double ptr [0x0061b2d6]        ; 0045bc2a | g_MouseViewportCenterOffset
    FDIVP                               ; 0045bc30
    FSTP float ptr [EBP + -0xc]         ; 0045bc32
    FILD dword ptr [0x01626344]         ; 0045bc35 | g_ZoomLevel
    FMUL float ptr [EBP + -0x4]         ; 0045bc3b
    FMUL float ptr [0x0061b2de]         ; 0045bc3e | g_MouseWorldScaleFactor
    FMUL float ptr [EBP + -0x8]         ; 0045bc44
    FSTP float ptr [EBP + -0x4]         ; 0045bc47
    FILD dword ptr [0x01626344]         ; 0045bc4a | g_ZoomLevel
    FMUL float ptr [EBP + -0xc]         ; 0045bc50
    FMUL float ptr [0x0061b2de]         ; 0045bc53 | g_MouseWorldScaleFactor
    FSTP float ptr [EBP + -0xc]         ; 0045bc59
    TEST byte ptr [0x02cf6a94],0x1      ; 0045bc5c | g_MouseButtonFlags
    JZ 0x0045bc6e                       ; 0045bc63
        ;   XREF to: 0045bc6e (CONDITIONAL_JUMP)  ; LAB_0045bc6e
    CMP dword ptr [0x02cf6a8c],0x7      ; 0045bc65 | g_MouseX
    JL 0x0045bc70                       ; 0045bc6c
        ;   XREF to: 0045bc70 (CONDITIONAL_JUMP)  ; LAB_0045bc70
    JMP 0x0045bc82                      ; 0045bc6e
        ;   XREF to: 0045bc82 (UNCONDITIONAL_JUMP)  ; LAB_0045bc82
        ;   Label: LAB_0045bc6e
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045bc70
        ;   Label: LAB_0045bc70
    MOV [0x01626360],EAX                ; 0045bc73 | g_StoredWorldYCoordinate
    MOV EAX,[0x02cf6a90]                ; 0045bc78 | g_MouseY
    MOV [0x0066eda4],EAX                ; 0045bc7d | g_MouseReferenceY
    MOV EAX,[0x01626360]                ; 0045bc82 | g_StoredWorldYCoordinate
        ;   Label: LAB_0045bc82
    MOV dword ptr [EBP + -0x10],EAX     ; 0045bc87
    MOV dword ptr [0x02d02570],0x1f     ; 0045bc8a | g_ActiveRenderColor
    PUSH dword ptr [0x0066eda4]         ; 0045bc94 | g_MouseReferenceY
    PUSH 0x6                            ; 0045bc9a
    PUSH dword ptr [0x0066eda4]         ; 0045bc9c | g_MouseReferenceY
    PUSH 0x0                            ; 0045bca2
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 0045bca4
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0045bca9
    FLD float ptr [EBP + -0x10]         ; 0045bcac
    SUB ESP,0x8                         ; 0045bcaf
    FSTP double ptr [ESP]               ; 0045bcb2
    FLD float ptr [EBP + -0xc]          ; 0045bcb5
    SUB ESP,0x8                         ; 0045bcb8
    FSTP double ptr [ESP]               ; 0045bcbb
    FLD float ptr [EBP + -0x4]          ; 0045bcbe
    SUB ESP,0x8                         ; 0045bcc1
    FSTP double ptr [ESP]               ; 0045bcc4
    MOV EAX,0x61b2e2                    ; 0045bcc7 | = "%f,%f,%f"
    PUSH EAX                            ; 0045bccc | = "%f,%f,%f"
    LEA EAX,[EBP + -0x60]               ; 0045bccd
    PUSH EAX                            ; 0045bcd0
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045bcd1
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x20                        ; 0045bcd6
    MOV EAX,[0x00679398]                ; 0045bcd9 | g_WindowHeight
    SUB EAX,0xb                         ; 0045bcde
    PUSH EAX                            ; 0045bce1
    MOV EAX,[0x00679394]                ; 0045bce2 | g_WindowWidth
    MOV EDX,dword ptr [0x00679394]      ; 0045bce7 | g_WindowWidth
    SAR EDX,0x1f                        ; 0045bced
    SUB EAX,EDX                         ; 0045bcf0
    SAR EAX,0x1                         ; 0045bcf2
    ADD EAX,0x2                         ; 0045bcf4
    PUSH EAX                            ; 0045bcf7
    LEA EAX,[EBP + -0x60]               ; 0045bcf8
    PUSH EAX                            ; 0045bcfb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045bcfc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045bd01
    MOV ESP,EBP                         ; 0045bd04
    POP EBP                             ; 0045bd06
    POP EDI                             ; 0045bd07
    POP ESI                             ; 0045bd08
    POP EBX                             ; 0045bd09
    RET                                 ; 0045bd0a

