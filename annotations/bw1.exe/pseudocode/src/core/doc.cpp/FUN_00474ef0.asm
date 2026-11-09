; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_00474ef0(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 0046a273
;
; Called Functions:
;   core_doc.cpp_FUN_004712b0
;   core_doc.cpp_FUN_00475890
;   core_hero.cpp_FUN_004eca10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474ef0
        ;   Label: core_doc.cpp_FUN_00474ef0
    PUSH ESI                            ; 00474ef1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00474ef2
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 00474ef6
    JZ 0x00474f08                       ; 00474efd
        ;   XREF to: 00474f08 (CONDITIONAL_JUMP)  ; LAB_00474f08
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 00474eff
    JZ 0x00474f0b                       ; 00474f06
        ;   XREF to: 00474f0b (CONDITIONAL_JUMP)  ; LAB_00474f0b
    POP ESI                             ; 00474f08
        ;   Label: LAB_00474f08
    POP EBX                             ; 00474f09
    RET                                 ; 00474f0a
    PUSH EBX                            ; 00474f0b
        ;   Label: LAB_00474f0b
    CALL core_doc.cpp_FUN_00475890      ; 00474f0c
        ;   XREF to: 00475890 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_00475890()
    ADD ESP,0x4                         ; 00474f11
    TEST EAX,EAX                        ; 00474f14
    JNZ 0x00474f08                      ; 00474f16
        ;   XREF to: 00474f08 (CONDITIONAL_JUMP)  ; LAB_00474f08
    MOV ESI,dword ptr [EBX + 0x1ffac]   ; 00474f18
    TEST ESI,ESI                        ; 00474f1e
    JNZ 0x00474f08                      ; 00474f20
        ;   XREF to: 00474f08 (CONDITIONAL_JUMP)  ; LAB_00474f08
    PUSH EAX                            ; 00474f22
    PUSH EBX                            ; 00474f23
    CALL core_hero.cpp_FUN_004eca10     ; 00474f24
        ;   XREF to: 004eca10 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004eca10()
    ADD ESP,0x8                         ; 00474f29
    TEST EAX,EAX                        ; 00474f2c
    JNZ 0x00474f46                      ; 00474f2e
        ;   XREF to: 00474f46 (CONDITIONAL_JUMP)  ; LAB_00474f46
    PUSH EBX                            ; 00474f30
    CALL core_doc.cpp_FUN_004712b0      ; 00474f31
        ;   XREF to: 004712b0 (UNCONDITIONAL_CALL)  ; undefined core_doc.cpp_FUN_004712b0()
    ADD ESP,0x4                         ; 00474f36
    TEST EAX,EAX                        ; 00474f39
    JZ 0x00474f59                       ; 00474f3b
        ;   XREF to: 00474f59 (CONDITIONAL_JUMP)  ; LAB_00474f59
    MOV dword ptr [EBX + 0xc1e4],ESI    ; 00474f3d
    POP ESI                             ; 00474f43
    POP EBX                             ; 00474f44
    RET                                 ; 00474f45
    PUSH EBX                            ; 00474f46
        ;   Label: LAB_00474f46
    MOV EAX,dword ptr [EBX + 0x154]     ; 00474f47
    CALL dword ptr [EAX + 0x158]        ; 00474f4d
    ADD ESP,0x4                         ; 00474f53
    POP ESI                             ; 00474f56
    POP EBX                             ; 00474f57
    RET                                 ; 00474f58
    MOV dword ptr [EBX + 0xc1e4],EAX    ; 00474f59
        ;   Label: LAB_00474f59
    POP ESI                             ; 00474f5f
    POP EBX                             ; 00474f60
    RET                                 ; 00474f61

