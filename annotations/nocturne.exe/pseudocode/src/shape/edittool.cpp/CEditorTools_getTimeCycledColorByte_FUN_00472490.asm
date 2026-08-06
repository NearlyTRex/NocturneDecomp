; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CCloth_FUN_00437ab0 at 00437c94
;   shape_edittool.cpp_CEditorTools_drawMousePointer_FUN_004724e0 at 004724f0
;
; Referenced Globals:
;   uchar[32768] g_ColorCubeLookup
;   undefined4 g_ColorCubeLookup+0x3e0
;   undefined4 g_ColorCubeLookup+0x7c1f
;   undefined4 g_ColorCubeLookup+0x7fff
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 00472490
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_00558a30()
        ;   Label: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
    AND EAX,0x30000                     ; 00472495
    CMP EAX,0x10000                     ; 0047249a
    JNC 0x004724c3                      ; 0047249f
        ;   XREF to: 004724c3 (CONDITIONAL_JUMP)  ; LAB_004724c3
    TEST EAX,EAX                        ; 004724a1
    JNZ 0x004724d5                      ; 004724a3
        ;   XREF to: 004724d5 (CONDITIONAL_JUMP)  ; LAB_004724d5
    MOV AL,[0x01bf7720]                 ; 004724a5 | g_ColorCubeLookup
    RET                                 ; 004724aa
    XOR EAX,EAX                         ; 004724ab
        ;   Label: LAB_004724ab
    MOV AL,[0x01bff71f]                 ; 004724ad | g_ColorCubeLookup+0x7fff
    RET                                 ; 004724b2
    XOR EAX,EAX                         ; 004724b3
        ;   Label: LAB_004724b3
    MOV AL,[0x01bf7b00]                 ; 004724b5 | g_ColorCubeLookup+0x3e0
    RET                                 ; 004724ba
    XOR EAX,EAX                         ; 004724bb
        ;   Label: LAB_004724bb
    MOV AL,[0x01bff33f]                 ; 004724bd | g_ColorCubeLookup+0x7c1f
    RET                                 ; 004724c2
    JBE 0x004724ab                      ; 004724c3
        ;   XREF to: 004724ab (CONDITIONAL_JUMP)  ; LAB_004724ab
        ;   Label: LAB_004724c3
    CMP EAX,0x20000                     ; 004724c5
    JC 0x004724d5                       ; 004724ca
        ;   XREF to: 004724d5 (CONDITIONAL_JUMP)  ; LAB_004724d5
    JBE 0x004724b3                      ; 004724cc
        ;   XREF to: 004724b3 (CONDITIONAL_JUMP)  ; LAB_004724b3
    CMP EAX,0x30000                     ; 004724ce
    JZ 0x004724bb                       ; 004724d3
        ;   XREF to: 004724bb (CONDITIONAL_JUMP)  ; LAB_004724bb
    XOR EAX,EAX                         ; 004724d5
        ;   Label: LAB_004724d5
    RET                                 ; 004724d7

