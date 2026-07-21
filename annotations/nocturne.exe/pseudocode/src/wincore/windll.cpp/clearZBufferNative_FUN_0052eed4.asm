; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 __cdecl wincore_windll_cpp_clearZBufferNative_FUN_0052eed4(void)
;
;
; XREF[5]:
;   FUN_0050a260 at 0050a5c7
;   FUN_00513720 at 005137f8
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404e1
;   core_moon.cpp_CMoon_renderJoystickCalibration_FUN_004df040 at 004df04c
;   core_moon.cpp_CMoon_render_FUN_004dec50 at 004dec66
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined8 DAT_005bf48c
;   undefined4 DAT_005bf494
;   undefined4 DAT_01bd4260
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052eed4
        ;   Label: wincore_windll.cpp_clearZBufferNative_FUN_0052eed4
    PUSH EDI                            ; 0052eed5
    PUSHAD                              ; 0052eed6
    CLD                                 ; 0052eed7
    PUSH DS                             ; 0052eed8
    POP ES                              ; 0052eed9
    MOV EDI,dword ptr [0x01bd4260]      ; 0052eeda | DAT_01bd4260
    MOV EAX,[0x01c00c5c]                ; 0052eee0 | DAT_01c00c5c
    MOV ECX,dword ptr [0x005b761c]      ; 0052eee5 | DAT_005b761c
    MUL ECX                             ; 0052eeeb
    SHL EAX,0x2                         ; 0052eeed
    ADD EDI,EAX                         ; 0052eef0
    MOV EAX,[0x01c00c64]                ; 0052eef2 | DAT_01c00c64
    SUB EAX,dword ptr [0x01c00c5c]      ; 0052eef7 | DAT_01c00c5c
    INC EAX                             ; 0052eefd
    MOV ECX,dword ptr [0x005b761c]      ; 0052eefe | DAT_005b761c
    MUL ECX                             ; 0052ef04
    MOV ECX,EAX                         ; 0052ef06
    FLD double ptr [0x005bf48c]         ; 0052ef08 | DAT_005bf48c
    FST double ptr [EDI]                ; 0052ef0e
        ;   Label: LAB_0052ef0e
    FST double ptr [EDI + 0x8]          ; 0052ef10
    FST double ptr [EDI + 0x10]         ; 0052ef13
    FST double ptr [EDI + 0x18]         ; 0052ef16
    FST double ptr [EDI + 0x20]         ; 0052ef19
    FST double ptr [EDI + 0x28]         ; 0052ef1c
    FST double ptr [EDI + 0x30]         ; 0052ef1f
    FST double ptr [EDI + 0x38]         ; 0052ef22
    ADD EDI,0x40                        ; 0052ef25
    SUB ECX,0x10                        ; 0052ef28
    JG 0x0052ef0e                       ; 0052ef2b
        ;   XREF to: 0052ef0e (CONDITIONAL_JUMP)  ; LAB_0052ef0e
    FSTP double ptr [0x005bf494]        ; 0052ef2d | DAT_005bf494
    POPAD                               ; 0052ef33
    POP EDI                             ; 0052ef34
    POP ESI                             ; 0052ef35
    RET                                 ; 0052ef36

