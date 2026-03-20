; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawHLine_FUN_00402ee0(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; XREF[11]:
;   core_msnedit.cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0 at 0053c69f
;   core_netgame.cpp_CNetGame_runLobby_FUN_00541390 at 0054150e
;   core_script.cpp_CScript_drawEditor_FUN_005645d0 at 005647c4
;   engine_2d.c_drawRect_FUN_00403120 at 00403142
;   engine_2d.c_fillRectColor_FUN_00403170 at 004031d4
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a6810
;   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 at 004a1315
;   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 at 004a1204
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 at 004a06a2
;   shape_edittool.cpp_draw3DBorder_FUN_004a58f0 at 004a5951
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_006131d7
;   TerminatedCString s_hLine_invalid_bitsPerPix_006131e6
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   ushort[256] g_ColorTable16
;   uint[448] g_ColorTable32
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ActiveRenderColor
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402ee0
        ;   Label: engine_2d.c_drawHLine_FUN_00402ee0
    PUSH EDI                            ; 00402ee1
    PUSH EBP                            ; 00402ee2
    MOV EDX,dword ptr [ESP + 0x10]      ; 00402ee3
    MOV ECX,dword ptr [ESP + 0x14]      ; 00402ee7
    MOV EAX,dword ptr [ESP + 0x18]      ; 00402eeb
    CMP ECX,dword ptr [0x02d0255c]      ; 00402eef | g_ClipTop
    JL 0x00402f60                       ; 00402ef5
        ;   XREF to: 00402f60 (CONDITIONAL_JUMP)  ; LAB_00402f60
    CMP ECX,dword ptr [0x02d02564]      ; 00402ef7 | g_ClipBottom
    JG 0x00402f60                       ; 00402efd
        ;   XREF to: 00402f60 (CONDITIONAL_JUMP)  ; LAB_00402f60
    MOV EDI,dword ptr [0x02d02558]      ; 00402eff | g_ClipLeft
    CMP EDX,EDI                         ; 00402f05
    JGE 0x00402f0b                      ; 00402f07
        ;   XREF to: 00402f0b (CONDITIONAL_JUMP)  ; LAB_00402f0b
    MOV EDX,EDI                         ; 00402f09
    MOV EBP,dword ptr [0x02d02560]      ; 00402f0b | g_ClipRight
        ;   Label: LAB_00402f0b
    CMP EAX,EBP                         ; 00402f11
    JLE 0x00402f17                      ; 00402f13
        ;   XREF to: 00402f17 (CONDITIONAL_JUMP)  ; LAB_00402f17
    MOV EAX,EBP                         ; 00402f15
    SUB EAX,EDX                         ; 00402f17
        ;   Label: LAB_00402f17
    INC EAX                             ; 00402f19
    CMP EAX,0x1                         ; 00402f1a
    JL 0x00402f60                       ; 00402f1d
        ;   XREF to: 00402f60 (CONDITIONAL_JUMP)  ; LAB_00402f60
    MOV EBX,dword ptr [0x0067939c]      ; 00402f1f | g_BitsPerPixel
    SHL ECX,0x2                         ; 00402f25
    CMP EBX,0x10                        ; 00402f28
    JNC 0x00402fbb                      ; 00402f2b
        ;   XREF to: 00402fbb (CONDITIONAL_JUMP)  ; LAB_00402fbb
    CMP EBX,0x8                         ; 00402f31
    JNZ 0x00402fc2                      ; 00402f34
        ;   XREF to: 00402fc2 (CONDITIONAL_JUMP)  ; LAB_00402fc2
    PUSH EAX                            ; 00402f3a
    MOV EBX,dword ptr [0x02d02570]      ; 00402f3b | g_ActiveRenderColor
    MOV EAX,dword ptr [ECX + 0x2cf6a9c] ; 00402f41 | g_ScreenBufferArray
    PUSH EBX                            ; 00402f47
    ADD EDX,EAX                         ; 00402f48
    PUSH EDX                            ; 00402f4a
    CALL crt_memory.c_memset_FUN_005fde40 ; 00402f4b
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00402f50
    LEA EAX,[EAX]                       ; 00402f53
    LEA EDX,[EDX]                       ; 00402f59
    NOP                                 ; 00402f5f
    POP EBP                             ; 00402f60
        ;   Label: LAB_00402f60
    POP EDI                             ; 00402f61
    POP EBX                             ; 00402f62
    RET                                 ; 00402f63
    MOV EBX,dword ptr [0x02d02570]      ; 00402f64 | g_ActiveRenderColor
        ;   Label: LAB_00402f64
    MOV ECX,dword ptr [ECX + 0x2cf6a9c] ; 00402f6a | g_ScreenBufferArray
    ADD EDX,EDX                         ; 00402f70
    MOV BX,word ptr [EBX*0x2 + 0x2d01020] ; 00402f72 | g_ColorTable16
    ADD EDX,ECX                         ; 00402f7a
    TEST EAX,EAX                        ; 00402f7c
    JLE 0x00402f60                      ; 00402f7e
        ;   XREF to: 00402f60 (CONDITIONAL_JUMP)  ; LAB_00402f60
    ADD EDX,0x2                         ; 00402f80
        ;   Label: LAB_00402f80
    DEC EAX                             ; 00402f83
    MOV word ptr [EDX + -0x2],BX        ; 00402f84
    TEST EAX,EAX                        ; 00402f88
    JG 0x00402f80                       ; 00402f8a
        ;   XREF to: 00402f80 (CONDITIONAL_JUMP)  ; LAB_00402f80
    POP EBP                             ; 00402f8c
    POP EDI                             ; 00402f8d
    POP EBX                             ; 00402f8e
    RET                                 ; 00402f8f
    MOV EBX,dword ptr [0x02d02570]      ; 00402f90 | g_ActiveRenderColor
        ;   Label: LAB_00402f90
    SHL EDX,0x2                         ; 00402f96
    MOV ECX,dword ptr [ECX + 0x2cf6a9c] ; 00402f99 | g_ScreenBufferArray
    MOV EBX,dword ptr [EBX*0x4 + 0x2d01220] ; 00402f9f | g_ColorTable32
    ADD EDX,ECX                         ; 00402fa6
    TEST EAX,EAX                        ; 00402fa8
    JLE 0x00402f60                      ; 00402faa
        ;   XREF to: 00402f60 (CONDITIONAL_JUMP)  ; LAB_00402f60
    ADD EDX,0x4                         ; 00402fac
        ;   Label: LAB_00402fac
    DEC EAX                             ; 00402faf
    MOV dword ptr [EDX + -0x4],EBX      ; 00402fb0
    TEST EAX,EAX                        ; 00402fb3
    JG 0x00402fac                       ; 00402fb5
        ;   XREF to: 00402fac (CONDITIONAL_JUMP)  ; LAB_00402fac
    POP EBP                             ; 00402fb7
    POP EDI                             ; 00402fb8
    POP EBX                             ; 00402fb9
    RET                                 ; 00402fba
    JBE 0x00402f64                      ; 00402fbb
        ;   XREF to: 00402f64 (CONDITIONAL_JUMP)  ; LAB_00402f64
        ;   Label: LAB_00402fbb
    CMP EBX,0x20                        ; 00402fbd
    JZ 0x00402f90                       ; 00402fc0
        ;   XREF to: 00402f90 (CONDITIONAL_JUMP)  ; LAB_00402f90
    MOV EAX,0x6131d7                    ; 00402fc2 | = "..\\engine\\2d.c"
        ;   Label: LAB_00402fc2
    MOV EDX,0x8a6                       ; 00402fc7
    PUSH 0x6131e6                       ; 00402fcc | = "hLine - invalid bitsPerPixel"
    MOV [0x02f0ca48],EAX                ; 00402fd1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00402fd6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00402fdc
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00402fe1
    POP EBP                             ; 00402fe4
    POP EDI                             ; 00402fe5
    POP EBX                             ; 00402fe6
    RET                                 ; 00402fe7

