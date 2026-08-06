; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_FUN_005125a0 at 00512806
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0041dc70
        ;   Label: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041dc70
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041dc73
    FLD float ptr [EDX + 0xc]           ; 0041dc77
    FCOMP float ptr [EDX + 0x10]        ; 0041dc7a
    FNSTSW AX                           ; 0041dc7d
    SAHF                                ; 0041dc7f
    JBE 0x0041dc8d                      ; 0041dc80
        ;   XREF to: 0041dc8d (CONDITIONAL_JUMP)  ; LAB_0041dc8d
    FLD float ptr [EDX + 0xc]           ; 0041dc82
    FCOMP float ptr [EDX + 0x14]        ; 0041dc85
    FNSTSW AX                           ; 0041dc88
    SAHF                                ; 0041dc8a
    JA 0x0041dca5                       ; 0041dc8b
        ;   XREF to: 0041dca5 (CONDITIONAL_JUMP)  ; LAB_0041dca5
    FLD float ptr [EDX + 0x10]          ; 0041dc8d
        ;   Label: LAB_0041dc8d
    FCOMP float ptr [EDX + 0x14]        ; 0041dc90
    FNSTSW AX                           ; 0041dc93
    SAHF                                ; 0041dc95
    JBE 0x0041dcaa                      ; 0041dc96
        ;   XREF to: 0041dcaa (CONDITIONAL_JUMP)  ; LAB_0041dcaa
    MOV EDX,dword ptr [EDX + 0x10]      ; 0041dc98
    MOV dword ptr [ESP],EDX             ; 0041dc9b
        ;   Label: LAB_0041dc9b
    MOV EAX,dword ptr [ESP]             ; 0041dc9e
    ADD ESP,0x4                         ; 0041dca1
    RET                                 ; 0041dca4
    MOV EDX,dword ptr [EDX + 0xc]       ; 0041dca5
        ;   Label: LAB_0041dca5
    JMP 0x0041dc9b                      ; 0041dca8
        ;   XREF to: 0041dc9b (UNCONDITIONAL_JUMP)  ; LAB_0041dc9b
    MOV EDX,dword ptr [EDX + 0x14]      ; 0041dcaa
        ;   Label: LAB_0041dcaa
    MOV dword ptr [ESP],EDX             ; 0041dcad
    MOV EAX,dword ptr [ESP]             ; 0041dcb0
    ADD ESP,0x4                         ; 0041dcb3
    RET                                 ; 0041dcb6

