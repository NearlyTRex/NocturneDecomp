; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00429e90(int param_1,undefined4 param_2)
;
;
; XREF[41]:
;   FUN_0040ef00 at 0040efc5
;   FUN_0040f950 at 0040fb4a
;   FUN_00411a10 at 00411c61
;   FUN_00412f40 at 004131b2
;   FUN_00414a80 at 00414af8
;   FUN_00414e50 at 00415050
;   FUN_004186c0 at 00418cea
;   FUN_0041dbe0 at 0041e724
;   FUN_00435830 at 00435b56
;   FUN_00436e80 at 0043751e
;   ... and 31 more
;
; Called Functions:
;   FUN_00428e30
;   FUN_004291f0
;   FUN_00429390
;   FUN_00429b40
;   FUN_00546ae0
;   FUN_005b1780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429e90
        ;   Label: FUN_00429e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00429e91
    PUSH EBX                            ; 00429e95
    CALL FUN_004291f0                   ; 00429e96
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004291f0()
    ADD ESP,0x4                         ; 00429e9b
    PUSH EBX                            ; 00429e9e
    CALL FUN_00429b40                   ; 00429e9f
        ;   XREF to: 00429b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00429b40()
    ADD ESP,0x4                         ; 00429ea4
    LEA EAX,[EBX + 0x2b4]               ; 00429ea7
    PUSH EAX                            ; 00429ead
    CALL FUN_00546ae0                   ; 00429eae
        ;   XREF to: 00546ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00546ae0()
    ADD ESP,0x4                         ; 00429eb3
    PUSH EBX                            ; 00429eb6
    CALL FUN_00429390                   ; 00429eb7
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 00429ebc
    PUSH dword ptr [ESP + 0xc]          ; 00429ebf
    PUSH EBX                            ; 00429ec3
    CALL FUN_00428e30                   ; 00429ec4
        ;   XREF to: 00428e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00428e30()
    MOV EDX,dword ptr [EBX + 0x2828]    ; 00429ec9
    ADD ESP,0x8                         ; 00429ecf
    TEST EDX,EDX                        ; 00429ed2
    JNZ 0x00429eed                      ; 00429ed4
        ;   XREF to: 00429eed (CONDITIONAL_JUMP)  ; LAB_00429eed
    PUSH EBX                            ; 00429ed6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00429ed7
    CALL dword ptr [EAX + 0x114]        ; 00429edd
    ADD ESP,0x4                         ; 00429ee3
    CMP EAX,0x1                         ; 00429ee6
    JZ 0x00429eed                       ; 00429ee9
        ;   XREF to: 00429eed (CONDITIONAL_JUMP)  ; LAB_00429eed
    POP EBX                             ; 00429eeb
    RET                                 ; 00429eec
    LEA EAX,[EBX + 0x2b4]               ; 00429eed
        ;   Label: LAB_00429eed
    PUSH EAX                            ; 00429ef3
    PUSH dword ptr [EBX + 0x2574]       ; 00429ef4
    LEA EAX,[EBX + 0x30]                ; 00429efa
    PUSH dword ptr [ESP + 0x14]         ; 00429efd
    PUSH EAX                            ; 00429f01
    LEA EAX,[EBX + 0x20]                ; 00429f02
    PUSH EAX                            ; 00429f05
    ADD EBX,0x2d0c                      ; 00429f06
    PUSH EBX                            ; 00429f0c
    CALL FUN_005b1780                   ; 00429f0d
        ;   XREF to: 005b1780 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1780()
    ADD ESP,0x18                        ; 00429f12
    POP EBX                             ; 00429f15
    RET                                 ; 00429f16

