; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_boneguy.cpp_CBoneGuy_FUN_0041d680(CBoneGuy * this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_boneguy.cpp_ExplodeAndSoundSomething_FUN_0041d4d0 at 0041d50b
;   core_boneguy.cpp_FUN_0041bf90 at 0041bfe8
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_00616304
;   TerminatedCString s_CBoneGuy_explode_Not_eno_00616318
;   TerminatedCString s_boneguy_fallapart_wav_00616342
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_FUN_0042d060
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d680
        ;   Label: core_boneguy.cpp_CBoneGuy_FUN_0041d680
    PUSH ESI                            ; 0041d681
    PUSH EDI                            ; 0041d682
    PUSH EBP                            ; 0041d683
    SUB ESP,0x38                        ; 0041d684
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041d687
    PUSH EDX                            ; 0041d68b
    CALL core_charactr.cpp_CCharacter_FUN_0042d060 ; 0041d68c
        ;   XREF to: 0042d060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041d691
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d694
    ADD EAX,0x158                       ; 0041d698
    MOV dword ptr [EAX + 0xc384],0x1    ; 0041d69d
    PUSH EAX                            ; 0041d6a7
    MOV dword ptr [EAX + 0xc388],0x0    ; 0041d6a8
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 0041d6b2
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041d6b7
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0041d6ba
    MOV dword ptr [ESP + 0x24],EAX      ; 0041d6be
    MOV EAX,dword ptr [EAX + 0x7140]    ; 0041d6c2
    MOV dword ptr [EBX + 0xbf38],EAX    ; 0041d6c8
    CMP EAX,0x14                        ; 0041d6ce
    JG 0x0041d875                       ; 0041d6d1
        ;   XREF to: 0041d875 (CONDITIONAL_JUMP)  ; LAB_0041d875
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041d6d7
        ;   Label: LAB_0041d6d7
    XOR EDI,EDI                         ; 0041d6db
    MOV EBP,dword ptr [EAX + 0x7140]    ; 0041d6dd
    MOV dword ptr [ESP + 0x30],EDI      ; 0041d6e3
    TEST EBP,EBP                        ; 0041d6e7
    JLE 0x0041d853                      ; 0041d6e9
        ;   XREF to: 0041d853 (CONDITIONAL_JUMP)  ; LAB_0041d853
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d6ef
    ADD EAX,0xbf3c                      ; 0041d6f3
    MOV dword ptr [ESP + 0x28],EAX      ; 0041d6f8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d6fc
    ADD EAX,0x30                        ; 0041d700
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041d703
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d707
    ADD EAX,0x20                        ; 0041d70b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0041d70e
    MOV dword ptr [ESP + 0x20],EAX      ; 0041d712
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d716
    ADD EBP,0xc                         ; 0041d71a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041d71d
    PUSH 0x40a00000                     ; 0041d721
        ;   Label: LAB_0041d721
    PUSH 0xc0a00000                     ; 0041d726
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041d72b
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x616342                       ; 0041d853 | = "boneguy-fallapart.wav"
        ;   Label: LAB_0041d853
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041d858
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041d85c
    PUSH EBP                            ; 0041d860
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041d861
    CALL dword ptr [EAX + 0x24]         ; 0041d867
    ADD ESP,0x8                         ; 0041d86a
    ADD ESP,0x38                        ; 0041d86d
    POP EBP                             ; 0041d870
    POP EDI                             ; 0041d871
    POP ESI                             ; 0041d872
    POP EBX                             ; 0041d873
    RET                                 ; 0041d874
    MOV EBX,0x616304                    ; 0041d875 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041d875
    MOV ESI,0x443                       ; 0041d87a
    PUSH 0x616318                       ; 0041d87f | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0041d884 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0041d88a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041d890
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0041d895
    JMP 0x0041d6d7                      ; 0041d898
        ;   XREF to: 0041d6d7 (UNCONDITIONAL_JUMP)  ; LAB_0041d6d7

