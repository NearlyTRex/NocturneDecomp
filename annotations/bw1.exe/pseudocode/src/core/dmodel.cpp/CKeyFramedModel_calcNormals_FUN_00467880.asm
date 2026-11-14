; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel *this_ptr)
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
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_004668a0 at 004669a1
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d95e4
;   TerminatedCString s_CKeyFramedModel_calcNorm_005d95f7
;   undefined4 DAT_005d963c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467880
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880
    PUSH ESI                            ; 00467881
    PUSH EDI                            ; 00467882
    PUSH EBP                            ; 00467883
    MOV EBP,ESP                         ; 00467884
    SUB ESP,0x30                        ; 00467886
    AND ESP,0xfffffff8                  ; 00467889
    MOV EDI,dword ptr [EBP + 0x14]      ; 0046788c
    CMP dword ptr [EDI + 0x100],0x1     ; 0046788f
    JNZ 0x004679b8                      ; 00467896
        ;   XREF to: 004679b8 (CONDITIONAL_JUMP)  ; LAB_004679b8
    CMP dword ptr [EDI + 0x108],0x0     ; 0046789c
    JZ 0x004679bf                       ; 004678a3
        ;   XREF to: 004679bf (CONDITIONAL_JUMP)  ; LAB_004679bf
    MOV EDX,dword ptr [EDI + 0x104]     ; 004678a9
        ;   Label: LAB_004678a9
    LEA EAX,[EDX*0x4 + 0x0]             ; 004678af
    SUB EAX,EDX                         ; 004678b6
    SHL EAX,0x2                         ; 004678b8
    PUSH EAX                            ; 004678bb
    PUSH 0x0                            ; 004678bc
    MOV EAX,dword ptr [EDI + 0x108]     ; 004678be
    PUSH EAX                            ; 004678c4
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004678c5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004678ca
    XOR EDX,EDX                         ; 004678cd
    MOV ECX,dword ptr [EDI + 0x110]     ; 004678cf
    MOV dword ptr [ESP + 0x2c],EDX      ; 004678d5
    TEST ECX,ECX                        ; 004678d9
    JLE 0x0046794e                      ; 004678db
        ;   XREF to: 0046794e (CONDITIONAL_JUMP)  ; LAB_0046794e
    MOV dword ptr [ESP + 0x28],EDX      ; 004678dd
    MOV ESI,dword ptr [ESP + 0x28]      ; 004678e1
        ;   Label: LAB_004678e1
    MOV EBX,dword ptr [EDI + 0x114]     ; 004678e5
    ADD EBX,ESI                         ; 004678eb
    PUSH EBX                            ; 004678ed
    MOV EAX,dword ptr [EDI + 0x10c]     ; 004678ee
    PUSH EAX                            ; 004678f4
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0 ; 004678f5
        ;   XREF to: 004fc9c0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004fc9c0(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    ADD ESP,0x8                         ; 004678fa
    MOV ECX,dword ptr [EBX + 0x4]       ; 004678fd
    XOR EDX,EDX                         ; 00467900
    TEST ECX,ECX                        ; 00467902
    JLE 0x00467930                      ; 00467904
        ;   XREF to: 00467930 (CONDITIONAL_JUMP)  ; LAB_00467930
    MOV ECX,EBX                         ; 00467906
    IMUL ESI,dword ptr [ECX + 0x18],0xc ; 00467908
        ;   Label: LAB_00467908
    MOV EAX,dword ptr [EDI + 0x108]     ; 0046790c
    ADD EAX,ESI                         ; 00467912
    MOV ESI,dword ptr [EBX + 0x8]       ; 00467914
    ADD dword ptr [EAX],ESI             ; 00467917
    MOV ESI,dword ptr [EBX + 0xc]       ; 00467919
    ADD dword ptr [EAX + 0x4],ESI       ; 0046791c
    MOV ESI,dword ptr [EBX + 0x10]      ; 0046791f
    ADD dword ptr [EAX + 0x8],ESI       ; 00467922
    INC EDX                             ; 00467925
    MOV ESI,dword ptr [EBX + 0x4]       ; 00467926
    ADD ECX,0xc                         ; 00467929
    CMP EDX,ESI                         ; 0046792c
    JL 0x00467908                       ; 0046792e
        ;   XREF to: 00467908 (CONDITIONAL_JUMP)  ; LAB_00467908
    MOV EBX,dword ptr [ESP + 0x28]      ; 00467930
        ;   Label: LAB_00467930
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00467934
    MOV EDX,dword ptr [EDI + 0x110]     ; 00467938
    ADD EBX,0x48                        ; 0046793e
    INC ESI                             ; 00467941
    MOV dword ptr [ESP + 0x28],EBX      ; 00467942
    MOV dword ptr [ESP + 0x2c],ESI      ; 00467946
    CMP ESI,EDX                         ; 0046794a
    JL 0x004678e1                       ; 0046794c
        ;   XREF to: 004678e1 (CONDITIONAL_JUMP)  ; LAB_004678e1
    MOV ECX,dword ptr [EDI + 0x104]     ; 0046794e
        ;   Label: LAB_0046794e
    XOR EBX,EBX                         ; 00467954
    TEST ECX,ECX                        ; 00467956
    JLE 0x004679b8                      ; 00467958
        ;   XREF to: 004679b8 (CONDITIONAL_JUMP)  ; LAB_004679b8
    XOR ECX,ECX                         ; 0046795a
    MOV EDX,dword ptr [EDI + 0x108]     ; 0046795c
        ;   Label: LAB_0046795c
    ADD EDX,ECX                         ; 00467962
    FILD dword ptr [EDX]                ; 00467964
    FST double ptr [ESP + 0x8]          ; 00467966
    FMUL double ptr [ESP + 0x8]         ; 0046796a
    FILD dword ptr [EDX + 0x4]          ; 0046796e
    FST double ptr [ESP + 0x18]         ; 00467971
    FMUL double ptr [ESP + 0x18]        ; 00467975
    FILD dword ptr [EDX + 0x8]          ; 00467979
    FXCH                                ; 0046797c
    FADDP ST2,ST0                       ; 0046797e
    FST double ptr [ESP + 0x10]         ; 00467980
    FMUL double ptr [ESP + 0x10]        ; 00467984
    FADDP                               ; 00467988
    FSQRT                               ; 0046798a
    FLDZ                                ; 0046798c
    FXCH                                ; 0046798e
    FSTP double ptr [ESP]               ; 00467990
    FCOMP double ptr [ESP]              ; 00467993
    FNSTSW AX                           ; 00467996
    SAHF                                ; 00467998
    JC 0x004679e7                       ; 00467999
        ;   XREF to: 004679e7 (CONDITIONAL_JUMP)  ; LAB_004679e7
    MOV dword ptr [EDX + 0x8],0x0       ; 0046799b
    MOV EAX,dword ptr [EDX + 0x8]       ; 004679a2
    MOV dword ptr [EDX + 0x4],EAX       ; 004679a5
    MOV dword ptr [EDX],EAX             ; 004679a8
    INC EBX                             ; 004679aa
        ;   Label: LAB_004679aa
    MOV ESI,dword ptr [EDI + 0x104]     ; 004679ab
    ADD ECX,0xc                         ; 004679b1
    CMP EBX,ESI                         ; 004679b4
    JL 0x0046795c                       ; 004679b6
        ;   XREF to: 0046795c (CONDITIONAL_JUMP)  ; LAB_0046795c
    MOV ESP,EBP                         ; 004679b8
        ;   Label: LAB_004679b8
    POP EBP                             ; 004679ba
    POP EDI                             ; 004679bb
    POP ESI                             ; 004679bc
    POP EBX                             ; 004679bd
    RET                                 ; 004679be
    MOV EBX,0x5d95e4                    ; 004679bf | = "..\\core\\dmodel.cpp"
        ;   Label: LAB_004679bf
    MOV ESI,0x2f1                       ; 004679c4
    PUSH 0x5d95f7                       ; 004679c9 | = "CKeyFramedModel::calcNormals() - vert..."
    MOV dword ptr [0x01d1d400],EBX      ; 004679ce | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004679d4 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004679da
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004679df
    JMP 0x004678a9                      ; 004679e2
        ;   XREF to: 004678a9 (UNCONDITIONAL_JUMP)  ; LAB_004678a9
    FLD double ptr [ESP + 0x8]          ; 004679e7
        ;   Label: LAB_004679e7
    FLD double ptr [0x005d963c]         ; 004679eb | DAT_005d963c
    FDIV double ptr [ESP]               ; 004679f1
    FXCH                                ; 004679f4
    FMUL ST1                            ; 004679f6
    FLD double ptr [ESP + 0x18]         ; 004679f8
    FMUL ST2                            ; 004679fc
    FLD double ptr [ESP + 0x10]         ; 004679fe
    FMULP ST3                           ; 00467a02
    FXCH                                ; 00467a04
    CALL crt_math.c_round_FUN_005c03a0  ; 00467a06
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00467a0b
    CALL crt_math.c_round_FUN_005c03a0  ; 00467a0d
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 00467a12
    CALL crt_math.c_round_FUN_005c03a0  ; 00467a14
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00467a19
    FISTP dword ptr [EDX]               ; 00467a1b
    FXCH                                ; 00467a1d
    FISTP dword ptr [EDX + 0x4]         ; 00467a1f
    FISTP dword ptr [EDX + 0x8]         ; 00467a22
    JMP 0x004679aa                      ; 00467a25
        ;   XREF to: 004679aa (UNCONDITIONAL_JUMP)  ; LAB_004679aa

