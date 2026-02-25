; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_CDemonSet_FUN_00576870(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_0056aa10 at 0056ac06
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 005754dd
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00576820
;   core_setdir.cpp_CDemonSet_FUN_005762a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576870
        ;   Label: core_setdir.cpp_CDemonSet_FUN_00576870
    PUSH ESI                            ; 00576871
    PUSH EDI                            ; 00576872
    MOV ESI,dword ptr [ESP + 0x10]      ; 00576873
    MOV EDI,dword ptr [ESP + 0x14]      ; 00576877
    MOV EDX,dword ptr [ESI + 0x15b410]  ; 0057687b
    XOR EBX,EBX                         ; 00576881
    TEST EDX,EDX                        ; 00576883
    JLE 0x0057689f                      ; 00576885
        ;   XREF to: 0057689f (CONDITIONAL_JUMP)  ; LAB_0057689f
    PUSH EDI                            ; 00576887
        ;   Label: LAB_00576887
    PUSH EBX                            ; 00576888
    PUSH ESI                            ; 00576889
    CALL core_setdir.cpp_CDemonSet_FUN_005762a0 ; 0057688a
        ;   XREF to: 005762a0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_005762a0(CDemonSet * this_ptr)
    ADD ESP,0xc                         ; 0057688f
    TEST EAX,EAX                        ; 00576892
    JNZ 0x005768a8                      ; 00576894
        ;   XREF to: 005768a8 (CONDITIONAL_JUMP)  ; LAB_005768a8
    INC EBX                             ; 00576896
    CMP EBX,dword ptr [ESI + 0x15b410]  ; 00576897
    JL 0x00576887                       ; 0057689d
        ;   XREF to: 00576887 (CONDITIONAL_JUMP)  ; LAB_00576887
    MOV EAX,0xffffffff                  ; 0057689f
        ;   Label: LAB_0057689f
    POP EDI                             ; 005768a4
    POP ESI                             ; 005768a5
    POP EBX                             ; 005768a6
    RET                                 ; 005768a7
    PUSH EBX                            ; 005768a8
        ;   Label: LAB_005768a8
    PUSH ESI                            ; 005768a9
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00576820 ; 005768aa
        ;   XREF to: 00576820 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 005768af
    POP EDI                             ; 005768b2
    POP ESI                             ; 005768b3
    POP EBX                             ; 005768b4
    RET                                 ; 005768b5

