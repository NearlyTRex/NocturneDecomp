; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e4e0()
;
;
; XREF[1]:
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e8c1
;
; Referenced Globals:
;   TerminatedCString s_Manual_course_0063f9d9
;   undefined4 s_Manual_course)_0063f9da
;   undefined4 g_CPlatformClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054e4e0
        ;   Label: core_platfrm.cpp_FUN_0054e4e0
    PUSH EDI                            ; 0054e4e1
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054e4e2
    MOV EDX,dword ptr [0x030d508c]      ; 0054e4e6 | g_CPlatformClassInfo.name_hash
    PUSH EDX                            ; 0054e4ec
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054e4ed
    PUSH ECX                            ; 0054e4f1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e4f2 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV DL,byte ptr [EAX + 0x2f0]       ; 0054e4f7
    ADD ESP,0x8                         ; 0054e4fd
    TEST DL,DL                          ; 0054e500
    JZ 0x0054e527                       ; 0054e502 | LAB_0054e527
        ;   XREF to: 0054e527 (CONDITIONAL_JUMP)
    LEA ESI,[EAX + 0x2f0]               ; 0054e504
    PUSH EDI                            ; 0054e50a
        ;   Label: LAB_0054e50a
    MOV AL,byte ptr [ESI]               ; 0054e50b | = "(Manual course)" | s_Manual_course_0063f9d9 = (Manual course)
        ;   Label: LAB_0054e50b
    MOV byte ptr [EDI],AL               ; 0054e50d
    CMP AL,0x0                          ; 0054e50f
    JZ 0x0054e523                       ; 0054e511 | LAB_0054e523
        ;   XREF to: 0054e523 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e513 | s_Manual_course)_0063f9da
    ADD ESI,0x2                         ; 0054e516
    MOV byte ptr [EDI + 0x1],AL         ; 0054e519
    ADD EDI,0x2                         ; 0054e51c
    CMP AL,0x0                          ; 0054e51f
    JNZ 0x0054e50b                      ; 0054e521 | LAB_0054e50b
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)
    POP EDI                             ; 0054e523
        ;   Label: LAB_0054e523
    POP EDI                             ; 0054e524
    POP ESI                             ; 0054e525
    RET                                 ; 0054e526
    MOV ESI,0x63f9d9                    ; 0054e527 | = "(Manual course)" | s_Manual_course_0063f9d9 = (Manual course)
        ;   Label: LAB_0054e527
    JMP 0x0054e50a                      ; 0054e52c | LAB_0054e50a
        ;   XREF to: 0054e50a (UNCONDITIONAL_JUMP)

