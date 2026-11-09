; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_FUN_005b0ce0 at 005b0ec1
;   shape_edittool.cpp_FUN_0047f210 at 0047f220
;
; Referenced Globals:
;   undefined4 DAT_01c2c910
;   undefined4 DAT_01c2ccf0
;   undefined4 DAT_01c3452f
;   undefined4 DAT_01c3490f
;
; Called Functions:
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0047f1c0
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0
    AND EAX,0x30000                     ; 0047f1c5
    CMP EAX,0x10000                     ; 0047f1ca
    JNC 0x0047f1f3                      ; 0047f1cf
        ;   XREF to: 0047f1f3 (CONDITIONAL_JUMP)  ; LAB_0047f1f3
    TEST EAX,EAX                        ; 0047f1d1
    JNZ 0x0047f205                      ; 0047f1d3
        ;   XREF to: 0047f205 (CONDITIONAL_JUMP)  ; LAB_0047f205
    MOV AL,[0x01c2c910]                 ; 0047f1d5 | DAT_01c2c910
    RET                                 ; 0047f1da
    XOR EAX,EAX                         ; 0047f1db
        ;   Label: LAB_0047f1db
    MOV AL,[0x01c3490f]                 ; 0047f1dd | DAT_01c3490f
    RET                                 ; 0047f1e2
    XOR EAX,EAX                         ; 0047f1e3
        ;   Label: LAB_0047f1e3
    MOV AL,[0x01c2ccf0]                 ; 0047f1e5 | DAT_01c2ccf0
    RET                                 ; 0047f1ea
    XOR EAX,EAX                         ; 0047f1eb
        ;   Label: LAB_0047f1eb
    MOV AL,[0x01c3452f]                 ; 0047f1ed | DAT_01c3452f
    RET                                 ; 0047f1f2
    JBE 0x0047f1db                      ; 0047f1f3
        ;   XREF to: 0047f1db (CONDITIONAL_JUMP)  ; LAB_0047f1db
        ;   Label: LAB_0047f1f3
    CMP EAX,0x20000                     ; 0047f1f5
    JC 0x0047f205                       ; 0047f1fa
        ;   XREF to: 0047f205 (CONDITIONAL_JUMP)  ; LAB_0047f205
    JBE 0x0047f1e3                      ; 0047f1fc
        ;   XREF to: 0047f1e3 (CONDITIONAL_JUMP)  ; LAB_0047f1e3
    CMP EAX,0x30000                     ; 0047f1fe
    JZ 0x0047f1eb                       ; 0047f203
        ;   XREF to: 0047f1eb (CONDITIONAL_JUMP)  ; LAB_0047f1eb
    XOR EAX,EAX                         ; 0047f205
        ;   Label: LAB_0047f205
    RET                                 ; 0047f207

