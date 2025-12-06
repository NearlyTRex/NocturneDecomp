; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_platfrm.cpp_FUN_0054e700()
;
;
; XREF[1]:
;   core_platfrm.cpp_FUN_0054e7d0 at 0054e902
;
; Referenced Globals:
;   TerminatedCString s_At_start_0063faa2
;   undefined4 s_t_start_0063faa3
;   TerminatedCString s_At_end_0063faab
;   undefined4 s_t_end_0063faac
;   undefined4 s_end_0063faad
;   undefined4 s_end_0063faae
;   TerminatedCString s_WTF_0063fab2
;   undefined4 DAT_0063fab3
;   undefined4 g_CPlatformClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054e700
        ;   Label: core_platfrm.cpp_FUN_0054e700
    PUSH EDI                            ; 0054e701
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054e702
    MOV EDX,dword ptr [0x030d508c]      ; 0054e706 | g_CPlatformClassInfo.name_hash
    PUSH EDX                            ; 0054e70c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0054e70d
    PUSH ECX                            ; 0054e711
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0054e712 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x2d4]     ; 0054e717
    ADD ESP,0x8                         ; 0054e71d
    TEST EAX,EAX                        ; 0054e720
    JBE 0x0054e74b                      ; 0054e722 | LAB_0054e74b
        ;   XREF to: 0054e74b (CONDITIONAL_JUMP)
    CMP EAX,0x1                         ; 0054e724
    JNZ 0x0054e752                      ; 0054e727 | LAB_0054e752
        ;   XREF to: 0054e752 (CONDITIONAL_JUMP)
    MOV ESI,0x63faab                    ; 0054e729 | = "At end" | s_At_end_0063faab = At end
    PUSH EDI                            ; 0054e72e
        ;   Label: LAB_0054e72e
    MOV AL,byte ptr [ESI]               ; 0054e72f | = "At end" | s_At_start_0063faa2 = At start | s_At_end_0063faab = At end
        ;   Label: LAB_0054e72f
    MOV byte ptr [EDI],AL               ; 0054e731
    CMP AL,0x0                          ; 0054e733
    JZ 0x0054e747                       ; 0054e735 | LAB_0054e747
        ;   XREF to: 0054e747 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0054e737 | s_t_end_0063faac
    ADD ESI,0x2                         ; 0054e73a
    MOV byte ptr [EDI + 0x1],AL         ; 0054e73d
    ADD EDI,0x2                         ; 0054e740
    CMP AL,0x0                          ; 0054e743
    JNZ 0x0054e72f                      ; 0054e745 | LAB_0054e72f
        ;   XREF to: 0054e72f (CONDITIONAL_JUMP)
    POP EDI                             ; 0054e747
        ;   Label: LAB_0054e747
    POP EDI                             ; 0054e748
    POP ESI                             ; 0054e749
    RET                                 ; 0054e74a
    MOV ESI,0x63faa2                    ; 0054e74b | = "At start" | s_At_start_0063faa2 = At start
        ;   Label: LAB_0054e74b
    JMP 0x0054e72e                      ; 0054e750 | LAB_0054e72e
        ;   XREF to: 0054e72e (UNCONDITIONAL_JUMP)
    MOV ESI,0x63fab2                    ; 0054e752 | = "WTF" | s_WTF_0063fab2 = WTF
        ;   Label: LAB_0054e752
    JMP 0x0054e72e                      ; 0054e757 | LAB_0054e72e
        ;   XREF to: 0054e72e (UNCONDITIONAL_JUMP)

