; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_hero_cpp_FUN_004d4230(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4e85
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4230
        ;   Label: core_hero.cpp_FUN_004d4230
    PUSH ESI                            ; 004d4231
    PUSH EDI                            ; 004d4232
    PUSH EBP                            ; 004d4233
    MOV EBP,ESP                         ; 004d4234
    SUB ESP,0xac                        ; 004d4236
    AND ESP,0xfffffff8                  ; 004d423c
    XOR EDX,EDX                         ; 004d423f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d4241
    MOV dword ptr [ESP + 0xa4],EDX      ; 004d4244
    MOV dword ptr [EAX],0x461c3f9a      ; 004d424b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d4251
    MOV dword ptr [ESP + 0xa0],EDX      ; 004d4254
    ADD EAX,0x20                        ; 004d425b
    MOV dword ptr [ESP + 0x98],EDX      ; 004d425e
    MOV dword ptr [ESP + 0xa8],EAX      ; 004d4265
    MOV EAX,[0x00603b28]                ; 004d426c | g_CDemonSetPtr
        ;   Label: LAB_004d426c
    MOV EDX,dword ptr [ESP + 0xa4]      ; 004d4271
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 004d4278
    JL 0x004d429c                       ; 004d427e
        ;   XREF to: 004d429c (CONDITIONAL_JUMP)  ; LAB_004d429c
    CMP dword ptr [ESP + 0x98],0x0      ; 004d4280
    JNZ 0x004d43c1                      ; 004d4288
        ;   XREF to: 004d43c1 (CONDITIONAL_JUMP)  ; LAB_004d43c1
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d428e
    MOV ESP,EBP                         ; 004d4295
    POP EBP                             ; 004d4297
    POP EDI                             ; 004d4298
    POP ESI                             ; 004d4299
    POP EBX                             ; 004d429a
    RET                                 ; 004d429b
    ADD EAX,dword ptr [ESP + 0xa0]      ; 004d429c
        ;   Label: LAB_004d429c
    MOV EBX,dword ptr [EAX + 0x150ff0]  ; 004d42a3
    PUSH EBX                            ; 004d42a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d42aa
    CALL dword ptr [EAX + 0x10c]        ; 004d42b0
    ADD ESP,0x4                         ; 004d42b6
    TEST EAX,EAX                        ; 004d42b9
    JNZ 0x004d439c                      ; 004d42bb
        ;   XREF to: 004d439c (CONDITIONAL_JUMP)  ; LAB_004d439c
    PUSH EBX                            ; 004d42c1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d42c2
    CALL dword ptr [EAX + 0x70]         ; 004d42c8
    ADD ESP,0x4                         ; 004d42cb
    TEST EAX,EAX                        ; 004d42ce
    JNZ 0x004d439c                      ; 004d42d0
        ;   XREF to: 004d439c (CONDITIONAL_JUMP)  ; LAB_004d439c
    PUSH 0x5db0f0                       ; 004d42d6
    PUSH 0xa                            ; 004d42db
    LEA EAX,[ESP + 0x8]                 ; 004d42dd
    PUSH EAX                            ; 004d42e1
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004d42e2
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d42e7
    MOV EDX,ESP                         ; 004d42ea
    PUSH EDX                            ; 004d42ec
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d42ed
    PUSH EBX                            ; 004d42f3
    CALL dword ptr [EAX + 0x54]         ; 004d42f4
    ADD ESP,0x8                         ; 004d42f7
    TEST EAX,EAX                        ; 004d42fa
    JLE 0x004d439c                      ; 004d42fc
        ;   XREF to: 004d439c (CONDITIONAL_JUMP)  ; LAB_004d439c
    MOV EDX,dword ptr [ESP + 0xa8]      ; 004d4302
    LEA EDI,[ESP + 0x84]                ; 004d4309
    LEA ESI,[ESP + 0x78]                ; 004d4310
    LEA EAX,[EBX + 0x20]                ; 004d4314
    FLD float ptr [EDX]                 ; 004d4317
    FLD float ptr [EDX + 0x4]           ; 004d4319
    FLD float ptr [EDX + 0x8]           ; 004d431c
    FXCH ST2                            ; 004d431f
    FSUB float ptr [EAX]                ; 004d4321
    FXCH                                ; 004d4323
    FSUB float ptr [EAX + 0x4]          ; 004d4325
    FXCH ST2                            ; 004d4328
    FSUB float ptr [EAX + 0x8]          ; 004d432a
    FXCH                                ; 004d432d
    FSTP float ptr [ESP + 0x78]         ; 004d432f
    FXCH                                ; 004d4333
    FSTP float ptr [ESP + 0x7c]         ; 004d4335
    FSTP float ptr [ESP + 0x80]         ; 004d4339
    MOVSD ES:EDI,ESI                    ; 004d4340
    MOVSD ES:EDI,ESI                    ; 004d4341
    MOVSD ES:EDI,ESI                    ; 004d4342
    FLD float ptr [ESP + 0x88]          ; 004d4343
    FLD ST0                             ; 004d434a
    FMUL double ptr [0x005c4e85]        ; 004d434c | DAT_005c4e85
    FSTP ST1                            ; 004d4352
    FST float ptr [ESP + 0x88]          ; 004d4354
    FMUL float ptr [ESP + 0x88]         ; 004d435b
    FLD float ptr [ESP + 0x84]          ; 004d4362
    FMUL ST0                            ; 004d4369
    FADDP                               ; 004d436b
    FLD float ptr [ESP + 0x8c]          ; 004d436d
    FMUL ST0                            ; 004d4374
    FADDP                               ; 004d4376
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d4378
    FST float ptr [ESP + 0x9c]          ; 004d437b
    FCOMP float ptr [EAX]               ; 004d4382
    FNSTSW AX                           ; 004d4384
    SAHF                                ; 004d4386
    JNC 0x004d439c                      ; 004d4387
        ;   XREF to: 004d439c (CONDITIONAL_JUMP)  ; LAB_004d439c
    MOV EDX,dword ptr [EBP + 0x18]      ; 004d4389
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004d438c
    MOV dword ptr [ESP + 0x98],EBX      ; 004d4393
    MOV dword ptr [EDX],EAX             ; 004d439a
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004d439c
        ;   Label: LAB_004d439c
    MOV ECX,dword ptr [ESP + 0xa0]      ; 004d43a3
    INC EBX                             ; 004d43aa
    ADD ECX,0x4                         ; 004d43ab
    MOV dword ptr [ESP + 0xa4],EBX      ; 004d43ae
    MOV dword ptr [ESP + 0xa0],ECX      ; 004d43b5
    JMP 0x004d426c                      ; 004d43bc
        ;   XREF to: 004d426c (UNCONDITIONAL_JUMP)  ; LAB_004d426c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d43c1
        ;   Label: LAB_004d43c1
    FLD float ptr [EAX]                 ; 004d43c4
    FSQRT                               ; 004d43c6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004d43c8
    FSTP float ptr [EAX]                ; 004d43cb
    MOV EAX,dword ptr [ESP + 0x98]      ; 004d43cd
    MOV ESP,EBP                         ; 004d43d4
    POP EBP                             ; 004d43d6
    POP EDI                             ; 004d43d7
    POP ESI                             ; 004d43d8
    POP EBX                             ; 004d43d9
    RET                                 ; 004d43da

