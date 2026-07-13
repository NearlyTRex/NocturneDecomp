; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00572ef0(uint param_1,uint param_2)
;
;
; XREF[1]:
;   FUN_00571718 at 0057176d
;
; Referenced Globals:
;   undefined4 DAT_005c1794
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572ef0
        ;   Label: FUN_00572ef0
    PUSH EDI                            ; 00572ef1
    SUB ESP,0x4                         ; 00572ef2
    MOV EBX,dword ptr [ESP + 0x14]      ; 00572ef5
    XOR EDX,EDX                         ; 00572ef9
    MOV AH,byte ptr [0x005c1794]        ; 00572efb | DAT_005c1794
    MOV dword ptr [ESP],EDX             ; 00572f01
    TEST AH,AH                          ; 00572f04
    JZ 0x00572f32                       ; 00572f06
        ;   XREF to: 00572f32 (CONDITIONAL_JUMP)  ; LAB_00572f32
    MOV EDI,ESP                         ; 00572f08
    FNSTCW word ptr SS:[EDI]            ; 00572f0a
    WAIT                                ; 00572f0d
    TEST EBX,EBX                        ; 00572f0e
    JZ 0x00572f32                       ; 00572f10
        ;   XREF to: 00572f32 (CONDITIONAL_JUMP)  ; LAB_00572f32
    MOV ECX,dword ptr [ESP]             ; 00572f12
    MOV EAX,EBX                         ; 00572f15
    MOV EDI,dword ptr [ESP + 0x10]      ; 00572f17
    NOT EAX                             ; 00572f1b
    AND EDI,EBX                         ; 00572f1d
    AND EAX,ECX                         ; 00572f1f
    OR EAX,EDI                          ; 00572f21
    MOV EDI,ESP                         ; 00572f23
    MOV dword ptr [ESP],EAX             ; 00572f25
    FLDCW word ptr SS:[EDI]             ; 00572f28
    WAIT                                ; 00572f2b
    MOV EDI,ESP                         ; 00572f2c
    FNSTCW word ptr SS:[EDI]            ; 00572f2e
    WAIT                                ; 00572f31
    XOR EAX,EAX                         ; 00572f32
        ;   Label: LAB_00572f32
    MOV AX,word ptr [ESP]               ; 00572f34
    ADD ESP,0x4                         ; 00572f38
    POP EDI                             ; 00572f3b
    POP EBX                             ; 00572f3c
    RET                                 ; 00572f3d

