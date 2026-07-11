; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055d5b0(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
;
; XREF[2]:
;   FUN_004f5ff0 at 004f60ee
;   FUN_005396d0 at 0053972f
;
; Called Functions:
;   FUN_0055b180
;   FUN_0055cd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d5b0
        ;   Label: FUN_0055d5b0
    SUB ESP,0x30                        ; 0055d5b1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0055d5b4
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0055d5b8
    PUSH EDX                            ; 0055d5bc
    LEA EAX,[ESP + 0x4]                 ; 0055d5bd
    PUSH EAX                            ; 0055d5c1
    CALL FUN_0055cd70                   ; 0055d5c2
        ;   XREF to: 0055cd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0055cd70()
    ADD ESP,0x8                         ; 0055d5c7
    PUSH EBX                            ; 0055d5ca
    LEA EAX,[ESP + 0x4]                 ; 0055d5cb
    PUSH EAX                            ; 0055d5cf
    CALL FUN_0055b180                   ; 0055d5d0
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 0055d5d5
    MOV EAX,EBX                         ; 0055d5d8
    ADD ESP,0x30                        ; 0055d5da
    POP EBX                             ; 0055d5dd
    RET                                 ; 0055d5de

