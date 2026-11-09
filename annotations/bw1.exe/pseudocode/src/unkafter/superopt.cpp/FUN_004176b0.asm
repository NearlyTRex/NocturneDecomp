; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_superopt_cpp_FUN_004176b0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004176b0
        ;   Label: unkafter_superopt.cpp_FUN_004176b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004176b1
    MOV dword ptr [EBX + 0x1c],0x0      ; 004176b5
    MOV dword ptr [EBX + 0x28],0x0      ; 004176bc
    MOV dword ptr [EBX + 0x2c],0x0      ; 004176c3
    MOV dword ptr [EBX + 0x30],0x0      ; 004176ca
    MOV dword ptr [EBX + 0x930],0xffffffff ; 004176d1
    MOV dword ptr [EBX + 0x54],0x0      ; 004176db
    MOV dword ptr [EBX + 0x24],0x0      ; 004176e2
    MOV dword ptr [EBX + 0x34],0x0      ; 004176e9
    MOV EAX,EBX                         ; 004176f0
    MOV dword ptr [EBX + 0x18],0x0      ; 004176f2
    LEA EDX,[EBX + 0x10]                ; 004176f9
    ADD EAX,0x4                         ; 004176fc
        ;   Label: LAB_004176fc
    MOV dword ptr [EAX + 0x930],0x0     ; 004176ff
    CMP EAX,EDX                         ; 00417709
    JNZ 0x004176fc                      ; 0041770b
        ;   XREF to: 004176fc (CONDITIONAL_JUMP)  ; LAB_004176fc
    MOV EAX,EBX                         ; 0041770d
    LEA EDX,[EBX + 0xc]                 ; 0041770f
    ADD EAX,0x4                         ; 00417712
        ;   Label: LAB_00417712
    MOV dword ptr [EAX + 0x34],0xffffffff ; 00417715
    CMP EAX,EDX                         ; 0041771c
    JNZ 0x00417712                      ; 0041771e
        ;   XREF to: 00417712 (CONDITIONAL_JUMP)  ; LAB_00417712
    MOV EAX,EBX                         ; 00417720
    LEA EDX,[EBX + 0x10]                ; 00417722
    ADD EAX,0x4                         ; 00417725
        ;   Label: LAB_00417725
    MOV dword ptr [EAX + 0x40],0x0      ; 00417728
    CMP EAX,EDX                         ; 0041772f
    JNZ 0x00417725                      ; 00417731
        ;   XREF to: 00417725 (CONDITIONAL_JUMP)  ; LAB_00417725
    MOV EAX,EBX                         ; 00417733
    LEA EDX,[EBX + 0x18]                ; 00417735
    ADD EAX,0x4                         ; 00417738
        ;   Label: LAB_00417738
    MOV dword ptr [EAX + 0x54],0x0      ; 0041773b
    CMP EAX,EDX                         ; 00417742
    JNZ 0x00417738                      ; 00417744
        ;   XREF to: 00417738 (CONDITIONAL_JUMP)  ; LAB_00417738
    PUSH 0x2                            ; 00417746
    PUSH 0x0                            ; 00417748
    CALL core_actor.cpp_FUN_0040cc60    ; 0041774a
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041774f
    PUSH 0x2                            ; 00417752
    PUSH 0x0                            ; 00417754
    MOV dword ptr [EBX + 0x44],EAX      ; 00417756
    CALL core_actor.cpp_FUN_0040cc60    ; 00417759
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041775e
    PUSH 0x2                            ; 00417761
    PUSH 0x0                            ; 00417763
    MOV dword ptr [EBX + 0x48],EAX      ; 00417765
    CALL core_actor.cpp_FUN_0040cc60    ; 00417768
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041776d
    PUSH 0x2                            ; 00417770
    PUSH 0x0                            ; 00417772
    MOV dword ptr [EBX + 0x4c],EAX      ; 00417774
    CALL core_actor.cpp_FUN_0040cc60    ; 00417777
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041777c
    MOV dword ptr [EBX + 0x50],EAX      ; 0041777f
    MOV EAX,EBX                         ; 00417782
    ADD EBX,0x18                        ; 00417784
    ADD EAX,0x4                         ; 00417787
        ;   Label: LAB_00417787
    MOV dword ptr [EAX + 0x54],0x0      ; 0041778a
    CMP EAX,EBX                         ; 00417791
    JNZ 0x00417787                      ; 00417793
        ;   XREF to: 00417787 (CONDITIONAL_JUMP)  ; LAB_00417787
    POP EBX                             ; 00417795
    LEA EAX,[EAX]                       ; 00417796
    LEA EDX,[EDX]                       ; 0041779c

