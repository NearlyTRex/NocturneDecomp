; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00588740(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;   undefined4 DAT_02661af0
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00588740
        ;   Label: wincore_wddvmem.cpp_FUN_00588740
    PUSH EBP                            ; 00588741
    MOV EDX,dword ptr [0x00622010]      ; 00588742 | DAT_00622010
    TEST EDX,EDX                        ; 00588748
    JNZ 0x00588759                      ; 0058874a
        ;   XREF to: 00588759 (CONDITIONAL_JUMP)  ; LAB_00588759
    MOV ESI,dword ptr [0x02661af0]      ; 0058874c | DAT_02661af0
    TEST ESI,ESI                        ; 00588752
    JNZ 0x00588779                      ; 00588754
        ;   XREF to: 00588779 (CONDITIONAL_JUMP)  ; LAB_00588779
    POP EBP                             ; 00588756
    POP ESI                             ; 00588757
    RET                                 ; 00588758
    PUSH EBX                            ; 00588759
        ;   Label: LAB_00588759
    PUSH EDX                            ; 0058875a
    CALL crt_unknown.c_FUN_005b86a0     ; 0058875b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR EBX,EBX                         ; 00588760
    ADD ESP,0x4                         ; 00588762
    MOV dword ptr [0x00622010],EBX      ; 00588765 | DAT_00622010
    POP EBX                             ; 0058876b
    MOV ESI,dword ptr [0x02661af0]      ; 0058876c | DAT_02661af0
    TEST ESI,ESI                        ; 00588772
    JNZ 0x00588779                      ; 00588774
        ;   XREF to: 00588779 (CONDITIONAL_JUMP)  ; LAB_00588779
    POP EBP                             ; 00588776
    POP ESI                             ; 00588777
    RET                                 ; 00588778
    PUSH ESI                            ; 00588779
        ;   Label: LAB_00588779
    CALL crt_unknown.c_FUN_005b86a0     ; 0058877a
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    XOR EBP,EBP                         ; 0058877f
    ADD ESP,0x4                         ; 00588781
    MOV dword ptr [0x0070c62c],EBP      ; 00588784 | DAT_0070c62c
    POP EBP                             ; 0058878a
    POP ESI                             ; 0058878b
    RET                                 ; 0058878c

