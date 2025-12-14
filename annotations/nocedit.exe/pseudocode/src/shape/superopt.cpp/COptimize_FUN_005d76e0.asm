; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_superopt.cpp_COptimize_FUN_005d76e0(COptimize * this_ptr)
;
; Parameters:
; COptimize *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00601df0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_superopt.cpp_FUN_005c79a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d76e0
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d76e0
    PUSH ESI                            ; 005d76e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d76e2
    MOV EAX,dword ptr [EBX + 0x38]      ; 005d76e6
    INC EAX                             ; 005d76e9
    SHL EAX,0x2                         ; 005d76ea
    PUSH EAX                            ; 005d76ed
    MOV EDX,dword ptr [EBX + 0x3c]      ; 005d76ee
    PUSH EDX                            ; 005d76f1
    CALL crt_memory.c_realloc_FUN_00601df0 ; 005d76f2
        ;   XREF to: 00601df0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_00601df0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005d76f7
    MOV ESI,EAX                         ; 005d76fa
    TEST EAX,EAX                        ; 005d76fc
    JZ 0x005d771f                       ; 005d76fe
        ;   XREF to: 005d771f (CONDITIONAL_JUMP)  ; LAB_005d771f
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d7700
    TEST EAX,EAX                        ; 005d7704
    JZ 0x005d7722                       ; 005d7706
        ;   XREF to: 005d7722 (CONDITIONAL_JUMP)  ; LAB_005d7722
    MOV EDX,dword ptr [EBX + 0x38]      ; 005d7708
        ;   Label: LAB_005d7708
    MOV dword ptr [EBX + 0x3c],ESI      ; 005d770b
    LEA ESI,[EDX*0x4 + 0x0]             ; 005d770e
    INC EDX                             ; 005d7715
    MOV dword ptr [EBX + 0x38],EDX      ; 005d7716
    MOV EDX,dword ptr [EBX + 0x3c]      ; 005d7719
    MOV dword ptr [EDX + ESI*0x1],EAX   ; 005d771c
    POP ESI                             ; 005d771f
        ;   Label: LAB_005d771f
    POP EBX                             ; 005d7720
    RET                                 ; 005d7721
    PUSH 0x34                           ; 005d7722
        ;   Label: LAB_005d7722
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d7724
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005d7729
    TEST EAX,EAX                        ; 005d772c
    JZ 0x005d7739                       ; 005d772e
        ;   XREF to: 005d7739 (CONDITIONAL_JUMP)  ; LAB_005d7739
    PUSH EAX                            ; 005d7730
    CALL shape_superopt.cpp_FUN_005c79a0 ; 005d7731
        ;   XREF to: 005c79a0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c79a0()
    ADD ESP,0x4                         ; 005d7736
    MOV EDX,EAX                         ; 005d7739
        ;   Label: LAB_005d7739
    MOV EAX,EDX                         ; 005d773b
    TEST EDX,EDX                        ; 005d773d
    JNZ 0x005d7708                      ; 005d773f
        ;   XREF to: 005d7708 (CONDITIONAL_JUMP)  ; LAB_005d7708
    POP ESI                             ; 005d7741
    POP EBX                             ; 005d7742
    RET                                 ; 005d7743

