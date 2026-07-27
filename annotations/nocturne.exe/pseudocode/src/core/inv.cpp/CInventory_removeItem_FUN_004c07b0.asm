; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_removeItem_FUN_004c07b0(int param_1,int param_2,int param_3)
;
;
; XREF[6]:
;   core_inv.cpp_CInventory_clear_FUN_004bee80 at 004beea3
;   core_inv.cpp_CInventory_removeMatchingKeys_FUN_004c3280 at 004c32bc
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c177e
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502f0a
;   core_stranger.cpp_FUN_0053f310 at 0053f58d
;   core_vampboss.cpp_FUN_0054dd50 at 0054df0e
;
; Called Functions:
;   core_actor.cpp_FUN_00409cd0
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c07b0
        ;   Label: core_inv.cpp_CInventory_removeItem_FUN_004c07b0
    PUSH ESI                            ; 004c07b1
    PUSH EDI                            ; 004c07b2
    PUSH EBP                            ; 004c07b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004c07b4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c07b8
    CMP EBX,dword ptr [ECX + 0x330]     ; 004c07bc
    JZ 0x004c07ff                       ; 004c07c2
        ;   XREF to: 004c07ff (CONDITIONAL_JUMP)  ; LAB_004c07ff
    CMP EBX,dword ptr [ECX + 0x334]     ; 004c07c4
        ;   Label: LAB_004c07c4
    JNZ 0x004c07d6                      ; 004c07ca
        ;   XREF to: 004c07d6 (CONDITIONAL_JUMP)  ; LAB_004c07d6
    MOV dword ptr [ECX + 0x334],0x0     ; 004c07cc
    MOV EDI,dword ptr [ECX + 0x8]       ; 004c07d6
        ;   Label: LAB_004c07d6
    XOR EAX,EAX                         ; 004c07d9
    TEST EDI,EDI                        ; 004c07db
    JLE 0x004c07fa                      ; 004c07dd
        ;   XREF to: 004c07fa (CONDITIONAL_JUMP)  ; LAB_004c07fa
    MOV EDX,ECX                         ; 004c07df
    MOV EDI,dword ptr [EDX + 0xc]       ; 004c07e1
        ;   Label: LAB_004c07e1
    LEA ESI,[EAX*0x4 + 0x0]             ; 004c07e4
    CMP EBX,EDI                         ; 004c07eb
    JZ 0x004c080b                       ; 004c07ed
        ;   XREF to: 004c080b (CONDITIONAL_JUMP)  ; LAB_004c080b
    INC EAX                             ; 004c07ef
    MOV EBP,dword ptr [ECX + 0x8]       ; 004c07f0
    ADD EDX,0x4                         ; 004c07f3
    CMP EAX,EBP                         ; 004c07f6
    JL 0x004c07e1                       ; 004c07f8
        ;   XREF to: 004c07e1 (CONDITIONAL_JUMP)  ; LAB_004c07e1
    POP EBP                             ; 004c07fa
        ;   Label: LAB_004c07fa
    POP EDI                             ; 004c07fb
    POP ESI                             ; 004c07fc
    POP EBX                             ; 004c07fd
    RET                                 ; 004c07fe
    MOV dword ptr [ECX + 0x330],0x0     ; 004c07ff
        ;   Label: LAB_004c07ff
    JMP 0x004c07c4                      ; 004c0809
        ;   XREF to: 004c07c4 (UNCONDITIONAL_JUMP)  ; LAB_004c07c4
    MOV EBP,dword ptr [ECX + 0x8]       ; 004c080b
        ;   Label: LAB_004c080b
    DEC EBP                             ; 004c080e
    MOV EDX,EBP                         ; 004c080f
    SUB EDX,EAX                         ; 004c0811
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c0813
    ADD ECX,0xc                         ; 004c081a
    PUSH EAX                            ; 004c081d
    LEA EAX,[ESI + 0x4]                 ; 004c081e
    ADD EAX,ECX                         ; 004c0821
    PUSH EAX                            ; 004c0823
    MOV dword ptr [ECX + -0x4],EBP      ; 004c0824
    ADD ECX,ESI                         ; 004c0827
    PUSH ECX                            ; 004c0829
    CALL crt_string.c_memmove_FUN_00566170 ; 004c082a
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004c082f
    CMP dword ptr [ESP + 0x1c],0x0      ; 004c0832
    JZ 0x004c07fa                       ; 004c0837
        ;   XREF to: 004c07fa (CONDITIONAL_JUMP)  ; LAB_004c07fa
    PUSH EDI                            ; 004c0839
    CALL core_actor.cpp_FUN_00409cd0    ; 004c083a
        ;   XREF to: 00409cd0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409cd0()
    ADD ESP,0x4                         ; 004c083f
    POP EBP                             ; 004c0842
    POP EDI                             ; 004c0843
    POP ESI                             ; 004c0844
    POP EBX                             ; 004c0845
    RET                                 ; 004c0846

