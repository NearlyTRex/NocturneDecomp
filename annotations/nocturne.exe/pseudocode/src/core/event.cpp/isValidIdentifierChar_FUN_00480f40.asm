; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_event_cpp_isValidIdentifierChar_FUN_00480f40(int param_1)
;
;
; XREF[2]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e214
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047adfb
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00480f40
        ;   Label: core_event.cpp_isValidIdentifierChar_FUN_00480f40
    MOV AL,DL                           ; 00480f44
    INC AL                              ; 00480f46
    AND EAX,0xff                        ; 00480f48
    TEST byte ptr [EAX + 0x5c168c],0xe0 ; 00480f4d | DAT_005c168c
    JNZ 0x00480f64                      ; 00480f54
        ;   XREF to: 00480f64 (CONDITIONAL_JUMP)  ; LAB_00480f64
    CMP EDX,0x5f                        ; 00480f56
    JZ 0x00480f64                       ; 00480f59
        ;   XREF to: 00480f64 (CONDITIONAL_JUMP)  ; LAB_00480f64
    CMP EDX,0x2d                        ; 00480f5b
    JNZ 0x00480808                      ; 00480f5e
        ;   XREF to: 00480808 (CONDITIONAL_JUMP)  ; LAB_00480808
    MOV EAX,0x1                         ; 00480f64
        ;   Label: LAB_00480f64
    RET                                 ; 00480f69

