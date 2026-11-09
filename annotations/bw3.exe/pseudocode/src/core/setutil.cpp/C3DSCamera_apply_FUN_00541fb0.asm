; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(char *param_1,CDemonCamera *param_2)
;
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534e51
;   core_set.cpp_FUN_00533e5e at 0053414f
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_005d0dfa
;   TerminatedCString s_C3DSCamera_apply_shouldn_005d0e0e
;   TerminatedCString s_Ambient_set_low_by_scrip_005d0e51
;   TerminatedCString s_Ambient_set_ridiculously_005d0e6c
;   undefined4 DAT_005d0e92
;   CConsole* g_CConsolePtr = 007f7ea4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 g_CDemonSetInstance.field1364304_0x14d150
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
;   core_main.c_FUN_004e4330
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541fb0
        ;   Label: core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0
    PUSH ESI                            ; 00541fb1
    PUSH EDI                            ; 00541fb2
    PUSH EBP                            ; 00541fb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00541fb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00541fb8
    CMP dword ptr [EBX + 0x140],0x0     ; 00541fbc
    JNZ 0x0054206d                      ; 00541fc3
        ;   XREF to: 0054206d (CONDITIONAL_JUMP)  ; LAB_0054206d
    LEA EAX,[EBP + 0x4]                 ; 00541fc9
        ;   Label: LAB_00541fc9
    LEA EDX,[EBX + 0x100]               ; 00541fcc
    CMP EAX,EDX                         ; 00541fd2
    JZ 0x00541fe6                       ; 00541fd4
        ;   XREF to: 00541fe6 (CONDITIONAL_JUMP)  ; LAB_00541fe6
    MOV ECX,dword ptr [EDX]             ; 00541fd6
    MOV dword ptr [EAX],ECX             ; 00541fd8
    MOV ECX,dword ptr [EDX + 0x4]       ; 00541fda
    MOV dword ptr [EAX + 0x4],ECX       ; 00541fdd
    MOV ECX,dword ptr [EDX + 0x8]       ; 00541fe0
    MOV dword ptr [EAX + 0x8],ECX       ; 00541fe3
    MOV ECX,0xa                         ; 00541fe6
        ;   Label: LAB_00541fe6
    LEA ESI,[EBX + 0x118]               ; 00541feb
    LEA EDI,[EBP + 0x10]                ; 00541ff1
    MOVSD.REP ES:EDI,ESI                ; 00541ff4
    FLD float ptr [EBX + 0x144]         ; 00541ff6
    LEA EDI,[EBP + 0x40]                ; 00541ffc
    MOV ESI,EBX                         ; 00541fff
    FSTP float ptr [EBP + 0x38]         ; 00542001
    PUSH EDI                            ; 00542004
    MOV AL,byte ptr [ESI]               ; 00542005
        ;   Label: LAB_00542005
    MOV byte ptr [EDI],AL               ; 00542007
    CMP AL,0x0                          ; 00542009
    JZ 0x0054201d                       ; 0054200b
        ;   XREF to: 0054201d (CONDITIONAL_JUMP)  ; LAB_0054201d
    MOV AL,byte ptr [ESI + 0x1]         ; 0054200d
    ADD ESI,0x2                         ; 00542010
    MOV byte ptr [EDI + 0x1],AL         ; 00542013
    ADD EDI,0x2                         ; 00542016
    CMP AL,0x0                          ; 00542019
    JNZ 0x00542005                      ; 0054201b
        ;   XREF to: 00542005 (CONDITIONAL_JUMP)  ; LAB_00542005
    POP EDI                             ; 0054201d
        ;   Label: LAB_0054201d
    PUSH dword ptr [EBX + 0x148]        ; 0054201e
    PUSH EBP                            ; 00542024
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 00542025
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    MOV EAX,[0x00603b28]                ; 0054202a | g_CDemonSetPtr
    FLD float ptr [EBX + 0x148]         ; 0054202f
    ADD ESP,0x8                         ; 00542035
    FCOMP float ptr [EAX + 0x14d150]    ; 00542038 | g_CDemonSetInstance.field1364304_0x14d150
    FNSTSW AX                           ; 0054203e
    SAHF                                ; 00542040
    JNC 0x00542057                      ; 00542041
        ;   XREF to: 00542057 (CONDITIONAL_JUMP)  ; LAB_00542057
    PUSH 0x5d0e51                       ; 00542043 | = "Ambient set low by script\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00542048 | g_CConsolePtr
    PUSH EDI                            ; 0054204e | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0054204f
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 00542054
    FLD float ptr [EBX + 0x148]         ; 00542057
        ;   Label: LAB_00542057
    FCOMP double ptr [0x005d0e92]       ; 0054205d | DAT_005d0e92
    FNSTSW AX                           ; 00542063
    SAHF                                ; 00542065
    JA 0x00542096                       ; 00542066
        ;   XREF to: 00542096 (CONDITIONAL_JUMP)  ; LAB_00542096
    POP EBP                             ; 00542068
    POP EDI                             ; 00542069
    POP ESI                             ; 0054206a
    POP EBX                             ; 0054206b
    RET                                 ; 0054206c
    PUSH EBX                            ; 0054206d
        ;   Label: LAB_0054206d
    MOV ECX,0x5d0dfa                    ; 0054206e | = "..\\core\\setutil.cpp"
    MOV ESI,0xf7                        ; 00542073
    PUSH 0x5d0e0e                       ; 00542078 | = "C3DSCamera::apply - shouldn't ever do..."
    MOV dword ptr [0x01d71de0],ECX      ; 0054207d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00542083 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00542089
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0054208e
    JMP 0x00541fc9                      ; 00542091
        ;   XREF to: 00541fc9 (UNCONDITIONAL_JUMP)  ; LAB_00541fc9
    PUSH 0x5d0e6c                       ; 00542096 | = "Ambient set ridiculously high\n"
        ;   Label: LAB_00542096
    MOV EBP,dword ptr [0x005f1690]      ; 0054209b | g_CConsolePtr
    PUSH EBP                            ; 005420a1 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 005420a2
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 005420a7
    POP EBP                             ; 005420aa
    POP EDI                             ; 005420ab
    POP ESI                             ; 005420ac
    POP EBX                             ; 005420ad
    RET                                 ; 005420ae

