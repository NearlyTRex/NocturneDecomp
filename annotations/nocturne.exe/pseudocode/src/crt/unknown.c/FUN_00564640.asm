; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint crt_unknown_c_FUN_00564640(undefined4 *param_1)
;
;
; XREF[1]:
;   crt_stdio.c_fgetc_FUN_00564570 at 005645d5
;
; Called Functions:
;   crt_unknown.c_FUN_00564670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564640
        ;   Label: crt_unknown.c_FUN_00564640
    MOV EBX,dword ptr [ESP + 0x8]       ; 00564641
    PUSH EBX                            ; 00564645
    CALL crt_unknown.c_FUN_00564670     ; 00564646
        ;   XREF to: 00564670 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564670()
    ADD ESP,0x4                         ; 0056464b
    TEST EAX,EAX                        ; 0056464e
    JNZ 0x00564659                      ; 00564650
        ;   XREF to: 00564659 (CONDITIONAL_JUMP)  ; LAB_00564659
    MOV EAX,0xffffffff                  ; 00564652
    POP EBX                             ; 00564657
    RET                                 ; 00564658
    MOV EDX,dword ptr [EBX + 0x4]       ; 00564659
        ;   Label: LAB_00564659
    MOV ECX,dword ptr [EBX]             ; 0056465c
    DEC EDX                             ; 0056465e
    INC ECX                             ; 0056465f
    MOV dword ptr [EBX + 0x4],EDX       ; 00564660
    MOV dword ptr [EBX],ECX             ; 00564663
    MOV AL,byte ptr [ECX + -0x1]        ; 00564665
    AND EAX,0xff                        ; 00564668
    POP EBX                             ; 0056466d
    RET                                 ; 0056466e

