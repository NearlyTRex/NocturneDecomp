; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00536990(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_setcolid.cpp_FUN_00534ea0 at 005350e1
;   core_setcolid.cpp_FUN_00536490 at 005366b2
;   core_setcolid.cpp_FUN_00537030 at 0053721f
;
; Referenced Globals:
;   undefined4 g_CCharacterClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536990
        ;   Label: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990
    PUSH ESI                            ; 00536991
    PUSH EDI                            ; 00536992
    PUSH EBP                            ; 00536993
    MOV EBX,dword ptr [ESP + 0x14]      ; 00536994
    MOV ESI,dword ptr [ESP + 0x18]      ; 00536998
    CMP dword ptr [EBX + 0x15f6ac],0x0  ; 0053699c
    JNZ 0x005369d0                      ; 005369a3
        ;   XREF to: 005369d0 (CONDITIONAL_JUMP)  ; LAB_005369d0
    MOV EDI,dword ptr [EBX + 0x15f6a8]  ; 005369a5
        ;   Label: LAB_005369a5
    XOR EAX,EAX                         ; 005369ab
    TEST EDI,EDI                        ; 005369ad
    JLE 0x005369c9                      ; 005369af
        ;   XREF to: 005369c9 (CONDITIONAL_JUMP)  ; LAB_005369c9
    MOV EDX,EBX                         ; 005369b1
    CMP ESI,dword ptr [EDX + 0x15f6b0]  ; 005369b3
        ;   Label: LAB_005369b3
    JZ 0x005369e4                       ; 005369b9
        ;   XREF to: 005369e4 (CONDITIONAL_JUMP)  ; LAB_005369e4
    INC EAX                             ; 005369bb
    MOV EBP,dword ptr [EBX + 0x15f6a8]  ; 005369bc
    ADD EDX,0x4                         ; 005369c2
    CMP EAX,EBP                         ; 005369c5
    JL 0x005369b3                       ; 005369c7
        ;   XREF to: 005369b3 (CONDITIONAL_JUMP)  ; LAB_005369b3
    XOR EAX,EAX                         ; 005369c9
        ;   Label: LAB_005369c9
    POP EBP                             ; 005369cb
    POP EDI                             ; 005369cc
    POP ESI                             ; 005369cd
    POP EBX                             ; 005369ce
    RET                                 ; 005369cf
    MOV ECX,dword ptr [0x007bdc94]      ; 005369d0 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_005369d0
    PUSH ECX                            ; 005369d6
    PUSH ESI                            ; 005369d7
    CALL core_actor.cpp_isOfClassHash_FUN_0040c8c0 ; 005369d8
        ;   XREF to: 0040c8c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClassHash_FUN_0040c8c0()
    ADD ESP,0x8                         ; 005369dd
    TEST EAX,EAX                        ; 005369e0
    JZ 0x005369a5                       ; 005369e2
        ;   XREF to: 005369a5 (CONDITIONAL_JUMP)  ; LAB_005369a5
    MOV EAX,0x1                         ; 005369e4
        ;   Label: LAB_005369e4
    POP EBP                             ; 005369e9
    POP EDI                             ; 005369ea
    POP ESI                             ; 005369eb
    POP EBX                             ; 005369ec
    RET                                 ; 005369ed

