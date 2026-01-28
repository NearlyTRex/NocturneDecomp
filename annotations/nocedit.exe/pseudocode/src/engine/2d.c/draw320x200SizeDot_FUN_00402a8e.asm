; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_2d_c_draw320x200SizeDot_FUN_00402a8e(int x_3d,int y_3d,int z_depth)
;
; Parameters:
; int              Stack[0x4]:4   x_3d
; int              Stack[0x8]:4   y_3d
; int              Stack[0xc]:4   z_depth
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_00613164
;   TerminatedCString s_draw320x200SizeDot_unkno_00613173
;   int g_WindowHeight = 0xc8
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_2d.c_plotPixel_FUN_00401140
;   engine_2d.c_project3DPointToScreen_FUN_00401770
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00402a8e
        ;   Label: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
    PUSH EBX                            ; 00402a90
    PUSH ESI                            ; 00402a91
    PUSH EDI                            ; 00402a92
    PUSH EBP                            ; 00402a93
    MOV EAX,dword ptr [ESP + 0x14]      ; 00402a94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00402a98
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00402a9c
    TEST ECX,ECX                        ; 00402aa0
    JLE 0x00402ae1                      ; 00402aa2
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP EAX,ECX                         ; 00402aa4
    JG 0x00402ae1                       ; 00402aa6
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    MOV EDX,ECX                         ; 00402aa8
    NEG EDX                             ; 00402aaa
    CMP EAX,EDX                         ; 00402aac
    JL 0x00402ae1                       ; 00402aae
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP ESI,ECX                         ; 00402ab0
    JG 0x00402ae1                       ; 00402ab2
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP ESI,EDX                         ; 00402ab4
    JL 0x00402ae1                       ; 00402ab6
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    MOV EDI,dword ptr [0x00679398]      ; 00402ab8 | g_WindowHeight
    CMP EDI,0x190                       ; 00402abe
    JNC 0x00402bd4                      ; 00402ac4
        ;   XREF to: 00402bd4 (CONDITIONAL_JUMP)  ; LAB_00402bd4
    CMP EDI,0xc8                        ; 00402aca
    JNZ 0x00402be6                      ; 00402ad0
        ;   XREF to: 00402be6 (CONDITIONAL_JUMP)  ; LAB_00402be6
    PUSH ECX                            ; 00402ad6
    PUSH ESI                            ; 00402ad7
    PUSH EAX                            ; 00402ad8
    CALL engine_2d.c_project3DPointToScreen_FUN_00401770 ; 00402ad9
        ;   XREF to: 00401770 (UNCONDITIONAL_CALL)  ; void engine_2d.c_project3DPointToScreen_FUN_00401770(int x_3d, int y_3d, int z_depth)
    ADD ESP,0xc                         ; 00402ade
    POP EBP                             ; 00402ae1
        ;   Label: LAB_00402ae1
    POP EDI                             ; 00402ae2
    POP ESI                             ; 00402ae3
    POP EBX                             ; 00402ae4
    RET                                 ; 00402ae5
    MOV EDX,dword ptr [0x02d02548]      ; 00402ae6 | g_ViewportCenterXFixed
        ;   Label: LAB_00402ae6
    MOV EBX,ECX                         ; 00402aec
    IMUL EDX                            ; 00402aee
    IDIV EBX                            ; 00402af0
    MOV EBX,dword ptr [0x02d02550]      ; 00402af2 | g_ViewportRightFixed
    MOV EDX,dword ptr [0x02d0254c]      ; 00402af8 | g_ViewportCenterYFixed
    LEA EDI,[EAX + EBX*0x1]             ; 00402afe
    MOV EBX,ECX                         ; 00402b01
    MOV EAX,ESI                         ; 00402b03
    IMUL EDX                            ; 00402b05
    IDIV EBX                            ; 00402b07
    MOV ESI,dword ptr [0x02d02554]      ; 00402b09 | g_ViewportBottomFixed
    ADD ESI,EAX                         ; 00402b0f
    SAR EDI,0x10                        ; 00402b11
    SAR ESI,0x10                        ; 00402b14
    TEST EDI,EDI                        ; 00402b17
    JL 0x00402ae1                       ; 00402b19
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP EDI,0x13f                       ; 00402b1b
    JG 0x00402ae1                       ; 00402b21
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    TEST ESI,ESI                        ; 00402b23
    JL 0x00402ae1                       ; 00402b25
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP ESI,0x18e                       ; 00402b27
    JG 0x00402ae1                       ; 00402b2d
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    PUSH ESI                            ; 00402b2f
    PUSH EDI                            ; 00402b30
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402b31
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402b36
    INC ESI                             ; 00402b39
    PUSH ESI                            ; 00402b3a
    PUSH EDI                            ; 00402b3b
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402b3c
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402b41
    POP EBP                             ; 00402b44
    POP EDI                             ; 00402b45
    POP ESI                             ; 00402b46
    POP EBX                             ; 00402b47
    RET                                 ; 00402b48
    MOV EDX,dword ptr [0x02d02548]      ; 00402b49 | g_ViewportCenterXFixed
        ;   Label: LAB_00402b49
    MOV EBX,ECX                         ; 00402b4f
    IMUL EDX                            ; 00402b51
    IDIV EBX                            ; 00402b53
    MOV EDX,dword ptr [0x02d02550]      ; 00402b55 | g_ViewportRightFixed
    MOV EBX,ECX                         ; 00402b5b
    LEA EDI,[EAX + EDX*0x1]             ; 00402b5d
    MOV EDX,dword ptr [0x02d0254c]      ; 00402b60 | g_ViewportCenterYFixed
    MOV EAX,ESI                         ; 00402b66
    IMUL EDX                            ; 00402b68
    IDIV EBX                            ; 00402b6a
    MOV ECX,dword ptr [0x02d02554]      ; 00402b6c | g_ViewportBottomFixed
    LEA ESI,[EAX + ECX*0x1]             ; 00402b72
    SAR EDI,0x10                        ; 00402b75
    SAR ESI,0x10                        ; 00402b78
    TEST EDI,EDI                        ; 00402b7b
    JL 0x00402ae1                       ; 00402b7d
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP EDI,0x27e                       ; 00402b83
    JG 0x00402ae1                       ; 00402b89
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    TEST ESI,ESI                        ; 00402b8f
    JL 0x00402ae1                       ; 00402b91
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    CMP ESI,0x1de                       ; 00402b97
    JG 0x00402ae1                       ; 00402b9d
        ;   XREF to: 00402ae1 (CONDITIONAL_JUMP)  ; LAB_00402ae1
    PUSH ESI                            ; 00402ba3
    PUSH EDI                            ; 00402ba4
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402ba5
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402baa
    PUSH ESI                            ; 00402bad
    LEA EBX,[EDI + 0x1]                 ; 00402bae
    PUSH EBX                            ; 00402bb1
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402bb2
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402bb7
    INC ESI                             ; 00402bba
    PUSH ESI                            ; 00402bbb
    PUSH EBX                            ; 00402bbc
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402bbd
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402bc2
    PUSH ESI                            ; 00402bc5
    PUSH EDI                            ; 00402bc6
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00402bc7
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00402bcc
    POP EBP                             ; 00402bcf
    POP EDI                             ; 00402bd0
    POP ESI                             ; 00402bd1
    POP EBX                             ; 00402bd2
    RET                                 ; 00402bd3
    JBE 0x00402ae6                      ; 00402bd4
        ;   XREF to: 00402ae6 (CONDITIONAL_JUMP)  ; LAB_00402ae6
        ;   Label: LAB_00402bd4
    CMP EDI,0x1e0                       ; 00402bda
    JZ 0x00402b49                       ; 00402be0
        ;   XREF to: 00402b49 (CONDITIONAL_JUMP)  ; LAB_00402b49
    MOV EDI,0x613164                    ; 00402be6 | = "..\\engine\\2d.c"
        ;   Label: LAB_00402be6
    MOV EBP,0x7df                       ; 00402beb
    PUSH 0x613173                       ; 00402bf0 | = "draw320x200SizeDot: unknown graphics ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 00402bf5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00402bfb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00402c01
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00402c06
    POP EBP                             ; 00402c09
    POP EDI                             ; 00402c0a
    POP ESI                             ; 00402c0b
    POP EBX                             ; 00402c0c
    RET                                 ; 00402c0d

