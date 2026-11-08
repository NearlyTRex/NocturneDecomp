; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059cc40(undefined4 *param_1)
;
;
; XREF[5]:
;   FUN_0052c5d0 at 0052c5e9
;   FUN_0052c970 at 0052c992
;   FUN_0059c8f0 at 0059c8f6
;   FUN_0059c910 at 0059c916
;   FUN_0059c940 at 0059c946
;
; Called Functions:
;   FUN_0059c970
;   Ordinal_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059cc40
        ;   Label: FUN_0059cc40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059cc41
    PUSH EBX                            ; 0059cc45
    CALL FUN_0059c970                   ; 0059cc46
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c970()
    ADD ESP,0x4                         ; 0059cc4b
    TEST EAX,EAX                        ; 0059cc4e
    JNZ 0x0059cc59                      ; 0059cc50
        ;   XREF to: 0059cc59 (CONDITIONAL_JUMP)  ; LAB_0059cc59
    MOV EAX,0x1                         ; 0059cc52
    POP EBX                             ; 0059cc57
    RET                                 ; 0059cc58
    MOV EDX,dword ptr [EBX]             ; 0059cc59
        ;   Label: LAB_0059cc59
    PUSH EDX                            ; 0059cc5b
    CALL Ordinal_3                      ; 0059cc5c
        ;   XREF to: 005cf802 (UNCONDITIONAL_CALL)  ; undefined Ordinal_3()
    TEST EAX,EAX                        ; 0059cc61
    SETZ AL                             ; 0059cc63
    AND EAX,0xff                        ; 0059cc66
    MOV dword ptr [EBX],0xffffffff      ; 0059cc6b
    POP EBX                             ; 0059cc71
    RET                                 ; 0059cc72

