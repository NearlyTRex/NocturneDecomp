; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hand_cpp_CHand_processMotionEvent_FUN_005aa380(CHand *this_ptr,int event_id)
;
; Parameters:
; CHand *          Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   event_id
;
; Referenced Globals:
;   undefined1* switchdataD_005aa368 = 005aa39e
;   undefined4 s_phandriseup01_wav_005f0aa2+1
;   TerminatedCString s_phandslap0_wav_005f0ab5
;   TerminatedCString s_phandslap0_wav_005f0ac5
;   undefined4 DAT_00600890
;   undefined4 DAT_00600894
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_basicene.cpp_FUN_0059f740
;   core_sound.cpp_CSound_playActorSound_FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa380
        ;   Label: core_hand.cpp_CHand_processMotionEvent_FUN_005aa380
    PUSH ESI                            ; 005aa381
    PUSH EBP                            ; 005aa382
    MOV EBX,dword ptr [ESP + 0x10]      ; 005aa383
    MOV EAX,dword ptr [ESP + 0x14]      ; 005aa387
    SUB EAX,0x2134                      ; 005aa38b
    XOR ESI,ESI                         ; 005aa390
    CMP EAX,0x3                         ; 005aa392
    JA 0x005aa3bd                       ; 005aa395
        ;   XREF to: 005aa3bd (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5aa368]  ; 005aa397 | caseD_2134 | caseD_2135 | caseD_2136
        ;   Label: switchD
    PUSH EDI                            ; 005aa39e
        ;   Label: caseD_2134
    MOV EDI,dword ptr [EBX + 0x11850]   ; 005aa39f
    PUSH 0x40000000                     ; 005aa3a5
    PUSH EDI                            ; 005aa3aa
    PUSH dword ptr [0x00600890]         ; 005aa3ab | DAT_00600890
    PUSH EBX                            ; 005aa3b1
    CALL core_basicene.cpp_FUN_0059f740 ; 005aa3b2
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    MOV ESI,EAX                         ; 005aa3b7
    ADD ESP,0x10                        ; 005aa3b9
    POP EDI                             ; 005aa3bc
    TEST ESI,ESI                        ; 005aa3bd
        ;   Label: default
    JNZ 0x005aa42c                      ; 005aa3bf
        ;   XREF to: 005aa42c (CONDITIONAL_JUMP)  ; LAB_005aa42c
    POP EBP                             ; 005aa3c1
    POP ESI                             ; 005aa3c2
    POP EBX                             ; 005aa3c3
    RET                                 ; 005aa3c4
    MOV ESI,dword ptr [EBX + 0x11850]   ; 005aa3c5
        ;   Label: caseD_2135
    PUSH 0x40000000                     ; 005aa3cb
    PUSH ESI                            ; 005aa3d0
    PUSH dword ptr [0x00600894]         ; 005aa3d1 | DAT_00600894
    PUSH EBX                            ; 005aa3d7
    CALL core_basicene.cpp_FUN_0059f740 ; 005aa3d8
        ;   XREF to: 0059f740 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059f740()
    MOV ESI,EAX                         ; 005aa3dd
    ADD ESP,0x10                        ; 005aa3df
    TEST ESI,ESI                        ; 005aa3e2
    JNZ 0x005aa42c                      ; 005aa3e4
        ;   XREF to: 005aa42c (CONDITIONAL_JUMP)  ; LAB_005aa42c
    POP EBP                             ; 005aa3e6
    POP ESI                             ; 005aa3e7
    POP EBX                             ; 005aa3e8
    RET                                 ; 005aa3e9
    LEA EAX,[EBX + 0x20]                ; 005aa3ea
        ;   Label: caseD_2136
    PUSH EAX                            ; 005aa3ed
    PUSH 0x5f0aa3                       ; 005aa3ee | s_phandriseup01_wav_005f0aa2+1
    PUSH EBX                            ; 005aa3f3
    MOV ECX,dword ptr [0x0061c068]      ; 005aa3f4 | DAT_0061c068
    PUSH ECX                            ; 005aa3fa
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005aa3fb
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005aa400
    TEST ESI,ESI                        ; 005aa403
    JNZ 0x005aa42c                      ; 005aa405
        ;   XREF to: 005aa42c (CONDITIONAL_JUMP)  ; LAB_005aa42c
    POP EBP                             ; 005aa407
    POP ESI                             ; 005aa408
    POP EBX                             ; 005aa409
    RET                                 ; 005aa40a
    LEA EAX,[EBX + 0x20]                ; 005aa40b
        ;   Label: caseD_2137
    PUSH EAX                            ; 005aa40e
    PUSH 0x5f0ab5                       ; 005aa40f | = "phandslap0?.wav"
    PUSH EBX                            ; 005aa414
    MOV EDX,dword ptr [0x0061c068]      ; 005aa415 | DAT_0061c068
    PUSH EDX                            ; 005aa41b
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005aa41c
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005aa421
    TEST ESI,ESI                        ; 005aa424
    JNZ 0x005aa42c                      ; 005aa426
        ;   XREF to: 005aa42c (CONDITIONAL_JUMP)  ; LAB_005aa42c
    POP EBP                             ; 005aa428
    POP ESI                             ; 005aa429
    POP EBX                             ; 005aa42a
    RET                                 ; 005aa42b
    LEA EAX,[EBX + 0x20]                ; 005aa42c
        ;   Label: LAB_005aa42c
    PUSH EAX                            ; 005aa42f
    PUSH 0x5f0ac5                       ; 005aa430 | = "phandslap0?.wav"
    PUSH EBX                            ; 005aa435
    MOV EBP,dword ptr [0x0061c068]      ; 005aa436 | DAT_0061c068
    PUSH EBP                            ; 005aa43c
    CALL core_sound.cpp_CSound_playActorSound_FUN_0055ae50 ; 005aa43d
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_0055ae50(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 005aa442
    POP EBP                             ; 005aa445
    POP ESI                             ; 005aa446
    POP EBX                             ; 005aa447
    RET                                 ; 005aa448

