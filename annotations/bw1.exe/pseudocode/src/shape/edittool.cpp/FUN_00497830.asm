; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl shape_edittool_cpp_FUN_00497830(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_FUN_00441500 at 004416e1
;   shape_edittool.cpp_FUN_00497870 at 00497880
;
; Called Functions:
;   wincore_winrun.cpp_FUN_005b2420
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_FUN_005b2420 ; 00497830
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_005b2420()
        ;   Label: shape_edittool.cpp_FUN_00497830
    AND EAX,0x30000                     ; 00497835
    CMP EAX,0x10000                     ; 0049783a
    JNC 0x00497858                      ; 0049783f
        ;   XREF to: 00497858 (CONDITIONAL_JUMP)  ; LAB_00497858
    TEST EAX,EAX                        ; 00497841
    JNZ 0x0049786a                      ; 00497843
        ;   XREF to: 0049786a (CONDITIONAL_JUMP)  ; LAB_0049786a
    RET                                 ; 00497845
    MOV EAX,0xff                        ; 00497846
        ;   Label: LAB_00497846
    RET                                 ; 0049784b
    MOV EAX,0x2                         ; 0049784c
        ;   Label: LAB_0049784c
    RET                                 ; 00497851
    MOV EAX,0xfd                        ; 00497852
        ;   Label: LAB_00497852
    RET                                 ; 00497857
    JBE 0x00497846                      ; 00497858
        ;   XREF to: 00497846 (CONDITIONAL_JUMP)  ; LAB_00497846
        ;   Label: LAB_00497858
    CMP EAX,0x20000                     ; 0049785a
    JC 0x0049786a                       ; 0049785f
        ;   XREF to: 0049786a (CONDITIONAL_JUMP)  ; LAB_0049786a
    JBE 0x0049784c                      ; 00497861
        ;   XREF to: 0049784c (CONDITIONAL_JUMP)  ; LAB_0049784c
    CMP EAX,0x30000                     ; 00497863
    JZ 0x00497852                       ; 00497868
        ;   XREF to: 00497852 (CONDITIONAL_JUMP)  ; LAB_00497852
    XOR EAX,EAX                         ; 0049786a
        ;   Label: LAB_0049786a
    RET                                 ; 0049786c

