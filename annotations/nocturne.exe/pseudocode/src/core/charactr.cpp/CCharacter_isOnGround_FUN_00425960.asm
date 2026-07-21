; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(int param_1)
;
;
; XREF[18]:
;   FUN_00418a00 at 00418e86
;   FUN_0041fe40 at 004207ca
;   FUN_004a9270 at 004a93ef
;   FUN_004c4970 at 004c4ab7
;   FUN_004da790 at 004dab16
;   FUN_00540f50 at 005410af
;   FUN_0055ef50 at 00560a33
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041259d
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413922
;   core_biggs.cpp_CBiggs_process_FUN_004154b0 at 004155aa
;   ... and 8 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00425960
        ;   Label: core_charactr.cpp_CCharacter_isOnGround_FUN_00425960
    CMP dword ptr [EDX + 0xdc],0x0      ; 00425964
    JNZ 0x0042597b                      ; 0042596b
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    FLD float ptr [EDX + 0x24]          ; 0042596d
    FCOMP float ptr [EDX + 0x240c]      ; 00425970
    FNSTSW AX                           ; 00425976
    SAHF                                ; 00425978
    JZ 0x00425981                       ; 00425979
        ;   XREF to: 00425981 (CONDITIONAL_JUMP)  ; LAB_00425981
    MOV EAX,0x1                         ; 0042597b
        ;   Label: LAB_0042597b
    RET                                 ; 00425980
    CMP dword ptr [EDX + 0x2408],0x0    ; 00425981
        ;   Label: LAB_00425981
    JZ 0x0042597b                       ; 00425988
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    PUSH EDX                            ; 0042598a
    MOV EAX,dword ptr [EDX + 0x14c]     ; 0042598b
    CALL dword ptr [EAX + 0x54]         ; 00425991
    ADD ESP,0x4                         ; 00425994
    TEST EAX,EAX                        ; 00425997
    JNZ 0x0042597b                      ; 00425999
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    RET                                 ; 0042599b

