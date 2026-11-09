; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_enemy_cpp_FUN_0048a220(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042cd70
;   core_enemy.cpp_FUN_00489c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a220
        ;   Label: unkafter_enemy.cpp_FUN_0048a220
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048a221
    PUSH EBX                            ; 0048a225
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a226
    CALL dword ptr [EAX + 0x10c]        ; 0048a22c
    ADD ESP,0x4                         ; 0048a232
    TEST EAX,EAX                        ; 0048a235
    JLE 0x0048a242                      ; 0048a237
        ;   XREF to: 0048a242 (CONDITIONAL_JUMP)  ; LAB_0048a242
    CMP dword ptr [EBX + 0xcecc],0x0    ; 0048a239
    JZ 0x0048a260                       ; 0048a240
        ;   XREF to: 0048a260 (CONDITIONAL_JUMP)  ; LAB_0048a260
    FLD float ptr [EBX + 0x2538]        ; 0048a242
        ;   Label: LAB_0048a242
    FLDZ                                ; 0048a248
    FCOMPP                              ; 0048a24a
    FNSTSW AX                           ; 0048a24c
    SAHF                                ; 0048a24e
    JNC 0x0048a26b                      ; 0048a24f
        ;   XREF to: 0048a26b (CONDITIONAL_JUMP)  ; LAB_0048a26b
    PUSH dword ptr [ESP + 0xc]          ; 0048a251
        ;   Label: LAB_0048a251
    PUSH EBX                            ; 0048a255
    CALL core_charactr.cpp_FUN_0042cd70 ; 0048a256
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 0048a25b
    POP EBX                             ; 0048a25e
    RET                                 ; 0048a25f
    PUSH EBX                            ; 0048a260
        ;   Label: LAB_0048a260
    CALL core_enemy.cpp_FUN_00489c90    ; 0048a261
        ;   XREF to: 00489c90 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489c90()
    ADD ESP,0x4                         ; 0048a266
    JMP 0x0048a242                      ; 0048a269
        ;   XREF to: 0048a242 (UNCONDITIONAL_JUMP)  ; LAB_0048a242
    PUSH EBX                            ; 0048a26b
        ;   Label: LAB_0048a26b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a26c
    CALL dword ptr [EAX + 0x10c]        ; 0048a272
    ADD ESP,0x4                         ; 0048a278
    CMP EAX,0x1                         ; 0048a27b
    JGE 0x0048a251                      ; 0048a27e
        ;   XREF to: 0048a251 (CONDITIONAL_JUMP)  ; LAB_0048a251
    PUSH 0xbf800000                     ; 0048a280
    PUSH 0x0                            ; 0048a285
    PUSH 0x0                            ; 0048a287
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048a289
    PUSH EBX                            ; 0048a28f
    CALL dword ptr [EAX + 0xdc]         ; 0048a290
    ADD ESP,0x10                        ; 0048a296
    PUSH dword ptr [ESP + 0xc]          ; 0048a299
    PUSH EBX                            ; 0048a29d
    CALL core_charactr.cpp_FUN_0042cd70 ; 0048a29e
        ;   XREF to: 0042cd70 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042cd70()
    ADD ESP,0x8                         ; 0048a2a3
    POP EBX                             ; 0048a2a6
    RET                                 ; 0048a2a7

