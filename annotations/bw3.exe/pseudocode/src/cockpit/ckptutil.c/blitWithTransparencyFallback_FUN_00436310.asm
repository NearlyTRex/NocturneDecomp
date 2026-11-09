; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_00436310(void *src_data,int width,int height,void *background_base,int dest_x,int dest_y)
;
; Parameters:
; void *           Stack[0x4]:4   src_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; void *           Stack[0x10]:4   background_base
; int              Stack[0x14]:4   dest_x
; int              Stack[0x18]:4   dest_y
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436310
        ;   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_00436310
    PUSH ESI                            ; 00436311
    PUSH EDI                            ; 00436312
    PUSH EBP                            ; 00436313
    SUB ESP,0x10                        ; 00436314
    MOV ESI,dword ptr [ESP + 0x28]      ; 00436317
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043631b
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043631f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00436323
    TEST ECX,ECX                        ; 00436327
    JLE 0x00436390                      ; 00436329
        ;   XREF to: 00436390 (CONDITIONAL_JUMP)  ; LAB_00436390
    MOV dword ptr [ESP + 0x4],ESI       ; 0043632b
    IMUL EAX,ESI,0x0                    ; 0043632f
    MOV dword ptr [ESP + 0xc],EDX       ; 00436332
    ADD EDX,ECX                         ; 00436336
    MOV dword ptr [ESP],EDX             ; 00436338
    MOV dword ptr [ESP + 0x8],EAX       ; 0043633b
    XOR EAX,EAX                         ; 0043633f
        ;   Label: LAB_0043633f
    TEST ESI,ESI                        ; 00436341
    JLE 0x00436372                      ; 00436343
        ;   XREF to: 00436372 (CONDITIONAL_JUMP)  ; LAB_00436372
    MOV EDX,dword ptr [ESP + 0x24]      ; 00436345
    MOV ECX,dword ptr [ESP + 0x8]       ; 00436349
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043634d
    ADD EDX,ECX                         ; 00436351
    MOV ECX,dword ptr [0x005fba18]      ; 00436353 | DAT_005fba18
        ;   Label: LAB_00436353
    IMUL ECX,EDI                        ; 00436359
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043635c
    ADD ECX,EAX                         ; 00436360
    ADD ECX,EBX                         ; 00436362
    MOV BL,byte ptr [EDX]               ; 00436364
    ADD ECX,EBP                         ; 00436366
    TEST BL,BL                          ; 00436368
    JZ 0x00436398                       ; 0043636a
        ;   XREF to: 00436398 (CONDITIONAL_JUMP)  ; LAB_00436398
    INC EAX                             ; 0043636c
        ;   Label: LAB_0043636c
    INC EDX                             ; 0043636d
    CMP EAX,ESI                         ; 0043636e
    JL 0x00436353                       ; 00436370
        ;   XREF to: 00436353 (CONDITIONAL_JUMP)  ; LAB_00436353
    MOV EDX,dword ptr [ESP + 0xc]       ; 00436372
        ;   Label: LAB_00436372
    MOV EAX,dword ptr [ESP + 0x4]       ; 00436376
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043637a
    MOV EBX,dword ptr [ESP]             ; 0043637e
    INC EDX                             ; 00436381
    ADD ECX,EAX                         ; 00436382
    MOV dword ptr [ESP + 0xc],EDX       ; 00436384
    MOV dword ptr [ESP + 0x8],ECX       ; 00436388
    CMP EDX,EBX                         ; 0043638c
    JL 0x0043633f                       ; 0043638e
        ;   XREF to: 0043633f (CONDITIONAL_JUMP)  ; LAB_0043633f
    ADD ESP,0x10                        ; 00436390
        ;   Label: LAB_00436390
    POP EBP                             ; 00436393
    POP EDI                             ; 00436394
    POP ESI                             ; 00436395
    POP EBX                             ; 00436396
    RET                                 ; 00436397
    MOV CL,byte ptr [ECX]               ; 00436398
        ;   Label: LAB_00436398
    MOV byte ptr [EDX],CL               ; 0043639a
    JMP 0x0043636c                      ; 0043639c
        ;   XREF to: 0043636c (UNCONDITIONAL_JUMP)  ; LAB_0043636c

