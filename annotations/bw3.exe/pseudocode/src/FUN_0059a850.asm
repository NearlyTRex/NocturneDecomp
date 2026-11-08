; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059a850(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_heroCanSee_005d9ac0+1
;   undefined4 DAT_005fba60
;
; Called Functions:
;   FUN_00491aa0
;   FUN_005095f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059a850
        ;   Label: FUN_0059a850
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059a851
    CMP dword ptr [EBX + 0x27a8],0x0    ; 0059a855
    JNZ 0x0059a862                      ; 0059a85c
        ;   XREF to: 0059a862 (CONDITIONAL_JUMP)  ; LAB_0059a862
    XOR EAX,EAX                         ; 0059a85e
        ;   Label: LAB_0059a85e
    POP EBX                             ; 0059a860
        ;   Label: LAB_0059a860
    RET                                 ; 0059a861
    PUSH 0x5d9ac1                       ; 0059a862 | s_heroCanSee_005d9ac0+1
        ;   Label: LAB_0059a862
    MOV ECX,dword ptr [0x005fba60]      ; 0059a867 | DAT_005fba60
    PUSH ECX                            ; 0059a86d
    CALL FUN_00491aa0                   ; 0059a86e
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 0059a873
    TEST EAX,EAX                        ; 0059a876
    JZ 0x0059a860                       ; 0059a878
        ;   XREF to: 0059a860 (CONDITIONAL_JUMP)  ; LAB_0059a860
    CMP dword ptr [EBX + 0x34164],0x0   ; 0059a87a
    JNZ 0x0059a85e                      ; 0059a881
        ;   XREF to: 0059a85e (CONDITIONAL_JUMP)  ; LAB_0059a85e
    PUSH EBX                            ; 0059a883
    CALL FUN_005095f0                   ; 0059a884
        ;   XREF to: 005095f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005095f0()
    ADD ESP,0x4                         ; 0059a889
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0059a88c
    POP EBX                             ; 0059a892
    RET                                 ; 0059a893

