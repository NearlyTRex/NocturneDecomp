; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce950(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_004cd3f0 at 004cd432
;
; Called Functions:
;   FUN_004cd450
;   FUN_004ce900
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004ce950
        ;   Label: FUN_004ce950
    JNZ 0x004ce958                      ; 004ce955
        ;   XREF to: 004ce958 (CONDITIONAL_JUMP)  ; LAB_004ce958
    RET                                 ; 004ce957
    PUSH ESI                            ; 004ce958
        ;   Label: LAB_004ce958
    PUSH EBX                            ; 004ce959
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ce95a
    PUSH ECX                            ; 004ce95e
    CALL FUN_004ce900                   ; 004ce95f
        ;   XREF to: 004ce900 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce900()
    ADD ESP,0x4                         ; 004ce964
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ce967
    PUSH EBX                            ; 004ce96b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ce96c
    PUSH ESI                            ; 004ce970
    PUSH EAX                            ; 004ce971
    CALL FUN_004cd450                   ; 004ce972
        ;   XREF to: 004cd450 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd450()
    ADD ESP,0xc                         ; 004ce977
    POP EBX                             ; 004ce97a
    POP ESI                             ; 004ce97b
    RET                                 ; 004ce97c

