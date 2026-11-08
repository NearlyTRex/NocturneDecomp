; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a32b0(undefined4 *param_1)
;
;
; XREF[23]:
;   FUN_0040b350 at 0040b36b
;   FUN_0040b680 at 0040b6a0
;   FUN_0040bab0 at 0040bacb
;   FUN_0040bba0 at 0040bbc3
;   FUN_0040be30 at 0040be4b
;   FUN_0040bf20 at 0040bf40
;   FUN_0040c0c0 at 0040c0dc
;   FUN_0040d460 at 0040d547
;   FUN_004406e0 at 004406fa
;   FUN_00444970 at 004449a8
;   ... and 13 more
;
; Referenced Globals:
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;
; Called Functions:
;   FUN_005a3380
;   FUN_005a7f44
;   FUN_005a92c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a32b0
        ;   Label: FUN_005a32b0
    PUSH ESI                            ; 005a32b1
    PUSH EDI                            ; 005a32b2
    PUSH EBP                            ; 005a32b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a32b4
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a32b8
    PUSH EDX                            ; 005a32bb
    CALL dword ptr [0x006079a4]         ; 005a32bc | PTR_FUN_006079a4
    MOV ESI,dword ptr [EBX + 0x8]       ; 005a32c2
    MOV ECX,dword ptr [ESI + 0xc]       ; 005a32c5
    ADD ESP,0x4                         ; 005a32c8
    CMP ECX,0x1                         ; 005a32cb
    JZ 0x005a32e9                       ; 005a32ce
        ;   XREF to: 005a32e9 (CONDITIONAL_JUMP)  ; LAB_005a32e9
    TEST ECX,ECX                        ; 005a32d0
    JZ 0x005a32e2                       ; 005a32d2
        ;   XREF to: 005a32e2 (CONDITIONAL_JUMP)  ; LAB_005a32e2
    MOV EBP,dword ptr [EBX + 0x10]      ; 005a32d4
    PUSH EBP                            ; 005a32d7
    MOV ESI,0xffffffff                  ; 005a32d8
    JMP 0x005a336e                      ; 005a32dd
        ;   XREF to: 005a336e (UNCONDITIONAL_JUMP)  ; LAB_005a336e
    MOV dword ptr [ESI + 0xc],0x1       ; 005a32e2
        ;   Label: LAB_005a32e2
    TEST byte ptr [EBX + 0xc],0x1       ; 005a32e9
        ;   Label: LAB_005a32e9
    JNZ 0x005a3309                      ; 005a32ed
        ;   XREF to: 005a3309 (CONDITIONAL_JUMP)  ; LAB_005a3309
    PUSH 0x4                            ; 005a32ef
    CALL FUN_005a92c0                   ; 005a32f1
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    MOV DL,byte ptr [EBX + 0xc]         ; 005a32f6
    MOV ESI,0xffffffff                  ; 005a32f9
    OR DL,0x20                          ; 005a32fe
    ADD ESP,0x4                         ; 005a3301
    MOV byte ptr [EBX + 0xc],DL         ; 005a3304
    JMP 0x005a332a                      ; 005a3307
        ;   XREF to: 005a332a (UNCONDITIONAL_JUMP)  ; LAB_005a332a
    MOV EAX,dword ptr [EBX + 0x4]       ; 005a3309
        ;   Label: LAB_005a3309
    DEC EAX                             ; 005a330c
    MOV dword ptr [EBX + 0x4],EAX       ; 005a330d
    TEST EAX,EAX                        ; 005a3310
    JGE 0x005a3321                      ; 005a3312
        ;   XREF to: 005a3321 (CONDITIONAL_JUMP)  ; LAB_005a3321
    PUSH EBX                            ; 005a3314
    CALL FUN_005a3380                   ; 005a3315
        ;   XREF to: 005a3380 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3380()
    ADD ESP,0x4                         ; 005a331a
    MOV ESI,EAX                         ; 005a331d
    JMP 0x005a332a                      ; 005a331f
        ;   XREF to: 005a332a (UNCONDITIONAL_JUMP)  ; LAB_005a332a
    MOV EAX,dword ptr [EBX]             ; 005a3321
        ;   Label: LAB_005a3321
    INC EAX                             ; 005a3323
    MOVZX ESI,byte ptr [EAX + -0x1]     ; 005a3324
    MOV dword ptr [EBX],EAX             ; 005a3328
    TEST byte ptr [EBX + 0xc],0x40      ; 005a332a
        ;   Label: LAB_005a332a
    JNZ 0x005a336a                      ; 005a332e
        ;   XREF to: 005a336a (CONDITIONAL_JUMP)  ; LAB_005a336a
    CMP ESI,0xd                         ; 005a3330
    JNZ 0x005a3357                      ; 005a3333
        ;   XREF to: 005a3357 (CONDITIONAL_JUMP)  ; LAB_005a3357
    MOV ECX,dword ptr [EBX + 0x4]       ; 005a3335
    DEC ECX                             ; 005a3338
    MOV dword ptr [EBX + 0x4],ECX       ; 005a3339
    TEST ECX,ECX                        ; 005a333c
    JGE 0x005a334d                      ; 005a333e
        ;   XREF to: 005a334d (CONDITIONAL_JUMP)  ; LAB_005a334d
    PUSH EBX                            ; 005a3340
    CALL FUN_005a3380                   ; 005a3341
        ;   XREF to: 005a3380 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3380()
    ADD ESP,0x4                         ; 005a3346
    MOV ESI,EAX                         ; 005a3349
    JMP 0x005a3357                      ; 005a334b
        ;   XREF to: 005a3357 (UNCONDITIONAL_JUMP)  ; LAB_005a3357
    MOV EAX,dword ptr [EBX]             ; 005a334d
        ;   Label: LAB_005a334d
    MOV DL,byte ptr [EAX]               ; 005a334f
    INC EAX                             ; 005a3351
    MOVZX ESI,DL                        ; 005a3352
    MOV dword ptr [EBX],EAX             ; 005a3355
    CMP ESI,0x1a                        ; 005a3357
        ;   Label: LAB_005a3357
    JNZ 0x005a336a                      ; 005a335a
        ;   XREF to: 005a336a (CONDITIONAL_JUMP)  ; LAB_005a336a
    MOV CL,byte ptr [EBX + 0xc]         ; 005a335c
    OR CL,0x10                          ; 005a335f
    MOV ESI,0xffffffff                  ; 005a3362
    MOV byte ptr [EBX + 0xc],CL         ; 005a3367
    MOV EDI,dword ptr [EBX + 0x10]      ; 005a336a
        ;   Label: LAB_005a336a
    PUSH EDI                            ; 005a336d
    CALL dword ptr [0x006079a8]         ; 005a336e | PTR_FUN_006079a8
        ;   Label: LAB_005a336e
    ADD ESP,0x4                         ; 005a3374
    MOV EAX,ESI                         ; 005a3377
    POP EBP                             ; 005a3379
    POP EDI                             ; 005a337a
    POP ESI                             ; 005a337b
    POP EBX                             ; 005a337c
    RET                                 ; 005a337d

