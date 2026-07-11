; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056dd80(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_0056af76 at 0056afaa
;   FUN_0056ddc0 at 0056dde4
;
; Referenced Globals:
;   void* PTR_WriteFile_005755ec = 0017613e
;   undefined4 DAT_005c1f54
;
; Called Functions:
;   FUN_005674b0
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dd80
        ;   Label: FUN_0056dd80
    SUB ESP,0x4                         ; 0056dd81
    MOV EAX,dword ptr [ESP + 0xc]       ; 0056dd84
    XOR EDX,EDX                         ; 0056dd88
    JMP 0x0056dd8d                      ; 0056dd8a
        ;   XREF to: 0056dd8d (UNCONDITIONAL_JUMP)  ; LAB_0056dd8d
    INC EDX                             ; 0056dd8c
        ;   Label: LAB_0056dd8c
    MOV EBX,EAX                         ; 0056dd8d
        ;   Label: LAB_0056dd8d
    MOV CL,byte ptr [EBX]               ; 0056dd8f
    INC EAX                             ; 0056dd91
    TEST CL,CL                          ; 0056dd92
    JNZ 0x0056dd8c                      ; 0056dd94
        ;   XREF to: 0056dd8c (CONDITIONAL_JUMP)  ; LAB_0056dd8c
    PUSH 0x0                            ; 0056dd96
    LEA EAX,[ESP + 0x4]                 ; 0056dd98
    PUSH EAX                            ; 0056dd9c
    PUSH EDX                            ; 0056dd9d
    MOV EDX,dword ptr [ESP + 0x18]      ; 0056dd9e
    MOV EAX,[0x005c1f54]                ; 0056dda2 | DAT_005c1f54
    PUSH EDX                            ; 0056dda7
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056dda8
    PUSH EBX                            ; 0056ddab
    CALL dword ptr CS:[0x5755ec]        ; 0056ddac | PTR_WriteFile_005755ec
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056ddb3
    PUSH ECX                            ; 0056ddb7
    JMP 0x005674b0                      ; 0056ddb8
        ;   XREF to: 005674b0 (UNCONDITIONAL_CALL)

