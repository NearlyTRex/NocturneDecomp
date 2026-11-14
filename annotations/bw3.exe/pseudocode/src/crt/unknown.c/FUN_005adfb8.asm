; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005adfb8(char *param_1,char *param_2,uint param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ae014 at 005ae156
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdef_00607df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adfb8
        ;   Label: crt_unknown.c_FUN_005adfb8
    PUSH ESI                            ; 005adfb9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005adfba
    MOV EDX,dword ptr [ESP + 0x10]      ; 005adfbe
    MOV CL,byte ptr [EAX]               ; 005adfc2
    XOR EBX,EBX                         ; 005adfc4
    TEST CL,CL                          ; 005adfc6
    JZ 0x005adfd2                       ; 005adfc8
        ;   XREF to: 005adfd2 (CONDITIONAL_JUMP)  ; LAB_005adfd2
    MOV CH,byte ptr [EAX + 0x1]         ; 005adfca
        ;   Label: LAB_005adfca
    INC EAX                             ; 005adfcd
    TEST CH,CH                          ; 005adfce
    JNZ 0x005adfca                      ; 005adfd0
        ;   XREF to: 005adfca (CONDITIONAL_JUMP)  ; LAB_005adfca
    LEA ESI,[EAX + 0x9]                 ; 005adfd2
        ;   Label: LAB_005adfd2
    MOV CL,byte ptr [EDX]               ; 005adfd5
        ;   Label: LAB_005adfd5
    MOV byte ptr [EAX],CL               ; 005adfd7
    TEST CL,CL                          ; 005adfd9
    JZ 0x005adfef                       ; 005adfdb
        ;   XREF to: 005adfef (CONDITIONAL_JUMP)  ; LAB_005adfef
    CMP CL,0x30                         ; 005adfdd
    JNZ 0x005adfea                      ; 005adfe0
        ;   XREF to: 005adfea (CONDITIONAL_JUMP)  ; LAB_005adfea
    CMP byte ptr [EDX + 0x1],0x78       ; 005adfe2
    JNZ 0x005adfea                      ; 005adfe6
        ;   XREF to: 005adfea (CONDITIONAL_JUMP)  ; LAB_005adfea
    MOV EBX,ESI                         ; 005adfe8
    INC ESI                             ; 005adfea
        ;   Label: LAB_005adfea
    INC EAX                             ; 005adfeb
    INC EDX                             ; 005adfec
    JMP 0x005adfd5                      ; 005adfed
        ;   XREF to: 005adfd5 (UNCONDITIONAL_JUMP)  ; LAB_005adfd5
    TEST EBX,EBX                        ; 005adfef
        ;   Label: LAB_005adfef
    JZ 0x005ae011                       ; 005adff1
        ;   XREF to: 005ae011 (CONDITIONAL_JUMP)  ; LAB_005ae011
    MOV EAX,dword ptr [ESP + 0x14]      ; 005adff3
    TEST EAX,EAX                        ; 005adff7
    JZ 0x005ae011                       ; 005adff9
        ;   XREF to: 005ae011 (CONDITIONAL_JUMP)  ; LAB_005ae011
    MOV EDX,EAX                         ; 005adffb
        ;   Label: LAB_005adffb
    AND EDX,0xf                         ; 005adffd
    DEC EBX                             ; 005ae000
    MOV DL,byte ptr [EDX + 0x607df8]    ; 005ae001 | = "0123456789abcdef"
    SHR EAX,0x4                         ; 005ae007
    MOV byte ptr [EBX + 0x1],DL         ; 005ae00a
    TEST EAX,EAX                        ; 005ae00d
    JNZ 0x005adffb                      ; 005ae00f
        ;   XREF to: 005adffb (CONDITIONAL_JUMP)  ; LAB_005adffb
    POP ESI                             ; 005ae011
        ;   Label: LAB_005ae011
    POP EBX                             ; 005ae012
    RET                                 ; 005ae013

