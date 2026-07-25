; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_fstream_cpp_openFile_FUN_00565eb5(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_00456b20 at 00456b93
;   FUN_004a3b90 at 004a3e85
;   FUN_004a4170 at 004a4450
;
; Called Functions:
;   FUN_00565e94
;   FUN_0056b327
;   FUN_0056cd9b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565eb5
        ;   Label: crt_fstream.cpp_openFile_FUN_00565eb5
    PUSH ESI                            ; 00565eb6
    PUSH EDI                            ; 00565eb7
    PUSH EBP                            ; 00565eb8
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565eb9
    MOV EAX,dword ptr [EBX]             ; 00565ebd
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565ebf
    ADD EAX,EBX                         ; 00565ec2
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565ec4
    TEST EDX,EDX                        ; 00565ec7
    JZ 0x00565efe                       ; 00565ec9
        ;   XREF to: 00565efe (CONDITIONAL_JUMP)  ; LAB_00565efe
    MOV ECX,dword ptr [ESP + 0x20]      ; 00565ecb
    PUSH ECX                            ; 00565ecf
    MOV ESI,dword ptr [ESP + 0x20]      ; 00565ed0
    PUSH ESI                            ; 00565ed4
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565ed5
    PUSH EDI                            ; 00565ed9
    PUSH EDX                            ; 00565eda
    CALL FUN_0056cd9b                   ; 00565edb
        ;   XREF to: 0056cd9b (UNCONDITIONAL_CALL)  ; undefined FUN_0056cd9b()
    ADD ESP,0x10                        ; 00565ee0
    TEST EAX,EAX                        ; 00565ee3
    JNZ 0x00565f03                      ; 00565ee5
        ;   XREF to: 00565f03 (CONDITIONAL_JUMP)  ; LAB_00565f03
    MOV EAX,dword ptr [EBX]             ; 00565ee7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00565ee9
    PUSH 0x2                            ; 00565eec
    ADD EBX,EDX                         ; 00565eee
    PUSH EBX                            ; 00565ef0
    CALL FUN_0056b327                   ; 00565ef1
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
        ;   Label: LAB_00565ef1
    ADD ESP,0x8                         ; 00565ef6
        ;   Label: LAB_00565ef6
    POP EBP                             ; 00565ef9
    POP EDI                             ; 00565efa
    POP ESI                             ; 00565efb
    POP EBX                             ; 00565efc
    RET                                 ; 00565efd
    PUSH 0x2                            ; 00565efe
        ;   Label: LAB_00565efe
    PUSH EAX                            ; 00565f00
    JMP 0x00565ef1                      ; 00565f01
        ;   XREF to: 00565ef1 (UNCONDITIONAL_JUMP)  ; LAB_00565ef1
    MOV EAX,dword ptr [EBX]             ; 00565f03
        ;   Label: LAB_00565f03
    MOV EBP,dword ptr [EAX + 0x4]       ; 00565f05
    PUSH 0x0                            ; 00565f08
    ADD EBX,EBP                         ; 00565f0a
    PUSH EBX                            ; 00565f0c
    CALL FUN_00565e94                   ; 00565f0d
        ;   XREF to: 00565e94 (UNCONDITIONAL_CALL)  ; undefined FUN_00565e94()
    JMP 0x00565ef6                      ; 00565f12
        ;   XREF to: 00565ef6 (UNCONDITIONAL_JUMP)  ; LAB_00565ef6

