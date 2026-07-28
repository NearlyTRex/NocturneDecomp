; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mobster.cpp_FUN_004da790 at 004db3ea
;
; Referenced Globals:
;   TerminatedCString s_CTommyGun_0058a3b9
;   double DOUBLE_0058a3c9 = 0.333333333333333
;   double DOUBLE_0058a3d1 = 5
;   double DOUBLE_0058a3d9 = 0.400000000000000
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_bodypart.cpp_addVector_FUN_00417fc0
;   core_bodypart.cpp_scaleVector_FUN_00417f60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dbce0
        ;   Label: core_mobster.cpp_CMobster_processWeaponPickup_FUN_004dbce0
    PUSH ESI                            ; 004dbce1
    PUSH EDI                            ; 004dbce2
    PUSH EBP                            ; 004dbce3
    MOV EBP,ESP                         ; 004dbce4
    SUB ESP,0xa0                        ; 004dbce6
    AND ESP,0xfffffff8                  ; 004dbcec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbcef
    CMP dword ptr [EAX + 0xbc98],0x0    ; 004dbcf2
    JNZ 0x004dbfe1                      ; 004dbcf9
        ;   XREF to: 004dbfe1 (CONDITIONAL_JUMP)  ; LAB_004dbfe1
    FLD float ptr [EAX + 0xbd28]        ; 004dbcff
    FSUB float ptr [EBP + 0x18]         ; 004dbd05
    FST float ptr [EAX + 0xbd28]        ; 004dbd08
    FLDZ                                ; 004dbd0e
    FCOMPP                              ; 004dbd10
    FNSTSW AX                           ; 004dbd12
    SAHF                                ; 004dbd14
    JC 0x004dbdcd                       ; 004dbd15
        ;   XREF to: 004dbdcd (CONDITIONAL_JUMP)  ; LAB_004dbdcd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbd1b
        ;   Label: LAB_004dbd1b
    MOV EAX,dword ptr [EAX + 0x24ec]    ; 004dbd1e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dbd24
    SHL EAX,0x2                         ; 004dbd27
    ADD EAX,EBX                         ; 004dbd2a
    CMP dword ptr [EAX + 0x2290],0x0    ; 004dbd2c
    JZ 0x004dbfe1                       ; 004dbd33
        ;   XREF to: 004dbfe1 (CONDITIONAL_JUMP)  ; LAB_004dbfe1
    MOV EDI,dword ptr [EBX + 0x24f0]    ; 004dbd39
    TEST EDI,EDI                        ; 004dbd3f
    JNZ 0x004dbfe1                      ; 004dbd41
        ;   XREF to: 004dbfe1 (CONDITIONAL_JUMP)  ; LAB_004dbfe1
    FLD float ptr [EBX + 0xbd2c]        ; 004dbd47
    FLDZ                                ; 004dbd4d
    FCOMPP                              ; 004dbd4f
    FNSTSW AX                           ; 004dbd51
    SAHF                                ; 004dbd53
    JC 0x004dbe0b                       ; 004dbd54
        ;   XREF to: 004dbe0b (CONDITIONAL_JUMP)  ; LAB_004dbe0b
    MOV EDX,dword ptr [EBX + 0xbd30]    ; 004dbd5a
    LEA ESI,[EBX + 0x20]                ; 004dbd60
    TEST EDX,EDX                        ; 004dbd63
    JNZ 0x004dbe36                      ; 004dbd65
        ;   XREF to: 004dbe36 (CONDITIONAL_JUMP)  ; LAB_004dbe36
    MOV dword ptr [ESP + 0x8c],EDI      ; 004dbd6b
    MOV dword ptr [ESP + 0x94],EDI      ; 004dbd72
    MOV dword ptr [ESP + 0x90],ESI      ; 004dbd79
    XOR ESI,ESI                         ; 004dbd80
    MOV EAX,[0x005be368]                ; 004dbd82 | DAT_005be368
        ;   Label: LAB_004dbd82
    MOV EBX,dword ptr [ESP + 0x94]      ; 004dbd87
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 004dbd8e | DAT_01fa3ff0
    JGE 0x004dc0a7                      ; 004dbd94
        ;   XREF to: 004dc0a7 (CONDITIONAL_JUMP)  ; LAB_004dc0a7
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14cd70] ; 004dbd9a | DAT_01fa3ff4
    PUSH EBX                            ; 004dbda1
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dbda2
    CALL dword ptr [EAX + 0x8c]         ; 004dbda8
    ADD ESP,0x4                         ; 004dbdae
    TEST EAX,EAX                        ; 004dbdb1
    JZ 0x004dc003                       ; 004dbdb3
        ;   XREF to: 004dc003 (CONDITIONAL_JUMP)  ; LAB_004dc003
    MOV EAX,dword ptr [ESP + 0x94]      ; 004dbdb9
        ;   Label: LAB_004dbdb9
    INC EAX                             ; 004dbdc0
    ADD EDI,0x4                         ; 004dbdc1
    MOV dword ptr [ESP + 0x94],EAX      ; 004dbdc4
    JMP 0x004dbd82                      ; 004dbdcb
        ;   XREF to: 004dbd82 (UNCONDITIONAL_JUMP)  ; LAB_004dbd82
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbdcd
        ;   Label: LAB_004dbdcd
    MOV ECX,dword ptr [EAX + 0xbd24]    ; 004dbdd0
    PUSH 0x41200000                     ; 004dbdd6
    INC ECX                             ; 004dbddb
    PUSH 0x40a00000                     ; 004dbddc
    MOV dword ptr [EAX + 0xbd24],ECX    ; 004dbde1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004dbde7
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 004dbdec
    FLD float ptr [ESP + 0xa4]          ; 004dbdf3
    ADD ESP,0x8                         ; 004dbdfa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbdfd
    FSTP float ptr [EAX + 0xbd28]       ; 004dbe00
    JMP 0x004dbd1b                      ; 004dbe06
        ;   XREF to: 004dbd1b (UNCONDITIONAL_JUMP)  ; LAB_004dbd1b
    FLD float ptr [EBX + 0xbd2c]        ; 004dbe0b
        ;   Label: LAB_004dbe0b
    FSUB float ptr [EBP + 0x18]         ; 004dbe11
    FST float ptr [EBX + 0xbd2c]        ; 004dbe14
    FLDZ                                ; 004dbe1a
    FCOMPP                              ; 004dbe1c
    FNSTSW AX                           ; 004dbe1e
    SAHF                                ; 004dbe20
    JBE 0x004dbfe1                      ; 004dbe21
        ;   XREF to: 004dbfe1 (CONDITIONAL_JUMP)  ; LAB_004dbfe1
    MOV dword ptr [EBX + 0xbd2c],EDI    ; 004dbe27
    XOR EAX,EAX                         ; 004dbe2d
    MOV ESP,EBP                         ; 004dbe2f
    POP EBP                             ; 004dbe31
    POP EDI                             ; 004dbe32
    POP ESI                             ; 004dbe33
    POP EBX                             ; 004dbe34
    RET                                 ; 004dbe35
    PUSH EDX                            ; 004dbe36
        ;   Label: LAB_004dbe36
    MOV EBX,dword ptr [EDX + 0x14c]     ; 004dbe37
    CALL dword ptr [EBX + 0x8c]         ; 004dbe3d
    ADD ESP,0x4                         ; 004dbe43
    TEST EAX,EAX                        ; 004dbe46
    JNZ 0x004dbf93                      ; 004dbe48
        ;   XREF to: 004dbf93 (CONDITIONAL_JUMP)  ; LAB_004dbf93
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbe4e
    MOV EAX,dword ptr [EAX + 0xbd30]    ; 004dbe51
    FLD float ptr [ESI]                 ; 004dbe57
    FSUB float ptr [EAX + 0x20]         ; 004dbe59
    FMUL ST0                            ; 004dbe5c
    FLD float ptr [ESI + 0x8]           ; 004dbe5e
    FSUB float ptr [EAX + 0x28]         ; 004dbe61
    FMUL ST0                            ; 004dbe64
    FADDP                               ; 004dbe66
    FSQRT                               ; 004dbe68
    FMUL double ptr [0x0058a3c9]        ; 004dbe6a | DOUBLE_0058a3c9
    FSUBR double ptr [0x0058a3d1]       ; 004dbe70 | DOUBLE_0058a3d1
    FST float ptr [ESP]                 ; 004dbe76
    FLD1                                ; 004dbe79
    FCOMPP                              ; 004dbe7b
    FNSTSW AX                           ; 004dbe7d
    SAHF                                ; 004dbe7f
    JBE 0x004dbe89                      ; 004dbe80
        ;   XREF to: 004dbe89 (CONDITIONAL_JUMP)  ; LAB_004dbe89
    MOV dword ptr [ESP],0x3f800000      ; 004dbe82
    FLD float ptr [EBP + 0x18]          ; 004dbe89
        ;   Label: LAB_004dbe89
    FMUL float ptr [ESP]                ; 004dbe8c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbe8f
    FADD float ptr [EAX + 0xbd2c]       ; 004dbe92
    MOV EBX,0xffffffff                  ; 004dbe98
    FST float ptr [EAX + 0xbd2c]        ; 004dbe9d
    FLDZ                                ; 004dbea3
    FCOMPP                              ; 004dbea5
    FNSTSW AX                           ; 004dbea7
    SAHF                                ; 004dbea9
    JBE 0x004dbf7e                      ; 004dbeaa
        ;   XREF to: 004dbf7e (CONDITIONAL_JUMP)  ; LAB_004dbf7e
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dbeb0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbeb3
    PUSH EDI                            ; 004dbeb6
    MOV EAX,dword ptr [EAX + 0xbd30]    ; 004dbeb7
    PUSH EAX                            ; 004dbebd
    MOV ESI,dword ptr [EAX + 0x14c]     ; 004dbebe
    CALL dword ptr [ESI + 0x7c]         ; 004dbec4
    ADD ESP,0x8                         ; 004dbec7
    CMP EAX,0x3                         ; 004dbeca
    JNZ 0x004dbf7e                      ; 004dbecd
        ;   XREF to: 004dbf7e (CONDITIONAL_JUMP)  ; LAB_004dbf7e
    LEA ESI,[ESP + 0x30]                ; 004dbed3
    MOV EBX,dword ptr [EDI + 0xbd30]    ; 004dbed7
    PUSH ESI                            ; 004dbedd
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004dbede
    PUSH EBX                            ; 004dbee4
    CALL dword ptr [EAX + 0x14]         ; 004dbee5
    MOV EAX,0x3f000000                  ; 004dbee8
    ADD ESP,0x8                         ; 004dbeed
    MOV dword ptr [ESP + 0x88],EAX      ; 004dbef0
    LEA EAX,[ESP + 0x88]                ; 004dbef7
    PUSH EAX                            ; 004dbefe
    LEA EAX,[ESP + 0x70]                ; 004dbeff
    PUSH EAX                            ; 004dbf03
    LEA EAX,[ESP + 0x44]                ; 004dbf04
    PUSH EAX                            ; 004dbf08
    LEA EAX,[ESP + 0x84]                ; 004dbf09
    PUSH EAX                            ; 004dbf10
    LEA EAX,[ESP + 0x40]                ; 004dbf11
    PUSH EAX                            ; 004dbf15
    CALL core_bodypart.cpp_addVector_FUN_00417fc0 ; 004dbf16
        ;   XREF to: 00417fc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_addVector_FUN_00417fc0(CVector3f * a, CVector3f * dst, CVector3f * b)
    ADD ESP,0xc                         ; 004dbf1b
    PUSH EAX                            ; 004dbf1e
    CALL core_bodypart.cpp_scaleVector_FUN_00417f60 ; 004dbf1f
        ;   XREF to: 00417f60 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_scaleVector_FUN_00417f60(CVector3f * src, CVector3f * dst, float * scalar)
    ADD ESP,0xc                         ; 004dbf24
    LEA EAX,[ESP + 0x6c]                ; 004dbf27
    PUSH EAX                            ; 004dbf2b
    LEA EAX,[ESP + 0x64]                ; 004dbf2c
    FLD float ptr [ESP + 0x3c]          ; 004dbf30
    PUSH EAX                            ; 004dbf34
    FADD double ptr [0x0058a3d9]        ; 004dbf35 | DOUBLE_0058a3d9
    PUSH EBX                            ; 004dbf3b
    FSTP float ptr [ESP + 0x80]         ; 004dbf3c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004dbf43
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004dbf48
    PUSH 0x3d0efa35                     ; 004dbf4b
    LEA EAX,[ESP + 0x4c]                ; 004dbf50
    PUSH 0x3e99999a                     ; 004dbf54
    PUSH EAX                            ; 004dbf59
    XOR ECX,ECX                         ; 004dbf5a
    PUSH ECX                            ; 004dbf5c
    LEA EAX,[ESP + 0x70]                ; 004dbf5d
    MOV EDX,0x3fc00000                  ; 004dbf61
    PUSH EAX                            ; 004dbf66
    MOV dword ptr [ESP + 0x5c],EDX      ; 004dbf67
    PUSH EDI                            ; 004dbf6b
    MOV dword ptr [ESP + 0x64],ECX      ; 004dbf6c
    MOV dword ptr [ESP + 0x68],ECX      ; 004dbf70
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 004dbf74
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004dbf79
    MOV EBX,EAX                         ; 004dbf7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbf7e
        ;   Label: LAB_004dbf7e
    ADD EAX,0x150                       ; 004dbf81
    TEST EBX,EBX                        ; 004dbf86
    JL 0x004dbfbd                       ; 004dbf88
        ;   XREF to: 004dbfbd (CONDITIONAL_JUMP)  ; LAB_004dbfbd
    JG 0x004dbfea                       ; 004dbf8a
        ;   XREF to: 004dbfea (CONDITIONAL_JUMP)  ; LAB_004dbfea
    MOV EAX,0x1                         ; 004dbf8c
    JMP 0x004dbfe3                      ; 004dbf91
        ;   XREF to: 004dbfe3 (UNCONDITIONAL_JUMP)  ; LAB_004dbfe3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004dbf93
        ;   Label: LAB_004dbf93
    PUSH 0x1                            ; 004dbf96
    ADD EAX,0x150                       ; 004dbf98
    PUSH 0x1                            ; 004dbf9d
    MOV dword ptr [EAX + 0xbbe0],EDI    ; 004dbf9f
    PUSH EAX                            ; 004dbfa5
    MOV dword ptr [EAX + 0xbbdc],EDI    ; 004dbfa6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dbfac
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dbfb1
    XOR EAX,EAX                         ; 004dbfb4
    MOV ESP,EBP                         ; 004dbfb6
    POP EBP                             ; 004dbfb8
    POP EDI                             ; 004dbfb9
    POP ESI                             ; 004dbfba
    POP EBX                             ; 004dbfbb
    RET                                 ; 004dbfbc
    PUSH 0x1                            ; 004dbfbd
        ;   Label: LAB_004dbfbd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004dbfbf
    PUSH 0x1                            ; 004dbfc2
    MOV dword ptr [EDX + 0xbd30],0x0    ; 004dbfc4
    PUSH EAX                            ; 004dbfce
    MOV dword ptr [EDX + 0xbd2c],0x41a00000 ; 004dbfcf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dbfd9
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004dbfde
    XOR EAX,EAX                         ; 004dbfe1
        ;   Label: LAB_004dbfe1
    MOV ESP,EBP                         ; 004dbfe3
        ;   Label: LAB_004dbfe3
    POP EBP                             ; 004dbfe5
    POP EDI                             ; 004dbfe6
    POP ESI                             ; 004dbfe7
    POP EBX                             ; 004dbfe8
    RET                                 ; 004dbfe9
    PUSH 0x1                            ; 004dbfea
        ;   Label: LAB_004dbfea
    PUSH 0x7                            ; 004dbfec
    PUSH EAX                            ; 004dbfee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dbfef
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004dbff4
    ADD ESP,0xc                         ; 004dbff9
    MOV ESP,EBP                         ; 004dbffc
    POP EBP                             ; 004dbffe
    POP EDI                             ; 004dbfff
    POP ESI                             ; 004dc000
    POP EBX                             ; 004dc001
    RET                                 ; 004dc002
    PUSH 0x58a3b9                       ; 004dc003 | = "CTommyGun"
        ;   Label: LAB_004dc003
    PUSH EBX                            ; 004dc008
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004dc009
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004dc00e
    TEST EAX,EAX                        ; 004dc011
    JZ 0x004dbdb9                       ; 004dc013
        ;   XREF to: 004dbdb9 (CONDITIONAL_JUMP)  ; LAB_004dbdb9
    LEA EAX,[EBX + 0x20]                ; 004dc019
    MOV EDX,dword ptr [ESP + 0x90]      ; 004dc01c
    FLD float ptr [EAX]                 ; 004dc023
    FSUB float ptr [EDX]                ; 004dc025
    FSTP float ptr [ESP + 0x54]         ; 004dc027
    FLD float ptr [EAX + 0x4]           ; 004dc02b
    FSUB float ptr [EDX + 0x4]          ; 004dc02e
    FST float ptr [ESP + 0x58]          ; 004dc031
    FMUL float ptr [ESP + 0x58]         ; 004dc035
    FLD float ptr [EAX + 0x8]           ; 004dc039
    FSUB float ptr [EDX + 0x8]          ; 004dc03c
    FXCH                                ; 004dc03f
    FST float ptr [ESP + 0x58]          ; 004dc041
    FMUL float ptr [ESP + 0x58]         ; 004dc045
    FST float ptr [ESP + 0x58]          ; 004dc049
    FMUL float ptr [ESP + 0x58]         ; 004dc04d
    FLD float ptr [ESP + 0x54]          ; 004dc051
    FMUL ST0                            ; 004dc055
    FADDP                               ; 004dc057
    FXCH                                ; 004dc059
    FST float ptr [ESP + 0x5c]          ; 004dc05b
    FMUL float ptr [ESP + 0x5c]         ; 004dc05f
    FADDP                               ; 004dc063
    FSQRT                               ; 004dc065
    FST float ptr [ESP + 0x4]           ; 004dc067
    FCOMP double ptr [0x0058a3d1]       ; 004dc06b | DOUBLE_0058a3d1
    FNSTSW AX                           ; 004dc071
    SAHF                                ; 004dc073
    JC 0x004dbdb9                       ; 004dc074
        ;   XREF to: 004dbdb9 (CONDITIONAL_JUMP)  ; LAB_004dbdb9
    CMP dword ptr [ESP + 0x4],0x41700000 ; 004dc07a
    JG 0x004dbdb9                       ; 004dc082
        ;   XREF to: 004dbdb9 (CONDITIONAL_JUMP)  ; LAB_004dbdb9
    MOV dword ptr [ESP + ESI*0x1 + 0x8],EBX ; 004dc088
    MOV EBX,dword ptr [ESP + 0x8c]      ; 004dc08c
    INC EBX                             ; 004dc093
    ADD ESI,0x4                         ; 004dc094
    MOV dword ptr [ESP + 0x8c],EBX      ; 004dc097
    CMP ESI,0x28                        ; 004dc09e
    JL 0x004dbdb9                       ; 004dc0a1
        ;   XREF to: 004dbdb9 (CONDITIONAL_JUMP)  ; LAB_004dbdb9
    MOV ESI,dword ptr [ESP + 0x8c]      ; 004dc0a7
        ;   Label: LAB_004dc0a7
    CMP ESI,0x1                         ; 004dc0ae
    JL 0x004dbfe1                       ; 004dc0b1
        ;   XREF to: 004dbfe1 (CONDITIONAL_JUMP)  ; LAB_004dbfe1
    LEA EAX,[ESI + -0x1]                ; 004dc0b7
    PUSH EAX                            ; 004dc0ba
    PUSH 0x0                            ; 004dc0bb
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004dc0bd
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 004dc0c2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004dc0c5
    PUSH 0x1                            ; 004dc0c8
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 004dc0ca
    MOV dword ptr [EDX + 0xbd2c],0xc2200000 ; 004dc0ce
    PUSH 0x1                            ; 004dc0d8
    MOV EDI,dword ptr [EDX + 0xbd24]    ; 004dc0da
    MOV dword ptr [EDX + 0xbd30],EAX    ; 004dc0e0
    LEA EAX,[EDX + 0x150]               ; 004dc0e6
    INC EDI                             ; 004dc0ec
    PUSH EAX                            ; 004dc0ed
    MOV dword ptr [EDX + 0xbd24],EDI    ; 004dc0ee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004dc0f4
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004dc0f9
    ADD ESP,0xc                         ; 004dc0fe
    MOV ESP,EBP                         ; 004dc101
    POP EBP                             ; 004dc103
    POP EDI                             ; 004dc104
    POP ESI                             ; 004dc105
    POP EBX                             ; 004dc106
    RET                                 ; 004dc107

