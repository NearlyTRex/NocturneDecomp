; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e400()
;
;
; XREF[1]:
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e8ea
;
; Referenced Globals:
;   void* switchdataD_0054e3e8 = 0054e42c
;   TerminatedCString s_Disabled_0063f9c1
;   undefined4 s_isabled_0063f9c2
;   undefined4 s_sabled_0063f9c3
;   undefined4 s_abled_0063f9c4
;   TerminatedCString s_Start_0063f9ca
;   undefined4 s_tart_0063f9cb
;   undefined4 s_art_0063f9cc
;   undefined4 s_rt_0063f9cd
;   TerminatedCString s_End_0063f9d0
;   undefined4 s_nd_0063f9d1
;   undefined4 s_d_0063f9d2
;   undefined4 s__0063f9d3
;   TerminatedCString s_Both_0063f9d4
;   undefined4 s_oth_0063f9d5
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054e400
        ;   Label: core_platfrm.cpp_FUN_0054e400
    PUSH EDI                            ; 0054e401
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054e402
    MOV EDX,dword ptr [0x030d508c]      ; 0054e406 | g_CPlatformClassInfo.name_hash
    PUSH EDX                            ; 0054e40c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054e40d
    PUSH ECX                            ; 0054e411
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e412 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x724]     ; 0054e417
    ADD ESP,0x8                         ; 0054e41d
    CMP EAX,0x3                         ; 0054e420
    JA 0x0054e42c                       ; 0054e423 | caseD_0
        ;   XREF to: 0054e42c (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x54e3e8]  ; 0054e425 | void * switchdataD_0054e3e8
        ;   Label: switchD
    MOV ESI,0x63f9c1                    ; 0054e42c | = "Disabled" | s_Disabled_0063f9c1 = Disabled
        ;   Label: caseD_0
    PUSH EDI                            ; 0054e431
        ;   Label: LAB_0054e431
    MOV AL,byte ptr [ESI]               ; 0054e432 | = "End" | s_Disabled_0063f9c1 = Disabled | s_Start_0063f9ca = Start
        ;   Label: LAB_0054e432
    MOV byte ptr [EDI],AL               ; 0054e434
    CMP AL,0x0                          ; 0054e436
    JZ 0x0054e44a                       ; 0054e438 | LAB_0054e44a
        ;   XREF to: 0054e44a (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e43a | s_nd_0063f9d1
    ADD ESI,0x2                         ; 0054e43d
    MOV byte ptr [EDI + 0x1],AL         ; 0054e440
    ADD EDI,0x2                         ; 0054e443
    CMP AL,0x0                          ; 0054e446
    JNZ 0x0054e432                      ; 0054e448 | LAB_0054e432
        ;   XREF to: 0054e432 (CONDITIONAL_JUMP)
    POP EDI                             ; 0054e44a
        ;   Label: LAB_0054e44a
    POP EDI                             ; 0054e44b
    POP ESI                             ; 0054e44c
    RET                                 ; 0054e44d
    MOV ESI,0x63f9ca                    ; 0054e44e | = "Start" | s_Start_0063f9ca = Start
        ;   Label: caseD_1
    JMP 0x0054e431                      ; 0054e453 | LAB_0054e431
        ;   XREF to: 0054e431 (UNCONDITIONAL_JUMP)
    MOV ESI,0x63f9d0                    ; 0054e455 | = "End" | s_End_0063f9d0 = End
        ;   Label: caseD_2
    JMP 0x0054e431                      ; 0054e45a | LAB_0054e431
        ;   XREF to: 0054e431 (UNCONDITIONAL_JUMP)
    MOV ESI,0x63f9d4                    ; 0054e45c | = "Both" | s_Both_0063f9d4 = Both
        ;   Label: caseD_3
    JMP 0x0054e431                      ; 0054e461 | LAB_0054e431
        ;   XREF to: 0054e431 (UNCONDITIONAL_JUMP)

