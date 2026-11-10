; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_netgame_cpp_CNetGame_findPlayerByAddr_FUN_00505900(CNetGame *this_ptr,SNetworkAddr *addr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
; SNetworkAddr *   Stack[0x8]:4   addr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_processPacket_FUN_00504d60 at 00504d7c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505900
        ;   Label: core_netgame.cpp_CNetGame_findPlayerByAddr_FUN_00505900
    PUSH ESI                            ; 00505901
    PUSH EDI                            ; 00505902
    PUSH EBP                            ; 00505903
    MOV ESI,dword ptr [ESP + 0x14]      ; 00505904
    MOV EBX,dword ptr [ESP + 0x18]      ; 00505908
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0050590c
    XOR EDX,EDX                         ; 0050590f
    TEST ECX,ECX                        ; 00505911
    JLE 0x00505935                      ; 00505913
        ;   XREF to: 00505935 (CONDITIONAL_JUMP)  ; LAB_00505935
    LEA EAX,[ESI + 0x3c]                ; 00505915
    MOV DI,word ptr [EAX + 0x4]         ; 00505918
        ;   Label: LAB_00505918
    CMP DI,word ptr [EBX + 0x4]         ; 0050591c
    JNZ 0x00505928                      ; 00505920
        ;   XREF to: 00505928 (CONDITIONAL_JUMP)  ; LAB_00505928
    MOV EBP,dword ptr [EBX]             ; 00505922
    CMP EBP,dword ptr [EAX]             ; 00505924
    JZ 0x0050593f                       ; 00505926
        ;   XREF to: 0050593f (CONDITIONAL_JUMP)  ; LAB_0050593f
    INC EDX                             ; 00505928
        ;   Label: LAB_00505928
    MOV EDI,dword ptr [ESI + 0x1c]      ; 00505929
    ADD EAX,0x80                        ; 0050592c
    CMP EDX,EDI                         ; 00505931
    JL 0x00505918                       ; 00505933
        ;   XREF to: 00505918 (CONDITIONAL_JUMP)  ; LAB_00505918
    MOV EAX,0xffffffff                  ; 00505935
        ;   Label: LAB_00505935
    POP EBP                             ; 0050593a
    POP EDI                             ; 0050593b
    POP ESI                             ; 0050593c
    POP EBX                             ; 0050593d
    RET                                 ; 0050593e
    MOV EAX,EDX                         ; 0050593f
        ;   Label: LAB_0050593f
    POP EBP                             ; 00505941
    POP EDI                             ; 00505942
    POP ESI                             ; 00505943
    POP EBX                             ; 00505944
    RET                                 ; 00505945

