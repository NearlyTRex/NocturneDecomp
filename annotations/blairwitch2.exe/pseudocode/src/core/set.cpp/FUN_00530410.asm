; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00530410(CDemonSet *param_1)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f626
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   undefined4 g_CGameInstance.field580_0x244
;   undefined4 DAT_01cedef4
;   CDemonSet g_CDemonSetInstance
;   undefined4 DAT_0200a3a4
;
; Called Functions:
;   core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0
;   core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980
;   core_set.cpp_FUN_005341b0
;   core_set.cpp_FUN_005344c0
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530410
        ;   Label: core_set.cpp_FUN_00530410
    PUSH ESI                            ; 00530411
    PUSH EDI                            ; 00530412
    PUSH EBP                            ; 00530413
    SUB ESP,0x50                        ; 00530414
    MOV EBP,dword ptr [ESP + 0x64]      ; 00530417
    MOV EAX,[0x00616494]                ; 0053041b | g_CGamePtr
    XOR EDX,EDX                         ; 00530420
    MOV ECX,dword ptr [EAX + 0x244]     ; 00530422 | g_CGameInstance.field580_0x244
    MOV dword ptr [0x0200a3a4],EDX      ; 00530428 | DAT_0200a3a4
    TEST ECX,ECX                        ; 0053042e
    JNZ 0x0053045b                      ; 00530430
        ;   XREF to: 0053045b (CONDITIONAL_JUMP)  ; LAB_0053045b
    MOV EAX,[0x01cedef4]                ; 00530432 | DAT_01cedef4
    SHL EAX,0x2                         ; 00530437
    MOV EBX,dword ptr [EAX + 0x1cedee4] ; 0053043a
    TEST EBX,EBX                        ; 00530440
    JZ 0x0053045b                       ; 00530442
        ;   XREF to: 0053045b (CONDITIONAL_JUMP)  ; LAB_0053045b
    MOV ESI,dword ptr [EBX + 0x255f0]   ; 00530444
    MOV EAX,EBX                         ; 0053044a
    TEST ESI,ESI                        ; 0053044c
    JZ 0x0053045b                       ; 0053044e
        ;   XREF to: 0053045b (CONDITIONAL_JUMP)  ; LAB_0053045b
    MOV EAX,dword ptr [EBX + 0x255f8]   ; 00530450
    MOV [0x0200a3a4],EAX                ; 00530456 | DAT_0200a3a4
    MOV EAX,dword ptr [EBP + 0x15f6f8]  ; 0053045b
        ;   Label: LAB_0053045b
    DEC EAX                             ; 00530461
    MOV dword ptr [ESP + 0x48],EAX      ; 00530462
    TEST EAX,EAX                        ; 00530466
    JL 0x005304a5                       ; 00530468
        ;   XREF to: 005304a5 (CONDITIONAL_JUMP)  ; LAB_005304a5
    SHL EAX,0x2                         ; 0053046a
    ADD EAX,EBP                         ; 0053046d
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053046f
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00530473
        ;   Label: LAB_00530473
    MOV EBX,dword ptr [EBX + 0x15f6fc]  ; 00530477
    CMP dword ptr [EBX + 0xfc],0x0      ; 0053047d
    JNZ 0x005304ad                      ; 00530484
        ;   XREF to: 005304ad (CONDITIONAL_JUMP)  ; LAB_005304ad
    AND byte ptr [EBX + 0x144],0xf7     ; 00530486
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053048d
        ;   Label: LAB_0053048d
    MOV EDX,dword ptr [ESP + 0x48]      ; 00530491
    SUB EAX,0x4                         ; 00530495
    DEC EDX                             ; 00530498
    MOV dword ptr [ESP + 0x4c],EAX      ; 00530499
    MOV dword ptr [ESP + 0x48],EDX      ; 0053049d
    TEST EDX,EDX                        ; 005304a1
    JGE 0x00530473                      ; 005304a3
        ;   XREF to: 00530473 (CONDITIONAL_JUMP)  ; LAB_00530473
    ADD ESP,0x50                        ; 005304a5
        ;   Label: LAB_005304a5
    POP EBP                             ; 005304a8
    POP EDI                             ; 005304a9
    POP ESI                             ; 005304aa
    POP EBX                             ; 005304ab
    RET                                 ; 005304ac
    PUSH EBX                            ; 005304ad
        ;   Label: LAB_005304ad
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005304ae
    LEA ESI,[ESP + 0x34]                ; 005304b4
    LEA EDI,[ESP + 0x4]                 ; 005304b8
    CALL dword ptr [EAX + 0x24]         ; 005304bc
    MOV ECX,0x6                         ; 005304bf
    LEA ESI,[ESP + 0x34]                ; 005304c4
    ADD ESP,0x4                         ; 005304c8
    MOVSD.REP ES:EDI,ESI                ; 005304cb
    LEA EDX,[ESP + 0x18]                ; 005304cd
    MOV ECX,ESP                         ; 005304d1
    CMP EDX,ECX                         ; 005304d3
    JZ 0x005304ee                       ; 005304d5
        ;   XREF to: 005304ee (CONDITIONAL_JUMP)  ; LAB_005304ee
    MOV EAX,dword ptr [ESP]             ; 005304d7
    MOV dword ptr [ESP + 0x18],EAX      ; 005304da
    MOV EAX,dword ptr [ESP + 0x4]       ; 005304de
    MOV dword ptr [ESP + 0x1c],EAX      ; 005304e2
    MOV EAX,dword ptr [ESP + 0x8]       ; 005304e6
    MOV dword ptr [ESP + 0x20],EAX      ; 005304ea
    LEA EAX,[ESP + 0x24]                ; 005304ee
        ;   Label: LAB_005304ee
    LEA EDX,[ECX + 0xc]                 ; 005304f2
    CMP EAX,EDX                         ; 005304f5
    JZ 0x0053050d                       ; 005304f7
        ;   XREF to: 0053050d (CONDITIONAL_JUMP)  ; LAB_0053050d
    MOV EAX,dword ptr [EDX]             ; 005304f9
    MOV dword ptr [ESP + 0x24],EAX      ; 005304fb
    MOV EAX,dword ptr [EDX + 0x4]       ; 005304ff
    MOV dword ptr [ESP + 0x28],EAX      ; 00530502
    MOV EAX,dword ptr [EDX + 0x8]       ; 00530506
    MOV dword ptr [ESP + 0x2c],EAX      ; 00530509
    LEA EAX,[EBX + 0x3c]                ; 0053050d
        ;   Label: LAB_0053050d
    PUSH EAX                            ; 00530510
    LEA EAX,[ESP + 0x28]                ; 00530511
    PUSH EAX                            ; 00530515
    LEA EAX,[ESP + 0x20]                ; 00530516
    PUSH EAX                            ; 0053051a
    LEA EAX,[EBX + 0x30]                ; 0053051b
    PUSH EAX                            ; 0053051e
    LEA EAX,[EBX + 0x20]                ; 0053051f
    PUSH EAX                            ; 00530522
    PUSH EBP                            ; 00530523
    CALL core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980 ; 00530524
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setLightingParameters_FUN_00530980(CDemonSet * this_ptr, CVector3f * position, UOrientationVector * orientation, CVector3f * aabb_min, ...)
    MOV EAX,[0x0200a3a4]                ; 00530529 | DAT_0200a3a4
    ADD ESP,0x18                        ; 0053052e
    MOV ESI,dword ptr [EBX + 0x108]     ; 00530531
    MOV ECX,dword ptr [EBX + 0x10c]     ; 00530537
    MOV EDI,dword ptr [EBX + 0x110]     ; 0053053d
    CMP EBX,EAX                         ; 00530543
    JNZ 0x00530571                      ; 00530545
        ;   XREF to: 00530571 (CONDITIONAL_JUMP)  ; LAB_00530571
    LEA EDX,[ESI + ESI*0x2]             ; 00530547
    MOV EAX,EDX                         ; 0053054a
    SAR EDX,0x1f                        ; 0053054c
    SUB EAX,EDX                         ; 0053054f
    SAR EAX,0x1                         ; 00530551
    LEA EDX,[ECX + ECX*0x2]             ; 00530553
    MOV ESI,EAX                         ; 00530556
    MOV EAX,EDX                         ; 00530558
    SAR EDX,0x1f                        ; 0053055a
    SUB EAX,EDX                         ; 0053055d
    SAR EAX,0x1                         ; 0053055f
    LEA EDX,[EDI + EDI*0x2]             ; 00530561
    MOV ECX,EAX                         ; 00530564
    MOV EAX,EDX                         ; 00530566
    SAR EDX,0x1f                        ; 00530568
    SUB EAX,EDX                         ; 0053056b
    SAR EAX,0x1                         ; 0053056d
    MOV EDI,EAX                         ; 0053056f
    PUSH EDI                            ; 00530571
        ;   Label: LAB_00530571
    PUSH ECX                            ; 00530572
    PUSH ESI                            ; 00530573
    MOV EDX,dword ptr [0x0061b5a8]      ; 00530574 | g_CDemonSetPtr
    PUSH EDX                            ; 0053057a | g_CDemonSetInstance
    CALL core_set.cpp_FUN_005344c0      ; 0053057b
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00530580
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00530583
    PUSH EBX                            ; 00530589
    CALL dword ptr [EAX + 0x1c]         ; 0053058a
    ADD ESP,0x4                         ; 0053058d
    TEST EAX,EAX                        ; 00530590
    JZ 0x00530621                       ; 00530592
        ;   XREF to: 00530621 (CONDITIONAL_JUMP)  ; LAB_00530621
    OR byte ptr [EBX + 0x144],0x8       ; 00530598
    PUSH 0x1                            ; 0053059f
        ;   Label: LAB_0053059f
    MOV ECX,dword ptr [0x0060b280]      ; 005305a1 | DAT_0060b280
    PUSH ECX                            ; 005305a7 | DAT_01ba5c50
    XOR ESI,ESI                         ; 005305a8
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005305aa
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    MOV EDI,dword ptr [EBP + 0x15acc8]  ; 005305af
    ADD ESP,0x8                         ; 005305b5
    TEST EDI,EDI                        ; 005305b8
    JLE 0x00530604                      ; 005305ba
        ;   XREF to: 00530604 (CONDITIONAL_JUMP)  ; LAB_00530604
    PUSH 0x0                            ; 005305bc
        ;   Label: LAB_005305bc
    PUSH ESI                            ; 005305be
    PUSH EBP                            ; 005305bf
    CALL core_set.cpp_FUN_005341b0      ; 005305c0
        ;   XREF to: 005341b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005341b0(CDemonSet * this_ptr, int mirror_index, int enable_flag)
    ADD ESP,0xc                         ; 005305c5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005305c8
    PUSH EBX                            ; 005305ce
    CALL dword ptr [EAX + 0x1c]         ; 005305cf
    ADD ESP,0x4                         ; 005305d2
    TEST EAX,EAX                        ; 005305d5
    JZ 0x005305e0                       ; 005305d7
        ;   XREF to: 005305e0 (CONDITIONAL_JUMP)  ; LAB_005305e0
    OR byte ptr [EBX + 0x144],0x8       ; 005305d9
    PUSH 0x1                            ; 005305e0
        ;   Label: LAB_005305e0
    MOV EAX,[0x0060b280]                ; 005305e2 | DAT_0060b280
    PUSH EAX                            ; 005305e7 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 005305e8
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 005305ed
    PUSH EBP                            ; 005305f0
    INC ESI                             ; 005305f1
    CALL core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0 ; 005305f2
        ;   XREF to: 005342e0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_restoreCameraAfterMirror_FUN_005342e0(CDemonSet * this_ptr)
    MOV EDX,dword ptr [EBP + 0x15acc8]  ; 005305f7
    ADD ESP,0x4                         ; 005305fd
    CMP ESI,EDX                         ; 00530600
    JL 0x005305bc                       ; 00530602
        ;   XREF to: 005305bc (CONDITIONAL_JUMP)  ; LAB_005305bc
    PUSH 0x10000                        ; 00530604
        ;   Label: LAB_00530604
    PUSH 0x10000                        ; 00530609
    PUSH 0x10000                        ; 0053060e
    PUSH EBP                            ; 00530613
    CALL core_set.cpp_FUN_005344c0      ; 00530614
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_005344c0(CDemonSet * this_ptr, int light_scale, int color_scale, int fog_scale)
    ADD ESP,0x10                        ; 00530619
    JMP 0x0053048d                      ; 0053061c
        ;   XREF to: 0053048d (UNCONDITIONAL_JUMP)  ; LAB_0053048d
    AND byte ptr [EBX + 0x144],0xf7     ; 00530621
        ;   Label: LAB_00530621
    JMP 0x0053059f                      ; 00530628
        ;   XREF to: 0053059f (UNCONDITIONAL_JUMP)  ; LAB_0053059f

