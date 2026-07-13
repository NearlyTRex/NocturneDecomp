; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005623f0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 s_CTentacle_0059899d+1
;
; Called Functions:
;   FUN_0040d7e0
;   FUN_004280a0
;
; *****************************************************************************

section .text

    PUSH 0x59899e                       ; 005623f0 | s_CTentacle_0059899d+1
        ;   Label: FUN_005623f0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005623f5
    PUSH EDX                            ; 005623f9
    CALL FUN_0040d7e0                   ; 005623fa
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 005623ff
    TEST EAX,EAX                        ; 00562402
    JZ 0x0056240c                       ; 00562404
        ;   XREF to: 0056240c (CONDITIONAL_JUMP)  ; LAB_0056240c
    MOV EAX,0x1                         ; 00562406
    RET                                 ; 0056240b
    PUSH EBX                            ; 0056240c
        ;   Label: LAB_0056240c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056240d
    PUSH ECX                            ; 00562411
    MOV EBX,dword ptr [ESP + 0xc]       ; 00562412
    PUSH EBX                            ; 00562416
    CALL FUN_004280a0                   ; 00562417
        ;   XREF to: 004280a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004280a0()
    ADD ESP,0x8                         ; 0056241c
    POP EBX                             ; 0056241f
    RET                                 ; 00562420

