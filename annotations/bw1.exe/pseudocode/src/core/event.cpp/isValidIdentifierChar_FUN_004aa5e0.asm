; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_isValidIdentifierChar_FUN_004aa5e0(int ch)
;
; Parameters:
; int              Stack[0x4]:4   ch
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_004a70d0 at 004a720e
;   core_event.cpp_FUN_004a1d00 at 004a1f2b
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004aa5e0
        ;   Label: core_event.cpp_isValidIdentifierChar_FUN_004aa5e0
    MOV AL,DL                           ; 004aa5e4
    INC AL                              ; 004aa5e6
    AND EAX,0xff                        ; 004aa5e8
    TEST byte ptr [EAX + 0x626114],0xe0 ; 004aa5ed | DAT_00626114
    JNZ 0x004aa604                      ; 004aa5f4
        ;   XREF to: 004aa604 (CONDITIONAL_JUMP)  ; LAB_004aa604
    CMP EDX,0x5f                        ; 004aa5f6
    JZ 0x004aa604                       ; 004aa5f9
        ;   XREF to: 004aa604 (CONDITIONAL_JUMP)  ; LAB_004aa604
    CMP EDX,0x2d                        ; 004aa5fb
    JNZ 0x004a9ea8                      ; 004aa5fe
        ;   XREF to: 004a9ea8 (CONDITIONAL_JUMP)  ; LAB_004a9ea8
    MOV EAX,0x1                         ; 004aa604
        ;   Label: LAB_004aa604
    RET                                 ; 004aa609

