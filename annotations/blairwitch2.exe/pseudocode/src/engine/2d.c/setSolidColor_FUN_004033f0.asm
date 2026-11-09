; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setSolidColor_FUN_004033f0(int red_component,int green_component,int blue_component)
;
; Parameters:
; int              Stack[0x4]:4   red_component
; int              Stack[0x8]:4   green_component
; int              Stack[0xc]:4   blue_component
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b5c
;   undefined4 DAT_01c38b60
;   undefined4 DAT_01c38b64
;   undefined4 DAT_01c38b68
;
; Called Functions:
;   engine_special.cpp_setFogColor_FUN_0055fe90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004033f0
        ;   Label: engine_2d.c_setSolidColor_FUN_004033f0
    PUSH ESI                            ; 004033f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004033f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004033f6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004033fa
    MOV dword ptr [0x01c38b64],EBX      ; 004033fe | DAT_01c38b64
    MOV dword ptr [0x01c38b68],EDX      ; 00403404 | DAT_01c38b68
    MOV ESI,EBX                         ; 0040340a
    MOV ECX,EAX                         ; 0040340c
    SHL ESI,0x8                         ; 0040340e
    SHL ECX,0x10                        ; 00403411
    MOV [0x01c38b60],EAX                ; 00403414 | DAT_01c38b60
    OR ECX,ESI                          ; 00403419
    MOV ESI,dword ptr [0x006141c0]      ; 0040341b | DAT_006141c0
    OR ECX,EDX                          ; 00403421
    CMP ESI,0x10                        ; 00403423
    JZ 0x00403453                       ; 00403426
        ;   XREF to: 00403453 (CONDITIONAL_JUMP)  ; LAB_00403453
    CMP ESI,0x20                        ; 00403428
    JNZ 0x00403453                      ; 0040342b
        ;   XREF to: 00403453 (CONDITIONAL_JUMP)  ; LAB_00403453
    PUSH EDI                            ; 0040342d
    MOV CL,byte ptr [0x01c35814]        ; 0040342e | DAT_01c35814
    MOV ESI,EAX                         ; 00403434
    MOV EDI,EBX                         ; 00403436
    SHL ESI,CL                          ; 00403438
    MOV CL,byte ptr [0x01c35820]        ; 0040343a | DAT_01c35820
    SHL EDI,CL                          ; 00403440
    MOV CL,byte ptr [0x01c3582c]        ; 00403442 | DAT_01c3582c
    OR ESI,EDI                          ; 00403448
    MOV EDI,EDX                         ; 0040344a
    SHL EDI,CL                          ; 0040344c
    MOV ECX,EDI                         ; 0040344e
    OR ECX,ESI                          ; 00403450
    POP EDI                             ; 00403452
    MOV dword ptr [0x01c38b5c],ECX      ; 00403453 | DAT_01c38b5c
        ;   Label: LAB_00403453
    CMP dword ptr [0x01c37788],0x0      ; 00403459 | DAT_01c37788
    JNZ 0x00403465                      ; 00403460
        ;   XREF to: 00403465 (CONDITIONAL_JUMP)  ; LAB_00403465
    POP ESI                             ; 00403462
    POP EBX                             ; 00403463
    RET                                 ; 00403464
    PUSH EDX                            ; 00403465
        ;   Label: LAB_00403465
    PUSH EBX                            ; 00403466
    PUSH EAX                            ; 00403467
    CALL engine_special.cpp_setFogColor_FUN_0055fe90 ; 00403468
        ;   XREF to: 0055fe90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setFogColor_FUN_0055fe90(int red, int green, int blue)
    ADD ESP,0xc                         ; 0040346d
    POP ESI                             ; 00403470
    POP EBX                             ; 00403471
    RET                                 ; 00403472

