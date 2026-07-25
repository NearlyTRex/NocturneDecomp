; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_00498790(int param_1)
;
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_processMotionEvents_FUN_00497410 at 004977ce
;
; Referenced Globals:
;   undefined4 CDemonActorType_007641f8.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   FUN_0040f1a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498790
        ;   Label: core_gabriela.cpp_CGabriella_collectAmmo_FUN_00498790
    MOV EBX,dword ptr [ESP + 0x8]       ; 00498791
    MOV EDX,dword ptr [EBX + 0x1fa08]   ; 00498795
    TEST EDX,EDX                        ; 0049879b
    JNZ 0x004987a1                      ; 0049879d
        ;   XREF to: 004987a1 (CONDITIONAL_JUMP)  ; LAB_004987a1
    POP EBX                             ; 0049879f
    RET                                 ; 004987a0
    MOV ECX,dword ptr [0x00764230]      ; 004987a1 | CDemonActorType_007641f8.name_hash
        ;   Label: LAB_004987a1
    PUSH ECX                            ; 004987a7
    PUSH EDX                            ; 004987a8
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 004987a9
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 004987ae
    TEST EAX,EAX                        ; 004987b1
    JZ 0x004987c5                       ; 004987b3
        ;   XREF to: 004987c5 (CONDITIONAL_JUMP)  ; LAB_004987c5
    LEA EDX,[EBX + 0x1f5a0]             ; 004987b5
    PUSH EDX                            ; 004987bb
    PUSH EAX                            ; 004987bc
    CALL FUN_0040f1a0                   ; 004987bd
        ;   XREF to: 0040f1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f1a0()
    ADD ESP,0x8                         ; 004987c2
    MOV dword ptr [EBX + 0x1fa08],0x0   ; 004987c5
        ;   Label: LAB_004987c5
    POP EBX                             ; 004987cf
    RET                                 ; 004987d0

