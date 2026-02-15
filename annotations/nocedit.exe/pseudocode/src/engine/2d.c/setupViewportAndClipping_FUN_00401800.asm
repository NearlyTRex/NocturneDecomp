; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401800(int left,int top,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
;
; XREF[6]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053971c
;   core_setedit.cpp_CDemonSet_FUN_0057d660 at 0057dbcf
;   engine_matrix.c_pushViewport_FUN_0050e320 at 0050e43c
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f2ae
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_004a0970 at 004a0d66
;   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 at 005ed246
;
; Referenced Globals:
;   int g_ViewportCenterXFixed
;   int g_ViewportCenterYFixed
;   int g_ViewportRightFixed
;   int g_ViewportBottomFixed
;   int g_ClipLeft
;   int g_ClipTop
;   int g_ClipRight
;   int g_ClipBottom
;   int g_ViewportWidth
;   int g_ViewportHeight
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401800
        ;   Label: engine_2d.c_setupViewportAndClipping_FUN_00401800
    PUSH ESI                            ; 00401801
    PUSH EDI                            ; 00401802
    MOV EDI,dword ptr [ESP + 0x10]      ; 00401803
    MOV EBX,dword ptr [ESP + 0x18]      ; 00401807
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0040180b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040180f
    MOV dword ptr [0x02d02560],EBX      ; 00401813 | g_ClipRight
    MOV dword ptr [0x02d02564],ECX      ; 00401819 | g_ClipBottom
    SUB EBX,EDI                         ; 0040181f
    MOV [0x02d0255c],EAX                ; 00401821 | g_ClipTop
    INC EBX                             ; 00401826
    SUB ECX,EAX                         ; 00401827
    MOV EDX,EBX                         ; 00401829
    MOV EAX,EBX                         ; 0040182b
    SAR EDX,0x1f                        ; 0040182d
    SUB EAX,EDX                         ; 00401830
    SAR EAX,0x1                         ; 00401832
    INC ECX                             ; 00401834
    AND EAX,0xffff                      ; 00401835
    MOV EDX,ECX                         ; 0040183a
    LEA ESI,[EAX + -0x1]                ; 0040183c
    SAR EDX,0x1f                        ; 0040183f
    MOV EAX,ECX                         ; 00401842
    SUB EAX,EDX                         ; 00401844
    SAR EAX,0x1                         ; 00401846
    MOV dword ptr [0x02d02558],EDI      ; 00401848 | g_ClipLeft
    MOV dword ptr [0x02d02568],EBX      ; 0040184e | g_ViewportWidth
    MOV dword ptr [0x02d0256c],ECX      ; 00401854 | g_ViewportHeight
    AND EAX,0xffff                      ; 0040185a
    MOV EDX,ESI                         ; 0040185f
    ADD ESI,EDI                         ; 00401861
    DEC EAX                             ; 00401863
    INC ESI                             ; 00401864
    SHL EDX,0x10                        ; 00401865
    SHL ESI,0x10                        ; 00401868
    MOV dword ptr [0x02d02548],EDX      ; 0040186b | g_ViewportCenterXFixed
    MOV dword ptr [0x02d02550],ESI      ; 00401871 | g_ViewportRightFixed
    MOV ESI,dword ptr [ESP + 0x14]      ; 00401877
    MOV EDX,EAX                         ; 0040187b
    ADD EAX,ESI                         ; 0040187d
    NEG EDX                             ; 0040187f
    INC EAX                             ; 00401881
    SHL EDX,0x10                        ; 00401882
    SHL EAX,0x10                        ; 00401885
    MOV dword ptr [0x02d0254c],EDX      ; 00401888 | g_ViewportCenterYFixed
    MOV [0x02d02554],EAX                ; 0040188e | g_ViewportBottomFixed
    POP EDI                             ; 00401893
    POP ESI                             ; 00401894
    POP EBX                             ; 00401895
    RET                                 ; 00401896

