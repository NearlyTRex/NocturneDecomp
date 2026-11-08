; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005acda0(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[2]:
;   FUN_005a6144 at 005a6178
;   FUN_005acde0 at 005ace04
;
; Referenced Globals:
;   void* PTR_WriteFile_005b368c = 001b430e
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   FUN_005a8210
;   WriteFile
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acda0
        ;   Label: FUN_005acda0
    SUB ESP,0x4                         ; 005acda1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005acda4
    XOR EDX,EDX                         ; 005acda8
    JMP 0x005acdad                      ; 005acdaa
        ;   XREF to: 005acdad (UNCONDITIONAL_JUMP)  ; LAB_005acdad
    INC EDX                             ; 005acdac
        ;   Label: LAB_005acdac
    MOV EBX,EAX                         ; 005acdad
        ;   Label: LAB_005acdad
    MOV CL,byte ptr [EBX]               ; 005acdaf
    INC EAX                             ; 005acdb1
    TEST CL,CL                          ; 005acdb2
    JNZ 0x005acdac                      ; 005acdb4
        ;   XREF to: 005acdac (CONDITIONAL_JUMP)  ; LAB_005acdac
    PUSH 0x0                            ; 005acdb6
    LEA EAX,[ESP + 0x4]                 ; 005acdb8
    PUSH EAX                            ; 005acdbc
    PUSH EDX                            ; 005acdbd
    MOV EDX,dword ptr [ESP + 0x18]      ; 005acdbe
    MOV EAX,[0x00607bdc]                ; 005acdc2 | DAT_00607bdc
    PUSH EDX                            ; 005acdc7
    MOV EBX,dword ptr [EAX + 0x8]       ; 005acdc8
    PUSH EBX                            ; 005acdcb
    CALL dword ptr CS:[0x5b368c]        ; 005acdcc | PTR_WriteFile_005b368c
    MOV ECX,dword ptr [ESP + 0x10]      ; 005acdd3
    PUSH ECX                            ; 005acdd7
    JMP 0x005a8210                      ; 005acdd8
        ;   XREF to: 005a8210 (UNCONDITIONAL_CALL)

