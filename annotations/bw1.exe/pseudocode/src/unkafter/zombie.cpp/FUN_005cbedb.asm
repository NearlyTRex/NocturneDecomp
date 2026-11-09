; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_zombie_cpp_FUN_005cbedb(double param_1,byte param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   crt_unknown.c_FUN_005c7620 at 005c7644
;   crt_unknown.c_FUN_005c7f06 at 005c7f2a
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005cbdaa
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cbedb
        ;   Label: unkafter_zombie.cpp_FUN_005cbedb
    MOV EBP,ESP                         ; 005cbedc
    PUSH EBX                            ; 005cbede
    SUB ESP,0x10                        ; 005cbedf
    MOV DL,byte ptr [EBP + 0x10]        ; 005cbee2
    CMP DL,0x1                          ; 005cbee5
    JC 0x005cbf1b                       ; 005cbee8
        ;   XREF to: 005cbf1b (CONDITIONAL_JUMP)  ; LAB_005cbf1b
    CMP DL,0x3                          ; 005cbeea
    JBE 0x005cbef6                      ; 005cbeed
        ;   XREF to: 005cbef6 (CONDITIONAL_JUMP)  ; LAB_005cbef6
    CMP DL,0x4                          ; 005cbeef
    JZ 0x005cbf07                       ; 005cbef2
        ;   XREF to: 005cbf07 (CONDITIONAL_JUMP)  ; LAB_005cbf07
    JMP 0x005cbf1b                      ; 005cbef4
        ;   XREF to: 005cbf1b (UNCONDITIONAL_JUMP)  ; LAB_005cbf1b
    LEA EBX,[EBP + 0x8]                 ; 005cbef6
        ;   Label: LAB_005cbef6
    OR DL,0x40                          ; 005cbef9
    PUSH EBX                            ; 005cbefc
    XOR EBX,EBX                         ; 005cbefd
    MOV BL,DL                           ; 005cbeff
    OR BH,0x20                          ; 005cbf01
    PUSH EBX                            ; 005cbf04
    JMP 0x005cbf3d                      ; 005cbf05
        ;   XREF to: 005cbf3d (UNCONDITIONAL_JUMP)  ; LAB_005cbf3d
    FLDZ                                ; 005cbf07
        ;   Label: LAB_005cbf07
    FCOMP double ptr [EBP + 0x8]        ; 005cbf09
    FNSTSW AX                           ; 005cbf0c
    SAHF                                ; 005cbf0e
    JBE 0x005cbf1b                      ; 005cbf0f
        ;   XREF to: 005cbf1b (CONDITIONAL_JUMP)  ; LAB_005cbf1b
    XOR EDX,EDX                         ; 005cbf11
    MOV dword ptr [EBP + -0x14],EDX     ; 005cbf13
    MOV dword ptr [EBP + -0x10],EDX     ; 005cbf16
    JMP 0x005cbf57                      ; 005cbf19
        ;   XREF to: 005cbf57 (UNCONDITIONAL_JUMP)  ; LAB_005cbf57
    XOR EBX,EBX                         ; 005cbf1b
        ;   Label: LAB_005cbf1b
    MOV BL,DL                           ; 005cbf1d
    MOV ECX,EBX                         ; 005cbf1f
    OR CH,0x81                          ; 005cbf21
    CMP DL,0x6                          ; 005cbf24
    JNZ 0x005cbf38                      ; 005cbf27
        ;   XREF to: 005cbf38 (CONDITIONAL_JUMP)  ; LAB_005cbf38
    FLDZ                                ; 005cbf29
    FCOMP double ptr [EBP + 0x8]        ; 005cbf2b
    FNSTSW AX                           ; 005cbf2e
    SAHF                                ; 005cbf30
    JBE 0x005cbf38                      ; 005cbf31
        ;   XREF to: 005cbf38 (CONDITIONAL_JUMP)  ; LAB_005cbf38
    OR BH,0x11                          ; 005cbf33
    MOV ECX,EBX                         ; 005cbf36
    LEA EBX,[EBP + 0x8]                 ; 005cbf38
        ;   Label: LAB_005cbf38
    PUSH EBX                            ; 005cbf3b
    PUSH ECX                            ; 005cbf3c
    CALL unkafter_zombie.cpp_FUN_005cbdaa ; 005cbf3d
        ;   XREF to: 005cbdaa (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005cbdaa()
        ;   Label: LAB_005cbf3d
    MOV dword ptr [EBP + -0xc],EAX      ; 005cbf42
    MOV dword ptr [EBP + -0x8],EDX      ; 005cbf45
    ADD ESP,0x8                         ; 005cbf48
    MOV EAX,dword ptr [EBP + -0xc]      ; 005cbf4b
    MOV dword ptr [EBP + -0x14],EAX     ; 005cbf4e
    MOV EAX,dword ptr [EBP + -0x8]      ; 005cbf51
    MOV dword ptr [EBP + -0x10],EAX     ; 005cbf54
    MOV EBX,dword ptr [EBP + -0x14]     ; 005cbf57
        ;   Label: LAB_005cbf57
    MOV dword ptr [EBP + -0xc],EBX      ; 005cbf5a
    MOV EBX,dword ptr [EBP + -0x10]     ; 005cbf5d
    MOV EAX,dword ptr [EBP + -0xc]      ; 005cbf60
    MOV EDX,EBX                         ; 005cbf63
    LEA ESP,[EBP + -0x4]                ; 005cbf65
    POP EBX                             ; 005cbf68
    POP EBP                             ; 005cbf69
    RET                                 ; 005cbf6a

