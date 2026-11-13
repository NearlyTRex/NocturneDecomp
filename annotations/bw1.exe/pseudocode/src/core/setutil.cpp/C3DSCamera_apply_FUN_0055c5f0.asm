; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(C3DSCamera *this_ptr,CDemonCamera *camera)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; CDemonCamera *   Stack[0x8]:4   camera
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f691
;   core_set.cpp_FUN_0054e6a0 at 0054e98f
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005f1151
;   TerminatedCString s_C3DSCamera_apply_shouldn_005f1165
;   TerminatedCString s_Ambient_set_low_by_scrip_005f11a8
;   TerminatedCString s_Ambient_set_ridiculously_005f11c3
;   undefined4 DAT_005f11e9
;   CConsole* g_CConsolePtr = 007db5f0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 g_CDemonSetInstance.min_ambient_value
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
;   core_main.c_FUN_005030e0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c5f0
        ;   Label: core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0
    PUSH ESI                            ; 0055c5f1
    PUSH EDI                            ; 0055c5f2
    PUSH EBP                            ; 0055c5f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055c5f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0055c5f8
    CMP dword ptr [EBX + 0x140],0x0     ; 0055c5fc
    JNZ 0x0055c6ad                      ; 0055c603
        ;   XREF to: 0055c6ad (CONDITIONAL_JUMP)  ; LAB_0055c6ad
    LEA EAX,[EBP + 0x4]                 ; 0055c609
        ;   Label: LAB_0055c609
    LEA EDX,[EBX + 0x100]               ; 0055c60c
    CMP EAX,EDX                         ; 0055c612
    JZ 0x0055c626                       ; 0055c614
        ;   XREF to: 0055c626 (CONDITIONAL_JUMP)  ; LAB_0055c626
    MOV ECX,dword ptr [EDX]             ; 0055c616
    MOV dword ptr [EAX],ECX             ; 0055c618
    MOV ECX,dword ptr [EDX + 0x4]       ; 0055c61a
    MOV dword ptr [EAX + 0x4],ECX       ; 0055c61d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0055c620
    MOV dword ptr [EAX + 0x8],ECX       ; 0055c623
    MOV ECX,0xa                         ; 0055c626
        ;   Label: LAB_0055c626
    LEA ESI,[EBX + 0x118]               ; 0055c62b
    LEA EDI,[EBP + 0x10]                ; 0055c631
    MOVSD.REP ES:EDI,ESI                ; 0055c634
    FLD float ptr [EBX + 0x144]         ; 0055c636
    LEA EDI,[EBP + 0x40]                ; 0055c63c
    MOV ESI,EBX                         ; 0055c63f
    FSTP float ptr [EBP + 0x38]         ; 0055c641
    PUSH EDI                            ; 0055c644
    MOV AL,byte ptr [ESI]               ; 0055c645
        ;   Label: LAB_0055c645
    MOV byte ptr [EDI],AL               ; 0055c647
    CMP AL,0x0                          ; 0055c649
    JZ 0x0055c65d                       ; 0055c64b
        ;   XREF to: 0055c65d (CONDITIONAL_JUMP)  ; LAB_0055c65d
    MOV AL,byte ptr [ESI + 0x1]         ; 0055c64d
    ADD ESI,0x2                         ; 0055c650
    MOV byte ptr [EDI + 0x1],AL         ; 0055c653
    ADD EDI,0x2                         ; 0055c656
    CMP AL,0x0                          ; 0055c659
    JNZ 0x0055c645                      ; 0055c65b
        ;   XREF to: 0055c645 (CONDITIONAL_JUMP)  ; LAB_0055c645
    POP EDI                             ; 0055c65d
        ;   Label: LAB_0055c65d
    PUSH dword ptr [EBX + 0x148]        ; 0055c65e
    PUSH EBP                            ; 0055c664
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 0055c665
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    MOV EAX,[0x00622c18]                ; 0055c66a | g_CDemonSetPtr
    FLD float ptr [EBX + 0x148]         ; 0055c66f
    ADD ESP,0x8                         ; 0055c675
    FCOMP float ptr [EAX + 0x14d150]    ; 0055c678 | g_CDemonSetInstance.min_ambient_value
    FNSTSW AX                           ; 0055c67e
    SAHF                                ; 0055c680
    JNC 0x0055c697                      ; 0055c681
        ;   XREF to: 0055c697 (CONDITIONAL_JUMP)  ; LAB_0055c697
    PUSH 0x5f11a8                       ; 0055c683 | = "Ambient set low by script\n"
    MOV EDI,dword ptr [0x00611100]      ; 0055c688 | g_CConsolePtr
    PUSH EDI                            ; 0055c68e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0055c68f
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0055c694
    FLD float ptr [EBX + 0x148]         ; 0055c697
        ;   Label: LAB_0055c697
    FCOMP double ptr [0x005f11e9]       ; 0055c69d | DAT_005f11e9
    FNSTSW AX                           ; 0055c6a3
    SAHF                                ; 0055c6a5
    JA 0x0055c6d6                       ; 0055c6a6
        ;   XREF to: 0055c6d6 (CONDITIONAL_JUMP)  ; LAB_0055c6d6
    POP EBP                             ; 0055c6a8
    POP EDI                             ; 0055c6a9
    POP ESI                             ; 0055c6aa
    POP EBX                             ; 0055c6ab
    RET                                 ; 0055c6ac
    PUSH EBX                            ; 0055c6ad
        ;   Label: LAB_0055c6ad
    MOV ECX,0x5f1151                    ; 0055c6ae | = "..\\core\\setutil.cpp"
    MOV ESI,0xf7                        ; 0055c6b3
    PUSH 0x5f1165                       ; 0055c6b8 | = "C3DSCamera::apply - shouldn't ever do..."
    MOV dword ptr [0x01d1d400],ECX      ; 0055c6bd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0055c6c3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0055c6c9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 0055c6ce
    JMP 0x0055c609                      ; 0055c6d1
        ;   XREF to: 0055c609 (UNCONDITIONAL_JUMP)  ; LAB_0055c609
    PUSH 0x5f11c3                       ; 0055c6d6 | = "Ambient set ridiculously high\n"
        ;   Label: LAB_0055c6d6
    MOV EBP,dword ptr [0x00611100]      ; 0055c6db | g_CConsolePtr
    PUSH EBP                            ; 0055c6e1 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0055c6e2
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0055c6e7
    POP EBP                             ; 0055c6ea
    POP EDI                             ; 0055c6eb
    POP ESI                             ; 0055c6ec
    POP EBX                             ; 0055c6ed
    RET                                 ; 0055c6ee

