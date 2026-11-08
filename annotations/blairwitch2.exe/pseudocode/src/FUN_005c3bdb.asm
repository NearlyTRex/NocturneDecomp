; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005c3bdb(double param_1,byte param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_005bf360 at 005bf384
;   FUN_005bfc46 at 005bfc6a
;
; Called Functions:
;   FUN_005c3aaa
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c3bdb
        ;   Label: FUN_005c3bdb
    MOV EBP,ESP                         ; 005c3bdc
    PUSH EBX                            ; 005c3bde
    SUB ESP,0x10                        ; 005c3bdf
    MOV DL,byte ptr [EBP + 0x10]        ; 005c3be2
    CMP DL,0x1                          ; 005c3be5
    JC 0x005c3c1b                       ; 005c3be8
        ;   XREF to: 005c3c1b (CONDITIONAL_JUMP)  ; LAB_005c3c1b
    CMP DL,0x3                          ; 005c3bea
    JBE 0x005c3bf6                      ; 005c3bed
        ;   XREF to: 005c3bf6 (CONDITIONAL_JUMP)  ; LAB_005c3bf6
    CMP DL,0x4                          ; 005c3bef
    JZ 0x005c3c07                       ; 005c3bf2
        ;   XREF to: 005c3c07 (CONDITIONAL_JUMP)  ; LAB_005c3c07
    JMP 0x005c3c1b                      ; 005c3bf4
        ;   XREF to: 005c3c1b (UNCONDITIONAL_JUMP)  ; LAB_005c3c1b
    LEA EBX,[EBP + 0x8]                 ; 005c3bf6
        ;   Label: LAB_005c3bf6
    OR DL,0x40                          ; 005c3bf9
    PUSH EBX                            ; 005c3bfc
    XOR EBX,EBX                         ; 005c3bfd
    MOV BL,DL                           ; 005c3bff
    OR BH,0x20                          ; 005c3c01
    PUSH EBX                            ; 005c3c04
    JMP 0x005c3c3d                      ; 005c3c05
        ;   XREF to: 005c3c3d (UNCONDITIONAL_JUMP)  ; LAB_005c3c3d
    FLDZ                                ; 005c3c07
        ;   Label: LAB_005c3c07
    FCOMP double ptr [EBP + 0x8]        ; 005c3c09
    FNSTSW AX                           ; 005c3c0c
    SAHF                                ; 005c3c0e
    JBE 0x005c3c1b                      ; 005c3c0f
        ;   XREF to: 005c3c1b (CONDITIONAL_JUMP)  ; LAB_005c3c1b
    XOR EDX,EDX                         ; 005c3c11
    MOV dword ptr [EBP + -0x14],EDX     ; 005c3c13
    MOV dword ptr [EBP + -0x10],EDX     ; 005c3c16
    JMP 0x005c3c57                      ; 005c3c19
        ;   XREF to: 005c3c57 (UNCONDITIONAL_JUMP)  ; LAB_005c3c57
    XOR EBX,EBX                         ; 005c3c1b
        ;   Label: LAB_005c3c1b
    MOV BL,DL                           ; 005c3c1d
    MOV ECX,EBX                         ; 005c3c1f
    OR CH,0x81                          ; 005c3c21
    CMP DL,0x6                          ; 005c3c24
    JNZ 0x005c3c38                      ; 005c3c27
        ;   XREF to: 005c3c38 (CONDITIONAL_JUMP)  ; LAB_005c3c38
    FLDZ                                ; 005c3c29
    FCOMP double ptr [EBP + 0x8]        ; 005c3c2b
    FNSTSW AX                           ; 005c3c2e
    SAHF                                ; 005c3c30
    JBE 0x005c3c38                      ; 005c3c31
        ;   XREF to: 005c3c38 (CONDITIONAL_JUMP)  ; LAB_005c3c38
    OR BH,0x11                          ; 005c3c33
    MOV ECX,EBX                         ; 005c3c36
    LEA EBX,[EBP + 0x8]                 ; 005c3c38
        ;   Label: LAB_005c3c38
    PUSH EBX                            ; 005c3c3b
    PUSH ECX                            ; 005c3c3c
    CALL FUN_005c3aaa                   ; 005c3c3d
        ;   XREF to: 005c3aaa (UNCONDITIONAL_CALL)  ; undefined FUN_005c3aaa()
        ;   Label: LAB_005c3c3d
    MOV dword ptr [EBP + -0xc],EAX      ; 005c3c42
    MOV dword ptr [EBP + -0x8],EDX      ; 005c3c45
    ADD ESP,0x8                         ; 005c3c48
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c3c4b
    MOV dword ptr [EBP + -0x14],EAX     ; 005c3c4e
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c3c51
    MOV dword ptr [EBP + -0x10],EAX     ; 005c3c54
    MOV EBX,dword ptr [EBP + -0x14]     ; 005c3c57
        ;   Label: LAB_005c3c57
    MOV dword ptr [EBP + -0xc],EBX      ; 005c3c5a
    MOV EBX,dword ptr [EBP + -0x10]     ; 005c3c5d
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c3c60
    MOV EDX,EBX                         ; 005c3c63
    LEA ESP,[EBP + -0x4]                ; 005c3c65
    POP EBX                             ; 005c3c68
    POP EBP                             ; 005c3c69
    RET                                 ; 005c3c6a

