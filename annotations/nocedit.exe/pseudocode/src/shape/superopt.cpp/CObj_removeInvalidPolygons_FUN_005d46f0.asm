; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_superopt_cpp_CObj_removeInvalidPolygons_FUN_005d46f0(CObj *this_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7290 at 005d72ad
;
; Referenced Globals:
;   TerminatedCString s_Deleting_invalid_polygon_006544ce
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d46f0
        ;   Label: shape_superopt.cpp_CObj_removeInvalidPolygons_FUN_005d46f0
    PUSH ESI                            ; 005d46f1
    PUSH EDI                            ; 005d46f2
    PUSH EBP                            ; 005d46f3
    SUB ESP,0x5c                        ; 005d46f4
    MOV ESI,dword ptr [ESP + 0x70]      ; 005d46f7
    MOV EDX,dword ptr [ESI + 0x8]       ; 005d46fb
    XOR EBP,EBP                         ; 005d46fe
    CMP EDX,0x3e8                       ; 005d4700
    JA 0x005d4759                       ; 005d4706
        ;   XREF to: 005d4759 (CONDITIONAL_JUMP)  ; LAB_005d4759
    MOV ECX,dword ptr [ESI + 0x8]       ; 005d4708
        ;   Label: LAB_005d4708
    XOR EBX,EBX                         ; 005d470b
    XOR EDI,EDI                         ; 005d470d
    TEST ECX,ECX                        ; 005d470f
    JBE 0x005d473b                      ; 005d4711
        ;   XREF to: 005d473b (CONDITIONAL_JUMP)  ; LAB_005d473b
    TEST EBP,EBP                        ; 005d4713
        ;   Label: LAB_005d4713
    JZ 0x005d471c                       ; 005d4715
        ;   XREF to: 005d471c (CONDITIONAL_JUMP)  ; LAB_005d471c
    TEST BL,0xff                        ; 005d4717
    JZ 0x005d4767                       ; 005d471a
        ;   XREF to: 005d4767 (CONDITIONAL_JUMP)  ; LAB_005d4767
    IMUL EAX,EBX,0x68                   ; 005d471c
        ;   Label: LAB_005d471c
    MOV EDX,dword ptr [ESI + 0xc]       ; 005d471f
    ADD EAX,EDX                         ; 005d4722
    PUSH EAX                            ; 005d4724
    MOV EDX,dword ptr [EAX + 0x64]      ; 005d4725
    CALL dword ptr [EDX + 0x88]         ; 005d4728
    ADD ESP,0x4                         ; 005d472e
    TEST EAX,EAX                        ; 005d4731
    JZ 0x005d477c                       ; 005d4733
        ;   XREF to: 005d477c (CONDITIONAL_JUMP)  ; LAB_005d477c
    INC EBX                             ; 005d4735
        ;   Label: LAB_005d4735
    CMP EBX,dword ptr [ESI + 0x8]       ; 005d4736
    JC 0x005d4713                       ; 005d4739
        ;   XREF to: 005d4713 (CONDITIONAL_JUMP)  ; LAB_005d4713
    PUSH EBP                            ; 005d473b
        ;   Label: LAB_005d473b
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d473c
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d4741
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d4744
    PUSH ESI                            ; 005d4747
    CALL dword ptr [EAX + 0xcc]         ; 005d4748
    ADD ESP,0x4                         ; 005d474e
    ADD ESP,0x5c                        ; 005d4751
    POP EBP                             ; 005d4754
    POP EDI                             ; 005d4755
    POP ESI                             ; 005d4756
    POP EBX                             ; 005d4757
    RET                                 ; 005d4758
    PUSH 0x4                            ; 005d4759
        ;   Label: LAB_005d4759
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d475b
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005d4760
    MOV EBP,EAX                         ; 005d4763
    JMP 0x005d4708                      ; 005d4765
        ;   XREF to: 005d4708 (UNCONDITIONAL_JUMP)  ; LAB_005d4708
    PUSH EDI                            ; 005d4767
        ;   Label: LAB_005d4767
    PUSH 0x6544ce                       ; 005d4768 | = "Deleting invalid polygons (%d deleted..."
    LEA EAX,[ESP + 0x8]                 ; 005d476d
    PUSH EAX                            ; 005d4771
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005d4772
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005d4777
    JMP 0x005d471c                      ; 005d477a
        ;   XREF to: 005d471c (UNCONDITIONAL_JUMP)  ; LAB_005d471c
    PUSH EBX                            ; 005d477c
        ;   Label: LAB_005d477c
    MOV EAX,dword ptr [ESI + 0x18]      ; 005d477d
    PUSH ESI                            ; 005d4780
    DEC EBX                             ; 005d4781
    CALL dword ptr [EAX + 0x40]         ; 005d4782
    ADD ESP,0x8                         ; 005d4785
    TEST EAX,EAX                        ; 005d4788
    JZ 0x005d478f                       ; 005d478a
        ;   XREF to: 005d478f (CONDITIONAL_JUMP)  ; LAB_005d478f
    INC EDI                             ; 005d478c
    JMP 0x005d4735                      ; 005d478d
        ;   XREF to: 005d4735 (UNCONDITIONAL_JUMP)  ; LAB_005d4735
    PUSH EBP                            ; 005d478f
        ;   Label: LAB_005d478f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d4790
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d4795
    XOR EAX,EAX                         ; 005d4798
    ADD ESP,0x5c                        ; 005d479a
    POP EBP                             ; 005d479d
    POP EDI                             ; 005d479e
    POP ESI                             ; 005d479f
    POP EBX                             ; 005d47a0
    RET                                 ; 005d47a1

