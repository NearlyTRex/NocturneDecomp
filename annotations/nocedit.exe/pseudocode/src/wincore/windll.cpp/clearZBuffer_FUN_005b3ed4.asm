; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4(void)
;
;
; XREF[19]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043ca9f
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d6d9
;   core_course.cpp_FUN_00443bc0 at 00443ccf
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 at 0044c658
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047ccab
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_0052a2c0 at 0052a2cc
;   core_moon.cpp_CMoon_render_FUN_00529ed0 at 00529ee6
;   core_morph.cpp_FUN_0052bcb0 at 0052bfb7
;   core_morph.cpp_FUN_0052ca90 at 0052cb07
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 0053a316
;   ... and 9 more
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   double g_SelectedClearColor = 0.0
;   double g_ClearColor = 0.0
;   uint*[1200] g_ZBufferScanlineArray
;   int g_ClipTop
;   int g_ClipBottom
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005b3ed4
        ;   Label: wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
    PUSH EDI                            ; 005b3ed5
    PUSHAD                              ; 005b3ed6
    CLD                                 ; 005b3ed7
    PUSH DS                             ; 005b3ed8
    POP ES                              ; 005b3ed9
    MOV EDI,dword ptr [0x02cf7d5c]      ; 005b3eda | g_ZBufferScanlineArray
    MOV EAX,[0x02d0255c]                ; 005b3ee0 | g_ClipTop
    MOV ECX,dword ptr [0x00679394]      ; 005b3ee5 | g_WindowWidth
    MUL ECX                             ; 005b3eeb
    SHL EAX,0x2                         ; 005b3eed
    ADD EDI,EAX                         ; 005b3ef0
    MOV EAX,[0x02d02564]                ; 005b3ef2 | g_ClipBottom
    SUB EAX,dword ptr [0x02d0255c]      ; 005b3ef7 | g_ClipTop
    INC EAX                             ; 005b3efd
    MOV ECX,dword ptr [0x00679394]      ; 005b3efe | g_WindowWidth
    MUL ECX                             ; 005b3f04
    MOV ECX,EAX                         ; 005b3f06
    FLD double ptr [0x0068261c]         ; 005b3f08 | g_SelectedClearColor
    FST double ptr [EDI]                ; 005b3f0e
        ;   Label: LAB_005b3f0e
    FST double ptr [EDI + 0x8]          ; 005b3f10
    FST double ptr [EDI + 0x10]         ; 005b3f13
    FST double ptr [EDI + 0x18]         ; 005b3f16
    FST double ptr [EDI + 0x20]         ; 005b3f19
    FST double ptr [EDI + 0x28]         ; 005b3f1c
    FST double ptr [EDI + 0x30]         ; 005b3f1f
    FST double ptr [EDI + 0x38]         ; 005b3f22
    ADD EDI,0x40                        ; 005b3f25
    SUB ECX,0x10                        ; 005b3f28
    JG 0x005b3f0e                       ; 005b3f2b
        ;   XREF to: 005b3f0e (CONDITIONAL_JUMP)  ; LAB_005b3f0e
    FSTP double ptr [0x00682624]        ; 005b3f2d | g_ClearColor
    POPAD                               ; 005b3f33
    POP EDI                             ; 005b3f34
    POP ESI                             ; 005b3f35
    RET                                 ; 005b3f36

