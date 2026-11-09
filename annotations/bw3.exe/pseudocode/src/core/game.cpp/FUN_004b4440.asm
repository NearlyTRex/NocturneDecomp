; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b4440(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[8]:
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c073a
;   core_game.cpp_FUN_004b6f30 at 004b6fe6
;   core_game.cpp_FUN_004bec20 at 004bf183
;   core_menu.cpp_FUN_004e85a0 at 004e8653
;   core_menu.cpp_FUN_004e8f80 at 004e8fc4
;   core_menu.cpp_FUN_004e94f0 at 004e9539
;   core_menu.cpp_FUN_004ea280 at 004ea2ca
;   core_menu.cpp_FUN_004ea4d0 at 004ea5a7
;
; Referenced Globals:
;   undefined4 DAT_005c21e8
;   undefined4 DAT_005c21f0
;   undefined4 DAT_005c21f8
;   undefined4 DAT_005c2200
;   undefined4 DAT_005fe9e8
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01d22c44
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4440
        ;   Label: core_game.cpp_FUN_004b4440
    PUSH ESI                            ; 004b4441
    PUSH EDI                            ; 004b4442
    PUSH EBP                            ; 004b4443
    MOV EBP,ESP                         ; 004b4444
    SUB ESP,0x8                         ; 004b4446
    AND ESP,0xfffffff8                  ; 004b4449
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b444c
    MOV EDX,dword ptr [EBX + 0x288]     ; 004b444f
    CMP EDX,0x1                         ; 004b4455
    JNZ 0x004b4590                      ; 004b4458
        ;   XREF to: 004b4590 (CONDITIONAL_JUMP)  ; LAB_004b4590
    FLD float ptr [EBX + 0x28c]         ; 004b445e
    FLDZ                                ; 004b4464
    FCOMPP                              ; 004b4466
    FNSTSW AX                           ; 004b4468
    SAHF                                ; 004b446a
    JC 0x004b4477                       ; 004b446b
        ;   XREF to: 004b4477 (CONDITIONAL_JUMP)  ; LAB_004b4477
    MOV dword ptr [EBX + 0x28c],0x3f800000 ; 004b446d
    FLD float ptr [EBX + 0x28c]         ; 004b4477
        ;   Label: LAB_004b4477
    FSUBR double ptr [0x005c21e8]       ; 004b447d | DAT_005c21e8
    FST float ptr [EBX + 0x210]         ; 004b4483
    FST double ptr [ESP]                ; 004b4489
    FCOMP double ptr [0x005c21f0]       ; 004b448c | DAT_005c21f0
    FNSTSW AX                           ; 004b4492
    SAHF                                ; 004b4494
    JNC 0x004b4573                      ; 004b4495
        ;   XREF to: 004b4573 (CONDITIONAL_JUMP)  ; LAB_004b4573
    MOV dword ptr [EBX + 0x210],0x3dcccccd ; 004b449b
    FLD float ptr [EBX + 0x314]         ; 004b44a5
        ;   Label: LAB_004b44a5
    FSUBR float ptr [EBX + 0x28c]       ; 004b44ab
    MOV ESI,dword ptr [EBX + 0x288]     ; 004b44b1
    FSTP float ptr [EBX + 0x28c]        ; 004b44b7
    CMP ESI,0x1                         ; 004b44bd
    JNZ 0x004b44e5                      ; 004b44c0
        ;   XREF to: 004b44e5 (CONDITIONAL_JUMP)  ; LAB_004b44e5
    FLD float ptr [EBX + 0x28c]         ; 004b44c2
    FLDZ                                ; 004b44c8
    FCOMPP                              ; 004b44ca
    FNSTSW AX                           ; 004b44cc
    SAHF                                ; 004b44ce
    JC 0x004b44e5                       ; 004b44cf
        ;   XREF to: 004b44e5 (CONDITIONAL_JUMP)  ; LAB_004b44e5
    MOV dword ptr [EBX + 0x288],0x0     ; 004b44d1
    MOV dword ptr [EBX + 0x210],0x3f800000 ; 004b44db
    CALL wincore_winrun.cpp_FUN_005806a0 ; 004b44e5
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: LAB_004b44e5
    MOV EDX,EAX                         ; 004b44ea
    MOV EDI,dword ptr [EBX + 0x30c]     ; 004b44ec
    MOV ECX,0x12                        ; 004b44f2
    SUB EDX,EDI                         ; 004b44f7
    MOV ESI,EAX                         ; 004b44f9
    MOV EAX,EDX                         ; 004b44fb
    SAR EDX,0x1f                        ; 004b44fd
    IDIV ECX                            ; 004b4500
    MOV dword ptr [EBX + 0x310],EAX     ; 004b4502
    TEST EAX,EAX                        ; 004b4508
    JL 0x004b45a8                       ; 004b450a
        ;   XREF to: 004b45a8 (CONDITIONAL_JUMP)  ; LAB_004b45a8
    MOV EDX,dword ptr [EBX + 0x310]     ; 004b4510
        ;   Label: LAB_004b4510
    MOV dword ptr [EBX + 0x30c],ESI     ; 004b4516
    CMP EDX,0x4000                      ; 004b451c
    JLE 0x004b452e                      ; 004b4522
        ;   XREF to: 004b452e (CONDITIONAL_JUMP)  ; LAB_004b452e
    MOV dword ptr [EBX + 0x310],0x4000  ; 004b4524
    FILD dword ptr [EBX + 0x310]        ; 004b452e
        ;   Label: LAB_004b452e
    FMUL float ptr [EBX + 0x210]        ; 004b4534
    MOV ECX,dword ptr [0x01d22c44]      ; 004b453a | DAT_01d22c44
    CALL crt_math.c_round_FUN_005a3120  ; 004b4540
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0x310]       ; 004b4545
    TEST ECX,ECX                        ; 004b454b
    JNZ 0x004b45b7                      ; 004b454d
        ;   XREF to: 004b45b7 (CONDITIONAL_JUMP)  ; LAB_004b45b7
    FILD dword ptr [EBX + 0x310]        ; 004b454f
        ;   Label: LAB_004b454f
    MOV EAX,dword ptr [EBX + 0x310]     ; 004b4555
    FMUL double ptr [0x005c2200]        ; 004b455b | DAT_005c2200
    MOV [0x01c5fad0],EAX                ; 004b4561 | DAT_01c5fad0
    FSTP float ptr [EBX + 0x314]        ; 004b4566
    MOV ESP,EBP                         ; 004b456c
    POP EBP                             ; 004b456e
    POP EDI                             ; 004b456f
    POP ESI                             ; 004b4570
    POP EBX                             ; 004b4571
    RET                                 ; 004b4572
    FLD1                                ; 004b4573
        ;   Label: LAB_004b4573
    FCOMP double ptr [ESP]              ; 004b4575
    FNSTSW AX                           ; 004b4578
    SAHF                                ; 004b457a
    JNC 0x004b44a5                      ; 004b457b
        ;   XREF to: 004b44a5 (CONDITIONAL_JUMP)  ; LAB_004b44a5
    MOV dword ptr [EBX + 0x210],0x3f800000 ; 004b4581
    JMP 0x004b44a5                      ; 004b458b
        ;   XREF to: 004b44a5 (UNCONDITIONAL_JUMP)  ; LAB_004b44a5
    CMP EDX,0x2                         ; 004b4590
        ;   Label: LAB_004b4590
    JZ 0x004b44a5                       ; 004b4593
        ;   XREF to: 004b44a5 (CONDITIONAL_JUMP)  ; LAB_004b44a5
    MOV dword ptr [EBX + 0x210],0x3f800000 ; 004b4599
    JMP 0x004b44a5                      ; 004b45a3
        ;   XREF to: 004b44a5 (UNCONDITIONAL_JUMP)  ; LAB_004b44a5
    MOV dword ptr [EBX + 0x310],0x0     ; 004b45a8
        ;   Label: LAB_004b45a8
    JMP 0x004b4510                      ; 004b45b2
        ;   XREF to: 004b4510 (UNCONDITIONAL_JUMP)  ; LAB_004b4510
    FLD float ptr [0x005c21f8]          ; 004b45b7 | DAT_005c21f8
        ;   Label: LAB_004b45b7
    FDIV float ptr [0x005fe9e8]         ; 004b45bd | DAT_005fe9e8
    FMUL float ptr [EBX + 0x210]        ; 004b45c3
    CALL crt_math.c_round_FUN_005a3120  ; 004b45c9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [EBX + 0x310]       ; 004b45ce
    JMP 0x004b454f                      ; 004b45d4
        ;   XREF to: 004b454f (UNCONDITIONAL_JUMP)  ; LAB_004b454f

