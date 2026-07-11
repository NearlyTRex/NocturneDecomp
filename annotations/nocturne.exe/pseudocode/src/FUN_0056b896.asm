; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b896(undefined4 *param_1,byte param_2)
;
;
; XREF[2]:
;   FUN_005652fe at 0056530c
;   FUN_0056536a at 00565378
;
; Referenced Globals:
;   undefined4 DAT_005a4a18
;   void* PTR_FUN_005a4a24 = 0056b810
;   void* PTR_LAB_005a4a2c = 0056b7f8
;
; Called Functions:
;   FUN_0056b503
;   FUN_0056ff2a
;   FUN_0057042d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b896
        ;   Label: FUN_0056b896
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b897
    TEST byte ptr [ESP + 0xc],0x1       ; 0056b89b
    JZ 0x0056b8e8                       ; 0056b8a0
        ;   XREF to: 0056b8e8 (CONDITIONAL_JUMP)  ; LAB_0056b8e8
    ADD EBX,0x4                         ; 0056b8a2
        ;   Label: LAB_0056b8a2
    PUSH EBX                            ; 0056b8a5
    CALL FUN_0057042d                   ; 0056b8a6
        ;   XREF to: 0057042d (UNCONDITIONAL_CALL)  ; undefined FUN_0057042d()
    LEA EBX,[EAX + -0x4]                ; 0056b8ab
    MOV EDX,dword ptr [EBX]             ; 0056b8ae
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b8b0
    LEA EAX,[EBX + EDX*0x1]             ; 0056b8b3
    MOV dword ptr [EAX + -0x4],EDX      ; 0056b8b6
    MOV EAX,dword ptr [EBX]             ; 0056b8b9
    MOV dword ptr [EBX + 0x40],0x5a4a24 ; 0056b8bb | PTR_FUN_005a4a24
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b8c2
    ADD ESP,0x4                         ; 0056b8c5
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a4a2c ; 0056b8c8 | PTR_LAB_005a4a2c
    LEA EAX,[EBX + 0x4]                 ; 0056b8d0
    PUSH EAX                            ; 0056b8d3
    MOV EAX,dword ptr [EBX]             ; 0056b8d4
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b8d6
    ADD EAX,EBX                         ; 0056b8d9
    PUSH EAX                            ; 0056b8db
    CALL FUN_0056ff2a                   ; 0056b8dc
        ;   XREF to: 0056ff2a (UNCONDITIONAL_CALL)  ; undefined FUN_0056ff2a()
    ADD ESP,0x8                         ; 0056b8e1
    MOV EAX,EBX                         ; 0056b8e4
    POP EBX                             ; 0056b8e6
    RET                                 ; 0056b8e7
    MOV dword ptr [EBX],0x5a4a18        ; 0056b8e8 | DAT_005a4a18
        ;   Label: LAB_0056b8e8
    ADD EBX,0x48                        ; 0056b8ee
    PUSH EBX                            ; 0056b8f1
    CALL FUN_0056b503                   ; 0056b8f2
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 0056b8f7
    LEA EBX,[EAX + -0x48]               ; 0056b8fa
    JMP 0x0056b8a2                      ; 0056b8fd
        ;   XREF to: 0056b8a2 (UNCONDITIONAL_JUMP)  ; LAB_0056b8a2

