; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0(void)
;
;
; XREF[5]:
;   core_setedit.cpp_CDemonSet_FUN_0057ae50 at 0057b1ea
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057ea4c
;   core_setedit.cpp_CDemonSet_FUN_00580730 at 00580adb
;   core_setedit.cpp_CDemonSet_showLightEditor_FUN_0057c5d0 at 0057c992
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045ca7b
;
; Referenced Globals:
;   int g_BrightnessDirection = 0x8
;   int g_MouseX
;   int g_MouseY
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;   int g_CrosshairBrightness
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2fd0
        ;   Label: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
    PUSH ESI                            ; 005f2fd1
    PUSH EDI                            ; 005f2fd2
    PUSH EBP                            ; 005f2fd3
    MOV EAX,[0x00684998]                ; 005f2fd4 | g_BrightnessDirection
    MOV EDX,dword ptr [0x03f96c28]      ; 005f2fd9 | g_CrosshairBrightness
    ADD EDX,EAX                         ; 005f2fdf
    MOV ESI,dword ptr [0x02cf6a8c]      ; 005f2fe1 | g_MouseX
    MOV dword ptr [0x03f96c28],EDX      ; 005f2fe7 | g_CrosshairBrightness
    CMP EDX,0xff                        ; 005f2fed
    JG 0x005f303f                       ; 005f2ff3
        ;   XREF to: 005f303f (CONDITIONAL_JUMP)  ; LAB_005f303f
    TEST EDX,EDX                        ; 005f2ff5
    JL 0x005f3056                       ; 005f2ff7
        ;   XREF to: 005f3056 (CONDITIONAL_JUMP)  ; LAB_005f3056
    MOV ECX,0x1                         ; 005f2ff9
        ;   Label: LAB_005f2ff9
    MOV EBX,0xfffffffb                  ; 005f2ffe
    MOV dword ptr [0x02d02570],ECX      ; 005f3003 | g_ActiveRenderColor
    MOV EAX,[0x02cf6a90]                ; 005f3009 | g_MouseY
        ;   Label: LAB_005f3009
    MOV EDI,dword ptr [0x02d02558]      ; 005f300e | g_ClipLeft
    ADD EAX,EBX                         ; 005f3014
    CMP ESI,EDI                         ; 005f3016
    JG 0x005f306b                       ; 005f3018
        ;   XREF to: 005f306b (CONDITIONAL_JUMP)  ; LAB_005f306b
    INC EBX                             ; 005f301a
        ;   Label: LAB_005f301a
    CMP EBX,0x5                         ; 005f301b
    JLE 0x005f3009                      ; 005f301e
        ;   XREF to: 005f3009 (CONDITIONAL_JUMP)  ; LAB_005f3009
    LEA EBX,[ESI + -0x5]                ; 005f3020
    ADD ESI,0x6                         ; 005f3023
    MOV EDI,dword ptr [0x02d02558]      ; 005f3026 | g_ClipLeft
        ;   Label: LAB_005f3026
    MOV EAX,[0x02cf6a90]                ; 005f302c | g_MouseY
    CMP EBX,EDI                         ; 005f3031
    JG 0x005f308f                       ; 005f3033
        ;   XREF to: 005f308f (CONDITIONAL_JUMP)  ; LAB_005f308f
    INC EBX                             ; 005f3035
        ;   Label: LAB_005f3035
    CMP EBX,ESI                         ; 005f3036
    JNZ 0x005f3026                      ; 005f3038
        ;   XREF to: 005f3026 (CONDITIONAL_JUMP)  ; LAB_005f3026
    POP EBP                             ; 005f303a
    POP EDI                             ; 005f303b
    POP ESI                             ; 005f303c
    POP EBX                             ; 005f303d
    RET                                 ; 005f303e
    MOV EDX,0xfffffff8                  ; 005f303f
        ;   Label: LAB_005f303f
    MOV EAX,0xff                        ; 005f3044
    MOV dword ptr [0x00684998],EDX      ; 005f3049 | g_BrightnessDirection
    MOV [0x03f96c28],EAX                ; 005f304f | g_CrosshairBrightness
    JMP 0x005f2ff9                      ; 005f3054
        ;   XREF to: 005f2ff9 (UNCONDITIONAL_JUMP)  ; LAB_005f2ff9
    MOV EBP,0x8                         ; 005f3056
        ;   Label: LAB_005f3056
    XOR EDI,EDI                         ; 005f305b
    MOV dword ptr [0x00684998],EBP      ; 005f305d | g_BrightnessDirection
    MOV dword ptr [0x03f96c28],EDI      ; 005f3063 | g_CrosshairBrightness
    JMP 0x005f2ff9                      ; 005f3069
        ;   XREF to: 005f2ff9 (UNCONDITIONAL_JUMP)  ; LAB_005f2ff9
    CMP EAX,dword ptr [0x02d0255c]      ; 005f306b | g_ClipTop
        ;   Label: LAB_005f306b
    JLE 0x005f301a                      ; 005f3071
        ;   XREF to: 005f301a (CONDITIONAL_JUMP)  ; LAB_005f301a
    CMP ESI,dword ptr [0x02d02560]      ; 005f3073 | g_ClipRight
    JGE 0x005f301a                      ; 005f3079
        ;   XREF to: 005f301a (CONDITIONAL_JUMP)  ; LAB_005f301a
    CMP EAX,dword ptr [0x02d02564]      ; 005f307b | g_ClipBottom
    JGE 0x005f301a                      ; 005f3081
        ;   XREF to: 005f301a (CONDITIONAL_JUMP)  ; LAB_005f301a
    PUSH EAX                            ; 005f3083
    PUSH ESI                            ; 005f3084
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 005f3085
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 005f308a
    JMP 0x005f301a                      ; 005f308d
        ;   XREF to: 005f301a (UNCONDITIONAL_JUMP)  ; LAB_005f301a
    CMP EAX,dword ptr [0x02d0255c]      ; 005f308f | g_ClipTop
        ;   Label: LAB_005f308f
    JLE 0x005f3035                      ; 005f3095
        ;   XREF to: 005f3035 (CONDITIONAL_JUMP)  ; LAB_005f3035
    CMP EBX,dword ptr [0x02d02560]      ; 005f3097 | g_ClipRight
    JGE 0x005f3035                      ; 005f309d
        ;   XREF to: 005f3035 (CONDITIONAL_JUMP)  ; LAB_005f3035
    CMP EAX,dword ptr [0x02d02564]      ; 005f309f | g_ClipBottom
    JGE 0x005f3035                      ; 005f30a5
        ;   XREF to: 005f3035 (CONDITIONAL_JUMP)  ; LAB_005f3035
    PUSH EAX                            ; 005f30a7
    PUSH EBX                            ; 005f30a8
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 005f30a9
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 005f30ae
    INC EBX                             ; 005f30b1
    CMP EBX,ESI                         ; 005f30b2
    JNZ 0x005f3026                      ; 005f30b4
        ;   XREF to: 005f3026 (CONDITIONAL_JUMP)  ; LAB_005f3026
    POP EBP                             ; 005f30ba
    POP EDI                             ; 005f30bb
    POP ESI                             ; 005f30bc
    POP EBX                             ; 005f30bd
    RET                                 ; 005f30be

