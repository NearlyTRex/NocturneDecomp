; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setdir_cpp_FUN_00541350(int param_1,int param_2,float *param_3)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[2]:
;   core_setdir.cpp_FUN_00541410 at 00541459
;   core_setdir.cpp_FUN_00541a20 at 00541a3a
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541350
        ;   Label: core_setdir.cpp_FUN_00541350
    PUSH ESI                            ; 00541351
    PUSH EDI                            ; 00541352
    PUSH EBP                            ; 00541353
    MOV EBP,ESP                         ; 00541354
    SUB ESP,0x30                        ; 00541356
    AND ESP,0xfffffff8                  ; 00541359
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0054135c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0054135f
    FLD float ptr [ESI + 0x4]           ; 00541362
    MOV EAX,EBX                         ; 00541365
    FLD float ptr [ESI + 0x8]           ; 00541367
    SHL EAX,0x4                         ; 0054136a
    FLD float ptr [ESI]                 ; 0054136d
    ADD EAX,EBX                         ; 0054136f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00541371
    SHL EAX,0x2                         ; 00541374
    ADD EBX,0x15b42c                    ; 00541377
    LEA EDI,[ESP + 0x24]                ; 0054137d
    ADD EBX,EAX                         ; 00541381
    LEA ESI,[ESP + 0xc]                 ; 00541383
    LEA EAX,[ESP + 0x24]                ; 00541387
    FSUB float ptr [EBX]                ; 0054138b
    FXCH ST2                            ; 0054138d
    FSUB float ptr [EBX + 0x4]          ; 0054138f
    FXCH                                ; 00541392
    FSUB float ptr [EBX + 0x8]          ; 00541394
    FXCH ST2                            ; 00541397
    FSTP float ptr [ESP + 0xc]          ; 00541399
    FSTP float ptr [ESP + 0x10]         ; 0054139d
    FSTP float ptr [ESP + 0x14]         ; 005413a1
    PUSH EAX                            ; 005413a5
    LEA EAX,[EBX + 0x18]                ; 005413a6
    MOVSD ES:EDI,ESI                    ; 005413a9
    MOVSD ES:EDI,ESI                    ; 005413aa
    MOVSD ES:EDI,ESI                    ; 005413ab
    PUSH EAX                            ; 005413ac
    LEA ESI,[ESP + 0x8]                 ; 005413ad
    LEA EDI,[ESP + 0x20]                ; 005413b1
    CALL core_dirmat.cpp_FUN_0045b870   ; 005413b5
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x8]                 ; 005413ba
    ADD ESP,0x8                         ; 005413be
    MOVSD ES:EDI,ESI                    ; 005413c1
    MOVSD ES:EDI,ESI                    ; 005413c2
    MOVSD ES:EDI,ESI                    ; 005413c3
    FLD float ptr [EBX + 0xc]           ; 005413c4
    FLD float ptr [ESP + 0x18]          ; 005413c7
    FABS                                ; 005413cb
    FCOMPP                              ; 005413cd
    FNSTSW AX                           ; 005413cf
    SAHF                                ; 005413d1
    JA 0x005413f4                       ; 005413d2
        ;   XREF to: 005413f4 (CONDITIONAL_JUMP)  ; LAB_005413f4
    FLD float ptr [ESP + 0x1c]          ; 005413d4
    FABS                                ; 005413d8
    FLD float ptr [EBX + 0x10]          ; 005413da
    FCOMPP                              ; 005413dd
    FNSTSW AX                           ; 005413df
    SAHF                                ; 005413e1
    JC 0x005413f4                       ; 005413e2
        ;   XREF to: 005413f4 (CONDITIONAL_JUMP)  ; LAB_005413f4
    FLD float ptr [ESP + 0x20]          ; 005413e4
    FABS                                ; 005413e8
    FLD float ptr [EBX + 0x14]          ; 005413ea
    FCOMPP                              ; 005413ed
    FNSTSW AX                           ; 005413ef
    SAHF                                ; 005413f1
    JNC 0x005413fd                      ; 005413f2
        ;   XREF to: 005413fd (CONDITIONAL_JUMP)  ; LAB_005413fd
    XOR EAX,EAX                         ; 005413f4
        ;   Label: LAB_005413f4
    MOV ESP,EBP                         ; 005413f6
    POP EBP                             ; 005413f8
    POP EDI                             ; 005413f9
    POP ESI                             ; 005413fa
    POP EBX                             ; 005413fb
    RET                                 ; 005413fc
    MOV EAX,0x1                         ; 005413fd
        ;   Label: LAB_005413fd
    MOV ESP,EBP                         ; 00541402
    POP EBP                             ; 00541404
    POP EDI                             ; 00541405
    POP ESI                             ; 00541406
    POP EBX                             ; 00541407
    RET                                 ; 00541408

