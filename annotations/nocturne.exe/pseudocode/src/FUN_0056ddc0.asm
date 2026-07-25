; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ddc0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_00566f98 at 00566fa2
;   FUN_005670e0 at 005670e8
;   FUN_0056ad3f at 0056ad46
;   FUN_0056ddf0 at 0056de40
;   FUN_0056e254 at 0056e299
;   FUN_0056f0f0 at 0056f0f7
;   FUN_00571170 at 0057119b
;   FUN_005711a8 at 005711f4
;
; Called Functions:
;   FUN_0056dd80
;   FUN_0056fca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ddc0
        ;   Label: FUN_0056ddc0
    MOV AX,DS                           ; 0056ddc1
    AND EAX,0xffff                      ; 0056ddc3
    PUSH EAX                            ; 0056ddc8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056ddc9
    PUSH EDX                            ; 0056ddcd
    CALL FUN_0056fca0                   ; 0056ddce
        ;   XREF to: 0056fca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fca0()
    ADD ESP,0x8                         ; 0056ddd3
    TEST EAX,EAX                        ; 0056ddd6
    JNZ 0x0056ddec                      ; 0056ddd8
        ;   XREF to: 0056ddec (CONDITIONAL_JUMP)  ; LAB_0056ddec
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056ddda
    PUSH EBX                            ; 0056ddde
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056dddf
    PUSH ECX                            ; 0056dde3
    CALL FUN_0056dd80                   ; 0056dde4
        ;   XREF to: 0056dd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dd80()
    ADD ESP,0x8                         ; 0056dde9
    POP EBX                             ; 0056ddec
        ;   Label: LAB_0056ddec
    RET                                 ; 0056dded

