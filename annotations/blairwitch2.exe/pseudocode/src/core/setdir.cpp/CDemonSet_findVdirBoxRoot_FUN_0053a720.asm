; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_0053a720(CDemonSet *this_ptr,int box_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   box_index
;
; XREF[3]:
;   core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_0053a610 at 0053a673
;   core_setdir.cpp_CDemonSet_findVdirBoxAtPosition_FUN_0053a760 at 0053a79a
;   core_setdir.cpp_CDemonSet_isPointInVdirGroup_FUN_0053a150 at 0053a164
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a720
        ;   Label: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_0053a720
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a721
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053a725
    PUSH ESI                            ; 0053a729
    MOV EAX,ECX                         ; 0053a72a
    IMUL EDX,EAX,0x44                   ; 0053a72c
        ;   Label: LAB_0053a72c
    ADD EDX,EBX                         ; 0053a72f
    MOV ESI,dword ptr [EDX + 0x15b468]  ; 0053a731
    TEST ESI,ESI                        ; 0053a737
    JL 0x0053a73f                       ; 0053a739
        ;   XREF to: 0053a73f (CONDITIONAL_JUMP)  ; LAB_0053a73f
    MOV EAX,ESI                         ; 0053a73b
    JMP 0x0053a72c                      ; 0053a73d
        ;   XREF to: 0053a72c (UNCONDITIONAL_JUMP)  ; LAB_0053a72c
    POP ESI                             ; 0053a73f
        ;   Label: LAB_0053a73f
    CMP ECX,EAX                         ; 0053a740
        ;   Label: LAB_0053a740
    JZ 0x0053a6b0                       ; 0053a742
        ;   XREF to: 0053a6b0 (CONDITIONAL_JUMP)  ; LAB_0053a6b0
    IMUL EDX,ECX,0x44                   ; 0053a748
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x15b468] ; 0053a74b
    MOV dword ptr [EDX + EBX*0x1 + 0x15b468],EAX ; 0053a752
    JMP 0x0053a740                      ; 0053a759
        ;   XREF to: 0053a740 (UNCONDITIONAL_JUMP)  ; LAB_0053a740

