; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_005ce060(uint param_1,uint param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cd2f8 at 005cd34d
;
; Referenced Globals:
;   undefined4 DAT_0062621c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ce060
        ;   Label: crt_unknown.c_FUN_005ce060
    PUSH EDI                            ; 005ce061
    SUB ESP,0x4                         ; 005ce062
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ce065
    XOR EDX,EDX                         ; 005ce069
    MOV AH,byte ptr [0x0062621c]        ; 005ce06b | DAT_0062621c
    MOV dword ptr [ESP],EDX             ; 005ce071
    TEST AH,AH                          ; 005ce074
    JZ 0x005ce0a2                       ; 005ce076
        ;   XREF to: 005ce0a2 (CONDITIONAL_JUMP)  ; LAB_005ce0a2
    MOV EDI,ESP                         ; 005ce078
    FNSTCW word ptr SS:[EDI]            ; 005ce07a
    WAIT                                ; 005ce07d
    TEST EBX,EBX                        ; 005ce07e
    JZ 0x005ce0a2                       ; 005ce080
        ;   XREF to: 005ce0a2 (CONDITIONAL_JUMP)  ; LAB_005ce0a2
    MOV ECX,dword ptr [ESP]             ; 005ce082
    MOV EAX,EBX                         ; 005ce085
    MOV EDI,dword ptr [ESP + 0x10]      ; 005ce087
    NOT EAX                             ; 005ce08b
    AND EDI,EBX                         ; 005ce08d
    AND EAX,ECX                         ; 005ce08f
    OR EAX,EDI                          ; 005ce091
    MOV EDI,ESP                         ; 005ce093
    MOV dword ptr [ESP],EAX             ; 005ce095
    FLDCW word ptr SS:[EDI]             ; 005ce098
    WAIT                                ; 005ce09b
    MOV EDI,ESP                         ; 005ce09c
    FNSTCW word ptr SS:[EDI]            ; 005ce09e
    WAIT                                ; 005ce0a1
    XOR EAX,EAX                         ; 005ce0a2
        ;   Label: LAB_005ce0a2
    MOV AX,word ptr [ESP]               ; 005ce0a4
    ADD ESP,0x4                         ; 005ce0a8
    POP EDI                             ; 005ce0ab
    POP EBX                             ; 005ce0ac
    RET                                 ; 005ce0ad

