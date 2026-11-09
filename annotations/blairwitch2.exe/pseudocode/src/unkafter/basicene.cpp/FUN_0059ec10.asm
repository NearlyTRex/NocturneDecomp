; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_0059ec10(CCharacter *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   unkafter_basicene.cpp_FUN_0059e8c0 at 0059ea43
;   unkafter_basicene.cpp_FUN_0059ed50 at 0059ed5b
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005ef960
;
; Called Functions:
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ec10
        ;   Label: unkafter_basicene.cpp_FUN_0059ec10
    PUSH ESI                            ; 0059ec11
    PUSH EDI                            ; 0059ec12
    SUB ESP,0x10                        ; 0059ec13
    MOV EBX,dword ptr [ESP + 0x20]      ; 0059ec16
    PUSH dword ptr [ESP + 0x24]         ; 0059ec1a
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059ec1e
    PUSH EBX                            ; 0059ec24
    MOV dword ptr [EBX + 0x342c],0x0    ; 0059ec25
    CALL dword ptr [EAX + 0x150]        ; 0059ec2f
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0059ec35
    ADD ESP,0x8                         ; 0059ec3b
    TEST EDX,EDX                        ; 0059ec3e
    JZ 0x0059eca5                       ; 0059ec40
        ;   XREF to: 0059eca5 (CONDITIONAL_JUMP)  ; LAB_0059eca5
    MOV EAX,EDX                         ; 0059ec42
    PUSH EAX                            ; 0059ec44
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0059ec45
    CALL dword ptr [EDX + 0x114]        ; 0059ec4b
    ADD ESP,0x4                         ; 0059ec51
    TEST EAX,EAX                        ; 0059ec54
    JZ 0x0059ec7c                       ; 0059ec56
        ;   XREF to: 0059ec7c (CONDITIONAL_JUMP)  ; LAB_0059ec7c
    CMP dword ptr [EBX + 0x10af0],0x0   ; 0059ec58
    JZ 0x0059ec7c                       ; 0059ec5f
        ;   XREF to: 0059ec7c (CONDITIONAL_JUMP)  ; LAB_0059ec7c
    MOV dword ptr [EBX + 0x10af0],0x0   ; 0059ec61
    MOV dword ptr [EBX + 0x10a78],0x0   ; 0059ec6b
    ADD ESP,0x10                        ; 0059ec75
        ;   Label: LAB_0059ec75
    POP EDI                             ; 0059ec78
    POP ESI                             ; 0059ec79
    POP EBX                             ; 0059ec7a
    RET                                 ; 0059ec7b
    ADD EBX,0x10af8                     ; 0059ec7c
        ;   Label: LAB_0059ec7c
    PUSH 0x5ef960                       ; 0059ec82 | = "Chasing"
    FLD float ptr [EBX + 0x880]         ; 0059ec87
    MOV dword ptr [EBX + 0xffffff74],0x1 ; 0059ec8d
    PUSH EBX                            ; 0059ec97
    FSTP float ptr [EBX + -0x7c]        ; 0059ec98
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 0059ec9b
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059eca0
    JMP 0x0059ec75                      ; 0059eca3
        ;   XREF to: 0059ec75 (UNCONDITIONAL_JUMP)  ; LAB_0059ec75
    MOV EDI,ESP                         ; 0059eca5
        ;   Label: LAB_0059eca5
    LEA ESI,[EBX + 0x257c]              ; 0059eca7
    MOVSD ES:EDI,ESI                    ; 0059ecad
    MOVSD ES:EDI,ESI                    ; 0059ecae
    MOVSD ES:EDI,ESI                    ; 0059ecaf
    MOV EAX,dword ptr [EBX + 0x2578]    ; 0059ecb0
    PUSH 0x3e32b8c2                     ; 0059ecb6
    MOV dword ptr [ESP + 0x10],EAX      ; 0059ecbb
    LEA EAX,[EBX + 0x11424]             ; 0059ecbf
    PUSH dword ptr [EBX + 0x1142c]      ; 0059ecc5
    PUSH EAX                            ; 0059eccb
    PUSH EDX                            ; 0059eccc
    LEA EAX,[EBX + 0x11360]             ; 0059eccd
    PUSH EAX                            ; 0059ecd3
    PUSH EBX                            ; 0059ecd4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0059ecd5
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0059ecda
    TEST EAX,EAX                        ; 0059ecdd
    JZ 0x0059ed29                       ; 0059ecdf
        ;   XREF to: 0059ed29 (CONDITIONAL_JUMP)  ; LAB_0059ed29
    MOV EAX,ESP                         ; 0059ece1
    LEA EDX,[EBX + 0x257c]              ; 0059ece3
    CMP EDX,EAX                         ; 0059ece9
    JZ 0x0059ed00                       ; 0059eceb
        ;   XREF to: 0059ed00 (CONDITIONAL_JUMP)  ; LAB_0059ed00
    MOV EAX,dword ptr [ESP]             ; 0059eced
    MOV dword ptr [EDX],EAX             ; 0059ecf0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059ecf2
    MOV dword ptr [EDX + 0x4],EAX       ; 0059ecf6
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059ecf9
    MOV dword ptr [EDX + 0x8],EAX       ; 0059ecfd
    PUSH 0x1                            ; 0059ed00
        ;   Label: LAB_0059ed00
    MOV ESI,dword ptr [EBX + 0x11384]   ; 0059ed02
    PUSH ESI                            ; 0059ed08
    ADD EBX,0x2b4                       ; 0059ed09
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059ed0f
    PUSH EBX                            ; 0059ed13
    MOV dword ptr [EBX + 0x22c4],EAX    ; 0059ed14
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ed1a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ed1f
    ADD ESP,0x10                        ; 0059ed22
    POP EDI                             ; 0059ed25
    POP ESI                             ; 0059ed26
    POP EBX                             ; 0059ed27
    RET                                 ; 0059ed28
    PUSH 0x1                            ; 0059ed29
        ;   Label: LAB_0059ed29
    MOV ECX,dword ptr [EBX + 0x11388]   ; 0059ed2b
    PUSH ECX                            ; 0059ed31
    ADD EBX,0x2b4                       ; 0059ed32
    PUSH EBX                            ; 0059ed38
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0059ed39
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059ed3e
    ADD ESP,0x10                        ; 0059ed41
    POP EDI                             ; 0059ed44
    POP ESI                             ; 0059ed45
    POP EBX                             ; 0059ed46
    RET                                 ; 0059ed47

