; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_2d_c_FUN_004014f0(byte *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006afa3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004014f0
        ;   Label: engine_2d.c_FUN_004014f0
    PUSH ESI                            ; 004014f1
    PUSH EDI                            ; 004014f2
    PUSH EBP                            ; 004014f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004014f4
    MOV EDX,EBP                         ; 004014f8
    XOR EBX,EBX                         ; 004014fa
    XOR ESI,ESI                         ; 004014fc
    MOV EDI,EBP                         ; 004014fe
        ;   Label: LAB_004014fe
    SUB ECX,ECX                         ; 00401500
    DEC ECX                             ; 00401502
    XOR EAX,EAX                         ; 00401503
    SCASB.REPNE ES:EDI                  ; 00401505
    NOT ECX                             ; 00401507
    DEC ECX                             ; 00401509
    CMP EBX,ECX                         ; 0040150a
    JNC 0x0040151f                      ; 0040150c
        ;   XREF to: 0040151f (CONDITIONAL_JUMP)  ; LAB_0040151f
    XOR ECX,ECX                         ; 0040150e
    MOV CL,byte ptr [EDX]               ; 00401510
    INC EDX                             ; 00401512
    MOV EDI,dword ptr [ECX*0x4 + 0x6afa3c] ; 00401513 | DAT_006afa3c
    INC EBX                             ; 0040151a
    ADD ESI,EDI                         ; 0040151b
    JMP 0x004014fe                      ; 0040151d
        ;   XREF to: 004014fe (UNCONDITIONAL_JUMP)  ; LAB_004014fe
    MOV EAX,ESI                         ; 0040151f
        ;   Label: LAB_0040151f
    POP EBP                             ; 00401521
    POP EDI                             ; 00401522
    POP ESI                             ; 00401523
    POP EBX                             ; 00401524
    RET                                 ; 00401525

