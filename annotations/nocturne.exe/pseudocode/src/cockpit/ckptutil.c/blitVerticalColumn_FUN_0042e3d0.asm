; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitVerticalColumn_FUN_0042e3d0(void *sprite_data,void *unused_param,int start_x,int start_y,int end_x,int end_y)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   unused_param
; int              Stack[0xc]:4   start_x
; int              Stack[0x10]:4   start_y
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_y
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;
; Called Functions:
;   cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e3d0
        ;   Label: cockpit_ckptutil.c_blitVerticalColumn_FUN_0042e3d0
    PUSH ESI                            ; 0042e3d1
    PUSH EDI                            ; 0042e3d2
    PUSH EBP                            ; 0042e3d3
    SUB ESP,0xc                         ; 0042e3d4
    MOV EDI,dword ptr [ESP + 0x28]      ; 0042e3d7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0042e3db
    MOV EBP,dword ptr [ESP + 0x34]      ; 0042e3df
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042e3e3
    SUB EAX,EDI                         ; 0042e3e7
    INC EAX                             ; 0042e3e9
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e3ea
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e3ee
    TEST EDX,EDX                        ; 0042e3f2
    JNZ 0x0042e408                      ; 0042e3f4
        ;   XREF to: 0042e408 (CONDITIONAL_JUMP)  ; LAB_0042e408
    LEA EAX,[EAX]                       ; 0042e3f6
    LEA EDX,[EDX]                       ; 0042e3fc
    ADD ESP,0xc                         ; 0042e400
        ;   Label: LAB_0042e400
    POP EBP                             ; 0042e403
    POP EDI                             ; 0042e404
    POP ESI                             ; 0042e405
    POP EBX                             ; 0042e406
    RET                                 ; 0042e407
    CALL cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130 ; 0042e408
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_getColorConversionFunction_FUN_0042d130()
        ;   Label: LAB_0042e408
    MOV ECX,dword ptr [0x005b7624]      ; 0042e40d | g_BitsPerPixel
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e413
    LEA EAX,[ESI*0x4 + 0x0]             ; 0042e417
    CMP ECX,0x8                         ; 0042e41e
    JNZ 0x0042e461                      ; 0042e421
        ;   XREF to: 0042e461 (CONDITIONAL_JUMP)  ; LAB_0042e461
    MOV EBX,ESI                         ; 0042e423
    CMP ESI,EBP                         ; 0042e425
    JGE 0x0042e400                      ; 0042e427
        ;   XREF to: 0042e400 (CONDITIONAL_JUMP)  ; LAB_0042e400
    MOV ESI,EAX                         ; 0042e429
    MOV EAX,[0x005b761c]                ; 0042e42b | g_WindowWidth
        ;   Label: LAB_0042e42b
    IMUL EAX,EBX                        ; 0042e430
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e433
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042e437
    ADD EAX,EDI                         ; 0042e43b
    PUSH ECX                            ; 0042e43d
    ADD EDX,EAX                         ; 0042e43e
    MOV EAX,dword ptr [ESI + 0x1bd2fa0] ; 0042e440 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    PUSH EDX                            ; 0042e446
    ADD EAX,EDI                         ; 0042e447
    PUSH EAX                            ; 0042e449
    ADD ESI,0x4                         ; 0042e44a
    INC EBX                             ; 0042e44d
    CALL dword ptr [ESP + 0x14]         ; 0042e44e
    ADD ESP,0xc                         ; 0042e452
    CMP EBX,EBP                         ; 0042e455
    JL 0x0042e42b                       ; 0042e457
        ;   XREF to: 0042e42b (CONDITIONAL_JUMP)  ; LAB_0042e42b
    ADD ESP,0xc                         ; 0042e459
    POP EBP                             ; 0042e45c
    POP EDI                             ; 0042e45d
    POP ESI                             ; 0042e45e
    POP EBX                             ; 0042e45f
    RET                                 ; 0042e460
    MOV EBX,ESI                         ; 0042e461
        ;   Label: LAB_0042e461
    CMP ESI,EBP                         ; 0042e463
    JGE 0x0042e400                      ; 0042e465
        ;   XREF to: 0042e400 (CONDITIONAL_JUMP)  ; LAB_0042e400
    LEA EDX,[EDI + EDI*0x1]             ; 0042e467
    MOV ESI,EAX                         ; 0042e46a
    MOV dword ptr [ESP],EDX             ; 0042e46c
    MOV EAX,[0x005b761c]                ; 0042e46f | g_WindowWidth
        ;   Label: LAB_0042e46f
    IMUL EAX,EBX                        ; 0042e474
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042e477
    ADD EAX,EDI                         ; 0042e47b
    MOV ECX,dword ptr [ESP]             ; 0042e47d
    ADD EAX,EDX                         ; 0042e480
    MOV EDX,dword ptr [ESI + 0x1bd2fa0] ; 0042e482 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EDX,ECX                         ; 0042e488
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042e48a
    PUSH ECX                            ; 0042e48e
    PUSH EAX                            ; 0042e48f
    PUSH EDX                            ; 0042e490
    ADD ESI,0x4                         ; 0042e491
    INC EBX                             ; 0042e494
    CALL dword ptr [ESP + 0x14]         ; 0042e495
    ADD ESP,0xc                         ; 0042e499
    CMP EBX,EBP                         ; 0042e49c
    JL 0x0042e46f                       ; 0042e49e
        ;   XREF to: 0042e46f (CONDITIONAL_JUMP)  ; LAB_0042e46f
    ADD ESP,0xc                         ; 0042e4a0
    POP EBP                             ; 0042e4a3
    POP EDI                             ; 0042e4a4
    POP ESI                             ; 0042e4a5
    POP EBX                             ; 0042e4a6
    RET                                 ; 0042e4a7

