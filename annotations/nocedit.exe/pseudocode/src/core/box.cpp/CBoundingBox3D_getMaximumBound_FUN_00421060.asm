; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060(CBoundingBox3D * this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_setdir.cpp_CDemonSet_evaluateVirtualDirector_FUN_005751d0 at 00575421
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00421060
        ;   Label: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_00421060
    MOV EDX,dword ptr [ESP + 0x8]       ; 00421063
    FLD float ptr [EDX + 0xc]           ; 00421067
    FCOMP float ptr [EDX + 0x10]        ; 0042106a
    FNSTSW AX                           ; 0042106d
    SAHF                                ; 0042106f
    JBE 0x0042107d                      ; 00421070
        ;   XREF to: 0042107d (CONDITIONAL_JUMP)  ; LAB_0042107d
    FLD float ptr [EDX + 0xc]           ; 00421072
    FCOMP float ptr [EDX + 0x14]        ; 00421075
    FNSTSW AX                           ; 00421078
    SAHF                                ; 0042107a
    JA 0x00421095                       ; 0042107b
        ;   XREF to: 00421095 (CONDITIONAL_JUMP)  ; LAB_00421095
    FLD float ptr [EDX + 0x10]          ; 0042107d
        ;   Label: LAB_0042107d
    FCOMP float ptr [EDX + 0x14]        ; 00421080
    FNSTSW AX                           ; 00421083
    SAHF                                ; 00421085
    JBE 0x0042109a                      ; 00421086
        ;   XREF to: 0042109a (CONDITIONAL_JUMP)  ; LAB_0042109a
    MOV EDX,dword ptr [EDX + 0x10]      ; 00421088
    MOV dword ptr [ESP],EDX             ; 0042108b
        ;   Label: LAB_0042108b
    MOV EAX,dword ptr [ESP]             ; 0042108e
    ADD ESP,0x4                         ; 00421091
    RET                                 ; 00421094
    MOV EDX,dword ptr [EDX + 0xc]       ; 00421095
        ;   Label: LAB_00421095
    JMP 0x0042108b                      ; 00421098
        ;   XREF to: 0042108b (UNCONDITIONAL_JUMP)  ; LAB_0042108b
    MOV EDX,dword ptr [EDX + 0x14]      ; 0042109a
        ;   Label: LAB_0042109a
    MOV dword ptr [ESP],EDX             ; 0042109d
    MOV EAX,dword ptr [ESP]             ; 004210a0
    ADD ESP,0x4                         ; 004210a3
    RET                                 ; 004210a6

