; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004ebeb0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x60]:8  local_60
; undefined8       Stack[-0x58]:8  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_hero.cpp_FUN_004ec020 at 004ec07d
;
; Referenced Globals:
;   undefined4 DAT_005e48fd
;   undefined4 DAT_005e4905
;   undefined4 DAT_005e490d
;   undefined4 DAT_005e4915
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CActorDestinationClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408bb0
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550
;   core_vecdir.cpp_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ebeb0
        ;   Label: core_hero.cpp_CHero_findItemUseTarget_FUN_004ebeb0
    PUSH ESI                            ; 004ebeb1
    PUSH EDI                            ; 004ebeb2
    PUSH EBP                            ; 004ebeb3
    MOV EBP,ESP                         ; 004ebeb4
    SUB ESP,0x4c                        ; 004ebeb6
    AND ESP,0xfffffff8                  ; 004ebeb9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ebebc
    MOV EAX,dword ptr [EAX + 0x1fe24]   ; 004ebebf
    MOV dword ptr [ESP + 0x40],EAX      ; 004ebec5
    TEST EAX,EAX                        ; 004ebec9
    JZ 0x004ebeeb                       ; 004ebecb
        ;   XREF to: 004ebeeb (CONDITIONAL_JUMP)  ; LAB_004ebeeb
    XOR EDX,EDX                         ; 004ebecd
    MOV dword ptr [ESP + 0x44],EDX      ; 004ebecf
    MOV dword ptr [ESP + 0x48],EDX      ; 004ebed3
    MOV EBX,dword ptr [0x00622c18]      ; 004ebed7 | g_CDemonSetPtr
        ;   Label: LAB_004ebed7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ebedd
    CMP EAX,dword ptr [EBX + 0x14d164]  ; 004ebee1 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004ebf08                       ; 004ebee7
        ;   XREF to: 004ebf08 (CONDITIONAL_JUMP)  ; LAB_004ebf08
    XOR EAX,EAX                         ; 004ebee9
    MOV ESP,EBP                         ; 004ebeeb
        ;   Label: LAB_004ebeeb
    POP EBP                             ; 004ebeed
    POP EDI                             ; 004ebeee
    POP ESI                             ; 004ebeef
    POP EBX                             ; 004ebef0
    RET                                 ; 004ebef1
    MOV EDI,dword ptr [ESP + 0x44]      ; 004ebef2
        ;   Label: LAB_004ebef2
    MOV ESI,dword ptr [ESP + 0x48]      ; 004ebef6
    INC EDI                             ; 004ebefa
    ADD ESI,0x4                         ; 004ebefb
    MOV dword ptr [ESP + 0x44],EDI      ; 004ebefe
    MOV dword ptr [ESP + 0x48],ESI      ; 004ebf02
    JMP 0x004ebed7                      ; 004ebf06
        ;   XREF to: 004ebed7 (UNCONDITIONAL_JUMP)  ; LAB_004ebed7
    MOV EAX,dword ptr [ESP + 0x48]      ; 004ebf08
        ;   Label: LAB_004ebf08
    MOV EDI,dword ptr [0x0152c398]      ; 004ebf0c | g_CActorDestinationClassInfo.name_hash
    ADD EBX,EAX                         ; 004ebf12
    PUSH EDI                            ; 004ebf14
    MOV EDX,dword ptr [EBX + 0x14d168]  ; 004ebf15 | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EDX                            ; 004ebf1b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ebf1c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 004ebf21
    ADD ESP,0x8                         ; 004ebf23
    TEST EAX,EAX                        ; 004ebf26
    JZ 0x004ebef2                       ; 004ebf28
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    MOV ECX,dword ptr [ESP + 0x40]      ; 004ebf2a
    PUSH ECX                            ; 004ebf2e
    PUSH EAX                            ; 004ebf2f
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550 ; 004ebf30
        ;   XREF to: 0045d550 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_0045d550(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ebf35
    TEST EAX,EAX                        ; 004ebf38
    JZ 0x004ebef2                       ; 004ebf3a
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    ADD EBX,0x20                        ; 004ebf3c
    PUSH EBX                            ; 004ebf3f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ebf40
    PUSH EBX                            ; 004ebf43
    LEA ESI,[ESP + 0x3c]                ; 004ebf44
    LEA EDI,[ESP + 0x30]                ; 004ebf48
    CALL core_actor.cpp_FUN_00408bb0    ; 004ebf4c
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x3c]                ; 004ebf51
    ADD ESP,0x8                         ; 004ebf55
    MOVSD ES:EDI,ESI                    ; 004ebf58
    MOVSD ES:EDI,ESI                    ; 004ebf59
    MOVSD ES:EDI,ESI                    ; 004ebf5a
    FLD1                                ; 004ebf5b
    FLD float ptr [ESP + 0x2c]          ; 004ebf5d
    FSTP double ptr [ESP + 0x8]         ; 004ebf61
    FCOMP double ptr [ESP + 0x8]        ; 004ebf65
    FNSTSW AX                           ; 004ebf69
    SAHF                                ; 004ebf6b
    JA 0x004ebef2                       ; 004ebf6c
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    FLD double ptr [ESP + 0x8]          ; 004ebf6e
    FCOMP double ptr [0x005e48fd]       ; 004ebf72 | DAT_005e48fd
    FNSTSW AX                           ; 004ebf78
    SAHF                                ; 004ebf7a
    JA 0x004ebef2                       ; 004ebf7b
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    FLD float ptr [ESP + 0x30]          ; 004ebf81
    FST double ptr [ESP]                ; 004ebf85
    FCOMP double ptr [0x005e4905]       ; 004ebf88 | DAT_005e4905
    FNSTSW AX                           ; 004ebf8e
    SAHF                                ; 004ebf90
    JC 0x004ebef2                       ; 004ebf91
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    FLD double ptr [ESP]                ; 004ebf97
    FCOMP double ptr [0x005e490d]       ; 004ebf9a | DAT_005e490d
    FNSTSW AX                           ; 004ebfa0
    SAHF                                ; 004ebfa2
    JA 0x004ebef2                       ; 004ebfa3
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    FLD float ptr [ESP + 0x28]          ; 004ebfa9
    FABS                                ; 004ebfad
    FCOMP double ptr [0x005e490d]       ; 004ebfaf | DAT_005e490d
    FNSTSW AX                           ; 004ebfb5
    SAHF                                ; 004ebfb7
    JA 0x004ebef2                       ; 004ebfb8
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    LEA EAX,[ESP + 0x28]                ; 004ebfbe
    PUSH EAX                            ; 004ebfc2
    LEA ESI,[ESP + 0x14]                ; 004ebfc3
    LEA EDI,[ESP + 0x20]                ; 004ebfc7
    CALL core_vecdir.cpp_FUN_005a7520   ; 004ebfcb
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x14]                ; 004ebfd0
    ADD ESP,0x4                         ; 004ebfd4
    MOVSD ES:EDI,ESI                    ; 004ebfd7
    MOVSD ES:EDI,ESI                    ; 004ebfd8
    MOVSD ES:EDI,ESI                    ; 004ebfd9
    FLD float ptr [ESP + 0x20]          ; 004ebfda
    FABS                                ; 004ebfde
    FCOMP double ptr [0x005e4915]       ; 004ebfe0 | DAT_005e4915
    FNSTSW AX                           ; 004ebfe6
    SAHF                                ; 004ebfe8
    JA 0x004ebef2                       ; 004ebfe9
        ;   XREF to: 004ebef2 (CONDITIONAL_JUMP)  ; LAB_004ebef2
    MOV dword ptr [EBX + 0x1ff70],0x0   ; 004ebfef
    MOV EAX,dword ptr [ESP + 0x40]      ; 004ebff9
    MOV dword ptr [EBX + 0x1ff60],0x5   ; 004ebffd
    MOV dword ptr [EBX + 0x1ff64],EAX   ; 004ec007
    MOV dword ptr [EBX + 0x1ff68],EAX   ; 004ec00d
    MOV EAX,0x1                         ; 004ec013
    MOV ESP,EBP                         ; 004ec018
    POP EBP                             ; 004ec01a
    POP EDI                             ; 004ec01b
    POP ESI                             ; 004ec01c
    POP EBX                             ; 004ec01d
    RET                                 ; 004ec01e

