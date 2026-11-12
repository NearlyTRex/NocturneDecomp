; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_set.cpp_FUN_0054e69e at 0054eb19
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00451cf0
        ;   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00451cf0
    PUSH EDI                            ; 00451cf1
    PUSH EBP                            ; 00451cf2
    SUB ESP,0x10                        ; 00451cf3
    MOV EBX,dword ptr [ESP + 0x20]      ; 00451cf6
    MOV EBP,ESI                         ; 00451cfa
    MOV EDX,0x270f                      ; 00451cfc
    XOR ECX,ECX                         ; 00451d01
    MOV EAX,dword ptr [EBX + 0x154]     ; 00451d03
    MOV dword ptr [ESP + 0x4],ECX       ; 00451d09
    MOV dword ptr [ESP + 0x8],EDX       ; 00451d0d
    MOV dword ptr [ESP + 0xc],ECX       ; 00451d11
    MOV dword ptr [ESP],EDX             ; 00451d15
    TEST EAX,EAX                        ; 00451d18
    JLE 0x00451d72                      ; 00451d1a
        ;   XREF to: 00451d72 (CONDITIONAL_JUMP)  ; LAB_00451d72
    MOV EDX,dword ptr [ESP + 0x24]      ; 00451d1c
    MOV EDI,dword ptr [EDX + 0x1888]    ; 00451d20
        ;   Label: LAB_00451d20
    CMP EDI,dword ptr [EDX + 0x14c8]    ; 00451d26
    JC 0x00451d64                       ; 00451d2c
        ;   XREF to: 00451d64 (CONDITIONAL_JUMP)  ; LAB_00451d64
    CMP ECX,dword ptr [ESP + 0x8]       ; 00451d2e
    JGE 0x00451d38                      ; 00451d32
        ;   XREF to: 00451d38 (CONDITIONAL_JUMP)  ; LAB_00451d38
    MOV dword ptr [ESP + 0x8],ECX       ; 00451d34
    CMP ECX,dword ptr [ESP + 0xc]       ; 00451d38
        ;   Label: LAB_00451d38
    JLE 0x00451d42                      ; 00451d3c
        ;   XREF to: 00451d42 (CONDITIONAL_JUMP)  ; LAB_00451d42
    MOV dword ptr [ESP + 0xc],ECX       ; 00451d3e
    MOV EDI,dword ptr [ESP]             ; 00451d42
        ;   Label: LAB_00451d42
    MOV EAX,dword ptr [EDX + 0x14c8]    ; 00451d45
    CMP EAX,EDI                         ; 00451d4b
    JNC 0x00451d52                      ; 00451d4d
        ;   XREF to: 00451d52 (CONDITIONAL_JUMP)  ; LAB_00451d52
    MOV dword ptr [ESP],EAX             ; 00451d4f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00451d52
        ;   Label: LAB_00451d52
    MOV EAX,dword ptr [EDX + 0x1888]    ; 00451d56
    CMP EAX,ESI                         ; 00451d5c
    JBE 0x00451d64                      ; 00451d5e
        ;   XREF to: 00451d64 (CONDITIONAL_JUMP)  ; LAB_00451d64
    MOV dword ptr [ESP + 0x4],EAX       ; 00451d60
    INC ECX                             ; 00451d64
        ;   Label: LAB_00451d64
    MOV ESI,dword ptr [EBX + 0x154]     ; 00451d65
    ADD EDX,0x4                         ; 00451d6b
    CMP ECX,ESI                         ; 00451d6e
    JL 0x00451d20                       ; 00451d70
        ;   XREF to: 00451d20 (CONDITIONAL_JUMP)  ; LAB_00451d20
    MOV ESI,ESP                         ; 00451d72
        ;   Label: LAB_00451d72
    MOV EDI,EBP                         ; 00451d74
    MOVSD ES:EDI,ESI                    ; 00451d76
    MOVSD ES:EDI,ESI                    ; 00451d77
    MOVSD ES:EDI,ESI                    ; 00451d78
    MOVSD ES:EDI,ESI                    ; 00451d79
    MOV EAX,EBP                         ; 00451d7a
    ADD ESP,0x10                        ; 00451d7c
    POP EBP                             ; 00451d7f
    POP EDI                             ; 00451d80
    POP EBX                             ; 00451d81
    RET                                 ; 00451d82

