; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __callnewh(size_t _Size)
;
; Parameters:
; size_t           Stack[0x4]:4   _Size
;
; XREF[3]:
;   FUN_10008850 at 1000887f
;   FUN_1000a750 at 1000a78c
;   FUN_10011680 at 100116d8
;
; Referenced Globals:
;   undefined4 DAT_10240794
;
; Called Functions:
;   __lock
;   FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH 0x9                            ; 1000ab30
        ;   Label: __callnewh
    CALL __lock                         ; 1000ab32
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000ab37
    MOV EAX,[0x10240794]                ; 1000ab3a | DAT_10240794
    TEST EAX,EAX                        ; 1000ab3f
    JZ 0x1000ab61                       ; 1000ab41
        ;   XREF to: 1000ab61 (CONDITIONAL_JUMP)  ; LAB_1000ab61
    MOV ECX,dword ptr [ESP + 0x4]       ; 1000ab43
    PUSH ECX                            ; 1000ab47
    CALL EAX                            ; 1000ab48
    ADD ESP,0x4                         ; 1000ab4a
    TEST EAX,EAX                        ; 1000ab4d
    JZ 0x1000ab61                       ; 1000ab4f
        ;   XREF to: 1000ab61 (CONDITIONAL_JUMP)  ; LAB_1000ab61
    PUSH 0x9                            ; 1000ab51
    CALL FUN_10005a10                   ; 1000ab53
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000ab58
    MOV EAX,0x1                         ; 1000ab5b
    RET                                 ; 1000ab60
    PUSH 0x9                            ; 1000ab61
        ;   Label: LAB_1000ab61
    CALL FUN_10005a10                   ; 1000ab63
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000ab68
    XOR EAX,EAX                         ; 1000ab6b
    RET                                 ; 1000ab6d

