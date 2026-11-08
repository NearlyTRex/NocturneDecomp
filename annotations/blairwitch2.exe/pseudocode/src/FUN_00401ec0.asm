; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401ec0(byte *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00402440 at 00402471
;
; Called Functions:
;   FUN_00401a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401ec0
        ;   Label: FUN_00401ec0
    PUSH ESI                            ; 00401ec1
    PUSH EDI                            ; 00401ec2
    PUSH EBP                            ; 00401ec3
    SUB ESP,0x4                         ; 00401ec4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00401ec7
    MOV EBX,dword ptr [ESP + 0x20]      ; 00401ecb
    MOV EDI,EDX                         ; 00401ecf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401ed1
    SUB ECX,ECX                         ; 00401ed5
    DEC ECX                             ; 00401ed7
    XOR EAX,EAX                         ; 00401ed8
    SCASB.REPNE ES:EDI                  ; 00401eda
    NOT ECX                             ; 00401edc
    DEC ECX                             ; 00401ede
    XOR EBP,EBP                         ; 00401edf
    MOV dword ptr [ESP],ECX             ; 00401ee1
    TEST ECX,ECX                        ; 00401ee4
    JLE 0x00401f3e                      ; 00401ee6
        ;   XREF to: 00401f3e (CONDITIONAL_JUMP)  ; LAB_00401f3e
    MOV EDI,EDX                         ; 00401ee8
    CMP byte ptr [EDI],0xa              ; 00401eea
        ;   Label: LAB_00401eea
    JNZ 0x00401efe                      ; 00401eed
        ;   XREF to: 00401efe (CONDITIONAL_JUMP)  ; LAB_00401efe
    MOV ECX,dword ptr [ESP + 0x28]      ; 00401eef
    ADD EBX,0xb                         ; 00401ef3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401ef6
    CMP EBX,ECX                         ; 00401efa
    JG 0x00401f3e                       ; 00401efc
        ;   XREF to: 00401f3e (CONDITIONAL_JUMP)  ; LAB_00401f3e
    XOR EAX,EAX                         ; 00401efe
        ;   Label: LAB_00401efe
    MOV AL,byte ptr [EDI]               ; 00401f00
    CMP EAX,0x20                        ; 00401f02
    JL 0x00401f35                       ; 00401f05
        ;   XREF to: 00401f35 (CONDITIONAL_JUMP)  ; LAB_00401f35
    CMP EAX,0x100                       ; 00401f07
    JGE 0x00401f35                      ; 00401f0c
        ;   XREF to: 00401f35 (CONDITIONAL_JUMP)  ; LAB_00401f35
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00401f0e
    PUSH EDX                            ; 00401f12
    PUSH EBX                            ; 00401f13
    PUSH ESI                            ; 00401f14
    PUSH EAX                            ; 00401f15
    CALL FUN_00401a20                   ; 00401f16
        ;   XREF to: 00401a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00401a20()
    ADD ESP,0x10                        ; 00401f1b
    ADD ESI,EAX                         ; 00401f1e
    CMP ESI,dword ptr [ESP + 0x24]      ; 00401f20
    JLE 0x00401f35                      ; 00401f24
        ;   XREF to: 00401f35 (CONDITIONAL_JUMP)  ; LAB_00401f35
    MOV EAX,dword ptr [ESP + 0x28]      ; 00401f26
    ADD EBX,0xb                         ; 00401f2a
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00401f2d
    CMP EBX,EAX                         ; 00401f31
    JG 0x00401f3e                       ; 00401f33
        ;   XREF to: 00401f3e (CONDITIONAL_JUMP)  ; LAB_00401f3e
    MOV EDX,dword ptr [ESP]             ; 00401f35
        ;   Label: LAB_00401f35
    INC EBP                             ; 00401f38
    INC EDI                             ; 00401f39
    CMP EBP,EDX                         ; 00401f3a
    JL 0x00401eea                       ; 00401f3c
        ;   XREF to: 00401eea (CONDITIONAL_JUMP)  ; LAB_00401eea
    ADD ESP,0x4                         ; 00401f3e
        ;   Label: LAB_00401f3e
    POP EBP                             ; 00401f41
    POP EDI                             ; 00401f42
    POP ESI                             ; 00401f43
    POP EBX                             ; 00401f44
    RET                                 ; 00401f45

