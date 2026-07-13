; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056b4a9(int *param_1,byte param_2)
;
;
; XREF[3]:
;   FUN_00564d92 at 00564ddf
;   FUN_0056511e at 0056514c
;   FUN_0056536a at 00565386
;
; Referenced Globals:
;   undefined4 DAT_005a4908
;   void* PTR_FUN_005a4914 = 0056b538
;   void* PTR_FUN_005a491c = 0056b4eb
;
; Called Functions:
;   FUN_0056b503
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056b4a9
        ;   Label: FUN_0056b4a9
    TEST byte ptr [ESP + 0x8],0x1       ; 0056b4ad
    JZ 0x0056b4d4                       ; 0056b4b2
        ;   XREF to: 0056b4d4 (CONDITIONAL_JUMP)  ; LAB_0056b4d4
    MOV EDX,dword ptr [EAX]             ; 0056b4b4
        ;   Label: LAB_0056b4b4
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b4b6
    LEA ECX,[EAX + EDX*0x1]             ; 0056b4b9
    MOV dword ptr [ECX + -0x4],EDX      ; 0056b4bc
    MOV EDX,dword ptr [EAX]             ; 0056b4bf
    MOV dword ptr [EAX + 0x4],0x5a4914  ; 0056b4c1 | PTR_FUN_005a4914
    MOV EDX,dword ptr [EDX + 0x4]       ; 0056b4c8
    MOV dword ptr [EDX + EAX*0x1 + 0x28],0x5a491c ; 0056b4cb | PTR_FUN_005a491c
    RET                                 ; 0056b4d3
    MOV dword ptr [EAX],0x5a4908        ; 0056b4d4 | DAT_005a4908
        ;   Label: LAB_0056b4d4
    ADD EAX,0xc                         ; 0056b4da
    PUSH EAX                            ; 0056b4dd
    CALL FUN_0056b503                   ; 0056b4de
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 0056b4e3
    SUB EAX,0xc                         ; 0056b4e6
    JMP 0x0056b4b4                      ; 0056b4e9
        ;   XREF to: 0056b4b4 (UNCONDITIONAL_JUMP)  ; LAB_0056b4b4

