; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a3570(int param_1)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004a50b0 at 004a50bf
;   core_fldnotes.cpp_NotesSection_dtor_FUN_004a3550 at 004a3556
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a32c0
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3570
        ;   Label: core_fldnotes.cpp_FUN_004a3570
    PUSH ESI                            ; 004a3571
    PUSH EDI                            ; 004a3572
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a3573
    MOV EDX,dword ptr [EDI + 0x150]     ; 004a3577
    XOR EBX,EBX                         ; 004a357d
    TEST EDX,EDX                        ; 004a357f
    JLE 0x004a359d                      ; 004a3581
        ;   XREF to: 004a359d (CONDITIONAL_JUMP)  ; LAB_004a359d
    MOV ESI,EDI                         ; 004a3583
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a3585
        ;   Label: LAB_004a3585
    TEST EAX,EAX                        ; 004a358b
    JNZ 0x004a35bf                      ; 004a358d
        ;   XREF to: 004a35bf (CONDITIONAL_JUMP)  ; LAB_004a35bf
    INC EBX                             ; 004a358f
        ;   Label: LAB_004a358f
    MOV ECX,dword ptr [EDI + 0x150]     ; 004a3590
    ADD ESI,0x4                         ; 004a3596
    CMP EBX,ECX                         ; 004a3599
    JL 0x004a3585                       ; 004a359b
        ;   XREF to: 004a3585 (CONDITIONAL_JUMP)  ; LAB_004a3585
    MOV dword ptr [EDI + 0x140],0x0     ; 004a359d
        ;   Label: LAB_004a359d
    MOV dword ptr [EDI + 0x144],0x0     ; 004a35a7
    MOV dword ptr [EDI + 0x150],0x0     ; 004a35b1
    POP EDI                             ; 004a35bb
    POP ESI                             ; 004a35bc
    POP EBX                             ; 004a35bd
    RET                                 ; 004a35be
    PUSH 0x0                            ; 004a35bf
        ;   Label: LAB_004a35bf
    PUSH EAX                            ; 004a35c1
    CALL core_fldnotes.cpp_FUN_004a32c0 ; 004a35c2
        ;   XREF to: 004a32c0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a32c0()
    ADD ESP,0x8                         ; 004a35c7
    PUSH EAX                            ; 004a35ca
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a35cb
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a35d0
    JMP 0x004a358f                      ; 004a35d3
        ;   XREF to: 004a358f (UNCONDITIONAL_JUMP)  ; LAB_004a358f

