; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setGamma_FUN_0050e400(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049dce1
;   core_game.cpp_FUN_0049f930 at 0049fcad
;
; Referenced Globals:
;   double DOUBLE_00590872 = 0.0000152587890625
;   double DOUBLE_0059087a = 65536
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70
;   crt_math.c_pow_FUN_00565ad6
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050e400
        ;   Label: core_set.cpp_CDemonSet_setGamma_FUN_0050e400
    PUSH EBP                            ; 0050e401
    MOV EBP,ESP                         ; 0050e402
    SUB ESP,0xc                         ; 0050e404
    AND ESP,0xfffffff8                  ; 0050e407
    MOV EDX,dword ptr [EBP + 0x10]      ; 0050e40a
    PUSH EDX                            ; 0050e40d
    PUSH 0x1fb8508                      ; 0050e40e
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70 ; 0050e413
        ;   XREF to: 00447a70 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70()
    ADD ESP,0x8                         ; 0050e418
    MOV EAX,dword ptr [EBP + 0x10]      ; 0050e41b
    MOV dword ptr [ESP + 0x8],EAX       ; 0050e41e
    FILD dword ptr [ESP + 0x8]          ; 0050e422
    FMUL double ptr [0x00590872]        ; 0050e426 | DOUBLE_00590872
    MOV ESI,0x100                       ; 0050e42c
    XOR EDX,EDX                         ; 0050e431
    XOR ECX,ECX                         ; 0050e433
    FSTP float ptr [ESP]                ; 0050e435
    MOV dword ptr [ESP + 0x8],EDX       ; 0050e438
        ;   Label: LAB_0050e438
    FILD dword ptr [ESP + 0x8]          ; 0050e43c
    FMUL double ptr [0x00590872]        ; 0050e440 | DOUBLE_00590872
    FLD float ptr [ESP]                 ; 0050e446
    FXCH                                ; 0050e449
    CALL crt_math.c_pow_FUN_00565ad6    ; 0050e44b
        ;   XREF to: 00565ad6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_pow_FUN_00565ad6()
    FMUL double ptr [0x0059087a]        ; 0050e450 | DOUBLE_0059087a
    CALL crt_math.c_round_FUN_00563a30  ; 0050e456
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x4]         ; 0050e45b
    CMP dword ptr [ESP + 0x4],0x100     ; 0050e45f
    JL 0x0050e484                       ; 0050e467
        ;   XREF to: 0050e484 (CONDITIONAL_JUMP)  ; LAB_0050e484
    ADD ECX,0x4                         ; 0050e469
        ;   Label: LAB_0050e469
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050e46c
    INC EDX                             ; 0050e470
    MOV dword ptr [ECX + 0x1fbb05c],EAX ; 0050e471
    CMP EDX,0x10000                     ; 0050e477
    JL 0x0050e438                       ; 0050e47d
        ;   XREF to: 0050e438 (CONDITIONAL_JUMP)  ; LAB_0050e438
    MOV ESP,EBP                         ; 0050e47f
    POP EBP                             ; 0050e481
    POP ESI                             ; 0050e482
    RET                                 ; 0050e483
    MOV dword ptr [ESP + 0x4],ESI       ; 0050e484
        ;   Label: LAB_0050e484
    JMP 0x0050e469                      ; 0050e488
        ;   XREF to: 0050e469 (UNCONDITIONAL_JUMP)  ; LAB_0050e469

