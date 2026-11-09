; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_script_cpp_FUN_00530410(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052c4b1
;
; Referenced Globals:
;   undefined4 DAT_005cfaa5
;   undefined4 DAT_005cfaa8
;
; Called Functions:
;   crt_string.c__strnicmp_FUN_005a3f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530410
        ;   Label: core_script.cpp_FUN_00530410
    PUSH ESI                            ; 00530411
    PUSH EDI                            ; 00530412
    PUSH EBP                            ; 00530413
    SUB ESP,0x4                         ; 00530414
    MOV EBP,dword ptr [ESP + 0x18]      ; 00530417
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053041b
    MOV EDX,0x1                         ; 0053041f
    MOV ECX,dword ptr [EBP + 0x2c]      ; 00530424
    XOR ESI,ESI                         ; 00530427
    MOV dword ptr [ESP],EDX             ; 00530429
    CMP EBX,ECX                         ; 0053042c
    JGE 0x00530450                      ; 0053042e
        ;   XREF to: 00530450 (CONDITIONAL_JUMP)  ; LAB_00530450
    MOV EDI,dword ptr [EBP + 0x30]      ; 00530430
        ;   Label: LAB_00530430
    MOV EDI,dword ptr [EDI + EBX*0x8 + 0x4] ; 00530433
    MOV AH,byte ptr [EDI]               ; 00530437
    CMP AH,0x7b                         ; 00530439
    JNZ 0x0053045f                      ; 0053043c
        ;   XREF to: 0053045f (CONDITIONAL_JUMP)  ; LAB_0053045f
    INC EBX                             ; 0053043e
    INC ESI                             ; 0053043f
    TEST EBX,EBX                        ; 00530440
        ;   Label: LAB_00530440
    JL 0x00530450                       ; 00530442
        ;   XREF to: 00530450 (CONDITIONAL_JUMP)  ; LAB_00530450
    XOR EDI,EDI                         ; 00530444
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00530446
    MOV dword ptr [ESP],EDI             ; 00530449
    CMP EBX,EAX                         ; 0053044c
    JL 0x00530430                       ; 0053044e
        ;   XREF to: 00530430 (CONDITIONAL_JUMP)  ; LAB_00530430
    MOV EBX,0xffffffff                  ; 00530450
        ;   Label: LAB_00530450
    MOV EAX,EBX                         ; 00530455
        ;   Label: LAB_00530455
    ADD ESP,0x4                         ; 00530457
    POP EBP                             ; 0053045a
    POP EDI                             ; 0053045b
    POP ESI                             ; 0053045c
    POP EBX                             ; 0053045d
    RET                                 ; 0053045e
    CMP AH,0x7d                         ; 0053045f
        ;   Label: LAB_0053045f
    JNZ 0x0053047d                      ; 00530462
        ;   XREF to: 0053047d (CONDITIONAL_JUMP)  ; LAB_0053047d
    TEST ESI,ESI                        ; 00530464
    JNZ 0x00530479                      ; 00530466
        ;   XREF to: 00530479 (CONDITIONAL_JUMP)  ; LAB_00530479
    CMP dword ptr [ESP],0x0             ; 00530468
    JZ 0x00530455                       ; 0053046c
        ;   XREF to: 00530455 (CONDITIONAL_JUMP)  ; LAB_00530455
    INC EBX                             ; 0053046e
    MOV EAX,EBX                         ; 0053046f
    ADD ESP,0x4                         ; 00530471
    POP EBP                             ; 00530474
    POP EDI                             ; 00530475
    POP ESI                             ; 00530476
    POP EBX                             ; 00530477
    RET                                 ; 00530478
    INC EBX                             ; 00530479
        ;   Label: LAB_00530479
    DEC ESI                             ; 0053047a
    JMP 0x00530440                      ; 0053047b
        ;   XREF to: 00530440 (UNCONDITIONAL_JUMP)  ; LAB_00530440
    TEST ESI,ESI                        ; 0053047d
        ;   Label: LAB_0053047d
    JG 0x00530487                       ; 0053047f
        ;   XREF to: 00530487 (CONDITIONAL_JUMP)  ; LAB_00530487
    CMP dword ptr [ESP],0x0             ; 00530481
    JZ 0x0053049b                       ; 00530485
        ;   XREF to: 0053049b (CONDITIONAL_JUMP)  ; LAB_0053049b
    PUSH 0x2                            ; 00530487
        ;   Label: LAB_00530487
    PUSH 0x5cfaa5                       ; 00530489 | DAT_005cfaa5
    PUSH EDI                            ; 0053048e
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 0053048f
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00530494
    TEST EAX,EAX                        ; 00530497
    JZ 0x005304cf                       ; 00530499
        ;   XREF to: 005304cf (CONDITIONAL_JUMP)  ; LAB_005304cf
    TEST ESI,ESI                        ; 0053049b
        ;   Label: LAB_0053049b
    JG 0x005304a6                       ; 0053049d
        ;   XREF to: 005304a6 (CONDITIONAL_JUMP)  ; LAB_005304a6
    CMP dword ptr [ESP + 0x20],0x0      ; 0053049f
    JZ 0x005304ba                       ; 005304a4
        ;   XREF to: 005304ba (CONDITIONAL_JUMP)  ; LAB_005304ba
    PUSH 0x4                            ; 005304a6
        ;   Label: LAB_005304a6
    PUSH 0x5cfaa8                       ; 005304a8 | DAT_005cfaa8
    PUSH EDI                            ; 005304ad
    CALL crt_string.c__strnicmp_FUN_005a3f90 ; 005304ae
        ;   XREF to: 005a3f90 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005a3f90(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005304b3
    TEST EAX,EAX                        ; 005304b6
    JZ 0x005304e3                       ; 005304b8
        ;   XREF to: 005304e3 (CONDITIONAL_JUMP)  ; LAB_005304e3
    TEST ESI,ESI                        ; 005304ba
        ;   Label: LAB_005304ba
    JNZ 0x005304f7                      ; 005304bc
        ;   XREF to: 005304f7 (CONDITIONAL_JUMP)  ; LAB_005304f7
    CMP dword ptr [ESP],0x0             ; 005304be
    JZ 0x00530455                       ; 005304c2
        ;   XREF to: 00530455 (CONDITIONAL_JUMP)  ; LAB_00530455
    INC EBX                             ; 005304c4
    MOV EAX,EBX                         ; 005304c5
    ADD ESP,0x4                         ; 005304c7
    POP EBP                             ; 005304ca
    POP EDI                             ; 005304cb
    POP ESI                             ; 005304cc
    POP EBX                             ; 005304cd
    RET                                 ; 005304ce
    PUSH 0x1                            ; 005304cf
        ;   Label: LAB_005304cf
    INC EBX                             ; 005304d1
    PUSH EBX                            ; 005304d2
    PUSH EBP                            ; 005304d3
    CALL core_script.cpp_FUN_00530410   ; 005304d4
        ;   XREF to: 00530410 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530410()
    MOV EBX,EAX                         ; 005304d9
    ADD ESP,0xc                         ; 005304db
    JMP 0x00530440                      ; 005304de
        ;   XREF to: 00530440 (UNCONDITIONAL_JUMP)  ; LAB_00530440
    PUSH 0x1                            ; 005304e3
        ;   Label: LAB_005304e3
    INC EBX                             ; 005304e5
    PUSH EBX                            ; 005304e6
    PUSH EBP                            ; 005304e7
    CALL core_script.cpp_FUN_00530410   ; 005304e8
        ;   XREF to: 00530410 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00530410()
    ADD ESP,0xc                         ; 005304ed
    MOV EBX,EAX                         ; 005304f0
    JMP 0x00530440                      ; 005304f2
        ;   XREF to: 00530440 (UNCONDITIONAL_JUMP)  ; LAB_00530440
    INC EBX                             ; 005304f7
        ;   Label: LAB_005304f7
    JMP 0x00530440                      ; 005304f8
        ;   XREF to: 00530440 (UNCONDITIONAL_JUMP)  ; LAB_00530440

