; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initCameraShake_FUN_00443570(CDemonCamera *this_ptr,float peak_intensity,float attack_time,float sustain_duration ,float decay_time)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   peak_intensity
; float            Stack[0xc]:4   attack_time
; float            Stack[0x10]:4   sustain_duration
; float            Stack[0x14]:4   decay_time
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00534800 at 00534815
;
; Referenced Globals:
;   undefined4 DAT_005ce7b6
;   undefined4 DAT_00609f98
;   undefined4 DAT_00609f9c
;   undefined4 DAT_00609fa0
;   undefined4 DAT_01326d00
;   undefined4 DAT_01326d04
;   undefined4 DAT_01326d08
;   undefined4 DAT_01326d0c
;   undefined4 DAT_01326d10
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443570
        ;   Label: core_dcamera.cpp_CDemonCamera_initCameraShake_FUN_00443570
    FLD double ptr [0x005ce7b6]         ; 00443571 | DAT_005ce7b6
    FLD float ptr [ESP + 0xc]           ; 00443577
    FMUL ST1                            ; 0044357b
    FLD float ptr [ESP + 0x14]          ; 0044357d
    FMUL ST2                            ; 00443581
    FLD float ptr [ESP + 0x10]          ; 00443583
    FMUL ST3                            ; 00443587
    FLD float ptr [ESP + 0x18]          ; 00443589
    XOR EDX,EDX                         ; 0044358d
    FMULP ST4                           ; 0044358f
    MOV dword ptr [0x01326d08],EDX      ; 00443591 | DAT_01326d08
    FXCH ST2                            ; 00443597
    CALL crt_math.c_round_FUN_005b7ff0  ; 00443599
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0044359e
    CALL crt_math.c_round_FUN_005b7ff0  ; 004435a0
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004435a5
    CALL crt_math.c_round_FUN_005b7ff0  ; 004435a7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST3                            ; 004435ac
    CALL crt_math.c_round_FUN_005b7ff0  ; 004435ae
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 004435b3
    FISTP dword ptr [0x00609f9c]        ; 004435b5 | DAT_00609f9c
    FXCH ST2                            ; 004435bb
    FISTP dword ptr [0x01326d04]        ; 004435bd | DAT_01326d04
    FISTP dword ptr [0x01326d0c]        ; 004435c3 | DAT_01326d0c
    MOV EBX,dword ptr [0x01326d04]      ; 004435c9 | DAT_01326d04
    FISTP dword ptr [0x00609f98]        ; 004435cf | DAT_00609f98
    TEST EBX,EBX                        ; 004435d5
    JNZ 0x004435ec                      ; 004435d7
        ;   XREF to: 004435ec (CONDITIONAL_JUMP)  ; LAB_004435ec
    MOV EAX,[0x00609f9c]                ; 004435d9 | DAT_00609f9c
    MOV EDX,0x1                         ; 004435de
    MOV [0x01326d00],EAX                ; 004435e3 | DAT_01326d00
    TEST EAX,EAX                        ; 004435e8
    JZ 0x004435f4                       ; 004435ea
        ;   XREF to: 004435f4 (CONDITIONAL_JUMP)  ; LAB_004435f4
    MOV dword ptr [0x00609fa0],EDX      ; 004435ec | DAT_00609fa0
        ;   Label: LAB_004435ec
    POP EBX                             ; 004435f2
    RET                                 ; 004435f3
    MOV EAX,[0x01326d0c]                ; 004435f4 | DAT_01326d0c
        ;   Label: LAB_004435f4
    MOV EDX,0x2                         ; 004435f9
    MOV [0x01326d10],EAX                ; 004435fe | DAT_01326d10
    MOV dword ptr [0x00609fa0],EDX      ; 00443603 | DAT_00609fa0
    POP EBX                             ; 00443609
    RET                                 ; 0044360a

