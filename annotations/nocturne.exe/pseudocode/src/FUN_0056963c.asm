; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056963c(char *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_00569928 at 00569ba9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056963c
        ;   Label: FUN_0056963c
    PUSH ESI                            ; 0056963d
    PUSH EDI                            ; 0056963e
    PUSH ES                             ; 0056963f
    MOV EDI,dword ptr [ESP + 0x18]      ; 00569640
    MOV EDX,dword ptr [ESP + 0x14]      ; 00569644
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00569648
    MOV ES,DI                           ; 0056964c
    XOR EAX,EAX                         ; 0056964e
    MOV EBX,EDX                         ; 00569650
        ;   Label: LAB_00569650
    MOV CL,byte ptr ES:[EBX]            ; 00569652
    INC EDX                             ; 00569655
    TEST CL,CL                          ; 00569656
    JZ 0x00569462                       ; 00569658
        ;   XREF to: 00569462 (CONDITIONAL_JUMP)  ; LAB_00569462
    CMP EAX,ESI                         ; 0056965e
    JZ 0x00569462                       ; 00569660
        ;   XREF to: 00569462 (CONDITIONAL_JUMP)  ; LAB_00569462
    INC EAX                             ; 00569666
    JMP 0x00569650                      ; 00569667
        ;   XREF to: 00569650 (UNCONDITIONAL_JUMP)  ; LAB_00569650

