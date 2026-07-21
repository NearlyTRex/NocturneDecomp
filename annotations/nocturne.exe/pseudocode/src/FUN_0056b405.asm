; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0056b405(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   crt_strstream.cpp_istrstream_ctor_FUN_00564f32 at 00564f4c
;   crt_strstream.cpp_ostrstream_ctor_FUN_00564d92 at 00564dd1
;
; Referenced Globals:
;   undefined1* PTR_FUN_005a4884 = 0056ff82
;   undefined4 DAT_005a48b0
;   void* PTR_FUN_005a48bc = 0056b5ad
;   void* PTR_FUN_005a48c4 = 0056b491
;
; Called Functions:
;   FUN_0056b503
;   FUN_0056fe12
;   FUN_0056fe65
;   FUN_0056ff2a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b405
        ;   Label: FUN_0056b405
    PUSH ESI                            ; 0056b406
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056b407
    TEST byte ptr [ESP + 0x10],0x1      ; 0056b40b
    JZ 0x0056b47a                       ; 0056b410
        ;   XREF to: 0056b47a (CONDITIONAL_JUMP)  ; LAB_0056b47a
    ADD EBX,0x4                         ; 0056b412
        ;   Label: LAB_0056b412
    PUSH EBX                            ; 0056b415
    CALL FUN_0056fe12                   ; 0056b416
        ;   XREF to: 0056fe12 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fe12()
    ADD ESP,0x4                         ; 0056b41b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056b41e
    PUSH EDX                            ; 0056b422
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056b423
    PUSH ECX                            ; 0056b427
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056b428
    PUSH ESI                            ; 0056b42c
    MOV EBX,EAX                         ; 0056b42d
    PUSH EAX                            ; 0056b42f
    SUB EBX,0x4                         ; 0056b430
    MOV dword ptr [EAX + 0x28],0x5a4884 ; 0056b433 | PTR_FUN_005a4884
    CALL FUN_0056fe65                   ; 0056b43a
        ;   XREF to: 0056fe65 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fe65()
    MOV EAX,dword ptr [EBX]             ; 0056b43f
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b441
    LEA EDX,[EBX + EAX*0x1]             ; 0056b444
    MOV dword ptr [EDX + -0x4],EAX      ; 0056b447
    MOV EAX,dword ptr [EBX]             ; 0056b44a
    MOV dword ptr [EBX + 0x44],0x5a48bc ; 0056b44c | PTR_FUN_005a48bc
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b453
    ADD ESP,0x10                        ; 0056b456
    MOV dword ptr [EBX + EAX*0x1 + 0x28],0x5a48c4 ; 0056b459 | PTR_FUN_005a48c4
    LEA EAX,[EBX + 0x4]                 ; 0056b461
    PUSH EAX                            ; 0056b464
    MOV EAX,dword ptr [EBX]             ; 0056b465
    MOV EAX,dword ptr [EAX + 0x4]       ; 0056b467
    ADD EAX,EBX                         ; 0056b46a
    PUSH EAX                            ; 0056b46c
    CALL FUN_0056ff2a                   ; 0056b46d
        ;   XREF to: 0056ff2a (UNCONDITIONAL_CALL)  ; undefined FUN_0056ff2a()
    ADD ESP,0x8                         ; 0056b472
    MOV EAX,EBX                         ; 0056b475
    POP ESI                             ; 0056b477
    POP EBX                             ; 0056b478
    RET                                 ; 0056b479
    MOV dword ptr [EBX],0x5a48b0        ; 0056b47a | DAT_005a48b0
        ;   Label: LAB_0056b47a
    ADD EBX,0x4c                        ; 0056b480
    PUSH EBX                            ; 0056b483
    CALL FUN_0056b503                   ; 0056b484
        ;   XREF to: 0056b503 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b503()
    ADD ESP,0x4                         ; 0056b489
    LEA EBX,[EAX + -0x4c]               ; 0056b48c
    JMP 0x0056b412                      ; 0056b48f
        ;   XREF to: 0056b412 (UNCONDITIONAL_JUMP)  ; LAB_0056b412

