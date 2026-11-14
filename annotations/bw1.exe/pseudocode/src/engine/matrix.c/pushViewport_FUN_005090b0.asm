; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pushViewport_FUN_005090b0(int x,int y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00483c10 at 00483c26
;   shape_edittool.cpp_FUN_00496ee0 at 00497415
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005e77c6
;   TerminatedCString s_Too_many_3D_windows_005e77d9
;   undefined4 DAT_0061b4c4
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c51d38
;   undefined4 DAT_01c51d3c
;   undefined4 DAT_01c51d40
;   undefined4 DAT_01c51d44
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_2d.c_setupViewportAndClipping_FUN_00401810
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005090b0
        ;   Label: engine_matrix.c_pushViewport_FUN_005090b0
    MOV EAX,[0x01d1dfd0]                ; 005090b1 | DAT_01d1dfd0
    MOV EDX,dword ptr [0x01c51d38]      ; 005090b6 | DAT_01c51d38
    MOV dword ptr [EAX*0x4 + 0x1d1e09c],EDX ; 005090bc
    MOV EDX,dword ptr [0x01c51d3c]      ; 005090c3 | DAT_01c51d3c
    MOV dword ptr [EAX*0x4 + 0x1d1e0c4],EDX ; 005090c9
    MOV EDX,dword ptr [0x01c51d40]      ; 005090d0 | DAT_01c51d40
    MOV dword ptr [EAX*0x4 + 0x1d1e0ec],EDX ; 005090d6
    MOV EDX,dword ptr [0x01c51d44]      ; 005090dd | DAT_01c51d44
    MOV dword ptr [EAX*0x4 + 0x1d1e114],EDX ; 005090e3
    MOV EDX,dword ptr [0x01c51d48]      ; 005090ea | DAT_01c51d48
    MOV dword ptr [EAX*0x4 + 0x1d1e13c],EDX ; 005090f0
    MOV EDX,dword ptr [0x01c51d4c]      ; 005090f7 | DAT_01c51d4c
    MOV dword ptr [EAX*0x4 + 0x1d1e164],EDX ; 005090fd
    MOV EDX,dword ptr [0x01c51d50]      ; 00509104 | DAT_01c51d50
    MOV dword ptr [EAX*0x4 + 0x1d1e18c],EDX ; 0050910a
    MOV EDX,dword ptr [0x01c51d54]      ; 00509111 | DAT_01c51d54
    MOV dword ptr [EAX*0x4 + 0x1d1e1b4],EDX ; 00509117
    MOV EDX,dword ptr [0x01c51d58]      ; 0050911e | DAT_01c51d58
    MOV dword ptr [EAX*0x4 + 0x1d1e1dc],EDX ; 00509124
    MOV EDX,dword ptr [0x01c4eff8]      ; 0050912b | DAT_01c4eff8
    MOV dword ptr [EAX*0x4 + 0x1d1dfd4],EDX ; 00509131
    MOV EDX,dword ptr [0x01c4effc]      ; 00509138 | DAT_01c4effc
    MOV dword ptr [EAX*0x4 + 0x1d1dffc],EDX ; 0050913e
    MOV EDX,dword ptr [0x01c4f000]      ; 00509145 | DAT_01c4f000
    MOV dword ptr [EAX*0x4 + 0x1d1e024],EDX ; 0050914b
    MOV EDX,dword ptr [0x01c4f004]      ; 00509152 | DAT_01c4f004
    MOV dword ptr [EAX*0x4 + 0x1d1e04c],EDX ; 00509158
    MOV EDX,dword ptr [0x0061b4c4]      ; 0050915f | DAT_0061b4c4
    MOV dword ptr [EAX*0x4 + 0x1d1e074],EDX ; 00509165
    MOV EDX,dword ptr [0x01c4f008]      ; 0050916c | DAT_01c4f008
    MOV dword ptr [EAX*0x4 + 0x1d1e204],EDX ; 00509172
    MOV EDX,dword ptr [0x01c4f010]      ; 00509179 | DAT_01c4f010
    MOV dword ptr [EAX*0x4 + 0x1d1e22c],EDX ; 0050917f
    MOV EDX,dword ptr [0x01c4f00c]      ; 00509186 | DAT_01c4f00c
    MOV dword ptr [EAX*0x4 + 0x1d1e254],EDX ; 0050918c
    MOV EDX,dword ptr [0x01c4f014]      ; 00509193 | DAT_01c4f014
    MOV dword ptr [EAX*0x4 + 0x1d1e27c],EDX ; 00509199
    LEA EDX,[EAX + 0x1]                 ; 005091a0
    MOV dword ptr [0x01d1dfd0],EDX      ; 005091a3 | DAT_01d1dfd0
    CMP EDX,0xa                         ; 005091a9
    JGE 0x005091e1                      ; 005091ac
        ;   XREF to: 005091e1 (CONDITIONAL_JUMP)  ; LAB_005091e1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005091ae
        ;   Label: LAB_005091ae
    ADD EAX,dword ptr [ESP + 0x14]      ; 005091b2
    MOV EBP,dword ptr [ESP + 0x10]      ; 005091b6
    PUSH EAX                            ; 005091ba
    MOV EAX,dword ptr [ESP + 0xc]       ; 005091bb
    ADD EAX,EBP                         ; 005091bf
    PUSH EAX                            ; 005091c1
    MOV EAX,dword ptr [ESP + 0x14]      ; 005091c2
    PUSH EAX                            ; 005091c6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005091c7
    PUSH EDX                            ; 005091cb
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401810 ; 005091cc
        ;   XREF to: 00401810 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401810(int left, int top, int right, int bottom)
    MOV ECX,0x10000                     ; 005091d1
    ADD ESP,0x10                        ; 005091d6
    MOV dword ptr [0x0061b4c4],ECX      ; 005091d9 | DAT_0061b4c4
    POP EBP                             ; 005091df
    RET                                 ; 005091e0
    PUSH ESI                            ; 005091e1
        ;   Label: LAB_005091e1
    PUSH EBX                            ; 005091e2
    MOV EBX,0x5e77c6                    ; 005091e3 | = "..\\engine\\matrix.c"
    MOV ESI,0x540                       ; 005091e8
    PUSH 0x5e77d9                       ; 005091ed | = "Too many 3D windows"
    MOV dword ptr [0x01d1d400],EBX      ; 005091f2 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005091f8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005091fe
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00509203
    POP EBX                             ; 00509206
    POP ESI                             ; 00509207
    JMP 0x005091ae                      ; 00509208
        ;   XREF to: 005091ae (UNCONDITIONAL_JUMP)  ; LAB_005091ae

