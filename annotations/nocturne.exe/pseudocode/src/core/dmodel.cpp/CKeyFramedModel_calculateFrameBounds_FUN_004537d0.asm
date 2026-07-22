; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_00452650 at 00452721
;
; Referenced Globals:
;   double DOUBLE_0057ccee = 0.00390625
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004537d0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_004537d0
    PUSH ESI                            ; 004537d1
    PUSH EDI                            ; 004537d2
    PUSH EBP                            ; 004537d3
    SUB ESP,0x18                        ; 004537d4
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004537d7
    XOR EDX,EDX                         ; 004537db
    MOV ECX,dword ptr [EBP + 0x100]     ; 004537dd
    MOV dword ptr [ESP + 0x10],EDX      ; 004537e3
    TEST ECX,ECX                        ; 004537e7
    JLE 0x00453928                      ; 004537e9
        ;   XREF to: 00453928 (CONDITIONAL_JUMP)  ; LAB_00453928
    LEA EAX,[EBP + 0x338]               ; 004537ef
    MOV dword ptr [ESP + 0xc],EDX       ; 004537f5
    MOV dword ptr [ESP + 0x14],EAX      ; 004537f9
    MOV EAX,dword ptr [ESP + 0x10]      ; 004537fd
        ;   Label: LAB_004537fd
    IMUL EAX,dword ptr [EBP + 0x104]    ; 00453801
    IMUL EAX,EAX,0xc                    ; 00453808
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045380b
    MOV EDI,dword ptr [EBP + 0x350]     ; 0045380f
    ADD EDI,EBX                         ; 00453815
    MOV EBX,dword ptr [EBP + 0x10c]     ; 00453817
    ADD EBX,EAX                         ; 0045381d
    FLD double ptr [0x0057ccee]         ; 0045381f | DOUBLE_0057ccee
    FILD dword ptr [EBX]                ; 00453825
    FMUL ST1                            ; 00453827
    FSTP float ptr [ESP]                ; 00453829
    FILD dword ptr [EBX + 0x4]          ; 0045382c
    FMUL ST1                            ; 0045382f
    FSTP float ptr [ESP + 0x4]          ; 00453831
    FILD dword ptr [EBX + 0x8]          ; 00453835
    FMULP                               ; 00453838
    MOV ESI,EDI                         ; 0045383a
    MOV EAX,ESP                         ; 0045383c
    FSTP float ptr [ESP + 0x8]          ; 0045383e
    CMP EDI,EAX                         ; 00453842
    JNZ 0x00453930                      ; 00453844
        ;   XREF to: 00453930 (CONDITIONAL_JUMP)  ; LAB_00453930
    MOV EAX,ESP                         ; 0045384a
        ;   Label: LAB_0045384a
    ADD ESI,0xc                         ; 0045384c
    CMP ESI,EAX                         ; 0045384f
    JZ 0x00453866                       ; 00453851
        ;   XREF to: 00453866 (CONDITIONAL_JUMP)  ; LAB_00453866
    MOV EAX,dword ptr [ESP]             ; 00453853
    MOV dword ptr [ESI],EAX             ; 00453856
    MOV EAX,dword ptr [ESP + 0x4]       ; 00453858
    MOV dword ptr [ESI + 0x4],EAX       ; 0045385c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045385f
    MOV dword ptr [ESI + 0x8],EAX       ; 00453863
    MOV ESI,0x1                         ; 00453866
        ;   Label: LAB_00453866
    CMP ESI,dword ptr [EBP + 0x104]     ; 0045386b
    JGE 0x004538b3                      ; 00453871
        ;   XREF to: 004538b3 (CONDITIONAL_JUMP)  ; LAB_004538b3
    FILD dword ptr [EBX + 0xc]          ; 00453873
        ;   Label: LAB_00453873
    FMUL double ptr [0x0057ccee]        ; 00453876 | DOUBLE_0057ccee
    FSTP float ptr [ESP]                ; 0045387c
    FILD dword ptr [EBX + 0x10]         ; 0045387f
    FMUL double ptr [0x0057ccee]        ; 00453882 | DOUBLE_0057ccee
    MOV EAX,ESP                         ; 00453888
    FSTP float ptr [ESP + 0x4]          ; 0045388a
    FILD dword ptr [EBX + 0x14]         ; 0045388e
    FMUL double ptr [0x0057ccee]        ; 00453891 | DOUBLE_0057ccee
    PUSH EAX                            ; 00453897
    ADD EBX,0xc                         ; 00453898
    INC ESI                             ; 0045389b
    PUSH EDI                            ; 0045389c
    FSTP float ptr [ESP + 0x10]         ; 0045389d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 004538a1
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    MOV EDX,dword ptr [EBP + 0x104]     ; 004538a6
    ADD ESP,0x8                         ; 004538ac
    CMP ESI,EDX                         ; 004538af
    JL 0x00453873                       ; 004538b1
        ;   XREF to: 00453873 (CONDITIONAL_JUMP)  ; LAB_00453873
    CMP dword ptr [ESP + 0x10],0x0      ; 004538b3
        ;   Label: LAB_004538b3
    JNZ 0x004538eb                      ; 004538b8
        ;   XREF to: 004538eb (CONDITIONAL_JUMP)  ; LAB_004538eb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004538ba
    MOV EBX,EDI                         ; 004538be
    CMP EDI,EAX                         ; 004538c0
    JZ 0x004538d4                       ; 004538c2
        ;   XREF to: 004538d4 (CONDITIONAL_JUMP)  ; LAB_004538d4
    MOV EDX,dword ptr [EDI]             ; 004538c4
    MOV dword ptr [EAX],EDX             ; 004538c6
    MOV EDX,dword ptr [EDI + 0x4]       ; 004538c8
    MOV dword ptr [EAX + 0x4],EDX       ; 004538cb
    MOV EDX,dword ptr [EDI + 0x8]       ; 004538ce
    MOV dword ptr [EAX + 0x8],EDX       ; 004538d1
    ADD EAX,0xc                         ; 004538d4
        ;   Label: LAB_004538d4
    CMP EAX,EBX                         ; 004538d7
    JZ 0x004538eb                       ; 004538d9
        ;   XREF to: 004538eb (CONDITIONAL_JUMP)  ; LAB_004538eb
    MOV EDX,dword ptr [EBX]             ; 004538db
    MOV dword ptr [EAX],EDX             ; 004538dd
    MOV EDX,dword ptr [EBX + 0x4]       ; 004538df
    MOV dword ptr [EAX + 0x4],EDX       ; 004538e2
    MOV EDX,dword ptr [EBX + 0x8]       ; 004538e5
    MOV dword ptr [EAX + 0x8],EDX       ; 004538e8
    PUSH EDI                            ; 004538eb
        ;   Label: LAB_004538eb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004538ec
    PUSH EBX                            ; 004538f0
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 004538f1
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 004538f6
    ADD EDI,0xc                         ; 004538f9
    PUSH EDI                            ; 004538fc
    PUSH EBX                            ; 004538fd
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00 ; 004538fe
        ;   XREF to: 0041cc00 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_expand_FUN_0041cc00()
    ADD ESP,0x8                         ; 00453903
    MOV EDX,dword ptr [EBP + 0x100]     ; 00453906
    MOV EDI,dword ptr [ESP + 0xc]       ; 0045390c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00453910
    ADD EDI,0x18                        ; 00453914
    INC EAX                             ; 00453917
    MOV dword ptr [ESP + 0xc],EDI       ; 00453918
    MOV dword ptr [ESP + 0x10],EAX      ; 0045391c
    CMP EAX,EDX                         ; 00453920
    JL 0x004537fd                       ; 00453922
        ;   XREF to: 004537fd (CONDITIONAL_JUMP)  ; LAB_004537fd
    ADD ESP,0x18                        ; 00453928
        ;   Label: LAB_00453928
    POP EBP                             ; 0045392b
    POP EDI                             ; 0045392c
    POP ESI                             ; 0045392d
    POP EBX                             ; 0045392e
    RET                                 ; 0045392f
    MOV EAX,dword ptr [ESP]             ; 00453930
        ;   Label: LAB_00453930
    MOV dword ptr [EDI],EAX             ; 00453933
    MOV EAX,dword ptr [ESP + 0x4]       ; 00453935
    MOV dword ptr [EDI + 0x4],EAX       ; 00453939
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045393c
    MOV dword ptr [EDI + 0x8],EAX       ; 00453940
    JMP 0x0045384a                      ; 00453943
        ;   XREF to: 0045384a (UNCONDITIONAL_JUMP)  ; LAB_0045384a

