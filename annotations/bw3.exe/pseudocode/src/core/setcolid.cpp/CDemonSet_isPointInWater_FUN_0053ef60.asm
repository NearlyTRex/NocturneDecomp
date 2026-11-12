; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isPointInWater_FUN_0053ef60(CDemonSet *this_ptr,CVector3f *point)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cb2b
;   core_charactr.cpp_FUN_00433c60 at 00433dfc
;
; Referenced Globals:
;   undefined4 DAT_005d0c72
;   CWater* g_CWaterPtr = 02cfd950
;   undefined4 g_CWaterInstance.water_level_y
;   undefined4 g_CWaterActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ef60
        ;   Label: core_setcolid.cpp_CDemonSet_isPointInWater_FUN_0053ef60
    PUSH ESI                            ; 0053ef61
    PUSH EDI                            ; 0053ef62
    PUSH EBP                            ; 0053ef63
    SUB ESP,0x4c                        ; 0053ef64
    MOV EAX,[0x00606b20]                ; 0053ef67 | g_CWaterPtr
    TEST dword ptr [EAX + 0x4],0x7fffffff ; 0053ef6c | g_CWaterInstance.water_level_y
    JZ 0x0053ef84                       ; 0053ef73
        ;   XREF to: 0053ef84 (CONDITIONAL_JUMP)  ; LAB_0053ef84
    MOV EBX,dword ptr [ESP + 0x64]      ; 0053ef75
    FLD float ptr [EBX + 0x4]           ; 0053ef79
    FCOMP float ptr [EAX + 0x4]         ; 0053ef7c | g_CWaterInstance.water_level_y
    FNSTSW AX                           ; 0053ef7f
    SAHF                                ; 0053ef81
    JC 0x0053efdb                       ; 0053ef82
        ;   XREF to: 0053efdb (CONDITIONAL_JUMP)  ; LAB_0053efdb
    MOV EAX,dword ptr [ESP + 0x60]      ; 0053ef84
        ;   Label: LAB_0053ef84
    XOR ECX,ECX                         ; 0053ef88
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0053ef8a
    MOV dword ptr [ESP + 0x48],ECX      ; 0053ef90
    TEST EBX,EBX                        ; 0053ef94
    JLE 0x0053efcf                      ; 0053ef96
        ;   XREF to: 0053efcf (CONDITIONAL_JUMP)  ; LAB_0053efcf
    MOV EBP,EAX                         ; 0053ef98
    MOV EAX,[0x02d09d20]                ; 0053ef9a | g_CWaterActorClassInfo.name_hash
        ;   Label: LAB_0053ef9a
    PUSH EAX                            ; 0053ef9f
    MOV EDX,dword ptr [EBP + 0x14d168]  ; 0053efa0
    PUSH EDX                            ; 0053efa6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053efa7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 0053efac
    ADD ESP,0x8                         ; 0053efae
    TEST EAX,EAX                        ; 0053efb1
    JNZ 0x0053efe2                      ; 0053efb3
        ;   XREF to: 0053efe2 (CONDITIONAL_JUMP)  ; LAB_0053efe2
    MOV ESI,dword ptr [ESP + 0x48]      ; 0053efb5
        ;   Label: LAB_0053efb5
    MOV EBX,dword ptr [ESP + 0x60]      ; 0053efb9
    ADD EBP,0x4                         ; 0053efbd
    INC ESI                             ; 0053efc0
    MOV EDI,dword ptr [EBX + 0x14d164]  ; 0053efc1
    MOV dword ptr [ESP + 0x48],ESI      ; 0053efc7
    CMP ESI,EDI                         ; 0053efcb
    JL 0x0053ef9a                       ; 0053efcd
        ;   XREF to: 0053ef9a (CONDITIONAL_JUMP)  ; LAB_0053ef9a
    XOR ESI,ESI                         ; 0053efcf
        ;   Label: LAB_0053efcf
    MOV EAX,ESI                         ; 0053efd1
        ;   Label: LAB_0053efd1
    ADD ESP,0x4c                        ; 0053efd3
    POP EBP                             ; 0053efd6
    POP EDI                             ; 0053efd7
    POP ESI                             ; 0053efd8
    POP EBX                             ; 0053efd9
    RET                                 ; 0053efda
    MOV ESI,0x1                         ; 0053efdb
        ;   Label: LAB_0053efdb
    JMP 0x0053efd1                      ; 0053efe0
        ;   XREF to: 0053efd1 (UNCONDITIONAL_JUMP)  ; LAB_0053efd1
    MOV ECX,dword ptr [ESP + 0x64]      ; 0053efe2
        ;   Label: LAB_0053efe2
    PUSH ECX                            ; 0053efe6
    PUSH EAX                            ; 0053efe7
    LEA ESI,[ESP + 0x44]                ; 0053efe8
    LEA EDI,[ESP + 0x38]                ; 0053efec
    CALL core_actor.cpp_FUN_00408bf0    ; 0053eff0
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x44]                ; 0053eff5
    ADD ESP,0x8                         ; 0053eff9
    MOVSD ES:EDI,ESI                    ; 0053effc
    MOVSD ES:EDI,ESI                    ; 0053effd
    MOVSD ES:EDI,ESI                    ; 0053effe
    PUSH EBX                            ; 0053efff
    MOV EAX,dword ptr [EBX + 0x154]     ; 0053f000
    LEA ESI,[ESP + 0x4]                 ; 0053f006
    LEA EDI,[ESP + 0x1c]                ; 0053f00a
    CALL dword ptr [EAX + 0x1c]         ; 0053f00e
    MOV ECX,0x6                         ; 0053f011
    LEA ESI,[ESP + 0x4]                 ; 0053f016
    ADD ESP,0x4                         ; 0053f01a
    MOVSD.REP ES:EDI,ESI                ; 0053f01d
    FLD float ptr [ESP + 0x1c]          ; 0053f01f
    FADD float ptr [0x005d0c72]         ; 0053f023 | DAT_005d0c72
    FLD float ptr [ESP + 0x18]          ; 0053f029
    FXCH                                ; 0053f02d
    FSTP float ptr [ESP + 0x1c]         ; 0053f02f
    FCOMP float ptr [ESP + 0x30]        ; 0053f033
    FNSTSW AX                           ; 0053f037
    SAHF                                ; 0053f039
    JA 0x0053efb5                       ; 0053f03a
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    FLD float ptr [ESP + 0x1c]          ; 0053f040
    FCOMP float ptr [ESP + 0x34]        ; 0053f044
    FNSTSW AX                           ; 0053f048
    SAHF                                ; 0053f04a
    JA 0x0053efb5                       ; 0053f04b
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    FLD float ptr [ESP + 0x20]          ; 0053f051
    FCOMP float ptr [ESP + 0x38]        ; 0053f055
    FNSTSW AX                           ; 0053f059
    SAHF                                ; 0053f05b
    JA 0x0053efb5                       ; 0053f05c
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    FLD float ptr [ESP + 0x24]          ; 0053f062
    FCOMP float ptr [ESP + 0x30]        ; 0053f066
    FNSTSW AX                           ; 0053f06a
    SAHF                                ; 0053f06c
    JC 0x0053efb5                       ; 0053f06d
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    FLD float ptr [ESP + 0x28]          ; 0053f073
    FCOMP float ptr [ESP + 0x34]        ; 0053f077
    FNSTSW AX                           ; 0053f07b
    SAHF                                ; 0053f07d
    JC 0x0053efb5                       ; 0053f07e
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    FLD float ptr [ESP + 0x2c]          ; 0053f084
    FCOMP float ptr [ESP + 0x38]        ; 0053f088
    FNSTSW AX                           ; 0053f08c
    SAHF                                ; 0053f08e
    JC 0x0053efb5                       ; 0053f08f
        ;   XREF to: 0053efb5 (CONDITIONAL_JUMP)  ; LAB_0053efb5
    MOV ESI,0x1                         ; 0053f095
    MOV EAX,ESI                         ; 0053f09a
    ADD ESP,0x4c                        ; 0053f09c
    POP EBP                             ; 0053f09f
    POP EDI                             ; 0053f0a0
    POP ESI                             ; 0053f0a1
    POP EBX                             ; 0053f0a2
    RET                                 ; 0053f0a3

