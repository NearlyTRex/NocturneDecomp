; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1be0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_005bb007 at 005bb03b
;   FUN_005c1c20 at 005c1c44
;
; Referenced Globals:
;   void* PTR_WriteFile_005c8678 = 001c92cc
;   undefined4 DAT_0061f4d8
;
; Called Functions:
;   FUN_005bd0d0
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1be0
        ;   Label: FUN_005c1be0
    SUB ESP,0x4                         ; 005c1be1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c1be4
    XOR EDX,EDX                         ; 005c1be8
    JMP 0x005c1bed                      ; 005c1bea
        ;   XREF to: 005c1bed (UNCONDITIONAL_JUMP)  ; LAB_005c1bed
    INC EDX                             ; 005c1bec
        ;   Label: LAB_005c1bec
    MOV EBX,EAX                         ; 005c1bed
        ;   Label: LAB_005c1bed
    MOV CL,byte ptr [EBX]               ; 005c1bef
    INC EAX                             ; 005c1bf1
    TEST CL,CL                          ; 005c1bf2
    JNZ 0x005c1bec                      ; 005c1bf4
        ;   XREF to: 005c1bec (CONDITIONAL_JUMP)  ; LAB_005c1bec
    PUSH 0x0                            ; 005c1bf6
    LEA EAX,[ESP + 0x4]                 ; 005c1bf8
    PUSH EAX                            ; 005c1bfc
    PUSH EDX                            ; 005c1bfd
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c1bfe
    MOV EAX,[0x0061f4d8]                ; 005c1c02 | DAT_0061f4d8
    PUSH EDX                            ; 005c1c07
    MOV EBX,dword ptr [EAX + 0x8]       ; 005c1c08
    PUSH EBX                            ; 005c1c0b
    CALL dword ptr CS:[0x5c8678]        ; 005c1c0c | PTR_WriteFile_005c8678
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c1c13
    PUSH ECX                            ; 005c1c17
    JMP 0x005bd0d0                      ; 005c1c18
        ;   XREF to: 005bd0d0 (UNCONDITIONAL_CALL)

