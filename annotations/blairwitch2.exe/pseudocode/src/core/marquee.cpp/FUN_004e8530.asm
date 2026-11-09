; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_marquee_cpp_FUN_004e8530(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004e8530
        ;   Label: core_marquee.cpp_FUN_004e8530
    SUB ESP,0x18                        ; 004e8531
    MOV EDX,ESI                         ; 004e8534
    MOV ECX,dword ptr [ESP + 0x20]      ; 004e8536
    MOV EAX,ESP                         ; 004e853a
    ADD ECX,0x2e0                       ; 004e853c
    CMP EAX,ECX                         ; 004e8542
    JNZ 0x004e856a                      ; 004e8544
        ;   XREF to: 004e856a (CONDITIONAL_JUMP)  ; LAB_004e856a
    MOV ECX,dword ptr [ESP + 0x20]      ; 004e8546
        ;   Label: LAB_004e8546
    LEA EAX,[ESP + 0xc]                 ; 004e854a
    ADD ECX,0x2ec                       ; 004e854e
    CMP EAX,ECX                         ; 004e8554
    JNZ 0x004e857f                      ; 004e8556
        ;   XREF to: 004e857f (CONDITIONAL_JUMP)  ; LAB_004e857f
    MOV ECX,0x6                         ; 004e8558
    MOV ESI,ESP                         ; 004e855d
    MOV EDI,EDX                         ; 004e855f
    MOVSD.REP ES:EDI,ESI                ; 004e8561
    MOV EAX,EDX                         ; 004e8563
    ADD ESP,0x18                        ; 004e8565
    POP EDI                             ; 004e8568
    RET                                 ; 004e8569
    MOV EAX,dword ptr [ECX]             ; 004e856a
        ;   Label: LAB_004e856a
    MOV dword ptr [ESP],EAX             ; 004e856c
    MOV EAX,dword ptr [ECX + 0x4]       ; 004e856f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8572
    MOV EAX,dword ptr [ECX + 0x8]       ; 004e8576
    MOV dword ptr [ESP + 0x8],EAX       ; 004e8579
    JMP 0x004e8546                      ; 004e857d
        ;   XREF to: 004e8546 (UNCONDITIONAL_JUMP)  ; LAB_004e8546
    MOV EAX,dword ptr [ECX]             ; 004e857f
        ;   Label: LAB_004e857f
    MOV dword ptr [ESP + 0xc],EAX       ; 004e8581
    MOV EAX,dword ptr [ECX + 0x4]       ; 004e8585
    MOV dword ptr [ESP + 0x10],EAX      ; 004e8588
    MOV EAX,dword ptr [ECX + 0x8]       ; 004e858c
    MOV dword ptr [ESP + 0x14],EAX      ; 004e858f
    MOV ECX,0x6                         ; 004e8593
    MOV ESI,ESP                         ; 004e8598
    MOV EDI,EDX                         ; 004e859a
    MOVSD.REP ES:EDI,ESI                ; 004e859c
    MOV EAX,EDX                         ; 004e859e
    ADD ESP,0x18                        ; 004e85a0
    POP EDI                             ; 004e85a3
    RET                                 ; 004e85a4

