; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_litecone_cpp_FUN_004e4340(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc112
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e4340
        ;   Label: core_litecone.cpp_FUN_004e4340
    PUSH EDI                            ; 004e4341
    SUB ESP,0x1c                        ; 004e4342
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e4345
    MOV EDX,ESI                         ; 004e4349
    FLD float ptr [ECX + 0x2b4]         ; 004e434b
    FDIVR double ptr [0x005dc112]       ; 004e4351 | DAT_005dc112
    FMUL float ptr [ECX + 0x2b8]        ; 004e4357
    MOV EDI,ESI                         ; 004e435d
    FST float ptr [ESP + 0x18]          ; 004e435f
    FCHS                                ; 004e4363
    FSTP float ptr [ESP]                ; 004e4365
    MOV EAX,dword ptr [ESP]             ; 004e4368
    XOR EBX,EBX                         ; 004e436b
    MOV dword ptr [ESP + 0x4],EAX       ; 004e436d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e4371
    MOV ESI,ESP                         ; 004e4375
    MOV dword ptr [ESP + 0xc],EAX       ; 004e4377
    MOV dword ptr [ESP + 0x10],EAX      ; 004e437b
    MOV EAX,dword ptr [ECX + 0x2b8]     ; 004e437f
    MOV ECX,0x6                         ; 004e4385
    MOV dword ptr [ESP + 0x8],EBX       ; 004e438a
    MOV dword ptr [ESP + 0x14],EAX      ; 004e438e
    MOVSD.REP ES:EDI,ESI                ; 004e4392
    MOV EAX,EDX                         ; 004e4394
    ADD ESP,0x1c                        ; 004e4396
    POP EDI                             ; 004e4399
    POP EBX                             ; 004e439a
    RET                                 ; 004e439b

