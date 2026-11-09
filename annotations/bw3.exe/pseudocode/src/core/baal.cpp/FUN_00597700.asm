; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baal_cpp_FUN_00597700(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_baal.cpp_FUN_005968a0 at 00597165
;
; Referenced Globals:
;   undefined4 DAT_005d9689
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfa0
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_vecdir.cpp_FUN_00576250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597700
        ;   Label: core_baal.cpp_FUN_00597700
    PUSH ESI                            ; 00597701
    PUSH EDI                            ; 00597702
    PUSH EBP                            ; 00597703
    SUB ESP,0x34                        ; 00597704
    MOV EBX,dword ptr [ESP + 0x48]      ; 00597707
    FLD float ptr [EBX + 0xcde0]        ; 0059770b
    FLDZ                                ; 00597711
    LEA EBP,[EBX + 0x158]               ; 00597713
    FCOMPP                              ; 00597719
    FNSTSW AX                           ; 0059771b
    SAHF                                ; 0059771d
    JC 0x005977f8                       ; 0059771e
        ;   XREF to: 005977f8 (CONDITIONAL_JUMP)  ; LAB_005977f8
    LEA EDI,[ESP + 0x18]                ; 00597724
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00597728
    LEA ESI,[ESP + 0x24]                ; 0059772e
    LEA EAX,[EBX + 0x20]                ; 00597732
    FLD float ptr [EDX + 0x20]          ; 00597735
    FLD float ptr [EDX + 0x24]          ; 00597738
    FLD float ptr [EDX + 0x28]          ; 0059773b
    FXCH ST2                            ; 0059773e
    FSUB float ptr [EAX]                ; 00597740
    FXCH                                ; 00597742
    FSUB float ptr [EAX + 0x4]          ; 00597744
    FXCH ST2                            ; 00597747
    FSUB float ptr [EAX + 0x8]          ; 00597749
    FXCH                                ; 0059774c
    FSTP float ptr [ESP + 0x24]         ; 0059774e
    FXCH                                ; 00597752
    FSTP float ptr [ESP + 0x28]         ; 00597754
    FSTP float ptr [ESP + 0x2c]         ; 00597758
    LEA EAX,[ESP + 0x18]                ; 0059775c
    MOVSD ES:EDI,ESI                    ; 00597760
    MOVSD ES:EDI,ESI                    ; 00597761
    MOVSD ES:EDI,ESI                    ; 00597762
    PUSH EAX                            ; 00597763
    LEA ESI,[ESP + 0x10]                ; 00597764
    LEA EDI,[ESP + 0x4]                 ; 00597768
    CALL core_vecdir.cpp_FUN_00576250   ; 0059776c
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x10]                ; 00597771
    ADD ESP,0x4                         ; 00597775
    MOVSD ES:EDI,ESI                    ; 00597778
    MOVSD ES:EDI,ESI                    ; 00597779
    MOVSD ES:EDI,ESI                    ; 0059777a
    FLD float ptr [ESP + 0x4]           ; 0059777b
    FSUB float ptr [EBX + 0x34]         ; 0059777f
    SUB ESP,0x4                         ; 00597782
    FSTP float ptr [ESP]                ; 00597785
    CALL core_actor.cpp_FUN_0040cfa0    ; 00597788
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x34],EAX      ; 0059778d
    FLD float ptr [ESP + 0x34]          ; 00597791
    FABS                                ; 00597795
    ADD ESP,0x4                         ; 00597797
    FCOMP double ptr [0x005d9689]       ; 0059779a | DAT_005d9689
    FNSTSW AX                           ; 005977a0
    SAHF                                ; 005977a2
    JNC 0x005977f8                      ; 005977a3
        ;   XREF to: 005977f8 (CONDITIONAL_JUMP)  ; LAB_005977f8
    PUSH 0x64                           ; 005977a5
    PUSH 0x0                            ; 005977a7
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005977a9
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005977ae
    MOV EDX,EAX                         ; 005977b1
    CMP EAX,0x19                        ; 005977b3
    JL 0x005977e4                       ; 005977b6
        ;   XREF to: 005977e4 (CONDITIONAL_JUMP)  ; LAB_005977e4
    JL 0x005977bf                       ; 005977b8
        ;   XREF to: 005977bf (CONDITIONAL_JUMP)  ; LAB_005977bf
    CMP EAX,0x32                        ; 005977ba
    JL 0x005977eb                       ; 005977bd
        ;   XREF to: 005977eb (CONDITIONAL_JUMP)  ; LAB_005977eb
    CMP EDX,0x32                        ; 005977bf
        ;   Label: LAB_005977bf
    JL 0x005977f2                       ; 005977c2
        ;   XREF to: 005977f2 (CONDITIONAL_JUMP)  ; LAB_005977f2
    CMP EDX,0x4b                        ; 005977c4
    JGE 0x005977f2                      ; 005977c7
        ;   XREF to: 005977f2 (CONDITIONAL_JUMP)  ; LAB_005977f2
    PUSH 0x1                            ; 005977c9
    PUSH 0x5                            ; 005977cb
    ADD EBX,0x158                       ; 005977cd
        ;   Label: LAB_005977cd
    PUSH EBX                            ; 005977d3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005977d4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005977d4
    ADD ESP,0xc                         ; 005977d9
    ADD ESP,0x34                        ; 005977dc
    POP EBP                             ; 005977df
    POP EDI                             ; 005977e0
    POP ESI                             ; 005977e1
    POP EBX                             ; 005977e2
    RET                                 ; 005977e3
    PUSH 0x1                            ; 005977e4
        ;   Label: LAB_005977e4
    PUSH 0x3                            ; 005977e6
    PUSH EBP                            ; 005977e8
    JMP 0x005977d4                      ; 005977e9
        ;   XREF to: 005977d4 (UNCONDITIONAL_JUMP)  ; LAB_005977d4
    PUSH 0x1                            ; 005977eb
        ;   Label: LAB_005977eb
    PUSH 0x4                            ; 005977ed
    PUSH EBP                            ; 005977ef
    JMP 0x005977d4                      ; 005977f0
        ;   XREF to: 005977d4 (UNCONDITIONAL_JUMP)  ; LAB_005977d4
    PUSH 0x1                            ; 005977f2
        ;   Label: LAB_005977f2
    PUSH 0x3                            ; 005977f4
    JMP 0x005977cd                      ; 005977f6
        ;   XREF to: 005977cd (UNCONDITIONAL_JUMP)  ; LAB_005977cd
    PUSH 0x1                            ; 005977f8
        ;   Label: LAB_005977f8
    PUSH 0x0                            ; 005977fa
    PUSH EBP                            ; 005977fc
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005977fd
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597802
    ADD ESP,0x34                        ; 00597805
    POP EBP                             ; 00597808
    POP EDI                             ; 00597809
    POP ESI                             ; 0059780a
    POP EBX                             ; 0059780b
    RET                                 ; 0059780c

