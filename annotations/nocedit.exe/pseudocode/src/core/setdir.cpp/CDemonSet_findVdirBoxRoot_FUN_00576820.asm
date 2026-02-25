; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_00576820(CDemonSet *this_ptr,int box_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   box_index
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710 at 005767e0
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_00576870 at 005768aa
;   core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_00576340 at 0057636a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576820
        ;   Label: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00576820
    PUSH ESI                            ; 00576821
    MOV ESI,dword ptr [ESP + 0xc]       ; 00576822
    MOV EBX,dword ptr [ESP + 0x10]      ; 00576826
    MOV EDX,EBX                         ; 0057682a
    MOV EAX,EDX                         ; 0057682c
        ;   Label: LAB_0057682c
    SHL EAX,0x4                         ; 0057682e
    ADD EAX,EDX                         ; 00576831
    SHL EAX,0x2                         ; 00576833
    ADD EAX,ESI                         ; 00576836
    MOV ECX,dword ptr [EAX + 0x15b454]  ; 00576838
    TEST ECX,ECX                        ; 0057683e
    JL 0x00576846                       ; 00576840
        ;   XREF to: 00576846 (CONDITIONAL_JUMP)  ; LAB_00576846
    MOV EDX,ECX                         ; 00576842
    JMP 0x0057682c                      ; 00576844
        ;   XREF to: 0057682c (UNCONDITIONAL_JUMP)  ; LAB_0057682c
    CMP EBX,EDX                         ; 00576846
        ;   Label: LAB_00576846
    JZ 0x0057685d                       ; 00576848
        ;   XREF to: 0057685d (CONDITIONAL_JUMP)  ; LAB_0057685d
    IMUL EAX,EBX,0x44                   ; 0057684a
    MOV EBX,dword ptr [ESI + EAX*0x1 + 0x15b454] ; 0057684d
    MOV dword ptr [ESI + EAX*0x1 + 0x15b454],EDX ; 00576854
    JMP 0x00576846                      ; 0057685b
        ;   XREF to: 00576846 (UNCONDITIONAL_JUMP)  ; LAB_00576846
    MOV EAX,EDX                         ; 0057685d
        ;   Label: LAB_0057685d
    POP ESI                             ; 0057685f
    POP EBX                             ; 00576860
    RET                                 ; 00576861

