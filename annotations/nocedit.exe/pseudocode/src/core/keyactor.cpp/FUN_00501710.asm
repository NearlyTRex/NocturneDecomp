; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_keyactor_cpp_FUN_00501710(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_00630c3d = 3.14159265350000
;   double DOUBLE_00630c45 = 8192
;   double DOUBLE_00630c4d = 16384
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
;   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
;   core_set.cpp_CDemonSet_FUN_0056d110
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00501710
        ;   Label: core_keyactor.cpp_FUN_00501710
    PUSH ESI                            ; 00501711
    SUB ESP,0xc                         ; 00501712
    MOV ESI,dword ptr [ESP + 0x18]      ; 00501715
    FLD float ptr [ESP + 0x1c]          ; 00501719
    LEA EAX,[ESI + 0x20]                ; 0050171d
    FMUL double ptr [0x00630c3d]        ; 00501720 | DOUBLE_00630c3d
    PUSH EAX                            ; 00501726
    LEA EBX,[ESI + 0x2dc]               ; 00501727
    FLD float ptr [ESI + 0x2d8]         ; 0050172d
    FXCH                                ; 00501733
    FADD ST0,ST1                        ; 00501735
    PUSH EBX                            ; 00501737
    FSTP ST1                            ; 00501738
    FSTP float ptr [ESI + 0x2d8]        ; 0050173a
    CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310 ; 00501740
        ;   XREF to: 00471310 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
    FLD float ptr [ESI + 0x2d8]         ; 00501745
    FSIN                                ; 0050174b
    FMUL double ptr [0x00630c45]        ; 0050174d | DOUBLE_00630c45
    FADD double ptr [0x00630c4d]        ; 00501753 | DOUBLE_00630c4d
    ADD ESP,0x8                         ; 00501759
    CALL crt_math.c_round_FUN_005fe6b0  ; 0050175c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 00501761
    MOV EAX,dword ptr [ESP + 0x8]       ; 00501765
    MOV EDX,EAX                         ; 00501769
    SAR EDX,0x1f                        ; 0050176b
    MOV dword ptr [EBX + 0x3c],EAX      ; 0050176e
    SHL EDX,0x8                         ; 00501771
    SBB EAX,EDX                         ; 00501774
    SAR EAX,0x8                         ; 00501776
    MOV EDX,EAX                         ; 00501779
    SAR EDX,0x1f                        ; 0050177b
    SHL EDX,0x2                         ; 0050177e
    SBB EAX,EDX                         ; 00501781
    SAR EAX,0x2                         ; 00501783
    PUSH 0x3f800000                     ; 00501786
    PUSH EBX                            ; 0050178b
    MOV byte ptr [EBX + 0x1c],AL        ; 0050178c
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360 ; 0050178f
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 00501794
    PUSH EBX                            ; 00501797
    MOV EDX,dword ptr [0x006810c8]      ; 00501798 | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 0050179e | g_CDemonSetInstance
    MOV dword ptr [EBX + 0x20],0x0      ; 0050179f
    CALL core_set.cpp_CDemonSet_FUN_0056d110 ; 005017a6
        ;   XREF to: 0056d110 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_0056d110(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 005017ab
    ADD ESP,0xc                         ; 005017ae
    POP ESI                             ; 005017b1
    POP EBX                             ; 005017b2
    RET                                 ; 005017b3

