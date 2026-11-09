; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_FUN_0050ce20(CNetGame *this_ptr,SNetworkAddr *addr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   addr
;
; XREF[1]:
;   core_netgame.cpp_FUN_0050c280 at 0050c29c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ce20
        ;   Label: core_netgame.cpp_FUN_0050ce20
    PUSH ESI                            ; 0050ce21
    PUSH EDI                            ; 0050ce22
    PUSH EBP                            ; 0050ce23
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050ce24
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050ce28
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050ce2c
    XOR EDX,EDX                         ; 0050ce2f
    TEST ECX,ECX                        ; 0050ce31
    JLE 0x0050ce55                      ; 0050ce33
        ;   XREF to: 0050ce55 (CONDITIONAL_JUMP)  ; LAB_0050ce55
    LEA EAX,[ESI + 0x3c]                ; 0050ce35
    MOV DI,word ptr [EAX + 0x4]         ; 0050ce38
        ;   Label: LAB_0050ce38
    CMP DI,word ptr [EBX + 0x4]         ; 0050ce3c
    JNZ 0x0050ce48                      ; 0050ce40
        ;   XREF to: 0050ce48 (CONDITIONAL_JUMP)  ; LAB_0050ce48
    MOV EBP,dword ptr [EBX]             ; 0050ce42
    CMP EBP,dword ptr [EAX]             ; 0050ce44
    JZ 0x0050ce5f                       ; 0050ce46
        ;   XREF to: 0050ce5f (CONDITIONAL_JUMP)  ; LAB_0050ce5f
    INC EDX                             ; 0050ce48
        ;   Label: LAB_0050ce48
    MOV EDI,dword ptr [ESI + 0x1c]      ; 0050ce49
    ADD EAX,0x80                        ; 0050ce4c
    CMP EDX,EDI                         ; 0050ce51
    JL 0x0050ce38                       ; 0050ce53
        ;   XREF to: 0050ce38 (CONDITIONAL_JUMP)  ; LAB_0050ce38
    MOV EAX,0xffffffff                  ; 0050ce55
        ;   Label: LAB_0050ce55
    POP EBP                             ; 0050ce5a
    POP EDI                             ; 0050ce5b
    POP ESI                             ; 0050ce5c
    POP EBX                             ; 0050ce5d
    RET                                 ; 0050ce5e
    MOV EAX,EDX                         ; 0050ce5f
        ;   Label: LAB_0050ce5f
    POP EBP                             ; 0050ce61
    POP EDI                             ; 0050ce62
    POP ESI                             ; 0050ce63
    POP EBX                             ; 0050ce64
    RET                                 ; 0050ce65

