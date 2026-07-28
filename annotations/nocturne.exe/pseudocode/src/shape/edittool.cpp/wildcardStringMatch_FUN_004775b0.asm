; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_004775b0(char *pattern,char *target_string,int case_sensitive)
;
; Parameters:
; char *           Stack[0x4]:4   pattern
; char *           Stack[0x8]:4   target_string
; int              Stack[0xc]:4   case_sensitive
;
; XREF[7]:
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0 at 0042a2de
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040 at 004a90ff
;   core_sound.cpp_FUN_0052d030 at 0052d076
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930 at 0052c962
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_005485a0 at 005485d5
;   core_trigger.cpp_FUN_00547b30 at 00548046
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0 at 004f8e48
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_00564860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004775b0
        ;   Label: shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
    PUSH ESI                            ; 004775b1
    PUSH EDI                            ; 004775b2
    PUSH EBP                            ; 004775b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004775b4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004775b8
    MOV EBX,dword ptr [ESP + 0x18]      ; 004775bc
    MOV DL,byte ptr [EAX]               ; 004775c0
    MOV ESI,EAX                         ; 004775c2
    TEST DL,DL                          ; 004775c4
    JZ 0x004775e5                       ; 004775c6
        ;   XREF to: 004775e5 (CONDITIONAL_JUMP)  ; LAB_004775e5
    MOV AL,byte ptr [ESI]               ; 004775c8
        ;   Label: LAB_004775c8
    CMP AL,0x2a                         ; 004775ca
    JNC 0x0047764a                      ; 004775cc
        ;   XREF to: 0047764a (CONDITIONAL_JUMP)  ; LAB_0047764a
    TEST EBP,EBP                        ; 004775d2
        ;   Label: LAB_004775d2
    JZ 0x00477623                       ; 004775d4
        ;   XREF to: 00477623 (CONDITIONAL_JUMP)  ; LAB_00477623
    MOV AL,byte ptr [ESI]               ; 004775d6
    CMP AL,byte ptr [EBX]               ; 004775d8
    JNZ 0x0047761c                      ; 004775da
        ;   XREF to: 0047761c (CONDITIONAL_JUMP)  ; LAB_0047761c
    INC EBX                             ; 004775dc
        ;   Label: LAB_004775dc
    MOV DH,byte ptr [ESI + 0x1]         ; 004775dd
    INC ESI                             ; 004775e0
    TEST DH,DH                          ; 004775e1
    JNZ 0x004775c8                      ; 004775e3
        ;   XREF to: 004775c8 (CONDITIONAL_JUMP)  ; LAB_004775c8
    CMP byte ptr [EBX],0x0              ; 004775e5
        ;   Label: LAB_004775e5
    SETZ AL                             ; 004775e8
    AND EAX,0xff                        ; 004775eb
    POP EBP                             ; 004775f0
        ;   Label: LAB_004775f0
    POP EDI                             ; 004775f1
    POP ESI                             ; 004775f2
    POP EBX                             ; 004775f3
    RET                                 ; 004775f4
    INC ESI                             ; 004775f5
        ;   Label: LAB_004775f5
    PUSH EBP                            ; 004775f6
        ;   Label: LAB_004775f6
    PUSH EBX                            ; 004775f7
    PUSH ESI                            ; 004775f8
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 004775f9
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 004775fe
    TEST EAX,EAX                        ; 00477601
    JNZ 0x0047760d                      ; 00477603
        ;   XREF to: 0047760d (CONDITIONAL_JUMP)  ; LAB_0047760d
    CMP byte ptr [EBX],0x0              ; 00477605
    JZ 0x004775f0                       ; 00477608
        ;   XREF to: 004775f0 (CONDITIONAL_JUMP)  ; LAB_004775f0
    INC EBX                             ; 0047760a
    JMP 0x004775f6                      ; 0047760b
        ;   XREF to: 004775f6 (UNCONDITIONAL_JUMP)  ; LAB_004775f6
    MOV EAX,0x1                         ; 0047760d
        ;   Label: LAB_0047760d
    POP EBP                             ; 00477612
    POP EDI                             ; 00477613
    POP ESI                             ; 00477614
    POP EBX                             ; 00477615
    RET                                 ; 00477616
    CMP byte ptr [EBX],0x0              ; 00477617
        ;   Label: LAB_00477617
    JNZ 0x004775dc                      ; 0047761a
        ;   XREF to: 004775dc (CONDITIONAL_JUMP)  ; LAB_004775dc
    XOR EAX,EAX                         ; 0047761c
        ;   Label: LAB_0047761c
    POP EBP                             ; 0047761e
    POP EDI                             ; 0047761f
    POP ESI                             ; 00477620
    POP EBX                             ; 00477621
    RET                                 ; 00477622
    XOR EAX,EAX                         ; 00477623
        ;   Label: LAB_00477623
    MOV AL,byte ptr [ESI]               ; 00477625
    PUSH EAX                            ; 00477627
    CALL crt_ctype.c_tolower_FUN_00564860 ; 00477628
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    MOV EDI,EAX                         ; 0047762d
    XOR EAX,EAX                         ; 0047762f
    ADD ESP,0x4                         ; 00477631
    MOV AL,byte ptr [EBX]               ; 00477634
    PUSH EAX                            ; 00477636
    CALL crt_ctype.c_tolower_FUN_00564860 ; 00477637
        ;   XREF to: 00564860 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_00564860(int character)
    ADD ESP,0x4                         ; 0047763c
    CMP EDI,EAX                         ; 0047763f
    JZ 0x004775dc                       ; 00477641
        ;   XREF to: 004775dc (CONDITIONAL_JUMP)  ; LAB_004775dc
    XOR EAX,EAX                         ; 00477643
    POP EBP                             ; 00477645
    POP EDI                             ; 00477646
    POP ESI                             ; 00477647
    POP EBX                             ; 00477648
    RET                                 ; 00477649
    JBE 0x004775f5                      ; 0047764a
        ;   XREF to: 004775f5 (CONDITIONAL_JUMP)  ; LAB_004775f5
        ;   Label: LAB_0047764a
    CMP AL,0x3f                         ; 0047764c
    JZ 0x00477617                       ; 0047764e
        ;   XREF to: 00477617 (CONDITIONAL_JUMP)  ; LAB_00477617
    JMP 0x004775d2                      ; 00477650
        ;   XREF to: 004775d2 (UNCONDITIONAL_JUMP)  ; LAB_004775d2

