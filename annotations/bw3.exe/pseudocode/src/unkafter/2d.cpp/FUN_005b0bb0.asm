; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_2d_cpp_FUN_005b0bb0(void)
;
;
; XREF[1]:
;   unkafter_asgaya.cpp_FUN_005af64c at 005af64e
;
; Referenced Globals:
;   undefined4 DAT_02d25920
;   undefined4 DAT_02d25924
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0bb0
        ;   Label: unkafter_2d.cpp_FUN_005b0bb0
    PUSH ESI                            ; 005b0bb1
    PUSH EDI                            ; 005b0bb2
    MOV EDX,dword ptr [0x02d25924]      ; 005b0bb3 | DAT_02d25924
    TEST EDX,EDX                        ; 005b0bb9
    JZ 0x005b0c45                       ; 005b0bbb
        ;   XREF to: 005b0c45 (CONDITIONAL_JUMP)  ; LAB_005b0c45
    MOV EBX,EDX                         ; 005b0bc1
    JMP 0x005b0bf6                      ; 005b0bc3
        ;   XREF to: 005b0bf6 (UNCONDITIONAL_JUMP)  ; LAB_005b0bf6
    MOV ESI,dword ptr [0x02d25920]      ; 005b0bc5 | DAT_02d25920
        ;   Label: LAB_005b0bc5
    TEST ESI,ESI                        ; 005b0bcb
    JZ 0x005b0bf3                       ; 005b0bcd
        ;   XREF to: 005b0bf3 (CONDITIONAL_JUMP)  ; LAB_005b0bf3
    MOV EDI,dword ptr [0x02d25924]      ; 005b0bcf | DAT_02d25924
    MOV ECX,EBX                         ; 005b0bd5
    SUB ECX,EDI                         ; 005b0bd7
    MOV EDX,ESI                         ; 005b0bd9
    SAR ECX,0x2                         ; 005b0bdb
    CMP byte ptr [ECX + EDX*0x1],0x0    ; 005b0bde
    JZ 0x005b0bed                       ; 005b0be2
        ;   XREF to: 005b0bed (CONDITIONAL_JUMP)  ; LAB_005b0bed
    PUSH EAX                            ; 005b0be4
    CALL crt_unknown.c_FUN_005a3770     ; 005b0be5
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 005b0bea
    MOV dword ptr [EBX],0x0             ; 005b0bed
        ;   Label: LAB_005b0bed
    ADD EBX,0x4                         ; 005b0bf3
        ;   Label: LAB_005b0bf3
    MOV EAX,dword ptr [EBX]             ; 005b0bf6
        ;   Label: LAB_005b0bf6
    TEST EAX,EAX                        ; 005b0bf8
    JNZ 0x005b0bc5                      ; 005b0bfa
        ;   XREF to: 005b0bc5 (CONDITIONAL_JUMP)  ; LAB_005b0bc5
    CMP dword ptr [0x02d25920],0x0      ; 005b0bfc | DAT_02d25920
    JNZ 0x005b0c11                      ; 005b0c03
        ;   XREF to: 005b0c11 (CONDITIONAL_JUMP)  ; LAB_005b0c11
    PUSH 0x5                            ; 005b0c05
    CALL crt_unknown.c_FUN_005a3650     ; 005b0c07
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005b0c0c
    JMP 0x005b0c22                      ; 005b0c0f
        ;   XREF to: 005b0c22 (UNCONDITIONAL_JUMP)  ; LAB_005b0c22
    PUSH 0x5                            ; 005b0c11
        ;   Label: LAB_005b0c11
    MOV ECX,dword ptr [0x02d25924]      ; 005b0c13 | DAT_02d25924
    PUSH ECX                            ; 005b0c19
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005b0c1a
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005b0c1f
    TEST EAX,EAX                        ; 005b0c22
        ;   Label: LAB_005b0c22
    JNZ 0x005b0c2f                      ; 005b0c24
        ;   XREF to: 005b0c2f (CONDITIONAL_JUMP)  ; LAB_005b0c2f
    MOV EAX,0xffffffff                  ; 005b0c26
    POP EDI                             ; 005b0c2b
    POP ESI                             ; 005b0c2c
    POP EBX                             ; 005b0c2d
    RET                                 ; 005b0c2e
    MOV [0x02d25924],EAX                ; 005b0c2f | DAT_02d25924
        ;   Label: LAB_005b0c2f
    MOV dword ptr [EAX],0x0             ; 005b0c34
    ADD EAX,0x4                         ; 005b0c3a
    MOV [0x02d25920],EAX                ; 005b0c3d | DAT_02d25920
    MOV byte ptr [EAX],0x0              ; 005b0c42
    XOR EAX,EAX                         ; 005b0c45
        ;   Label: LAB_005b0c45
    POP EDI                             ; 005b0c47
    POP ESI                             ; 005b0c48
    POP EBX                             ; 005b0c49
    RET                                 ; 005b0c4a

