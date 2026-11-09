; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl shape_edittool_cpp_FUN_004803d0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_FUN_0043f160 at 0043f341
;   shape_edittool.cpp_FUN_00480410 at 00480420
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005806a0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_FUN_005806a0 ; 004803d0
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005806a0()
        ;   Label: shape_edittool.cpp_FUN_004803d0
    AND EAX,0x30000                     ; 004803d5
    CMP EAX,0x10000                     ; 004803da
    JNC 0x004803f8                      ; 004803df
        ;   XREF to: 004803f8 (CONDITIONAL_JUMP)  ; LAB_004803f8
    TEST EAX,EAX                        ; 004803e1
    JNZ 0x0048040a                      ; 004803e3
        ;   XREF to: 0048040a (CONDITIONAL_JUMP)  ; LAB_0048040a
    RET                                 ; 004803e5
    MOV EAX,0xff                        ; 004803e6
        ;   Label: LAB_004803e6
    RET                                 ; 004803eb
    MOV EAX,0x2                         ; 004803ec
        ;   Label: LAB_004803ec
    RET                                 ; 004803f1
    MOV EAX,0xfd                        ; 004803f2
        ;   Label: LAB_004803f2
    RET                                 ; 004803f7
    JBE 0x004803e6                      ; 004803f8
        ;   XREF to: 004803e6 (CONDITIONAL_JUMP)  ; LAB_004803e6
        ;   Label: LAB_004803f8
    CMP EAX,0x20000                     ; 004803fa
    JC 0x0048040a                       ; 004803ff
        ;   XREF to: 0048040a (CONDITIONAL_JUMP)  ; LAB_0048040a
    JBE 0x004803ec                      ; 00480401
        ;   XREF to: 004803ec (CONDITIONAL_JUMP)  ; LAB_004803ec
    CMP EAX,0x30000                     ; 00480403
    JZ 0x004803f2                       ; 00480408
        ;   XREF to: 004803f2 (CONDITIONAL_JUMP)  ; LAB_004803f2
    XOR EAX,EAX                         ; 0048040a
        ;   Label: LAB_0048040a
    RET                                 ; 0048040c

