; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(int param_1,int param_2)
;
;
; XREF[38]:
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0 at 0040da6b
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930 at 0040d999
;   core_actor.cpp_FUN_0040a140 at 0040a166
;   core_actor.cpp_FUN_0040b300 at 0040b7da
;   core_boneguy.cpp_FUN_00418a00 at 00418ec2
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 00429a8d
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 at 00425193
;   core_cow.cpp_CZombieCow_process_FUN_0043bdb0 at 0043bf09
;   core_crossbow.cpp_FUN_0043d1c0 at 0043d330
;   core_dog.cpp_CZombieDog_process_FUN_00454750 at 004548c0
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_00590b43
;   TerminatedCString s_CDemonSet_ignore_ignore_00590b58
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511780
        ;   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
    PUSH EBP                            ; 00511781
    MOV EBX,dword ptr [ESP + 0xc]       ; 00511782
    CMP dword ptr [ESP + 0x10],0x0      ; 00511786
    JZ 0x005117b3                       ; 0051178b
        ;   XREF to: 005117b3 (CONDITIONAL_JUMP)  ; LAB_005117b3
    MOV ECX,dword ptr [EBX + 0x15f2ac]  ; 0051178d
    TEST ECX,ECX                        ; 00511793
    JL 0x005117b3                       ; 00511795
        ;   XREF to: 005117b3 (CONDITIONAL_JUMP)  ; LAB_005117b3
    CMP ECX,0xa                         ; 00511797
    JGE 0x005117b6                      ; 0051179a
        ;   XREF to: 005117b6 (CONDITIONAL_JUMP)  ; LAB_005117b6
    MOV EAX,dword ptr [EBX + 0x15f2ac]  ; 0051179c
        ;   Label: LAB_0051179c
    MOV EDX,dword ptr [ESP + 0x10]      ; 005117a2
    MOV dword ptr [EBX + EAX*0x4 + 0x15f2b4],EDX ; 005117a6
    INC dword ptr [EBX + 0x15f2ac]      ; 005117ad
    POP EBP                             ; 005117b3
        ;   Label: LAB_005117b3
    POP EBX                             ; 005117b4
    RET                                 ; 005117b5
    PUSH EDI                            ; 005117b6
        ;   Label: LAB_005117b6
    MOV EDI,0x590b43                    ; 005117b7 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 005117bc
    PUSH 0x590b58                       ; 005117c1 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01cc4800],EDI      ; 005117c6 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 005117cc | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 005117d2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 005117d7
    POP EDI                             ; 005117da
    JMP 0x0051179c                      ; 005117db
        ;   XREF to: 0051179c (UNCONDITIONAL_JUMP)  ; LAB_0051179c

