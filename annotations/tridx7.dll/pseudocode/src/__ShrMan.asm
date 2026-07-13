; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __ShrMan(uint *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined1       Stack[-0x4]:1  local_4
;
; XREF[1]:
;   __ld12cvt at 1000a055
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 10009eb0
        ;   Label: __ShrMan
    SUB ESP,0x10                        ; 10009eb4
    MOV EAX,ECX                         ; 10009eb7
    PUSH EBX                            ; 10009eb9
    CDQ                                 ; 10009eba
    PUSH ESI                            ; 10009ebb
    AND EDX,0x1f                        ; 10009ebc
    PUSH EDI                            ; 10009ebf
    ADD EAX,EDX                         ; 10009ec0
    PUSH EBP                            ; 10009ec2
    SAR EAX,0x5                         ; 10009ec3
    MOV dword ptr [ESP + 0x10],EAX      ; 10009ec6
    MOV EAX,ECX                         ; 10009eca
    CDQ                                 ; 10009ecc
    XOR EAX,EDX                         ; 10009ecd
    SUB EAX,EDX                         ; 10009ecf
    AND EAX,0x1f                        ; 10009ed1
    XOR EAX,EDX                         ; 10009ed4
    SUB EAX,EDX                         ; 10009ed6
    MOV EDX,0xffffffff                  ; 10009ed8
    MOV CL,AL                           ; 10009edd
    MOV ESI,dword ptr [ESP + 0x24]      ; 10009edf
    SHL EDX,CL                          ; 10009ee3
    MOV EBX,ESI                         ; 10009ee5
    MOV CL,0x20                         ; 10009ee7
    SUB CL,AL                           ; 10009ee9
    MOV EBP,0x3                         ; 10009eeb
    NOT EDX                             ; 10009ef0
    MOV dword ptr [ESP + 0x14],EDX      ; 10009ef2
    MOV byte ptr [ESP + 0x1c],CL        ; 10009ef6
    XOR EDX,EDX                         ; 10009efa
    MOV EDI,dword ptr [EBX]             ; 10009efc
        ;   Label: LAB_10009efc
    ADD EBX,0x4                         ; 10009efe
    MOV ECX,EDI                         ; 10009f01
    AND ECX,dword ptr [ESP + 0x14]      ; 10009f03
    MOV dword ptr [ESP + 0x18],ECX      ; 10009f07
    MOV CL,AL                           ; 10009f0b
    SHR EDI,CL                          ; 10009f0d
    MOV CL,byte ptr [ESP + 0x1c]        ; 10009f0f
    MOV dword ptr [EBX + -0x4],EDI      ; 10009f13
    OR EDI,EDX                          ; 10009f16
    MOV EDX,dword ptr [ESP + 0x18]      ; 10009f18
    SHL EDX,CL                          ; 10009f1c
    DEC EBP                             ; 10009f1e
    MOV dword ptr [EBX + -0x4],EDI      ; 10009f1f
    JNZ 0x10009efc                      ; 10009f22
        ;   XREF to: 10009efc (CONDITIONAL_JUMP)  ; LAB_10009efc
    MOV ECX,0x2                         ; 10009f24
    MOV EDX,ESI                         ; 10009f29
    MOV EAX,dword ptr [ESP + 0x10]      ; 10009f2b
    ADD ESI,0x8                         ; 10009f2f
    SHL EAX,0x2                         ; 10009f32
    SUB EDX,EAX                         ; 10009f35
    ADD EDX,0x8                         ; 10009f37
    CMP dword ptr [ESP + 0x10],ECX      ; 10009f3a
        ;   Label: LAB_10009f3a
    JG 0x10009f46                       ; 10009f3e
        ;   XREF to: 10009f46 (CONDITIONAL_JUMP)  ; LAB_10009f46
    MOV EAX,dword ptr [EDX]             ; 10009f40
    MOV dword ptr [ESI],EAX             ; 10009f42
    JMP 0x10009f4c                      ; 10009f44
        ;   XREF to: 10009f4c (UNCONDITIONAL_JUMP)  ; LAB_10009f4c
    MOV dword ptr [ESI],0x0             ; 10009f46
        ;   Label: LAB_10009f46
    SUB EDX,0x4                         ; 10009f4c
        ;   Label: LAB_10009f4c
    SUB ESI,0x4                         ; 10009f4f
    DEC ECX                             ; 10009f52
    JNS 0x10009f3a                      ; 10009f53
        ;   XREF to: 10009f3a (CONDITIONAL_JUMP)  ; LAB_10009f3a
    POP EBP                             ; 10009f55
    POP EDI                             ; 10009f56
    POP ESI                             ; 10009f57
    POP EBX                             ; 10009f58
    ADD ESP,0x10                        ; 10009f59
    RET                                 ; 10009f5c

