; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dfilter.cpp_CDemonFilter_init_FUN_004705a0(CDemonFilter * this_ptr, float init_value, int flags)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   init_value
; int              Stack[0xc]:4   flags
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 at 00470155
;   core_main.c_initializeGameSystems_FUN_00507a60 at 005081a8
;
; Referenced Globals:
;   double g_FilterIntensityScale1 = 256
;   double g_FilterIntensityScale2 = 0.25
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004705a0
        ;   Label: core_dfilter.cpp_CDemonFilter_init_FUN_004705a0
    PUSH ESI                            ; 004705a1
    PUSH EDI                            ; 004705a2
    PUSH EBP                            ; 004705a3
    MOV EBP,ESP                         ; 004705a4
    SUB ESP,0x14                        ; 004705a6
    AND ESP,0xfffffff8                  ; 004705a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004705ac
    CMP dword ptr [EBP + 0x1c],0x0      ; 004705af
    JZ 0x00470687                       ; 004705b3 | LAB_00470687
        ;   XREF to: 00470687 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EBX + 0x4]       ; 004705b9
        ;   Label: LAB_004705b9
    XOR EDI,EDI                         ; 004705bc
    TEST ECX,ECX                        ; 004705be
    JLE 0x00470680                      ; 004705c0 | LAB_00470680
        ;   XREF to: 00470680 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 004705c6
        ;   Label: LAB_004705c6
    XOR ECX,ECX                         ; 004705c8
    TEST EAX,EAX                        ; 004705ca
    JLE 0x00470676                      ; 004705cc | LAB_00470676
        ;   XREF to: 00470676 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 004705d2
        ;   Label: LAB_004705d2
    MOV EDX,EAX                         ; 004705d4
    SAR EDX,0x1f                        ; 004705d6
    SUB EAX,EDX                         ; 004705d9
    SAR EAX,0x1                         ; 004705db
    MOV ESI,EAX                         ; 004705dd
    SUB EAX,ECX                         ; 004705df
    MOV dword ptr [ESP + 0xc],EAX       ; 004705e1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004705e5
    MOV EDX,EAX                         ; 004705e8
    SAR EDX,0x1f                        ; 004705ea
    SUB EAX,EDX                         ; 004705ed
    SAR EAX,0x1                         ; 004705ef
    FILD dword ptr [ESP + 0xc]          ; 004705f1
    FMUL ST0                            ; 004705f5
    SUB EAX,EDI                         ; 004705f7
    MOV dword ptr [ESP + 0xc],EAX       ; 004705f9
    FILD dword ptr [ESP + 0xc]          ; 004705fd
    FMUL ST0                            ; 00470601
    FADDP                               ; 00470603
    FSQRT                               ; 00470605
    MOV dword ptr [ESP + 0xc],ESI       ; 00470607
    FILD dword ptr [ESP + 0xc]          ; 0047060b
    FXCH                                ; 0047060f
    FSTP float ptr [ESP]                ; 00470611
    FDIVR float ptr [ESP]               ; 00470614
    FST float ptr [ESP]                 ; 00470617
    FLD1                                ; 0047061a
    FCOMPP                              ; 0047061c
    FNSTSW AX                           ; 0047061e
    SAHF                                ; 00470620
    JC 0x00470695                       ; 00470621 | LAB_00470695
        ;   XREF to: 00470695 (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00470623
        ;   Label: LAB_00470623
    FLD1                                ; 00470626
    FSUBRP                              ; 00470628
    FMUL float ptr [EBP + 0x18]         ; 0047062a
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0047062d
    FSTP float ptr [ESP]                ; 00470630
    TEST EDX,EDX                        ; 00470633
    JNZ 0x0047069e                      ; 00470635 | LAB_0047069e
        ;   XREF to: 0047069e (CONDITIONAL_JUMP)
    FLD float ptr [ESP]                 ; 00470637
    FMUL double ptr [0x0061e766]        ; 0047063a | double g_FilterIntensityScale1
    FMUL double ptr [0x0061e76e]        ; 00470640 | double g_FilterIntensityScale2
    CALL crt_math.c_round_FUN_005fe6b0  ; 00470646 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   Label: LAB_00470646
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0xc]         ; 0047064b
    MOV AL,byte ptr [ESP + 0xc]         ; 0047064f
    MOVZX ESI,AL                        ; 00470653
    CMP ESI,0x3f                        ; 00470656
    JLE 0x0047065d                      ; 00470659 | LAB_0047065d
        ;   XREF to: 0047065d (CONDITIONAL_JUMP)
    MOV AL,0x3f                         ; 0047065b
    MOV ESI,dword ptr [EBX]             ; 0047065d
        ;   Label: LAB_0047065d
    IMUL ESI,EDI                        ; 0047065f
    MOV EDX,dword ptr [EBX + 0x48]      ; 00470662
    ADD ESI,ECX                         ; 00470665
    ADD ESI,EDX                         ; 00470667
    MOV byte ptr [ESI],AL               ; 00470669
    INC ECX                             ; 0047066b
    MOV ESI,dword ptr [EBX]             ; 0047066c
    CMP ECX,ESI                         ; 0047066e
    JL 0x004705d2                       ; 00470670 | LAB_004705d2
        ;   XREF to: 004705d2 (CONDITIONAL_JUMP)
    INC EDI                             ; 00470676
        ;   Label: LAB_00470676
    CMP EDI,dword ptr [EBX + 0x4]       ; 00470677
    JL 0x004705c6                       ; 0047067a | LAB_004705c6
        ;   XREF to: 004705c6 (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 00470680
        ;   Label: LAB_00470680
    POP EBP                             ; 00470682
    POP EDI                             ; 00470683
    POP ESI                             ; 00470684
    POP EBX                             ; 00470685
    RET                                 ; 00470686
    PUSH EBX                            ; 00470687
        ;   Label: LAB_00470687
    CALL core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260 ; 00470688 | void core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00470260(CDemonFilter * this_ptr)
        ;   XREF to: 00470260 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0047068d
    JMP 0x004705b9                      ; 00470690 | LAB_004705b9
        ;   XREF to: 004705b9 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP],0x3f800000      ; 00470695
        ;   Label: LAB_00470695
    JMP 0x00470623                      ; 0047069c | LAB_00470623
        ;   XREF to: 00470623 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX]             ; 0047069e
        ;   Label: LAB_0047069e
    IMUL EAX,EDI                        ; 004706a0
    MOV ESI,dword ptr [EBX + 0x48]      ; 004706a3
    ADD EAX,ECX                         ; 004706a6
    ADD ESI,EAX                         ; 004706a8
    XOR EAX,EAX                         ; 004706aa
    MOV AL,byte ptr [ESI]               ; 004706ac
    MOV dword ptr [ESP + 0x10],EAX      ; 004706ae
    FILD word ptr [ESP + 0x10]          ; 004706b2
    FMUL float ptr [ESP]                ; 004706b6
    JMP 0x00470646                      ; 004706b9 | LAB_00470646
        ;   XREF to: 00470646 (UNCONDITIONAL_JUMP)

