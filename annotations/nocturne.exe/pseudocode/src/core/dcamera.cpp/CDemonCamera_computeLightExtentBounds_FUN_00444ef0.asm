; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_00507f80 at 00508283
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444ef0
        ;   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00444ef0
    PUSH EDI                            ; 00444ef1
    PUSH EBP                            ; 00444ef2
    SUB ESP,0x10                        ; 00444ef3
    MOV EBX,dword ptr [ESP + 0x20]      ; 00444ef6
    MOV EBP,ESI                         ; 00444efa
    MOV EDX,0x270f                      ; 00444efc
    XOR ECX,ECX                         ; 00444f01
    MOV EAX,dword ptr [EBX + 0x154]     ; 00444f03
    MOV dword ptr [ESP + 0x4],ECX       ; 00444f09
    MOV dword ptr [ESP + 0x8],EDX       ; 00444f0d
    MOV dword ptr [ESP + 0xc],ECX       ; 00444f11
    MOV dword ptr [ESP],EDX             ; 00444f15
    TEST EAX,EAX                        ; 00444f18
    JLE 0x00444f72                      ; 00444f1a
        ;   XREF to: 00444f72 (CONDITIONAL_JUMP)  ; LAB_00444f72
    MOV EDX,dword ptr [ESP + 0x24]      ; 00444f1c
    MOV EDI,dword ptr [EDX + 0x1888]    ; 00444f20
        ;   Label: LAB_00444f20
    CMP EDI,dword ptr [EDX + 0x14c8]    ; 00444f26
    JC 0x00444f64                       ; 00444f2c
        ;   XREF to: 00444f64 (CONDITIONAL_JUMP)  ; LAB_00444f64
    CMP ECX,dword ptr [ESP + 0x8]       ; 00444f2e
    JGE 0x00444f38                      ; 00444f32
        ;   XREF to: 00444f38 (CONDITIONAL_JUMP)  ; LAB_00444f38
    MOV dword ptr [ESP + 0x8],ECX       ; 00444f34
    CMP ECX,dword ptr [ESP + 0xc]       ; 00444f38
        ;   Label: LAB_00444f38
    JLE 0x00444f42                      ; 00444f3c
        ;   XREF to: 00444f42 (CONDITIONAL_JUMP)  ; LAB_00444f42
    MOV dword ptr [ESP + 0xc],ECX       ; 00444f3e
    MOV EDI,dword ptr [ESP]             ; 00444f42
        ;   Label: LAB_00444f42
    MOV EAX,dword ptr [EDX + 0x14c8]    ; 00444f45
    CMP EAX,EDI                         ; 00444f4b
    JNC 0x00444f52                      ; 00444f4d
        ;   XREF to: 00444f52 (CONDITIONAL_JUMP)  ; LAB_00444f52
    MOV dword ptr [ESP],EAX             ; 00444f4f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00444f52
        ;   Label: LAB_00444f52
    MOV EAX,dword ptr [EDX + 0x1888]    ; 00444f56
    CMP EAX,ESI                         ; 00444f5c
    JBE 0x00444f64                      ; 00444f5e
        ;   XREF to: 00444f64 (CONDITIONAL_JUMP)  ; LAB_00444f64
    MOV dword ptr [ESP + 0x4],EAX       ; 00444f60
    INC ECX                             ; 00444f64
        ;   Label: LAB_00444f64
    MOV ESI,dword ptr [EBX + 0x154]     ; 00444f65
    ADD EDX,0x4                         ; 00444f6b
    CMP ECX,ESI                         ; 00444f6e
    JL 0x00444f20                       ; 00444f70
        ;   XREF to: 00444f20 (CONDITIONAL_JUMP)  ; LAB_00444f20
    MOV ESI,ESP                         ; 00444f72
        ;   Label: LAB_00444f72
    MOV EDI,EBP                         ; 00444f74
    MOVSD ES:EDI,ESI                    ; 00444f76
    MOVSD ES:EDI,ESI                    ; 00444f77
    MOVSD ES:EDI,ESI                    ; 00444f78
    MOVSD ES:EDI,ESI                    ; 00444f79
    MOV EAX,EBP                         ; 00444f7a
    ADD ESP,0x10                        ; 00444f7c
    POP EBP                             ; 00444f7f
    POP EDI                             ; 00444f80
    POP EBX                             ; 00444f81
    RET                                 ; 00444f82

