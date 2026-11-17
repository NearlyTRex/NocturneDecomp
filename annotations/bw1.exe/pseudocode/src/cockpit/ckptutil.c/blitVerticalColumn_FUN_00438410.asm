; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_00438410(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   unused_param
; int              Stack[0xc]:4   start_x
; int              Stack[0x10]:4   start_y
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_y
;
; Referenced Globals:
;   int g_INT_0061b498 = 0x140
;   int g_INT_0061b4a0 = 0x8
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438410
        ;   Label: cockpit_ckptutil.c_blitVerticalColumn_FUN_00438410
    PUSH ESI                            ; 00438411
    PUSH EDI                            ; 00438412
    PUSH EBP                            ; 00438413
    SUB ESP,0xc                         ; 00438414
    MOV EDI,dword ptr [ESP + 0x28]      ; 00438417
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043841b
    MOV EBP,dword ptr [ESP + 0x34]      ; 0043841f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00438423
    SUB EAX,EDI                         ; 00438427
    INC EAX                             ; 00438429
    MOV EDX,dword ptr [ESP + 0x20]      ; 0043842a
    MOV dword ptr [ESP + 0x4],EAX       ; 0043842e
    TEST EDX,EDX                        ; 00438432
    JNZ 0x00438448                      ; 00438434
        ;   XREF to: 00438448 (CONDITIONAL_JUMP)  ; LAB_00438448
    LEA EAX,[EAX]                       ; 00438436
    LEA EDX,[EDX]                       ; 0043843c
    ADD ESP,0xc                         ; 00438440
        ;   Label: LAB_00438440
    POP EBP                             ; 00438443
    POP EDI                             ; 00438444
    POP ESI                             ; 00438445
    POP EBX                             ; 00438446
    RET                                 ; 00438447
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270 ; 00438448
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_00437270()
        ;   Label: LAB_00438448
    MOV ECX,dword ptr [0x0061b4a0]      ; 0043844d | g_INT_0061b4a0
    MOV dword ptr [ESP + 0x8],EAX       ; 00438453
    LEA EAX,[ESI*0x4 + 0x0]             ; 00438457
    CMP ECX,0x8                         ; 0043845e
    JNZ 0x004384a1                      ; 00438461
        ;   XREF to: 004384a1 (CONDITIONAL_JUMP)  ; LAB_004384a1
    MOV EBX,ESI                         ; 00438463
    CMP ESI,EBP                         ; 00438465
    JGE 0x00438440                      ; 00438467
        ;   XREF to: 00438440 (CONDITIONAL_JUMP)  ; LAB_00438440
    MOV ESI,EAX                         ; 00438469
    MOV EAX,[0x0061b498]                ; 0043846b | g_INT_0061b498
        ;   Label: LAB_0043846b
    IMUL EAX,EBX                        ; 00438470
    MOV EDX,dword ptr [ESP + 0x20]      ; 00438473
    MOV ECX,dword ptr [ESP + 0x4]       ; 00438477
    ADD EAX,EDI                         ; 0043847b
    PUSH ECX                            ; 0043847d
    ADD EDX,EAX                         ; 0043847e
    MOV EAX,dword ptr [ESI + 0x1c4354c] ; 00438480
    PUSH EDX                            ; 00438486
    ADD EAX,EDI                         ; 00438487
    PUSH EAX                            ; 00438489
    ADD ESI,0x4                         ; 0043848a
    INC EBX                             ; 0043848d
    CALL dword ptr [ESP + 0x14]         ; 0043848e
    ADD ESP,0xc                         ; 00438492
    CMP EBX,EBP                         ; 00438495
    JL 0x0043846b                       ; 00438497
        ;   XREF to: 0043846b (CONDITIONAL_JUMP)  ; LAB_0043846b
    ADD ESP,0xc                         ; 00438499
    POP EBP                             ; 0043849c
    POP EDI                             ; 0043849d
    POP ESI                             ; 0043849e
    POP EBX                             ; 0043849f
    RET                                 ; 004384a0
    MOV EBX,ESI                         ; 004384a1
        ;   Label: LAB_004384a1
    CMP ESI,EBP                         ; 004384a3
    JGE 0x00438440                      ; 004384a5
        ;   XREF to: 00438440 (CONDITIONAL_JUMP)  ; LAB_00438440
    LEA EDX,[EDI + EDI*0x1]             ; 004384a7
    MOV ESI,EAX                         ; 004384aa
    MOV dword ptr [ESP],EDX             ; 004384ac
    MOV EAX,[0x0061b498]                ; 004384af | g_INT_0061b498
        ;   Label: LAB_004384af
    IMUL EAX,EBX                        ; 004384b4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004384b7
    ADD EAX,EDI                         ; 004384bb
    MOV ECX,dword ptr [ESP]             ; 004384bd
    ADD EAX,EDX                         ; 004384c0
    MOV EDX,dword ptr [ESI + 0x1c4354c] ; 004384c2
    ADD EDX,ECX                         ; 004384c8
    MOV ECX,dword ptr [ESP + 0x4]       ; 004384ca
    PUSH ECX                            ; 004384ce
    PUSH EAX                            ; 004384cf
    PUSH EDX                            ; 004384d0
    ADD ESI,0x4                         ; 004384d1
    INC EBX                             ; 004384d4
    CALL dword ptr [ESP + 0x14]         ; 004384d5
    ADD ESP,0xc                         ; 004384d9
    CMP EBX,EBP                         ; 004384dc
    JL 0x004384af                       ; 004384de
        ;   XREF to: 004384af (CONDITIONAL_JUMP)  ; LAB_004384af
    ADD ESP,0xc                         ; 004384e0
    POP EBP                             ; 004384e3
    POP EDI                             ; 004384e4
    POP ESI                             ; 004384e5
    POP EBX                             ; 004384e6
    RET                                 ; 004384e7

