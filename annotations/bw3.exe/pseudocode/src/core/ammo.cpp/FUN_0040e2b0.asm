; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ammo_cpp_FUN_0040e2b0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005b611d
;   undefined4 DAT_005b6121
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_fire.cpp_FUN_004a3af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e2b0
        ;   Label: core_ammo.cpp_FUN_0040e2b0
    PUSH ESI                            ; 0040e2b1
    PUSH EDI                            ; 0040e2b2
    SUB ESP,0x30                        ; 0040e2b3
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040e2b6
    LEA EAX,[EBX + 0x158]               ; 0040e2ba
    PUSH EAX                            ; 0040e2c0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040e2c1
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e2c6
    FLD float ptr [ESP + 0x44]          ; 0040e2c9
    FMUL float ptr [0x005b611d]         ; 0040e2cd | DAT_005b611d
    PUSH 0x3f866666                     ; 0040e2d3
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040e2d8
    PUSH 0x3f733333                     ; 0040e2de
    LEA ESI,[EAX + -0x1]                ; 0040e2e3
    FSTP float ptr [ESP + 0x2c]         ; 0040e2e6
    CALL core_actor.cpp_FUN_0040ce40    ; 0040e2ea
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x34],EAX      ; 0040e2ef
    FLD float ptr [ESP + 0x34]          ; 0040e2f3
    ADD ESP,0x8                         ; 0040e2f7
    MOV dword ptr [ESP + 0x2c],ESI      ; 0040e2fa
    FMUL float ptr [ESP + 0x24]         ; 0040e2fe
    FILD dword ptr [ESP + 0x2c]         ; 0040e302
    FXCH                                ; 0040e306
    FADD float ptr [EBX + 0x31c]        ; 0040e308
    FXCH                                ; 0040e30e
    FSTP float ptr [ESP + 0x28]         ; 0040e310
    FST float ptr [EBX + 0x31c]         ; 0040e314
    FCOMP float ptr [ESP + 0x28]        ; 0040e31a
    FNSTSW AX                           ; 0040e31e
    SAHF                                ; 0040e320
    JNC 0x0040e38e                      ; 0040e321
        ;   XREF to: 0040e38e (CONDITIONAL_JUMP)  ; LAB_0040e38e
    FLD float ptr [EBX + 0x24]          ; 0040e323
        ;   Label: LAB_0040e323
    MOV EDI,ESP                         ; 0040e326
    LEA ESI,[ESP + 0xc]                 ; 0040e328
    MOV EAX,dword ptr [EBX + 0x20]      ; 0040e32c
    FADD float ptr [0x005b6121]         ; 0040e32f | DAT_005b6121
    MOV dword ptr [ESP + 0xc],EAX       ; 0040e335
    FSTP float ptr [ESP + 0x10]         ; 0040e339
    MOV EAX,dword ptr [EBX + 0x28]      ; 0040e33d
    LEA EBX,[ESP + 0x18]                ; 0040e340
    MOV dword ptr [ESP + 0x14],EAX      ; 0040e344
    MOV EAX,ESP                         ; 0040e348
    MOVSD ES:EDI,ESI                    ; 0040e34a
    MOVSD ES:EDI,ESI                    ; 0040e34b
    MOVSD ES:EDI,ESI                    ; 0040e34c
    CMP EBX,EAX                         ; 0040e34d
    JZ 0x0040e368                       ; 0040e34f
        ;   XREF to: 0040e368 (CONDITIONAL_JUMP)  ; LAB_0040e368
    MOV EAX,dword ptr [ESP]             ; 0040e351
    MOV dword ptr [ESP + 0x18],EAX      ; 0040e354
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e358
    MOV dword ptr [ESP + 0x1c],EAX      ; 0040e35c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e360
    MOV dword ptr [ESP + 0x20],EAX      ; 0040e364
    PUSH 0x4                            ; 0040e368
        ;   Label: LAB_0040e368
    PUSH 0x0                            ; 0040e36a
    PUSH 0x1                            ; 0040e36c
    PUSH 0x2cfd900                      ; 0040e36e
    LEA EAX,[ESP + 0x28]                ; 0040e373
    PUSH EAX                            ; 0040e377
    MOV EDX,dword ptr [0x005fc5a0]      ; 0040e378 | DAT_005fc5a0
    PUSH EDX                            ; 0040e37e
    CALL core_fire.cpp_FUN_004a3af0     ; 0040e37f
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a3af0()
    ADD ESP,0x18                        ; 0040e384
    ADD ESP,0x30                        ; 0040e387
    POP EDI                             ; 0040e38a
    POP ESI                             ; 0040e38b
    POP EBX                             ; 0040e38c
    RET                                 ; 0040e38d
    FLD float ptr [EBX + 0x31c]         ; 0040e38e
        ;   Label: LAB_0040e38e
    FSUB float ptr [ESP + 0x28]         ; 0040e394
    FSTP float ptr [EBX + 0x31c]        ; 0040e398
    JMP 0x0040e323                      ; 0040e39e
        ;   XREF to: 0040e323 (UNCONDITIONAL_JUMP)  ; LAB_0040e323

