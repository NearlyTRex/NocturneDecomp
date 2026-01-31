; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_CHaystack_FUN_004f1970(CHaystack *this_ptr)
;
; Parameters:
; CHaystack *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
;
; XREF[1]:
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f0edd
;
; Referenced Globals:
;   void* switchdataD_004f1944 = 004f19a4
;   TerminatedCString s_box_swing_wav_0062e9b3
;   TerminatedCString s_box_punch_wav_0062e9c2
;   int INT_02db8734
;   int INT_02db8738
;
; Called Functions:
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_haystack.cpp_CHaystack_FUN_004f1ab0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1970
        ;   Label: core_haystack.cpp_CHaystack_FUN_004f1970
    PUSH ESI                            ; 004f1971
    PUSH EDI                            ; 004f1972
    PUSH EBP                            ; 004f1973
    MOV EBP,ESP                         ; 004f1974
    AND ESP,0xfffffff8                  ; 004f1976
    MOV EBX,dword ptr [EBP + 0x14]      ; 004f1979
    LEA ESI,[EBX + 0x158]               ; 004f197c
    LEA EAX,[EBP + 0x18]                ; 004f1982
        ;   Label: LAB_004f1982
    PUSH EAX                            ; 004f1985
    PUSH ESI                            ; 004f1986
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 004f1987
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    MOV EDX,EAX                         ; 004f198c
    SUB EAX,0x65                        ; 004f198e
    ADD ESP,0x8                         ; 004f1991
    CMP EAX,0x7                         ; 004f1994
    JA 0x004f1a97                       ; 004f1997
        ;   XREF to: 004f1a97 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4f1944]  ; 004f199d | caseD_65 | caseD_66 | caseD_69
        ;   Label: switchD
    MOV EDI,dword ptr [0x02db8734]      ; 004f19a4 | INT_02db8734
        ;   Label: caseD_65
    PUSH EDI                            ; 004f19aa
    PUSH EBX                            ; 004f19ab
    CALL core_haystack.cpp_CHaystack_FUN_004f1ab0 ; 004f19ac
        ;   XREF to: 004f1ab0 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_FUN_004f1ab0(CHaystack * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1fbd8]   ; 004f19b1
    ADD ESP,0x8                         ; 004f19b7
    TEST EDX,EDX                        ; 004f19ba
    SETZ AL                             ; 004f19bc
        ;   Label: LAB_004f19bc
    AND EAX,0xff                        ; 004f19bf
    MOV dword ptr [EBX + 0x1fbd8],EAX   ; 004f19c4
    FLD float ptr [EBP + 0x18]          ; 004f19ca
        ;   Label: LAB_004f19ca
    FLDZ                                ; 004f19cd
    FCOMPP                              ; 004f19cf
    FNSTSW AX                           ; 004f19d1
    SAHF                                ; 004f19d3
    JC 0x004f1982                       ; 004f19d4
        ;   XREF to: 004f1982 (CONDITIONAL_JUMP)  ; LAB_004f1982
    MOV ESP,EBP                         ; 004f19d6
    POP EBP                             ; 004f19d8
    POP EDI                             ; 004f19d9
    POP ESI                             ; 004f19da
    POP EBX                             ; 004f19db
    RET                                 ; 004f19dc
    MOV EDX,dword ptr [0x02db8738]      ; 004f19dd | INT_02db8738
        ;   Label: caseD_66
    PUSH EDX                            ; 004f19e3
    PUSH EBX                            ; 004f19e4
    CALL core_haystack.cpp_CHaystack_FUN_004f1ab0 ; 004f19e5
        ;   XREF to: 004f1ab0 (UNCONDITIONAL_CALL)  ; void core_haystack.cpp_CHaystack_FUN_004f1ab0(CHaystack * this_ptr)
    MOV ECX,dword ptr [EBX + 0x1fbd8]   ; 004f19ea
    ADD ESP,0x8                         ; 004f19f0
    TEST ECX,ECX                        ; 004f19f3
    JMP 0x004f19bc                      ; 004f19f5
        ;   XREF to: 004f19bc (UNCONDITIONAL_JUMP)  ; LAB_004f19bc
    PUSH 0x40440000                     ; 004f19f7
        ;   Label: caseD_6b
    PUSH 0x0                            ; 004f19fc
    SUB ESP,0x8                         ; 004f19fe
    FLD float ptr [EBX + 0x28]          ; 004f1a01
    FSTP double ptr [ESP]               ; 004f1a04
    SUB ESP,0x8                         ; 004f1a07
    FLD float ptr [EBX + 0x24]          ; 004f1a0a
    FSTP double ptr [ESP]               ; 004f1a0d
    SUB ESP,0x8                         ; 004f1a10
    FLD float ptr [EBX + 0x20]          ; 004f1a13
    FSTP double ptr [ESP]               ; 004f1a16
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 004f1a19
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 004f1a1e
    TEST EAX,EAX                        ; 004f1a21
    JZ 0x004f19ca                       ; 004f1a23
        ;   XREF to: 004f19ca (CONDITIONAL_JUMP)  ; LAB_004f19ca
    PUSH 0x62e9b3                       ; 004f1a25 | = "box-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f1a2a
    PUSH EBX                            ; 004f1a30
    CALL dword ptr [EAX + 0x24]         ; 004f1a31
    ADD ESP,0x8                         ; 004f1a34
    JMP 0x004f19ca                      ; 004f1a37
        ;   XREF to: 004f19ca (UNCONDITIONAL_JUMP)  ; LAB_004f19ca
    PUSH 0x40440000                     ; 004f1a39
        ;   Label: caseD_6c
    PUSH 0x0                            ; 004f1a3e
    SUB ESP,0x8                         ; 004f1a40
    FLD float ptr [EBX + 0x28]          ; 004f1a43
    FSTP double ptr [ESP]               ; 004f1a46
    SUB ESP,0x8                         ; 004f1a49
    FLD float ptr [EBX + 0x24]          ; 004f1a4c
    FSTP double ptr [ESP]               ; 004f1a4f
    SUB ESP,0x8                         ; 004f1a52
    FLD float ptr [EBX + 0x20]          ; 004f1a55
    FSTP double ptr [ESP]               ; 004f1a58
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 004f1a5b
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 004f1a60
    TEST EAX,EAX                        ; 004f1a63
    JZ 0x004f19ca                       ; 004f1a65
        ;   XREF to: 004f19ca (CONDITIONAL_JUMP)  ; LAB_004f19ca
    PUSH 0x3ecccccd                     ; 004f1a6b
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004f1a70
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004f1a75
    TEST EAX,EAX                        ; 004f1a78
    JZ 0x004f19ca                       ; 004f1a7a
        ;   XREF to: 004f19ca (CONDITIONAL_JUMP)  ; LAB_004f19ca
    PUSH 0x62e9c2                       ; 004f1a80 | = "box-punch?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f1a85
    PUSH EBX                            ; 004f1a8b
    CALL dword ptr [EAX + 0x24]         ; 004f1a8c
    ADD ESP,0x8                         ; 004f1a8f
    JMP 0x004f19ca                      ; 004f1a92
        ;   XREF to: 004f19ca (UNCONDITIONAL_JUMP)  ; LAB_004f19ca
    PUSH EDX                            ; 004f1a97
        ;   Label: default
    PUSH EBX                            ; 004f1a98
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 004f1a99
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004f1a9e
    JMP 0x004f19ca                      ; 004f1aa1
        ;   XREF to: 004f19ca (UNCONDITIONAL_JUMP)  ; LAB_004f19ca

