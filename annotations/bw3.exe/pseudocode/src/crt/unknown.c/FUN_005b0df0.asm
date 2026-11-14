; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005b0df0(uint param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b0088 at 005b00dd
;
; Referenced Globals:
;   undefined4 DAT_006075c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0df0
        ;   Label: crt_unknown.c_FUN_005b0df0
    PUSH EDI                            ; 005b0df1
    SUB ESP,0x4                         ; 005b0df2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b0df5
    XOR EDX,EDX                         ; 005b0df9
    MOV AH,byte ptr [0x006075c0]        ; 005b0dfb | DAT_006075c0
    MOV dword ptr [ESP],EDX             ; 005b0e01
    TEST AH,AH                          ; 005b0e04
    JZ 0x005b0e32                       ; 005b0e06
        ;   XREF to: 005b0e32 (CONDITIONAL_JUMP)  ; LAB_005b0e32
    MOV EDI,ESP                         ; 005b0e08
    FNSTCW word ptr SS:[EDI]            ; 005b0e0a
    WAIT                                ; 005b0e0d
    TEST EBX,EBX                        ; 005b0e0e
    JZ 0x005b0e32                       ; 005b0e10
        ;   XREF to: 005b0e32 (CONDITIONAL_JUMP)  ; LAB_005b0e32
    MOV ECX,dword ptr [ESP]             ; 005b0e12
    MOV EAX,EBX                         ; 005b0e15
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b0e17
    NOT EAX                             ; 005b0e1b
    AND EDI,EBX                         ; 005b0e1d
    AND EAX,ECX                         ; 005b0e1f
    OR EAX,EDI                          ; 005b0e21
    MOV EDI,ESP                         ; 005b0e23
    MOV dword ptr [ESP],EAX             ; 005b0e25
    FLDCW word ptr SS:[EDI]             ; 005b0e28
    WAIT                                ; 005b0e2b
    MOV EDI,ESP                         ; 005b0e2c
    FNSTCW word ptr SS:[EDI]            ; 005b0e2e
    WAIT                                ; 005b0e31
    XOR EAX,EAX                         ; 005b0e32
        ;   Label: LAB_005b0e32
    MOV AX,word ptr [ESP]               ; 005b0e34
    ADD ESP,0x4                         ; 005b0e38
    POP EDI                             ; 005b0e3b
    POP EBX                             ; 005b0e3c
    RET                                 ; 005b0e3d

