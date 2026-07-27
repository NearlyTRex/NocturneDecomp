; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_dimage_cpp_FUN_0044d4f0(undefined4 param_1,uint param_2,uint param_3,uint param_4)
;
;
; XREF[1]:
;   core_dimage.cpp_FUN_0044d550 at 0044d6ea
;
; Referenced Globals:
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d4f0
        ;   Label: core_dimage.cpp_FUN_0044d4f0
    PUSH ESI                            ; 0044d4f1
    PUSH EDI                            ; 0044d4f2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044d4f3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044d4f7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0044d4fb
    MOV ECX,dword ptr [0x01c00628]      ; 0044d4ff | DAT_01c00628
    MOV EAX,EDI                         ; 0044d505
    XOR EDX,EDX                         ; 0044d507
    DIV ECX                             ; 0044d509
    MOV EDI,EAX                         ; 0044d50b
    XOR EDX,EDX                         ; 0044d50d
    MOV EAX,EBX                         ; 0044d50f
    MOV EBX,dword ptr [0x01c00634]      ; 0044d511 | DAT_01c00634
    DIV EBX                             ; 0044d517
    MOV EBX,EAX                         ; 0044d519
    XOR EDX,EDX                         ; 0044d51b
    MOV EAX,ESI                         ; 0044d51d
    DIV dword ptr [0x01c00640]          ; 0044d51f | DAT_01c00640
    MOV CL,byte ptr [0x01c00624]        ; 0044d525 | DAT_01c00624
    SHL EDI,CL                          ; 0044d52b
    MOV CL,byte ptr [0x01c00630]        ; 0044d52d | DAT_01c00630
    SHL EBX,CL                          ; 0044d533
    MOV CL,byte ptr [0x01c0063c]        ; 0044d535 | DAT_01c0063c
    OR EBX,EDI                          ; 0044d53b
    SHL EAX,CL                          ; 0044d53d
    OR EAX,EBX                          ; 0044d53f
    POP EDI                             ; 0044d541
    POP ESI                             ; 0044d542
    POP EBX                             ; 0044d543
    RET                                 ; 0044d544

