; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_isValidIdentifierChar_FUN_00495460(int ch)
;
; Parameters:
; int              Stack[0x4]:4   ch
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_00491f40 at 0049207e
;   core_event.cpp_FUN_0048c2e0 at 0048c50b
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00495460
        ;   Label: core_event.cpp_isValidIdentifierChar_FUN_00495460
    MOV AL,DL                           ; 00495464
    INC AL                              ; 00495466
    AND EAX,0xff                        ; 00495468
    TEST byte ptr [EAX + 0x6074b8],0xe0 ; 0049546d | DAT_006074b8
    JNZ 0x00495484                      ; 00495474
        ;   XREF to: 00495484 (CONDITIONAL_JUMP)  ; LAB_00495484
    CMP EDX,0x5f                        ; 00495476
    JZ 0x00495484                       ; 00495479
        ;   XREF to: 00495484 (CONDITIONAL_JUMP)  ; LAB_00495484
    CMP EDX,0x2d                        ; 0049547b
    JNZ 0x00494d28                      ; 0049547e
        ;   XREF to: 00494d28 (CONDITIONAL_JUMP)  ; LAB_00494d28
    MOV EAX,0x1                         ; 00495484
        ;   Label: LAB_00495484
    RET                                 ; 00495489

