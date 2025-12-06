; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_emitter.cpp_SLaserInfo_copy_FUN_004a9410(SLaserInfo * this_ptr, SLaserInfo * copy)
;
; Parameters:
; SLaserInfo *     Stack[0x4]:4   this_ptr
; SLaserInfo *     Stack[0x8]:4   copy
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9410
        ;   Label: core_emitter.cpp_SLaserInfo_copy_FUN_004a9410
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a9411
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a9415
    MOV ECX,dword ptr [EDX]             ; 004a9419
    MOV dword ptr [EAX],ECX             ; 004a941b
    MOV ECX,dword ptr [EDX + 0x4]       ; 004a941d
    MOV dword ptr [EAX + 0x4],ECX       ; 004a9420
    MOV ECX,dword ptr [EDX + 0x8]       ; 004a9423
    MOV dword ptr [EAX + 0x8],ECX       ; 004a9426
    MOV ECX,dword ptr [EDX + 0xc]       ; 004a9429
    MOV dword ptr [EAX + 0xc],ECX       ; 004a942c
    MOV ECX,dword ptr [EDX + 0x10]      ; 004a942f
    MOV dword ptr [EAX + 0x10],ECX      ; 004a9432
    MOV ECX,dword ptr [EDX + 0x14]      ; 004a9435
    MOV dword ptr [EAX + 0x14],ECX      ; 004a9438
    MOV ECX,dword ptr [EDX + 0x18]      ; 004a943b
    MOV dword ptr [EAX + 0x18],ECX      ; 004a943e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004a9441
    MOV dword ptr [EAX + 0x1c],ECX      ; 004a9444
    LEA ECX,[EAX + 0x20]                ; 004a9447
    LEA EAX,[EDX + 0x20]                ; 004a944a
    MOV EBX,dword ptr [EAX]             ; 004a944d
    MOV dword ptr [ECX],EBX             ; 004a944f
    LEA EBX,[EAX + 0x4]                 ; 004a9451
    ADD ECX,0x4                         ; 004a9454
    MOV EBX,dword ptr [EBX]             ; 004a9457
    MOV dword ptr [ECX],EBX             ; 004a9459
    ADD ECX,0x4                         ; 004a945b
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a945e
    MOV dword ptr [ECX],EAX             ; 004a9461
    LEA EAX,[EDX + 0x2c]                ; 004a9463
    ADD ECX,0x4                         ; 004a9466
    MOV EBX,dword ptr [EAX]             ; 004a9469
    MOV dword ptr [ECX],EBX             ; 004a946b
    LEA EBX,[EAX + 0x4]                 ; 004a946d
    ADD ECX,0x4                         ; 004a9470
    MOV EBX,dword ptr [EBX]             ; 004a9473
    MOV dword ptr [ECX],EBX             ; 004a9475
    ADD ECX,0x4                         ; 004a9477
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a947a
    MOV dword ptr [ECX],EAX             ; 004a947d
    LEA EAX,[EDX + 0x38]                ; 004a947f
    ADD ECX,0x4                         ; 004a9482
    MOV EBX,dword ptr [EAX]             ; 004a9485
    MOV dword ptr [ECX],EBX             ; 004a9487
    LEA EBX,[EAX + 0x4]                 ; 004a9489
    ADD ECX,0x4                         ; 004a948c
    MOV EBX,dword ptr [EBX]             ; 004a948f
    MOV dword ptr [ECX],EBX             ; 004a9491
    ADD ECX,0x4                         ; 004a9493
    MOV EAX,dword ptr [EAX + 0x8]       ; 004a9496
    MOV dword ptr [ECX],EAX             ; 004a9499
    LEA EAX,[ECX + -0x40]               ; 004a949b
    MOV ECX,dword ptr [EDX + 0x44]      ; 004a949e
    MOV dword ptr [EAX + 0x44],ECX      ; 004a94a1
    MOV ECX,dword ptr [EDX + 0x48]      ; 004a94a4
    MOV dword ptr [EAX + 0x48],ECX      ; 004a94a7
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004a94aa
    MOV dword ptr [EAX + 0x4c],ECX      ; 004a94ad
    MOV ECX,dword ptr [EDX + 0x50]      ; 004a94b0
    MOV dword ptr [EAX + 0x50],ECX      ; 004a94b3
    POP EBX                             ; 004a94b6
    RET                                 ; 004a94b7

