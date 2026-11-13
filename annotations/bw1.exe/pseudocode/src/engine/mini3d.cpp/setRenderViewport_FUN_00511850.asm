; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRenderViewport_FUN_00511850(float left,float top,float right,float bottom)
;
; Parameters:
; float            Stack[0x4]:4   left
; float            Stack[0x8]:4   top
; float            Stack[0xc]:4   right
; float            Stack[0x10]:4   bottom
;
; XREF[4]:
;   engine_mini3d.cpp_setRenderSurface_FUN_00514b70 at 00514bb4
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00496920 at 00496d10
;   shape_edittool.cpp_CEditorTools_popWindowState_FUN_00496df0 at 00496e3b
;   shape_edittool.cpp_FUN_00496ee0 at 00496fc6
;
; Referenced Globals:
;   undefined4 DAT_005e8b6f
;   undefined4 DAT_005e8b73
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d224cc
;   undefined4 DAT_01d224d0
;   undefined4 DAT_01d224d4
;   undefined4 DAT_01d224d8
;   undefined4 DAT_01d224dc
;   undefined4 DAT_01d224e0
;   undefined4 DAT_01d224e4
;   undefined4 DAT_01d224e8
;   undefined4 DAT_01d2253c
;   undefined4 DAT_01d22540
;   undefined4 DAT_01d22544
;   undefined4 DAT_01d24ffc
;   ... and 2 more
;
; Called Functions:
;   engine_mini3d.cpp_resetDynamicLight_FUN_00514120
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00511850
        ;   Label: engine_mini3d.cpp_setRenderViewport_FUN_00511850
    SUB ESP,0x8                         ; 00511851
    CMP dword ptr [0x01d25f14],0x0      ; 00511854 | DAT_01d25f14
    JZ 0x0051193a                       ; 0051185b
        ;   XREF to: 0051193a (CONDITIONAL_JUMP)  ; LAB_0051193a
    FLD float ptr [ESP + 0x1c]          ; 00511861
        ;   Label: LAB_00511861
    FLD float ptr [ESP + 0x18]          ; 00511865
    FSUB float ptr [ESP + 0x10]         ; 00511869
    FXCH                                ; 0051186d
    FSUB float ptr [ESP + 0x14]         ; 0051186f
    FXCH                                ; 00511873
    FLD float ptr [0x005e8b6f]          ; 00511875 | DAT_005e8b6f
    FXCH                                ; 0051187b
    FMUL ST1                            ; 0051187d
    FXCH ST2                            ; 0051187f
    FMULP                               ; 00511881
    FLD float ptr [ESP + 0x10]          ; 00511883
    MOV EAX,dword ptr [ESP + 0x10]      ; 00511887
    FLD float ptr [ESP + 0x14]          ; 0051188b
    MOV [0x01d224cc],EAX                ; 0051188f | DAT_01d224cc
    MOV EAX,dword ptr [ESP + 0x14]      ; 00511894
    MOV ECX,dword ptr [0x01d25f14]      ; 00511898 | DAT_01d25f14
    MOV [0x01d224d0],EAX                ; 0051189e | DAT_01d224d0
    FLD ST3                             ; 005118a3
    FLD ST3                             ; 005118a5
    MOV EAX,dword ptr [ESP + 0x18]      ; 005118a7
    FCHS                                ; 005118ab
    FLD1                                ; 005118ad
    FXCH ST4                            ; 005118af
    FADDP ST6,ST0                       ; 005118b1
    FXCH ST2                            ; 005118b3
    FADDP ST4,ST0                       ; 005118b5
    MOV [0x01d224d4],EAX                ; 005118b7 | DAT_01d224d4
    FXCH ST4                            ; 005118bc
    FSTP float ptr [0x01d224e4]         ; 005118be | DAT_01d224e4
    FXCH ST3                            ; 005118c4
    FADD float ptr [0x005e8b73]         ; 005118c6 | DAT_005e8b73
    FXCH ST2                            ; 005118cc
    FSTP float ptr [0x01d224e8]         ; 005118ce | DAT_01d224e8
    FXCH                                ; 005118d4
    FSTP float ptr [0x01d224dc]         ; 005118d6 | DAT_01d224dc
    FADDP                               ; 005118dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005118de
    FSTP float ptr [0x01d224e0]         ; 005118e2 | DAT_01d224e0
    MOV [0x01d224d8],EAX                ; 005118e8 | DAT_01d224d8
    TEST ECX,ECX                        ; 005118ed
    JNZ 0x00511925                      ; 005118ef
        ;   XREF to: 00511925 (CONDITIONAL_JUMP)  ; LAB_00511925
    CMP dword ptr [0x02c83444],0x0      ; 005118f1 | DAT_02c83444
    JZ 0x00511925                       ; 005118f8
        ;   XREF to: 00511925 (CONDITIONAL_JUMP)  ; LAB_00511925
    CMP dword ptr [0x01c50948],0x0      ; 005118fa | DAT_01c50948
    JZ 0x00511925                       ; 00511901
        ;   XREF to: 00511925 (CONDITIONAL_JUMP)  ; LAB_00511925
    PUSH dword ptr [0x01d22540]         ; 00511903 | DAT_01d22540
    PUSH dword ptr [0x01d2253c]         ; 00511909 | DAT_01d2253c
    PUSH EAX                            ; 0051190f
    PUSH dword ptr [ESP + 0x24]         ; 00511910
    PUSH dword ptr [ESP + 0x24]         ; 00511914
    PUSH dword ptr [ESP + 0x24]         ; 00511918
    CALL dword ptr [0x02c83444]         ; 0051191c | DAT_02c83444
    ADD ESP,0x18                        ; 00511922
    MOV EDI,0x1                         ; 00511925
        ;   Label: LAB_00511925
    CALL engine_mini3d.cpp_resetDynamicLight_FUN_00514120 ; 0051192a
        ;   XREF to: 00514120 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_resetDynamicLight_FUN_00514120()
    MOV dword ptr [0x01d24ffc],EDI      ; 0051192f | DAT_01d24ffc
    ADD ESP,0x8                         ; 00511935
    POP EDI                             ; 00511938
    RET                                 ; 00511939
    FLD float ptr [0x01d22544]          ; 0051193a | DAT_01d22544
        ;   Label: LAB_0051193a
    FLD float ptr [ESP + 0x10]          ; 00511940
    FMUL ST1                            ; 00511944
    FLD float ptr [ESP + 0x14]          ; 00511946
    FMUL ST2                            ; 0051194a
    FLD float ptr [ESP + 0x18]          ; 0051194c
    FMUL ST3                            ; 00511950
    FLD float ptr [ESP + 0x1c]          ; 00511952
    FMULP ST4                           ; 00511956
    FXCH                                ; 00511958
    FSTP float ptr [ESP + 0x14]         ; 0051195a
    FSTP float ptr [ESP + 0x18]         ; 0051195e
    FXCH                                ; 00511962
    FSTP float ptr [ESP + 0x1c]         ; 00511964
    FSTP float ptr [ESP + 0x10]         ; 00511968
    JMP 0x00511861                      ; 0051196c
        ;   XREF to: 00511861 (UNCONDITIONAL_JUMP)  ; LAB_00511861

