; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_trigger_cpp_FUN_0056ede0(CTrigger *this_ptr,CDemonActor *actor)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[9]:
;   core_actor.cpp_FUN_00409f60 at 0040a42e
;   core_blundrbs.cpp_FUN_00410490 at 00411175
;   core_burncrss.cpp_FUN_00424550 at 00424d1e
;   core_elephant.cpp_FUN_00486d40 at 00487274
;   core_exorcism.cpp_FUN_0048b020 at 0048b526
;   core_flintlck.cpp_FUN_004ae850 at 004af385
;   core_gun.cpp_FUN_004d0fc0 at 004d17c6
;   core_rifle.cpp_FUN_00527d70 at 00528449
;   core_tommygun.cpp_FUN_0056b410 at 0056bc5b
;
; Called Functions:
;   shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056ede0
        ;   Label: core_trigger.cpp_FUN_0056ede0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056ede4
    TEST EDX,EDX                        ; 0056ede8
    JZ 0x0056e8b0                       ; 0056edea
        ;   XREF to: 0056e8b0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x174],0x7     ; 0056edf0
    JNZ 0x0056e8b0                      ; 0056edf7
        ;   XREF to: 0056e8b0 (CONDITIONAL_JUMP)
    CMP byte ptr [EAX + 0x308],0x0      ; 0056edfd
    JNZ 0x0056ee0c                      ; 0056ee04
        ;   XREF to: 0056ee0c (CONDITIONAL_JUMP)  ; LAB_0056ee0c
    MOV EAX,0x1                         ; 0056ee06
    RET                                 ; 0056ee0b
    PUSH 0x0                            ; 0056ee0c
        ;   Label: LAB_0056ee0c
    PUSH EDX                            ; 0056ee0e
    ADD EAX,0x308                       ; 0056ee0f
    PUSH EAX                            ; 0056ee14
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 0056ee15
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0056ee1a
    RET                                 ; 0056ee1d

