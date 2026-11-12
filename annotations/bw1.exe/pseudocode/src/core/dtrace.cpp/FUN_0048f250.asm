; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048f250(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f250
        ;   Label: core_dtrace.cpp_FUN_0048f250
    PUSH EDI                            ; 0048f251
    PUSH EBP                            ; 0048f252
    SUB ESP,0x10                        ; 0048f253
    MOV ECX,dword ptr [ESP + 0x20]      ; 0048f256
    MOV EBX,dword ptr [ESP + 0x24]      ; 0048f25a
    MOV EBP,ESI                         ; 0048f25e
    MOV ESI,dword ptr [ECX + 0x44]      ; 0048f260
    IMUL ESI,dword ptr [ECX + 0x48]     ; 0048f263
    MOV EDX,EBX                         ; 0048f267
    MOV EAX,EBX                         ; 0048f269
    SAR EDX,0x1f                        ; 0048f26b
    IDIV ESI                            ; 0048f26e
    MOV ESI,EAX                         ; 0048f270
    MOV EAX,dword ptr [ECX + 0x44]      ; 0048f272
    IMUL EAX,ESI                        ; 0048f275
    MOV EDI,dword ptr [ECX + 0x48]      ; 0048f278
    IMUL EAX,EDI                        ; 0048f27b
    SUB EBX,EAX                         ; 0048f27e
    MOV EDX,EBX                         ; 0048f280
    MOV EAX,EBX                         ; 0048f282
    SAR EDX,0x1f                        ; 0048f284
    IDIV EDI                            ; 0048f287
    MOV EDX,EDI                         ; 0048f289
    IMUL EDX,EAX                        ; 0048f28b
    MOV dword ptr [ESP + 0xc],ESI       ; 0048f28e
    FILD dword ptr [ESP + 0xc]          ; 0048f292
    FMUL float ptr [ECX + 0x28]         ; 0048f296
    MOV dword ptr [ESP + 0xc],EAX       ; 0048f299
    FILD dword ptr [ESP + 0xc]          ; 0048f29d
    FMUL float ptr [ECX + 0x2c]         ; 0048f2a1
    SUB EBX,EDX                         ; 0048f2a4
    MOV dword ptr [ESP + 0xc],EBX       ; 0048f2a6
    FXCH                                ; 0048f2aa
    FADD float ptr [ECX + 0x10]         ; 0048f2ac
    FILD dword ptr [ESP + 0xc]          ; 0048f2af
    FMUL float ptr [ECX + 0x30]         ; 0048f2b3
    FXCH                                ; 0048f2b6
    FSTP float ptr [ESP]                ; 0048f2b8
    MOV ESI,ESP                         ; 0048f2bb
    MOV EDI,EBP                         ; 0048f2bd
    FXCH                                ; 0048f2bf
    FADD float ptr [ECX + 0x14]         ; 0048f2c1
    FXCH                                ; 0048f2c4
    FADD float ptr [ECX + 0x18]         ; 0048f2c6
    FXCH                                ; 0048f2c9
    FSTP float ptr [ESP + 0x4]          ; 0048f2cb
    FSTP float ptr [ESP + 0x8]          ; 0048f2cf
    MOVSD ES:EDI,ESI                    ; 0048f2d3
    MOVSD ES:EDI,ESI                    ; 0048f2d4
    MOVSD ES:EDI,ESI                    ; 0048f2d5
    MOV EAX,EBP                         ; 0048f2d6
    ADD ESP,0x10                        ; 0048f2d8
    POP EBP                             ; 0048f2db
    POP EDI                             ; 0048f2dc
    POP EBX                             ; 0048f2dd
    RET                                 ; 0048f2de

