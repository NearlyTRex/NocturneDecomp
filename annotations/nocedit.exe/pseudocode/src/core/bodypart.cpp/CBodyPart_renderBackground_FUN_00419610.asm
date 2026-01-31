; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_CBodyPart_renderBackground_FUN_00419610(CBodyPart *this_ptr,int layer_flag)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
; Local Variables:
; undefined1       Stack[-0x20]:1  local_20
;
; Referenced Globals:
;   TerminatedCString s_s_going_into_background_00615cdf
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_ConsolePtr
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 DAT_0326ef00
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_bodypart.cpp_CBodyPart_FUN_00419340
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419610
        ;   Label: core_bodypart.cpp_CBodyPart_renderBackground_FUN_00419610
    PUSH EBP                            ; 00419611
    SUB ESP,0x18                        ; 00419612
    MOV EBX,dword ptr [ESP + 0x24]      ; 00419615
    CMP dword ptr [EBX + 0x158],0x0     ; 00419619
    JNZ 0x0041964c                      ; 00419620
        ;   XREF to: 0041964c (CONDITIONAL_JUMP)  ; LAB_0041964c
    CMP dword ptr [ESP + 0x28],0x0      ; 00419622
    JZ 0x0041963f                       ; 00419627
        ;   XREF to: 0041963f (CONDITIONAL_JUMP)  ; LAB_0041963f
    CMP dword ptr [EBX + 0xf28],0x0     ; 00419629
    JNZ 0x0041963f                      ; 00419630
        ;   XREF to: 0041963f (CONDITIONAL_JUMP)  ; LAB_0041963f
    CMP dword ptr [EBX + 0xf20],0x0     ; 00419632
    JZ 0x004196e6                       ; 00419639
        ;   XREF to: 004196e6 (CONDITIONAL_JUMP)  ; LAB_004196e6
    CMP dword ptr [EBX + 0x158],0x0     ; 0041963f
        ;   Label: LAB_0041963f
    JZ 0x004196e0                       ; 00419646
        ;   XREF to: 004196e0 (CONDITIONAL_JUMP)  ; LAB_004196e0
    CMP dword ptr [EBX + 0x158],0x1     ; 0041964c
        ;   Label: LAB_0041964c
    JNZ 0x00419662                      ; 00419653
        ;   XREF to: 00419662 (CONDITIONAL_JUMP)  ; LAB_00419662
    CMP dword ptr [EBX + 0xf20],0x0     ; 00419655
    JNZ 0x004196e0                      ; 0041965c
        ;   XREF to: 004196e0 (CONDITIONAL_JUMP)  ; LAB_004196e0
    PUSH ESI                            ; 00419662
        ;   Label: LAB_00419662
    PUSH EBX                            ; 00419663
    MOV dword ptr [EBX + 0x158],0x2     ; 00419664
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 0041966e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    MOV EAX,[0x006810c8]                ; 00419673 | g_CDemonSetPtr
    MOV EDX,dword ptr [EBX + 0xcb0]     ; 00419678
    ADD ESP,0x4                         ; 0041967e
    MOV dword ptr [EAX + 0x15ac88],EDX  ; 00419681 | DAT_0326ef00
    LEA EAX,[ESP + 0x4]                 ; 00419687
    PUSH EAX                            ; 0041968b
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041968c
    PUSH EBX                            ; 00419692
    CALL dword ptr [EDX + 0x14]         ; 00419693
    ADD ESP,0x8                         ; 00419696
    PUSH EAX                            ; 00419699
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 0041969a
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 0041969f
    MOV ESI,EAX                         ; 004196a2
    TEST EAX,EAX                        ; 004196a4
    JZ 0x004196bc                       ; 004196a6
        ;   XREF to: 004196bc (CONDITIONAL_JUMP)  ; LAB_004196bc
    CMP dword ptr [EBX + 0xcb4],0x0     ; 004196a8
    JNZ 0x0041971f                      ; 004196af
        ;   XREF to: 0041971f (CONDITIONAL_JUMP)  ; LAB_0041971f
    PUSH -0x1                           ; 004196b1
        ;   Label: LAB_004196b1
    PUSH EBX                            ; 004196b3
    CALL core_bodypart.cpp_CBodyPart_FUN_00419340 ; 004196b4
        ;   XREF to: 00419340 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_FUN_00419340(CBodyPart * this_ptr)
    ADD ESP,0x8                         ; 004196b9
    MOV EAX,[0x006703ec]                ; 004196bc | g_CDemonRendererPtr2
        ;   Label: LAB_004196bc
    PUSH EAX                            ; 004196c1 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 004196c2
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    ADD ESP,0x18                        ; 004196e0
        ;   Label: LAB_004196e0
    POP EBP                             ; 004196e3
    POP EBX                             ; 004196e4
    RET                                 ; 004196e5
    PUSH EBX                            ; 004196e6
        ;   Label: LAB_004196e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004196e7
    CALL dword ptr [EAX + 0x6c]         ; 004196ed
    ADD ESP,0x4                         ; 004196f0
    TEST EAX,EAX                        ; 004196f3
    JNZ 0x0041963f                      ; 004196f5
        ;   XREF to: 0041963f (CONDITIONAL_JUMP)  ; LAB_0041963f
    PUSH EBX                            ; 004196fb
    PUSH 0x615cdf                       ; 004196fc | = "%s going into background\n"
    MOV EBP,dword ptr [0x0066e8e0]      ; 00419701 | g_CConsolePtr
    PUSH EBP                            ; 00419707 | g_ConsolePtr
    MOV dword ptr [EBX + 0x158],0x1     ; 00419708
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00419712
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00419717
    JMP 0x0041963f                      ; 0041971a
        ;   XREF to: 0041963f (UNCONDITIONAL_JUMP)  ; LAB_0041963f
    MOV EBP,dword ptr [0x006703ec]      ; 0041971f | g_CDemonRendererPtr2
        ;   Label: LAB_0041971f
    PUSH EBP                            ; 00419725 | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00419726
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0041972b
    TEST EAX,EAX                        ; 0041972e
    JNZ 0x004196b1                      ; 00419730
        ;   XREF to: 004196b1 (CONDITIONAL_JUMP)  ; LAB_004196b1
    JMP 0x004196bc                      ; 00419736
        ;   XREF to: 004196bc (UNCONDITIONAL_JUMP)  ; LAB_004196bc

