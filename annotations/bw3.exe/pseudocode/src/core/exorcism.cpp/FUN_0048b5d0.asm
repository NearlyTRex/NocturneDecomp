; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_exorcism_cpp_FUN_0048b5d0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bdd96
;
; Called Functions:
;   core_weapon.cpp_FUN_0057b820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b5d0
        ;   Label: core_exorcism.cpp_FUN_0048b5d0
    PUSH EDI                            ; 0048b5d1
    SUB ESP,0x24                        ; 0048b5d2
    MOV EBX,ESI                         ; 0048b5d5
    MOV EDX,dword ptr [ESP + 0x30]      ; 0048b5d7
    PUSH EDX                            ; 0048b5db
    LEA ESI,[ESP + 0x4]                 ; 0048b5dc
    LEA EDI,[ESP + 0x1c]                ; 0048b5e0
    CALL core_weapon.cpp_FUN_0057b820   ; 0048b5e4
        ;   XREF to: 0057b820 (UNCONDITIONAL_CALL)  ; undefined core_weapon.cpp_FUN_0057b820()
    LEA ESI,[ESP + 0x4]                 ; 0048b5e9
    ADD ESP,0x4                         ; 0048b5ed
    MOVSD ES:EDI,ESI                    ; 0048b5f0
    MOVSD ES:EDI,ESI                    ; 0048b5f1
    MOVSD ES:EDI,ESI                    ; 0048b5f2
    LEA EAX,[ESP + 0x18]                ; 0048b5f3
    LEA ESI,[ESP + 0xc]                 ; 0048b5f7
    CMP ESI,EAX                         ; 0048b5fb
    JNZ 0x0048b61e                      ; 0048b5fd
        ;   XREF to: 0048b61e (CONDITIONAL_JUMP)  ; LAB_0048b61e
    FLD float ptr [ESP + 0x14]          ; 0048b5ff
        ;   Label: LAB_0048b5ff
    LEA ESI,[ESP + 0xc]                 ; 0048b603
    FADD float ptr [0x005bdd96]         ; 0048b607 | DAT_005bdd96
    MOV EDI,EBX                         ; 0048b60d
    FSTP float ptr [ESP + 0x14]         ; 0048b60f
    MOVSD ES:EDI,ESI                    ; 0048b613
    MOVSD ES:EDI,ESI                    ; 0048b614
    MOVSD ES:EDI,ESI                    ; 0048b615
    MOV EAX,EBX                         ; 0048b616
    ADD ESP,0x24                        ; 0048b618
    POP EDI                             ; 0048b61b
    POP EBX                             ; 0048b61c
    RET                                 ; 0048b61d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048b61e
        ;   Label: LAB_0048b61e
    MOV dword ptr [ESP + 0xc],EAX       ; 0048b622
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b626
    MOV dword ptr [ESP + 0x10],EAX      ; 0048b62a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048b62e
    MOV dword ptr [ESP + 0x14],EAX      ; 0048b632
    JMP 0x0048b5ff                      ; 0048b636
        ;   XREF to: 0048b5ff (UNCONDITIONAL_JUMP)  ; LAB_0048b5ff

