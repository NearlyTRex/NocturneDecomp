; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setdir_cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0(CDemonSet *this_ptr,int box_index)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   box_index
;
; XREF[3]:
;   core_setdir.cpp_FUN_00541410 at 00541424
;   core_setdir.cpp_FUN_005418d0 at 00541933
;   core_setdir.cpp_FUN_00541a20 at 00541a63
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005419e0
        ;   Label: core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_005419e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005419e1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005419e5
    PUSH ESI                            ; 005419e9
    MOV EAX,ECX                         ; 005419ea
    IMUL EDX,EAX,0x44                   ; 005419ec
        ;   Label: LAB_005419ec
    ADD EDX,EBX                         ; 005419ef
    MOV ESI,dword ptr [EDX + 0x15b46c]  ; 005419f1
    TEST ESI,ESI                        ; 005419f7
    JL 0x005419ff                       ; 005419f9
        ;   XREF to: 005419ff (CONDITIONAL_JUMP)  ; LAB_005419ff
    MOV EAX,ESI                         ; 005419fb
    JMP 0x005419ec                      ; 005419fd
        ;   XREF to: 005419ec (UNCONDITIONAL_JUMP)  ; LAB_005419ec
    POP ESI                             ; 005419ff
        ;   Label: LAB_005419ff
    CMP ECX,EAX                         ; 00541a00
        ;   Label: LAB_00541a00
    JZ 0x00541970                       ; 00541a02
        ;   XREF to: 00541970 (CONDITIONAL_JUMP)  ; LAB_00541970
    IMUL EDX,ECX,0x44                   ; 00541a08
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x15b46c] ; 00541a0b
    MOV dword ptr [EDX + EBX*0x1 + 0x15b46c],EAX ; 00541a12
    JMP 0x00541a00                      ; 00541a19
        ;   XREF to: 00541a00 (UNCONDITIONAL_JUMP)  ; LAB_00541a00

