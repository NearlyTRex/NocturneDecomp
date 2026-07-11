; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056ef24(void)
;
;
; XREF[2]:
;   FUN_005674b0 at 005674d4
;   FUN_00573fc8 at 00573fce
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005671dc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1abc]         ; 0056ef24 | PTR_FUN_005c1abc
        ;   Label: FUN_0056ef24
    MOV EAX,dword ptr [EAX + 0x54]      ; 0056ef2a
    TEST EAX,EAX                        ; 0056ef2d
    JZ 0x0056ef38                       ; 0056ef2f
        ;   XREF to: 0056ef38 (CONDITIONAL_JUMP)  ; LAB_0056ef38
    MOV EAX,dword ptr [EAX]             ; 0056ef31
    XOR EDX,EDX                         ; 0056ef33
    MOV dword ptr FS:[EDX],EAX          ; 0056ef35
    CALL dword ptr [0x005c1abc]         ; 0056ef38 | PTR_FUN_005c1abc
        ;   Label: LAB_0056ef38
    MOV dword ptr [EAX + 0x54],0x0      ; 0056ef3e
    RET                                 ; 0056ef45

