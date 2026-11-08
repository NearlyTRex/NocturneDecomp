; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ba9b4(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005ba900 at 005ba905
;
; Referenced Globals:
;   undefined4 DAT_0061eea0
;   void* PTR_FUN_0061f2c0 = 005bce04
;   void* PTR_FUN_0061f2c8 = 005bce04
;
; Called Functions:
;   FUN_005ba910
;   FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba9b4
        ;   Label: FUN_005ba9b4
    CALL dword ptr [0x0061f2c0]         ; 005ba9b5 | PTR_FUN_0061f2c0
    MOV EDX,dword ptr [0x0061eea0]      ; 005ba9bb | DAT_0061eea0
    PUSH EDX                            ; 005ba9c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ba9c2
    PUSH EBX                            ; 005ba9c6
    CALL FUN_005ba910                   ; 005ba9c7
        ;   XREF to: 005ba910 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba910()
    ADD ESP,0x8                         ; 005ba9cc
    MOV EBX,EAX                         ; 005ba9cf
    CALL dword ptr [0x0061f2c8]         ; 005ba9d1 | PTR_FUN_0061f2c8
    MOV EAX,EBX                         ; 005ba9d7
    POP EBX                             ; 005ba9d9
    RET                                 ; 005ba9da

