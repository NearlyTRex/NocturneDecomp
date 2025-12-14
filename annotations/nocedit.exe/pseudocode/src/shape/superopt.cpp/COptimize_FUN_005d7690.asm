; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_COptimize_FUN_005d7690(COptimize * this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Unable_to_split_polygon__00654789
;
; Called Functions:
;   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d7690
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d7690
    PUSH ESI                            ; 005d7691
    PUSH EDI                            ; 005d7692
    PUSH EBP                            ; 005d7693
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d7694
    MOV EDX,dword ptr [EDI + 0x38]      ; 005d7698
    XOR EBX,EBX                         ; 005d769b
    TEST EDX,EDX                        ; 005d769d
    JBE 0x005d76c1                      ; 005d769f
        ;   XREF to: 005d76c1 (CONDITIONAL_JUMP)  ; LAB_005d76c1
    XOR ESI,ESI                         ; 005d76a1
    MOV EAX,dword ptr [EDI + 0x3c]      ; 005d76a3
        ;   Label: LAB_005d76a3
    MOV EBP,dword ptr [ESI + EAX*0x1]   ; 005d76a6
    PUSH EBP                            ; 005d76a9
    CALL shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 ; 005d76aa
        ;   XREF to: 005c84c0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0()
    ADD ESP,0x4                         ; 005d76af
    TEST EAX,EAX                        ; 005d76b2
    JZ 0x005d76cb                       ; 005d76b4
        ;   XREF to: 005d76cb (CONDITIONAL_JUMP)  ; LAB_005d76cb
    INC EBX                             ; 005d76b6
    MOV ECX,dword ptr [EDI + 0x38]      ; 005d76b7
    ADD ESI,0x4                         ; 005d76ba
    CMP EBX,ECX                         ; 005d76bd
    JC 0x005d76a3                       ; 005d76bf
        ;   XREF to: 005d76a3 (CONDITIONAL_JUMP)  ; LAB_005d76a3
    MOV EAX,0x1                         ; 005d76c1
        ;   Label: LAB_005d76c1
    POP EBP                             ; 005d76c6
    POP EDI                             ; 005d76c7
    POP ESI                             ; 005d76c8
    POP EBX                             ; 005d76c9
    RET                                 ; 005d76ca
    PUSH 0x654789                       ; 005d76cb | = "Unable to split polygon to convex... ..."
        ;   Label: LAB_005d76cb
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005d76d0
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005d76d5
    XOR EAX,EAX                         ; 005d76d8
    POP EBP                             ; 005d76da
    POP EDI                             ; 005d76db
    POP ESI                             ; 005d76dc
    POP EBX                             ; 005d76dd
    RET                                 ; 005d76de

