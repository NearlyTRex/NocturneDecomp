; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CRect * __stack2_esi core_dcamera_cpp_CDemonCamera_computeLightExtentBounds_FUN_00440630(CDemonCamera *this_ptr,CDemonLight *light,CRect *out_bounds)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light
;
; XREF[1]:
;   core_set.cpp_FUN_0052d3c0 at 0052d839
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440630
        ;   Label: core_dcamera.cpp_CDemonCamera_computeLightExtentBounds_FUN_00440630
    PUSH EDI                            ; 00440631
    PUSH EBP                            ; 00440632
    SUB ESP,0x10                        ; 00440633
    MOV EBX,dword ptr [ESP + 0x20]      ; 00440636
    MOV EBP,ESI                         ; 0044063a
    MOV EDX,0x270f                      ; 0044063c
    XOR ECX,ECX                         ; 00440641
    MOV EAX,dword ptr [EBX + 0x154]     ; 00440643
    MOV dword ptr [ESP + 0x4],ECX       ; 00440649
    MOV dword ptr [ESP + 0x8],EDX       ; 0044064d
    MOV dword ptr [ESP + 0xc],ECX       ; 00440651
    MOV dword ptr [ESP],EDX             ; 00440655
    TEST EAX,EAX                        ; 00440658
    JLE 0x004406b2                      ; 0044065a
        ;   XREF to: 004406b2 (CONDITIONAL_JUMP)  ; LAB_004406b2
    MOV EDX,dword ptr [ESP + 0x24]      ; 0044065c
    MOV EDI,dword ptr [EDX + 0x1888]    ; 00440660
        ;   Label: LAB_00440660
    CMP EDI,dword ptr [EDX + 0x14c8]    ; 00440666
    JC 0x004406a4                       ; 0044066c
        ;   XREF to: 004406a4 (CONDITIONAL_JUMP)  ; LAB_004406a4
    CMP ECX,dword ptr [ESP + 0x8]       ; 0044066e
    JGE 0x00440678                      ; 00440672
        ;   XREF to: 00440678 (CONDITIONAL_JUMP)  ; LAB_00440678
    MOV dword ptr [ESP + 0x8],ECX       ; 00440674
    CMP ECX,dword ptr [ESP + 0xc]       ; 00440678
        ;   Label: LAB_00440678
    JLE 0x00440682                      ; 0044067c
        ;   XREF to: 00440682 (CONDITIONAL_JUMP)  ; LAB_00440682
    MOV dword ptr [ESP + 0xc],ECX       ; 0044067e
    MOV EDI,dword ptr [ESP]             ; 00440682
        ;   Label: LAB_00440682
    MOV EAX,dword ptr [EDX + 0x14c8]    ; 00440685
    CMP EAX,EDI                         ; 0044068b
    JNC 0x00440692                      ; 0044068d
        ;   XREF to: 00440692 (CONDITIONAL_JUMP)  ; LAB_00440692
    MOV dword ptr [ESP],EAX             ; 0044068f
    MOV ESI,dword ptr [ESP + 0x4]       ; 00440692
        ;   Label: LAB_00440692
    MOV EAX,dword ptr [EDX + 0x1888]    ; 00440696
    CMP EAX,ESI                         ; 0044069c
    JBE 0x004406a4                      ; 0044069e
        ;   XREF to: 004406a4 (CONDITIONAL_JUMP)  ; LAB_004406a4
    MOV dword ptr [ESP + 0x4],EAX       ; 004406a0
    INC ECX                             ; 004406a4
        ;   Label: LAB_004406a4
    MOV ESI,dword ptr [EBX + 0x154]     ; 004406a5
    ADD EDX,0x4                         ; 004406ab
    CMP ECX,ESI                         ; 004406ae
    JL 0x00440660                       ; 004406b0
        ;   XREF to: 00440660 (CONDITIONAL_JUMP)  ; LAB_00440660
    MOV ESI,ESP                         ; 004406b2
        ;   Label: LAB_004406b2
    MOV EDI,EBP                         ; 004406b4
    MOVSD ES:EDI,ESI                    ; 004406b6
    MOVSD ES:EDI,ESI                    ; 004406b7
    MOVSD ES:EDI,ESI                    ; 004406b8
    MOVSD ES:EDI,ESI                    ; 004406b9
    MOV EAX,EBP                         ; 004406ba
    ADD ESP,0x10                        ; 004406bc
    POP EBP                             ; 004406bf
    POP EDI                             ; 004406c0
    POP EBX                             ; 004406c1
    RET                                 ; 004406c2

