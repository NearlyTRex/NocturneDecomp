; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056e010(int param_1)
;
;
; XREF[2]:
;   FUN_005671e8 at 005671ed
;   FUN_0056e1a0 at 0056e1ba
;
; Referenced Globals:
;   void* PTR_FUN_005c1af0 = 005671e4
;   void* PTR_FUN_005c1af4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f58
;
; Called Functions:
;   FUN_00564a70
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e010
        ;   Label: FUN_0056e010
    CALL dword ptr [0x005c1af0]         ; 0056e011 | PTR_FUN_005c1af0
    MOV EDX,dword ptr [0x005c1f58]      ; 0056e017 | DAT_005c1f58
    XOR EBX,EBX                         ; 0056e01d
    TEST EDX,EDX                        ; 0056e01f
    JLE 0x0056e051                      ; 0056e021
        ;   XREF to: 0056e051 (CONDITIONAL_JUMP)  ; LAB_0056e051
    LEA ECX,[EDX*0x4 + 0x0]             ; 0056e023
    XOR EAX,EAX                         ; 0056e02a
    MOV EDX,dword ptr [0x005c1f54]      ; 0056e02c | DAT_005c1f54
        ;   Label: LAB_0056e02c
    ADD EDX,EAX                         ; 0056e032
    CMP dword ptr [EDX],0x0             ; 0056e034
    JNZ 0x0056e049                      ; 0056e037
        ;   XREF to: 0056e049 (CONDITIONAL_JUMP)  ; LAB_0056e049
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056e039
    MOV dword ptr [EDX],EAX             ; 0056e03d
    CALL dword ptr [0x005c1af4]         ; 0056e03f | PTR_FUN_005c1af4
    MOV EAX,EBX                         ; 0056e045
    POP EBX                             ; 0056e047
    RET                                 ; 0056e048
    ADD EAX,0x4                         ; 0056e049
        ;   Label: LAB_0056e049
    INC EBX                             ; 0056e04c
    CMP EAX,ECX                         ; 0056e04d
    JL 0x0056e02c                       ; 0056e04f
        ;   XREF to: 0056e02c (CONDITIONAL_JUMP)  ; LAB_0056e02c
    MOV EAX,[0x005c1f58]                ; 0056e051 | DAT_005c1f58
        ;   Label: LAB_0056e051
    INC EAX                             ; 0056e056
    SHL EAX,0x2                         ; 0056e057
    PUSH EAX                            ; 0056e05a
    MOV EBX,dword ptr [0x005c1f54]      ; 0056e05b | DAT_005c1f54
    PUSH EBX                            ; 0056e061
    CALL FUN_00564a70                   ; 0056e062
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00564a70()
    MOV EDX,dword ptr [0x005c1f58]      ; 0056e067 | DAT_005c1f58
    MOV ECX,dword ptr [0x005c1f58]      ; 0056e06d | DAT_005c1f58
    ADD ESP,0x8                         ; 0056e073
    MOV [0x005c1f54],EAX                ; 0056e076 | DAT_005c1f54
    SHL EDX,0x2                         ; 0056e07b
    INC ECX                             ; 0056e07e
    ADD EAX,EDX                         ; 0056e07f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056e081
    MOV dword ptr [0x005c1f58],ECX      ; 0056e085 | DAT_005c1f58
    MOV dword ptr [EAX],EDX             ; 0056e08b
    CALL dword ptr [0x005c1af4]         ; 0056e08d | PTR_FUN_005c1af4
    MOV EAX,[0x005c1f58]                ; 0056e093 | DAT_005c1f58
    DEC EAX                             ; 0056e098
    POP EBX                             ; 0056e099
    RET                                 ; 0056e09a

