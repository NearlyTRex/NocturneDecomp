; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_scat_cpp_FUN_00557d20(void)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_scat.cpp_FUN_005571f0 at 00557272
;
; Referenced Globals:
;   undefined4 g_CEnemyClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557d20
        ;   Label: core_scat.cpp_FUN_00557d20
    PUSH ESI                            ; 00557d21
    PUSH EDI                            ; 00557d22
    PUSH EBP                            ; 00557d23
    MOV EBP,ESP                         ; 00557d24
    SUB ESP,0x3c                        ; 00557d26
    AND ESP,0xfffffff8                  ; 00557d29
    MOV ESI,dword ptr [EBP + 0x14]      ; 00557d2c
    LEA EDI,[ESI + 0x158]               ; 00557d2f
    LEA EAX,[EBP + 0x18]                ; 00557d35
        ;   Label: LAB_00557d35
    PUSH EAX                            ; 00557d38
    PUSH EDI                            ; 00557d39
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 00557d3a
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 00557d3f
    CMP EAX,0x64                        ; 00557d42
    JZ 0x00557d64                       ; 00557d45
        ;   XREF to: 00557d64 (CONDITIONAL_JUMP)  ; LAB_00557d64
    PUSH EAX                            ; 00557d47
    PUSH ESI                            ; 00557d48
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 00557d49
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00557d4e
        ;   Label: LAB_00557d4e
    FLD float ptr [EBP + 0x18]          ; 00557d51
        ;   Label: LAB_00557d51
    FLDZ                                ; 00557d54
    FCOMPP                              ; 00557d56
    FNSTSW AX                           ; 00557d58
    SAHF                                ; 00557d5a
    JC 0x00557d35                       ; 00557d5b
        ;   XREF to: 00557d35 (CONDITIONAL_JUMP)  ; LAB_00557d35
    MOV ESP,EBP                         ; 00557d5d
    POP EBP                             ; 00557d5f
    POP EDI                             ; 00557d60
    POP ESI                             ; 00557d61
    POP EBX                             ; 00557d62
    RET                                 ; 00557d63
    MOV EDX,dword ptr [0x02cf2bf0]      ; 00557d64 | g_CEnemyClassInfo.name_hash
        ;   Label: LAB_00557d64
    PUSH EDX                            ; 00557d6a
    MOV ECX,dword ptr [ESI + 0x2598]    ; 00557d6b
    PUSH ECX                            ; 00557d71
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00557d72
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 00557d77
    ADD ESP,0x8                         ; 00557d79
    TEST EAX,EAX                        ; 00557d7c
    JZ 0x00557d51                       ; 00557d7e
        ;   XREF to: 00557d51 (CONDITIONAL_JUMP)  ; LAB_00557d51
    MOV EAX,ESP                         ; 00557d80
    PUSH EAX                            ; 00557d82
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 00557d83
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    MOV EAX,0x40a00000                  ; 00557d88
    ADD ESP,0x4                         ; 00557d8d
    MOV EDX,ESP                         ; 00557d90
    MOV dword ptr [ESP + 0x4],EAX       ; 00557d92
    PUSH EDX                            ; 00557d96
    MOV dword ptr [ESP + 0x38],ESI      ; 00557d97
    MOV dword ptr [ESP + 0x3c],ESI      ; 00557d9b
    PUSH EBX                            ; 00557d9f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00557da0
    CALL dword ptr [EAX + 0x11c]        ; 00557da6
    JMP 0x00557d4e                      ; 00557dac
        ;   XREF to: 00557d4e (UNCONDITIONAL_JUMP)  ; LAB_00557d4e

