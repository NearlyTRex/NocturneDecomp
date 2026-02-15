; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_ParseFormatFlags_FUN_00602edc(char *format,FormatSpec *spec_info)
;
; Parameters:
; char *           Stack[0x4]:4   format
; FormatSpec *     Stack[0x8]:4   spec_info
;
; XREF[1]:
;   crt_stdio.c_ScanFormatSpec_FUN_00602d78 at 00602d8d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602edc
        ;   Label: crt_stdio.c_ParseFormatFlags_FUN_00602edc
    MOV EDX,dword ptr [ESP + 0x8]       ; 00602edd
    MOV EAX,dword ptr [ESP + 0xc]       ; 00602ee1
    MOV word ptr [EAX + 0x1e],0x0       ; 00602ee5
    MOV BL,byte ptr [EDX]               ; 00602eeb
    CMP BL,0x2d                         ; 00602eed
    JNZ 0x00602ef8                      ; 00602ef0
        ;   XREF to: 00602ef8 (CONDITIONAL_JUMP)  ; LAB_00602ef8
    OR byte ptr [EAX + 0x1e],0x8        ; 00602ef2
    JMP 0x00602f3a                      ; 00602ef6
        ;   XREF to: 00602f3a (UNCONDITIONAL_JUMP)  ; LAB_00602f3a
    CMP BL,0x23                         ; 00602ef8
        ;   Label: LAB_00602ef8
    JNZ 0x00602f03                      ; 00602efb
        ;   XREF to: 00602f03 (CONDITIONAL_JUMP)  ; LAB_00602f03
    OR byte ptr [EAX + 0x1e],0x1        ; 00602efd
    JMP 0x00602f3a                      ; 00602f01
        ;   XREF to: 00602f3a (UNCONDITIONAL_JUMP)  ; LAB_00602f3a
    CMP BL,0x2b                         ; 00602f03
        ;   Label: LAB_00602f03
    JNZ 0x00602f1b                      ; 00602f06
        ;   XREF to: 00602f1b (CONDITIONAL_JUMP)  ; LAB_00602f1b
    MOV CH,byte ptr [EAX + 0x1e]        ; 00602f08
    OR CH,0x4                           ; 00602f0b
    MOV BL,CH                           ; 00602f0e
    MOV byte ptr [EAX + 0x1e],CH        ; 00602f10
    AND BL,0xfd                         ; 00602f13
    MOV byte ptr [EAX + 0x1e],BL        ; 00602f16
    JMP 0x00602f3a                      ; 00602f19
        ;   XREF to: 00602f3a (UNCONDITIONAL_JUMP)  ; LAB_00602f3a
    CMP BL,0x20                         ; 00602f1b
        ;   Label: LAB_00602f1b
    JNZ 0x00602f32                      ; 00602f1e
        ;   XREF to: 00602f32 (CONDITIONAL_JUMP)  ; LAB_00602f32
    MOV BH,byte ptr [EAX + 0x1e]        ; 00602f20
    TEST BH,0x4                         ; 00602f23
    JNZ 0x00602f3a                      ; 00602f26
        ;   XREF to: 00602f3a (CONDITIONAL_JUMP)  ; LAB_00602f3a
    MOV CL,BH                           ; 00602f28
    OR CL,0x2                           ; 00602f2a
    MOV byte ptr [EAX + 0x1e],CL        ; 00602f2d
    JMP 0x00602f3a                      ; 00602f30
        ;   XREF to: 00602f3a (UNCONDITIONAL_JUMP)  ; LAB_00602f3a
    CMP BL,0x30                         ; 00602f32
        ;   Label: LAB_00602f32
    JNZ 0x00602f48                      ; 00602f35
        ;   XREF to: 00602f48 (CONDITIONAL_JUMP)  ; LAB_00602f48
    MOV byte ptr [EAX + 0x16],BL        ; 00602f37
    INC EDX                             ; 00602f3a
        ;   Label: LAB_00602f3a
    MOV BL,byte ptr [EDX]               ; 00602f3b
    CMP BL,0x2d                         ; 00602f3d
    JNZ 0x00602ef8                      ; 00602f40
        ;   XREF to: 00602ef8 (CONDITIONAL_JUMP)  ; LAB_00602ef8
    OR byte ptr [EAX + 0x1e],0x8        ; 00602f42
    JMP 0x00602f3a                      ; 00602f46
        ;   XREF to: 00602f3a (UNCONDITIONAL_JUMP)  ; LAB_00602f3a
    MOV EAX,EDX                         ; 00602f48
        ;   Label: LAB_00602f48
    POP EBX                             ; 00602f4a
    RET                                 ; 00602f4b

