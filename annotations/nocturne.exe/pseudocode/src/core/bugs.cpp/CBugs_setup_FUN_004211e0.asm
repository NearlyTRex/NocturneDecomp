; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_CBugs_setup_FUN_004211e0(CBugs *param_1)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   float FLOAT_00579c45 = 12
;   float FLOAT_00579c49 = -12
;   double DOUBLE_00579c4d = 0.5
;   float FLOAT_0059aea8 = 0.5
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   core_enemy.cpp_CEnemy_setup_FUN_004796b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004211e0
        ;   Label: core_bugs.cpp_CBugs_setup_FUN_004211e0
    PUSH ESI                            ; 004211e1
    PUSH EDI                            ; 004211e2
    PUSH EBP                            ; 004211e3
    MOV EBP,ESP                         ; 004211e4
    SUB ESP,0x2c                        ; 004211e6
    AND ESP,0xfffffff8                  ; 004211e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004211ec
    MOV dword ptr [EAX + 0x38],0x0      ; 004211ef
    PUSH EAX                            ; 004211f6
    MOV EDX,dword ptr [EAX + 0x38]      ; 004211f7
    MOV dword ptr [EAX + 0x34],EDX      ; 004211fa
    MOV EDX,dword ptr [EAX + 0x34]      ; 004211fd
    MOV dword ptr [EAX + 0x30],EDX      ; 00421200
    CALL core_enemy.cpp_CEnemy_setup_FUN_004796b0 ; 00421203
        ;   XREF to: 004796b0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_004796b0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00421208
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042120b
    MOV dword ptr [EAX + 0x1212c],0x4   ; 0042120e
    MOV ECX,dword ptr [EAX + 0x1212c]   ; 00421218
    XOR EBX,EBX                         ; 0042121e
    TEST ECX,ECX                        ; 00421220
    JLE 0x004212c3                      ; 00421222
        ;   XREF to: 004212c3 (CONDITIONAL_JUMP)  ; LAB_004212c3
    ADD EAX,0x12130                     ; 00421228
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042122d
    LEA ESI,[EAX + 0x78]                ; 00421231
    IMUL EDI,EBX,0x17c                  ; 00421234
        ;   Label: LAB_00421234
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042123a
    MOV AH,byte ptr [ESI]               ; 0042123e
    ADD EDI,ECX                         ; 00421240
    TEST AH,AH                          ; 00421242
    JNZ 0x0042144e                      ; 00421244
        ;   XREF to: 0042144e (CONDITIONAL_JUMP)  ; LAB_0042144e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042124a
    MOV EDX,dword ptr [EAX + 0x1212c]   ; 0042124d
    DEC EDX                             ; 00421253
    MOV EDI,EBX                         ; 00421254
    MOV dword ptr [EAX + 0x1212c],EDX   ; 00421256
    CMP EBX,EDX                         ; 0042125c
    JGE 0x004212b4                      ; 0042125e
        ;   XREF to: 004212b4 (CONDITIONAL_JUMP)  ; LAB_004212b4
    IMUL EAX,EBX,0x17c                  ; 00421260
    LEA EDX,[ECX + EAX*0x1]             ; 00421266
    ADD EAX,0x1f4                       ; 00421269
    ADD EAX,ECX                         ; 0042126e
    MOV dword ptr [ESP + 0x20],EDX      ; 00421270
    MOV dword ptr [ESP + 0x24],EAX      ; 00421274
    MOV ECX,dword ptr [ESP + 0x24]      ; 00421278
        ;   Label: LAB_00421278
    PUSH ECX                            ; 0042127c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042127d
    PUSH EAX                            ; 00421281
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 00421282
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00421287
    INC EDI                             ; 0042128a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042128b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042128f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421293
    ADD EDX,0x17c                       ; 00421296
    ADD ECX,0x17c                       ; 0042129c
    MOV dword ptr [ESP + 0x20],EDX      ; 004212a2
    MOV EDX,dword ptr [EAX + 0x1212c]   ; 004212a6
    MOV dword ptr [ESP + 0x24],ECX      ; 004212ac
    CMP EDI,EDX                         ; 004212b0
    JL 0x00421278                       ; 004212b2
        ;   XREF to: 00421278 (CONDITIONAL_JUMP)  ; LAB_00421278
    MOV EAX,dword ptr [EBP + 0x14]      ; 004212b4
        ;   Label: LAB_004212b4
    CMP EBX,dword ptr [EAX + 0x1212c]   ; 004212b7
    JL 0x00421234                       ; 004212bd
        ;   XREF to: 00421234 (CONDITIONAL_JUMP)  ; LAB_00421234
    XOR EAX,EAX                         ; 004212c3
        ;   Label: LAB_004212c3
    MOV dword ptr [ESP + 0x18],EAX      ; 004212c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004212c9
    CMP dword ptr [EAX + 0xbd28],0x0    ; 004212cc
    JLE 0x00421413                      ; 004212d3
        ;   XREF to: 00421413 (CONDITIONAL_JUMP)  ; LAB_00421413
    FLD float ptr [0x0059aea8]          ; 004212d9 | FLOAT_0059aea8
    FLD ST0                             ; 004212df
    FMUL float ptr [0x00579c45]         ; 004212e1 | FLOAT_00579c45
    FXCH                                ; 004212e7
    FMUL float ptr [0x00579c49]         ; 004212e9 | FLOAT_00579c49
    MOV EDI,dword ptr [EBP + 0x14]      ; 004212ef
    ADD EAX,0xbd2c                      ; 004212f2
    MOV EBX,dword ptr [EBP + 0x14]      ; 004212f7
    MOV dword ptr [ESP + 0x10],EAX      ; 004212fa
    ADD EDI,0xbd4c                      ; 004212fe
    ADD EBX,0xbd40                      ; 00421304
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042130a
    FXCH                                ; 0042130d
    FSTP float ptr [ESP]                ; 0042130f
    ADD EAX,0xbd34                      ; 00421312
    FSTP float ptr [ESP + 0x4]          ; 00421317
    MOV dword ptr [ESP + 0x14],EAX      ; 0042131b
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042131f
        ;   Label: LAB_0042131f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00421323
    SHL ESI,0x6                         ; 00421327
    ADD ESI,EAX                         ; 0042132a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042132c
    MOV dword ptr [ESI],0x0             ; 0042132f
    MOV EAX,dword ptr [EAX + 0x1212c]   ; 00421335
    DEC EAX                             ; 0042133b
    PUSH EAX                            ; 0042133c
    PUSH 0x0                            ; 0042133d
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 0042133f
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00421344
    FLD double ptr [0x00579c4d]         ; 00421347 | DOUBLE_00579c4d
    FLD float ptr [ESP]                 ; 0042134d
    FMUL ST1                            ; 00421350
    FLD float ptr [ESP + 0x4]           ; 00421352
    FMULP ST2                           ; 00421356
    FSTP float ptr [ESP + 0x8]          ; 00421358
    PUSH dword ptr [ESP + 0x8]          ; 0042135c
    FSTP float ptr [ESP + 0x10]         ; 00421360
    PUSH dword ptr [ESP + 0x10]         ; 00421364
    MOV dword ptr [ESI + 0x4],EAX       ; 00421368
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0042136b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x30],EAX      ; 00421370
    FLD float ptr [ESP + 0x30]          ; 00421374
    ADD ESP,0x8                         ; 00421378
    PUSH dword ptr [ESP + 0x8]          ; 0042137b
    MOV dword ptr [ESI + 0xc],0x0       ; 0042137f
    PUSH dword ptr [ESP + 0x10]         ; 00421386
    FSTP float ptr [ESI + 0x8]          ; 0042138a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0042138d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x30],EAX      ; 00421392
    FLD float ptr [ESP + 0x30]          ; 00421396
    ADD ESP,0x8                         ; 0042139a
    FSTP float ptr [ESI + 0x10]         ; 0042139d
    PUSH 0x40490fdb                     ; 004213a0
    MOV dword ptr [EBX + 0x8],0x0       ; 004213a5
    PUSH 0xc0490fdb                     ; 004213ac
    MOV EAX,dword ptr [EBX + 0x8]       ; 004213b1
    MOV dword ptr [EBX + 0x4],EAX       ; 004213b4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004213b7
    MOV dword ptr [EBX],EAX             ; 004213ba
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004213bc
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x30],EAX      ; 004213c1
    FLD float ptr [ESP + 0x30]          ; 004213c5
    ADD ESP,0x8                         ; 004213c9
    MOV EDX,dword ptr [ESP + 0x14]      ; 004213cc
    FSTP float ptr [ESI + 0x18]         ; 004213d0
    CMP EDI,EDX                         ; 004213d3
    JZ 0x004213e8                       ; 004213d5
        ;   XREF to: 004213e8 (CONDITIONAL_JUMP)  ; LAB_004213e8
    MOV EAX,dword ptr [EBX + -0xc]      ; 004213d7
    MOV dword ptr [EDI],EAX             ; 004213da
    MOV EAX,dword ptr [EBX + -0x8]      ; 004213dc
    MOV dword ptr [EDI + 0x4],EAX       ; 004213df
    MOV EAX,dword ptr [EBX + -0x4]      ; 004213e2
    MOV dword ptr [EDI + 0x8],EAX       ; 004213e5
    MOV ESI,dword ptr [ESP + 0x14]      ; 004213e8
        ;   Label: LAB_004213e8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004213ec
    MOV EDX,dword ptr [EBP + 0x14]      ; 004213f0
    ADD EDI,0x40                        ; 004213f3
    ADD EBX,0x40                        ; 004213f6
    ADD ESI,0x40                        ; 004213f9
    INC EAX                             ; 004213fc
    MOV ECX,dword ptr [EDX + 0xbd28]    ; 004213fd
    MOV dword ptr [ESP + 0x14],ESI      ; 00421403
    MOV dword ptr [ESP + 0x18],EAX      ; 00421407
    CMP EAX,ECX                         ; 0042140b
    JL 0x0042131f                       ; 0042140d
        ;   XREF to: 0042131f (CONDITIONAL_JUMP)  ; LAB_0042131f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421413
        ;   Label: LAB_00421413
    PUSH EBX                            ; 00421416
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680 ; 00421417
        ;   XREF to: 00423680 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423680(CBugs * this_ptr)
    MOV dword ptr [EBX + 0x1984c],0xffffd8f1 ; 0042141c
    MOV dword ptr [EBX + 0x19850],0xffffd8f1 ; 00421426
    MOV dword ptr [EBX + 0x100],0x1     ; 00421430
    ADD ESP,0x4                         ; 0042143a
    MOV dword ptr [EBX + 0x1985c],0x0   ; 0042143d
    MOV ESP,EBP                         ; 00421447
    POP EBP                             ; 00421449
    POP EDI                             ; 0042144a
    POP ESI                             ; 0042144b
    POP EBX                             ; 0042144c
    RET                                 ; 0042144d
    PUSH EDI                            ; 0042144e
        ;   Label: LAB_0042144e
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 0042144f
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510(CKeyFramedModelInstance * this_ptr)
    ADD ESI,0x17c                       ; 00421454
    INC EBX                             ; 0042145a
    ADD ESP,0x4                         ; 0042145b
    JMP 0x004212b4                      ; 0042145e
        ;   XREF to: 004212b4 (UNCONDITIONAL_JUMP)  ; LAB_004212b4

