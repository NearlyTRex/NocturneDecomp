; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0053ad20(char *param_1,CDemonCamera *param_2)
;
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e3b1
;   core_set.cpp_FUN_0052d3be at 0052d6af
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005e6181
;   TerminatedCString s_C3DSCamera_apply_shouldn_005e6195
;   TerminatedCString s_Ambient_set_low_by_scrip_005e61d8
;   TerminatedCString s_Ambient_set_ridiculously_005e61f3
;   undefined4 DAT_005e6219
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 g_CDemonSetInstance.field1364304_0x14d150
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80
;   core_main.c_FUN_004e4500
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ad20
        ;   Label: core_setutil.cpp_C3DSCamera_apply_FUN_0053ad20
    PUSH ESI                            ; 0053ad21
    PUSH EDI                            ; 0053ad22
    PUSH EBP                            ; 0053ad23
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053ad24
    MOV EBP,dword ptr [ESP + 0x18]      ; 0053ad28
    CMP dword ptr [EBX + 0x140],0x0     ; 0053ad2c
    JNZ 0x0053addd                      ; 0053ad33
        ;   XREF to: 0053addd (CONDITIONAL_JUMP)  ; LAB_0053addd
    LEA EAX,[EBP + 0x4]                 ; 0053ad39
        ;   Label: LAB_0053ad39
    LEA EDX,[EBX + 0x100]               ; 0053ad3c
    CMP EAX,EDX                         ; 0053ad42
    JZ 0x0053ad56                       ; 0053ad44
        ;   XREF to: 0053ad56 (CONDITIONAL_JUMP)  ; LAB_0053ad56
    MOV ECX,dword ptr [EDX]             ; 0053ad46
    MOV dword ptr [EAX],ECX             ; 0053ad48
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053ad4a
    MOV dword ptr [EAX + 0x4],ECX       ; 0053ad4d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0053ad50
    MOV dword ptr [EAX + 0x8],ECX       ; 0053ad53
    MOV ECX,0xa                         ; 0053ad56
        ;   Label: LAB_0053ad56
    LEA ESI,[EBX + 0x118]               ; 0053ad5b
    LEA EDI,[EBP + 0x10]                ; 0053ad61
    MOVSD.REP ES:EDI,ESI                ; 0053ad64
    FLD float ptr [EBX + 0x144]         ; 0053ad66
    LEA EDI,[EBP + 0x40]                ; 0053ad6c
    MOV ESI,EBX                         ; 0053ad6f
    FSTP float ptr [EBP + 0x38]         ; 0053ad71
    PUSH EDI                            ; 0053ad74
    MOV AL,byte ptr [ESI]               ; 0053ad75
        ;   Label: LAB_0053ad75
    MOV byte ptr [EDI],AL               ; 0053ad77
    CMP AL,0x0                          ; 0053ad79
    JZ 0x0053ad8d                       ; 0053ad7b
        ;   XREF to: 0053ad8d (CONDITIONAL_JUMP)  ; LAB_0053ad8d
    MOV AL,byte ptr [ESI + 0x1]         ; 0053ad7d
    ADD ESI,0x2                         ; 0053ad80
    MOV byte ptr [EDI + 0x1],AL         ; 0053ad83
    ADD EDI,0x2                         ; 0053ad86
    CMP AL,0x0                          ; 0053ad89
    JNZ 0x0053ad75                      ; 0053ad8b
        ;   XREF to: 0053ad75 (CONDITIONAL_JUMP)  ; LAB_0053ad75
    POP EDI                             ; 0053ad8d
        ;   Label: LAB_0053ad8d
    PUSH dword ptr [EBX + 0x148]        ; 0053ad8e
    PUSH EBP                            ; 0053ad94
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80 ; 0053ad95
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00441e80(CDemonCamera * this_ptr, float intensity)
    MOV EAX,[0x0061b5a8]                ; 0053ad9a | g_CDemonSetPtr
    FLD float ptr [EBX + 0x148]         ; 0053ad9f
    ADD ESP,0x8                         ; 0053ada5
    FCOMP float ptr [EAX + 0x14d150]    ; 0053ada8 | g_CDemonSetInstance.field1364304_0x14d150
    FNSTSW AX                           ; 0053adae
    SAHF                                ; 0053adb0
    JNC 0x0053adc7                      ; 0053adb1
        ;   XREF to: 0053adc7 (CONDITIONAL_JUMP)  ; LAB_0053adc7
    PUSH 0x5e61d8                       ; 0053adb3 | = "Ambient set low by script\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0053adb8 | g_CConsolePtr
    PUSH EDI                            ; 0053adbe | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0053adbf
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0053adc4
    FLD float ptr [EBX + 0x148]         ; 0053adc7
        ;   Label: LAB_0053adc7
    FCOMP double ptr [0x005e6219]       ; 0053adcd | DAT_005e6219
    FNSTSW AX                           ; 0053add3
    SAHF                                ; 0053add5
    JA 0x0053ae06                       ; 0053add6
        ;   XREF to: 0053ae06 (CONDITIONAL_JUMP)  ; LAB_0053ae06
    POP EBP                             ; 0053add8
    POP EDI                             ; 0053add9
    POP ESI                             ; 0053adda
    POP EBX                             ; 0053addb
    RET                                 ; 0053addc
    PUSH EBX                            ; 0053addd
        ;   Label: LAB_0053addd
    MOV ECX,0x5e6181                    ; 0053adde | = "..\\core\\setutil.cpp"
    MOV ESI,0xf7                        ; 0053ade3
    PUSH 0x5e6195                       ; 0053ade8 | = "C3DSCamera::apply - shouldn't ever do..."
    MOV dword ptr [0x01d046a0],ECX      ; 0053aded | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0053adf3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0053adf9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0053adfe
    JMP 0x0053ad39                      ; 0053ae01
        ;   XREF to: 0053ad39 (UNCONDITIONAL_JUMP)  ; LAB_0053ad39
    PUSH 0x5e61f3                       ; 0053ae06 | = "Ambient set ridiculously high\n"
        ;   Label: LAB_0053ae06
    MOV EBP,dword ptr [0x00609ed0]      ; 0053ae0b | g_CConsolePtr
    PUSH EBP                            ; 0053ae11 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0053ae12
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x8                         ; 0053ae17
    POP EBP                             ; 0053ae1a
    POP EDI                             ; 0053ae1b
    POP ESI                             ; 0053ae1c
    POP EBX                             ; 0053ae1d
    RET                                 ; 0053ae1e

