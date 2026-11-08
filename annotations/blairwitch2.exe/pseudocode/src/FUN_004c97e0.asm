; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c97e0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004c7da0 at 004c7dc4
;
; Called Functions:
;   FUN_004c7e00
;   FUN_004c9790
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004c97e0
        ;   Label: FUN_004c97e0
    JNZ 0x004c97e8                      ; 004c97e5
        ;   XREF to: 004c97e8 (CONDITIONAL_JUMP)  ; LAB_004c97e8
    RET                                 ; 004c97e7
    PUSH ESI                            ; 004c97e8
        ;   Label: LAB_004c97e8
    PUSH EBX                            ; 004c97e9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c97ea
    PUSH ECX                            ; 004c97ee
    CALL FUN_004c9790                   ; 004c97ef
        ;   XREF to: 004c9790 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9790()
    ADD ESP,0x4                         ; 004c97f4
    MOV EBX,dword ptr [ESP + 0x14]      ; 004c97f7
    PUSH EBX                            ; 004c97fb
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c97fc
    PUSH ESI                            ; 004c9800
    PUSH EAX                            ; 004c9801
    CALL FUN_004c7e00                   ; 004c9802
        ;   XREF to: 004c7e00 (UNCONDITIONAL_CALL)  ; undefined FUN_004c7e00()
    ADD ESP,0xc                         ; 004c9807
    POP EBX                             ; 004c980a
    POP ESI                             ; 004c980b
    RET                                 ; 004c980c

