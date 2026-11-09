; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545000(int param_1)
;
;
; XREF[1]:
;   core_shadow.cpp_FUN_005459b0 at 00545a94
;
; Referenced Globals:
;   undefined4 s_shb_alert_wav_005d1310+2
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545000
        ;   Label: core_shadow.cpp_FUN_00545000
    MOV EBX,dword ptr [ESP + 0x8]       ; 00545001
    MOV EDX,dword ptr [EBX + 0xd078]    ; 00545005
    PUSH EDX                            ; 0054500b
    CALL sound_sndmain.cpp_FUN_00556700 ; 0054500c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00545011
    TEST EAX,EAX                        ; 00545014
    JZ 0x0054501a                       ; 00545016
        ;   XREF to: 0054501a (CONDITIONAL_JUMP)  ; LAB_0054501a
    POP EBX                             ; 00545018
    RET                                 ; 00545019
    PUSH 0x5d1312                       ; 0054501a | s_shb_alert_wav_005d1310+2
        ;   Label: LAB_0054501a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054501f
    PUSH EBX                            ; 00545025
    CALL dword ptr [EAX + 0x2c]         ; 00545026
    MOV dword ptr [EBX + 0xd07c],0x41a00000 ; 00545029
    ADD ESP,0x8                         ; 00545033
    MOV dword ptr [EBX + 0xd078],EAX    ; 00545036
    POP EBX                             ; 0054503c
    RET                                 ; 0054503d

