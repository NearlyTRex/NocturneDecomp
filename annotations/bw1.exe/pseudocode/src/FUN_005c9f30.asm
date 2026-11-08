; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c9f30(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_005c32d4 at 005c3308
;   FUN_005c9f70 at 005c9f94
;
; Referenced Globals:
;   void* PTR_WriteFile_005d068c = 001d1308
;   undefined4 DAT_00626838
;
; Called Functions:
;   FUN_005c53a0
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9f30
        ;   Label: FUN_005c9f30
    SUB ESP,0x4                         ; 005c9f31
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c9f34
    XOR EDX,EDX                         ; 005c9f38
    JMP 0x005c9f3d                      ; 005c9f3a
        ;   XREF to: 005c9f3d (UNCONDITIONAL_JUMP)  ; LAB_005c9f3d
    INC EDX                             ; 005c9f3c
        ;   Label: LAB_005c9f3c
    MOV EBX,EAX                         ; 005c9f3d
        ;   Label: LAB_005c9f3d
    MOV CL,byte ptr [EBX]               ; 005c9f3f
    INC EAX                             ; 005c9f41
    TEST CL,CL                          ; 005c9f42
    JNZ 0x005c9f3c                      ; 005c9f44
        ;   XREF to: 005c9f3c (CONDITIONAL_JUMP)  ; LAB_005c9f3c
    PUSH 0x0                            ; 005c9f46
    LEA EAX,[ESP + 0x4]                 ; 005c9f48
    PUSH EAX                            ; 005c9f4c
    PUSH EDX                            ; 005c9f4d
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c9f4e
    MOV EAX,[0x00626838]                ; 005c9f52 | DAT_00626838
    PUSH EDX                            ; 005c9f57
    MOV EBX,dword ptr [EAX + 0x8]       ; 005c9f58
    PUSH EBX                            ; 005c9f5b
    CALL dword ptr CS:[0x5d068c]        ; 005c9f5c | PTR_WriteFile_005d068c
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c9f63
    PUSH ECX                            ; 005c9f67
    JMP 0x005c53a0                      ; 005c9f68
        ;   XREF to: 005c53a0 (UNCONDITIONAL_CALL)

