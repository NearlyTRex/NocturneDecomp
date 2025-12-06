; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004edbb0()
;
; Local Variables:
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; XREF[15]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a50c
;   core_charactr.cpp_CCharacter_FUN_0042b9e0 at 0042bc0a
;   core_charactr.cpp_CCharacter_FUN_0042c180 at 0042c2d5
;   core_charactr.cpp_CCharacter_FUN_0042c3c0 at 0042c4a5
;   core_dracbrid.cpp_FUN_004858f0 at 00485b03
;   core_enemy.cpp_FUN_004a9880 at 004a9915
;   core_enemy.cpp_FUN_004a9930 at 004a99b4
;   core_gabriela.cpp_FUN_004d4890 at 004d4bc5
;   core_ghoul.cpp_CGhoul_FUN_004e6600 at 004e6d05
;   core_imp.cpp_FUN_004f9c30 at 004f9ed8
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_gore.cpp_FUN_004edaa0
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edbb0
        ;   Label: core_gore.cpp_FUN_004edbb0
    PUSH ESI                            ; 004edbb1
    PUSH EDI                            ; 004edbb2
    PUSH EBP                            ; 004edbb3
    MOV EBP,ESP                         ; 004edbb4
    SUB ESP,0x64                        ; 004edbb6
    AND ESP,0xfffffff8                  ; 004edbb9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004edbbc
    MOV ESI,dword ptr [EBP + 0x20]      ; 004edbbf
    MOV EDI,dword ptr [EBP + 0x24]      ; 004edbc2
    CMP EDI,0x2                         ; 004edbc5
    JZ 0x004edbf0                       ; 004edbc8 | LAB_004edbf0
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004edbca
    JNZ 0x004edbf7                      ; 004edbcc | LAB_004edbf7
        ;   XREF to: 004edbf7 (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 004edbce
    TEST ESI,ESI                        ; 004edbd0
    JLE 0x004edbf0                      ; 004edbd2 | LAB_004edbf0
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004edbd4
        ;   Label: LAB_004edbd4
    PUSH 0x0                            ; 004edbd5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004edbd7
    PUSH EAX                            ; 004edbda
    MOV EDX,dword ptr [EBP + 0x14]      ; 004edbdb
    PUSH EDX                            ; 004edbde
    INC EBX                             ; 004edbdf
    CALL core_gore.cpp_FUN_004edaa0     ; 004edbe0 | undefined core_gore.cpp_FUN_004edaa0()
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004edbe5
    CMP EBX,ESI                         ; 004edbe8
    JL 0x004edbd4                       ; 004edbea | LAB_004edbd4
        ;   XREF to: 004edbd4 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004edbec
    MOV ESP,EBP                         ; 004edbf0
        ;   Label: LAB_004edbf0
    POP EBP                             ; 004edbf2
    POP EDI                             ; 004edbf3
    POP ESI                             ; 004edbf4
    POP EBX                             ; 004edbf5
    RET                                 ; 004edbf6
    FLD float ptr [EDX + 0x4]           ; 004edbf7
        ;   Label: LAB_004edbf7
    FMUL ST0                            ; 004edbfa
    FLD float ptr [EDX]                 ; 004edbfc
    FMUL ST0                            ; 004edbfe
    FADDP                               ; 004edc00
    FLD float ptr [EDX + 0x8]           ; 004edc02
    FMUL ST0                            ; 004edc05
    FADDP                               ; 004edc07
    FSQRT                               ; 004edc09
    LEA EAX,[ESP + 0x38]                ; 004edc0b
    FSTP float ptr [ESP + 0x5c]         ; 004edc0f
    CMP EAX,EDX                         ; 004edc13
    JZ 0x004edc2b                       ; 004edc15 | LAB_004edc2b
        ;   XREF to: 004edc2b (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX]             ; 004edc17
    MOV dword ptr [ESP + 0x38],EAX      ; 004edc19
    MOV EAX,dword ptr [EDX + 0x4]       ; 004edc1d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004edc20
    MOV EAX,dword ptr [EDX + 0x8]       ; 004edc24
    MOV dword ptr [ESP + 0x40],EAX      ; 004edc27
    FLD float ptr [ESP + 0x3c]          ; 004edc2b
        ;   Label: LAB_004edc2b
    FMUL ST0                            ; 004edc2f
    FLD float ptr [ESP + 0x38]          ; 004edc31
    FMUL ST0                            ; 004edc35
    FADDP                               ; 004edc37
    FLD float ptr [ESP + 0x40]          ; 004edc39
    FMUL ST0                            ; 004edc3d
    FADDP                               ; 004edc3f
    FSQRT                               ; 004edc41
    FST float ptr [ESP]                 ; 004edc43
    FLDZ                                ; 004edc46
    FCOMPP                              ; 004edc48
    FNSTSW AX                           ; 004edc4a
    SAHF                                ; 004edc4c
    JNC 0x004eddc2                      ; 004edc4d | LAB_004eddc2
        ;   XREF to: 004eddc2 (CONDITIONAL_JUMP)
    FLD1                                ; 004edc53
    FLD float ptr [ESP + 0x38]          ; 004edc55
    FXCH                                ; 004edc59
    FDIV float ptr [ESP]                ; 004edc5b
    FXCH                                ; 004edc5e
    FMUL ST1                            ; 004edc60
    FLD float ptr [ESP + 0x3c]          ; 004edc62
    FMUL ST2                            ; 004edc66
    FLD float ptr [ESP + 0x40]          ; 004edc68
    FMULP ST3                           ; 004edc6c
    FXCH                                ; 004edc6e
    FSTP float ptr [ESP + 0x38]         ; 004edc70
    FSTP float ptr [ESP + 0x3c]         ; 004edc74
    FSTP float ptr [ESP + 0x40]         ; 004edc78
    FLD float ptr [ESP + 0x40]          ; 004edc7c
        ;   Label: LAB_004edc7c
    FMUL ST0                            ; 004edc80
    FLD float ptr [ESP + 0x38]          ; 004edc82
    FMUL ST0                            ; 004edc86
    FADDP                               ; 004edc88
    FSQRT                               ; 004edc8a
    FLD float ptr [ESP + 0x3c]          ; 004edc8c
    CALL crt_math.c_atan2_FUN_006013b1  ; 004edc90 | float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)
    FLD float ptr [ESP + 0x40]          ; 004edc95
    XOR EAX,EAX                         ; 004edc99
    FLD float ptr [ESP + 0x38]          ; 004edc9b
    MOV dword ptr [ESP + 0x58],EAX      ; 004edc9f
    CALL crt_math.c_atan2_FUN_006013b1  ; 004edca3 | float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 004edca8
    FXCH                                ; 004edcaa
    FCHS                                ; 004edcac
    FSTP float ptr [ESP + 0x50]         ; 004edcae
    FSTP float ptr [ESP + 0x54]         ; 004edcb2
    TEST ESI,ESI                        ; 004edcb6
    JLE 0x004edbf0                      ; 004edcb8 | LAB_004edbf0
        ;   XREF to: 004edbf0 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x50]      ; 004edcbe
        ;   Label: LAB_004edcbe
    MOV dword ptr [ESP + 0x44],EAX      ; 004edcc2
    MOV EAX,dword ptr [ESP + 0x54]      ; 004edcc6
    PUSH 0x3f490fdb                     ; 004edcca
    MOV dword ptr [ESP + 0x4c],EAX      ; 004edccf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004edcd3
    PUSH 0xbf490fdb                     ; 004edcd7
    MOV dword ptr [ESP + 0x54],EAX      ; 004edcdc
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004edce0 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
    XOR EDX,EDX                         ; 004eddc2
        ;   Label: LAB_004eddc2
    MOV dword ptr [ESP + 0x3c],EDX      ; 004eddc4
    MOV dword ptr [ESP + 0x38],EDX      ; 004eddc8
    MOV dword ptr [ESP + 0x40],EDX      ; 004eddcc
    JMP 0x004edc7c                      ; 004eddd0 | LAB_004edc7c
        ;   XREF to: 004edc7c (UNCONDITIONAL_JUMP)

