; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052aa90(void)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DAT_02dc9220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc9220]      ; 0052aa90 | DAT_02dc9220
        ;   Label: FUN_0052aa90
    TEST EDX,EDX                        ; 0052aa96
    JNZ 0x0052aa9b                      ; 0052aa98
        ;   XREF to: 0052aa9b (CONDITIONAL_JUMP)  ; LAB_0052aa9b
    RET                                 ; 0052aa9a
    PUSH 0x0                            ; 0052aa9b
        ;   Label: LAB_0052aa9b
    FLD double ptr [ESP + 0x34]         ; 0052aa9d
    MOV EAX,EDX                         ; 0052aaa1
    SUB ESP,0x4                         ; 0052aaa3
    MOV EDX,dword ptr [EDX]             ; 0052aaa6
    FSTP float ptr [ESP]                ; 0052aaa8
    FLD double ptr [ESP + 0x30]         ; 0052aaab
    SUB ESP,0x4                         ; 0052aaaf
    FSTP float ptr [ESP]                ; 0052aab2
    FLD double ptr [ESP + 0x2c]         ; 0052aab5
    SUB ESP,0x4                         ; 0052aab9
    FSTP float ptr [ESP]                ; 0052aabc
    FLD double ptr [ESP + 0x58]         ; 0052aabf
    SUB ESP,0x4                         ; 0052aac3
    FSTP float ptr [ESP]                ; 0052aac6
    FLD double ptr [ESP + 0x54]         ; 0052aac9
    SUB ESP,0x4                         ; 0052aacd
    FSTP float ptr [ESP]                ; 0052aad0
    FLD double ptr [ESP + 0x50]         ; 0052aad3
    SUB ESP,0x4                         ; 0052aad7
    FSTP float ptr [ESP]                ; 0052aada
    PUSH EAX                            ; 0052aadd
    CALL dword ptr [EDX + 0x34]         ; 0052aade
    RET                                 ; 0052aae1

