; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baron_cpp_CBaron_advanceMotion_FUN_00410110(CBaron *this_ptr,float delta_time)
;
; Parameters:
; CBaron *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f5e9
;
; Called Functions:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410110
        ;   Label: core_baron.cpp_CBaron_advanceMotion_FUN_00410110
    PUSH ESI                            ; 00410111
    PUSH EBP                            ; 00410112
    MOV EBP,ESP                         ; 00410113
    AND ESP,0xfffffff8                  ; 00410115
    MOV EBX,dword ptr [EBP + 0x10]      ; 00410118
    LEA ESI,[EBX + 0x158]               ; 0041011b
    LEA EAX,[EBP + 0x14]                ; 00410121
        ;   Label: LAB_00410121
    PUSH EAX                            ; 00410124
    PUSH ESI                            ; 00410125
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00410126
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0041012b
    CMP EAX,0x64                        ; 0041012e
    JNC 0x00410170                      ; 00410131
        ;   XREF to: 00410170 (CONDITIONAL_JUMP)  ; LAB_00410170
    FLD float ptr [EBP + 0x14]          ; 00410133
        ;   Label: LAB_00410133
    FLDZ                                ; 00410136
    FCOMPP                              ; 00410138
    FNSTSW AX                           ; 0041013a
    SAHF                                ; 0041013c
    JC 0x00410121                       ; 0041013d
        ;   XREF to: 00410121 (CONDITIONAL_JUMP)  ; LAB_00410121
    MOV ESP,EBP                         ; 0041013f
    POP EBP                             ; 00410141
    POP ESI                             ; 00410142
    POP EBX                             ; 00410143
    RET                                 ; 00410144
    PUSH EBX                            ; 00410145
        ;   Label: LAB_00410145
    CALL core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 ; 00410146
        ;   XREF to: 0040fcf0 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0(CBaron * this_ptr)
    ADD ESP,0x4                         ; 0041014b
    JMP 0x00410133                      ; 0041014e
        ;   XREF to: 00410133 (UNCONDITIONAL_JUMP)  ; LAB_00410133
    MOV dword ptr [EBX + 0x200a4],0x0   ; 00410150
        ;   Label: LAB_00410150
    MOV dword ptr [EBX + 0x200a8],0x0   ; 0041015a
    MOV dword ptr [EBX + 0x20084],0x0   ; 00410164
    JMP 0x00410133                      ; 0041016e
        ;   XREF to: 00410133 (UNCONDITIONAL_JUMP)  ; LAB_00410133
    JBE 0x00410145                      ; 00410170
        ;   XREF to: 00410145 (CONDITIONAL_JUMP)  ; LAB_00410145
        ;   Label: LAB_00410170
    CMP EAX,0x6e                        ; 00410172
    JZ 0x00410150                       ; 00410175
        ;   XREF to: 00410150 (CONDITIONAL_JUMP)  ; LAB_00410150
    JMP 0x00410133                      ; 00410177
        ;   XREF to: 00410133 (UNCONDITIONAL_JUMP)  ; LAB_00410133

