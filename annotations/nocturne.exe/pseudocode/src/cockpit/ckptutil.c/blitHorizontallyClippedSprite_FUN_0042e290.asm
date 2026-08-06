; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitHorizontallyClippedSprite_FUN_0042e290(void *sprite_data,int start_x,int dest_y,int end_x,int max_height,int unused_param,int src_y_offset,int src_stride)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   max_height
; int              Stack[0x18]:4   unused_param
; int              Stack[0x1c]:4   src_y_offset
; int              Stack[0x20]:4   src_stride
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01bd2fa4
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042d130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e290
        ;   Label: cockpit_ckptutil.c_blitHorizontallyClippedSprite_FUN_0042e290
    PUSH ESI                            ; 0042e291
    PUSH EDI                            ; 0042e292
    PUSH EBP                            ; 0042e293
    SUB ESP,0x18                        ; 0042e294
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0042e297
    MOV ESI,dword ptr [ESP + 0x30]      ; 0042e29b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0042e29f
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042e2a3
    SUB EAX,ESI                         ; 0042e2a7
    INC EAX                             ; 0042e2a9
    MOV EDX,dword ptr [0x01bd2fa0]      ; 0042e2aa | DAT_01bd2fa0
    MOV dword ptr [ESP + 0x14],EAX      ; 0042e2b0
    MOV EAX,[0x01bd2fa4]                ; 0042e2b4 | DAT_01bd2fa4
    SUB EAX,EDX                         ; 0042e2b9
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e2bb
    TEST EBX,EBX                        ; 0042e2bf
    JNZ 0x0042e2d8                      ; 0042e2c1
        ;   XREF to: 0042e2d8 (CONDITIONAL_JUMP)  ; LAB_0042e2d8
    LEA EAX,[EAX]                       ; 0042e2c3
    LEA EDX,[EDX]                       ; 0042e2c9
    NOP                                 ; 0042e2cf
    ADD ESP,0x18                        ; 0042e2d0
        ;   Label: LAB_0042e2d0
    POP EBP                             ; 0042e2d3
    POP EDI                             ; 0042e2d4
    POP ESI                             ; 0042e2d5
    POP EBX                             ; 0042e2d6
    RET                                 ; 0042e2d7
    CALL cockpit_ckptutil.c_FUN_0042d130 ; 0042e2d8
        ;   XREF to: 0042d130 (UNCONDITIONAL_CALL)  ; ColorConversionFunc * cockpit_ckptutil.c_FUN_0042d130()
        ;   Label: LAB_0042e2d8
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042e2dd
    MOV EBP,EAX                         ; 0042e2e1
    IMUL ECX,dword ptr [ESP + 0x48]     ; 0042e2e3
    MOV EAX,[0x005b761c]                ; 0042e2e8 | g_WindowWidth
    MOV EDX,EAX                         ; 0042e2ed
    SAR EDX,0x1f                        ; 0042e2ef
    SUB EAX,EDX                         ; 0042e2f2
    SAR EAX,0x1                         ; 0042e2f4
    ADD ECX,EBX                         ; 0042e2f6
    ADD EAX,ECX                         ; 0042e2f8
    LEA EBX,[EAX + ESI*0x1]             ; 0042e2fa
    MOV EDX,dword ptr [0x005b7624]      ; 0042e2fd | DAT_005b7624
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042e303
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0042e307
    ADD EAX,EDI                         ; 0042e30b
    SUB ECX,EDI                         ; 0042e30d
    SHL EAX,0x2                         ; 0042e30f
    CMP EDX,0x8                         ; 0042e312
    JNZ 0x0042e35c                      ; 0042e315
        ;   XREF to: 0042e35c (CONDITIONAL_JUMP)  ; LAB_0042e35c
    MOV EDI,dword ptr [EAX + 0x1bd2fa0] ; 0042e317 | DAT_01bd2fa0
    ADD EDI,ESI                         ; 0042e31d
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042e31f
    MOV dword ptr [ESP + 0x8],ECX       ; 0042e323
    CMP ECX,ESI                         ; 0042e327
    JLE 0x0042e2d0                      ; 0042e329
        ;   XREF to: 0042e2d0 (CONDITIONAL_JUMP)  ; LAB_0042e2d0
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042e32b
        ;   Label: LAB_0042e32b
    PUSH ECX                            ; 0042e32f
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042e330
    MOV EAX,EDI                         ; 0042e334
    PUSH EBX                            ; 0042e336
    SUB EAX,EDX                         ; 0042e337
    PUSH EAX                            ; 0042e339
    CALL EBP                            ; 0042e33a
    ADD ESP,0xc                         ; 0042e33c
    INC ESI                             ; 0042e33f
    MOV ECX,dword ptr [ESP + 0x10]      ; 0042e340
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042e344
    MOV EDX,dword ptr [ESP + 0x8]       ; 0042e348
    ADD EDI,ECX                         ; 0042e34c
    ADD EBX,EAX                         ; 0042e34e
    CMP ESI,EDX                         ; 0042e350
    JL 0x0042e32b                       ; 0042e352
        ;   XREF to: 0042e32b (CONDITIONAL_JUMP)  ; LAB_0042e32b
    ADD ESP,0x18                        ; 0042e354
    POP EBP                             ; 0042e357
    POP EDI                             ; 0042e358
    POP ESI                             ; 0042e359
    POP EBX                             ; 0042e35a
    RET                                 ; 0042e35b
    MOV EDI,dword ptr [EAX + 0x1bd2fa0] ; 0042e35c | DAT_01bd2fa0
        ;   Label: LAB_0042e35c
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e362
    MOV EDX,EAX                         ; 0042e366
    SAR EDX,0x1f                        ; 0042e368
    SUB EAX,EDX                         ; 0042e36b
    SAR EAX,0x1                         ; 0042e36d
    MOV dword ptr [ESP + 0x10],EAX      ; 0042e36f
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042e373
    MOV dword ptr [ESP + 0xc],ECX       ; 0042e377
    ADD EAX,EAX                         ; 0042e37b
    ADD ESI,ESI                         ; 0042e37d
    MOV dword ptr [ESP],EAX             ; 0042e37f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042e382
    ADD EDI,ESI                         ; 0042e386
    ADD EAX,EAX                         ; 0042e388
    MOV ESI,dword ptr [ESP + 0x34]      ; 0042e38a
    MOV dword ptr [ESP + 0x4],EAX       ; 0042e38e
    CMP ECX,ESI                         ; 0042e392
    JLE 0x0042e2d0                      ; 0042e394
        ;   XREF to: 0042e2d0 (CONDITIONAL_JUMP)  ; LAB_0042e2d0
    MOV ECX,dword ptr [ESP + 0x14]      ; 0042e39a
        ;   Label: LAB_0042e39a
    PUSH ECX                            ; 0042e39e
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042e39f
    MOV EAX,EDI                         ; 0042e3a3
    PUSH EBX                            ; 0042e3a5
    SUB EAX,EDX                         ; 0042e3a6
    PUSH EAX                            ; 0042e3a8
    CALL EBP                            ; 0042e3a9
    ADD ESP,0xc                         ; 0042e3ab
    INC ESI                             ; 0042e3ae
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042e3af
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042e3b3
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e3b7
    ADD EDI,ECX                         ; 0042e3bb
    ADD EBX,EAX                         ; 0042e3bd
    CMP ESI,EDX                         ; 0042e3bf
    JL 0x0042e39a                       ; 0042e3c1
        ;   XREF to: 0042e39a (CONDITIONAL_JUMP)  ; LAB_0042e39a
    ADD ESP,0x18                        ; 0042e3c3
    POP EBP                             ; 0042e3c6
    POP EDI                             ; 0042e3c7
    POP ESI                             ; 0042e3c8
    POP EBX                             ; 0042e3c9
    RET                                 ; 0042e3ca

