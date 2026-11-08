; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c1fd7(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_005c2019 at 005c2071
;
; Called Functions:
;   FUN_005c8e45
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1fd7
        ;   Label: FUN_005c1fd7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c1fd8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c1fdc
    PUSH EDX                            ; 005c1fe0
    PUSH EAX                            ; 005c1fe1
    MOV EBX,dword ptr [EAX + 0x10]      ; 005c1fe2
    MOV dword ptr [EAX + 0x10],0x0      ; 005c1fe5
    CALL FUN_005c8e45                   ; 005c1fec
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8e45()
    ADD ESP,0x8                         ; 005c1ff1
    MOV EAX,EBX                         ; 005c1ff4
    POP EBX                             ; 005c1ff6
    RET                                 ; 005c1ff7

