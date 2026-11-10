; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_hero.cpp_FUN_004cfc80 at 004cfd2f
;
; Referenced Globals:
;   undefined4 DAT_005d9d34
;   undefined4 DAT_005d9d3c
;   undefined4 DAT_005d9d44
;   undefined4 DAT_005d9d4c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408de0
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfb00
        ;   Label: core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00
    PUSH ESI                            ; 004cfb01
    PUSH EDI                            ; 004cfb02
    PUSH EBP                            ; 004cfb03
    MOV EBP,ESP                         ; 004cfb04
    SUB ESP,0x4c                        ; 004cfb06
    AND ESP,0xfffffff8                  ; 004cfb09
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfb0c
    MOV EBX,dword ptr [EAX + 0x247e4]   ; 004cfb0f
    MOV EAX,dword ptr [EAX + EBX*0x4 + 0x24978] ; 004cfb15
    MOV dword ptr [ESP + 0x40],EAX      ; 004cfb1c
    TEST EAX,EAX                        ; 004cfb20
    JZ 0x004cfb42                       ; 004cfb22
        ;   XREF to: 004cfb42 (CONDITIONAL_JUMP)  ; LAB_004cfb42
    XOR EDX,EDX                         ; 004cfb24
    MOV dword ptr [ESP + 0x44],EDX      ; 004cfb26
    MOV dword ptr [ESP + 0x48],EDX      ; 004cfb2a
    MOV EBX,dword ptr [0x0061b5a8]      ; 004cfb2e | g_CDemonSetPtr
        ;   Label: LAB_004cfb2e
    MOV EAX,dword ptr [ESP + 0x44]      ; 004cfb34
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004cfb38 | g_CDemonSetInstance.actor_count
    JL 0x004cfb5f                       ; 004cfb3e
        ;   XREF to: 004cfb5f (CONDITIONAL_JUMP)  ; LAB_004cfb5f
    XOR EAX,EAX                         ; 004cfb40
    MOV ESP,EBP                         ; 004cfb42
        ;   Label: LAB_004cfb42
    POP EBP                             ; 004cfb44
    POP EDI                             ; 004cfb45
    POP ESI                             ; 004cfb46
    POP EBX                             ; 004cfb47
    RET                                 ; 004cfb48
    MOV EDI,dword ptr [ESP + 0x44]      ; 004cfb49
        ;   Label: LAB_004cfb49
    MOV ESI,dword ptr [ESP + 0x48]      ; 004cfb4d
    INC EDI                             ; 004cfb51
    ADD ESI,0x4                         ; 004cfb52
    MOV dword ptr [ESP + 0x44],EDI      ; 004cfb55
    MOV dword ptr [ESP + 0x48],ESI      ; 004cfb59
    JMP 0x004cfb2e                      ; 004cfb5d
        ;   XREF to: 004cfb2e (UNCONDITIONAL_JUMP)  ; LAB_004cfb2e
    MOV EAX,dword ptr [ESP + 0x48]      ; 004cfb5f
        ;   Label: LAB_004cfb5f
    MOV EDI,dword ptr [0x01510e14]      ; 004cfb63 | g_CActorDestinationClassInfo.name_hash
    ADD EBX,EAX                         ; 004cfb69
    PUSH EDI                            ; 004cfb6b
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004cfb6c | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 004cfb72
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004cfb73
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 004cfb78
    ADD ESP,0x8                         ; 004cfb7a
    TEST EAX,EAX                        ; 004cfb7d
    JZ 0x004cfb49                       ; 004cfb7f
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    MOV ECX,dword ptr [ESP + 0x40]      ; 004cfb81
    PUSH ECX                            ; 004cfb85
    PUSH EAX                            ; 004cfb86
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0 ; 004cfb87
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004cfb8c
    TEST EAX,EAX                        ; 004cfb8f
    JZ 0x004cfb49                       ; 004cfb91
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    ADD EBX,0x20                        ; 004cfb93
    PUSH EBX                            ; 004cfb96
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cfb97
    PUSH EBX                            ; 004cfb9a
    LEA ESI,[ESP + 0x3c]                ; 004cfb9b
    LEA EDI,[ESP + 0x24]                ; 004cfb9f
    CALL core_actor.cpp_FUN_00408de0    ; 004cfba3
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x3c]                ; 004cfba8
    ADD ESP,0x8                         ; 004cfbac
    MOVSD ES:EDI,ESI                    ; 004cfbaf
    MOVSD ES:EDI,ESI                    ; 004cfbb0
    MOVSD ES:EDI,ESI                    ; 004cfbb1
    FLD1                                ; 004cfbb2
    FLD float ptr [ESP + 0x20]          ; 004cfbb4
    FSTP double ptr [ESP + 0x8]         ; 004cfbb8
    FCOMP double ptr [ESP + 0x8]        ; 004cfbbc
    FNSTSW AX                           ; 004cfbc0
    SAHF                                ; 004cfbc2
    JA 0x004cfb49                       ; 004cfbc3
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    FLD double ptr [ESP + 0x8]          ; 004cfbc5
    FCOMP double ptr [0x005d9d34]       ; 004cfbc9 | DAT_005d9d34
    FNSTSW AX                           ; 004cfbcf
    SAHF                                ; 004cfbd1
    JA 0x004cfb49                       ; 004cfbd2
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    FLD float ptr [ESP + 0x24]          ; 004cfbd8
    FST double ptr [ESP]                ; 004cfbdc
    FCOMP double ptr [0x005d9d3c]       ; 004cfbdf | DAT_005d9d3c
    FNSTSW AX                           ; 004cfbe5
    SAHF                                ; 004cfbe7
    JC 0x004cfb49                       ; 004cfbe8
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    FLD double ptr [ESP]                ; 004cfbee
    FCOMP double ptr [0x005d9d44]       ; 004cfbf1 | DAT_005d9d44
    FNSTSW AX                           ; 004cfbf7
    SAHF                                ; 004cfbf9
    JA 0x004cfb49                       ; 004cfbfa
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    FLD float ptr [ESP + 0x1c]          ; 004cfc00
    FABS                                ; 004cfc04
    FCOMP double ptr [0x005d9d44]       ; 004cfc06 | DAT_005d9d44
    FNSTSW AX                           ; 004cfc0c
    SAHF                                ; 004cfc0e
    JA 0x004cfb49                       ; 004cfc0f
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    LEA EAX,[ESP + 0x1c]                ; 004cfc15
    PUSH EAX                            ; 004cfc19
    LEA ESI,[ESP + 0x14]                ; 004cfc1a
    LEA EDI,[ESP + 0x2c]                ; 004cfc1e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004cfc22
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x14]                ; 004cfc27
    ADD ESP,0x4                         ; 004cfc2b
    MOVSD ES:EDI,ESI                    ; 004cfc2e
    MOVSD ES:EDI,ESI                    ; 004cfc2f
    MOVSD ES:EDI,ESI                    ; 004cfc30
    FLD float ptr [ESP + 0x2c]          ; 004cfc31
    FABS                                ; 004cfc35
    FCOMP double ptr [0x005d9d4c]       ; 004cfc37 | DAT_005d9d4c
    FNSTSW AX                           ; 004cfc3d
    SAHF                                ; 004cfc3f
    JA 0x004cfb49                       ; 004cfc40
        ;   XREF to: 004cfb49 (CONDITIONAL_JUMP)  ; LAB_004cfb49
    MOV dword ptr [EBX + 0x25600],0x0   ; 004cfc46
    MOV EAX,dword ptr [ESP + 0x40]      ; 004cfc50
    MOV dword ptr [EBX + 0x255f0],0x5   ; 004cfc54
    MOV dword ptr [EBX + 0x255f4],EAX   ; 004cfc5e
    MOV dword ptr [EBX + 0x255f8],EAX   ; 004cfc64
    MOV EAX,0x1                         ; 004cfc6a
    MOV ESP,EBP                         ; 004cfc6f
    POP EBP                             ; 004cfc71
    POP EDI                             ; 004cfc72
    POP ESI                             ; 004cfc73
    POP EBX                             ; 004cfc74
    RET                                 ; 004cfc75

