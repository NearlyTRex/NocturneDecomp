; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_flies_cpp_findFliesByFollowActor_FUN_0048fbe0(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; XREF[1]:
;   core_actor.cpp_CDemonActor_spawnFlies_FUN_0040b090 at 0040b095
;
; Referenced Globals:
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CFliesActorType_01c70718.name_hash
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048fbe0
        ;   Label: core_flies.cpp_findFliesByFollowActor_FUN_0048fbe0
    PUSH ESI                            ; 0048fbe1
    PUSH EDI                            ; 0048fbe2
    PUSH EBP                            ; 0048fbe3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0048fbe4
    XOR ESI,ESI                         ; 0048fbe8
    XOR EBX,EBX                         ; 0048fbea
    MOV EAX,[0x005be368]                ; 0048fbec | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0048fbec
    CMP EBX,dword ptr [EAX + 0x14cd6c]  ; 0048fbf1 | g_CDemonSet_01e57284.actor_count
    JL 0x0048fc06                       ; 0048fbf7
        ;   XREF to: 0048fc06 (CONDITIONAL_JUMP)  ; LAB_0048fc06
    XOR EAX,EAX                         ; 0048fbf9
    POP EBP                             ; 0048fbfb
    POP EDI                             ; 0048fbfc
    POP ESI                             ; 0048fbfd
    POP EBX                             ; 0048fbfe
    RET                                 ; 0048fbff
    INC EBX                             ; 0048fc00
        ;   Label: LAB_0048fc00
    ADD ESI,0x4                         ; 0048fc01
    JMP 0x0048fbec                      ; 0048fc04
        ;   XREF to: 0048fbec (UNCONDITIONAL_JUMP)  ; LAB_0048fbec
    MOV ECX,dword ptr [0x01c70750]      ; 0048fc06 | g_CFliesActorType_01c70718.name_hash
        ;   Label: LAB_0048fc06
    PUSH ECX                            ; 0048fc0c
    MOV EBP,dword ptr [ESI + EAX*0x1 + 0x14cd70] ; 0048fc0d | g_CDemonSet_01e57284.actors[0]
    PUSH EBP                            ; 0048fc14
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 0048fc15
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0048fc1a
    TEST EAX,EAX                        ; 0048fc1d
    JZ 0x0048fc00                       ; 0048fc1f
        ;   XREF to: 0048fc00 (CONDITIONAL_JUMP)  ; LAB_0048fc00
    CMP EDI,dword ptr [EAX + 0x2a00]    ; 0048fc21
    JNZ 0x0048fc00                      ; 0048fc27
        ;   XREF to: 0048fc00 (CONDITIONAL_JUMP)  ; LAB_0048fc00
    POP EBP                             ; 0048fc29
    POP EDI                             ; 0048fc2a
    POP ESI                             ; 0048fc2b
    POP EBX                             ; 0048fc2c
    RET                                 ; 0048fc2d

