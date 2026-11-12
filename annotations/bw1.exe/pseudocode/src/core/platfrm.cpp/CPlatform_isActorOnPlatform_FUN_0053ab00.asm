; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_platfrm_cpp_CPlatform_isActorOnPlatform_FUN_0053ab00(CPlatform *this_ptr,CDemonActor *actor)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
;
; XREF[1]:
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 0053a127
;
; Referenced Globals:
;   undefined4 DAT_005ed61b
;   undefined4 DAT_005ed623
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dmodel.cpp_FUN_00467c00
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ab00
        ;   Label: core_platfrm.cpp_CPlatform_isActorOnPlatform_FUN_0053ab00
    PUSH ESI                            ; 0053ab01
    PUSH EDI                            ; 0053ab02
    PUSH EBP                            ; 0053ab03
    MOV EBP,ESP                         ; 0053ab04
    SUB ESP,0xa0                        ; 0053ab06
    AND ESP,0xfffffff8                  ; 0053ab0c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053ab0f
    CMP dword ptr [EBP + 0x18],0x0      ; 0053ab12
    JNZ 0x0053ab21                      ; 0053ab16
        ;   XREF to: 0053ab21 (CONDITIONAL_JUMP)  ; LAB_0053ab21
    XOR EAX,EAX                         ; 0053ab18
        ;   Label: LAB_0053ab18
    MOV ESP,EBP                         ; 0053ab1a
    POP EBP                             ; 0053ab1c
    POP EDI                             ; 0053ab1d
    POP ESI                             ; 0053ab1e
    POP EBX                             ; 0053ab1f
    RET                                 ; 0053ab20
    LEA EAX,[ESP + 0x8]                 ; 0053ab21
        ;   Label: LAB_0053ab21
    PUSH EAX                            ; 0053ab25
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 0053ab26
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    LEA EAX,[ESP + 0xc]                 ; 0053ab2b
    ADD ESP,0x4                         ; 0053ab2f
    XOR ECX,ECX                         ; 0053ab32
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053ab34
    PUSH EAX                            ; 0053ab37
    MOV EDI,dword ptr [EBP + 0x18]      ; 0053ab38
    MOV dword ptr [ESP + 0xc],ECX       ; 0053ab3b
    PUSH EDI                            ; 0053ab3f
    MOV ESI,dword ptr [ESI + 0x154]     ; 0053ab40
    CALL dword ptr [ESI + 0x3c]         ; 0053ab46
    ADD ESP,0x8                         ; 0053ab49
    CMP EAX,0x2                         ; 0053ab4c
    JNZ 0x0053ab18                      ; 0053ab4f
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    PUSH dword ptr [EBX + 0x30]         ; 0053ab51
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0053ab54
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [ESP + 0xa0],EAX      ; 0053ab59
    FLD float ptr [ESP + 0xa0]          ; 0053ab60
    ADD ESP,0x4                         ; 0053ab67
    PUSH dword ptr [EBX + 0x38]         ; 0053ab6a
    FSTP float ptr [EBX + 0x30]         ; 0053ab6d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0053ab70
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    FLD float ptr [EBX + 0x30]          ; 0053ab75
    MOV dword ptr [ESP + 0xa0],EAX      ; 0053ab78
    FABS                                ; 0053ab7f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053ab81
    MOV dword ptr [EBX + 0x38],EAX      ; 0053ab88
    ADD ESP,0x4                         ; 0053ab8b
    FCOMP double ptr [0x005ed61b]       ; 0053ab8e | DAT_005ed61b
    FNSTSW AX                           ; 0053ab94
    SAHF                                ; 0053ab96
    JA 0x0053ab18                       ; 0053ab97
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [EBX + 0x38]          ; 0053ab9d
    FABS                                ; 0053aba0
    FCOMP double ptr [0x005ed61b]       ; 0053aba2 | DAT_005ed61b
    FNSTSW AX                           ; 0053aba8
    SAHF                                ; 0053abaa
    JA 0x0053ab18                       ; 0053abab
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    PUSH EBX                            ; 0053abb1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053abb2
    LEA ESI,[ESP + 0x34]                ; 0053abb8
    CALL dword ptr [EAX + 0x1c]         ; 0053abbc
    ADD ESP,0x4                         ; 0053abbf
    LEA EDI,[ESP + 0x48]                ; 0053abc2
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053abc6
    MOV ECX,0x6                         ; 0053abc9
    ADD EAX,0x20                        ; 0053abce
    LEA ESI,[ESP + 0x30]                ; 0053abd1
    PUSH EAX                            ; 0053abd5
    MOVSD.REP ES:EDI,ESI                ; 0053abd6
    PUSH EBX                            ; 0053abd8
    LEA ESI,[ESP + 0x68]                ; 0053abd9
    LEA EDI,[ESP + 0x98]                ; 0053abdd
    CALL core_actor.cpp_FUN_00408bb0    ; 0053abe4
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x68]                ; 0053abe9
    ADD ESP,0x8                         ; 0053abed
    MOVSD ES:EDI,ESI                    ; 0053abf0
    MOVSD ES:EDI,ESI                    ; 0053abf1
    MOVSD ES:EDI,ESI                    ; 0053abf2
    FLD float ptr [ESP + 0x90]          ; 0053abf3
    FADD float ptr [ESP + 0x24]         ; 0053abfa
    FCOMP float ptr [ESP + 0x48]        ; 0053abfe
    FNSTSW AX                           ; 0053ac02
    SAHF                                ; 0053ac04
    JC 0x0053ab18                       ; 0053ac05
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [ESP + 0x90]          ; 0053ac0b
    FSUB float ptr [ESP + 0x24]         ; 0053ac12
    FCOMP float ptr [ESP + 0x54]        ; 0053ac16
    FNSTSW AX                           ; 0053ac1a
    SAHF                                ; 0053ac1c
    JA 0x0053ab18                       ; 0053ac1d
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [ESP + 0x98]          ; 0053ac23
    FADD float ptr [ESP + 0x24]         ; 0053ac2a
    FCOMP float ptr [ESP + 0x50]        ; 0053ac2e
    FNSTSW AX                           ; 0053ac32
    SAHF                                ; 0053ac34
    JC 0x0053ab18                       ; 0053ac35
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [ESP + 0x98]          ; 0053ac3b
    FSUB float ptr [ESP + 0x24]         ; 0053ac42
    FCOMP float ptr [ESP + 0x5c]        ; 0053ac46
    FNSTSW AX                           ; 0053ac4a
    SAHF                                ; 0053ac4c
    JA 0x0053ab18                       ; 0053ac4d
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [ESP + 0x94]          ; 0053ac53
    FADD float ptr [ESP + 0x20]         ; 0053ac5a
    FCOMP float ptr [ESP + 0x4c]        ; 0053ac5e
    FNSTSW AX                           ; 0053ac62
    SAHF                                ; 0053ac64
    JC 0x0053ab18                       ; 0053ac65
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD float ptr [ESP + 0x94]          ; 0053ac6b
    FADD float ptr [ESP + 0x1c]         ; 0053ac72
    FCOMP float ptr [ESP + 0x58]        ; 0053ac76
    FNSTSW AX                           ; 0053ac7a
    SAHF                                ; 0053ac7c
    JA 0x0053ab18                       ; 0053ac7d
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    LEA EAX,[EBX + 0x158]               ; 0053ac83
    PUSH EAX                            ; 0053ac89
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053ac8a
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV EDX,dword ptr [EAX + 0x358]     ; 0053ac8f
    ADD ESP,0x4                         ; 0053ac95
    TEST EDX,EDX                        ; 0053ac98
    JNZ 0x0053aca8                      ; 0053ac9a
        ;   XREF to: 0053aca8 (CONDITIONAL_JUMP)  ; LAB_0053aca8
    MOV EAX,0x1                         ; 0053ac9c
        ;   Label: LAB_0053ac9c
    MOV ESP,EBP                         ; 0053aca1
    POP EBP                             ; 0053aca3
    POP EDI                             ; 0053aca4
    POP ESI                             ; 0053aca5
    POP EBX                             ; 0053aca6
    RET                                 ; 0053aca7
    FLD float ptr [ESP + 0x20]          ; 0053aca8
        ;   Label: LAB_0053aca8
    LEA EDI,[ESP + 0x84]                ; 0053acac
    LEA ESI,[ESP + 0x90]                ; 0053acb3
    LEA EAX,[ESP + 0x6c]                ; 0053acba
    XOR ECX,ECX                         ; 0053acbe
    ADD EBX,0x158                       ; 0053acc0
    MOV dword ptr [ESP + 0x78],ECX      ; 0053acc6
    PUSH EAX                            ; 0053acca
    LEA EAX,[ESP + 0x7c]                ; 0053accb
    MOV dword ptr [ESP + 0x84],ECX      ; 0053accf
    PUSH EAX                            ; 0053acd6
    LEA EAX,[ESP + 0x8c]                ; 0053acd7
    MOVSD ES:EDI,ESI                    ; 0053acde
    MOVSD ES:EDI,ESI                    ; 0053acdf
    MOVSD ES:EDI,ESI                    ; 0053ace0
    PUSH EAX                            ; 0053ace1
    FADD float ptr [0x005ed623]         ; 0053ace2 | DAT_005ed623
    MOV ESI,0x3f800000                  ; 0053ace8
    PUSH ECX                            ; 0053aced
    FADD float ptr [ESP + 0x98]         ; 0053acee
    PUSH EBX                            ; 0053acf5
    FSTP float ptr [ESP + 0x9c]         ; 0053acf6
    MOV dword ptr [ESP + 0x90],ESI      ; 0053acfd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 0053ad04
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0053ad09
    PUSH EAX                            ; 0053ad0c
    CALL core_dmodel.cpp_FUN_00467c00   ; 0053ad0d
        ;   XREF to: 00467c00 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_FUN_00467c00()
    MOV dword ptr [ESP + 0xb0],EAX      ; 0053ad12
    FLD float ptr [ESP + 0xb0]          ; 0053ad19
    ADD ESP,0x14                        ; 0053ad20
    FLDZ                                ; 0053ad23
    FXCH                                ; 0053ad25
    FSTP double ptr [ESP]               ; 0053ad27
    FCOMP double ptr [ESP]              ; 0053ad2a
    FNSTSW AX                           ; 0053ad2d
    SAHF                                ; 0053ad2f
    JA 0x0053ab18                       ; 0053ad30
        ;   XREF to: 0053ab18 (CONDITIONAL_JUMP)  ; LAB_0053ab18
    FLD1                                ; 0053ad36
    FCOMP double ptr [ESP]              ; 0053ad38
    FNSTSW AX                           ; 0053ad3b
    SAHF                                ; 0053ad3d
    JNC 0x0053ac9c                      ; 0053ad3e
        ;   XREF to: 0053ac9c (CONDITIONAL_JUMP)  ; LAB_0053ac9c
    XOR EAX,EAX                         ; 0053ad44
    MOV ESP,EBP                         ; 0053ad46
    POP EBP                             ; 0053ad48
    POP EDI                             ; 0053ad49
    POP ESI                             ; 0053ad4a
    POP EBX                             ; 0053ad4b
    RET                                 ; 0053ad4c

