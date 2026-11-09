; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_box_cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_setdir.cpp_FUN_0053f940 at 0053fc4d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0041e960
        ;   Label: core_box.cpp_CBoundingBox3D_getMaximumBound_FUN_0041e960
    MOV EDX,dword ptr [ESP + 0x8]       ; 0041e963
    FLD float ptr [EDX + 0xc]           ; 0041e967
    FCOMP float ptr [EDX + 0x10]        ; 0041e96a
    FNSTSW AX                           ; 0041e96d
    SAHF                                ; 0041e96f
    JBE 0x0041e97d                      ; 0041e970
        ;   XREF to: 0041e97d (CONDITIONAL_JUMP)  ; LAB_0041e97d
    FLD float ptr [EDX + 0xc]           ; 0041e972
    FCOMP float ptr [EDX + 0x14]        ; 0041e975
    FNSTSW AX                           ; 0041e978
    SAHF                                ; 0041e97a
    JA 0x0041e995                       ; 0041e97b
        ;   XREF to: 0041e995 (CONDITIONAL_JUMP)  ; LAB_0041e995
    FLD float ptr [EDX + 0x10]          ; 0041e97d
        ;   Label: LAB_0041e97d
    FCOMP float ptr [EDX + 0x14]        ; 0041e980
    FNSTSW AX                           ; 0041e983
    SAHF                                ; 0041e985
    JBE 0x0041e99a                      ; 0041e986
        ;   XREF to: 0041e99a (CONDITIONAL_JUMP)  ; LAB_0041e99a
    MOV EDX,dword ptr [EDX + 0x10]      ; 0041e988
    MOV dword ptr [ESP],EDX             ; 0041e98b
        ;   Label: LAB_0041e98b
    MOV EAX,dword ptr [ESP]             ; 0041e98e
    ADD ESP,0x4                         ; 0041e991
    RET                                 ; 0041e994
    MOV EDX,dword ptr [EDX + 0xc]       ; 0041e995
        ;   Label: LAB_0041e995
    JMP 0x0041e98b                      ; 0041e998
        ;   XREF to: 0041e98b (UNCONDITIONAL_JUMP)  ; LAB_0041e98b
    MOV EDX,dword ptr [EDX + 0x14]      ; 0041e99a
        ;   Label: LAB_0041e99a
    MOV dword ptr [ESP],EDX             ; 0041e99d
    MOV EAX,dword ptr [ESP]             ; 0041e9a0
    ADD ESP,0x4                         ; 0041e9a3
    RET                                 ; 0041e9a6

