; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044bfde(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af80
;   undefined4 DAT_01c6af8c
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0044bfde
        ;   Label: core_dcamera.cpp_FUN_0044bfde
    PUSH EBX                            ; 0044bfe0
    PUSH ESI                            ; 0044bfe1
    PUSH EDI                            ; 0044bfe2
    PUSH EBP                            ; 0044bfe3
    MOV EBP,dword ptr [0x005fba20]      ; 0044bfe4 | DAT_005fba20
    XOR EDX,EDX                         ; 0044bfea
    XOR EAX,EAX                         ; 0044bfec
    MOVZX ESI,byte ptr [EAX + 0xb9da49] ; 0044bfee
        ;   Label: LAB_0044bfee
    XOR EBX,EBX                         ; 0044bff5
    MOVZX EDI,byte ptr [EAX + 0xb9da48] ; 0044bff7
    MOV BL,byte ptr [EAX + 0xb9da4a]    ; 0044bffe
    CMP EBP,0x20                        ; 0044c004
    JNZ 0x0044c046                      ; 0044c007
        ;   XREF to: 0044c046 (CONDITIONAL_JUMP)  ; LAB_0044c046
    MOV CL,byte ptr [0x01c6af74]        ; 0044c009 | DAT_01c6af74
    SHL EDI,CL                          ; 0044c00f
    MOV CL,byte ptr [0x01c6af80]        ; 0044c011 | DAT_01c6af80
    SHL ESI,CL                          ; 0044c017
    MOV CL,byte ptr [0x01c6af8c]        ; 0044c019 | DAT_01c6af8c
    SHL EBX,CL                          ; 0044c01f
    OR EDI,ESI                          ; 0044c021
    MOV ECX,EBX                         ; 0044c023
    OR ECX,EDI                          ; 0044c025
    ADD EDX,0x4                         ; 0044c027
        ;   Label: LAB_0044c027
    ADD EAX,0x3                         ; 0044c02a
    MOV dword ptr [EDX + 0xb9dd48],ECX  ; 0044c02d
    CMP EDX,0x400                       ; 0044c033
    JNZ 0x0044bfee                      ; 0044c039
        ;   XREF to: 0044bfee (CONDITIONAL_JUMP)  ; LAB_0044bfee
    MOV dword ptr [0x005fba20],EBP      ; 0044c03b | DAT_005fba20
    POP EBP                             ; 0044c041
    POP EDI                             ; 0044c042
    POP ESI                             ; 0044c043
    POP EBX                             ; 0044c044
    RET                                 ; 0044c045
    MOV ECX,EDI                         ; 0044c046
        ;   Label: LAB_0044c046
    SHL ESI,0x8                         ; 0044c048
    SHL ECX,0x10                        ; 0044c04b
    OR ECX,ESI                          ; 0044c04e
    OR ECX,EBX                          ; 0044c050
    JMP 0x0044c027                      ; 0044c052
        ;   XREF to: 0044c027 (UNCONDITIONAL_JUMP)  ; LAB_0044c027

