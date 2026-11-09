; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_FUN_004fc590(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e69c7
;   undefined4 DAT_005e69cb
;   undefined4 DAT_005e69d3
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc590
        ;   Label: core_keyactor.cpp_FUN_004fc590
    PUSH ESI                            ; 004fc591
    SUB ESP,0x4                         ; 004fc592
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fc595
    FLD float ptr [ESP + 0x14]          ; 004fc599
    LEA EAX,[ESI + 0x20]                ; 004fc59d
    FMUL float ptr [0x005e69c7]         ; 004fc5a0 | DAT_005e69c7
    PUSH EAX                            ; 004fc5a6
    LEA EBX,[ESI + 0x2dc]               ; 004fc5a7
    FADD float ptr [ESI + 0x2d8]        ; 004fc5ad
    PUSH EBX                            ; 004fc5b3
    FSTP float ptr [ESI + 0x2d8]        ; 004fc5b4
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970 ; 004fc5ba
        ;   XREF to: 0045e970 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045e970(CDemonGlobe * this_ptr, CVector3f * position)
    FLD float ptr [ESI + 0x2d8]         ; 004fc5bf
    FSIN                                ; 004fc5c5
    FMUL double ptr [0x005e69cb]        ; 004fc5c7 | DAT_005e69cb
    FADD double ptr [0x005e69d3]        ; 004fc5cd | DAT_005e69d3
    ADD ESP,0x8                         ; 004fc5d3
    CALL crt_math.c_round_FUN_005c03a0  ; 004fc5d6
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP]               ; 004fc5db
    MOV EAX,dword ptr [ESP]             ; 004fc5de
    MOV EDX,EAX                         ; 004fc5e1
    SAR EDX,0x1f                        ; 004fc5e3
    MOV dword ptr [EBX + 0x3c],EAX      ; 004fc5e6
    SHL EDX,0x8                         ; 004fc5e9
    SBB EAX,EDX                         ; 004fc5ec
    SAR EAX,0x8                         ; 004fc5ee
    MOV EDX,EAX                         ; 004fc5f1
    SAR EDX,0x1f                        ; 004fc5f3
    SHL EDX,0x2                         ; 004fc5f6
    SBB EAX,EDX                         ; 004fc5f9
    SAR EAX,0x2                         ; 004fc5fb
    PUSH 0x3f800000                     ; 004fc5fe
    PUSH EBX                            ; 004fc603
    MOV byte ptr [EBX + 0x1c],AL        ; 004fc604
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0 ; 004fc607
        ;   XREF to: 0045e9c0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 004fc60c
    PUSH EBX                            ; 004fc60f
    MOV EDX,dword ptr [0x00622c18]      ; 004fc610 | g_CDemonSetPtr
    PUSH EDX                            ; 004fc616
    MOV dword ptr [EBX + 0x20],0x0      ; 004fc617
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960 ; 004fc61e
        ;   XREF to: 00551960 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 004fc623
    ADD ESP,0x4                         ; 004fc626
    POP ESI                             ; 004fc629
    POP EBX                             ; 004fc62a
    RET                                 ; 004fc62b

