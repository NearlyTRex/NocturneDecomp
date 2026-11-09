; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_00410590(CBaron *param_1,float param_2)
;
;
; XREF[1]:
;   core_baron.cpp_FUN_0040f950 at 0040fa69
;
; Called Functions:
;   core_baron.cpp_FUN_00410170
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410590
        ;   Label: core_baron.cpp_FUN_00410590
    PUSH ESI                            ; 00410591
    PUSH EBP                            ; 00410592
    MOV EBP,ESP                         ; 00410593
    AND ESP,0xfffffff8                  ; 00410595
    MOV EBX,dword ptr [EBP + 0x10]      ; 00410598
    LEA ESI,[EBX + 0x2b4]               ; 0041059b
    LEA EAX,[EBP + 0x14]                ; 004105a1
        ;   Label: LAB_004105a1
    PUSH EAX                            ; 004105a4
    PUSH ESI                            ; 004105a5
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004105a6
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004105ab
    CMP EAX,0x64                        ; 004105ae
    JNC 0x004105f0                      ; 004105b1
        ;   XREF to: 004105f0 (CONDITIONAL_JUMP)  ; LAB_004105f0
    FLD float ptr [EBP + 0x14]          ; 004105b3
        ;   Label: LAB_004105b3
    FLDZ                                ; 004105b6
    FCOMPP                              ; 004105b8
    FNSTSW AX                           ; 004105ba
    SAHF                                ; 004105bc
    JC 0x004105a1                       ; 004105bd
        ;   XREF to: 004105a1 (CONDITIONAL_JUMP)  ; LAB_004105a1
    MOV ESP,EBP                         ; 004105bf
    POP EBP                             ; 004105c1
    POP ESI                             ; 004105c2
    POP EBX                             ; 004105c3
    RET                                 ; 004105c4
    PUSH EBX                            ; 004105c5
        ;   Label: LAB_004105c5
    CALL core_baron.cpp_FUN_00410170    ; 004105c6
        ;   XREF to: 00410170 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_FUN_00410170(CBaron * this_ptr)
    ADD ESP,0x4                         ; 004105cb
    JMP 0x004105b3                      ; 004105ce
        ;   XREF to: 004105b3 (UNCONDITIONAL_JUMP)  ; LAB_004105b3
    MOV dword ptr [EBX + 0x25738],0x0   ; 004105d0
        ;   Label: LAB_004105d0
    MOV dword ptr [EBX + 0x2573c],0x0   ; 004105da
    MOV dword ptr [EBX + 0x25718],0x0   ; 004105e4
    JMP 0x004105b3                      ; 004105ee
        ;   XREF to: 004105b3 (UNCONDITIONAL_JUMP)  ; LAB_004105b3
    JBE 0x004105c5                      ; 004105f0
        ;   XREF to: 004105c5 (CONDITIONAL_JUMP)  ; LAB_004105c5
        ;   Label: LAB_004105f0
    CMP EAX,0x6e                        ; 004105f2
    JZ 0x004105d0                       ; 004105f5
        ;   XREF to: 004105d0 (CONDITIONAL_JUMP)  ; LAB_004105d0
    JMP 0x004105b3                      ; 004105f7
        ;   XREF to: 004105b3 (UNCONDITIONAL_JUMP)  ; LAB_004105b3

