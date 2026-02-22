; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_endScene_FUN_00472d30(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ab93
;   core_set.cpp_CDemonSet_renderFlashlightShadow_FUN_0056c990 at 0056cb94
;   core_set.cpp_CDemonSet_renderStaticLights_FUN_0056be80 at 0056c081
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b614
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061f005
;   TerminatedCString s_CDemonLight_endScene_Sce_0061f018
;   double g_ShadowDepthToDistanceScale = 0.00390625
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonRenderer g_CDemonRendererInstance
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
;   engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00472d30
        ;   Label: core_dlight.cpp_CDemonLight_endScene_FUN_00472d30
    PUSH ESI                            ; 00472d31
    PUSH EDI                            ; 00472d32
    PUSH EBP                            ; 00472d33
    MOV EBP,ESP                         ; 00472d34
    SUB ESP,0x4                         ; 00472d36
    AND ESP,0xfffffff8                  ; 00472d39
    MOV ESI,dword ptr [EBP + 0x14]      ; 00472d3c
    CMP dword ptr [ESI + 0x11e4],0x0    ; 00472d3f
    JZ 0x00472e0a                       ; 00472d46
        ;   XREF to: 00472e0a (CONDITIONAL_JUMP)  ; LAB_00472e0a
    CMP dword ptr [ESI + 0x168],0x0     ; 00472d4c
        ;   Label: LAB_00472d4c
    JNZ 0x00472d9a                      ; 00472d53
        ;   XREF to: 00472d9a (CONDITIONAL_JUMP)  ; LAB_00472d9a
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 00472d55
    IMUL EDX,dword ptr [ESI + 0x1cc4]   ; 00472d5b
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 00472d62
    XOR EBX,EBX                         ; 00472d68
    TEST EDX,EDX                        ; 00472d6a
    JLE 0x00472d88                      ; 00472d6c
        ;   XREF to: 00472d88 (CONDITIONAL_JUMP)  ; LAB_00472d88
    XOR EAX,EAX                         ; 00472d6e
        ;   Label: LAB_00472d6e
    MOV AX,word ptr [ECX]               ; 00472d70
    CMP EAX,0xffff                      ; 00472d73
    JGE 0x00472d80                      ; 00472d78
        ;   XREF to: 00472d80 (CONDITIONAL_JUMP)  ; LAB_00472d80
    CMP EAX,EBX                         ; 00472d7a
    JLE 0x00472d80                      ; 00472d7c
        ;   XREF to: 00472d80 (CONDITIONAL_JUMP)  ; LAB_00472d80
    MOV EBX,EAX                         ; 00472d7e
    DEC EDX                             ; 00472d80
        ;   Label: LAB_00472d80
    ADD ECX,0x2                         ; 00472d81
    TEST EDX,EDX                        ; 00472d84
    JG 0x00472d6e                       ; 00472d86
        ;   XREF to: 00472d6e (CONDITIONAL_JUMP)  ; LAB_00472d6e
    MOV dword ptr [ESP],EBX             ; 00472d88
        ;   Label: LAB_00472d88
    FILD dword ptr [ESP]                ; 00472d8b
    FMUL double ptr [0x0061f043]        ; 00472d8e | g_ShadowDepthToDistanceScale
    FSTP float ptr [ESI + 0x140]        ; 00472d94
    PUSH 0x0                            ; 00472d9a
        ;   Label: LAB_00472d9a
    MOV EDX,dword ptr [0x006703ec]      ; 00472d9c | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH EDX                            ; 00472da2 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0 ; 00472da3
        ;   XREF to: 0048cac0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00472da8
    MOV ECX,dword ptr [0x006703ec]      ; 00472dab | g_CDemonRendererInstance | g_CDemonRendererPtr2
    PUSH ECX                            ; 00472db1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480 ; 00472db2
        ;   XREF to: 0048c8c0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480()
    ADD ESP,0x4                         ; 00472db7
    MOV EBX,dword ptr [ESI + 0x1cc4]    ; 00472dba
    XOR EAX,EAX                         ; 00472dc0
    TEST EBX,EBX                        ; 00472dc2
    JLE 0x00472df0                      ; 00472dc4
        ;   XREF to: 00472df0 (CONDITIONAL_JUMP)  ; LAB_00472df0
    MOV EDX,ESI                         ; 00472dc6
    MOV ECX,dword ptr [EDX + 0x1cd4]    ; 00472dc8
        ;   Label: LAB_00472dc8
    MOV dword ptr [EAX*0x4 + 0x2cf6a9c],ECX ; 00472dce | g_ScreenBufferArray | g_ScreenBufferArray[1]
    INC EAX                             ; 00472dd5
    MOV EDI,dword ptr [ESI + 0x1cc4]    ; 00472dd6
    ADD EDX,0x4                         ; 00472ddc
    CMP EAX,EDI                         ; 00472ddf
    JL 0x00472dc8                       ; 00472de1
        ;   XREF to: 00472dc8 (CONDITIONAL_JUMP)  ; LAB_00472dc8
    LEA EAX,[EAX]                       ; 00472de3
    LEA EDX,[EDX]                       ; 00472de9
    NOP                                 ; 00472def
    PUSH ESI                            ; 00472df0
        ;   Label: LAB_00472df0
    CALL core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410 ; 00472df1
        ;   XREF to: 0044c410 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_resetSceneCamera_FUN_0044c410(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 00472df6
    MOV dword ptr [ESI + 0x11e4],0x0    ; 00472df9
    MOV ESP,EBP                         ; 00472e03
    POP EBP                             ; 00472e05
    POP EDI                             ; 00472e06
    POP ESI                             ; 00472e07
    POP EBX                             ; 00472e08
    RET                                 ; 00472e09
    MOV ECX,0x61f005                    ; 00472e0a | = "..\\core\\dlight.cpp"
        ;   Label: LAB_00472e0a
    MOV EBX,0x164                       ; 00472e0f
    PUSH 0x61f018                       ; 00472e14 | = "CDemonLight::endScene - Scene not open"
    MOV dword ptr [0x02f0ca48],ECX      ; 00472e19 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00472e1f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472e25
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00472e2a
    JMP 0x00472d4c                      ; 00472e2d
        ;   XREF to: 00472d4c (UNCONDITIONAL_JUMP)  ; LAB_00472d4c

