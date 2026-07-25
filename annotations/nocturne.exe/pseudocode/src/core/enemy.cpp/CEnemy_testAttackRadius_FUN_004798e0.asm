; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)
;
;
; XREF[17]:
;   FUN_00418a00 at 00419106
;   FUN_0041fe40 at 00420387
;   FUN_004a9270 at 004aa9c5
;   FUN_004d4f30 at 004d54e6
;   FUN_004da790 at 004dad9c
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004127c4
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413f46
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043c0bd
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 00454a78
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 00459448
;   ... and 7 more
;
; Referenced Globals:
;   double DOUBLE_0057f33f = 1.20000000000000
;   double DOUBLE_0057f347 = 0.25
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004798e0
        ;   Label: core_enemy.cpp_CEnemy_testAttackRadius_FUN_004798e0
    PUSH ESI                            ; 004798e1
    PUSH EBP                            ; 004798e2
    MOV EBP,ESP                         ; 004798e3
    SUB ESP,0x18                        ; 004798e5
    AND ESP,0xfffffff8                  ; 004798e8
    MOV EAX,dword ptr [EBP + 0x10]      ; 004798eb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004798ee
    MOV EDX,dword ptr [EAX + 0xbca4]    ; 004798f1
    TEST EDX,EDX                        ; 004798f7
    JNZ 0x00479903                      ; 004798f9
        ;   XREF to: 00479903 (CONDITIONAL_JUMP)  ; LAB_00479903
    XOR EAX,EAX                         ; 004798fb
        ;   Label: LAB_004798fb
    MOV ESP,EBP                         ; 004798fd
    POP EBP                             ; 004798ff
    POP ESI                             ; 00479900
    POP EBX                             ; 00479901
    RET                                 ; 00479902
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00479903
        ;   Label: LAB_00479903
    PUSH ECX                            ; 00479906
    PUSH dword ptr [EBP + 0x18]         ; 00479907
    PUSH EBX                            ; 0047990a
    MOV EAX,EDX                         ; 0047990b
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0047990d
    PUSH EAX                            ; 00479913
    CALL dword ptr [EDX + 0xf8]         ; 00479914
    ADD ESP,0x10                        ; 0047991a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0047991d
    FLDZ                                ; 00479920
    FLD float ptr [EAX + 0x4]           ; 00479922
    FSTP double ptr [ESP]               ; 00479925
    FCOMP double ptr [ESP]              ; 00479928
    FNSTSW AX                           ; 0047992b
    SAHF                                ; 0047992d
    JNC 0x004798fb                      ; 0047992e
        ;   XREF to: 004798fb (CONDITIONAL_JUMP)  ; LAB_004798fb
    FLD double ptr [ESP]                ; 00479930
    FMUL double ptr [0x0057f33f]        ; 00479933 | DOUBLE_0057f33f
    MOV EAX,dword ptr [EBX]             ; 00479939
    FMUL double ptr [0x0057f347]        ; 0047993b | DOUBLE_0057f347
    MOV dword ptr [ESP + 0x8],EAX       ; 00479941
    LEA EAX,[EBX + 0x4]                 ; 00479945
    PUSH 0x0                            ; 00479948
    MOV EAX,dword ptr [EAX]             ; 0047994a
    CALL crt_math.c_round_FUN_00563a30  ; 0047994c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    MOV dword ptr [ESP + 0x10],EAX      ; 00479951
    LEA EAX,[EBX + 0x8]                 ; 00479955
    FISTP dword ptr [ESP + 0x18]        ; 00479958
    MOV EBX,dword ptr [ESP + 0x18]      ; 0047995c
    PUSH EBX                            ; 00479960
    MOV EAX,dword ptr [EAX]             ; 00479961
    PUSH 0x0                            ; 00479963
    MOV dword ptr [ESP + 0x1c],EAX      ; 00479965
    LEA EAX,[ESP + 0x14]                ; 00479969
    PUSH EAX                            ; 0047996d
    MOV ESI,dword ptr [0x005b96c4]      ; 0047996e | INT_005b96c4
    PUSH ESI                            ; 00479974
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00479975
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    MOV EAX,0x1                         ; 0047997a
    ADD ESP,0x14                        ; 0047997f
    MOV ESP,EBP                         ; 00479982
    POP EBP                             ; 00479984
    POP ESI                             ; 00479985
    POP EBX                             ; 00479986
    RET                                 ; 00479987

