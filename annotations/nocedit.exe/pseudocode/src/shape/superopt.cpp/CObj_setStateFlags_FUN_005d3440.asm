; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_superopt_cpp_CObj_setStateFlags_FUN_005d3440(CObj *this_ptr,uint set_mask,uint clear_mask)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   set_mask
; uint             Stack[0xc]:4   clear_mask
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d3440
        ;   Label: shape_superopt.cpp_CObj_setStateFlags_FUN_005d3440
    PUSH ESI                            ; 005d3441
    PUSH EDI                            ; 005d3442
    PUSH EBP                            ; 005d3443
    MOV EDI,dword ptr [ESP + 0x14]      ; 005d3444
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005d3448
    MOV EDX,dword ptr [EDI]             ; 005d344c
    MOV EAX,dword ptr [EDI + 0x4]       ; 005d344e
    XOR EBX,EBX                         ; 005d3451
    TEST EDX,EDX                        ; 005d3453
    JBE 0x005d3480                      ; 005d3455
        ;   XREF to: 005d3480 (CONDITIONAL_JUMP)  ; LAB_005d3480
    MOV ESI,dword ptr [ESP + 0x18]      ; 005d3457
    MOV ECX,dword ptr [EAX + 0x34]      ; 005d345b
        ;   Label: LAB_005d345b
    AND ECX,EBP                         ; 005d345e
    MOV EDX,ECX                         ; 005d3460
    MOV dword ptr [EAX + 0x34],ECX      ; 005d3462
    OR EDX,ESI                          ; 005d3465
    MOV dword ptr [EAX + 0x34],EDX      ; 005d3467
    INC EBX                             ; 005d346a
    MOV ECX,dword ptr [EDI]             ; 005d346b
    ADD EAX,0x38                        ; 005d346d
    CMP EBX,ECX                         ; 005d3470
    JC 0x005d345b                       ; 005d3472
        ;   XREF to: 005d345b (CONDITIONAL_JUMP)  ; LAB_005d345b
    LEA EAX,[EAX]                       ; 005d3474
    LEA EDX,[EDX]                       ; 005d347a
    MOV EAX,dword ptr [EDI + 0x8]       ; 005d3480
        ;   Label: LAB_005d3480
    MOV EBX,dword ptr [EDI + 0xc]       ; 005d3483
    XOR ESI,ESI                         ; 005d3486
    TEST EAX,EAX                        ; 005d3488
    JBE 0x005d34b0                      ; 005d348a
        ;   XREF to: 005d34b0 (CONDITIONAL_JUMP)  ; LAB_005d34b0
    PUSH EBP                            ; 005d348c
        ;   Label: LAB_005d348c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005d348d
    PUSH EDX                            ; 005d3491
    MOV EAX,dword ptr [EBX + 0x64]      ; 005d3492
    PUSH EBX                            ; 005d3495
    INC ESI                             ; 005d3496
    CALL dword ptr [EAX + 0x20]         ; 005d3497
    ADD ESP,0xc                         ; 005d349a
    MOV ECX,dword ptr [EDI + 0x8]       ; 005d349d
    ADD EBX,0x68                        ; 005d34a0
    CMP ESI,ECX                         ; 005d34a3
    JC 0x005d348c                       ; 005d34a5
        ;   XREF to: 005d348c (CONDITIONAL_JUMP)  ; LAB_005d348c
    LEA EAX,[EAX]                       ; 005d34a7
    LEA EDX,[EDX]                       ; 005d34ad
    MOV EBX,dword ptr [EDI + 0x10]      ; 005d34b0
        ;   Label: LAB_005d34b0
    AND EBX,EBP                         ; 005d34b3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d34b5
    MOV ESI,EBX                         ; 005d34b9
    MOV dword ptr [EDI + 0x10],EBX      ; 005d34bb
    OR ESI,EAX                          ; 005d34be
    MOV dword ptr [EDI + 0x10],ESI      ; 005d34c0
    POP EBP                             ; 005d34c3
    POP EDI                             ; 005d34c4
    POP ESI                             ; 005d34c5
    POP EBX                             ; 005d34c6
    RET                                 ; 005d34c7

