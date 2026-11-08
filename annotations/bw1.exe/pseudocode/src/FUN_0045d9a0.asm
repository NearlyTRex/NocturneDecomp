; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045d9a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0045d770 at 0045d7a2
;
; Called Functions:
;   FUN_0045da10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d9a0
        ;   Label: FUN_0045d9a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d9a1
    PUSH EBX                            ; 0045d9a5
    CALL FUN_0045da10                   ; 0045d9a6
        ;   XREF to: 0045da10 (UNCONDITIONAL_CALL)  ; undefined FUN_0045da10()
    ADD ESP,0x4                         ; 0045d9ab
    MOV EAX,EBX                         ; 0045d9ae
    POP EBX                             ; 0045d9b0
    RET                                 ; 0045d9b1

