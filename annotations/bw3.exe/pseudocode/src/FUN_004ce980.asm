; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce980(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004cd3f0 at 004cd41a
;
; Called Functions:
;   FUN_004cd510
;   FUN_004ce900
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004ce980
        ;   Label: FUN_004ce980
    JNZ 0x004ce988                      ; 004ce985
        ;   XREF to: 004ce988 (CONDITIONAL_JUMP)  ; LAB_004ce988
    RET                                 ; 004ce987
    PUSH EDI                            ; 004ce988
        ;   Label: LAB_004ce988
    PUSH ESI                            ; 004ce989
    PUSH EBX                            ; 004ce98a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ce98b
    PUSH ECX                            ; 004ce98f
    CALL FUN_004ce900                   ; 004ce990
        ;   XREF to: 004ce900 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce900()
    ADD ESP,0x4                         ; 004ce995
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004ce998
    PUSH EBX                            ; 004ce99c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004ce99d
    PUSH ESI                            ; 004ce9a1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004ce9a2
    PUSH EDI                            ; 004ce9a6
    PUSH EAX                            ; 004ce9a7
    CALL FUN_004cd510                   ; 004ce9a8
        ;   XREF to: 004cd510 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd510()
    ADD ESP,0x10                        ; 004ce9ad
    POP EBX                             ; 004ce9b0
    POP ESI                             ; 004ce9b1
    POP EDI                             ; 004ce9b2
    RET                                 ; 004ce9b3

