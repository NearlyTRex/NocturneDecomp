; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_1000b950(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_1000bafc = 1000baac
;   undefined4 PTR_caseD_3_1000bb0c+2
;   undefined4 DAT_100176d0
;   undefined1 DAT_100176d4
;   undefined4 DAT_10017750
;   undefined4 DAT_100178f8
;   undefined4 DAT_100178fc
;   undefined4 DAT_10017900
;   undefined4 DAT_10017904
;   undefined4 DAT_10017908
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_SetConsoleCtrlHandler_10242260 = 0024269e
;
; Called Functions:
;   __getptd
;   __lock
;   FUN_10005a10
;   FUN_10008830
;   FUN_10008a20
;   FUN_10008a30
;   FUN_1000bda0
;   GetLastError
;   SetConsoleCtrlHandler
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 1000b950
        ;   Label: FUN_1000b950
    PUSH EBX                            ; 1000b953
    PUSH ESI                            ; 1000b954
    PUSH EDI                            ; 1000b955
    PUSH EBP                            ; 1000b956
    MOV EBP,dword ptr [ESP + 0x1c]      ; 1000b957
    CMP EBP,0x4                         ; 1000b95b
    JZ 0x1000ba94                       ; 1000b95e
        ;   XREF to: 1000ba94 (CONDITIONAL_JUMP)  ; LAB_1000ba94
    CMP EBP,0x3                         ; 1000b964
    JZ 0x1000ba94                       ; 1000b967
        ;   XREF to: 1000ba94 (CONDITIONAL_JUMP)  ; LAB_1000ba94
    MOV EBX,dword ptr [ESP + 0x18]      ; 1000b96d
    CMP EBX,0x2                         ; 1000b971
    JZ 0x1000ba2b                       ; 1000b974
        ;   XREF to: 1000ba2b (CONDITIONAL_JUMP)  ; LAB_1000ba2b
    CMP EBX,0x15                        ; 1000b97a
    JZ 0x1000ba2b                       ; 1000b97d
        ;   XREF to: 1000ba2b (CONDITIONAL_JUMP)  ; LAB_1000ba2b
    CMP EBX,0x16                        ; 1000b983
    JZ 0x1000ba2b                       ; 1000b986
        ;   XREF to: 1000ba2b (CONDITIONAL_JUMP)  ; LAB_1000ba2b
    CMP EBX,0xf                         ; 1000b98c
    JZ 0x1000ba2b                       ; 1000b98f
        ;   XREF to: 1000ba2b (CONDITIONAL_JUMP)  ; LAB_1000ba2b
    CMP EBX,0x8                         ; 1000b995
    JZ 0x1000b9a8                       ; 1000b998
        ;   XREF to: 1000b9a8 (CONDITIONAL_JUMP)  ; LAB_1000b9a8
    CMP EBX,0x4                         ; 1000b99a
    JZ 0x1000b9a8                       ; 1000b99d
        ;   XREF to: 1000b9a8 (CONDITIONAL_JUMP)  ; LAB_1000b9a8
    CMP EBX,0xb                         ; 1000b99f
    JNZ 0x1000ba94                      ; 1000b9a2
        ;   XREF to: 1000ba94 (CONDITIONAL_JUMP)  ; LAB_1000ba94
    CALL __getptd                       ; 1000b9a8
        ;   XREF to: 100077b0 (UNCONDITIONAL_CALL)  ; _ptiddata __getptd()
        ;   Label: LAB_1000b9a8
    CMP dword ptr [EAX + 0x50],0x100176d0 ; 1000b9ad | DAT_100176d0
    MOV dword ptr [ESP + 0x10],EAX      ; 1000b9b4
    JNZ 0x1000b9f1                      ; 1000b9b8
        ;   XREF to: 1000b9f1 (CONDITIONAL_JUMP)  ; LAB_1000b9f1
    MOV EAX,[0x10017750]                ; 1000b9ba | DAT_10017750
    PUSH EAX                            ; 1000b9bf
    CALL FUN_10008830                   ; 1000b9c0
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000b9c5
    ADD ESP,0x4                         ; 1000b9c9
    MOV EDI,EAX                         ; 1000b9cc
    MOV dword ptr [ECX + 0x50],EAX      ; 1000b9ce
    TEST EDI,EDI                        ; 1000b9d1
    JZ 0x1000ba94                       ; 1000b9d3
        ;   XREF to: 1000ba94 (CONDITIONAL_JUMP)  ; LAB_1000ba94
    MOV EAX,[0x10017750]                ; 1000b9d9 | DAT_10017750
    MOV ESI,0x100176d0                  ; 1000b9de | DAT_100176d0
    MOV ECX,EAX                         ; 1000b9e3
    SHR ECX,0x2                         ; 1000b9e5
    MOVSD.REP ES:EDI,ESI                ; 1000b9e8 | DAT_100176d0 | DAT_100176d4
    MOV ECX,EAX                         ; 1000b9ea
    AND ECX,0x3                         ; 1000b9ec
    MOVSB.REP ES:EDI,ESI                ; 1000b9ef | DAT_100176d4
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000b9f1
        ;   Label: LAB_1000b9f1
    MOV EAX,dword ptr [ECX + 0x50]      ; 1000b9f5
    PUSH EAX                            ; 1000b9f8
    PUSH EBX                            ; 1000b9f9
    CALL FUN_1000bda0                   ; 1000b9fa
        ;   XREF to: 1000bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_1000bda0()
    ADD ESP,0x8                         ; 1000b9ff
    TEST EAX,EAX                        ; 1000ba02
    JZ 0x1000ba94                       ; 1000ba04
        ;   XREF to: 1000ba94 (CONDITIONAL_JUMP)  ; LAB_1000ba94
    MOV ESI,dword ptr [EAX + 0x8]       ; 1000ba0a
    CMP dword ptr [EAX + 0x4],EBX       ; 1000ba0d
    JNZ 0x1000baf2                      ; 1000ba10
        ;   XREF to: 1000baf2 (CONDITIONAL_JUMP)  ; LAB_1000baf2
    MOV dword ptr [EAX + 0x8],EBP       ; 1000ba16
        ;   Label: LAB_1000ba16
    ADD EAX,0xc                         ; 1000ba19
    CMP dword ptr [EAX + 0x4],EBX       ; 1000ba1c
    JZ 0x1000ba16                       ; 1000ba1f
        ;   XREF to: 1000ba16 (CONDITIONAL_JUMP)  ; LAB_1000ba16
    MOV EAX,ESI                         ; 1000ba21
    POP EBP                             ; 1000ba23
    POP EDI                             ; 1000ba24
    POP ESI                             ; 1000ba25
    POP EBX                             ; 1000ba26
    ADD ESP,0x4                         ; 1000ba27
    RET                                 ; 1000ba2a
    PUSH 0x1                            ; 1000ba2b
        ;   Label: LAB_1000ba2b
    CALL __lock                         ; 1000ba2d
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000ba32
    CMP EBX,0x2                         ; 1000ba35
    JZ 0x1000ba3f                       ; 1000ba38
        ;   XREF to: 1000ba3f (CONDITIONAL_JUMP)  ; LAB_1000ba3f
    CMP EBX,0x15                        ; 1000ba3a
    JNZ 0x1000ba64                      ; 1000ba3d
        ;   XREF to: 1000ba64 (CONDITIONAL_JUMP)  ; LAB_1000ba64
    CMP dword ptr [0x10017908],0x0      ; 1000ba3f | DAT_10017908
        ;   Label: LAB_1000ba3f
    JNZ 0x1000ba64                      ; 1000ba46
        ;   XREF to: 1000ba64 (CONDITIONAL_JUMP)  ; LAB_1000ba64
    PUSH 0x1                            ; 1000ba48
    PUSH 0x1000bb30                     ; 1000ba4a
    CALL dword ptr [0x10242260]         ; 1000ba4f | PTR_SetConsoleCtrlHandler_10242260
    CMP EAX,0x1                         ; 1000ba55
    JNZ 0x1000ba7b                      ; 1000ba58
        ;   XREF to: 1000ba7b (CONDITIONAL_JUMP)  ; LAB_1000ba7b
    MOV dword ptr [0x10017908],0x1      ; 1000ba5a | DAT_10017908
    SUB EBX,0x2                         ; 1000ba64
        ;   Label: LAB_1000ba64
    CMP EBX,0x14                        ; 1000ba67
    JA 0x1000bae4                       ; 1000ba6a
        ;   XREF to: 1000bae4 (CONDITIONAL_JUMP)  ; caseD_14
    XOR EAX,EAX                         ; 1000ba6c
    MOV AL,byte ptr [EBX + 0x1000bb10]  ; 1000ba6e | PTR_caseD_3_1000bb0c+2
    JMP dword ptr [EAX*0x4 + 0x1000bafc] ; 1000ba74 | caseD_2 | caseD_14 | caseD_f
        ;   Label: switchD
    CALL FUN_10008a30                   ; 1000ba7b
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
        ;   Label: LAB_1000ba7b
    MOV ESI,EAX                         ; 1000ba80
    CALL dword ptr [0x102421c8]         ; 1000ba82 | PTR_GetLastError_102421c8
    PUSH 0x1                            ; 1000ba88
    MOV dword ptr [ESI],EAX             ; 1000ba8a
    CALL FUN_10005a10                   ; 1000ba8c
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000ba91
    CALL FUN_10008a20                   ; 1000ba94
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000ba94
    POP EBP                             ; 1000ba99
    MOV dword ptr [EAX],0x16            ; 1000ba9a
    MOV EAX,0xffffffff                  ; 1000baa0
    POP EDI                             ; 1000baa5
    POP ESI                             ; 1000baa6
    POP EBX                             ; 1000baa7
    ADD ESP,0x4                         ; 1000baa8
    RET                                 ; 1000baab
    MOV ESI,dword ptr [0x100178f8]      ; 1000baac | DAT_100178f8
        ;   Label: caseD_2
    MOV dword ptr [0x100178f8],EBP      ; 1000bab2 | DAT_100178f8
    JMP 0x1000bae8                      ; 1000bab8
        ;   XREF to: 1000bae8 (UNCONDITIONAL_JUMP)  ; LAB_1000bae8
    MOV ESI,dword ptr [0x10017904]      ; 1000baba | DAT_10017904
        ;   Label: caseD_f
    MOV dword ptr [0x10017904],EBP      ; 1000bac0 | DAT_10017904
    JMP 0x1000bae8                      ; 1000bac6
        ;   XREF to: 1000bae8 (UNCONDITIONAL_JUMP)  ; LAB_1000bae8
    MOV ESI,dword ptr [0x100178fc]      ; 1000bac8 | DAT_100178fc
        ;   Label: caseD_15
    MOV dword ptr [0x100178fc],EBP      ; 1000bace | DAT_100178fc
    JMP 0x1000bae8                      ; 1000bad4
        ;   XREF to: 1000bae8 (UNCONDITIONAL_JUMP)  ; LAB_1000bae8
    MOV ESI,dword ptr [0x10017900]      ; 1000bad6 | DAT_10017900
        ;   Label: caseD_16
    MOV dword ptr [0x10017900],EBP      ; 1000badc | DAT_10017900
    JMP 0x1000bae8                      ; 1000bae2
        ;   XREF to: 1000bae8 (UNCONDITIONAL_JUMP)  ; LAB_1000bae8
    MOV ESI,dword ptr [ESP + 0x10]      ; 1000bae4
        ;   Label: caseD_3
    PUSH 0x1                            ; 1000bae8
        ;   Label: LAB_1000bae8
    CALL FUN_10005a10                   ; 1000baea
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000baef
    MOV EAX,ESI                         ; 1000baf2
        ;   Label: LAB_1000baf2
    POP EBP                             ; 1000baf4
    POP EDI                             ; 1000baf5
    POP ESI                             ; 1000baf6
    POP EBX                             ; 1000baf7
    ADD ESP,0x4                         ; 1000baf8
    RET                                 ; 1000bafb

