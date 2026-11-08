; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_005b083d(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   FUN_005aec4d at 005aed24
;
; Referenced Globals:
;   void* PTR_thunk_FUN_005b196b_00607f10 = 005b0ea4
;
; Called Functions:
;   FUN_005a92d0
;   FUN_005a92dc
;   FUN_005b07f0
;   thunk_FUN_005b196b
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b083d
        ;   Label: FUN_005b083d
    MOV EBP,ESP                         ; 005b083e
    PUSH EBX                            ; 005b0840
    PUSH ESI                            ; 005b0841
    SUB ESP,0x8                         ; 005b0842
    MOV EBX,dword ptr [EBP + 0x8]       ; 005b0845
    PUSH EBX                            ; 005b0848
    CALL dword ptr [0x00607f10]         ; 005b0849 | PTR_thunk_FUN_005b196b_00607f10
    ADD ESP,0x4                         ; 005b084f
    TEST EAX,EAX                        ; 005b0852
    JNZ 0x005b0878                      ; 005b0854
        ;   XREF to: 005b0878 (CONDITIONAL_JUMP)  ; LAB_005b0878
    MOV EDX,dword ptr [EBX + 0x4]       ; 005b0856
    PUSH EDX                            ; 005b0859
    MOV ECX,dword ptr [EBX]             ; 005b085a
    PUSH ECX                            ; 005b085c
    CALL FUN_005b07f0                   ; 005b085d
        ;   XREF to: 005b07f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b07f0()
    MOV ESI,dword ptr [EBX]             ; 005b0862
    ADD ESP,0x8                         ; 005b0864
    CMP ESI,0x1                         ; 005b0867
    JNZ 0x005b0873                      ; 005b086a
        ;   XREF to: 005b0873 (CONDITIONAL_JUMP)  ; LAB_005b0873
    CALL FUN_005a92d0                   ; 005b086c
        ;   XREF to: 005a92d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92d0()
    JMP 0x005b0878                      ; 005b0871
        ;   XREF to: 005b0878 (UNCONDITIONAL_JUMP)  ; LAB_005b0878
    CALL FUN_005a92dc                   ; 005b0873
        ;   XREF to: 005a92dc (UNCONDITIONAL_CALL)  ; undefined FUN_005a92dc()
        ;   Label: LAB_005b0873
    MOV EAX,dword ptr [EBX + 0x18]      ; 005b0878
        ;   Label: LAB_005b0878
    MOV dword ptr [EBP + -0x10],EAX     ; 005b087b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005b087e
    MOV dword ptr [EBP + -0xc],EAX      ; 005b0881
    MOV EAX,dword ptr [EBP + -0x10]     ; 005b0884
    MOV EDX,dword ptr [EBP + -0xc]      ; 005b0887
    LEA ESP,[EBP + -0x8]                ; 005b088a
    POP ESI                             ; 005b088d
    POP EBX                             ; 005b088e
    POP EBP                             ; 005b088f
    RET                                 ; 005b0890

