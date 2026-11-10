; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_004ae6c0(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_00409c40 at 00409c45
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CFliesClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae6c0
        ;   Label: core_flies.cpp_findFliesByFollowActor_FUN_004ae6c0
    PUSH ESI                            ; 004ae6c1
    PUSH EDI                            ; 004ae6c2
    PUSH EBP                            ; 004ae6c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ae6c4
    XOR ESI,ESI                         ; 004ae6c8
    XOR EBX,EBX                         ; 004ae6ca
    MOV EAX,[0x00603b28]                ; 004ae6cc | g_CDemonSetPtr
        ;   Label: LAB_004ae6cc
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004ae6d1 | g_CDemonSetInstance.actor_count
    JL 0x004ae6e6                       ; 004ae6d7
        ;   XREF to: 004ae6e6 (CONDITIONAL_JUMP)  ; LAB_004ae6e6
    XOR EAX,EAX                         ; 004ae6d9
    POP EBP                             ; 004ae6db
    POP EDI                             ; 004ae6dc
    POP ESI                             ; 004ae6dd
    POP EBX                             ; 004ae6de
    RET                                 ; 004ae6df
    INC EBX                             ; 004ae6e0
        ;   Label: LAB_004ae6e0
    ADD ESI,0x4                         ; 004ae6e1
    JMP 0x004ae6cc                      ; 004ae6e4
        ;   XREF to: 004ae6cc (UNCONDITIONAL_JUMP)  ; LAB_004ae6cc
    MOV ECX,dword ptr [0x01d1a118]      ; 004ae6e6 | g_CFliesClassInfo.name_hash
        ;   Label: LAB_004ae6e6
    PUSH ECX                            ; 004ae6ec
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004ae6ed | g_CDemonSetInstance.actors[0]
    PUSH EBP                            ; 004ae6f4
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 004ae6f5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 004ae6fa
    TEST EAX,EAX                        ; 004ae6fd
    JZ 0x004ae6e0                       ; 004ae6ff
        ;   XREF to: 004ae6e0 (CONDITIONAL_JUMP)  ; LAB_004ae6e0
    CMP EDI,dword ptr [EAX + 0x2a08]    ; 004ae701
    JNZ 0x004ae6e0                      ; 004ae707
        ;   XREF to: 004ae6e0 (CONDITIONAL_JUMP)  ; LAB_004ae6e0
    POP EBP                             ; 004ae709
    POP EDI                             ; 004ae70a
    POP ESI                             ; 004ae70b
    POP EBX                             ; 004ae70c
    RET                                 ; 004ae70d

