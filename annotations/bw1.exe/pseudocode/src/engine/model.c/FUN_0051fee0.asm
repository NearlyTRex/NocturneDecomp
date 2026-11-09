; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_model_c_FUN_0051fee0(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
;
; XREF[4]:
;   engine_3d.c_FUN_00407820 at 00407870
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004fcd30 at 004fd094
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004fcb40 at 004fcb5d
;   engine_keyframe.c_recomputeKeyFrameNormals_FUN_004fd120 at 004fd18a
;
; Referenced Globals:
;   void* switchdataD_0051fdcc = 0051feff
;   TerminatedCString s_MRGLSize_Bad_type_d_005ea0f0
;   TerminatedCString s_engine_model_c_005ea108
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    SUB ESP,0x100                       ; 0051fee0
        ;   Label: engine_model.c_FUN_0051fee0
    MOV EAX,dword ptr [ESP + 0x104]     ; 0051fee6
    MOV EDX,dword ptr [EAX]             ; 0051feed
    CMP EDX,0x42                        ; 0051feef
    JA 0x00520005                       ; 0051fef2
        ;   XREF to: 00520005 (CONDITIONAL_JUMP)  ; caseD_3f
    JMP dword ptr [EDX*0x4 + 0x51fdcc]  ; 0051fef8 | caseD_0 | caseD_1 | caseD_3
        ;   Label: switchD
    MOV EAX,0x4                         ; 0051feff
        ;   Label: caseD_0
    ADD ESP,0x100                       ; 0051ff04
    RET                                 ; 0051ff0a
    MOV EAX,0x10                        ; 0051ff0b
        ;   Label: caseD_1
    ADD ESP,0x100                       ; 0051ff10
    RET                                 ; 0051ff16
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051ff17
        ;   Label: caseD_2
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051ff1a
    SUB EAX,EDX                         ; 0051ff21
    SHL EAX,0x2                         ; 0051ff23
    ADD EAX,0xc                         ; 0051ff26
    ADD ESP,0x100                       ; 0051ff29
    RET                                 ; 0051ff2f
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051ff30
        ;   Label: caseD_4
    SHL EAX,0x3                         ; 0051ff33
    ADD EAX,0xc                         ; 0051ff36
    ADD ESP,0x100                       ; 0051ff39
    RET                                 ; 0051ff3f
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051ff40
        ;   Label: caseD_5
    SHL EAX,0x2                         ; 0051ff43
    ADD EAX,0x18                        ; 0051ff46
    ADD ESP,0x100                       ; 0051ff49
    RET                                 ; 0051ff4f
    MOV EAX,0x20                        ; 0051ff50
        ;   Label: caseD_9
    ADD ESP,0x100                       ; 0051ff55
    RET                                 ; 0051ff5b
    MOV EAX,0x8                         ; 0051ff5c
        ;   Label: caseD_a
    ADD ESP,0x100                       ; 0051ff61
    RET                                 ; 0051ff67
    MOV EAX,0x1c                        ; 0051ff68
        ;   Label: caseD_c
    ADD ESP,0x100                       ; 0051ff6d
    RET                                 ; 0051ff73
    MOV EAX,0x18                        ; 0051ff74
        ;   Label: caseD_d
    ADD ESP,0x100                       ; 0051ff79
    RET                                 ; 0051ff7f
    MOV EAX,0x48                        ; 0051ff80
        ;   Label: caseD_40
    ADD ESP,0x100                       ; 0051ff85
    RET                                 ; 0051ff8b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051ff8c
        ;   Label: caseD_e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051ff8f
    SUB EAX,EDX                         ; 0051ff96
    SHL EAX,0x2                         ; 0051ff98
    ADD EAX,0x18                        ; 0051ff9b
    ADD ESP,0x100                       ; 0051ff9e
    RET                                 ; 0051ffa4
    MOV EAX,0x14                        ; 0051ffa5
        ;   Label: caseD_10
    ADD ESP,0x100                       ; 0051ffaa
    RET                                 ; 0051ffb0
    MOV EAX,dword ptr [EAX + 0x4]       ; 0051ffb1
        ;   Label: caseD_16
    SHL EAX,0x2                         ; 0051ffb4
    ADD EAX,0x8                         ; 0051ffb7
    ADD ESP,0x100                       ; 0051ffba
    RET                                 ; 0051ffc0
    MOV EAX,0xc                         ; 0051ffc1
        ;   Label: caseD_17
    ADD ESP,0x100                       ; 0051ffc6
    RET                                 ; 0051ffcc
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051ffcd
        ;   Label: caseD_1d
    SHL EAX,0x5                         ; 0051ffd0
    ADD EAX,0x1c                        ; 0051ffd3
    ADD ESP,0x100                       ; 0051ffd6
    RET                                 ; 0051ffdc
    MOV EAX,dword ptr [EAX + 0x8]       ; 0051ffdd
        ;   Label: caseD_1f
    SHL EAX,0x2                         ; 0051ffe0
    ADD EAX,0xc                         ; 0051ffe3
    ADD ESP,0x100                       ; 0051ffe6
    RET                                 ; 0051ffec
    MOV EAX,0x158                       ; 0051ffed
        ;   Label: caseD_20
    ADD ESP,0x100                       ; 0051fff2
    RET                                 ; 0051fff8
    MOV EAX,0x3d60                      ; 0051fff9
        ;   Label: caseD_26
    ADD ESP,0x100                       ; 0051fffe
    RET                                 ; 00520004
    PUSH EDX                            ; 00520005
        ;   Label: caseD_13
    PUSH 0x5ea0f0                       ; 00520006 | = "MRGLSize: Bad type : %d"
    LEA EAX,[ESP + 0x8]                 ; 0052000b
    PUSH EAX                            ; 0052000f
    CALL crt_unknown.c_FUN_005bfb40     ; 00520010
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    MOV EDX,0x5ea108                    ; 00520015 | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 0052001a
    MOV EAX,ESP                         ; 0052001d
    MOV ECX,0x25c                       ; 0052001f
    PUSH EAX                            ; 00520024
    MOV dword ptr [0x01d1d400],EDX      ; 00520025 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0052002b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00520031
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    MOV EAX,0x4                         ; 00520036
    ADD ESP,0x4                         ; 0052003b
    ADD ESP,0x100                       ; 0052003e
    RET                                 ; 00520044

