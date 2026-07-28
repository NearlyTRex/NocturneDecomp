; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_005723ae(filebuf *this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_dtor_FUN_00570449 at 0057046d
;
; Called Functions:
;   crt_stdio.c_lseek_FUN_005689c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005723ae
        ;   Label: crt_fstream.cpp_filebuf_sync_FUN_005723ae
    PUSH EBP                            ; 005723af
    MOV EBP,ESP                         ; 005723b0
    MOV EBX,dword ptr [EBP + 0xc]       ; 005723b2
    MOV EAX,dword ptr [EBX + 0x20]      ; 005723b5
    SUB EAX,dword ptr [EBX + 0x18]      ; 005723b8
    JNZ 0x005723f1                      ; 005723bb
        ;   XREF to: 005723f1 (CONDITIONAL_JUMP)  ; LAB_005723f1
    MOV EAX,dword ptr [EBX + 0x10]      ; 005723bd
    MOV ECX,dword ptr [EBX + 0x14]      ; 005723c0
    SUB EAX,ECX                         ; 005723c3
    JZ 0x00572402                       ; 005723c5
        ;   XREF to: 00572402 (CONDITIONAL_JUMP)  ; LAB_00572402
    TEST byte ptr [EBX + 0x30],0x80     ; 005723c7
    JZ 0x00572407                       ; 005723cb
        ;   XREF to: 00572407 (CONDITIONAL_JUMP)  ; LAB_00572407
    MOV ECX,dword ptr [EBX + 0x10]      ; 005723cd
    XOR EDX,EDX                         ; 005723d0
    MOV EAX,ECX                         ; 005723d2
    TEST ECX,ECX                        ; 005723d4
    JZ 0x00572410                       ; 005723d6
        ;   XREF to: 00572410 (CONDITIONAL_JUMP)  ; LAB_00572410
    DEC EAX                             ; 005723d8
        ;   Label: LAB_005723d8
    MOV ECX,dword ptr [EBX + 0x14]      ; 005723d9
    CMP EAX,ECX                         ; 005723dc
    JC 0x00572410                       ; 005723de
        ;   XREF to: 00572410 (CONDITIONAL_JUMP)  ; LAB_00572410
    CMP byte ptr [EAX],0xa              ; 005723e0
    SETZ CL                             ; 005723e3
    AND ECX,0xff                        ; 005723e6
    INC ECX                             ; 005723ec
    SUB EDX,ECX                         ; 005723ed
    JMP 0x005723d8                      ; 005723ef
        ;   XREF to: 005723d8 (UNCONDITIONAL_JUMP)  ; LAB_005723d8
    PUSH -0x1                           ; 005723f1
        ;   Label: LAB_005723f1
    MOV EAX,dword ptr [EBX + 0x28]      ; 005723f3
    PUSH EBX                            ; 005723f6
    CALL dword ptr [EAX + 0xc]          ; 005723f7
    ADD ESP,0x8                         ; 005723fa
    CMP EAX,-0x1                        ; 005723fd
    JZ 0x00572404                       ; 00572400
        ;   XREF to: 00572404 (CONDITIONAL_JUMP)  ; LAB_00572404
    XOR EAX,EAX                         ; 00572402
        ;   Label: LAB_00572402
    POP EBP                             ; 00572404
        ;   Label: LAB_00572404
    POP EBX                             ; 00572405
    RET                                 ; 00572406
    MOV EAX,ECX                         ; 00572407
        ;   Label: LAB_00572407
    MOV EDX,dword ptr [EBX + 0x10]      ; 00572409
    SUB EAX,EDX                         ; 0057240c
    MOV EDX,EAX                         ; 0057240e
    PUSH 0x1                            ; 00572410
        ;   Label: LAB_00572410
    PUSH EDX                            ; 00572412
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00572413
    PUSH EAX                            ; 00572416
    CALL crt_stdio.c_lseek_FUN_005689c0 ; 00572417
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_005689c0(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0057241c
    TEST EAX,EAX                        ; 0057241f
    JL 0x0057243d                       ; 00572421
        ;   XREF to: 0057243d (CONDITIONAL_JUMP)  ; LAB_0057243d
    MOV dword ptr [EBX + 0xc],0x0       ; 00572423
    MOV dword ptr [EBX + 0x14],0x0      ; 0057242a
    MOV dword ptr [EBX + 0x10],0x0      ; 00572431
    XOR EAX,EAX                         ; 00572438
    POP EBP                             ; 0057243a
    POP EBX                             ; 0057243b
    RET                                 ; 0057243c
    MOV EAX,0xffffffff                  ; 0057243d
        ;   Label: LAB_0057243d
    POP EBP                             ; 00572442
    POP EBX                             ; 00572443
    RET                                 ; 00572444

