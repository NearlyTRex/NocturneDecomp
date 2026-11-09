; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dskybox_cpp_generateSkyDomeVertex_FUN_004867c0(undefined4 *param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dskybox.cpp_FUN_00486900 at 00486c49
;
; Referenced Globals:
;   undefined4 DAT_005db6f8
;   undefined4 DAT_005db6fc
;   undefined4 DAT_005db704
;   undefined4 DAT_005db70c
;   undefined4 DAT_005db714
;   undefined4 DAT_005db71c
;   undefined4 DAT_00612560
;   undefined4 DAT_006144d4
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004867c0
        ;   Label: core_dskybox.cpp_generateSkyDomeVertex_FUN_004867c0
    PUSH ESI                            ; 004867c1
    PUSH EDI                            ; 004867c2
    PUSH EBP                            ; 004867c3
    MOV EBP,ESP                         ; 004867c4
    SUB ESP,0x34                        ; 004867c6
    AND ESP,0xfffffff8                  ; 004867c9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004867cc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004867cf
    MOV EDX,dword ptr [EBP + 0x18]      ; 004867d2
    MOV dword ptr [ESP + 0x30],EDX      ; 004867d5
    FILD dword ptr [ESP + 0x30]         ; 004867d9
    FMUL float ptr [0x005db6f8]         ; 004867dd | DAT_005db6f8
    FMUL float ptr [0x005db6fc]         ; 004867e3 | DAT_005db6fc
    FMUL double ptr [0x005db704]        ; 004867e9 | DAT_005db704
    FSTP float ptr [ESP + 0x2c]         ; 004867ef
    TEST EAX,EAX                        ; 004867f3
    JNZ 0x004868d9                      ; 004867f5
        ;   XREF to: 004868d9 (CONDITIONAL_JUMP)  ; LAB_004868d9
    MOV dword ptr [ESP],0x3ca0d97c      ; 004867fb
    FLD float ptr [ESP]                 ; 00486802
        ;   Label: LAB_00486802
    FLD ST0                             ; 00486805
    FSIN                                ; 00486807
    FLD float ptr [ESP + 0x2c]          ; 00486809
    FADD float ptr [EDI + 0x1c]         ; 0048680d
    FLD ST0                             ; 00486810
    FSIN                                ; 00486812
    FXCH ST3                            ; 00486814
    FCOS                                ; 00486816
    FXCH                                ; 00486818
    FCOS                                ; 0048681a
    FLD float ptr [0x006144d4]          ; 0048681c | DAT_006144d4
    FXCH ST4                            ; 00486822
    FMUL ST4                            ; 00486824
    FXCH ST2                            ; 00486826
    FSTP double ptr [ESP + 0x18]        ; 00486828
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048682c
    FMUL ST3                            ; 00486830
    MOV dword ptr [ESP + 0x10],EAX      ; 00486832
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00486836
    FXCH ST2                            ; 0048683a
    FMULP ST3                           ; 0048683c
    MOV dword ptr [ESP + 0x14],EAX      ; 0048683e
    FLD ST0                             ; 00486842
    FMUL double ptr [ESP + 0x10]        ; 00486844
    FLD ST2                             ; 00486848
    FMUL double ptr [ESP + 0x10]        ; 0048684a
    FXCH ST4                            ; 0048684e
    FLD double ptr [0x005db71c]         ; 00486850 | DAT_005db71c
    FXCH                                ; 00486856
    FMUL ST1                            ; 00486858
    FXCH ST2                            ; 0048685a
    FSTP ST3                            ; 0048685c
    FXCH ST2                            ; 0048685e
    FMUL ST2                            ; 00486860
    FXCH ST4                            ; 00486862
    FSTP ST3                            ; 00486864
    FXCH ST2                            ; 00486866
    FMULP                               ; 00486868
    MOV ESI,dword ptr [EBP + 0x20]      ; 0048686a
    LEA EAX,[ESP + 0x4]                 ; 0048686d
    MOV EDX,dword ptr [0x00612560]      ; 00486871 | DAT_00612560
    PUSH EAX                            ; 00486877
    FXCH                                ; 00486878
    CALL crt_math.c_round_FUN_005c03a0  ; 0048687a
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    LEA EAX,[ESI*0x4 + 0x0]             ; 0048687f
    FISTP dword ptr [ESP + 0xc]         ; 00486886
    SUB EAX,ESI                         ; 0048688a
    FXCH                                ; 0048688c
    CALL crt_math.c_round_FUN_005c03a0  ; 0048688e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00486893
    CALL crt_math.c_round_FUN_005c03a0  ; 00486895
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048689a
    FISTP dword ptr [ESP + 0x8]         ; 0048689c
    MOV ESI,EAX                         ; 004868a0
    FISTP dword ptr [ESP + 0x10]        ; 004868a2
    SHL ESI,0x4                         ; 004868a6
    MOV EAX,dword ptr [EDX]             ; 004868a9
    ADD EAX,ESI                         ; 004868ab
    PUSH EAX                            ; 004868ad
    CALL engine_special.cpp_FUN_00580173 ; 004868ae
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EAX,dword ptr [EDI]             ; 004868b3
    MOV dword ptr [ESI + 0x629034],EAX  ; 004868b5 | DAT_00629034
    MOV dword ptr [ESI + 0x629038],EAX  ; 004868bb | DAT_00629038
    XOR ECX,ECX                         ; 004868c1
    MOV dword ptr [ESI + 0x62903c],EAX  ; 004868c3 | DAT_0062903c
    ADD ESP,0x8                         ; 004868c9
    MOV dword ptr [ESI + 0x629040],ECX  ; 004868cc | DAT_00629040
    MOV ESP,EBP                         ; 004868d2
    POP EBP                             ; 004868d4
    POP EDI                             ; 004868d5
    POP ESI                             ; 004868d6
    POP EBX                             ; 004868d7
    RET                                 ; 004868d8
    MOV dword ptr [ESP + 0x30],EAX      ; 004868d9
        ;   Label: LAB_004868d9
    FILD dword ptr [ESP + 0x30]         ; 004868dd
    FMUL float ptr [0x005db70c]         ; 004868e1 | DAT_005db70c
    FMUL float ptr [0x005db6fc]         ; 004868e7 | DAT_005db6fc
    FMUL double ptr [0x005db714]        ; 004868ed | DAT_005db714
    FSTP float ptr [ESP]                ; 004868f3
    JMP 0x00486802                      ; 004868f6
        ;   XREF to: 00486802 (UNCONDITIONAL_JUMP)  ; LAB_00486802

