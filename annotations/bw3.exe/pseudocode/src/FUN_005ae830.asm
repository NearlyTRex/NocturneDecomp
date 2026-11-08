; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ae830(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   FUN_005a9410 at 005a9429
;
; Referenced Globals:
;   void* PTR_WriteConsoleA_005b3688 = 001b42fe
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b54
;
; Called Functions:
;   FUN_005a7f44
;   FUN_005afe5c
;   WriteConsoleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae830
        ;   Label: FUN_005ae830
    SUB ESP,0x8                         ; 005ae831
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ae834
    MOV EDX,dword ptr [0x00607b54]      ; 005ae838 | DAT_00607b54
    MOV byte ptr [ESP + 0x4],BL         ; 005ae83e
    TEST EDX,EDX                        ; 005ae842
    JZ 0x005ae85e                       ; 005ae844
        ;   XREF to: 005ae85e (CONDITIONAL_JUMP)  ; LAB_005ae85e
    PUSH 0x1                            ; 005ae846
    CALL dword ptr [0x00607b18]         ; 005ae848 | DAT_00607b18
    ADD ESP,0x4                         ; 005ae84e
    PUSH EBX                            ; 005ae851
    PUSH EAX                            ; 005ae852
    CALL dword ptr [0x00607b54]         ; 005ae853 | DAT_00607b54
    ADD ESP,0x8                         ; 005ae859
    JMP 0x005ae88f                      ; 005ae85c
        ;   XREF to: 005ae88f (UNCONDITIONAL_JUMP)  ; LAB_005ae88f
    PUSH 0x1                            ; 005ae85e
        ;   Label: LAB_005ae85e
    CALL dword ptr [0x006079a4]         ; 005ae860 | PTR_FUN_006079a4
    ADD ESP,0x4                         ; 005ae866
    CALL FUN_005afe5c                   ; 005ae869
        ;   XREF to: 005afe5c (UNCONDITIONAL_CALL)  ; undefined FUN_005afe5c()
    PUSH 0x0                            ; 005ae86e
    LEA EDX,[ESP + 0x4]                 ; 005ae870
    PUSH EDX                            ; 005ae874
    PUSH 0x1                            ; 005ae875
    LEA EDX,[ESP + 0x10]                ; 005ae877
    PUSH EDX                            ; 005ae87b
    PUSH EAX                            ; 005ae87c
    CALL dword ptr CS:[0x5b3688]        ; 005ae87d | PTR_WriteConsoleA_005b3688
    PUSH 0x1                            ; 005ae884
    CALL dword ptr [0x006079a8]         ; 005ae886 | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005ae88c
    MOV EAX,EBX                         ; 005ae88f
        ;   Label: LAB_005ae88f
    ADD ESP,0x8                         ; 005ae891
    POP EBX                             ; 005ae894
    RET                                 ; 005ae895

