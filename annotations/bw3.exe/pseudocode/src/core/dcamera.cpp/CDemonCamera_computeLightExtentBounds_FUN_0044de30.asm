; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_0044de30(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_set.cpp_FUN_00533e5e at 005342d9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044de30
        ;   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_0044de30
    PUSH EDI                            ; 0044de31
    PUSH EBP                            ; 0044de32
    SUB ESP,0x10                        ; 0044de33
    MOV EBX,dword ptr [ESP + 0x20]      ; 0044de36
    MOV EBP,ESI                         ; 0044de3a
    MOV EDX,0x270f                      ; 0044de3c
    XOR ECX,ECX                         ; 0044de41
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044de43
    MOV dword ptr [ESP + 0x4],ECX       ; 0044de49
    MOV dword ptr [ESP + 0x8],EDX       ; 0044de4d
    MOV dword ptr [ESP + 0xc],ECX       ; 0044de51
    MOV dword ptr [ESP],EDX             ; 0044de55
    TEST EAX,EAX                        ; 0044de58
    JLE 0x0044deb2                      ; 0044de5a
        ;   XREF to: 0044deb2 (CONDITIONAL_JUMP)  ; LAB_0044deb2
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044de5c
    MOV EDI,dword ptr [EDX + 0x1888]    ; 0044de60
        ;   Label: LAB_0044de60
    CMP EDI,dword ptr [EDX + 0x14c8]    ; 0044de66
    JC 0x0044dea4                       ; 0044de6c
        ;   XREF to: 0044dea4 (CONDITIONAL_JUMP)  ; LAB_0044dea4
    CMP ECX,dword ptr [ESP + 0x8]       ; 0044de6e
    JGE 0x0044de78                      ; 0044de72
        ;   XREF to: 0044de78 (CONDITIONAL_JUMP)  ; LAB_0044de78
    MOV dword ptr [ESP + 0x8],ECX       ; 0044de74
    CMP ECX,dword ptr [ESP + 0xc]       ; 0044de78
        ;   Label: LAB_0044de78
    JLE 0x0044de82                      ; 0044de7c
        ;   XREF to: 0044de82 (CONDITIONAL_JUMP)  ; LAB_0044de82
    MOV dword ptr [ESP + 0xc],ECX       ; 0044de7e
    MOV EDI,dword ptr [ESP]             ; 0044de82
        ;   Label: LAB_0044de82
    MOV EAX,dword ptr [EDX + 0x14c8]    ; 0044de85
    CMP EAX,EDI                         ; 0044de8b
    JNC 0x0044de92                      ; 0044de8d
        ;   XREF to: 0044de92 (CONDITIONAL_JUMP)  ; LAB_0044de92
    MOV dword ptr [ESP],EAX             ; 0044de8f
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044de92
        ;   Label: LAB_0044de92
    MOV EAX,dword ptr [EDX + 0x1888]    ; 0044de96
    CMP EAX,ESI                         ; 0044de9c
    JBE 0x0044dea4                      ; 0044de9e
        ;   XREF to: 0044dea4 (CONDITIONAL_JUMP)  ; LAB_0044dea4
    MOV dword ptr [ESP + 0x4],EAX       ; 0044dea0
    INC ECX                             ; 0044dea4
        ;   Label: LAB_0044dea4
    MOV ESI,dword ptr [EBX + 0x154]     ; 0044dea5
    ADD EDX,0x4                         ; 0044deab
    CMP ECX,ESI                         ; 0044deae
    JL 0x0044de60                       ; 0044deb0
        ;   XREF to: 0044de60 (CONDITIONAL_JUMP)  ; LAB_0044de60
    MOV ESI,ESP                         ; 0044deb2
        ;   Label: LAB_0044deb2
    MOV EDI,EBP                         ; 0044deb4
    MOVSD ES:EDI,ESI                    ; 0044deb6
    MOVSD ES:EDI,ESI                    ; 0044deb7
    MOVSD ES:EDI,ESI                    ; 0044deb8
    MOVSD ES:EDI,ESI                    ; 0044deb9
    MOV EAX,EBP                         ; 0044deba
    ADD ESP,0x10                        ; 0044debc
    POP EBP                             ; 0044debf
    POP EDI                             ; 0044dec0
    POP EBX                             ; 0044dec1
    RET                                 ; 0044dec2

