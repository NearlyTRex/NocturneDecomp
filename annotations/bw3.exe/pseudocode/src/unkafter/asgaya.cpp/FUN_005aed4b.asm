; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_asgaya_cpp_FUN_005aed4b(double param_1,byte param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   crt_unknown.c_FUN_005aa490 at 005aa4b4
;   crt_unknown.c_FUN_005aad76 at 005aad9a
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005aec1a
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005aed4b
        ;   Label: unkafter_asgaya.cpp_FUN_005aed4b
    MOV EBP,ESP                         ; 005aed4c
    PUSH EBX                            ; 005aed4e
    SUB ESP,0x10                        ; 005aed4f
    MOV DL,byte ptr [EBP + 0x10]        ; 005aed52
    CMP DL,0x1                          ; 005aed55
    JC 0x005aed8b                       ; 005aed58
        ;   XREF to: 005aed8b (CONDITIONAL_JUMP)  ; LAB_005aed8b
    CMP DL,0x3                          ; 005aed5a
    JBE 0x005aed66                      ; 005aed5d
        ;   XREF to: 005aed66 (CONDITIONAL_JUMP)  ; LAB_005aed66
    CMP DL,0x4                          ; 005aed5f
    JZ 0x005aed77                       ; 005aed62
        ;   XREF to: 005aed77 (CONDITIONAL_JUMP)  ; LAB_005aed77
    JMP 0x005aed8b                      ; 005aed64
        ;   XREF to: 005aed8b (UNCONDITIONAL_JUMP)  ; LAB_005aed8b
    LEA EBX,[EBP + 0x8]                 ; 005aed66
        ;   Label: LAB_005aed66
    OR DL,0x40                          ; 005aed69
    PUSH EBX                            ; 005aed6c
    XOR EBX,EBX                         ; 005aed6d
    MOV BL,DL                           ; 005aed6f
    OR BH,0x20                          ; 005aed71
    PUSH EBX                            ; 005aed74
    JMP 0x005aedad                      ; 005aed75
        ;   XREF to: 005aedad (UNCONDITIONAL_JUMP)  ; LAB_005aedad
    FLDZ                                ; 005aed77
        ;   Label: LAB_005aed77
    FCOMP double ptr [EBP + 0x8]        ; 005aed79
    FNSTSW AX                           ; 005aed7c
    SAHF                                ; 005aed7e
    JBE 0x005aed8b                      ; 005aed7f
        ;   XREF to: 005aed8b (CONDITIONAL_JUMP)  ; LAB_005aed8b
    XOR EDX,EDX                         ; 005aed81
    MOV dword ptr [EBP + -0x14],EDX     ; 005aed83
    MOV dword ptr [EBP + -0x10],EDX     ; 005aed86
    JMP 0x005aedc7                      ; 005aed89
        ;   XREF to: 005aedc7 (UNCONDITIONAL_JUMP)  ; LAB_005aedc7
    XOR EBX,EBX                         ; 005aed8b
        ;   Label: LAB_005aed8b
    MOV BL,DL                           ; 005aed8d
    MOV ECX,EBX                         ; 005aed8f
    OR CH,0x81                          ; 005aed91
    CMP DL,0x6                          ; 005aed94
    JNZ 0x005aeda8                      ; 005aed97
        ;   XREF to: 005aeda8 (CONDITIONAL_JUMP)  ; LAB_005aeda8
    FLDZ                                ; 005aed99
    FCOMP double ptr [EBP + 0x8]        ; 005aed9b
    FNSTSW AX                           ; 005aed9e
    SAHF                                ; 005aeda0
    JBE 0x005aeda8                      ; 005aeda1
        ;   XREF to: 005aeda8 (CONDITIONAL_JUMP)  ; LAB_005aeda8
    OR BH,0x11                          ; 005aeda3
    MOV ECX,EBX                         ; 005aeda6
    LEA EBX,[EBP + 0x8]                 ; 005aeda8
        ;   Label: LAB_005aeda8
    PUSH EBX                            ; 005aedab
    PUSH ECX                            ; 005aedac
    CALL unkafter_asgaya.cpp_FUN_005aec1a ; 005aedad
        ;   XREF to: 005aec1a (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005aec1a()
        ;   Label: LAB_005aedad
    MOV dword ptr [EBP + -0xc],EAX      ; 005aedb2
    MOV dword ptr [EBP + -0x8],EDX      ; 005aedb5
    ADD ESP,0x8                         ; 005aedb8
    MOV EAX,dword ptr [EBP + -0xc]      ; 005aedbb
    MOV dword ptr [EBP + -0x14],EAX     ; 005aedbe
    MOV EAX,dword ptr [EBP + -0x8]      ; 005aedc1
    MOV dword ptr [EBP + -0x10],EAX     ; 005aedc4
    MOV EBX,dword ptr [EBP + -0x14]     ; 005aedc7
        ;   Label: LAB_005aedc7
    MOV dword ptr [EBP + -0xc],EBX      ; 005aedca
    MOV EBX,dword ptr [EBP + -0x10]     ; 005aedcd
    MOV EAX,dword ptr [EBP + -0xc]      ; 005aedd0
    MOV EDX,EBX                         ; 005aedd3
    LEA ESP,[EBP + -0x4]                ; 005aedd5
    POP EBX                             ; 005aedd8
    POP EBP                             ; 005aedd9
    RET                                 ; 005aedda

