; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00453620(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x40]:8  local_40
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 00452751
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057cc8e
;   TerminatedCString s_CKeyFramedModel_calcNorm_0057cca1
;   double DOUBLE_0057cce6 = 65535
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_memset_FUN_00563cc0
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453620
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00453620
    PUSH ESI                            ; 00453621
    PUSH EDI                            ; 00453622
    PUSH EBP                            ; 00453623
    MOV EBP,ESP                         ; 00453624
    SUB ESP,0x30                        ; 00453626
    AND ESP,0xfffffff8                  ; 00453629
    MOV EDI,dword ptr [EBP + 0x14]      ; 0045362c
    CMP dword ptr [EDI + 0x100],0x1     ; 0045362f
    JNZ 0x00453758                      ; 00453636
        ;   XREF to: 00453758 (CONDITIONAL_JUMP)  ; LAB_00453758
    CMP dword ptr [EDI + 0x108],0x0     ; 0045363c
    JZ 0x0045375f                       ; 00453643
        ;   XREF to: 0045375f (CONDITIONAL_JUMP)  ; LAB_0045375f
    MOV EDX,dword ptr [EDI + 0x104]     ; 00453649
        ;   Label: LAB_00453649
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045364f
    SUB EAX,EDX                         ; 00453656
    SHL EAX,0x2                         ; 00453658
    PUSH EAX                            ; 0045365b
    PUSH 0x0                            ; 0045365c
    MOV EAX,dword ptr [EDI + 0x108]     ; 0045365e
    PUSH EAX                            ; 00453664
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00453665
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0045366a
    XOR EDX,EDX                         ; 0045366d
    MOV ECX,dword ptr [EDI + 0x110]     ; 0045366f
    MOV dword ptr [ESP + 0x2c],EDX      ; 00453675
    TEST ECX,ECX                        ; 00453679
    JLE 0x004536ee                      ; 0045367b
        ;   XREF to: 004536ee (CONDITIONAL_JUMP)  ; LAB_004536ee
    MOV dword ptr [ESP + 0x28],EDX      ; 0045367d
    MOV ESI,dword ptr [ESP + 0x28]      ; 00453681
        ;   Label: LAB_00453681
    MOV EBX,dword ptr [EDI + 0x114]     ; 00453685
    ADD EBX,ESI                         ; 0045368b
    PUSH EBX                            ; 0045368d
    MOV EAX,dword ptr [EDI + 0x10c]     ; 0045368e
    PUSH EAX                            ; 00453694
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920 ; 00453695
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 0045369a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0045369d
    XOR EDX,EDX                         ; 004536a0
    TEST ECX,ECX                        ; 004536a2
    JLE 0x004536d0                      ; 004536a4
        ;   XREF to: 004536d0 (CONDITIONAL_JUMP)  ; LAB_004536d0
    MOV ECX,EBX                         ; 004536a6
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 004536a8
        ;   Label: LAB_004536a8
    MOV EAX,dword ptr [EDI + 0x108]     ; 004536ac
    ADD EAX,ESI                         ; 004536b2
    MOV ESI,dword ptr [EBX + 0x8]       ; 004536b4
    ADD dword ptr [EAX],ESI             ; 004536b7
    MOV ESI,dword ptr [EBX + 0xc]       ; 004536b9
    ADD dword ptr [EAX + 0x4],ESI       ; 004536bc
    MOV ESI,dword ptr [EBX + 0x10]      ; 004536bf
    ADD dword ptr [EAX + 0x8],ESI       ; 004536c2
    INC EDX                             ; 004536c5
    MOV ESI,dword ptr [EBX + 0x4]       ; 004536c6
    ADD ECX,0xc                         ; 004536c9
    CMP EDX,ESI                         ; 004536cc
    JL 0x004536a8                       ; 004536ce
        ;   XREF to: 004536a8 (CONDITIONAL_JUMP)  ; LAB_004536a8
    MOV EBX,dword ptr [ESP + 0x28]      ; 004536d0
        ;   Label: LAB_004536d0
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004536d4
    MOV EDX,dword ptr [EDI + 0x110]     ; 004536d8
    ADD EBX,0x48                        ; 004536de
    INC ESI                             ; 004536e1
    MOV dword ptr [ESP + 0x28],EBX      ; 004536e2
    MOV dword ptr [ESP + 0x2c],ESI      ; 004536e6
    CMP ESI,EDX                         ; 004536ea
    JL 0x00453681                       ; 004536ec
        ;   XREF to: 00453681 (CONDITIONAL_JUMP)  ; LAB_00453681
    MOV ECX,dword ptr [EDI + 0x104]     ; 004536ee
        ;   Label: LAB_004536ee
    XOR EBX,EBX                         ; 004536f4
    TEST ECX,ECX                        ; 004536f6
    JLE 0x00453758                      ; 004536f8
        ;   XREF to: 00453758 (CONDITIONAL_JUMP)  ; LAB_00453758
    XOR ECX,ECX                         ; 004536fa
    MOV EDX,dword ptr [EDI + 0x108]     ; 004536fc
        ;   Label: LAB_004536fc
    ADD EDX,ECX                         ; 00453702
    FILD dword ptr [EDX]                ; 00453704
    FST double ptr [ESP + 0x8]          ; 00453706
    FMUL double ptr [ESP + 0x8]         ; 0045370a
    FILD dword ptr [EDX + 0x4]          ; 0045370e
    FST double ptr [ESP + 0x18]         ; 00453711
    FMUL double ptr [ESP + 0x18]        ; 00453715
    FILD dword ptr [EDX + 0x8]          ; 00453719
    FXCH                                ; 0045371c
    FADDP ST2,ST0                       ; 0045371e
    FST double ptr [ESP + 0x10]         ; 00453720
    FMUL double ptr [ESP + 0x10]        ; 00453724
    FADDP                               ; 00453728
    FSQRT                               ; 0045372a
    FLDZ                                ; 0045372c
    FXCH                                ; 0045372e
    FSTP double ptr [ESP]               ; 00453730
    FCOMP double ptr [ESP]              ; 00453733
    FNSTSW AX                           ; 00453736
    SAHF                                ; 00453738
    JC 0x00453787                       ; 00453739
        ;   XREF to: 00453787 (CONDITIONAL_JUMP)  ; LAB_00453787
    MOV dword ptr [EDX + 0x8],0x0       ; 0045373b
    MOV EAX,dword ptr [EDX + 0x8]       ; 00453742
    MOV dword ptr [EDX + 0x4],EAX       ; 00453745
    MOV dword ptr [EDX],EAX             ; 00453748
    INC EBX                             ; 0045374a
        ;   Label: LAB_0045374a
    MOV ESI,dword ptr [EDI + 0x104]     ; 0045374b
    ADD ECX,0xc                         ; 00453751
    CMP EBX,ESI                         ; 00453754
    JL 0x004536fc                       ; 00453756
        ;   XREF to: 004536fc (CONDITIONAL_JUMP)  ; LAB_004536fc
    MOV ESP,EBP                         ; 00453758
        ;   Label: LAB_00453758
    POP EBP                             ; 0045375a
    POP EDI                             ; 0045375b
    POP ESI                             ; 0045375c
    POP EBX                             ; 0045375d
    RET                                 ; 0045375e
    MOV EBX,0x57cc8e                    ; 0045375f | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_0045375f
    MOV ESI,0x2f1                       ; 00453764
    PUSH 0x57cca1                       ; 00453769 | = "CKeyFramedModel::calcNormals() - vert..."
    MOV dword ptr [0x01cc4800],EBX      ; 0045376e | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00453774 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0045377a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0045377f
    JMP 0x00453649                      ; 00453782
        ;   XREF to: 00453649 (UNCONDITIONAL_JUMP)  ; LAB_00453649
    FLD double ptr [ESP + 0x8]          ; 00453787
        ;   Label: LAB_00453787
    FLD double ptr [0x0057cce6]         ; 0045378b | DOUBLE_0057cce6
    FDIV double ptr [ESP]               ; 00453791
    FXCH                                ; 00453794
    FMUL ST1                            ; 00453796
    FLD double ptr [ESP + 0x18]         ; 00453798
    FMUL ST2                            ; 0045379c
    FLD double ptr [ESP + 0x10]         ; 0045379e
    FMULP ST3                           ; 004537a2
    FXCH                                ; 004537a4
    CALL crt_math.c_round_FUN_00563a30  ; 004537a6
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004537ab
    CALL crt_math.c_round_FUN_00563a30  ; 004537ad
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004537b2
    CALL crt_math.c_round_FUN_00563a30  ; 004537b4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004537b9
    FISTP dword ptr [EDX]               ; 004537bb
    FXCH                                ; 004537bd
    FISTP dword ptr [EDX + 0x4]         ; 004537bf
    FISTP dword ptr [EDX + 0x8]         ; 004537c2
    JMP 0x0045374a                      ; 004537c5
        ;   XREF to: 0045374a (UNCONDITIONAL_JUMP)  ; LAB_0045374a

